   1              		.file	"Fl_Shared_Image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN15Fl_Shared_Image13color_averageEjf,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN15Fl_Shared_Image13color_averageEjf,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN15Fl_Shared_Image13color_averageEjf
  12              	.Ltext_cold0:
  13              		.section	.text._ZN15Fl_Shared_Image13color_averageEjf
  14              		.globl	_ZN15Fl_Shared_Image13color_averageEjf
  16              	_ZN15Fl_Shared_Image13color_averageEjf:
  17              	.LFB505:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_Shared_Image.cxx"
   1:fltk-1.3.4-1/src/Fl_Shared_Image.cxx **** ...
  19              		.loc 1 346 0
  20              		.cfi_startproc
  21              	.LVL0:
  22 0000 53       		pushq	%rbx
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 3, -16
  25              		.loc 1 346 0
  26 0001 4889FB   		movq	%rdi, %rbx
  27              		.loc 1 347 0
  28 0004 488B7F38 		movq	56(%rdi), %rdi
  29              	.LVL1:
  30 0008 4885FF   		testq	%rdi, %rdi
  31 000b 742F     		je	.L1
  32              		.loc 1 349 0
  33 000d 488B07   		movq	(%rdi), %rax
  34 0010 FF5018   		call	*24(%rax)
  35              	.LVL2:
  36              	.LBB158:
  37              	.LBB159:
  38              		.loc 1 200 0
  39 0013 488B4338 		movq	56(%rbx), %rax
  40 0017 4885C0   		testq	%rax, %rax
  41 001a 7420     		je	.L1
  42 001c 8B5008   		movl	8(%rax), %edx
  43              	.LVL3:
  44              	.LBB160:
  45              	.LBB161:
  46              		.file 2 "fltk-1.3.4-1/FL/Fl_Image.H"
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
  47              		.loc 2 76 0
  48 001f 895308   		movl	%edx, 8(%rbx)
  49 0022 8B500C   		movl	12(%rax), %edx
  50              	.LVL4:
  51              	.LBE161:
  52              	.LBE160:
  53              	.LBB162:
  54              	.LBB163:
  77:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  78:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image height in pixels.
  79:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   void h(int H) {h_ = H;}
  55              		.loc 2 80 0
  56 0025 89530C   		movl	%edx, 12(%rbx)
  57 0028 8B5010   		movl	16(%rax), %edx
  58              	.LVL5:
  59              	.LBE163:
  60              	.LBE162:
  61              	.LBB164:
  62              	.LBB165:
  81:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  82:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image depth.
  83:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   void d(int D) {d_ = D;}
  63              		.loc 2 84 0
  64 002b 895310   		movl	%edx, 16(%rbx)
  65 002e 8B5018   		movl	24(%rax), %edx
  66              	.LVL6:
  67 0031 488B4020 		movq	32(%rax), %rax
  68              	.LVL7:
  69              	.LBE165:
  70              	.LBE164:
  71              	.LBB166:
  72              	.LBB167:
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
  73              		.loc 2 100 0
  74 0035 895318   		movl	%edx, 24(%rbx)
  75 0038 48894320 		movq	%rax, 32(%rbx)
  76              	.LVL8:
  77              	.L1:
  78              	.LBE167:
  79              	.LBE166:
  80              	.LBE159:
  81              	.LBE158:
  82              		.loc 1 351 0
  83 003c 5B       		popq	%rbx
  84              		.cfi_def_cfa_offset 8
  85              	.LVL9:
  86 003d C3       		ret
  87              		.cfi_endproc
  88              	.LFE505:
  90              		.section	.text.unlikely._ZN15Fl_Shared_Image13color_averageEjf
  91              	.LCOLDE0:
  92              		.section	.text._ZN15Fl_Shared_Image13color_averageEjf
  93              	.LHOTE0:
  94              		.section	.text.unlikely._ZN15Fl_Shared_Image10desaturateEv,"ax",@progbits
  95              		.align 2
  96              	.LCOLDB1:
  97              		.section	.text._ZN15Fl_Shared_Image10desaturateEv,"ax",@progbits
  98              	.LHOTB1:
  99              		.align 2
 100              		.p2align 4,,15
 101              		.globl	_ZN15Fl_Shared_Image10desaturateEv
 103              	_ZN15Fl_Shared_Image10desaturateEv:
 104              	.LFB506:
 105              		.loc 1 359 0
 106              		.cfi_startproc
 107              	.LVL10:
 108 0000 53       		pushq	%rbx
 109              		.cfi_def_cfa_offset 16
 110              		.cfi_offset 3, -16
 111              		.loc 1 359 0
 112 0001 4889FB   		movq	%rdi, %rbx
 113              		.loc 1 360 0
 114 0004 488B7F38 		movq	56(%rdi), %rdi
 115              	.LVL11:
 116 0008 4885FF   		testq	%rdi, %rdi
 117 000b 742F     		je	.L10
 118              		.loc 1 362 0
 119 000d 488B07   		movq	(%rdi), %rax
 120 0010 FF5020   		call	*32(%rax)
 121              	.LVL12:
 122              	.LBB168:
 123              	.LBB169:
 124              		.loc 1 200 0
 125 0013 488B4338 		movq	56(%rbx), %rax
 126 0017 4885C0   		testq	%rax, %rax
 127 001a 7420     		je	.L10
 128 001c 8B5008   		movl	8(%rax), %edx
 129              	.LVL13:
 130              	.LBB170:
 131              	.LBB171:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 132              		.loc 2 76 0
 133 001f 895308   		movl	%edx, 8(%rbx)
 134 0022 8B500C   		movl	12(%rax), %edx
 135              	.LVL14:
 136              	.LBE171:
 137              	.LBE170:
 138              	.LBB172:
 139              	.LBB173:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 140              		.loc 2 80 0
 141 0025 89530C   		movl	%edx, 12(%rbx)
 142 0028 8B5010   		movl	16(%rax), %edx
 143              	.LVL15:
 144              	.LBE173:
 145              	.LBE172:
 146              	.LBB174:
 147              	.LBB175:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 148              		.loc 2 84 0
 149 002b 895310   		movl	%edx, 16(%rbx)
 150 002e 8B5018   		movl	24(%rax), %edx
 151              	.LVL16:
 152 0031 488B4020 		movq	32(%rax), %rax
 153              	.LVL17:
 154              	.LBE175:
 155              	.LBE174:
 156              	.LBB176:
 157              	.LBB177:
 158              		.loc 2 100 0
 159 0035 895318   		movl	%edx, 24(%rbx)
 160 0038 48894320 		movq	%rax, 32(%rbx)
 161              	.LVL18:
 162              	.L10:
 163              	.LBE177:
 164              	.LBE176:
 165              	.LBE169:
 166              	.LBE168:
 167              		.loc 1 364 0
 168 003c 5B       		popq	%rbx
 169              		.cfi_def_cfa_offset 8
 170              	.LVL19:
 171 003d C3       		ret
 172              		.cfi_endproc
 173              	.LFE506:
 175              		.section	.text.unlikely._ZN15Fl_Shared_Image10desaturateEv
 176              	.LCOLDE1:
 177              		.section	.text._ZN15Fl_Shared_Image10desaturateEv
 178              	.LHOTE1:
 179              		.section	.text.unlikely._ZN15Fl_Shared_Image7uncacheEv,"ax",@progbits
 180              		.align 2
 181              	.LCOLDB2:
 182              		.section	.text._ZN15Fl_Shared_Image7uncacheEv,"ax",@progbits
 183              	.LHOTB2:
 184              		.align 2
 185              		.p2align 4,,15
 186              		.globl	_ZN15Fl_Shared_Image7uncacheEv
 188              	_ZN15Fl_Shared_Image7uncacheEv:
 189              	.LFB509:
 190              		.loc 1 459 0
 191              		.cfi_startproc
 192              	.LVL20:
 193              		.loc 1 460 0
 194 0000 488B7F38 		movq	56(%rdi), %rdi
 195              	.LVL21:
 196 0004 4885FF   		testq	%rdi, %rdi
 197 0007 7407     		je	.L18
 198              		.loc 1 460 0 is_stmt 0 discriminator 1
 199 0009 488B07   		movq	(%rdi), %rax
 200 000c FF6040   		jmp	*64(%rax)
 201              	.LVL22:
 202 000f 90       		.p2align 4,,10
 203              		.p2align 3
 204              	.L18:
 205 0010 F3C3     		rep ret
 206              		.cfi_endproc
 207              	.LFE509:
 209              		.section	.text.unlikely._ZN15Fl_Shared_Image7uncacheEv
 210              	.LCOLDE2:
 211              		.section	.text._ZN15Fl_Shared_Image7uncacheEv
 212              	.LHOTE2:
 213              		.section	.text.unlikely._ZN15Fl_Shared_Image7compareEPPS_S1_,"ax",@progbits
 214              		.align 2
 215              	.LCOLDB3:
 216              		.section	.text._ZN15Fl_Shared_Image7compareEPPS_S1_,"ax",@progbits
 217              	.LHOTB3:
 218              		.align 2
 219              		.p2align 4,,15
 220              		.globl	_ZN15Fl_Shared_Image7compareEPPS_S1_
 222              	_ZN15Fl_Shared_Image7compareEPPS_S1_:
 223              	.LFB489:
 224              		.loc 1 102 0 is_stmt 1
 225              		.cfi_startproc
 226              	.LVL23:
 227 0000 55       		pushq	%rbp
 228              		.cfi_def_cfa_offset 16
 229              		.cfi_offset 6, -16
 230 0001 53       		pushq	%rbx
 231              		.cfi_def_cfa_offset 24
 232              		.cfi_offset 3, -24
 233 0002 4883EC08 		subq	$8, %rsp
 234              		.cfi_def_cfa_offset 32
 235              		.loc 1 103 0
 236 0006 488B2E   		movq	(%rsi), %rbp
 237              	.LVL24:
 238 0009 488B1F   		movq	(%rdi), %rbx
 239              	.LVL25:
 240 000c 488B7528 		movq	40(%rbp), %rsi
 241              	.LVL26:
 242 0010 488B7B28 		movq	40(%rbx), %rdi
 243              	.LVL27:
 244 0014 E8000000 		call	strcmp
 244      00
 245              	.LVL28:
 246              		.loc 1 105 0
 247 0019 85C0     		testl	%eax, %eax
 248 001b 751B     		jne	.L28
 249 001d 8B4308   		movl	8(%rbx), %eax
 250              	.LVL29:
 251              		.loc 1 106 0
 252 0020 85C0     		testl	%eax, %eax
 253 0022 741C     		je	.L33
 254              	.L22:
 255 0024 8B5508   		movl	8(%rbp), %edx
 256              	.LVL30:
 257              		.loc 1 106 0 is_stmt 0 discriminator 4
 258 0027 85D2     		testl	%edx, %edx
 259 0029 7507     		jne	.L23
 260              		.loc 1 107 0 is_stmt 1
 261 002b 8B4B30   		movl	48(%rbx), %ecx
 262 002e 85C9     		testl	%ecx, %ecx
 263 0030 751E     		jne	.L27
 264              	.L23:
 265              	.LVL31:
 266              		.loc 1 108 0
 267 0032 39D0     		cmpl	%edx, %eax
 268 0034 742A     		je	.L34
 269              	.LVL32:
 270              		.loc 1 108 0 is_stmt 0 discriminator 1
 271 0036 29D0     		subl	%edx, %eax
 272              	.L28:
 273              		.loc 1 110 0 is_stmt 1
 274 0038 4883C408 		addq	$8, %rsp
 275              		.cfi_remember_state
 276              		.cfi_def_cfa_offset 24
 277 003c 5B       		popq	%rbx
 278              		.cfi_def_cfa_offset 16
 279              	.LVL33:
 280 003d 5D       		popq	%rbp
 281              		.cfi_def_cfa_offset 8
 282 003e C3       		ret
 283              	.LVL34:
 284 003f 90       		.p2align 4,,10
 285              		.p2align 3
 286              	.L33:
 287              		.cfi_restore_state
 288              		.loc 1 106 0 discriminator 1
 289 0040 8B7530   		movl	48(%rbp), %esi
 290 0043 85F6     		testl	%esi, %esi
 291 0045 74DD     		je	.L22
 292              		.loc 1 110 0
 293 0047 4883C408 		addq	$8, %rsp
 294              		.cfi_remember_state
 295              		.cfi_def_cfa_offset 24
 296 004b 5B       		popq	%rbx
 297              		.cfi_def_cfa_offset 16
 298              	.LVL35:
 299 004c 5D       		popq	%rbp
 300              		.cfi_def_cfa_offset 8
 301 004d C3       		ret
 302              	.LVL36:
 303 004e 6690     		.p2align 4,,10
 304              		.p2align 3
 305              	.L27:
 306              		.cfi_restore_state
 307 0050 4883C408 		addq	$8, %rsp
 308              		.cfi_remember_state
 309              		.cfi_def_cfa_offset 24
 310              		.loc 1 107 0
 311 0054 31C0     		xorl	%eax, %eax
 312              		.loc 1 110 0
 313 0056 5B       		popq	%rbx
 314              		.cfi_def_cfa_offset 16
 315              	.LVL37:
 316 0057 5D       		popq	%rbp
 317              		.cfi_def_cfa_offset 8
 318 0058 C3       		ret
 319              	.LVL38:
 320 0059 0F1F8000 		.p2align 4,,10
 320      000000
 321              		.p2align 3
 322              	.L34:
 323              		.cfi_restore_state
 324              		.loc 1 109 0
 325 0060 8B430C   		movl	12(%rbx), %eax
 326 0063 2B450C   		subl	12(%rbp), %eax
 327              		.loc 1 110 0
 328 0066 4883C408 		addq	$8, %rsp
 329              		.cfi_def_cfa_offset 24
 330 006a 5B       		popq	%rbx
 331              		.cfi_def_cfa_offset 16
 332              	.LVL39:
 333 006b 5D       		popq	%rbp
 334              		.cfi_def_cfa_offset 8
 335 006c C3       		ret
 336              		.cfi_endproc
 337              	.LFE489:
 339              		.section	.text.unlikely._ZN15Fl_Shared_Image7compareEPPS_S1_
 340              	.LCOLDE3:
 341              		.section	.text._ZN15Fl_Shared_Image7compareEPPS_S1_
 342              	.LHOTE3:
 343              		.section	.text.unlikely._ZN15Fl_Shared_ImageD2Ev,"ax",@progbits
 344              		.align 2
 345              	.LCOLDB4:
 346              		.section	.text._ZN15Fl_Shared_ImageD2Ev,"ax",@progbits
 347              	.LHOTB4:
 348              		.align 2
 349              		.p2align 4,,15
 350              		.globl	_ZN15Fl_Shared_ImageD2Ev
 352              	_ZN15Fl_Shared_ImageD2Ev:
 353              	.LFB499:
 354              		.loc 1 215 0
 355              		.cfi_startproc
 356              	.LVL40:
 357 0000 53       		pushq	%rbx
 358              		.cfi_def_cfa_offset 16
 359              		.cfi_offset 3, -16
 360              		.loc 1 215 0
 361 0001 4889FB   		movq	%rdi, %rbx
 362              	.LBB178:
 363 0004 48C70700 		movq	$_ZTV15Fl_Shared_Image+16, (%rdi)
 363      000000
 364              		.loc 1 216 0
 365 000b 488B7F28 		movq	40(%rdi), %rdi
 366              	.LVL41:
 367 000f 4885FF   		testq	%rdi, %rdi
 368 0012 7405     		je	.L36
 369              		.loc 1 216 0 is_stmt 0 discriminator 2
 370 0014 E8000000 		call	_ZdaPv
 370      00
 371              	.LVL42:
 372              	.L36:
 373              		.loc 1 217 0 is_stmt 1
 374 0019 8B4340   		movl	64(%rbx), %eax
 375 001c 85C0     		testl	%eax, %eax
 376 001e 740F     		je	.L37
 377              		.loc 1 217 0 is_stmt 0 discriminator 1
 378 0020 488B7B38 		movq	56(%rbx), %rdi
 379 0024 4885FF   		testq	%rdi, %rdi
 380 0027 7406     		je	.L37
 381              		.loc 1 217 0 discriminator 2
 382 0029 488B07   		movq	(%rdi), %rax
 383 002c FF5008   		call	*8(%rax)
 384              	.LVL43:
 385              	.L37:
 386              		.loc 1 215 0 is_stmt 1
 387 002f 4889DF   		movq	%rbx, %rdi
 388              	.LBE178:
 389              		.loc 1 221 0
 390 0032 5B       		popq	%rbx
 391              		.cfi_def_cfa_offset 8
 392              	.LVL44:
 393              	.LBB179:
 394              		.loc 1 215 0
 395 0033 E9000000 		jmp	_ZN8Fl_ImageD2Ev
 395      00
 396              	.LVL45:
 397              	.LBE179:
 398              		.cfi_endproc
 399              	.LFE499:
 401              		.section	.text.unlikely._ZN15Fl_Shared_ImageD2Ev
 402              	.LCOLDE4:
 403              		.section	.text._ZN15Fl_Shared_ImageD2Ev
 404              	.LHOTE4:
 405              		.globl	_ZN15Fl_Shared_ImageD1Ev
 406              		.set	_ZN15Fl_Shared_ImageD1Ev,_ZN15Fl_Shared_ImageD2Ev
 407              		.section	.text.unlikely._ZN15Fl_Shared_ImageD0Ev,"ax",@progbits
 408              		.align 2
 409              	.LCOLDB5:
 410              		.section	.text._ZN15Fl_Shared_ImageD0Ev,"ax",@progbits
 411              	.LHOTB5:
 412              		.align 2
 413              		.p2align 4,,15
 414              		.globl	_ZN15Fl_Shared_ImageD0Ev
 416              	_ZN15Fl_Shared_ImageD0Ev:
 417              	.LFB501:
 418              		.loc 1 215 0
 419              		.cfi_startproc
 420              	.LVL46:
 421 0000 53       		pushq	%rbx
 422              		.cfi_def_cfa_offset 16
 423              		.cfi_offset 3, -16
 424              		.loc 1 215 0
 425 0001 4889FB   		movq	%rdi, %rbx
 426              		.loc 1 221 0
 427 0004 E8000000 		call	_ZN15Fl_Shared_ImageD1Ev
 427      00
 428              	.LVL47:
 429 0009 4889DF   		movq	%rbx, %rdi
 430 000c 5B       		popq	%rbx
 431              		.cfi_def_cfa_offset 8
 432              	.LVL48:
 433 000d E9000000 		jmp	_ZdlPv
 433      00
 434              	.LVL49:
 435              		.cfi_endproc
 436              	.LFE501:
 438              		.section	.text.unlikely._ZN15Fl_Shared_ImageD0Ev
 439              	.LCOLDE5:
 440              		.section	.text._ZN15Fl_Shared_ImageD0Ev
 441              	.LHOTE5:
 442              		.section	.text.unlikely._ZN15Fl_Shared_Image4copyEii,"ax",@progbits
 443              		.align 2
 444              	.LCOLDB6:
 445              		.section	.text._ZN15Fl_Shared_Image4copyEii,"ax",@progbits
 446              	.LHOTB6:
 447              		.align 2
 448              		.p2align 4,,15
 449              		.globl	_ZN15Fl_Shared_Image4copyEii
 451              	_ZN15Fl_Shared_Image4copyEii:
 452              	.LFB504:
 453              		.loc 1 316 0
 454              		.cfi_startproc
 455              	.LVL50:
 456 0000 4154     		pushq	%r12
 457              		.cfi_def_cfa_offset 16
 458              		.cfi_offset 12, -16
 459 0002 4989FC   		movq	%rdi, %r12
 460 0005 55       		pushq	%rbp
 461              		.cfi_def_cfa_offset 24
 462              		.cfi_offset 6, -24
 463 0006 53       		pushq	%rbx
 464              		.cfi_def_cfa_offset 32
 465              		.cfi_offset 3, -32
 466              		.loc 1 321 0
 467 0007 488B7F38 		movq	56(%rdi), %rdi
 468              	.LVL51:
 469 000b 31ED     		xorl	%ebp, %ebp
 470 000d 4885FF   		testq	%rdi, %rdi
 471 0010 7409     		je	.L48
 472              		.loc 1 322 0
 473 0012 488B07   		movq	(%rdi), %rax
 474 0015 FF5010   		call	*16(%rax)
 475              	.LVL52:
 476 0018 4889C5   		movq	%rax, %rbp
 477              	.LVL53:
 478              	.L48:
 479              		.loc 1 325 0
 480 001b BF480000 		movl	$72, %edi
 480      00
 481 0020 E8000000 		call	_Znwm
 481      00
 482              	.LVL54:
 483              	.LBB180:
 484              	.LBB181:
 485              		.loc 1 120 0
 486 0025 31C9     		xorl	%ecx, %ecx
 487 0027 31D2     		xorl	%edx, %edx
 488 0029 31F6     		xorl	%esi, %esi
 489 002b 4889C7   		movq	%rax, %rdi
 490              	.LBE181:
 491              	.LBE180:
 492              		.loc 1 325 0
 493 002e 4889C3   		movq	%rax, %rbx
 494              	.LVL55:
 495              	.LBB184:
 496              	.LBB182:
 497              		.loc 1 120 0
 498 0031 E8000000 		call	_ZN8Fl_ImageC2Eiii
 498      00
 499              	.LVL56:
 500              	.LBE182:
 501              	.LBE184:
 502              		.loc 1 327 0
 503 0036 498B7C24 		movq	40(%r12), %rdi
 503      28
 504              	.LBB185:
 505              	.LBB183:
 506              		.loc 1 120 0
 507 003b 48C70300 		movq	$_ZTV15Fl_Shared_Image+16, (%rbx)
 507      000000
 508              		.loc 1 121 0
 509 0042 48C74328 		movq	$0, 40(%rbx)
 509      00000000 
 510              		.loc 1 122 0
 511 004a C7433401 		movl	$1, 52(%rbx)
 511      000000
 512              		.loc 1 123 0
 513 0051 C7433000 		movl	$0, 48(%rbx)
 513      000000
 514              		.loc 1 124 0
 515 0058 48C74338 		movq	$0, 56(%rbx)
 515      00000000 
 516              		.loc 1 125 0
 517 0060 C7434000 		movl	$0, 64(%rbx)
 517      000000
 518              	.LVL57:
 519              	.LBE183:
 520              	.LBE185:
 521              		.loc 1 327 0
 522 0067 E8000000 		call	strlen
 522      00
 523              	.LVL58:
 524 006c 488D7801 		leaq	1(%rax), %rdi
 525 0070 E8000000 		call	_Znam
 525      00
 526              	.LVL59:
 527              	.LBB186:
 528              	.LBB187:
 529              		.file 3 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
  54:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  55:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  56:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  57:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memmove (void *__dest, const void *__src, size_t __len))
  58:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  59:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memmove_chk (__dest, __src, __len, __bos0 (__dest));
  60:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  61:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  62:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_GNU
  63:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  64:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (mempcpy (void *__restrict __dest, const void *__restrict __src,
  65:/usr/include/x86_64-linux-gnu/bits/string3.h **** 		size_t __len))
  66:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  67:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___mempcpy_chk (__dest, __src, __len, __bos0 (__dest));
  68:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  69:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  70:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  71:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  72:/usr/include/x86_64-linux-gnu/bits/string3.h **** /* The first two tests here help to catch a somewhat common problem
  73:/usr/include/x86_64-linux-gnu/bits/string3.h ****    where the second and third parameter are transposed.  This is
  74:/usr/include/x86_64-linux-gnu/bits/string3.h ****    especially problematic if the intended fill value is zero.  In this
  75:/usr/include/x86_64-linux-gnu/bits/string3.h ****    case no work is done at all.  We detect these problems by referring
  76:/usr/include/x86_64-linux-gnu/bits/string3.h ****    non-existing functions.  */
  77:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  78:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memset (void *__dest, int __ch, size_t __len))
  79:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  80:/usr/include/x86_64-linux-gnu/bits/string3.h ****   /* GCC-5.0 and newer implements these checks in the compiler, so we don't
  81:/usr/include/x86_64-linux-gnu/bits/string3.h ****      need them here.  */
  82:/usr/include/x86_64-linux-gnu/bits/string3.h **** #if !__GNUC_PREREQ (5,0)
  83:/usr/include/x86_64-linux-gnu/bits/string3.h ****   if (__builtin_constant_p (__len) && __len == 0
  84:/usr/include/x86_64-linux-gnu/bits/string3.h ****       && (!__builtin_constant_p (__ch) || __ch != 0))
  85:/usr/include/x86_64-linux-gnu/bits/string3.h ****     {
  86:/usr/include/x86_64-linux-gnu/bits/string3.h ****       __warn_memset_zero_len ();
  87:/usr/include/x86_64-linux-gnu/bits/string3.h ****       return __dest;
  88:/usr/include/x86_64-linux-gnu/bits/string3.h ****     }
  89:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  90:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memset_chk (__dest, __ch, __len, __bos0 (__dest));
  91:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  92:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  93:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_MISC
  94:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void
  95:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (bcopy (const void *__src, void *__dest, size_t __len))
  96:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  97:/usr/include/x86_64-linux-gnu/bits/string3.h ****   (void) __builtin___memmove_chk (__dest, __src, __len, __bos0 (__dest));
  98:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  99:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 100:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void
 101:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (bzero (void *__dest, size_t __len))
 102:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 103:/usr/include/x86_64-linux-gnu/bits/string3.h ****   (void) __builtin___memset_chk (__dest, '\0', __len, __bos0 (__dest));
 104:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 105:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
 106:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 107:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 108:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (strcpy (char *__restrict __dest, const char *__restrict __src))
 109:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 110:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___strcpy_chk (__dest, __src, __bos (__dest));
 530              		.loc 3 110 0
 531 0075 498B7424 		movq	40(%r12), %rsi
 531      28
 532 007a 4889C7   		movq	%rax, %rdi
 533              	.LBE187:
 534              	.LBE186:
 535              		.loc 1 327 0
 536 007d 48894328 		movq	%rax, 40(%rbx)
 537              	.LVL60:
 538              	.LBB189:
 539              	.LBB188:
 540              		.loc 3 110 0
 541 0081 E8000000 		call	strcpy
 541      00
 542              	.LVL61:
 543              	.LBE188:
 544              	.LBE189:
 545              	.LBB190:
 546              	.LBB191:
 547              		.loc 1 200 0
 548 0086 4885ED   		testq	%rbp, %rbp
 549              	.LBE191:
 550              	.LBE190:
 551              		.loc 1 330 0
 552 0089 C7433401 		movl	$1, 52(%rbx)
 552      000000
 553              		.loc 1 331 0
 554 0090 48896B38 		movq	%rbp, 56(%rbx)
 555              		.loc 1 332 0
 556 0094 C7434001 		movl	$1, 64(%rbx)
 556      000000
 557              	.LVL62:
 558              	.LBB201:
 559              	.LBB200:
 560              		.loc 1 200 0
 561 009b 7420     		je	.L49
 562 009d 8B4508   		movl	8(%rbp), %eax
 563              	.LVL63:
 564              	.LBB192:
 565              	.LBB193:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 566              		.loc 2 76 0
 567 00a0 894308   		movl	%eax, 8(%rbx)
 568 00a3 8B450C   		movl	12(%rbp), %eax
 569              	.LVL64:
 570              	.LBE193:
 571              	.LBE192:
 572              	.LBB194:
 573              	.LBB195:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 574              		.loc 2 80 0
 575 00a6 89430C   		movl	%eax, 12(%rbx)
 576 00a9 8B4510   		movl	16(%rbp), %eax
 577              	.LVL65:
 578              	.LBE195:
 579              	.LBE194:
 580              	.LBB196:
 581              	.LBB197:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 582              		.loc 2 84 0
 583 00ac 894310   		movl	%eax, 16(%rbx)
 584 00af 8B4518   		movl	24(%rbp), %eax
 585              	.LVL66:
 586 00b2 488B5520 		movq	32(%rbp), %rdx
 587              	.LVL67:
 588              	.LBE197:
 589              	.LBE196:
 590              	.LBB198:
 591              	.LBB199:
 592              		.loc 2 100 0
 593 00b6 894318   		movl	%eax, 24(%rbx)
 594 00b9 48895320 		movq	%rdx, 32(%rbx)
 595              	.LVL68:
 596              	.L49:
 597              	.LBE199:
 598              	.LBE198:
 599              	.LBE200:
 600              	.LBE201:
 601              		.loc 1 337 0
 602 00bd 4889D8   		movq	%rbx, %rax
 603 00c0 5B       		popq	%rbx
 604              		.cfi_def_cfa_offset 24
 605              	.LVL69:
 606 00c1 5D       		popq	%rbp
 607              		.cfi_def_cfa_offset 16
 608 00c2 415C     		popq	%r12
 609              		.cfi_def_cfa_offset 8
 610              	.LVL70:
 611 00c4 C3       		ret
 612              		.cfi_endproc
 613              	.LFE504:
 615              		.section	.text.unlikely._ZN15Fl_Shared_Image4copyEii
 616              	.LCOLDE6:
 617              		.section	.text._ZN15Fl_Shared_Image4copyEii
 618              	.LHOTE6:
 619              		.section	.text.unlikely._ZN15Fl_Shared_Image6imagesEv,"ax",@progbits
 620              		.align 2
 621              	.LCOLDB7:
 622              		.section	.text._ZN15Fl_Shared_Image6imagesEv,"ax",@progbits
 623              	.LHOTB7:
 624              		.align 2
 625              		.p2align 4,,15
 626              		.globl	_ZN15Fl_Shared_Image6imagesEv
 628              	_ZN15Fl_Shared_Image6imagesEv:
 629              	.LFB487:
 630              		.loc 1 54 0
 631              		.cfi_startproc
 632              		.loc 1 56 0
 633 0000 488B0500 		movq	_ZN15Fl_Shared_Image7images_E(%rip), %rax
 633      000000
 634 0007 C3       		ret
 635              		.cfi_endproc
 636              	.LFE487:
 638              		.section	.text.unlikely._ZN15Fl_Shared_Image6imagesEv
 639              	.LCOLDE7:
 640              		.section	.text._ZN15Fl_Shared_Image6imagesEv
 641              	.LHOTE7:
 642              		.section	.text.unlikely._ZN15Fl_Shared_Image10num_imagesEv,"ax",@progbits
 643              		.align 2
 644              	.LCOLDB8:
 645              		.section	.text._ZN15Fl_Shared_Image10num_imagesEv,"ax",@progbits
 646              	.LHOTB8:
 647              		.align 2
 648              		.p2align 4,,15
 649              		.globl	_ZN15Fl_Shared_Image10num_imagesEv
 651              	_ZN15Fl_Shared_Image10num_imagesEv:
 652              	.LFB488:
 653              		.loc 1 60 0
 654              		.cfi_startproc
 655              		.loc 1 62 0
 656 0000 8B050000 		movl	_ZN15Fl_Shared_Image11num_images_E(%rip), %eax
 656      0000
 657 0006 C3       		ret
 658              		.cfi_endproc
 659              	.LFE488:
 661              		.section	.text.unlikely._ZN15Fl_Shared_Image10num_imagesEv
 662              	.LCOLDE8:
 663              		.section	.text._ZN15Fl_Shared_Image10num_imagesEv
 664              	.LHOTE8:
 665              		.section	.text.unlikely._ZN15Fl_Shared_ImageC2Ev,"ax",@progbits
 666              		.align 2
 667              	.LCOLDB9:
 668              		.section	.text._ZN15Fl_Shared_ImageC2Ev,"ax",@progbits
 669              	.LHOTB9:
 670              		.align 2
 671              		.p2align 4,,15
 672              		.globl	_ZN15Fl_Shared_ImageC2Ev
 674              	_ZN15Fl_Shared_ImageC2Ev:
 675              	.LFB491:
 676              		.loc 1 120 0
 677              		.cfi_startproc
 678              	.LVL71:
 679 0000 53       		pushq	%rbx
 680              		.cfi_def_cfa_offset 16
 681              		.cfi_offset 3, -16
 682              	.LBB202:
 683              		.loc 1 120 0
 684 0001 31C9     		xorl	%ecx, %ecx
 685              	.LBE202:
 686 0003 4889FB   		movq	%rdi, %rbx
 687              	.LBB203:
 688 0006 31D2     		xorl	%edx, %edx
 689 0008 31F6     		xorl	%esi, %esi
 690 000a E8000000 		call	_ZN8Fl_ImageC2Eiii
 690      00
 691              	.LVL72:
 692 000f 48C70300 		movq	$_ZTV15Fl_Shared_Image+16, (%rbx)
 692      000000
 693              		.loc 1 121 0
 694 0016 48C74328 		movq	$0, 40(%rbx)
 694      00000000 
 695              		.loc 1 122 0
 696 001e C7433401 		movl	$1, 52(%rbx)
 696      000000
 697              		.loc 1 123 0
 698 0025 C7433000 		movl	$0, 48(%rbx)
 698      000000
 699              		.loc 1 124 0
 700 002c 48C74338 		movq	$0, 56(%rbx)
 700      00000000 
 701              		.loc 1 125 0
 702 0034 C7434000 		movl	$0, 64(%rbx)
 702      000000
 703              	.LBE203:
 704              		.loc 1 129 0
 705 003b 5B       		popq	%rbx
 706              		.cfi_def_cfa_offset 8
 707              	.LVL73:
 708 003c C3       		ret
 709              		.cfi_endproc
 710              	.LFE491:
 712              		.section	.text.unlikely._ZN15Fl_Shared_ImageC2Ev
 713              	.LCOLDE9:
 714              		.section	.text._ZN15Fl_Shared_ImageC2Ev
 715              	.LHOTE9:
 716              		.globl	_ZN15Fl_Shared_ImageC1Ev
 717              		.set	_ZN15Fl_Shared_ImageC1Ev,_ZN15Fl_Shared_ImageC2Ev
 718              		.section	.text.unlikely._ZN15Fl_Shared_Image3addEv,"ax",@progbits
 719              		.align 2
 720              	.LCOLDB10:
 721              		.section	.text._ZN15Fl_Shared_Image3addEv,"ax",@progbits
 722              	.LHOTB10:
 723              		.align 2
 724              		.p2align 4,,15
 725              		.globl	_ZN15Fl_Shared_Image3addEv
 727              	_ZN15Fl_Shared_Image3addEv:
 728              	.LFB496:
 729              		.loc 1 167 0
 730              		.cfi_startproc
 731              	.LVL74:
 732              		.loc 1 170 0
 733 0000 48631500 		movslq	_ZN15Fl_Shared_Image11num_images_E(%rip), %rdx
 733      000000
 734 0007 8B050000 		movl	_ZN15Fl_Shared_Image13alloc_images_E(%rip), %eax
 734      0000
 735              		.loc 1 167 0
 736 000d 4154     		pushq	%r12
 737              		.cfi_def_cfa_offset 16
 738              		.cfi_offset 12, -16
 739 000f 55       		pushq	%rbp
 740              		.cfi_def_cfa_offset 24
 741              		.cfi_offset 6, -24
 742 0010 4889FD   		movq	%rdi, %rbp
 743 0013 53       		pushq	%rbx
 744              		.cfi_def_cfa_offset 32
 745              		.cfi_offset 3, -32
 746              		.loc 1 170 0
 747 0014 39C2     		cmpl	%eax, %edx
 748 0016 7D40     		jge	.L62
 749 0018 488B0500 		movq	_ZN15Fl_Shared_Image7images_E(%rip), %rax
 749      000000
 750              	.LVL75:
 751              	.L63:
 752              		.loc 1 184 0
 753 001f 48892CD0 		movq	%rbp, (%rax,%rdx,8)
 754              		.loc 1 185 0
 755 0023 8B050000 		movl	_ZN15Fl_Shared_Image11num_images_E(%rip), %eax
 755      0000
 756 0029 8D7001   		leal	1(%rax), %esi
 757              		.loc 1 187 0
 758 002c 83FE01   		cmpl	$1, %esi
 759              		.loc 1 185 0
 760 002f 89350000 		movl	%esi, _ZN15Fl_Shared_Image11num_images_E(%rip)
 760      0000
 761              		.loc 1 187 0
 762 0035 7E79     		jle	.L61
 763              		.loc 1 191 0
 764 0037 5B       		popq	%rbx
 765              		.cfi_remember_state
 766              		.cfi_def_cfa_offset 24
 767 0038 5D       		popq	%rbp
 768              		.cfi_def_cfa_offset 16
 769              	.LVL76:
 770 0039 415C     		popq	%r12
 771              		.cfi_def_cfa_offset 8
 772              		.loc 1 189 0
 773 003b 488B3D00 		movq	_ZN15Fl_Shared_Image7images_E(%rip), %rdi
 773      000000
 774 0042 4863F6   		movslq	%esi, %rsi
 775 0045 B9000000 		movl	$_ZN15Fl_Shared_Image7compareEPPS_S1_, %ecx
 775      00
 776 004a BA080000 		movl	$8, %edx
 776      00
 777 004f E9000000 		jmp	qsort
 777      00
 778              	.LVL77:
 779              		.p2align 4,,10
 780 0054 0F1F4000 		.p2align 3
 781              	.L62:
 782              		.cfi_restore_state
 783              		.loc 1 172 0
 784 0058 83C020   		addl	$32, %eax
 785 005b 48B90000 		movabsq	$1143914305352105984, %rcx
 785      00000000 
 785      E00F
 786 0065 48C7C7FF 		movq	$-1, %rdi
 786      FFFFFF
 787              	.LVL78:
 788 006c 4898     		cltq
 789 006e 488D14C5 		leaq	0(,%rax,8), %rdx
 789      00000000 
 790 0076 4839C8   		cmpq	%rcx, %rax
 791 0079 480F46FA 		cmovbe	%rdx, %rdi
 792 007d E8000000 		call	_Znam
 792      00
 793              	.LVL79:
 794              		.loc 1 174 0
 795 0082 48631500 		movslq	_ZN15Fl_Shared_Image13alloc_images_E(%rip), %rdx
 795      000000
 796              		.loc 1 172 0
 797 0089 4889C3   		movq	%rax, %rbx
 798              	.LVL80:
 799              		.loc 1 174 0
 800 008c 85D2     		testl	%edx, %edx
 801 008e 7528     		jne	.L67
 802              	.LVL81:
 803              	.L66:
 804              		.loc 1 181 0
 805 0090 83C220   		addl	$32, %edx
 806              		.loc 1 180 0
 807 0093 48891D00 		movq	%rbx, _ZN15Fl_Shared_Image7images_E(%rip)
 807      000000
 808              		.loc 1 172 0
 809 009a 4889D8   		movq	%rbx, %rax
 810              		.loc 1 181 0
 811 009d 89150000 		movl	%edx, _ZN15Fl_Shared_Image13alloc_images_E(%rip)
 811      0000
 812 00a3 48631500 		movslq	_ZN15Fl_Shared_Image11num_images_E(%rip), %rdx
 812      000000
 813 00aa E970FFFF 		jmp	.L63
 813      FF
 814              	.LVL82:
 815 00af 90       		.p2align 4,,10
 816              		.p2align 3
 817              	.L61:
 818              		.loc 1 191 0
 819 00b0 5B       		popq	%rbx
 820              		.cfi_remember_state
 821              		.cfi_def_cfa_offset 24
 822 00b1 5D       		popq	%rbp
 823              		.cfi_def_cfa_offset 16
 824              	.LVL83:
 825 00b2 415C     		popq	%r12
 826              		.cfi_def_cfa_offset 8
 827 00b4 C3       		ret
 828              	.LVL84:
 829              		.p2align 4,,10
 830 00b5 0F1F00   		.p2align 3
 831              	.L67:
 832              		.cfi_restore_state
 833              		.loc 1 175 0
 834 00b8 4C8B2500 		movq	_ZN15Fl_Shared_Image7images_E(%rip), %r12
 834      000000
 835              	.LVL85:
 836              	.LBB204:
 837              	.LBB205:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 838              		.loc 3 53 0
 839 00bf 48C1E203 		salq	$3, %rdx
 840              	.LVL86:
 841 00c3 4889C7   		movq	%rax, %rdi
 842 00c6 4C89E6   		movq	%r12, %rsi
 843 00c9 E8000000 		call	memcpy
 843      00
 844              	.LVL87:
 845              	.LBE205:
 846              	.LBE204:
 847              		.loc 1 177 0
 848 00ce 4C89E7   		movq	%r12, %rdi
 849 00d1 E8000000 		call	_ZdaPv
 849      00
 850              	.LVL88:
 851 00d6 8B150000 		movl	_ZN15Fl_Shared_Image13alloc_images_E(%rip), %edx
 851      0000
 852 00dc EBB2     		jmp	.L66
 853              		.cfi_endproc
 854              	.LFE496:
 856              		.section	.text.unlikely._ZN15Fl_Shared_Image3addEv
 857              	.LCOLDE10:
 858              		.section	.text._ZN15Fl_Shared_Image3addEv
 859              	.LHOTE10:
 860              		.section	.text.unlikely._ZN15Fl_Shared_Image6updateEv,"ax",@progbits
 861              		.align 2
 862              	.LCOLDB11:
 863              		.section	.text._ZN15Fl_Shared_Image6updateEv,"ax",@progbits
 864              	.LHOTB11:
 865              		.align 2
 866              		.p2align 4,,15
 867              		.globl	_ZN15Fl_Shared_Image6updateEv
 869              	_ZN15Fl_Shared_Image6updateEv:
 870              	.LFB497:
 871              		.loc 1 199 0
 872              		.cfi_startproc
 873              	.LVL89:
 874              		.loc 1 200 0
 875 0000 488B4738 		movq	56(%rdi), %rax
 876 0004 4885C0   		testq	%rax, %rax
 877 0007 7420     		je	.L70
 878 0009 8B5008   		movl	8(%rax), %edx
 879              	.LVL90:
 880              	.LBB206:
 881              	.LBB207:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 882              		.loc 2 76 0
 883 000c 895708   		movl	%edx, 8(%rdi)
 884 000f 8B500C   		movl	12(%rax), %edx
 885              	.LVL91:
 886              	.LBE207:
 887              	.LBE206:
 888              	.LBB208:
 889              	.LBB209:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 890              		.loc 2 80 0
 891 0012 89570C   		movl	%edx, 12(%rdi)
 892 0015 8B5010   		movl	16(%rax), %edx
 893              	.LVL92:
 894              	.LBE209:
 895              	.LBE208:
 896              	.LBB210:
 897              	.LBB211:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 898              		.loc 2 84 0
 899 0018 895710   		movl	%edx, 16(%rdi)
 900 001b 8B5018   		movl	24(%rax), %edx
 901              	.LVL93:
 902 001e 488B4020 		movq	32(%rax), %rax
 903              	.LVL94:
 904              	.LBE211:
 905              	.LBE210:
 906              	.LBB212:
 907              	.LBB213:
 908              		.loc 2 100 0
 909 0022 895718   		movl	%edx, 24(%rdi)
 910 0025 48894720 		movq	%rax, 32(%rdi)
 911              	.LVL95:
 912              	.L70:
 913 0029 F3C3     		rep ret
 914              	.LBE213:
 915              	.LBE212:
 916              		.cfi_endproc
 917              	.LFE497:
 919              		.section	.text.unlikely._ZN15Fl_Shared_Image6updateEv
 920              	.LCOLDE11:
 921              		.section	.text._ZN15Fl_Shared_Image6updateEv
 922              	.LHOTE11:
 923              		.section	.text.unlikely._ZN15Fl_Shared_Image7releaseEv,"ax",@progbits
 924              		.align 2
 925              	.LCOLDB12:
 926              		.section	.text._ZN15Fl_Shared_Image7releaseEv,"ax",@progbits
 927              	.LHOTB12:
 928              		.align 2
 929              		.p2align 4,,15
 930              		.globl	_ZN15Fl_Shared_Image7releaseEv
 932              	_ZN15Fl_Shared_Image7releaseEv:
 933              	.LFB502:
 934              		.loc 1 230 0
 935              		.cfi_startproc
 936              	.LVL96:
 937              		.loc 1 233 0
 938 0000 8B4734   		movl	52(%rdi), %eax
 939 0003 83E801   		subl	$1, %eax
 940              		.loc 1 234 0
 941 0006 85C0     		testl	%eax, %eax
 942              		.loc 1 233 0
 943 0008 894734   		movl	%eax, 52(%rdi)
 944              		.loc 1 234 0
 945 000b 7E03     		jle	.L97
 946              		.loc 1 256 0
 947 000d C3       		ret
 948 000e 6690     		.p2align 4,,10
 949              		.p2align 3
 950              	.L97:
 951              		.loc 1 236 0 discriminator 1
 952 0010 8B350000 		movl	_ZN15Fl_Shared_Image11num_images_E(%rip), %esi
 952      0000
 953              		.loc 1 230 0 discriminator 1
 954 0016 53       		pushq	%rbx
 955              		.cfi_def_cfa_offset 16
 956              		.cfi_offset 3, -16
 957 0017 4889FB   		movq	%rdi, %rbx
 958              	.LVL97:
 959              		.loc 1 236 0 discriminator 1
 960 001a 85F6     		testl	%esi, %esi
 961 001c 7E34     		jle	.L79
 962              	.LVL98:
 963              		.loc 1 237 0
 964 001e 4C8B0D00 		movq	_ZN15Fl_Shared_Image7images_E(%rip), %r9
 964      000000
 965 0025 B8010000 		movl	$1, %eax
 965      00
 966 002a 493939   		cmpq	%rdi, (%r9)
 967 002d 498D5108 		leaq	8(%r9), %rdx
 968 0031 7518     		jne	.L82
 969 0033 EB58     		jmp	.L98
 970              	.LVL99:
 971              		.p2align 4,,10
 972 0035 0F1F00   		.p2align 3
 973              	.L92:
 974 0038 4889D7   		movq	%rdx, %rdi
 975 003b 4883C208 		addq	$8, %rdx
 976 003f 488D4801 		leaq	1(%rax), %rcx
 977 0043 483B1F   		cmpq	(%rdi), %rbx
 978 0046 7450     		je	.L80
 979 0048 4889C8   		movq	%rcx, %rax
 980              	.LVL100:
 981              	.L82:
 982              		.loc 1 236 0 discriminator 2
 983 004b 39F0     		cmpl	%esi, %eax
 984 004d 4189C0   		movl	%eax, %r8d
 985              	.LVL101:
 986 0050 7CE6     		jl	.L92
 987              	.LVL102:
 988              	.L79:
 989              		.loc 1 248 0
 990 0052 488B03   		movq	(%rbx), %rax
 991 0055 4889DF   		movq	%rbx, %rdi
 992 0058 FF5008   		call	*8(%rax)
 993              	.LVL103:
 994              		.loc 1 250 0
 995 005b 8B050000 		movl	_ZN15Fl_Shared_Image11num_images_E(%rip), %eax
 995      0000
 996 0061 85C0     		testl	%eax, %eax
 997 0063 7526     		jne	.L75
 998              		.loc 1 250 0 is_stmt 0 discriminator 1
 999 0065 488B3D00 		movq	_ZN15Fl_Shared_Image7images_E(%rip), %rdi
 999      000000
 1000 006c 4885FF   		testq	%rdi, %rdi
 1001 006f 741A     		je	.L75
 1002              		.loc 1 251 0 is_stmt 1 discriminator 1
 1003 0071 E8000000 		call	_ZdaPv
 1003      00
 1004              	.LVL104:
 1005              		.loc 1 253 0 discriminator 1
 1006 0076 48C70500 		movq	$0, _ZN15Fl_Shared_Image7images_E(%rip)
 1006      00000000 
 1006      000000
 1007              		.loc 1 254 0 discriminator 1
 1008 0081 C7050000 		movl	$0, _ZN15Fl_Shared_Image13alloc_images_E(%rip)
 1008      00000000 
 1008      0000
 1009              	.L75:
 1010              		.loc 1 256 0
 1011 008b 5B       		popq	%rbx
 1012              		.cfi_remember_state
 1013              		.cfi_restore 3
 1014              		.cfi_def_cfa_offset 8
 1015              	.LVL105:
 1016 008c C3       		ret
 1017              	.LVL106:
 1018              	.L98:
 1019              		.cfi_restore_state
 1020              		.loc 1 237 0
 1021 008d 4C89CF   		movq	%r9, %rdi
 1022 0090 31C0     		xorl	%eax, %eax
 1023 0092 4531C0   		xorl	%r8d, %r8d
 1024              	.LVL107:
 1025              		.p2align 4,,10
 1026 0095 0F1F00   		.p2align 3
 1027              	.L80:
 1028              		.loc 1 238 0
 1029 0098 83EE01   		subl	$1, %esi
 1030              		.loc 1 240 0
 1031 009b 4139F0   		cmpl	%esi, %r8d
 1032              		.loc 1 238 0
 1033 009e 89350000 		movl	%esi, _ZN15Fl_Shared_Image11num_images_E(%rip)
 1033      0000
 1034              		.loc 1 240 0
 1035 00a4 7DAC     		jge	.L79
 1036              	.LVL108:
 1037              	.LBB214:
 1038              	.LBB215:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 1039              		.loc 3 59 0
 1040 00a6 4429C6   		subl	%r8d, %esi
 1041              	.LVL109:
 1042 00a9 4863D6   		movslq	%esi, %rdx
 1043 00ac 498D74C1 		leaq	8(%r9,%rax,8), %rsi
 1043      08
 1044 00b1 48C1E203 		salq	$3, %rdx
 1045              	.LVL110:
 1046 00b5 E8000000 		call	memmove
 1046      00
 1047              	.LVL111:
 1048 00ba EB96     		jmp	.L79
 1049              	.LBE215:
 1050              	.LBE214:
 1051              		.cfi_endproc
 1052              	.LFE502:
 1054              		.section	.text.unlikely._ZN15Fl_Shared_Image7releaseEv
 1055              	.LCOLDE12:
 1056              		.section	.text._ZN15Fl_Shared_Image7releaseEv
 1057              	.LHOTE12:
 1058              		.section	.rodata.str1.1,"aMS",@progbits,1
 1059              	.LC13:
 1060 0000 726200   		.string	"rb"
 1061              	.LC14:
 1062 0003 23646566 		.string	"#define"
 1062      696E6500 
 1063              	.LC15:
 1064 000b 2F2A2058 		.string	"/* XPM */"
 1064      504D202A 
 1064      2F00
 1065              		.section	.text.unlikely._ZN15Fl_Shared_Image6reloadEv,"ax",@progbits
 1066              		.align 2
 1067              	.LCOLDB16:
 1068              		.section	.text._ZN15Fl_Shared_Image6reloadEv,"ax",@progbits
 1069              	.LHOTB16:
 1070              		.align 2
 1071              		.p2align 4,,15
 1072              		.globl	_ZN15Fl_Shared_Image6reloadEv
 1074              	_ZN15Fl_Shared_Image6reloadEv:
 1075              	.LFB503:
 1076              		.loc 1 260 0
 1077              		.cfi_startproc
 1078              	.LVL112:
 1079 0000 4155     		pushq	%r13
 1080              		.cfi_def_cfa_offset 16
 1081              		.cfi_offset 13, -16
 1082 0002 4154     		pushq	%r12
 1083              		.cfi_def_cfa_offset 24
 1084              		.cfi_offset 12, -24
 1085 0004 55       		pushq	%rbp
 1086              		.cfi_def_cfa_offset 32
 1087              		.cfi_offset 6, -32
 1088 0005 53       		pushq	%rbx
 1089              		.cfi_def_cfa_offset 40
 1090              		.cfi_offset 3, -40
 1091 0006 4889FD   		movq	%rdi, %rbp
 1092 0009 4883EC58 		subq	$88, %rsp
 1093              		.cfi_def_cfa_offset 128
 1094              		.loc 1 267 0
 1095 000d 488B7F28 		movq	40(%rdi), %rdi
 1096              	.LVL113:
 1097              		.loc 1 260 0
 1098 0011 64488B04 		movq	%fs:40, %rax
 1098      25280000 
 1098      00
 1099 001a 48894424 		movq	%rax, 72(%rsp)
 1099      48
 1100 001f 31C0     		xorl	%eax, %eax
 1101              		.loc 1 267 0
 1102 0021 4885FF   		testq	%rdi, %rdi
 1103 0024 0F842701 		je	.L99
 1103      0000
 1104              		.loc 1 269 0
 1105 002a BE000000 		movl	$.LC13, %esi
 1105      00
 1106 002f E8000000 		call	fl_fopen
 1106      00
 1107              	.LVL114:
 1108 0034 4885C0   		testq	%rax, %rax
 1109 0037 4889C3   		movq	%rax, %rbx
 1110              	.LVL115:
 1111 003a 0F841101 		je	.L99
 1111      0000
 1112              	.LVL116:
 1113              	.LBB216:
 1114              	.LBB217:
 1115              		.file 4 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
   1:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** /* Checking macros for stdio functions.
   2:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    Copyright (C) 2004-2016 Free Software Foundation, Inc.
   3:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    This file is part of the GNU C Library.
   4:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
   5:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    The GNU C Library is free software; you can redistribute it and/or
   6:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    modify it under the terms of the GNU Lesser General Public
   7:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    License as published by the Free Software Foundation; either
   8:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    version 2.1 of the License, or (at your option) any later version.
   9:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  10:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    The GNU C Library is distributed in the hope that it will be useful,
  11:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    Lesser General Public License for more details.
  14:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  15:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    You should have received a copy of the GNU Lesser General Public
  16:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    License along with the GNU C Library; if not, see
  17:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    <http://www.gnu.org/licenses/>.  */
  18:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  19:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifndef _STDIO_H
  20:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # error "Never include <bits/stdio2.h> directly; use <stdio.h> instead."
  21:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  22:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  23:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
  24:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  const char *__restrict __format, ...) __THROW;
  25:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
  26:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __format,
  27:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   _G_va_list __ap) __THROW;
  28:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  29:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifdef __va_arg_pack
  30:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  31:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (sprintf (char *__restrict __s, const char *__restrict __fmt, ...))
  32:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  33:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___sprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  __bos (__s), __fmt, __va_arg_pack ());
  35:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  36:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #elif !defined __cplusplus
  37:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # define sprintf(str, ...) \
  38:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___sprintf_chk (str, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  39:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   __VA_ARGS__)
  40:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  41:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  42:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  43:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsprintf (char *__restrict __s, const char *__restrict __fmt,
  44:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 _G_va_list __ap))
  45:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  46:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
  47:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __ap);
  48:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  49:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  50:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if defined __USE_ISOC99 || defined __USE_UNIX98
  51:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  52:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
  53:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __slen, const char *__restrict __format,
  54:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   ...) __THROW;
  55:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
  56:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    size_t __slen, const char *__restrict __format,
  57:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    _G_va_list __ap) __THROW;
  58:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  59:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  60:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  61:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (snprintf (char *__restrict __s, size_t __n,
  62:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 const char *__restrict __fmt, ...))
  63:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  64:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___snprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __va_arg_pack ());
  66:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  67:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # elif !defined __cplusplus
  68:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define snprintf(str, len, ...) \
  69:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___snprintf_chk (str, len, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  70:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    __VA_ARGS__)
  71:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
  72:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  73:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  74:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsnprintf (char *__restrict __s, size_t __n,
  75:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		  const char *__restrict __fmt, _G_va_list __ap))
  76:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  77:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsnprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  78:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				    __bos (__s), __fmt, __ap);
  79:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  80:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  81:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  82:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  83:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if __USE_FORTIFY_LEVEL > 1
  84:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  85:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
  86:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  const char *__restrict __format, ...);
  87:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __printf_chk (int __flag, const char *__restrict __format, ...);
  88:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
  89:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __format, _G_va_list __ap);
  90:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vprintf_chk (int __flag, const char *__restrict __format,
  91:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  _G_va_list __ap);
  92:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  93:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  94:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  95:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
  96:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  97:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt,
  98:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			__va_arg_pack ());
  99:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 100:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 101:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 102:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** printf (const char *__restrict __fmt, ...)
 103:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 104:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __printf_chk (__USE_FORTIFY_LEVEL - 1, __fmt, __va_arg_pack ());
 105:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 106:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # elif !defined __cplusplus
 107:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define printf(...) \
 108:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __printf_chk (__USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 109:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define fprintf(stream, ...) \
 110:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __fprintf_chk (stream, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 111:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 112:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 113:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 114:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vprintf (const char *__restrict __fmt, _G_va_list __ap)
 115:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 116:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifdef __USE_EXTERN_INLINES
 117:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vfprintf_chk (stdout, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 118:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #else
 119:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vprintf_chk (__USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 120:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 121:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 122:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 123:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 124:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vfprintf (FILE *__restrict __stream,
 125:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	  const char *__restrict __fmt, _G_va_list __ap)
 126:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 127:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vfprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 128:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 129:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 130:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __USE_XOPEN2K8
 131:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
 132:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  ...) __attribute__ ((__format__ (__printf__, 3, 4)));
 133:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vdprintf_chk (int __fd, int __flag,
 134:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __fmt, _G_va_list __arg)
 135:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __attribute__ ((__format__ (__printf__, 3, 0)));
 136:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 137:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  ifdef __va_arg_pack
 138:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 139:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** dprintf (int __fd, const char *__restrict __fmt, ...)
 140:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 141:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __dprintf_chk (__fd, __USE_FORTIFY_LEVEL - 1, __fmt,
 142:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			__va_arg_pack ());
 143:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 144:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  elif !defined __cplusplus
 145:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define dprintf(fd, ...) \
 146:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __dprintf_chk (fd, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 147:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  endif
 148:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 149:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 150:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vdprintf (int __fd, const char *__restrict __fmt, _G_va_list __ap)
 151:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 152:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vdprintf_chk (__fd, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 153:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 154:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 155:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 156:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __USE_GNU
 157:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 158:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __asprintf_chk (char **__restrict __ptr, int __flag,
 159:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __fmt, ...)
 160:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 4))) __wur;
 161:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
 162:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    const char *__restrict __fmt, _G_va_list __arg)
 163:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 0))) __wur;
 164:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
 165:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				 int __flag, const char *__restrict __format,
 166:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				 ...)
 167:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 4)));
 168:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
 169:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  int __flag,
 170:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  const char *__restrict __format,
 171:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  _G_va_list __args)
 172:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 0)));
 173:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 174:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  ifdef __va_arg_pack
 175:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 176:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...))
 177:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 178:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __asprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt,
 179:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 __va_arg_pack ());
 180:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 181:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 182:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 183:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (__asprintf (char **__restrict __ptr, const char *__restrict __fmt,
 184:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		   ...))
 185:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 186:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __asprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt,
 187:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 __va_arg_pack ());
 188:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 189:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 190:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 191:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (obstack_printf (struct obstack *__restrict __obstack,
 192:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       const char *__restrict __fmt, ...))
 193:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 194:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __obstack_printf_chk (__obstack, __USE_FORTIFY_LEVEL - 1, __fmt,
 195:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			       __va_arg_pack ());
 196:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 197:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  elif !defined __cplusplus
 198:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define asprintf(ptr, ...) \
 199:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 200:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define __asprintf(ptr, ...) \
 201:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 202:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define obstack_printf(obstack, ...) \
 203:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __obstack_printf_chk (obstack, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 204:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  endif
 205:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 206:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 207:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vasprintf (char **__restrict __ptr, const char *__restrict __fmt,
 208:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		  _G_va_list __ap))
 209:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 210:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vasprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 211:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 212:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 213:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 214:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (obstack_vprintf (struct obstack *__restrict __obstack,
 215:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			const char *__restrict __fmt, _G_va_list __ap))
 216:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 217:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __obstack_vprintf_chk (__obstack, __USE_FORTIFY_LEVEL - 1, __fmt,
 218:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				__ap);
 219:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 220:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 221:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 222:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 223:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 224:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 225:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if !defined __USE_ISOC11 \
 226:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     || (defined __cplusplus && __cplusplus <= 201103L && !defined __USE_GNU)
 227:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__gets_chk (char *__str, size_t) __wur;
 228:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__gets_warn, (char *__str), gets)
 229:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("please use fgets or getline instead, gets can't "
 230:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "specify buffer size");
 231:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 232:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur char *
 233:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** gets (char *__str)
 234:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 235:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos (__str) != (size_t) -1)
 236:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     return __gets_chk (__str, __bos (__str));
 237:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __gets_warn (__str);
 238:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 239:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 240:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 241:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
 242:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream) __wur;
 243:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__fgets_alias,
 244:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 (char *__restrict __s, int __n,
 245:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream), fgets) __wur;
 246:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__fgets_chk_warn,
 247:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 (char *__restrict __s, size_t __size, int __n,
 248:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream), __fgets_chk)
 249:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("fgets called with bigger size than length "
 250:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "of destination buffer");
 251:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 252:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur char *
 253:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
 254:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 255:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos (__s) != (size_t) -1)
 256:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     {
 257:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if (!__builtin_constant_p (__n) || __n <= 0)
 258:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fgets_chk (__s, __bos (__s), __n, __stream);
 259:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 260:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if ((size_t) __n > __bos (__s))
 261:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fgets_chk_warn (__s, __bos (__s), __n, __stream);
 262:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     }
 263:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fgets_alias (__s, __n, __stream);
 264:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 265:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 266:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
 267:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __size, size_t __n,
 268:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   FILE *__restrict __stream) __wur;
 269:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern size_t __REDIRECT (__fread_alias,
 270:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  (void *__restrict __ptr, size_t __size,
 271:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __n, FILE *__restrict __stream),
 272:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  fread) __wur;
 273:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern size_t __REDIRECT (__fread_chk_warn,
 274:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  (void *__restrict __ptr, size_t __ptrlen,
 275:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __size, size_t __n,
 276:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   FILE *__restrict __stream),
 277:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  __fread_chk)
 278:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("fread called with bigger size * nmemb than length "
 279:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "of destination buffer");
 280:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 281:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur size_t
 282:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fread (void *__restrict __ptr, size_t __size, size_t __n,
 283:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****        FILE *__restrict __stream)
 284:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 285:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos0 (__ptr) != (size_t) -1)
 286:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     {
 287:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if (!__builtin_constant_p (__size)
 288:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	  || !__builtin_constant_p (__n)
 289:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	  || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 290:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fread_chk (__ptr, __bos0 (__ptr), __size, __n, __stream);
 291:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 292:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if (__size * __n > __bos0 (__ptr))
 293:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fread_chk_warn (__ptr, __bos0 (__ptr), __size, __n, __stream);
 294:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     }
 295:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fread_alias (__ptr, __size, __n, __stream);
 1116              		.loc 4 295 0
 1117 0040 4889C1   		movq	%rax, %rcx
 1118 0043 BA400000 		movl	$64, %edx
 1118      00
 1119 0048 BE010000 		movl	$1, %esi
 1119      00
 1120 004d 4889E7   		movq	%rsp, %rdi
 1121 0050 E8000000 		call	fread
 1121      00
 1122              	.LVL117:
 1123              	.LBE217:
 1124              	.LBE216:
 1125              		.loc 1 271 0
 1126 0055 4889DF   		movq	%rbx, %rdi
 1127 0058 E8000000 		call	fclose
 1127      00
 1128              	.LVL118:
 1129              		.loc 1 277 0
 1130 005d BA070000 		movl	$7, %edx
 1130      00
 1131 0062 BE000000 		movl	$.LC14, %esi
 1131      00
 1132 0067 4889E7   		movq	%rsp, %rdi
 1133 006a E8000000 		call	memcmp
 1133      00
 1134              	.LVL119:
 1135 006f 85C0     		testl	%eax, %eax
 1136 0071 0F840901 		je	.L137
 1136      0000
 1137              		.loc 1 279 0
 1138 0077 BA090000 		movl	$9, %edx
 1138      00
 1139 007c BE000000 		movl	$.LC15, %esi
 1139      00
 1140 0081 4889E7   		movq	%rsp, %rdi
 1141 0084 E8000000 		call	memcmp
 1141      00
 1142              	.LVL120:
 1143 0089 85C0     		testl	%eax, %eax
 1144 008b 0F840F01 		je	.L103
 1144      0000
 1145              	.LVL121:
 1146              		.loc 1 283 0 discriminator 1
 1147 0091 8B150000 		movl	_ZN15Fl_Shared_Image13num_handlers_E(%rip), %edx
 1147      0000
 1148 0097 4531E4   		xorl	%r12d, %r12d
 1149 009a 4531ED   		xorl	%r13d, %r13d
 1150 009d 85D2     		testl	%edx, %edx
 1151 009f 7F24     		jg	.L130
 1152 00a1 E9AB0000 		jmp	.L99
 1152      00
 1153              	.LVL122:
 1154 00a6 662E0F1F 		.p2align 4,,10
 1154      84000000 
 1154      0000
 1155              		.p2align 3
 1156              	.L138:
 1157              		.loc 1 283 0 is_stmt 0 discriminator 2
 1158 00b0 4183C501 		addl	$1, %r13d
 1159              	.LVL123:
 1160 00b4 4983C408 		addq	$8, %r12
 1161 00b8 44392D00 		cmpl	%r13d, _ZN15Fl_Shared_Image13num_handlers_E(%rip)
 1161      000000
 1162 00bf 0F8E8C00 		jle	.L99
 1162      0000
 1163              	.LVL124:
 1164              	.L130:
 1165              		.loc 1 284 0 is_stmt 1
 1166 00c5 488B0500 		movq	_ZN15Fl_Shared_Image9handlers_E(%rip), %rax
 1166      000000
 1167 00cc 488B7D28 		movq	40(%rbp), %rdi
 1168 00d0 BA400000 		movl	$64, %edx
 1168      00
 1169 00d5 4889E6   		movq	%rsp, %rsi
 1170 00d8 42FF1420 		call	*(%rax,%r12)
 1171              	.LVL125:
 1172              		.loc 1 286 0
 1173 00dc 4885C0   		testq	%rax, %rax
 1174              		.loc 1 284 0
 1175 00df 4889C3   		movq	%rax, %rbx
 1176              	.LVL126:
 1177              		.loc 1 286 0
 1178 00e2 74CC     		je	.L138
 1179              	.LVL127:
 1180              	.L102:
 1181              	.LBB218:
 1182              		.loc 1 291 0
 1183 00e4 8B4540   		movl	64(%rbp), %eax
 1184 00e7 85C0     		testl	%eax, %eax
 1185 00e9 740F     		je	.L108
 1186              		.loc 1 291 0 is_stmt 0 discriminator 1
 1187 00eb 488B7D38 		movq	56(%rbp), %rdi
 1188 00ef 4885FF   		testq	%rdi, %rdi
 1189 00f2 7406     		je	.L108
 1190              		.loc 1 291 0 discriminator 2
 1191 00f4 488B07   		movq	(%rdi), %rax
 1192 00f7 FF5008   		call	*8(%rax)
 1193              	.LVL128:
 1194              	.L108:
 1195              		.loc 1 293 0 is_stmt 1
 1196 00fa C7454001 		movl	$1, 64(%rbp)
 1196      000000
 1197              	.LVL129:
 1198 0101 8B7508   		movl	8(%rbp), %esi
 1199              	.LVL130:
 1200              	.LBB219:
 1201              		.loc 1 295 0
 1202 0104 397308   		cmpl	%esi, 8(%rbx)
 1203 0107 8B550C   		movl	12(%rbp), %edx
 1204 010a 7464     		je	.L119
 1205 010c 85F6     		testl	%esi, %esi
 1206 010e 7460     		je	.L119
 1207              	.L111:
 1208              	.LVL131:
 1209              	.LBB220:
 1210              		.loc 1 297 0
 1211 0110 488B03   		movq	(%rbx), %rax
 1212 0113 4889DF   		movq	%rbx, %rdi
 1213 0116 FF5010   		call	*16(%rax)
 1214              	.LVL132:
 1215 0119 4989C4   		movq	%rax, %r12
 1216              	.LVL133:
 1217              		.loc 1 298 0
 1218 011c 488B03   		movq	(%rbx), %rax
 1219              	.LVL134:
 1220 011f 4889DF   		movq	%rbx, %rdi
 1221              	.LBE220:
 1222              	.LBE219:
 1223              	.LBB223:
 1224              	.LBB224:
 1225              		.loc 1 200 0
 1226 0122 4C89E3   		movq	%r12, %rbx
 1227              	.LVL135:
 1228              	.LBE224:
 1229              	.LBE223:
 1230              	.LBB235:
 1231              	.LBB221:
 1232              		.loc 1 298 0
 1233 0125 FF5008   		call	*8(%rax)
 1234              	.LVL136:
 1235              	.LBE221:
 1236              	.LBE235:
 1237              	.LBB236:
 1238              	.LBB233:
 1239              		.loc 1 200 0
 1240 0128 4D85E4   		testq	%r12, %r12
 1241              	.LBE233:
 1242              	.LBE236:
 1243              	.LBB237:
 1244              	.LBB222:
 1245              		.loc 1 299 0
 1246 012b 4C896538 		movq	%r12, 56(%rbp)
 1247              	.LVL137:
 1248              	.LBE222:
 1249              	.LBE237:
 1250              	.LBB238:
 1251              	.LBB234:
 1252              		.loc 1 200 0
 1253 012f 7420     		je	.L99
 1254              	.LVL138:
 1255              	.L116:
 1256 0131 8B4308   		movl	8(%rbx), %eax
 1257              	.LVL139:
 1258              	.LBB225:
 1259              	.LBB226:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1260              		.loc 2 76 0
 1261 0134 894508   		movl	%eax, 8(%rbp)
 1262 0137 8B430C   		movl	12(%rbx), %eax
 1263              	.LVL140:
 1264              	.LBE226:
 1265              	.LBE225:
 1266              	.LBB227:
 1267              	.LBB228:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1268              		.loc 2 80 0
 1269 013a 89450C   		movl	%eax, 12(%rbp)
 1270 013d 8B4310   		movl	16(%rbx), %eax
 1271              	.LVL141:
 1272              	.LBE228:
 1273              	.LBE227:
 1274              	.LBB229:
 1275              	.LBB230:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1276              		.loc 2 84 0
 1277 0140 894510   		movl	%eax, 16(%rbp)
 1278 0143 8B4318   		movl	24(%rbx), %eax
 1279              	.LVL142:
 1280 0146 488B5320 		movq	32(%rbx), %rdx
 1281              	.LVL143:
 1282              	.LBE230:
 1283              	.LBE229:
 1284              	.LBB231:
 1285              	.LBB232:
 1286              		.loc 2 100 0
 1287 014a 894518   		movl	%eax, 24(%rbp)
 1288 014d 48895520 		movq	%rdx, 32(%rbp)
 1289              	.LVL144:
 1290              	.L99:
 1291              	.LBE232:
 1292              	.LBE231:
 1293              	.LBE234:
 1294              	.LBE238:
 1295              	.LBE218:
 1296              		.loc 1 306 0
 1297 0151 488B4424 		movq	72(%rsp), %rax
 1297      48
 1298 0156 64483304 		xorq	%fs:40, %rax
 1298      25280000 
 1298      00
 1299 015f 755D     		jne	.L139
 1300 0161 4883C458 		addq	$88, %rsp
 1301              		.cfi_remember_state
 1302              		.cfi_def_cfa_offset 40
 1303 0165 5B       		popq	%rbx
 1304              		.cfi_def_cfa_offset 32
 1305 0166 5D       		popq	%rbp
 1306              		.cfi_def_cfa_offset 24
 1307              	.LVL145:
 1308 0167 415C     		popq	%r12
 1309              		.cfi_def_cfa_offset 16
 1310 0169 415D     		popq	%r13
 1311              		.cfi_def_cfa_offset 8
 1312 016b C3       		ret
 1313              	.LVL146:
 1314 016c 0F1F4000 		.p2align 4,,10
 1315              		.p2align 3
 1316              	.L119:
 1317              		.cfi_restore_state
 1318              	.LBB240:
 1319              	.LBB239:
 1320              		.loc 1 295 0 discriminator 4
 1321 0170 39530C   		cmpl	%edx, 12(%rbx)
 1322 0173 7404     		je	.L113
 1323 0175 85D2     		testl	%edx, %edx
 1324 0177 7597     		jne	.L111
 1325              	.L113:
 1326              		.loc 1 301 0
 1327 0179 48895D38 		movq	%rbx, 56(%rbp)
 1328              	.LVL147:
 1329 017d EBB2     		jmp	.L116
 1330              	.LVL148:
 1331 017f 90       		.p2align 4,,10
 1332              		.p2align 3
 1333              	.L137:
 1334              	.LBE239:
 1335              	.LBE240:
 1336              		.loc 1 278 0
 1337 0180 BF380000 		movl	$56, %edi
 1337      00
 1338 0185 E8000000 		call	_Znwm
 1338      00
 1339              	.LVL149:
 1340 018a 488B7528 		movq	40(%rbp), %rsi
 1341 018e 4889C7   		movq	%rax, %rdi
 1342 0191 4889C3   		movq	%rax, %rbx
 1343              	.LVL150:
 1344 0194 E8000000 		call	_ZN12Fl_XBM_ImageC1EPKc
 1344      00
 1345              	.LVL151:
 1346 0199 E946FFFF 		jmp	.L102
 1346      FF
 1347              	.LVL152:
 1348 019e 6690     		.p2align 4,,10
 1349              		.p2align 3
 1350              	.L103:
 1351              		.loc 1 280 0
 1352 01a0 BF380000 		movl	$56, %edi
 1352      00
 1353 01a5 E8000000 		call	_Znwm
 1353      00
 1354              	.LVL153:
 1355 01aa 488B7528 		movq	40(%rbp), %rsi
 1356 01ae 4889C7   		movq	%rax, %rdi
 1357 01b1 4889C3   		movq	%rax, %rbx
 1358              	.LVL154:
 1359 01b4 E8000000 		call	_ZN12Fl_XPM_ImageC1EPKc
 1359      00
 1360              	.LVL155:
 1361 01b9 E926FFFF 		jmp	.L102
 1361      FF
 1362              	.LVL156:
 1363              	.L139:
 1364              		.loc 1 306 0
 1365 01be E8000000 		call	__stack_chk_fail
 1365      00
 1366              	.LVL157:
 1367              		.cfi_endproc
 1368              	.LFE503:
 1370              		.section	.text.unlikely._ZN15Fl_Shared_Image6reloadEv
 1371              	.LCOLDE16:
 1372              		.section	.text._ZN15Fl_Shared_Image6reloadEv
 1373              	.LHOTE16:
 1374              		.section	.text.unlikely._ZN15Fl_Shared_ImageC2EPKcP8Fl_Image,"ax",@progbits
 1375              		.align 2
 1376              	.LCOLDB17:
 1377              		.section	.text._ZN15Fl_Shared_ImageC2EPKcP8Fl_Image,"ax",@progbits
 1378              	.LHOTB17:
 1379              		.align 2
 1380              		.p2align 4,,15
 1381              		.globl	_ZN15Fl_Shared_ImageC2EPKcP8Fl_Image
 1383              	_ZN15Fl_Shared_ImageC2EPKcP8Fl_Image:
 1384              	.LFB494:
 1385              		.loc 1 139 0
 1386              		.cfi_startproc
 1387              	.LVL158:
 1388 0000 4154     		pushq	%r12
 1389              		.cfi_def_cfa_offset 16
 1390              		.cfi_offset 12, -16
 1391 0002 55       		pushq	%rbp
 1392              		.cfi_def_cfa_offset 24
 1393              		.cfi_offset 6, -24
 1394              	.LBB241:
 1395              		.loc 1 141 0
 1396 0003 31C9     		xorl	%ecx, %ecx
 1397              	.LBE241:
 1398              		.loc 1 139 0
 1399 0005 53       		pushq	%rbx
 1400              		.cfi_def_cfa_offset 32
 1401              		.cfi_offset 3, -32
 1402              		.loc 1 139 0
 1403 0006 4989F4   		movq	%rsi, %r12
 1404 0009 4889FB   		movq	%rdi, %rbx
 1405              	.LBB255:
 1406              		.loc 1 141 0
 1407 000c 31F6     		xorl	%esi, %esi
 1408              	.LVL159:
 1409              	.LBE255:
 1410              		.loc 1 139 0
 1411 000e 4889D5   		movq	%rdx, %rbp
 1412              	.LBB256:
 1413              		.loc 1 141 0
 1414 0011 31D2     		xorl	%edx, %edx
 1415              	.LVL160:
 1416 0013 E8000000 		call	_ZN8Fl_ImageC2Eiii
 1416      00
 1417              	.LVL161:
 1418              		.loc 1 142 0
 1419 0018 4C89E7   		movq	%r12, %rdi
 1420              		.loc 1 141 0
 1421 001b 48C70300 		movq	$_ZTV15Fl_Shared_Image+16, (%rbx)
 1421      000000
 1422              		.loc 1 142 0
 1423 0022 E8000000 		call	strlen
 1423      00
 1424              	.LVL162:
 1425 0027 488D7801 		leaq	1(%rax), %rdi
 1426 002b E8000000 		call	_Znam
 1426      00
 1427              	.LVL163:
 1428              	.LBB242:
 1429              	.LBB243:
 1430              		.loc 3 110 0
 1431 0030 4C89E6   		movq	%r12, %rsi
 1432              	.LBE243:
 1433              	.LBE242:
 1434              		.loc 1 142 0
 1435 0033 48894328 		movq	%rax, 40(%rbx)
 1436              	.LVL164:
 1437              	.LBB245:
 1438              	.LBB244:
 1439              		.loc 3 110 0
 1440 0037 4889C7   		movq	%rax, %rdi
 1441 003a E8000000 		call	strcpy
 1441      00
 1442              	.LVL165:
 1443              	.LBE244:
 1444              	.LBE245:
 1445              		.loc 1 147 0
 1446 003f 31C0     		xorl	%eax, %eax
 1447 0041 4885ED   		testq	%rbp, %rbp
 1448              		.loc 1 145 0
 1449 0044 C7433401 		movl	$1, 52(%rbx)
 1449      000000
 1450              		.loc 1 147 0
 1451 004b 0F94C0   		sete	%al
 1452              		.loc 1 146 0
 1453 004e 48896B38 		movq	%rbp, 56(%rbx)
 1454              		.loc 1 148 0
 1455 0052 C7433001 		movl	$1, 48(%rbx)
 1455      000000
 1456              		.loc 1 147 0
 1457 0059 894340   		movl	%eax, 64(%rbx)
 1458              		.loc 1 153 0
 1459 005c 742A     		je	.L143
 1460              	.LVL166:
 1461 005e 8B4508   		movl	8(%rbp), %eax
 1462              	.LVL167:
 1463              	.LBB246:
 1464              	.LBB247:
 1465              	.LBB248:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1466              		.loc 2 76 0
 1467 0061 894308   		movl	%eax, 8(%rbx)
 1468 0064 8B450C   		movl	12(%rbp), %eax
 1469              	.LVL168:
 1470              	.LBE248:
 1471              	.LBE247:
 1472              	.LBB249:
 1473              	.LBB250:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1474              		.loc 2 80 0
 1475 0067 89430C   		movl	%eax, 12(%rbx)
 1476 006a 8B4510   		movl	16(%rbp), %eax
 1477              	.LVL169:
 1478              	.LBE250:
 1479              	.LBE249:
 1480              	.LBB251:
 1481              	.LBB252:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1482              		.loc 2 84 0
 1483 006d 894310   		movl	%eax, 16(%rbx)
 1484 0070 8B4518   		movl	24(%rbp), %eax
 1485              	.LVL170:
 1486 0073 488B5520 		movq	32(%rbp), %rdx
 1487              	.LVL171:
 1488              	.LBE252:
 1489              	.LBE251:
 1490              	.LBB253:
 1491              	.LBB254:
 1492              		.loc 2 100 0
 1493 0077 894318   		movl	%eax, 24(%rbx)
 1494 007a 48895320 		movq	%rdx, 32(%rbx)
 1495              	.LBE254:
 1496              	.LBE253:
 1497              	.LBE246:
 1498              	.LBE256:
 1499              		.loc 1 155 0
 1500 007e 5B       		popq	%rbx
 1501              		.cfi_remember_state
 1502              		.cfi_def_cfa_offset 24
 1503              	.LVL172:
 1504 007f 5D       		popq	%rbp
 1505              		.cfi_def_cfa_offset 16
 1506              	.LVL173:
 1507 0080 415C     		popq	%r12
 1508              		.cfi_def_cfa_offset 8
 1509              	.LVL174:
 1510 0082 C3       		ret
 1511              	.LVL175:
 1512              		.p2align 4,,10
 1513 0083 0F1F4400 		.p2align 3
 1513      00
 1514              	.L143:
 1515              		.cfi_restore_state
 1516              	.LBB257:
 1517              		.loc 1 153 0 discriminator 1
 1518 0088 4889DF   		movq	%rbx, %rdi
 1519              	.LBE257:
 1520              		.loc 1 155 0 discriminator 1
 1521 008b 5B       		popq	%rbx
 1522              		.cfi_def_cfa_offset 24
 1523              	.LVL176:
 1524 008c 5D       		popq	%rbp
 1525              		.cfi_def_cfa_offset 16
 1526              	.LVL177:
 1527 008d 415C     		popq	%r12
 1528              		.cfi_def_cfa_offset 8
 1529              	.LVL178:
 1530              	.LBB258:
 1531              		.loc 1 153 0 discriminator 1
 1532 008f E9000000 		jmp	_ZN15Fl_Shared_Image6reloadEv
 1532      00
 1533              	.LVL179:
 1534              	.LBE258:
 1535              		.cfi_endproc
 1536              	.LFE494:
 1538              		.section	.text.unlikely._ZN15Fl_Shared_ImageC2EPKcP8Fl_Image
 1539              	.LCOLDE17:
 1540              		.section	.text._ZN15Fl_Shared_ImageC2EPKcP8Fl_Image
 1541              	.LHOTE17:
 1542              		.globl	_ZN15Fl_Shared_ImageC1EPKcP8Fl_Image
 1543              		.set	_ZN15Fl_Shared_ImageC1EPKcP8Fl_Image,_ZN15Fl_Shared_ImageC2EPKcP8Fl_Image
 1544              		.section	.text.unlikely._ZN15Fl_Shared_Image5scaleEiiii,"ax",@progbits
 1545              		.align 2
 1546              	.LCOLDB18:
 1547              		.section	.text._ZN15Fl_Shared_Image5scaleEiiii,"ax",@progbits
 1548              	.LHOTB18:
 1549              		.align 2
 1550              		.p2align 4,,15
 1551              		.globl	_ZN15Fl_Shared_Image5scaleEiiii
 1553              	_ZN15Fl_Shared_Image5scaleEiiii:
 1554              	.LFB508:
 1555              		.loc 1 430 0
 1556              		.cfi_startproc
 1557              	.LVL180:
 1558 0000 F3C3     		rep ret
 1559              		.cfi_endproc
 1560              	.LFE508:
 1562              		.section	.text.unlikely._ZN15Fl_Shared_Image5scaleEiiii
 1563              	.LCOLDE18:
 1564              		.section	.text._ZN15Fl_Shared_Image5scaleEiiii
 1565              	.LHOTE18:
 1566              		.section	.text.unlikely._ZN15Fl_Shared_Image4findEPKcii,"ax",@progbits
 1567              		.align 2
 1568              	.LCOLDB19:
 1569              		.section	.text._ZN15Fl_Shared_Image4findEPKcii,"ax",@progbits
 1570              	.LHOTB19:
 1571              		.align 2
 1572              		.p2align 4,,15
 1573              		.globl	_ZN15Fl_Shared_Image4findEPKcii
 1575              	_ZN15Fl_Shared_Image4findEPKcii:
 1576              	.LFB510:
 1577              		.loc 1 479 0
 1578              		.cfi_startproc
 1579              	.LVL181:
 1580              		.loc 1 479 0
 1581 0000 4157     		pushq	%r15
 1582              		.cfi_def_cfa_offset 16
 1583              		.cfi_offset 15, -16
 1584 0002 4156     		pushq	%r14
 1585              		.cfi_def_cfa_offset 24
 1586              		.cfi_offset 14, -24
 1587 0004 4155     		pushq	%r13
 1588              		.cfi_def_cfa_offset 32
 1589              		.cfi_offset 13, -32
 1590 0006 4154     		pushq	%r12
 1591              		.cfi_def_cfa_offset 40
 1592              		.cfi_offset 12, -40
 1593 0008 55       		pushq	%rbp
 1594              		.cfi_def_cfa_offset 48
 1595              		.cfi_offset 6, -48
 1596 0009 53       		pushq	%rbx
 1597              		.cfi_def_cfa_offset 56
 1598              		.cfi_offset 3, -56
 1599 000a 4883EC18 		subq	$24, %rsp
 1600              		.cfi_def_cfa_offset 80
 1601              		.loc 1 479 0
 1602 000e 64488B04 		movq	%fs:40, %rax
 1602      25280000 
 1602      00
 1603 0017 48894424 		movq	%rax, 8(%rsp)
 1603      08
 1604 001c 31C0     		xorl	%eax, %eax
 1605              		.loc 1 483 0
 1606 001e 8B050000 		movl	_ZN15Fl_Shared_Image11num_images_E(%rip), %eax
 1606      0000
 1607 0024 85C0     		testl	%eax, %eax
 1608 0026 0F84C000 		je	.L162
 1608      0000
 1609 002c 4889FB   		movq	%rdi, %rbx
 1610              		.loc 1 484 0
 1611 002f BF480000 		movl	$72, %edi
 1611      00
 1612              	.LVL182:
 1613 0034 4189F4   		movl	%esi, %r12d
 1614 0037 89D5     		movl	%edx, %ebp
 1615 0039 E8000000 		call	_Znwm
 1615      00
 1616              	.LVL183:
 1617              	.LBB259:
 1618              	.LBB260:
 1619              		.loc 1 120 0
 1620 003e 31C9     		xorl	%ecx, %ecx
 1621 0040 31D2     		xorl	%edx, %edx
 1622 0042 31F6     		xorl	%esi, %esi
 1623 0044 4889C7   		movq	%rax, %rdi
 1624              	.LBE260:
 1625              	.LBE259:
 1626              		.loc 1 484 0
 1627 0047 4989C6   		movq	%rax, %r14
 1628              	.LVL184:
 1629              	.LBB263:
 1630              	.LBB261:
 1631              		.loc 1 120 0
 1632 004a E8000000 		call	_ZN8Fl_ImageC2Eiii
 1632      00
 1633              	.LVL185:
 1634              	.LBE261:
 1635              	.LBE263:
 1636              		.loc 1 485 0
 1637 004f 4889DF   		movq	%rbx, %rdi
 1638              	.LBB264:
 1639              	.LBB262:
 1640              		.loc 1 120 0
 1641 0052 49C70600 		movq	$_ZTV15Fl_Shared_Image+16, (%r14)
 1641      000000
 1642              		.loc 1 121 0
 1643 0059 49C74628 		movq	$0, 40(%r14)
 1643      00000000 
 1644              		.loc 1 122 0
 1645 0061 41C74634 		movl	$1, 52(%r14)
 1645      01000000 
 1646              		.loc 1 123 0
 1647 0069 41C74630 		movl	$0, 48(%r14)
 1647      00000000 
 1648              		.loc 1 124 0
 1649 0071 49C74638 		movq	$0, 56(%r14)
 1649      00000000 
 1650              		.loc 1 125 0
 1651 0079 41C74640 		movl	$0, 64(%r14)
 1651      00000000 
 1652              	.LVL186:
 1653              	.LBE262:
 1654              	.LBE264:
 1655              		.loc 1 484 0
 1656 0081 4C893424 		movq	%r14, (%rsp)
 1657              		.loc 1 485 0
 1658 0085 E8000000 		call	strlen
 1658      00
 1659              	.LVL187:
 1660 008a 488D7801 		leaq	1(%rax), %rdi
 1661 008e E8000000 		call	_Znam
 1661      00
 1662              	.LVL188:
 1663              	.LBB265:
 1664              	.LBB266:
 1665              		.loc 3 110 0
 1666 0093 4889DE   		movq	%rbx, %rsi
 1667 0096 4889C7   		movq	%rax, %rdi
 1668              	.LBE266:
 1669              	.LBE265:
 1670              		.loc 1 485 0
 1671 0099 49894628 		movq	%rax, 40(%r14)
 1672              	.LVL189:
 1673              	.LBB268:
 1674              	.LBB267:
 1675              		.loc 3 110 0
 1676 009d E8000000 		call	strcpy
 1676      00
 1677              	.LVL190:
 1678              	.LBE267:
 1679              	.LBE268:
 1680              	.LBB269:
 1681              	.LBB270:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1682              		.loc 2 76 0
 1683 00a2 45896608 		movl	%r12d, 8(%r14)
 1684              	.LVL191:
 1685              	.LBE270:
 1686              	.LBE269:
 1687              	.LBB271:
 1688              	.LBB272:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1689              		.loc 2 80 0
 1690 00a6 41896E0C 		movl	%ebp, 12(%r14)
 1691              	.LVL192:
 1692              	.LBE272:
 1693              	.LBE271:
 1694              	.LBB273:
 1695              	.LBB274:
 1696              		.file 5 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h"
   1:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** /* Perform binary search - inline version.
   2:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    Copyright (C) 1991-2016 Free Software Foundation, Inc.
   3:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    This file is part of the GNU C Library.
   4:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** 
   5:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    The GNU C Library is free software; you can redistribute it and/or
   6:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    modify it under the terms of the GNU Lesser General Public
   7:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    License as published by the Free Software Foundation; either
   8:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    version 2.1 of the License, or (at your option) any later version.
   9:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** 
  10:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    The GNU C Library is distributed in the hope that it will be useful,
  11:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    Lesser General Public License for more details.
  14:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** 
  15:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    You should have received a copy of the GNU Lesser General Public
  16:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    License along with the GNU C Library; if not, see
  17:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****    <http://www.gnu.org/licenses/>.  */
  18:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** 
  19:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** __extern_inline void *
  20:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  21:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** 	 __compar_fn_t __compar)
  22:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** {
  23:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****   size_t __l, __u, __idx;
  24:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****   const void *__p;
  25:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****   int __comparison;
  26:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** 
  27:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****   __l = 0;
 1697              		.loc 5 27 0
 1698 00aa 4531E4   		xorl	%r12d, %r12d
 1699              	.LVL193:
 1700              	.LBE274:
 1701              	.LBE273:
 1702              		.loc 1 490 0
 1703 00ad 48632D00 		movslq	_ZN15Fl_Shared_Image11num_images_E(%rip), %rbp
 1703      000000
 1704              	.LVL194:
 1705 00b4 4C8B2D00 		movq	_ZN15Fl_Shared_Image7images_E(%rip), %r13
 1705      000000
 1706              	.LVL195:
 1707 00bb EB21     		jmp	.L161
 1708              	.LVL196:
 1709 00bd 0F1F00   		.p2align 4,,10
 1710              		.p2align 3
 1711              	.L165:
 1712              	.LBB277:
 1713              	.LBB275:
  28:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****   __u = __nmemb;
  29:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****   while (__l < __u)
  30:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****     {
  31:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****       __idx = (__l + __u) / 2;
 1714              		.loc 5 31 0
 1715 00c0 498D1C2C 		leaq	(%r12,%rbp), %rbx
  32:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****       __p = (void *) (((const char *) __base) + (__idx * __size));
  33:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****       __comparison = (*__compar) (__key, __p);
 1716              		.loc 5 33 0
 1717 00c4 4889E7   		movq	%rsp, %rdi
  31:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****       __p = (void *) (((const char *) __base) + (__idx * __size));
 1718              		.loc 5 31 0
 1719 00c7 48D1EB   		shrq	%rbx
 1720              	.LVL197:
  32:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****       __p = (void *) (((const char *) __base) + (__idx * __size));
 1721              		.loc 5 32 0
 1722 00ca 4D8D7CDD 		leaq	0(%r13,%rbx,8), %r15
 1722      00
 1723              	.LVL198:
 1724              		.loc 5 33 0
 1725 00cf 4C89FE   		movq	%r15, %rsi
 1726 00d2 E8000000 		call	_ZN15Fl_Shared_Image7compareEPPS_S1_
 1726      00
 1727              	.LVL199:
  34:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****       if (__comparison < 0)
 1728              		.loc 5 34 0
 1729 00d7 85C0     		testl	%eax, %eax
 1730 00d9 7935     		jns	.L164
 1731              	.LVL200:
 1732 00db 4889DD   		movq	%rbx, %rbp
 1733              	.LVL201:
 1734              	.L161:
  29:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****     {
 1735              		.loc 5 29 0
 1736 00de 4C39E5   		cmpq	%r12, %rbp
 1737 00e1 77DD     		ja	.L165
 1738              	.LVL202:
 1739              	.LBE275:
 1740              	.LBE277:
 1741              		.loc 1 494 0
 1742 00e3 498B06   		movq	(%r14), %rax
 1743 00e6 4C89F7   		movq	%r14, %rdi
 1744 00e9 FF5008   		call	*8(%rax)
 1745              	.LVL203:
 1746              	.L162:
 1747              		.loc 1 502 0
 1748 00ec 31C0     		xorl	%eax, %eax
 1749              	.L147:
 1750              		.loc 1 503 0
 1751 00ee 488B4C24 		movq	8(%rsp), %rcx
 1751      08
 1752 00f3 6448330C 		xorq	%fs:40, %rcx
 1752      25280000 
 1752      00
 1753 00fc 7534     		jne	.L166
 1754 00fe 4883C418 		addq	$24, %rsp
 1755              		.cfi_remember_state
 1756              		.cfi_def_cfa_offset 56
 1757 0102 5B       		popq	%rbx
 1758              		.cfi_def_cfa_offset 48
 1759 0103 5D       		popq	%rbp
 1760              		.cfi_def_cfa_offset 40
 1761 0104 415C     		popq	%r12
 1762              		.cfi_def_cfa_offset 32
 1763 0106 415D     		popq	%r13
 1764              		.cfi_def_cfa_offset 24
 1765 0108 415E     		popq	%r14
 1766              		.cfi_def_cfa_offset 16
 1767 010a 415F     		popq	%r15
 1768              		.cfi_def_cfa_offset 8
 1769 010c C3       		ret
 1770              	.LVL204:
 1771 010d 0F1F00   		.p2align 4,,10
 1772              		.p2align 3
 1773              	.L164:
 1774              		.cfi_restore_state
 1775              	.LBB278:
 1776              	.LBB276:
  35:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** 	__u = __idx;
  36:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h ****       else if (__comparison > 0)
 1777              		.loc 5 36 0
 1778 0110 7406     		je	.L152
  37:/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h **** 	__l = __idx + 1;
 1779              		.loc 5 37 0
 1780 0112 4C8D6301 		leaq	1(%rbx), %r12
 1781              	.LVL205:
 1782 0116 EBC6     		jmp	.L161
 1783              	.L152:
 1784              	.LVL206:
 1785              	.LBE276:
 1786              	.LBE278:
 1787              		.loc 1 494 0
 1788 0118 498B06   		movq	(%r14), %rax
 1789 011b 4C89F7   		movq	%r14, %rdi
 1790 011e FF5008   		call	*8(%rax)
 1791              	.LVL207:
 1792              		.loc 1 496 0
 1793 0121 4D85FF   		testq	%r15, %r15
 1794 0124 74C6     		je	.L162
 1795              		.loc 1 497 0
 1796 0126 498B07   		movq	(%r15), %rax
 1797 0129 83403401 		addl	$1, 52(%rax)
 1798              		.loc 1 498 0
 1799 012d 498B07   		movq	(%r15), %rax
 1800 0130 EBBC     		jmp	.L147
 1801              	.LVL208:
 1802              	.L166:
 1803              		.loc 1 503 0
 1804 0132 E8000000 		call	__stack_chk_fail
 1804      00
 1805              	.LVL209:
 1806              		.cfi_endproc
 1807              	.LFE510:
 1809              		.section	.text.unlikely._ZN15Fl_Shared_Image4findEPKcii
 1810              	.LCOLDE19:
 1811              		.section	.text._ZN15Fl_Shared_Image4findEPKcii
 1812              	.LHOTE19:
 1813              		.section	.text.unlikely._ZN15Fl_Shared_Image3getEPKcii,"ax",@progbits
 1814              		.align 2
 1815              	.LCOLDB20:
 1816              		.section	.text._ZN15Fl_Shared_Image3getEPKcii,"ax",@progbits
 1817              	.LHOTB20:
 1818              		.align 2
 1819              		.p2align 4,,15
 1820              		.globl	_ZN15Fl_Shared_Image3getEPKcii
 1822              	_ZN15Fl_Shared_Image3getEPKcii:
 1823              	.LFB511:
 1824              		.loc 1 541 0
 1825              		.cfi_startproc
 1826              	.LVL210:
 1827 0000 4155     		pushq	%r13
 1828              		.cfi_def_cfa_offset 16
 1829              		.cfi_offset 13, -16
 1830 0002 4154     		pushq	%r12
 1831              		.cfi_def_cfa_offset 24
 1832              		.cfi_offset 12, -24
 1833 0004 4989FD   		movq	%rdi, %r13
 1834 0007 55       		pushq	%rbp
 1835              		.cfi_def_cfa_offset 32
 1836              		.cfi_offset 6, -32
 1837 0008 53       		pushq	%rbx
 1838              		.cfi_def_cfa_offset 40
 1839              		.cfi_offset 3, -40
 1840 0009 89F5     		movl	%esi, %ebp
 1841 000b 4189D4   		movl	%edx, %r12d
 1842 000e 4883EC18 		subq	$24, %rsp
 1843              		.cfi_def_cfa_offset 64
 1844              		.loc 1 544 0
 1845 0012 E8000000 		call	_ZN15Fl_Shared_Image4findEPKcii
 1845      00
 1846              	.LVL211:
 1847 0017 4885C0   		testq	%rax, %rax
 1848 001a 4889C3   		movq	%rax, %rbx
 1849              	.LVL212:
 1850 001d 7411     		je	.L182
 1851              	.LVL213:
 1852              	.L179:
 1853              		.loc 1 563 0
 1854 001f 4883C418 		addq	$24, %rsp
 1855              		.cfi_remember_state
 1856              		.cfi_def_cfa_offset 40
 1857 0023 4889D8   		movq	%rbx, %rax
 1858 0026 5B       		popq	%rbx
 1859              		.cfi_def_cfa_offset 32
 1860 0027 5D       		popq	%rbp
 1861              		.cfi_def_cfa_offset 24
 1862              	.LVL214:
 1863 0028 415C     		popq	%r12
 1864              		.cfi_def_cfa_offset 16
 1865              	.LVL215:
 1866 002a 415D     		popq	%r13
 1867              		.cfi_def_cfa_offset 8
 1868              	.LVL216:
 1869 002c C3       		ret
 1870              	.LVL217:
 1871 002d 0F1F00   		.p2align 4,,10
 1872              		.p2align 3
 1873              	.L182:
 1874              		.cfi_restore_state
 1875              		.loc 1 546 0
 1876 0030 31D2     		xorl	%edx, %edx
 1877 0032 31F6     		xorl	%esi, %esi
 1878 0034 4C89EF   		movq	%r13, %rdi
 1879 0037 E8000000 		call	_ZN15Fl_Shared_Image4findEPKcii
 1879      00
 1880              	.LVL218:
 1881 003c 4885C0   		testq	%rax, %rax
 1882 003f 7442     		je	.L183
 1883              	.LVL219:
 1884              	.L169:
 1885              		.loc 1 557 0
 1886 0041 3B6808   		cmpl	8(%rax), %ebp
 1887 0044 7432     		je	.L184
 1888              	.L171:
 1889              		.loc 1 557 0 is_stmt 0 discriminator 3
 1890 0046 85ED     		testl	%ebp, %ebp
 1891 0048 7426     		je	.L176
 1892 004a 4585E4   		testl	%r12d, %r12d
 1893 004d 7421     		je	.L176
 1894              		.loc 1 558 0 is_stmt 1
 1895 004f 488B08   		movq	(%rax), %rcx
 1896 0052 4489E2   		movl	%r12d, %edx
 1897 0055 89EE     		movl	%ebp, %esi
 1898 0057 4889C7   		movq	%rax, %rdi
 1899 005a FF5110   		call	*16(%rcx)
 1900              	.LVL220:
 1901              		.loc 1 559 0
 1902 005d 4889C7   		movq	%rax, %rdi
 1903              		.loc 1 558 0
 1904 0060 4889C3   		movq	%rax, %rbx
 1905              	.LVL221:
 1906              		.loc 1 559 0
 1907 0063 E8000000 		call	_ZN15Fl_Shared_Image3addEv
 1907      00
 1908              	.LVL222:
 1909 0068 EBB5     		jmp	.L179
 1910              	.LVL223:
 1911 006a 660F1F44 		.p2align 4,,10
 1911      0000
 1912              		.p2align 3
 1913              	.L176:
 1914 0070 4889C3   		movq	%rax, %rbx
 1915 0073 EBAA     		jmp	.L179
 1916              		.p2align 4,,10
 1917 0075 0F1F00   		.p2align 3
 1918              	.L184:
 1919              	.LVL224:
 1920              		.loc 1 557 0 discriminator 2
 1921 0078 443B600C 		cmpl	12(%rax), %r12d
 1922 007c 4889C3   		movq	%rax, %rbx
 1923 007f 75C5     		jne	.L171
 1924 0081 EB9C     		jmp	.L179
 1925              	.LVL225:
 1926              	.L183:
 1927              		.loc 1 547 0
 1928 0083 BF480000 		movl	$72, %edi
 1928      00
 1929 0088 E8000000 		call	_Znwm
 1929      00
 1930              	.LVL226:
 1931 008d 31D2     		xorl	%edx, %edx
 1932 008f 4889C7   		movq	%rax, %rdi
 1933 0092 4C89EE   		movq	%r13, %rsi
 1934 0095 48894424 		movq	%rax, 8(%rsp)
 1934      08
 1935 009a E8000000 		call	_ZN15Fl_Shared_ImageC1EPKcP8Fl_Image
 1935      00
 1936              	.LVL227:
 1937              		.loc 1 549 0
 1938 009f 488B4424 		movq	8(%rsp), %rax
 1938      08
 1939 00a4 48837838 		cmpq	$0, 56(%rax)
 1939      00
 1940              		.loc 1 550 0
 1941 00a9 4889C7   		movq	%rax, %rdi
 1942              		.loc 1 549 0
 1943 00ac 7411     		je	.L185
 1944              		.loc 1 554 0
 1945 00ae 48894424 		movq	%rax, 8(%rsp)
 1945      08
 1946              	.LVL228:
 1947 00b3 E8000000 		call	_ZN15Fl_Shared_Image3addEv
 1947      00
 1948              	.LVL229:
 1949 00b8 488B4424 		movq	8(%rsp), %rax
 1949      08
 1950 00bd EB82     		jmp	.L169
 1951              	.LVL230:
 1952              	.L185:
 1953              		.loc 1 550 0 discriminator 1
 1954 00bf E8000000 		call	_ZN15Fl_Shared_ImageD0Ev
 1954      00
 1955              	.LVL231:
 1956 00c4 E956FFFF 		jmp	.L179
 1956      FF
 1957              		.cfi_endproc
 1958              	.LFE511:
 1960              		.section	.text.unlikely._ZN15Fl_Shared_Image3getEPKcii
 1961              	.LCOLDE20:
 1962              		.section	.text._ZN15Fl_Shared_Image3getEPKcii
 1963              	.LHOTE20:
 1964              		.section	.text.unlikely._ZN15Fl_Shared_Image3getEP12Fl_RGB_Imagei,"ax",@progbits
 1965              		.align 2
 1966              	.LCOLDB21:
 1967              		.section	.text._ZN15Fl_Shared_Image3getEP12Fl_RGB_Imagei,"ax",@progbits
 1968              	.LHOTB21:
 1969              		.align 2
 1970              		.p2align 4,,15
 1971              		.globl	_ZN15Fl_Shared_Image3getEP12Fl_RGB_Imagei
 1973              	_ZN15Fl_Shared_Image3getEP12Fl_RGB_Imagei:
 1974              	.LFB512:
 1975              		.loc 1 574 0
 1976              		.cfi_startproc
 1977              	.LVL232:
 1978 0000 4155     		pushq	%r13
 1979              		.cfi_def_cfa_offset 16
 1980              		.cfi_offset 13, -16
 1981 0002 4154     		pushq	%r12
 1982              		.cfi_def_cfa_offset 24
 1983              		.cfi_offset 12, -24
 1984 0004 4989FD   		movq	%rdi, %r13
 1985 0007 55       		pushq	%rbp
 1986              		.cfi_def_cfa_offset 32
 1987              		.cfi_offset 6, -32
 1988 0008 53       		pushq	%rbx
 1989              		.cfi_def_cfa_offset 40
 1990              		.cfi_offset 3, -40
 1991 0009 89F5     		movl	%esi, %ebp
 1992 000b 4883EC08 		subq	$8, %rsp
 1993              		.cfi_def_cfa_offset 48
 1994              		.loc 1 575 0
 1995 000f E8000000 		call	_ZN14Fl_Preferences7newUUIDEv
 1995      00
 1996              	.LVL233:
 1997 0014 BF480000 		movl	$72, %edi
 1997      00
 1998 0019 4989C4   		movq	%rax, %r12
 1999 001c E8000000 		call	_Znwm
 1999      00
 2000              	.LVL234:
 2001 0021 4C89EA   		movq	%r13, %rdx
 2002 0024 4889C3   		movq	%rax, %rbx
 2003 0027 4889C7   		movq	%rax, %rdi
 2004 002a 4C89E6   		movq	%r12, %rsi
 2005 002d E8000000 		call	_ZN15Fl_Shared_ImageC1EPKcP8Fl_Image
 2005      00
 2006              	.LVL235:
 2007              		.loc 1 577 0
 2008 0032 4889DF   		movq	%rbx, %rdi
 2009              		.loc 1 576 0
 2010 0035 896B40   		movl	%ebp, 64(%rbx)
 2011              		.loc 1 577 0
 2012 0038 E8000000 		call	_ZN15Fl_Shared_Image3addEv
 2012      00
 2013              	.LVL236:
 2014              		.loc 1 579 0
 2015 003d 4883C408 		addq	$8, %rsp
 2016              		.cfi_def_cfa_offset 40
 2017 0041 4889D8   		movq	%rbx, %rax
 2018 0044 5B       		popq	%rbx
 2019              		.cfi_def_cfa_offset 32
 2020              	.LVL237:
 2021 0045 5D       		popq	%rbp
 2022              		.cfi_def_cfa_offset 24
 2023              	.LVL238:
 2024 0046 415C     		popq	%r12
 2025              		.cfi_def_cfa_offset 16
 2026 0048 415D     		popq	%r13
 2027              		.cfi_def_cfa_offset 8
 2028              	.LVL239:
 2029 004a C3       		ret
 2030              		.cfi_endproc
 2031              	.LFE512:
 2033              		.section	.text.unlikely._ZN15Fl_Shared_Image3getEP12Fl_RGB_Imagei
 2034              	.LCOLDE21:
 2035              		.section	.text._ZN15Fl_Shared_Image3getEP12Fl_RGB_Imagei
 2036              	.LHOTE21:
 2037              		.section	.text.unlikely._ZN15Fl_Shared_Image11add_handlerEPFP8Fl_ImagePKcPhiE,"ax",@progbits
 2038              		.align 2
 2039              	.LCOLDB22:
 2040              		.section	.text._ZN15Fl_Shared_Image11add_handlerEPFP8Fl_ImagePKcPhiE,"ax",@progbits
 2041              	.LHOTB22:
 2042              		.align 2
 2043              		.p2align 4,,15
 2044              		.globl	_ZN15Fl_Shared_Image11add_handlerEPFP8Fl_ImagePKcPhiE
 2046              	_ZN15Fl_Shared_Image11add_handlerEPFP8Fl_ImagePKcPhiE:
 2047              	.LFB513:
 2048              		.loc 1 585 0
 2049              		.cfi_startproc
 2050              	.LVL240:
 2051              		.loc 1 590 0
 2052 0000 48630D00 		movslq	_ZN15Fl_Shared_Image13num_handlers_E(%rip), %rcx
 2052      000000
 2053              		.loc 1 585 0
 2054 0007 4154     		pushq	%r12
 2055              		.cfi_def_cfa_offset 16
 2056              		.cfi_offset 12, -16
 2057 0009 55       		pushq	%rbp
 2058              		.cfi_def_cfa_offset 24
 2059              		.cfi_offset 6, -24
 2060 000a 53       		pushq	%rbx
 2061              		.cfi_def_cfa_offset 32
 2062              		.cfi_offset 3, -32
 2063              		.loc 1 590 0
 2064 000b 85C9     		testl	%ecx, %ecx
 2065 000d 7E30     		jle	.L189
 2066              		.loc 1 591 0
 2067 000f 488B1500 		movq	_ZN15Fl_Shared_Image9handlers_E(%rip), %rdx
 2067      000000
 2068 0016 483B3A   		cmpq	(%rdx), %rdi
 2069 0019 0F848A00 		je	.L188
 2069      0000
 2070 001f 8D71FF   		leal	-1(%rcx), %esi
 2071 0022 488D4208 		leaq	8(%rdx), %rax
 2072 0026 488D54F2 		leaq	8(%rdx,%rsi,8), %rdx
 2072      08
 2073 002b EB0D     		jmp	.L192
 2074              	.LVL241:
 2075 002d 0F1F00   		.p2align 4,,10
 2076              		.p2align 3
 2077              	.L193:
 2078 0030 4883C008 		addq	$8, %rax
 2079 0034 483978F8 		cmpq	%rdi, -8(%rax)
 2080 0038 746F     		je	.L188
 2081              	.L192:
 2082              		.loc 1 590 0 discriminator 2
 2083 003a 4839C2   		cmpq	%rax, %rdx
 2084 003d 75F1     		jne	.L193
 2085              	.L189:
 2086              		.loc 1 594 0
 2087 003f 8B050000 		movl	_ZN15Fl_Shared_Image15alloc_handlers_E(%rip), %eax
 2087      0000
 2088 0045 4889FB   		movq	%rdi, %rbx
 2089 0048 39C8     		cmpl	%ecx, %eax
 2090 004a 7F64     		jg	.L202
 2091              	.LVL242:
 2092              		.loc 1 596 0
 2093 004c 83C020   		addl	$32, %eax
 2094 004f 48B90000 		movabsq	$1143914305352105984, %rcx
 2094      00000000 
 2094      E00F
 2095 0059 48C7C7FF 		movq	$-1, %rdi
 2095      FFFFFF
 2096 0060 4898     		cltq
 2097 0062 488D14C5 		leaq	0(,%rax,8), %rdx
 2097      00000000 
 2098 006a 4839C8   		cmpq	%rcx, %rax
 2099 006d 480F46FA 		cmovbe	%rdx, %rdi
 2100 0071 E8000000 		call	_Znam
 2100      00
 2101              	.LVL243:
 2102 0076 4889C5   		movq	%rax, %rbp
 2103              	.LVL244:
 2104              		.loc 1 598 0
 2105 0079 48630500 		movslq	_ZN15Fl_Shared_Image15alloc_handlers_E(%rip), %rax
 2105      000000
 2106              	.LVL245:
 2107 0080 85C0     		testl	%eax, %eax
 2108 0082 7543     		jne	.L198
 2109              	.L197:
 2110 0084 48630D00 		movslq	_ZN15Fl_Shared_Image13num_handlers_E(%rip), %rcx
 2110      000000
 2111              		.loc 1 605 0
 2112 008b 83C020   		addl	$32, %eax
 2113              		.loc 1 604 0
 2114 008e 48892D00 		movq	%rbp, _ZN15Fl_Shared_Image9handlers_E(%rip)
 2114      000000
 2115              		.loc 1 605 0
 2116 0095 89050000 		movl	%eax, _ZN15Fl_Shared_Image15alloc_handlers_E(%rip)
 2116      0000
 2117              		.loc 1 596 0
 2118 009b 4889E8   		movq	%rbp, %rax
 2119              		.loc 1 608 0
 2120 009e 48891CC8 		movq	%rbx, (%rax,%rcx,8)
 2121              		.loc 1 609 0
 2122 00a2 83050000 		addl	$1, _ZN15Fl_Shared_Image13num_handlers_E(%rip)
 2122      000001
 2123              	.LVL246:
 2124              	.L188:
 2125              		.loc 1 610 0
 2126 00a9 5B       		popq	%rbx
 2127              		.cfi_remember_state
 2128              		.cfi_def_cfa_offset 24
 2129 00aa 5D       		popq	%rbp
 2130              		.cfi_def_cfa_offset 16
 2131 00ab 415C     		popq	%r12
 2132              		.cfi_def_cfa_offset 8
 2133 00ad C3       		ret
 2134              	.LVL247:
 2135 00ae 6690     		.p2align 4,,10
 2136              		.p2align 3
 2137              	.L202:
 2138              		.cfi_restore_state
 2139 00b0 488B0500 		movq	_ZN15Fl_Shared_Image9handlers_E(%rip), %rax
 2139      000000
 2140              		.loc 1 608 0
 2141 00b7 48891CC8 		movq	%rbx, (%rax,%rcx,8)
 2142              		.loc 1 609 0
 2143 00bb 83050000 		addl	$1, _ZN15Fl_Shared_Image13num_handlers_E(%rip)
 2143      000001
 2144              		.loc 1 610 0
 2145 00c2 5B       		popq	%rbx
 2146              		.cfi_remember_state
 2147              		.cfi_def_cfa_offset 24
 2148              	.LVL248:
 2149 00c3 5D       		popq	%rbp
 2150              		.cfi_def_cfa_offset 16
 2151 00c4 415C     		popq	%r12
 2152              		.cfi_def_cfa_offset 8
 2153 00c6 C3       		ret
 2154              	.LVL249:
 2155              	.L198:
 2156              		.cfi_restore_state
 2157              		.loc 1 599 0
 2158 00c7 4C8B2500 		movq	_ZN15Fl_Shared_Image9handlers_E(%rip), %r12
 2158      000000
 2159              	.LVL250:
 2160              	.LBB279:
 2161              	.LBB280:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 2162              		.loc 3 53 0
 2163 00ce 488D14C5 		leaq	0(,%rax,8), %rdx
 2163      00000000 
 2164 00d6 4889EF   		movq	%rbp, %rdi
 2165 00d9 4C89E6   		movq	%r12, %rsi
 2166 00dc E8000000 		call	memcpy
 2166      00
 2167              	.LVL251:
 2168              	.LBE280:
 2169              	.LBE279:
 2170              		.loc 1 601 0
 2171 00e1 4C89E7   		movq	%r12, %rdi
 2172 00e4 E8000000 		call	_ZdaPv
 2172      00
 2173              	.LVL252:
 2174 00e9 8B050000 		movl	_ZN15Fl_Shared_Image15alloc_handlers_E(%rip), %eax
 2174      0000
 2175 00ef EB93     		jmp	.L197
 2176              		.cfi_endproc
 2177              	.LFE513:
 2179              		.section	.text.unlikely._ZN15Fl_Shared_Image11add_handlerEPFP8Fl_ImagePKcPhiE
 2180              	.LCOLDE22:
 2181              		.section	.text._ZN15Fl_Shared_Image11add_handlerEPFP8Fl_ImagePKcPhiE
 2182              	.LHOTE22:
 2183              		.section	.text.unlikely._ZN15Fl_Shared_Image14remove_handlerEPFP8Fl_ImagePKcPhiE,"ax",@progbits
 2184              		.align 2
 2185              	.LCOLDB23:
 2186              		.section	.text._ZN15Fl_Shared_Image14remove_handlerEPFP8Fl_ImagePKcPhiE,"ax",@progbits
 2187              	.LHOTB23:
 2188              		.align 2
 2189              		.p2align 4,,15
 2190              		.globl	_ZN15Fl_Shared_Image14remove_handlerEPFP8Fl_ImagePKcPhiE
 2192              	_ZN15Fl_Shared_Image14remove_handlerEPFP8Fl_ImagePKcPhiE:
 2193              	.LFB514:
 2194              		.loc 1 614 0
 2195              		.cfi_startproc
 2196              	.LVL253:
 2197              		.loc 1 618 0
 2198 0000 8B0D0000 		movl	_ZN15Fl_Shared_Image13num_handlers_E(%rip), %ecx
 2198      0000
 2199 0006 85C9     		testl	%ecx, %ecx
 2200 0008 7E3B     		jle	.L203
 2201              		.loc 1 619 0
 2202 000a 4C8B0500 		movq	_ZN15Fl_Shared_Image9handlers_E(%rip), %r8
 2202      000000
 2203 0011 493B38   		cmpq	(%r8), %rdi
 2204 0014 741D     		je	.L211
 2205 0016 498D5008 		leaq	8(%r8), %rdx
 2206 001a 31C0     		xorl	%eax, %eax
 2207 001c EB0C     		jmp	.L207
 2208              	.LVL254:
 2209 001e 6690     		.p2align 4,,10
 2210              		.p2align 3
 2211              	.L212:
 2212 0020 4883C208 		addq	$8, %rdx
 2213 0024 48397AF8 		cmpq	%rdi, -8(%rdx)
 2214 0028 740E     		je	.L206
 2215              	.LVL255:
 2216              	.L207:
 2217              		.loc 1 618 0 discriminator 2
 2218 002a 83C001   		addl	$1, %eax
 2219              	.LVL256:
 2220 002d 39C8     		cmpl	%ecx, %eax
 2221 002f 75EF     		jne	.L212
 2222 0031 F3C3     		rep ret
 2223              	.LVL257:
 2224              	.L211:
 2225              		.loc 1 618 0 is_stmt 0
 2226 0033 31C0     		xorl	%eax, %eax
 2227              	.LVL258:
 2228              		.p2align 4,,10
 2229 0035 0F1F00   		.p2align 3
 2230              	.L206:
 2231              		.loc 1 625 0 is_stmt 1
 2232 0038 83E901   		subl	$1, %ecx
 2233              		.loc 1 627 0
 2234 003b 39C1     		cmpl	%eax, %ecx
 2235              		.loc 1 625 0
 2236 003d 890D0000 		movl	%ecx, _ZN15Fl_Shared_Image13num_handlers_E(%rip)
 2236      0000
 2237              		.loc 1 627 0
 2238 0043 7F0B     		jg	.L210
 2239              	.L203:
 2240 0045 F3C3     		rep ret
 2241 0047 660F1F84 		.p2align 4,,10
 2241      00000000 
 2241      00
 2242              		.p2align 3
 2243              	.L210:
 2244              		.loc 1 629 0
 2245 0050 4863D0   		movslq	%eax, %rdx
 2246              	.LBB281:
 2247              	.LBB282:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 2248              		.loc 3 59 0
 2249 0053 29C1     		subl	%eax, %ecx
 2250              	.LBE282:
 2251              	.LBE281:
 2252              		.loc 1 629 0
 2253 0055 488D3CD5 		leaq	8(,%rdx,8), %rdi
 2253      08000000 
 2254              	.LVL259:
 2255              	.LBB284:
 2256              	.LBB283:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 2257              		.loc 3 59 0
 2258 005d 4863D1   		movslq	%ecx, %rdx
 2259 0060 48C1E203 		salq	$3, %rdx
 2260 0064 498D3438 		leaq	(%r8,%rdi), %rsi
 2261              	.LVL260:
 2262 0068 498D7C38 		leaq	-8(%r8,%rdi), %rdi
 2262      F8
 2263              	.LVL261:
 2264 006d E9000000 		jmp	memmove
 2264      00
 2265              	.LVL262:
 2266              	.LBE283:
 2267              	.LBE284:
 2268              		.cfi_endproc
 2269              	.LFE514:
 2271              		.section	.text.unlikely._ZN15Fl_Shared_Image14remove_handlerEPFP8Fl_ImagePKcPhiE
 2272              	.LCOLDE23:
 2273              		.section	.text._ZN15Fl_Shared_Image14remove_handlerEPFP8Fl_ImagePKcPhiE
 2274              	.LHOTE23:
 2275              		.section	.text.unlikely._ZN15Fl_Shared_Image4drawEiiiiii,"ax",@progbits
 2276              		.align 2
 2277              	.LCOLDB24:
 2278              		.section	.text._ZN15Fl_Shared_Image4drawEiiiiii,"ax",@progbits
 2279              	.LHOTB24:
 2280              		.align 2
 2281              		.p2align 4,,15
 2282              		.globl	_ZN15Fl_Shared_Image4drawEiiiiii
 2284              	_ZN15Fl_Shared_Image4drawEiiiiii:
 2285              	.LFB507:
 2286              		.loc 1 370 0
 2287              		.cfi_startproc
 2288              	.LVL263:
 2289              		.loc 1 401 0
 2290 0000 488B4738 		movq	56(%rdi), %rax
 2291              		.loc 1 370 0
 2292 0004 448B5424 		movl	8(%rsp), %r10d
 2292      08
 2293              		.loc 1 401 0
 2294 0009 4885C0   		testq	%rax, %rax
 2295 000c 7412     		je	.L214
 2296              		.loc 1 401 0 is_stmt 0 discriminator 1
 2297 000e 488B38   		movq	(%rax), %rdi
 2298              	.LVL264:
 2299 0011 4C8B5738 		movq	56(%rdi), %r10
 2300 0015 4889C7   		movq	%rax, %rdi
 2301 0018 41FFE2   		jmp	*%r10
 2302              	.LVL265:
 2303 001b 0F1F4400 		.p2align 4,,10
 2303      00
 2304              		.p2align 3
 2305              	.L214:
 2306              		.loc 1 402 0 is_stmt 1
 2307 0020 44895424 		movl	%r10d, 8(%rsp)
 2307      08
 2308 0025 E9000000 		jmp	_ZN8Fl_Image4drawEiiiiii
 2308      00
 2309              	.LVL266:
 2310              		.cfi_endproc
 2311              	.LFE507:
 2313              		.section	.text.unlikely._ZN15Fl_Shared_Image4drawEiiiiii
 2314              	.LCOLDE24:
 2315              		.section	.text._ZN15Fl_Shared_Image4drawEiiiiii
 2316              	.LHOTE24:
 2317              		.weak	_ZTS15Fl_Shared_Image
 2318              		.section	.rodata._ZTS15Fl_Shared_Image,"aG",@progbits,_ZTS15Fl_Shared_Image,comdat
 2319              		.align 16
 2322              	_ZTS15Fl_Shared_Image:
 2323 0000 3135466C 		.string	"15Fl_Shared_Image"
 2323      5F536861 
 2323      7265645F 
 2323      496D6167 
 2323      6500
 2324              		.weak	_ZTI15Fl_Shared_Image
 2325              		.section	.rodata._ZTI15Fl_Shared_Image,"aG",@progbits,_ZTI15Fl_Shared_Image,comdat
 2326              		.align 8
 2329              	_ZTI15Fl_Shared_Image:
 2330 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 2330      00000000 
 2331 0008 00000000 		.quad	_ZTS15Fl_Shared_Image
 2331      00000000 
 2332 0010 00000000 		.quad	_ZTI8Fl_Image
 2332      00000000 
 2333              		.weak	_ZTV15Fl_Shared_Image
 2334              		.section	.rodata._ZTV15Fl_Shared_Image,"aG",@progbits,_ZTV15Fl_Shared_Image,comdat
 2335              		.align 8
 2338              	_ZTV15Fl_Shared_Image:
 2339 0000 00000000 		.quad	0
 2339      00000000 
 2340 0008 00000000 		.quad	_ZTI15Fl_Shared_Image
 2340      00000000 
 2341 0010 00000000 		.quad	_ZN15Fl_Shared_ImageD1Ev
 2341      00000000 
 2342 0018 00000000 		.quad	_ZN15Fl_Shared_ImageD0Ev
 2342      00000000 
 2343 0020 00000000 		.quad	_ZN15Fl_Shared_Image4copyEii
 2343      00000000 
 2344 0028 00000000 		.quad	_ZN15Fl_Shared_Image13color_averageEjf
 2344      00000000 
 2345 0030 00000000 		.quad	_ZN15Fl_Shared_Image10desaturateEv
 2345      00000000 
 2346 0038 00000000 		.quad	_ZN8Fl_Image5labelEP9Fl_Widget
 2346      00000000 
 2347 0040 00000000 		.quad	_ZN8Fl_Image5labelEP12Fl_Menu_Item
 2347      00000000 
 2348 0048 00000000 		.quad	_ZN15Fl_Shared_Image4drawEiiiiii
 2348      00000000 
 2349 0050 00000000 		.quad	_ZN15Fl_Shared_Image7uncacheEv
 2349      00000000 
 2350              		.globl	_ZN15Fl_Shared_Image18scaling_algorithm_E
 2351              		.section	.data._ZN15Fl_Shared_Image18scaling_algorithm_E,"aw",@progbits
 2352              		.align 4
 2355              	_ZN15Fl_Shared_Image18scaling_algorithm_E:
 2356 0000 01000000 		.long	1
 2357              		.globl	_ZN15Fl_Shared_Image15alloc_handlers_E
 2358              		.section	.bss._ZN15Fl_Shared_Image15alloc_handlers_E,"aw",@nobits
 2359              		.align 4
 2362              	_ZN15Fl_Shared_Image15alloc_handlers_E:
 2363 0000 00000000 		.zero	4
 2364              		.globl	_ZN15Fl_Shared_Image13num_handlers_E
 2365              		.section	.bss._ZN15Fl_Shared_Image13num_handlers_E,"aw",@nobits
 2366              		.align 4
 2369              	_ZN15Fl_Shared_Image13num_handlers_E:
 2370 0000 00000000 		.zero	4
 2371              		.globl	_ZN15Fl_Shared_Image9handlers_E
 2372              		.section	.bss._ZN15Fl_Shared_Image9handlers_E,"aw",@nobits
 2373              		.align 8
 2376              	_ZN15Fl_Shared_Image9handlers_E:
 2377 0000 00000000 		.zero	8
 2377      00000000 
 2378              		.globl	_ZN15Fl_Shared_Image13alloc_images_E
 2379              		.section	.bss._ZN15Fl_Shared_Image13alloc_images_E,"aw",@nobits
 2380              		.align 4
 2383              	_ZN15Fl_Shared_Image13alloc_images_E:
 2384 0000 00000000 		.zero	4
 2385              		.globl	_ZN15Fl_Shared_Image11num_images_E
 2386              		.section	.bss._ZN15Fl_Shared_Image11num_images_E,"aw",@nobits
 2387              		.align 4
 2390              	_ZN15Fl_Shared_Image11num_images_E:
 2391 0000 00000000 		.zero	4
 2392              		.globl	_ZN15Fl_Shared_Image7images_E
 2393              		.section	.bss._ZN15Fl_Shared_Image7images_E,"aw",@nobits
 2394              		.align 8
 2397              	_ZN15Fl_Shared_Image7images_E:
 2398 0000 00000000 		.zero	8
 2398      00000000 
 2399              		.text
 2400              	.Letext0:
 2401              		.section	.text.unlikely._ZN15Fl_Shared_Image13color_averageEjf
 2402              	.Letext_cold0:
 2403              		.file 6 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2404              		.file 7 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2405              		.file 8 "/usr/include/stdio.h"
 2406              		.file 9 "/usr/include/libio.h"
 2407              		.file 10 "/usr/include/stdlib.h"
 2408              		.file 11 "fltk-1.3.4-1/FL/fl_types.h"
 2409              		.file 12 "fltk-1.3.4-1/FL/Enumerations.H"
 2410              		.file 13 "fltk-1.3.4-1/FL/Fl_Shared_Image.H"
 2411              		.file 14 "fltk-1.3.4-1/FL/Fl_Preferences.H"
 2412              		.file 15 "fltk-1.3.4-1/FL/Fl_Device.H"
 2413              		.file 16 "/usr/include/string.h"
 2414              		.file 17 "fltk-1.3.4-1/FL/fl_utf8.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Shared_Image.cxx
     /tmp/ccDXzrmY.s:16     .text._ZN15Fl_Shared_Image13color_averageEjf:0000000000000000 _ZN15Fl_Shared_Image13color_averageEjf
     /tmp/ccDXzrmY.s:103    .text._ZN15Fl_Shared_Image10desaturateEv:0000000000000000 _ZN15Fl_Shared_Image10desaturateEv
     /tmp/ccDXzrmY.s:188    .text._ZN15Fl_Shared_Image7uncacheEv:0000000000000000 _ZN15Fl_Shared_Image7uncacheEv
     /tmp/ccDXzrmY.s:222    .text._ZN15Fl_Shared_Image7compareEPPS_S1_:0000000000000000 _ZN15Fl_Shared_Image7compareEPPS_S1_
     /tmp/ccDXzrmY.s:352    .text._ZN15Fl_Shared_ImageD2Ev:0000000000000000 _ZN15Fl_Shared_ImageD2Ev
     /tmp/ccDXzrmY.s:2338   .rodata._ZTV15Fl_Shared_Image:0000000000000000 _ZTV15Fl_Shared_Image
     /tmp/ccDXzrmY.s:352    .text._ZN15Fl_Shared_ImageD2Ev:0000000000000000 _ZN15Fl_Shared_ImageD1Ev
     /tmp/ccDXzrmY.s:416    .text._ZN15Fl_Shared_ImageD0Ev:0000000000000000 _ZN15Fl_Shared_ImageD0Ev
     /tmp/ccDXzrmY.s:451    .text._ZN15Fl_Shared_Image4copyEii:0000000000000000 _ZN15Fl_Shared_Image4copyEii
     /tmp/ccDXzrmY.s:628    .text._ZN15Fl_Shared_Image6imagesEv:0000000000000000 _ZN15Fl_Shared_Image6imagesEv
     /tmp/ccDXzrmY.s:2397   .bss._ZN15Fl_Shared_Image7images_E:0000000000000000 _ZN15Fl_Shared_Image7images_E
     /tmp/ccDXzrmY.s:651    .text._ZN15Fl_Shared_Image10num_imagesEv:0000000000000000 _ZN15Fl_Shared_Image10num_imagesEv
     /tmp/ccDXzrmY.s:2390   .bss._ZN15Fl_Shared_Image11num_images_E:0000000000000000 _ZN15Fl_Shared_Image11num_images_E
     /tmp/ccDXzrmY.s:674    .text._ZN15Fl_Shared_ImageC2Ev:0000000000000000 _ZN15Fl_Shared_ImageC2Ev
     /tmp/ccDXzrmY.s:674    .text._ZN15Fl_Shared_ImageC2Ev:0000000000000000 _ZN15Fl_Shared_ImageC1Ev
     /tmp/ccDXzrmY.s:727    .text._ZN15Fl_Shared_Image3addEv:0000000000000000 _ZN15Fl_Shared_Image3addEv
     /tmp/ccDXzrmY.s:2383   .bss._ZN15Fl_Shared_Image13alloc_images_E:0000000000000000 _ZN15Fl_Shared_Image13alloc_images_E
     /tmp/ccDXzrmY.s:869    .text._ZN15Fl_Shared_Image6updateEv:0000000000000000 _ZN15Fl_Shared_Image6updateEv
     /tmp/ccDXzrmY.s:932    .text._ZN15Fl_Shared_Image7releaseEv:0000000000000000 _ZN15Fl_Shared_Image7releaseEv
     /tmp/ccDXzrmY.s:1074   .text._ZN15Fl_Shared_Image6reloadEv:0000000000000000 _ZN15Fl_Shared_Image6reloadEv
     /tmp/ccDXzrmY.s:2369   .bss._ZN15Fl_Shared_Image13num_handlers_E:0000000000000000 _ZN15Fl_Shared_Image13num_handlers_E
     /tmp/ccDXzrmY.s:2376   .bss._ZN15Fl_Shared_Image9handlers_E:0000000000000000 _ZN15Fl_Shared_Image9handlers_E
     /tmp/ccDXzrmY.s:1383   .text._ZN15Fl_Shared_ImageC2EPKcP8Fl_Image:0000000000000000 _ZN15Fl_Shared_ImageC2EPKcP8Fl_Image
     /tmp/ccDXzrmY.s:1383   .text._ZN15Fl_Shared_ImageC2EPKcP8Fl_Image:0000000000000000 _ZN15Fl_Shared_ImageC1EPKcP8Fl_Image
     /tmp/ccDXzrmY.s:1553   .text._ZN15Fl_Shared_Image5scaleEiiii:0000000000000000 _ZN15Fl_Shared_Image5scaleEiiii
     /tmp/ccDXzrmY.s:1575   .text._ZN15Fl_Shared_Image4findEPKcii:0000000000000000 _ZN15Fl_Shared_Image4findEPKcii
     /tmp/ccDXzrmY.s:1822   .text._ZN15Fl_Shared_Image3getEPKcii:0000000000000000 _ZN15Fl_Shared_Image3getEPKcii
     /tmp/ccDXzrmY.s:1973   .text._ZN15Fl_Shared_Image3getEP12Fl_RGB_Imagei:0000000000000000 _ZN15Fl_Shared_Image3getEP12Fl_RGB_Imagei
     /tmp/ccDXzrmY.s:2046   .text._ZN15Fl_Shared_Image11add_handlerEPFP8Fl_ImagePKcPhiE:0000000000000000 _ZN15Fl_Shared_Image11add_handlerEPFP8Fl_ImagePKcPhiE
     /tmp/ccDXzrmY.s:2362   .bss._ZN15Fl_Shared_Image15alloc_handlers_E:0000000000000000 _ZN15Fl_Shared_Image15alloc_handlers_E
     /tmp/ccDXzrmY.s:2192   .text._ZN15Fl_Shared_Image14remove_handlerEPFP8Fl_ImagePKcPhiE:0000000000000000 _ZN15Fl_Shared_Image14remove_handlerEPFP8Fl_ImagePKcPhiE
     /tmp/ccDXzrmY.s:2284   .text._ZN15Fl_Shared_Image4drawEiiiiii:0000000000000000 _ZN15Fl_Shared_Image4drawEiiiiii
     /tmp/ccDXzrmY.s:2322   .rodata._ZTS15Fl_Shared_Image:0000000000000000 _ZTS15Fl_Shared_Image
     /tmp/ccDXzrmY.s:2329   .rodata._ZTI15Fl_Shared_Image:0000000000000000 _ZTI15Fl_Shared_Image
     /tmp/ccDXzrmY.s:2355   .data._ZN15Fl_Shared_Image18scaling_algorithm_E:0000000000000000 _ZN15Fl_Shared_Image18scaling_algorithm_E
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
strcmp
_ZdaPv
_ZN8Fl_ImageD2Ev
_ZdlPv
_Znwm
_ZN8Fl_ImageC2Eiii
strlen
_Znam
strcpy
qsort
memcpy
memmove
fl_fopen
fread
fclose
memcmp
_ZN12Fl_XBM_ImageC1EPKc
_ZN12Fl_XPM_ImageC1EPKc
__stack_chk_fail
_ZN14Fl_Preferences7newUUIDEv
_ZN8Fl_Image4drawEiiiiii
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI8Fl_Image
_ZN8Fl_Image5labelEP9Fl_Widget
_ZN8Fl_Image5labelEP12Fl_Menu_Item
