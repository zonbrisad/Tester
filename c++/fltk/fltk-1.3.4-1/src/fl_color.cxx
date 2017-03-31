   1              		.file	"fl_color.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
  12              	.Ltext_cold0:
  13              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,comdat
  14              		.weak	_ZN9Fl_Device10class_nameEv
  16              	_ZN9Fl_Device10class_nameEv:
  17              	.LFB335:
  18              		.file 1 "fltk-1.3.4-1/FL/Fl_Device.H"
   1:fltk-1.3.4-1/FL/Fl_Device.H **** //
   2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Device.H **** //
   4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Surface_Device, Fl_Display_Device
   5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
   6:fltk-1.3.4-1/FL/Fl_Device.H **** //
   7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
   8:fltk-1.3.4-1/FL/Fl_Device.H **** //
   9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights are outlined in
  10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with this file.  If this
  11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver, Fl_Surface_Device, 
  22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
  29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
  30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
  31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all graphics requests */
  39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
  45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must copy \p w
  46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
  47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
  48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w,uchar* buf);
  50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
  53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
  54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
  57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
  58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
  59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
  60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
  61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
  62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
  64:fltk-1.3.4-1/FL/Fl_Device.H **** 
  65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
  67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type information.
  68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
  70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class returns this string.
  73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
  75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
  77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it will be removed from future FLTK vers
  78:fltk-1.3.4-1/FL/Fl_Device.H ****    
  79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be checked with code such as:
  80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
  81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ... }
  82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
  83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
  19              		.loc 1 84 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 84 0
  23 0000 488B0500 		movq	_ZN9Fl_Device8class_idE(%rip), %rax
  23      000000
  24 0007 C3       		ret
  25              		.cfi_endproc
  26              	.LFE335:
  28              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
  29              	.LCOLDE0:
  30              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,comdat
  31              	.LHOTE0:
  32              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
  33              		.align 2
  34              	.LCOLDB1:
  35              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
  36              	.LHOTB1:
  37              		.align 2
  38              		.p2align 4,,15
  39              		.weak	_ZN9Fl_DeviceD2Ev
  41              	_ZN9Fl_DeviceD2Ev:
  42              	.LFB337:
  85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
  87:fltk-1.3.4-1/FL/Fl_Device.H ****    
  88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the destructors of
  89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
  90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
  43              		.loc 1 91 0
  44              		.cfi_startproc
  45              	.LVL1:
  46 0000 F3C3     		rep ret
  47              		.cfi_endproc
  48              	.LFE337:
  50              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
  51              	.LCOLDE1:
  52              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
  53              	.LHOTE1:
  54              		.weak	_ZN9Fl_DeviceD1Ev
  55              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
  56              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN23Fl_Xlib_Gr
  57              		.align 2
  58              	.LCOLDB2:
  59              		.section	.text._ZN23Fl_Xlib_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN23Fl_Xlib_Graphics_Dr
  60              	.LHOTB2:
  61              		.align 2
  62              		.p2align 4,,15
  63              		.weak	_ZN23Fl_Xlib_Graphics_Driver10class_nameEv
  65              	_ZN23Fl_Xlib_Graphics_Driver10class_nameEv:
  66              	.LFB373:
  92:fltk-1.3.4-1/FL/Fl_Device.H **** };
  93:fltk-1.3.4-1/FL/Fl_Device.H **** 
  94:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_REGION_STACK_SIZE 10
  95:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_MATRIX_STACK_SIZE 32
  96:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver FLTK uses.
  98:fltk-1.3.4-1/FL/Fl_Device.H ****  Typically, FLTK applications do not use directly objects from this class. Rather, they perform
  99:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations (e.g., fl_rectf()) that operate on the current drawing surface (see Fl_Surface_
 100:fltk-1.3.4-1/FL/Fl_Device.H ****  Drawing operations are functionally presented in \ref drawing and as function lists
 101:fltk-1.3.4-1/FL/Fl_Device.H ****  in the \ref fl_drawings and \ref fl_attributes modules. The \ref fl_graphics_driver global variabl
 102:fltk-1.3.4-1/FL/Fl_Device.H ****  gives at any time the graphics driver used by all drawing operations. Its value changes when
 103:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations are directed to another drawing surface by Fl_Surface_Device::set_current().
 104:fltk-1.3.4-1/FL/Fl_Device.H ****  
 105:fltk-1.3.4-1/FL/Fl_Device.H ****  \p The Fl_Graphics_Driver class is of interest if one wants to perform new kinds of drawing operat
 106:fltk-1.3.4-1/FL/Fl_Device.H ****  An example would be to draw to a PDF file. This would involve creating a new Fl_Graphics_Driver de
 107:fltk-1.3.4-1/FL/Fl_Device.H ****  class. This new class should implement all virtual methods of the Fl_Graphics_Driver class
 108:fltk-1.3.4-1/FL/Fl_Device.H ****  to support all FLTK drawing functions.
 109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 110:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Graphics_Driver : public Fl_Device {
 111:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 112:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A 2D coordinate transformation matrix
 113:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 114:fltk-1.3.4-1/FL/Fl_Device.H ****   struct matrix {double a, b, c, d, x, y;};
 115:fltk-1.3.4-1/FL/Fl_Device.H **** private:
 116:fltk-1.3.4-1/FL/Fl_Device.H ****   static const matrix m0;
 117:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font_; // current font
 118:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size_; // current font size
 119:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color_; // current color
 120:fltk-1.3.4-1/FL/Fl_Device.H ****   int sptr;
 121:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int matrix_stack_size = FL_MATRIX_STACK_SIZE;
 122:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix stack[FL_MATRIX_STACK_SIZE];
 123:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix m;
 124:fltk-1.3.4-1/FL/Fl_Device.H ****   int n, p_size, gap_;
 125:fltk-1.3.4-1/FL/Fl_Device.H ****   XPOINT *p;
 126:fltk-1.3.4-1/FL/Fl_Device.H ****   int what;
 127:fltk-1.3.4-1/FL/Fl_Device.H ****   int fl_clip_state_number;
 128:fltk-1.3.4-1/FL/Fl_Device.H ****   int rstackptr;
 129:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int region_stack_max = FL_REGION_STACK_SIZE - 1;
 130:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region rstack[FL_REGION_STACK_SIZE];
 131:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 132:fltk-1.3.4-1/FL/Fl_Device.H ****   int numcount;
 133:fltk-1.3.4-1/FL/Fl_Device.H ****   int counts[20];
 134:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 135:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font_Descriptor *font_descriptor_;
 136:fltk-1.3.4-1/FL/Fl_Device.H ****   void transformed_vertex0(COORD_T x, COORD_T y);
 137:fltk-1.3.4-1/FL/Fl_Device.H ****   void fixloop();
 138:fltk-1.3.4-1/FL/Fl_Device.H ****   
 139:fltk-1.3.4-1/FL/Fl_Device.H **** protected:
 140:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef FL_DOXYGEN
 141:fltk-1.3.4-1/FL/Fl_Device.H ****   enum {LINE, LOOP, POLYGON, POINT_};
 142:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_no() { return n; }
 143:fltk-1.3.4-1/FL/Fl_Device.H ****   inline XPOINT *vertices() {return p;}
 144:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_kind() {return what;}
 145:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 146:fltk-1.3.4-1/FL/Fl_Device.H **** /*  ** \brief red color for background and/or mixing if device does not support masking or alpha *
 147:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_r_; 
 148:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief green color for background and/or mixing if device does not support masking or alpha *
 149:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_g_; 
 150:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief blue color for background and/or mixing if device does not support masking or alpha *
 151:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_b_; */
 152:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Pixmap;
 153:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Bitmap;
 154:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_RGB_Image;
 155:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rect(int x, int y, int w, int h);
 156:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rectf(int x, int y, int w, int h);
 157:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line_style(int style, int width, char* dashes);
 158:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1);
 159:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2);
 160:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2, int x3);
 161:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1);
 162:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2);
 163:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2, int y3);
 164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 165:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1, int x2, int y2);
 166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 167:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 168:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, float x, float y);
 169:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 170:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(int angle, const char *str, int n, int x, int y);
 171:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rtl_draw(const char *str, int n, int x, int y);
 172:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_font(Fl_Font face, Fl_Fontsize size);
 173:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(Fl_Color c);
 174:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(uchar r, uchar g, uchar b);
 175:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_point(int x, int y);
 176:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2, int y2);
 177:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 178:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2);
 179:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 180:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_points();
 181:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_line();
 182:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_loop();
 183:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_polygon();
 184:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_vertex(double x, double y);
 185:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3,
 186:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_circle(double x, double y, double r);
 187:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(double x, double y, double r, double start, double end);
 188:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(int x, int y, int w, int h, double a1, double a2);
 189:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pie(int x, int y, int w, int h, double a1, double a2);
 190:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_points();
 191:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_line();
 192:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_loop();
 193:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_polygon();
 194:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_transformed_vertex(double xf, double yf);
 195:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_clip(int x, int y, int w, int h);
 196:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H);
 197:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_not_clipped(int x, int y, int w, int h);
 198:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_no_clip();
 199:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_clip();
 200:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_complex_polygon();
 201:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_gap();
 202:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_complex_polygon();
 203:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_matrix();
 204:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_matrix();
 205:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_mult_matrix(double a, double b, double c, double d, double x, double y);
 206:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x, double y);
 207:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x);
 208:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_translate(double x, double y);
 209:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rotate(double d);
 210:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_x(double x, double y);
 211:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_y(double x, double y);
 212:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dx(double x, double y);
 213:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dy(double x, double y);
 214:fltk-1.3.4-1/FL/Fl_Device.H ****   friend Fl_Region fl_clip_region();
 215:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_clip_region(Fl_Region r);
 216:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_restore_clip();
 217:fltk-1.3.4-1/FL/Fl_Device.H ****   
 218:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D, int L);
 219:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D, int L);
 220:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D);
 221:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H
 222:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void gl_start();
 223:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx
 224:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix *fl_matrix; /**< Points to the current coordinate transformation matrix */
 225:fltk-1.3.4-1/FL/Fl_Device.H **** 
 226:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The constructor. */
 227:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Graphics_Driver();
 228:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rect(int x, int y, int w, int h). */
 229:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rect(int x, int y, int w, int h);
 230:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rectf(int x, int y, int w, int h). */
 231:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rectf(int x, int y, int w, int h);
 232:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line_style(int style, int width, char* dashes). */
 233:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line_style(int style, int width=0, char* dashes=0);
 234:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1). */
 235:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1);
 236:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2). */
 237:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2);
 238:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2, int x3). */
 239:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2, int x3);
 240:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1). */
 241:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1);
 242:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2). */
 243:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2);
 244:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2, int y3). */
 245:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2, int y3);
 246:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1). */
 247:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1);
 248:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1, int x2, int y2). */
 249:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1, int x2, int y2);
 250:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(const char *str, int n, int x, int y). */
 251:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, int x, int y) {}
 252:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 253:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, float x, float y) { draw(str, n, (int)(x+0.5), (int)(y+
 254:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, int x, int y). */
 256:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(int angle, const char *str, int n, int x, int y) {}
 257:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rtl_draw(const char *str, int n, int x, int y). */
 258:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rtl_draw(const char *str, int n, int x, int y) {};
 259:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(Fl_Color c). */
 260:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(Fl_Color c) {color_ = c;}
 261:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(uchar r, uchar g, uchar b). */
 262:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(uchar r, uchar g, uchar b) {}
 263:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_point(int x, int y). */
 264:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void point(int x, int y);
 265:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int x2, int y2). */
 266:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, int y2);
 267:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3). */
 268:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 269:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2). */
 270:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2, int y2);
 271:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3). */
 272:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 273:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_points(). */
 274:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_points();
 275:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_line(). */
 276:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_line();
 277:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_loop(). */
 278:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_loop();
 279:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_polygon(). */
 280:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_polygon();
 281:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_vertex(double x, double y). */
 282:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void vertex(double x, double y);
 283:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double 
 284:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3, d
 285:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_circle(double x, double y, double r). */
 286:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void circle(double x, double y, double r);
 287:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(double x, double y, double r, double start, double end). */
 288:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(double x, double y, double r, double start, double end);
 289:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(int x, int y, int w, int h, double a1, double a2). */
 290:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(int x, int y, int w, int h, double a1, double a2);
 291:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pie(int x, int y, int w, int h, double a1, double a2). */
 292:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pie(int x, int y, int w, int h, double a1, double a2);
 293:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_points(). */
 294:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_points();
 295:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_line(). */
 296:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_line();
 297:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_loop(). */
 298:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_loop();
 299:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_polygon(). */
 300:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_polygon();
 301:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_complex_polygon(). */
 302:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_complex_polygon();
 303:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_gap(). */
 304:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void gap();
 305:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_complex_polygon(). */
 306:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_complex_polygon();
 307:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transformed_vertex(double xf, double yf). */
 308:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void transformed_vertex(double xf, double yf);
 309:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_clip(int x, int y, int w, int h). */
 310:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_clip(int x, int y, int w, int h);
 311:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H). */
 312:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H);
 313:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_not_clipped(int x, int y, int w, int h). */
 314:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int not_clipped(int x, int y, int w, int h);
 315:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_no_clip(). */
 316:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_no_clip();
 317:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_clip(). */
 318:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pop_clip();
 319:fltk-1.3.4-1/FL/Fl_Device.H ****     
 320:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_matrix(). */
 321:fltk-1.3.4-1/FL/Fl_Device.H ****   void push_matrix();
 322:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_matrix(). */
 323:fltk-1.3.4-1/FL/Fl_Device.H ****   void pop_matrix();
 324:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_mult_matrix(double a, double b, double c, double d, double x, double y). */
 325:fltk-1.3.4-1/FL/Fl_Device.H ****   void mult_matrix(double a, double b, double c, double d, double x, double y);
 326:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x, double y). */
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x, double y) { mult_matrix(x,0,0,y,0,0); }
 328:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 329:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x) { mult_matrix(x,0,0,x,0,0); }
 330:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_translate(double x, double y). */
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void translate(double x,double y) { mult_matrix(1,0,0,1,x,y); }
 332:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 333:fltk-1.3.4-1/FL/Fl_Device.H ****   void rotate(double d);
 334:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_x(double x, double y). */
 335:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_x(double x, double y);
 336:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_y(double x, double y). */
 337:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_y(double x, double y);
 338:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_dx(double x, double y). */
 339:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_dx(double x, double y);
 340:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_dy(double x, double y). */
 341:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_dy(double x, double y);
 342:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_region(). */
 343:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region clip_region();
 344:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_region(Fl_Region r). */
 345:fltk-1.3.4-1/FL/Fl_Device.H ****   void clip_region(Fl_Region r);
 346:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_restore_clip(). */
 347:fltk-1.3.4-1/FL/Fl_Device.H ****   void restore_clip();
 348:fltk-1.3.4-1/FL/Fl_Device.H ****   
 349:fltk-1.3.4-1/FL/Fl_Device.H ****   // Images
 350:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D, int L). */
 351:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0) {}
 352:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D, int L). */
 353:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0) {}
 354:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D). */
 355:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3) {}
 356:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D
 357:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1)
 358:fltk-1.3.4-1/FL/Fl_Device.H ****   // Image classes
 359:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_RGB_Image object to the device. 
 360:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 361:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 362:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 363:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 364:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_RGB_Image * rgb,int XP, int YP, int WP, int HP, int cx, int cy) {}
 365:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Pixmap object to the device. 
 366:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 367:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 368:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 369:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 370:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_Pixmap * pxm,int XP, int YP, int WP, int HP, int cx, int cy) {}
 371:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Bitmap object to the device. 
 372:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 373:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 374:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 375:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, int HP, int cx, int cy) {}
 377:fltk-1.3.4-1/FL/Fl_Device.H **** #if FLTK_ABI_VERSION >= 10301
 378:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual
 379:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 380:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 381:fltk-1.3.4-1/FL/Fl_Device.H ****   
 382:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 383:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 384:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 385:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(Fl_Font face, Fl_Fontsize size). */
 386:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void font(Fl_Font face, Fl_Fontsize fsize) {font_ = face; size_ = fsize;}
 387:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(void). */
 388:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font() {return font_; }
 389:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_size(). */
 390:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size() {return size_; }
 391:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_width(const char *str, int n). */
 392:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual double width(const char *str, int n) {return 0;}
 393:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_width(unsigned int n). */
 394:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual inline double width(unsigned int c) { char ch = (char)c; return width(&ch, 1); }
 395:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_text_extents(const char*, int n, int& dx, int& dy, int& w, int& h). */
 396:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 397:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_height(). */
 398:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int height() {return size();}
 399:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_descent(). */
 400:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int descent() {return 0;}
 401:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(void). */
 402:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color() {return color_;}
 403:fltk-1.3.4-1/FL/Fl_Device.H ****   /** Returns a pointer to the current Fl_Font_Descriptor for the graphics driver */
 404:fltk-1.3.4-1/FL/Fl_Device.H ****   inline Fl_Font_Descriptor *font_descriptor() { return font_descriptor_;}
 405:fltk-1.3.4-1/FL/Fl_Device.H ****   /** Sets the current Fl_Font_Descriptor for the graphics driver */
 406:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void font_descriptor(Fl_Font_Descriptor *d) { font_descriptor_ = d;}
 407:fltk-1.3.4-1/FL/Fl_Device.H **** #if FLTK_ABI_VERSION >= 10304 || defined(FL_DOXYGEN)
 408:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual
 409:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 410:fltk-1.3.4-1/FL/Fl_Device.H ****   int draw_scaled(Fl_Image *img, int X, int Y, int W, int H);
 411:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The destructor */
 412:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Graphics_Driver() { if (p) free(p); }
 413:fltk-1.3.4-1/FL/Fl_Device.H **** };
 414:fltk-1.3.4-1/FL/Fl_Device.H **** 
 415:fltk-1.3.4-1/FL/Fl_Device.H **** #if defined(__APPLE__) || defined(FL_DOXYGEN)
 416:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 417:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief The Mac OS X-specific graphics class.
 418:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 419:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the Mac OS X platform.
 420:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 421:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Quartz_Graphics_Driver : public Fl_Graphics_Driver {
 422:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 423:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 424:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 425:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(Fl_Color c);
 426:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(uchar r, uchar g, uchar b);
 427:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char* str, int n, int x, int y);
 428:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 429:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char *str, int n, float x, float y);
 430:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 431:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(int angle, const char *str, int n, int x, int y);
 432:fltk-1.3.4-1/FL/Fl_Device.H ****   void rtl_draw(const char* str, int n, int x, int y);
 433:fltk-1.3.4-1/FL/Fl_Device.H ****   void font(Fl_Font face, Fl_Fontsize size);
 434:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 435:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 436:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_RGB_Image *img, int XP, int YP, int WP, int HP, int cx, int cy);
 437:fltk-1.3.4-1/FL/Fl_Device.H ****   int draw_scaled(Fl_Image *img, int XP, int YP, int WP, int HP);
 438:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0);
 439:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3);
 440:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0);
 441:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1);
 442:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(const char *str, int n);
 443:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(unsigned int c);
 444:fltk-1.3.4-1/FL/Fl_Device.H ****   void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 445:fltk-1.3.4-1/FL/Fl_Device.H ****   int height();
 446:fltk-1.3.4-1/FL/Fl_Device.H ****   int descent();
 447:fltk-1.3.4-1/FL/Fl_Device.H **** #if ! defined(FL_DOXYGEN)
 448:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Offscreen create_offscreen_with_alpha(int w, int h);
 449:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 450:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 451:fltk-1.3.4-1/FL/Fl_Device.H **** };
 452:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 453:fltk-1.3.4-1/FL/Fl_Device.H **** #if defined(WIN32) || defined(FL_DOXYGEN)
 454:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 455:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief The MSWindows-specific graphics class.
 456:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 457:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the MSWindows platform.
 458:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 459:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_GDI_Graphics_Driver : public Fl_Graphics_Driver {
 460:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 461:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 462:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 463:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(Fl_Color c);
 464:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(uchar r, uchar g, uchar b);
 465:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char* str, int n, int x, int y);
 466:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(int angle, const char *str, int n, int x, int y);
 467:fltk-1.3.4-1/FL/Fl_Device.H ****   void rtl_draw(const char* str, int n, int x, int y);
 468:fltk-1.3.4-1/FL/Fl_Device.H ****   void font(Fl_Font face, Fl_Fontsize size);
 469:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 470:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 471:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_RGB_Image *img, int XP, int YP, int WP, int HP, int cx, int cy);
 472:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0);
 473:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3);
 474:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0);
 475:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1);
 476:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(const char *str, int n);
 477:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(unsigned int c);
 478:fltk-1.3.4-1/FL/Fl_Device.H ****   void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 479:fltk-1.3.4-1/FL/Fl_Device.H ****   int height();
 480:fltk-1.3.4-1/FL/Fl_Device.H ****   int descent();
 481:fltk-1.3.4-1/FL/Fl_Device.H **** #if ! defined(FL_DOXYGEN)
 482:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen_with_alpha(int x,int y,int w,int h,HBITMAP bitmap,int srcx,int srcy);
 483:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 484:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 485:fltk-1.3.4-1/FL/Fl_Device.H **** };
 486:fltk-1.3.4-1/FL/Fl_Device.H **** 
 487:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 488:fltk-1.3.4-1/FL/Fl_Device.H ****  The graphics driver used when printing on MSWindows.
 489:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 490:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the MSWindows platform. It 's extremely similar to Fl_GDI_Graphi
 491:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 492:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_GDI_Printer_Graphics_Driver : public Fl_GDI_Graphics_Driver {
 493:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 494:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 495:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 496:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 497:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *bm, int XP, int YP, int WP, int HP, int cx, int cy);
 498:fltk-1.3.4-1/FL/Fl_Device.H ****   int draw_scaled(Fl_Image *img, int XP, int YP, int WP, int HP);
 499:fltk-1.3.4-1/FL/Fl_Device.H **** };
 500:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 501:fltk-1.3.4-1/FL/Fl_Device.H **** #if !(defined(__APPLE__) || defined(WIN32))
 502:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 503:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief The Xlib-specific graphics class.
 504:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 505:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the Xlib platform.
 506:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 507:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Xlib_Graphics_Driver : public Fl_Graphics_Driver {
 508:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 509:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 510:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
  67              		.loc 1 510 0
  68              		.cfi_startproc
  69              	.LVL2:
  70              		.loc 1 510 0
  71 0000 488B0500 		movq	_ZN23Fl_Xlib_Graphics_Driver8class_idE(%rip), %rax
  71      000000
  72 0007 C3       		ret
  73              		.cfi_endproc
  74              	.LFE373:
  76              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN23Fl_Xlib_Gr
  77              	.LCOLDE2:
  78              		.section	.text._ZN23Fl_Xlib_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN23Fl_Xlib_Graphics_Dr
  79              	.LHOTE2:
  80              		.section	.text.unlikely._ZL17figure_out_visualv,"ax",@progbits
  81              	.LCOLDB3:
  82              		.section	.text._ZL17figure_out_visualv,"ax",@progbits
  83              	.LHOTB3:
  84              		.p2align 4,,15
  86              	_ZL17figure_out_visualv:
  87              	.LFB468:
  88              		.file 2 "fltk-1.3.4-1/src/fl_color.cxx"
   1:fltk-1.3.4-1/src/fl_color.cxx ****    1              		.file	"fl_color.cxx"
   2:fltk-1.3.4-1/src/fl_color.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/fl_color.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/fl_color.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
   5:fltk-1.3.4-1/src/fl_color.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/fl_color.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/fl_color.cxx ****    7              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
   8:fltk-1.3.4-1/src/fl_color.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/fl_color.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/fl_color.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/fl_color.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
  12:fltk-1.3.4-1/src/fl_color.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/fl_color.cxx ****   13              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
  14:fltk-1.3.4-1/src/fl_color.cxx ****   14              		.weak	_ZN9Fl_Device10class_nameEv
  15:fltk-1.3.4-1/src/fl_color.cxx ****   16              	_ZN9Fl_Device10class_nameEv:
  16:fltk-1.3.4-1/src/fl_color.cxx ****   17              	.LFB335:
  17:fltk-1.3.4-1/src/fl_color.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Device.H"
  18:fltk-1.3.4-1/src/fl_color.cxx ****    1:fltk-1.3.4-1/FL/Fl_Device.H **** //
  19:fltk-1.3.4-1/src/fl_color.cxx ****    2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
  20:fltk-1.3.4-1/src/fl_color.cxx ****    3:fltk-1.3.4-1/FL/Fl_Device.H **** //
  21:fltk-1.3.4-1/src/fl_color.cxx ****    4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Su
  22:fltk-1.3.4-1/src/fl_color.cxx ****    5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
  23:fltk-1.3.4-1/src/fl_color.cxx ****    6:fltk-1.3.4-1/FL/Fl_Device.H **** //
  24:fltk-1.3.4-1/src/fl_color.cxx ****    7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
  25:fltk-1.3.4-1/src/fl_color.cxx ****    8:fltk-1.3.4-1/FL/Fl_Device.H **** //
  26:fltk-1.3.4-1/src/fl_color.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights
  27:fltk-1.3.4-1/src/fl_color.cxx ****   10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with th
  28:fltk-1.3.4-1/src/fl_color.cxx ****   11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  29:fltk-1.3.4-1/src/fl_color.cxx ****   12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  30:fltk-1.3.4-1/src/fl_color.cxx ****   13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  31:fltk-1.3.4-1/src/fl_color.cxx ****   14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  32:fltk-1.3.4-1/src/fl_color.cxx ****   15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  33:fltk-1.3.4-1/src/fl_color.cxx ****   16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  34:fltk-1.3.4-1/src/fl_color.cxx ****   17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  35:fltk-1.3.4-1/src/fl_color.cxx ****   18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  36:fltk-1.3.4-1/src/fl_color.cxx ****   19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  37:fltk-1.3.4-1/src/fl_color.cxx ****   20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  38:fltk-1.3.4-1/src/fl_color.cxx ****   21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver,
  39:fltk-1.3.4-1/src/fl_color.cxx ****   22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  40:fltk-1.3.4-1/src/fl_color.cxx ****   23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  41:fltk-1.3.4-1/src/fl_color.cxx ****   24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  42:fltk-1.3.4-1/src/fl_color.cxx ****   25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  43:fltk-1.3.4-1/src/fl_color.cxx ****   26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  44:fltk-1.3.4-1/src/fl_color.cxx ****   27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  45:fltk-1.3.4-1/src/fl_color.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
  46:fltk-1.3.4-1/src/fl_color.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
  47:fltk-1.3.4-1/src/fl_color.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
  48:fltk-1.3.4-1/src/fl_color.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  49:fltk-1.3.4-1/src/fl_color.cxx ****   32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  50:fltk-1.3.4-1/src/fl_color.cxx ****   33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  51:fltk-1.3.4-1/src/fl_color.cxx ****   34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  52:fltk-1.3.4-1/src/fl_color.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  53:fltk-1.3.4-1/src/fl_color.cxx ****   36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  54:fltk-1.3.4-1/src/fl_color.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  55:fltk-1.3.4-1/src/fl_color.cxx ****   38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all g
  56:fltk-1.3.4-1/src/fl_color.cxx ****   39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  57:fltk-1.3.4-1/src/fl_color.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  58:fltk-1.3.4-1/src/fl_color.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  59:fltk-1.3.4-1/src/fl_color.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  89              		.loc 2 59 0
  90              		.cfi_startproc
  60:fltk-1.3.4-1/src/fl_color.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  61:fltk-1.3.4-1/src/fl_color.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
  91              		.loc 2 61 0
  92 0000 488B0500 		movq	fl_visual(%rip), %rax
  92      000000
  60:fltk-1.3.4-1/src/fl_color.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  93              		.loc 2 60 0
  94 0007 C6050000 		movb	$1, _ZL8beenhere(%rip)
  94      000001
  95              		.loc 2 61 0
  96 000e 488B7020 		movq	32(%rax), %rsi
  97 0012 4885F6   		testq	%rsi, %rsi
  98 0015 0F843D01 		je	.L5
  98      0000
  99              		.loc 2 61 0 is_stmt 0 discriminator 1
 100 001b 488B7828 		movq	40(%rax), %rdi
 101 001f 4885FF   		testq	%rdi, %rdi
 102 0022 0F843001 		je	.L5
 102      0000
 103              		.loc 2 61 0 discriminator 2
 104 0028 4C8B4030 		movq	48(%rax), %r8
 105 002c 31D2     		xorl	%edx, %edx
 106 002e B8010000 		movl	$1, %eax
 106      00
 107 0033 4D85C0   		testq	%r8, %r8
 108 0036 0F841C01 		je	.L5
 108      0000
 109 003c 0F1F4000 		.p2align 4,,10
 110              		.p2align 3
 111              	.L43:
 112              	.LVL3:
  62:fltk-1.3.4-1/src/fl_color.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
  63:fltk-1.3.4-1/src/fl_color.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
  64:fltk-1.3.4-1/src/fl_color.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
  65:fltk-1.3.4-1/src/fl_color.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  66:fltk-1.3.4-1/src/fl_color.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w
  67:fltk-1.3.4-1/src/fl_color.cxx ****   50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  68:fltk-1.3.4-1/src/fl_color.cxx ****   51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  69:fltk-1.3.4-1/src/fl_color.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
  70:fltk-1.3.4-1/src/fl_color.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
  71:fltk-1.3.4-1/src/fl_color.cxx ****   54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  72:fltk-1.3.4-1/src/fl_color.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  73:fltk-1.3.4-1/src/fl_color.cxx ****   56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
 113              		.loc 2 73 0 is_stmt 1 discriminator 2
 114 0040 4863C8   		movslq	%eax, %rcx
 115 0043 4885F1   		testq	%rsi, %rcx
 116 0046 0F851401 		jne	.L8
 116      0000
 117              		.loc 2 73 0 is_stmt 0 discriminator 3
 118 004c 83C201   		addl	$1, %edx
 119              	.LVL4:
 120 004f 01C0     		addl	%eax, %eax
 121              	.LVL5:
 122 0051 83FA20   		cmpl	$32, %edx
 123 0054 75EA     		jne	.L43
  74:fltk-1.3.4-1/src/fl_color.cxx ****   57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
  75:fltk-1.3.4-1/src/fl_color.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
 124              		.loc 2 75 0 is_stmt 1
 125 0056 C7050000 		movl	$24, fl_redshift(%rip)
 125      00001800 
 125      0000
 126 0060 31C0     		xorl	%eax, %eax
 127              	.LVL6:
 128 0062 41B91800 		movl	$24, %r9d
 128      0000
 129              	.LVL7:
 130              	.L14:
  76:fltk-1.3.4-1/src/fl_color.cxx ****   59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
 131              		.loc 2 76 0 discriminator 4
 132 0068 88050000 		movb	%al, fl_redmask(%rip)
 132      0000
 133              	.LVL8:
  77:fltk-1.3.4-1/src/fl_color.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
  78:fltk-1.3.4-1/src/fl_color.cxx ****   61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
 134              		.loc 2 78 0 discriminator 4
 135 006e 31D2     		xorl	%edx, %edx
 136 0070 B8010000 		movl	$1, %eax
 136      00
 137 0075 EB17     		jmp	.L16
 138              	.LVL9:
 139 0077 660F1F84 		.p2align 4,,10
 139      00000000 
 139      00
 140              		.p2align 3
 141              	.L54:
 142              		.loc 2 78 0 is_stmt 0 discriminator 3
 143 0080 83C201   		addl	$1, %edx
 144              	.LVL10:
 145 0083 01C0     		addl	%eax, %eax
 146              	.LVL11:
 147 0085 83FA20   		cmpl	$32, %edx
 148 0088 0F843201 		je	.L53
 148      0000
 149              	.LVL12:
 150              	.L16:
 151              		.loc 2 78 0 discriminator 2
 152 008e 4863C8   		movslq	%eax, %rcx
 153 0091 4885F9   		testq	%rdi, %rcx
 154 0094 74EA     		je	.L54
 155 0096 89D6     		movl	%edx, %esi
 156 0098 EB08     		jmp	.L19
 157              	.LVL13:
 158 009a 660F1F44 		.p2align 4,,10
 158      0000
 159              		.p2align 3
 160              	.L55:
  79:fltk-1.3.4-1/src/fl_color.cxx ****   62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
 161              		.loc 2 79 0 is_stmt 1
 162 00a0 89CE     		movl	%ecx, %esi
 163              	.LVL14:
 164              	.L19:
 165              		.loc 2 79 0 is_stmt 0 discriminator 3
 166 00a2 01C0     		addl	%eax, %eax
 167              	.LVL15:
 168 00a4 8D4E01   		leal	1(%rsi), %ecx
 169              	.LVL16:
 170 00a7 7408     		je	.L18
 171              		.loc 2 79 0 discriminator 2
 172 00a9 4C63D0   		movslq	%eax, %r10
 173 00ac 4985FA   		testq	%rdi, %r10
 174 00af 75EF     		jne	.L55
 175              	.L18:
  80:fltk-1.3.4-1/src/fl_color.cxx ****   63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 176              		.loc 2 80 0 is_stmt 1
 177 00b1 8D7EF9   		leal	-7(%rsi), %edi
  81:fltk-1.3.4-1/src/fl_color.cxx ****   64:fltk-1.3.4-1/FL/Fl_Device.H **** 
 178              		.loc 2 81 0
 179 00b4 29D1     		subl	%edx, %ecx
 180              	.LVL17:
 181 00b6 B8FFFFFF 		movl	$-1, %eax
 181      FF
 182              	.LVL18:
 183 00bb 83F907   		cmpl	$7, %ecx
  80:fltk-1.3.4-1/src/fl_color.cxx ****   63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 184              		.loc 2 80 0
 185 00be 893D0000 		movl	%edi, fl_greenshift(%rip)
 185      0000
 186              		.loc 2 81 0
 187 00c4 0F8E4901 		jle	.L56
 187      0000
 188              	.LVL19:
 189              	.L21:
 190              		.loc 2 81 0 is_stmt 0 discriminator 4
 191 00ca 88050000 		movb	%al, fl_greenmask(%rip)
 191      0000
 192              	.LVL20:
  82:fltk-1.3.4-1/src/fl_color.cxx ****   65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  83:fltk-1.3.4-1/src/fl_color.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
 193              		.loc 2 83 0 is_stmt 1 discriminator 4
 194 00d0 31D2     		xorl	%edx, %edx
 195 00d2 B8010000 		movl	$1, %eax
 195      00
 196 00d7 EB15     		jmp	.L23
 197              	.LVL21:
 198 00d9 0F1F8000 		.p2align 4,,10
 198      000000
 199              		.p2align 3
 200              	.L58:
 201              		.loc 2 83 0 is_stmt 0 discriminator 3
 202 00e0 83C201   		addl	$1, %edx
 203              	.LVL22:
 204 00e3 01C0     		addl	%eax, %eax
 205              	.LVL23:
 206 00e5 83FA20   		cmpl	$32, %edx
 207 00e8 0F84B200 		je	.L57
 207      0000
 208              	.LVL24:
 209              	.L23:
 210              		.loc 2 83 0 discriminator 2
 211 00ee 4863C8   		movslq	%eax, %rcx
 212 00f1 4C85C1   		testq	%r8, %rcx
 213 00f4 74EA     		je	.L58
 214 00f6 89D6     		movl	%edx, %esi
 215 00f8 EB08     		jmp	.L26
 216              	.LVL25:
 217 00fa 660F1F44 		.p2align 4,,10
 217      0000
 218              		.p2align 3
 219              	.L59:
  84:fltk-1.3.4-1/src/fl_color.cxx ****   67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type in
 220              		.loc 2 84 0 is_stmt 1
 221 0100 89CE     		movl	%ecx, %esi
 222              	.LVL26:
 223              	.L26:
 224              		.loc 2 84 0 is_stmt 0 discriminator 3
 225 0102 01C0     		addl	%eax, %eax
 226              	.LVL27:
 227 0104 8D4E01   		leal	1(%rsi), %ecx
 228              	.LVL28:
 229 0107 7408     		je	.L25
 230              		.loc 2 84 0 discriminator 2
 231 0109 4C63D0   		movslq	%eax, %r10
 232 010c 4D85C2   		testq	%r8, %r10
 233 010f 75EF     		jne	.L59
 234              	.L25:
  85:fltk-1.3.4-1/src/fl_color.cxx ****   68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  86:fltk-1.3.4-1/src/fl_color.cxx ****   69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
 235              		.loc 2 86 0 is_stmt 1
 236 0111 29D1     		subl	%edx, %ecx
 237              	.LVL29:
  85:fltk-1.3.4-1/src/fl_color.cxx ****   68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 238              		.loc 2 85 0
 239 0113 83EE07   		subl	$7, %esi
 240              	.LVL30:
 241              		.loc 2 86 0
 242 0116 B8FFFFFF 		movl	$-1, %eax
 242      FF
 243              	.LVL31:
 244 011b 83F907   		cmpl	$7, %ecx
  85:fltk-1.3.4-1/src/fl_color.cxx ****   68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 245              		.loc 2 85 0
 246 011e 89350000 		movl	%esi, fl_blueshift(%rip)
 246      0000
 247              		.loc 2 86 0
 248 0124 0F8EDB00 		jle	.L60
 248      0000
 249              	.LVL32:
 250              	.L28:
 251 012a 4139F9   		cmpl	%edi, %r9d
 252              		.loc 2 86 0 is_stmt 0 discriminator 4
 253 012d 88050000 		movb	%al, fl_bluemask(%rip)
 253      0000
 254              	.LVL33:
 255 0133 89F8     		movl	%edi, %eax
 256 0135 410F4EC1 		cmovle	%r9d, %eax
 257              	.LVL34:
 258 0139 39F0     		cmpl	%esi, %eax
 259 013b 0F4FC6   		cmovg	%esi, %eax
 260              	.LVL35:
  87:fltk-1.3.4-1/src/fl_color.cxx ****   70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  88:fltk-1.3.4-1/src/fl_color.cxx ****   71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  89:fltk-1.3.4-1/src/fl_color.cxx ****   72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class 
  90:fltk-1.3.4-1/src/fl_color.cxx ****   73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/src/fl_color.cxx ****   74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 261              		.loc 2 91 0 is_stmt 1 discriminator 4
 262 013e 85C0     		testl	%eax, %eax
 263 0140 0F889A00 		js	.L61
 263      0000
  92:fltk-1.3.4-1/src/fl_color.cxx ****   75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  93:fltk-1.3.4-1/src/fl_color.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
  94:fltk-1.3.4-1/src/fl_color.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
  95:fltk-1.3.4-1/src/fl_color.cxx ****   78:fltk-1.3.4-1/FL/Fl_Device.H ****    
 264              		.loc 2 95 0
 265 0146 C7050000 		movl	$0, fl_extrashift(%rip)
 265      00000000 
 265      0000
 266 0150 C3       		ret
 267              	.LVL36:
 268              		.p2align 4,,10
 269 0151 0F1F8000 		.p2align 3
 269      000000
 270              	.L5:
  63:fltk-1.3.4-1/src/fl_color.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
 271              		.loc 2 63 0
 272 0158 C6050000 		movb	$0, fl_redmask(%rip)
 272      000000
  64:fltk-1.3.4-1/src/fl_color.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 273              		.loc 2 64 0
 274 015f C3       		ret
 275              	.LVL37:
 276              		.p2align 4,,10
 277              		.p2align 3
 278              	.L8:
 279 0160 4189D1   		movl	%edx, %r9d
 280 0163 EB06     		jmp	.L12
 281              	.LVL38:
 282              		.p2align 4,,10
 283 0165 0F1F00   		.p2align 3
 284              	.L62:
  74:fltk-1.3.4-1/src/fl_color.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
 285              		.loc 2 74 0
 286 0168 4189C9   		movl	%ecx, %r9d
 287              	.LVL39:
 288              	.L12:
  74:fltk-1.3.4-1/src/fl_color.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
 289              		.loc 2 74 0 is_stmt 0 discriminator 3
 290 016b 01C0     		addl	%eax, %eax
 291              	.LVL40:
 292 016d 418D4901 		leal	1(%r9), %ecx
 293              	.LVL41:
 294 0171 7408     		je	.L11
  74:fltk-1.3.4-1/src/fl_color.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
 295              		.loc 2 74 0 discriminator 2
 296 0173 4C63D0   		movslq	%eax, %r10
 297 0176 4985F2   		testq	%rsi, %r10
 298 0179 75ED     		jne	.L62
 299              	.L11:
  76:fltk-1.3.4-1/src/fl_color.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
 300              		.loc 2 76 0 is_stmt 1
 301 017b 29D1     		subl	%edx, %ecx
 302              	.LVL42:
  75:fltk-1.3.4-1/src/fl_color.cxx ****   59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
 303              		.loc 2 75 0
 304 017d 4183E907 		subl	$7, %r9d
 305              	.LVL43:
  76:fltk-1.3.4-1/src/fl_color.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
 306              		.loc 2 76 0
 307 0181 83F907   		cmpl	$7, %ecx
  75:fltk-1.3.4-1/src/fl_color.cxx ****   59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
 308              		.loc 2 75 0
 309 0184 44890D00 		movl	%r9d, fl_redshift(%rip)
 309      000000
  76:fltk-1.3.4-1/src/fl_color.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
 310              		.loc 2 76 0
 311 018b 0F8E9000 		jle	.L63
 311      0000
 312 0191 B8FFFFFF 		movl	$-1, %eax
 312      FF
 313              	.LVL44:
 314 0196 E9CDFEFF 		jmp	.L14
 314      FF
 315              	.LVL45:
 316 019b 0F1F4400 		.p2align 4,,10
 316      00
 317              		.p2align 3
 318              	.L57:
  85:fltk-1.3.4-1/src/fl_color.cxx ****   69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
 319              		.loc 2 85 0
 320 01a0 C7050000 		movl	$24, fl_blueshift(%rip)
 320      00001800 
 320      0000
 321 01aa 31C0     		xorl	%eax, %eax
 322              	.LVL46:
 323 01ac BE180000 		movl	$24, %esi
 323      00
 324 01b1 E974FFFF 		jmp	.L28
 324      FF
 325              	.LVL47:
 326 01b6 662E0F1F 		.p2align 4,,10
 326      84000000 
 326      0000
 327              		.p2align 3
 328              	.L53:
  80:fltk-1.3.4-1/src/fl_color.cxx ****   64:fltk-1.3.4-1/FL/Fl_Device.H **** 
 329              		.loc 2 80 0
 330 01c0 C7050000 		movl	$24, fl_greenshift(%rip)
 330      00001800 
 330      0000
 331 01ca 31C0     		xorl	%eax, %eax
 332              	.LVL48:
 333 01cc BF180000 		movl	$24, %edi
 333      00
 334 01d1 E9F4FEFF 		jmp	.L21
 334      FF
 335              	.LVL49:
 336 01d6 662E0F1F 		.p2align 4,,10
 336      84000000 
 336      0000
 337              		.p2align 3
 338              	.L61:
  92:fltk-1.3.4-1/src/fl_color.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 339              		.loc 2 92 0
 340 01e0 89C2     		movl	%eax, %edx
  93:fltk-1.3.4-1/src/fl_color.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
 341              		.loc 2 93 0
 342 01e2 4129C1   		subl	%eax, %r9d
 343 01e5 29C7     		subl	%eax, %edi
  92:fltk-1.3.4-1/src/fl_color.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 344              		.loc 2 92 0
 345 01e7 F7DA     		negl	%edx
  93:fltk-1.3.4-1/src/fl_color.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
 346              		.loc 2 93 0
 347 01e9 29C6     		subl	%eax, %esi
 348 01eb 44890D00 		movl	%r9d, fl_redshift(%rip)
 348      000000
  92:fltk-1.3.4-1/src/fl_color.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 349              		.loc 2 92 0
 350 01f2 89150000 		movl	%edx, fl_extrashift(%rip)
 350      0000
  93:fltk-1.3.4-1/src/fl_color.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
 351              		.loc 2 93 0
 352 01f8 893D0000 		movl	%edi, fl_greenshift(%rip)
 352      0000
 353 01fe 89350000 		movl	%esi, fl_blueshift(%rip)
 353      0000
 354 0204 C3       		ret
 355              	.LVL50:
 356              	.L60:
 357 0205 B8FF0000 		movl	$255, %eax
 357      00
 358 020a D3F8     		sarl	%cl, %eax
 359 020c F7D0     		notl	%eax
 360 020e E917FFFF 		jmp	.L28
 360      FF
 361              	.LVL51:
 362              	.L56:
 363 0213 B8FF0000 		movl	$255, %eax
 363      00
 364 0218 D3F8     		sarl	%cl, %eax
 365 021a F7D0     		notl	%eax
 366 021c E9A9FEFF 		jmp	.L21
 366      FF
 367              	.LVL52:
 368              	.L63:
 369 0221 B8FF0000 		movl	$255, %eax
 369      00
 370              	.LVL53:
 371 0226 D3F8     		sarl	%cl, %eax
 372 0228 F7D0     		notl	%eax
 373 022a E939FEFF 		jmp	.L14
 373      FF
 374              		.cfi_endproc
 375              	.LFE468:
 377              		.section	.text.unlikely._ZL17figure_out_visualv
 378              	.LCOLDE3:
 379              		.section	.text._ZL17figure_out_visualv
 380              	.LHOTE3:
 381              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 382              		.align 2
 383              	.LCOLDB4:
 384              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 385              	.LHOTB4:
 386              		.align 2
 387              		.p2align 4,,15
 388              		.weak	_ZN9Fl_DeviceD0Ev
 390              	_ZN9Fl_DeviceD0Ev:
 391              	.LFB339:
  91:fltk-1.3.4-1/FL/Fl_Device.H **** };
 392              		.loc 1 91 0
 393              		.cfi_startproc
 394              	.LVL54:
  91:fltk-1.3.4-1/FL/Fl_Device.H **** };
 395              		.loc 1 91 0
 396 0000 E9000000 		jmp	_ZdlPv
 396      00
 397              	.LVL55:
 398              		.cfi_endproc
 399              	.LFE339:
 401              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 402              	.LCOLDE4:
 403              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 404              	.LHOTE4:
 405              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_DriverD2Ev,"axG",@progbits,_ZN23Fl_Xlib_Graphics_Dri
 406              		.align 2
 407              	.LCOLDB5:
 408              		.section	.text._ZN23Fl_Xlib_Graphics_DriverD2Ev,"axG",@progbits,_ZN23Fl_Xlib_Graphics_DriverD5Ev,c
 409              	.LHOTB5:
 410              		.align 2
 411              		.p2align 4,,15
 412              		.weak	_ZN23Fl_Xlib_Graphics_DriverD2Ev
 414              	_ZN23Fl_Xlib_Graphics_DriverD2Ev:
 415              	.LFB483:
 507:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 416              		.loc 1 507 0
 417              		.cfi_startproc
 418              	.LVL56:
 419              	.LBB87:
 420              	.LBB88:
 412:fltk-1.3.4-1/FL/Fl_Device.H **** };
 421              		.loc 1 412 0
 422 0000 48C70700 		movq	$_ZTV18Fl_Graphics_Driver+16, (%rdi)
 422      000000
 423 0007 488BBF58 		movq	1624(%rdi), %rdi
 423      060000
 424              	.LVL57:
 425 000e 4885FF   		testq	%rdi, %rdi
 426 0011 740D     		je	.L65
 427 0013 E9000000 		jmp	free
 427      00
 428              	.LVL58:
 429 0018 0F1F8400 		.p2align 4,,10
 429      00000000 
 430              		.p2align 3
 431              	.L65:
 432 0020 F3C3     		rep ret
 433              	.LBE88:
 434              	.LBE87:
 435              		.cfi_endproc
 436              	.LFE483:
 438              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_DriverD2Ev,"axG",@progbits,_ZN23Fl_Xlib_Graphics_Dri
 439              	.LCOLDE5:
 440              		.section	.text._ZN23Fl_Xlib_Graphics_DriverD2Ev,"axG",@progbits,_ZN23Fl_Xlib_Graphics_DriverD5Ev,c
 441              	.LHOTE5:
 442              		.weak	_ZN23Fl_Xlib_Graphics_DriverD1Ev
 443              		.set	_ZN23Fl_Xlib_Graphics_DriverD1Ev,_ZN23Fl_Xlib_Graphics_DriverD2Ev
 444              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_DriverD0Ev,"axG",@progbits,_ZN23Fl_Xlib_Graphics_Dri
 445              		.align 2
 446              	.LCOLDB6:
 447              		.section	.text._ZN23Fl_Xlib_Graphics_DriverD0Ev,"axG",@progbits,_ZN23Fl_Xlib_Graphics_DriverD5Ev,c
 448              	.LHOTB6:
 449              		.align 2
 450              		.p2align 4,,15
 451              		.weak	_ZN23Fl_Xlib_Graphics_DriverD0Ev
 453              	_ZN23Fl_Xlib_Graphics_DriverD0Ev:
 454              	.LFB485:
 507:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 455              		.loc 1 507 0
 456              		.cfi_startproc
 457              	.LVL59:
 458 0000 53       		pushq	%rbx
 459              		.cfi_def_cfa_offset 16
 460              		.cfi_offset 3, -16
 507:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 461              		.loc 1 507 0
 462 0001 4889FB   		movq	%rdi, %rbx
 463              	.LBB89:
 464              	.LBB90:
 465              	.LBB91:
 412:fltk-1.3.4-1/FL/Fl_Device.H **** };
 466              		.loc 1 412 0
 467 0004 48C70700 		movq	$_ZTV18Fl_Graphics_Driver+16, (%rdi)
 467      000000
 468 000b 488BBF58 		movq	1624(%rdi), %rdi
 468      060000
 469              	.LVL60:
 470 0012 4885FF   		testq	%rdi, %rdi
 471 0015 7405     		je	.L68
 472 0017 E8000000 		call	free
 472      00
 473              	.LVL61:
 474              	.L68:
 475              	.LBE91:
 476              	.LBE90:
 477              	.LBE89:
 507:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 478              		.loc 1 507 0
 479 001c 4889DF   		movq	%rbx, %rdi
 480 001f 5B       		popq	%rbx
 481              		.cfi_def_cfa_offset 8
 482              	.LVL62:
 483 0020 E9000000 		jmp	_ZdlPv
 483      00
 484              	.LVL63:
 485              		.cfi_endproc
 486              	.LFE485:
 488              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_DriverD0Ev,"axG",@progbits,_ZN23Fl_Xlib_Graphics_Dri
 489              	.LCOLDE6:
 490              		.section	.text._ZN23Fl_Xlib_Graphics_DriverD0Ev,"axG",@progbits,_ZN23Fl_Xlib_Graphics_DriverD5Ev,c
 491              	.LHOTE6:
 492              		.section	.text.unlikely._ZN2Fl10free_colorEji.part.4,"ax",@progbits
 493              		.align 2
 494              	.LCOLDB7:
 495              		.section	.text._ZN2Fl10free_colorEji.part.4,"ax",@progbits
 496              	.LHOTB7:
 497              		.align 2
 498              		.p2align 4,,15
 500              	_ZN2Fl10free_colorEji.part.4:
 501              	.LFB490:
  96:fltk-1.3.4-1/src/fl_color.cxx ****   79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be c
  97:fltk-1.3.4-1/src/fl_color.cxx ****   80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
  98:fltk-1.3.4-1/src/fl_color.cxx ****   81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ..
  99:fltk-1.3.4-1/src/fl_color.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 100:fltk-1.3.4-1/src/fl_color.cxx ****   83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 101:fltk-1.3.4-1/src/fl_color.cxx ****   84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 102:fltk-1.3.4-1/src/fl_color.cxx ****   19              		.loc 1 84 0
 103:fltk-1.3.4-1/src/fl_color.cxx ****   20              		.cfi_startproc
 104:fltk-1.3.4-1/src/fl_color.cxx ****   21              	.LVL0:
 105:fltk-1.3.4-1/src/fl_color.cxx ****   22              		.loc 1 84 0
 106:fltk-1.3.4-1/src/fl_color.cxx ****   23 0000 488B0500 		movq	_ZN9Fl_Device8class_idE(%rip), %rax
 107:fltk-1.3.4-1/src/fl_color.cxx ****   23      000000
 108:fltk-1.3.4-1/src/fl_color.cxx ****   24 0007 C3       		ret
 109:fltk-1.3.4-1/src/fl_color.cxx ****   25              		.cfi_endproc
 110:fltk-1.3.4-1/src/fl_color.cxx ****   26              	.LFE335:
 111:fltk-1.3.4-1/src/fl_color.cxx ****   28              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
 112:fltk-1.3.4-1/src/fl_color.cxx ****   29              	.LCOLDE0:
 113:fltk-1.3.4-1/src/fl_color.cxx ****   30              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
 114:fltk-1.3.4-1/src/fl_color.cxx ****   31              	.LHOTE0:
 115:fltk-1.3.4-1/src/fl_color.cxx ****   32              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
 116:fltk-1.3.4-1/src/fl_color.cxx ****   33              		.align 2
 117:fltk-1.3.4-1/src/fl_color.cxx ****   34              	.LCOLDB1:
 118:fltk-1.3.4-1/src/fl_color.cxx ****   35              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 119:fltk-1.3.4-1/src/fl_color.cxx ****   36              	.LHOTB1:
 120:fltk-1.3.4-1/src/fl_color.cxx ****   37              		.align 2
 121:fltk-1.3.4-1/src/fl_color.cxx ****   38              		.p2align 4,,15
 122:fltk-1.3.4-1/src/fl_color.cxx ****   39              		.weak	_ZN9Fl_DeviceD2Ev
 123:fltk-1.3.4-1/src/fl_color.cxx ****   41              	_ZN9Fl_DeviceD2Ev:
 124:fltk-1.3.4-1/src/fl_color.cxx ****   42              	.LFB337:
 125:fltk-1.3.4-1/src/fl_color.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 126:fltk-1.3.4-1/src/fl_color.cxx ****   86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
 127:fltk-1.3.4-1/src/fl_color.cxx ****   87:fltk-1.3.4-1/FL/Fl_Device.H ****    
 128:fltk-1.3.4-1/src/fl_color.cxx ****   88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the de
 129:fltk-1.3.4-1/src/fl_color.cxx ****   89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
 130:fltk-1.3.4-1/src/fl_color.cxx ****   90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 131:fltk-1.3.4-1/src/fl_color.cxx ****   91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
 132:fltk-1.3.4-1/src/fl_color.cxx ****   43              		.loc 1 91 0
 133:fltk-1.3.4-1/src/fl_color.cxx ****   44              		.cfi_startproc
 134:fltk-1.3.4-1/src/fl_color.cxx ****   45              	.LVL1:
 135:fltk-1.3.4-1/src/fl_color.cxx ****   46 0000 F3C3     		rep ret
 136:fltk-1.3.4-1/src/fl_color.cxx ****   47              		.cfi_endproc
 137:fltk-1.3.4-1/src/fl_color.cxx ****   48              	.LFE337:
 138:fltk-1.3.4-1/src/fl_color.cxx ****   50              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
 139:fltk-1.3.4-1/src/fl_color.cxx ****   51              	.LCOLDE1:
 140:fltk-1.3.4-1/src/fl_color.cxx ****   52              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 141:fltk-1.3.4-1/src/fl_color.cxx ****   53              	.LHOTE1:
 142:fltk-1.3.4-1/src/fl_color.cxx ****   54              		.weak	_ZN9Fl_DeviceD1Ev
 143:fltk-1.3.4-1/src/fl_color.cxx ****   55              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
 144:fltk-1.3.4-1/src/fl_color.cxx ****   56              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver10class_nameEv,"axG",@progb
 145:fltk-1.3.4-1/src/fl_color.cxx ****   57              		.align 2
 146:fltk-1.3.4-1/src/fl_color.cxx ****   58              	.LCOLDB2:
 147:fltk-1.3.4-1/src/fl_color.cxx ****   59              		.section	.text._ZN23Fl_Xlib_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN23
 148:fltk-1.3.4-1/src/fl_color.cxx ****   60              	.LHOTB2:
 149:fltk-1.3.4-1/src/fl_color.cxx ****   61              		.align 2
 150:fltk-1.3.4-1/src/fl_color.cxx ****   62              		.p2align 4,,15
 151:fltk-1.3.4-1/src/fl_color.cxx ****   63              		.weak	_ZN23Fl_Xlib_Graphics_Driver10class_nameEv
 152:fltk-1.3.4-1/src/fl_color.cxx ****   65              	_ZN23Fl_Xlib_Graphics_Driver10class_nameEv:
 153:fltk-1.3.4-1/src/fl_color.cxx ****   66              	.LFB373:
 154:fltk-1.3.4-1/src/fl_color.cxx ****   92:fltk-1.3.4-1/FL/Fl_Device.H **** };
 155:fltk-1.3.4-1/src/fl_color.cxx ****   93:fltk-1.3.4-1/FL/Fl_Device.H **** 
 156:fltk-1.3.4-1/src/fl_color.cxx ****   94:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_REGION_STACK_SIZE 10
 157:fltk-1.3.4-1/src/fl_color.cxx ****   95:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_MATRIX_STACK_SIZE 32
 158:fltk-1.3.4-1/src/fl_color.cxx ****   96:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 159:fltk-1.3.4-1/src/fl_color.cxx ****   97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver F
 160:fltk-1.3.4-1/src/fl_color.cxx ****   98:fltk-1.3.4-1/FL/Fl_Device.H ****  Typically, FLTK applications do not use directly objects fro
 161:fltk-1.3.4-1/src/fl_color.cxx ****   99:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations (e.g., fl_rectf()) that operate on the cu
 162:fltk-1.3.4-1/src/fl_color.cxx ****  100:fltk-1.3.4-1/FL/Fl_Device.H ****  Drawing operations are functionally presented in \ref drawin
 163:fltk-1.3.4-1/src/fl_color.cxx ****  101:fltk-1.3.4-1/FL/Fl_Device.H ****  in the \ref fl_drawings and \ref fl_attributes modules. The 
 164:fltk-1.3.4-1/src/fl_color.cxx ****  102:fltk-1.3.4-1/FL/Fl_Device.H ****  gives at any time the graphics driver used by all drawing op
 165:fltk-1.3.4-1/src/fl_color.cxx ****  103:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations are directed to another drawing surface b
 166:fltk-1.3.4-1/src/fl_color.cxx ****  104:fltk-1.3.4-1/FL/Fl_Device.H ****  
 167:fltk-1.3.4-1/src/fl_color.cxx ****  105:fltk-1.3.4-1/FL/Fl_Device.H ****  \p The Fl_Graphics_Driver class is of interest if one wants 
 168:fltk-1.3.4-1/src/fl_color.cxx ****  106:fltk-1.3.4-1/FL/Fl_Device.H ****  An example would be to draw to a PDF file. This would involv
 169:fltk-1.3.4-1/src/fl_color.cxx ****  107:fltk-1.3.4-1/FL/Fl_Device.H ****  class. This new class should implement all virtual methods o
 170:fltk-1.3.4-1/src/fl_color.cxx ****  108:fltk-1.3.4-1/FL/Fl_Device.H ****  to support all FLTK drawing functions.
 171:fltk-1.3.4-1/src/fl_color.cxx ****  109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 172:fltk-1.3.4-1/src/fl_color.cxx ****  110:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Graphics_Driver : public Fl_Device {
 173:fltk-1.3.4-1/src/fl_color.cxx ****  111:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 174:fltk-1.3.4-1/src/fl_color.cxx ****  112:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A 2D coordinate transformation matrix
 175:fltk-1.3.4-1/src/fl_color.cxx ****  113:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 176:fltk-1.3.4-1/src/fl_color.cxx ****  114:fltk-1.3.4-1/FL/Fl_Device.H ****   struct matrix {double a, b, c, d, x, y;};
 177:fltk-1.3.4-1/src/fl_color.cxx ****  115:fltk-1.3.4-1/FL/Fl_Device.H **** private:
 178:fltk-1.3.4-1/src/fl_color.cxx ****  116:fltk-1.3.4-1/FL/Fl_Device.H ****   static const matrix m0;
 179:fltk-1.3.4-1/src/fl_color.cxx ****  117:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font_; // current font
 180:fltk-1.3.4-1/src/fl_color.cxx ****  118:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size_; // current font size
 181:fltk-1.3.4-1/src/fl_color.cxx ****  119:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color_; // current color
 182:fltk-1.3.4-1/src/fl_color.cxx ****  120:fltk-1.3.4-1/FL/Fl_Device.H ****   int sptr;
 183:fltk-1.3.4-1/src/fl_color.cxx ****  121:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int matrix_stack_size = FL_MATRIX_STACK_SIZE;
 184:fltk-1.3.4-1/src/fl_color.cxx ****  122:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix stack[FL_MATRIX_STACK_SIZE];
 185:fltk-1.3.4-1/src/fl_color.cxx ****  123:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix m;
 186:fltk-1.3.4-1/src/fl_color.cxx ****  124:fltk-1.3.4-1/FL/Fl_Device.H ****   int n, p_size, gap_;
 187:fltk-1.3.4-1/src/fl_color.cxx ****  125:fltk-1.3.4-1/FL/Fl_Device.H ****   XPOINT *p;
 188:fltk-1.3.4-1/src/fl_color.cxx ****  126:fltk-1.3.4-1/FL/Fl_Device.H ****   int what;
 189:fltk-1.3.4-1/src/fl_color.cxx ****  127:fltk-1.3.4-1/FL/Fl_Device.H ****   int fl_clip_state_number;
 190:fltk-1.3.4-1/src/fl_color.cxx ****  128:fltk-1.3.4-1/FL/Fl_Device.H ****   int rstackptr;
 191:fltk-1.3.4-1/src/fl_color.cxx ****  129:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int region_stack_max = FL_REGION_STACK_SIZE - 
 192:fltk-1.3.4-1/src/fl_color.cxx ****  130:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region rstack[FL_REGION_STACK_SIZE];
 193:fltk-1.3.4-1/src/fl_color.cxx ****  131:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 194:fltk-1.3.4-1/src/fl_color.cxx ****  132:fltk-1.3.4-1/FL/Fl_Device.H ****   int numcount;
 195:fltk-1.3.4-1/src/fl_color.cxx ****  133:fltk-1.3.4-1/FL/Fl_Device.H ****   int counts[20];
 196:fltk-1.3.4-1/src/fl_color.cxx ****  134:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 197:fltk-1.3.4-1/src/fl_color.cxx ****  135:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font_Descriptor *font_descriptor_;
 198:fltk-1.3.4-1/src/fl_color.cxx ****  136:fltk-1.3.4-1/FL/Fl_Device.H ****   void transformed_vertex0(COORD_T x, COORD_T y);
 199:fltk-1.3.4-1/src/fl_color.cxx ****  137:fltk-1.3.4-1/FL/Fl_Device.H ****   void fixloop();
 200:fltk-1.3.4-1/src/fl_color.cxx ****  138:fltk-1.3.4-1/FL/Fl_Device.H ****   
 201:fltk-1.3.4-1/src/fl_color.cxx ****  139:fltk-1.3.4-1/FL/Fl_Device.H **** protected:
 202:fltk-1.3.4-1/src/fl_color.cxx ****  140:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef FL_DOXYGEN
 203:fltk-1.3.4-1/src/fl_color.cxx ****  141:fltk-1.3.4-1/FL/Fl_Device.H ****   enum {LINE, LOOP, POLYGON, POINT_};
 204:fltk-1.3.4-1/src/fl_color.cxx ****  142:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_no() { return n; }
 205:fltk-1.3.4-1/src/fl_color.cxx ****  143:fltk-1.3.4-1/FL/Fl_Device.H ****   inline XPOINT *vertices() {return p;}
 206:fltk-1.3.4-1/src/fl_color.cxx ****  144:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_kind() {return what;}
 207:fltk-1.3.4-1/src/fl_color.cxx ****  145:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 208:fltk-1.3.4-1/src/fl_color.cxx ****  146:fltk-1.3.4-1/FL/Fl_Device.H **** /*  ** \brief red color for background and/or mixing if devic
 209:fltk-1.3.4-1/src/fl_color.cxx ****  147:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_r_; 
 210:fltk-1.3.4-1/src/fl_color.cxx ****  148:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief green color for background and/or mixing if devic
 211:fltk-1.3.4-1/src/fl_color.cxx ****  149:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_g_; 
 212:fltk-1.3.4-1/src/fl_color.cxx ****  150:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief blue color for background and/or mixing if device
 213:fltk-1.3.4-1/src/fl_color.cxx ****  151:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_b_; */
 214:fltk-1.3.4-1/src/fl_color.cxx ****  152:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Pixmap;
 215:fltk-1.3.4-1/src/fl_color.cxx ****  153:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Bitmap;
 216:fltk-1.3.4-1/src/fl_color.cxx ****  154:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_RGB_Image;
 217:fltk-1.3.4-1/src/fl_color.cxx ****  155:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rect(int x, int y, int w, int h);
 218:fltk-1.3.4-1/src/fl_color.cxx ****  156:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rectf(int x, int y, int w, int h);
 219:fltk-1.3.4-1/src/fl_color.cxx ****  157:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line_style(int style, int width, char* dashe
 220:fltk-1.3.4-1/src/fl_color.cxx ****  158:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1);
 221:fltk-1.3.4-1/src/fl_color.cxx ****  159:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2);
 222:fltk-1.3.4-1/src/fl_color.cxx ****  160:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2, int x3)
 223:fltk-1.3.4-1/src/fl_color.cxx ****  161:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1);
 224:fltk-1.3.4-1/src/fl_color.cxx ****  162:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2);
 225:fltk-1.3.4-1/src/fl_color.cxx ****  163:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2, int y3)
 226:fltk-1.3.4-1/src/fl_color.cxx ****  164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 227:fltk-1.3.4-1/src/fl_color.cxx ****  165:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1, int x2, i
 228:fltk-1.3.4-1/src/fl_color.cxx ****  166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 229:fltk-1.3.4-1/src/fl_color.cxx ****  167:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 230:fltk-1.3.4-1/src/fl_color.cxx ****  168:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, float x, float 
 231:fltk-1.3.4-1/src/fl_color.cxx ****  169:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 232:fltk-1.3.4-1/src/fl_color.cxx ****  170:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(int angle, const char *str, int n, int 
 233:fltk-1.3.4-1/src/fl_color.cxx ****  171:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rtl_draw(const char *str, int n, int x, int 
 234:fltk-1.3.4-1/src/fl_color.cxx ****  172:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_font(Fl_Font face, Fl_Fontsize size);
 235:fltk-1.3.4-1/src/fl_color.cxx ****  173:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(Fl_Color c);
 236:fltk-1.3.4-1/src/fl_color.cxx ****  174:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(uchar r, uchar g, uchar b);
 237:fltk-1.3.4-1/src/fl_color.cxx ****  175:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_point(int x, int y);
 238:fltk-1.3.4-1/src/fl_color.cxx ****  176:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2,
 239:fltk-1.3.4-1/src/fl_color.cxx ****  177:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2,
 240:fltk-1.3.4-1/src/fl_color.cxx ****  178:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int 
 241:fltk-1.3.4-1/src/fl_color.cxx ****  179:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int 
 242:fltk-1.3.4-1/src/fl_color.cxx ****  180:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_points();
 243:fltk-1.3.4-1/src/fl_color.cxx ****  181:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_line();
 244:fltk-1.3.4-1/src/fl_color.cxx ****  182:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_loop();
 245:fltk-1.3.4-1/src/fl_color.cxx ****  183:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_polygon();
 246:fltk-1.3.4-1/src/fl_color.cxx ****  184:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_vertex(double x, double y);
 247:fltk-1.3.4-1/src/fl_color.cxx ****  185:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_curve(double X0, double Y0, double X1, doubl
 248:fltk-1.3.4-1/src/fl_color.cxx ****  186:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_circle(double x, double y, double r);
 249:fltk-1.3.4-1/src/fl_color.cxx ****  187:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(double x, double y, double r, double sta
 250:fltk-1.3.4-1/src/fl_color.cxx ****  188:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(int x, int y, int w, int h, double a1, d
 251:fltk-1.3.4-1/src/fl_color.cxx ****  189:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pie(int x, int y, int w, int h, double a1, d
 252:fltk-1.3.4-1/src/fl_color.cxx ****  190:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_points();
 253:fltk-1.3.4-1/src/fl_color.cxx ****  191:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_line();
 254:fltk-1.3.4-1/src/fl_color.cxx ****  192:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_loop();
 255:fltk-1.3.4-1/src/fl_color.cxx ****  193:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_polygon();
 256:fltk-1.3.4-1/src/fl_color.cxx ****  194:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_transformed_vertex(double xf, double yf);
 257:fltk-1.3.4-1/src/fl_color.cxx ****  195:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_clip(int x, int y, int w, int h);
 258:fltk-1.3.4-1/src/fl_color.cxx ****  196:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_clip_box(int x, int y, int w, int h, int &X, 
 259:fltk-1.3.4-1/src/fl_color.cxx ****  197:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_not_clipped(int x, int y, int w, int h);
 260:fltk-1.3.4-1/src/fl_color.cxx ****  198:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_no_clip();
 261:fltk-1.3.4-1/src/fl_color.cxx ****  199:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_clip();
 262:fltk-1.3.4-1/src/fl_color.cxx ****  200:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_complex_polygon();
 263:fltk-1.3.4-1/src/fl_color.cxx ****  201:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_gap();
 264:fltk-1.3.4-1/src/fl_color.cxx ****  202:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_complex_polygon();
 265:fltk-1.3.4-1/src/fl_color.cxx ****  203:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_matrix();
 266:fltk-1.3.4-1/src/fl_color.cxx ****  204:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_matrix();
 267:fltk-1.3.4-1/src/fl_color.cxx ****  205:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_mult_matrix(double a, double b, double c, do
 268:fltk-1.3.4-1/src/fl_color.cxx ****  206:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x, double y);
 269:fltk-1.3.4-1/src/fl_color.cxx ****  207:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x);
 270:fltk-1.3.4-1/src/fl_color.cxx ****  208:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_translate(double x, double y);
 271:fltk-1.3.4-1/src/fl_color.cxx ****  209:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rotate(double d);
 272:fltk-1.3.4-1/src/fl_color.cxx ****  210:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_x(double x, double y);
 273:fltk-1.3.4-1/src/fl_color.cxx ****  211:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_y(double x, double y);
 274:fltk-1.3.4-1/src/fl_color.cxx ****  212:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dx(double x, double y);
 275:fltk-1.3.4-1/src/fl_color.cxx ****  213:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dy(double x, double y);
 276:fltk-1.3.4-1/src/fl_color.cxx ****  214:fltk-1.3.4-1/FL/Fl_Device.H ****   friend Fl_Region fl_clip_region();
 277:fltk-1.3.4-1/src/fl_color.cxx ****  215:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_clip_region(Fl_Region r);
 278:fltk-1.3.4-1/src/fl_color.cxx ****  216:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_restore_clip();
 279:fltk-1.3.4-1/src/fl_color.cxx ****  217:fltk-1.3.4-1/FL/Fl_Device.H ****   
 280:fltk-1.3.4-1/src/fl_color.cxx ****  218:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(const uchar* buf, int X,int Y,int
 281:fltk-1.3.4-1/src/fl_color.cxx ****  219:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image_mono(const uchar* buf, int X,int 
 282:fltk-1.3.4-1/src/fl_color.cxx ****  220:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(Fl_Draw_Image_Cb cb, void* data, 
 283:fltk-1.3.4-1/src/fl_color.cxx ****  221:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_draw_image_mono(Fl_Draw_Image_Cb c
 284:fltk-1.3.4-1/src/fl_color.cxx ****  222:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void gl_start();
 285:fltk-1.3.4-1/src/fl_color.cxx ****  223:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_copy_offscreen(int x, int y, int w
 286:fltk-1.3.4-1/src/fl_color.cxx ****  224:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix *fl_matrix; /**< Points to the current coordinate tr
 287:fltk-1.3.4-1/src/fl_color.cxx ****  225:fltk-1.3.4-1/FL/Fl_Device.H **** 
 288:fltk-1.3.4-1/src/fl_color.cxx ****  226:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The constructor. */
 289:fltk-1.3.4-1/src/fl_color.cxx ****  227:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Graphics_Driver();
 290:fltk-1.3.4-1/src/fl_color.cxx ****  228:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rect(int x, int y, int w, int h). */
 291:fltk-1.3.4-1/src/fl_color.cxx ****  229:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rect(int x, int y, int w, int h);
 292:fltk-1.3.4-1/src/fl_color.cxx ****  230:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rectf(int x, int y, int w, int h). */
 293:fltk-1.3.4-1/src/fl_color.cxx ****  231:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rectf(int x, int y, int w, int h);
 294:fltk-1.3.4-1/src/fl_color.cxx ****  232:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line_style(int style, int width, char* da
 295:fltk-1.3.4-1/src/fl_color.cxx ****  233:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line_style(int style, int width=0, char* dashe
 296:fltk-1.3.4-1/src/fl_color.cxx ****  234:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1). */
 297:fltk-1.3.4-1/src/fl_color.cxx ****  235:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1);
 298:fltk-1.3.4-1/src/fl_color.cxx ****  236:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2). */
 299:fltk-1.3.4-1/src/fl_color.cxx ****  237:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2);
 300:fltk-1.3.4-1/src/fl_color.cxx ****  238:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2, int 
 301:fltk-1.3.4-1/src/fl_color.cxx ****  239:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2, int x3);
 302:fltk-1.3.4-1/src/fl_color.cxx ****  240:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1). */
 303:fltk-1.3.4-1/src/fl_color.cxx ****  241:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1);
 304:fltk-1.3.4-1/src/fl_color.cxx ****  242:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2). */
 305:fltk-1.3.4-1/src/fl_color.cxx ****  243:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2);
 306:fltk-1.3.4-1/src/fl_color.cxx ****  244:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2, int 
 307:fltk-1.3.4-1/src/fl_color.cxx ****  245:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2, int y3);
 308:fltk-1.3.4-1/src/fl_color.cxx ****  246:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1). */
 309:fltk-1.3.4-1/src/fl_color.cxx ****  247:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1);
 310:fltk-1.3.4-1/src/fl_color.cxx ****  248:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1, int x2
 311:fltk-1.3.4-1/src/fl_color.cxx ****  249:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1, int x2, int
 312:fltk-1.3.4-1/src/fl_color.cxx ****  250:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(const char *str, int n, int x, int y
 313:fltk-1.3.4-1/src/fl_color.cxx ****  251:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, int x, int y) {}
 314:fltk-1.3.4-1/src/fl_color.cxx ****  252:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 315:fltk-1.3.4-1/src/fl_color.cxx ****  253:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, float x, float y)
 316:fltk-1.3.4-1/src/fl_color.cxx ****  254:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 502              		.loc 2 316 0
 503              		.cfi_startproc
 504              	.LVL64:
 505 0000 55       		pushq	%rbp
 506              		.cfi_def_cfa_offset 16
 507              		.cfi_offset 6, -16
 508              	.LBB92:
 317:fltk-1.3.4-1/src/fl_color.cxx ****  255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, i
 318:fltk-1.3.4-1/src/fl_color.cxx ****  256:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(int angle, const char *str, int n, int x,
 319:fltk-1.3.4-1/src/fl_color.cxx ****  257:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rtl_draw(const char *str, int n, int x, i
 320:fltk-1.3.4-1/src/fl_color.cxx ****  258:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rtl_draw(const char *str, int n, int x, int y)
 321:fltk-1.3.4-1/src/fl_color.cxx ****  259:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(Fl_Color c). */
 509              		.loc 2 321 0
 510 0001 4863EE   		movslq	%esi, %rbp
 511              	.LBE92:
 316:fltk-1.3.4-1/src/fl_color.cxx ****  255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, i
 512              		.loc 2 316 0
 513 0004 53       		pushq	%rbx
 514              		.cfi_def_cfa_offset 24
 515              		.cfi_offset 3, -24
 516              	.LBB95:
 517              		.loc 2 321 0
 518 0005 4889EA   		movq	%rbp, %rdx
 519 0008 89FB     		movl	%edi, %ebx
 520 000a 48C1E208 		salq	$8, %rdx
 521              	.LBE95:
 316:fltk-1.3.4-1/src/fl_color.cxx ****  255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, i
 522              		.loc 2 316 0
 523 000e 4883EC08 		subq	$8, %rsp
 524              		.cfi_def_cfa_offset 32
 525              	.LBB96:
 526              		.loc 2 321 0
 527 0012 4801DA   		addq	%rbx, %rdx
 528 0015 48C1E204 		salq	$4, %rdx
 529 0019 0FB68200 		movzbl	fl_xmap+3(%rdx), %eax
 529      000000
 530 0020 4881C200 		addq	$fl_xmap, %rdx
 530      000000
 531 0027 84C0     		testb	%al, %al
 532 0029 7416     		je	.L73
 533              	.LVL65:
 534              	.LBB93:
 322:fltk-1.3.4-1/src/fl_color.cxx ****  260:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(Fl_Color c) {color_ = c;}
 323:fltk-1.3.4-1/src/fl_color.cxx ****  261:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(uchar r, uchar g, uchar b). */
 324:fltk-1.3.4-1/src/fl_color.cxx ****  262:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(uchar r, uchar g, uchar b) {}
 325:fltk-1.3.4-1/src/fl_color.cxx ****  263:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_point(int x, int y). */
 326:fltk-1.3.4-1/src/fl_color.cxx ****  264:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void point(int x, int y);
 327:fltk-1.3.4-1/src/fl_color.cxx ****  265:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int 
 328:fltk-1.3.4-1/src/fl_color.cxx ****  266:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, i
 535              		.loc 2 328 0
 536 002b 3C01     		cmpb	$1, %al
 537 002d 7421     		je	.L80
 538              	.LVL66:
 539              	.L75:
 329:fltk-1.3.4-1/src/fl_color.cxx ****  267:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int 
 330:fltk-1.3.4-1/src/fl_color.cxx ****  268:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, i
 331:fltk-1.3.4-1/src/fl_color.cxx ****  269:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, i
 540              		.loc 2 331 0
 541 002f 48C1E508 		salq	$8, %rbp
 542              	.LVL67:
 543 0033 4801DD   		addq	%rbx, %rbp
 544 0036 48C1E504 		salq	$4, %rbp
 545 003a C6850000 		movb	$0, fl_xmap+3(%rbp)
 545      000000
 546              	.L73:
 547              	.LBE93:
 548              	.LBE96:
 332:fltk-1.3.4-1/src/fl_color.cxx ****  270:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2
 333:fltk-1.3.4-1/src/fl_color.cxx ****  271:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, i
 549              		.loc 2 333 0
 550 0041 4883C408 		addq	$8, %rsp
 551              		.cfi_remember_state
 552              		.cfi_def_cfa_offset 24
 553 0045 5B       		popq	%rbx
 554              		.cfi_def_cfa_offset 16
 555              	.LVL68:
 556 0046 5D       		popq	%rbp
 557              		.cfi_def_cfa_offset 8
 558 0047 C3       		ret
 559              	.LVL69:
 560 0048 0F1F8400 		.p2align 4,,10
 560      00000000 
 561              		.p2align 3
 562              	.L80:
 563              		.cfi_restore_state
 564              	.LBB97:
 565              	.LBB94:
 329:fltk-1.3.4-1/src/fl_color.cxx ****  267:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int 
 566              		.loc 2 329 0
 567 0050 488B3500 		movq	fl_colormap(%rip), %rsi
 567      000000
 568              	.LVL70:
 569 0057 488B3D00 		movq	fl_display(%rip), %rdi
 569      000000
 570              	.LVL71:
 571 005e 4883C208 		addq	$8, %rdx
 572 0062 4531C0   		xorl	%r8d, %r8d
 573 0065 B9010000 		movl	$1, %ecx
 573      00
 574 006a E8000000 		call	XFreeColors
 574      00
 575              	.LVL72:
 576 006f EBBE     		jmp	.L75
 577              	.LBE94:
 578              	.LBE97:
 579              		.cfi_endproc
 580              	.LFE490:
 582              		.section	.text.unlikely._ZN2Fl10free_colorEji.part.4
 583              	.LCOLDE7:
 584              		.section	.text._ZN2Fl10free_colorEji.part.4
 585              	.LHOTE7:
 586              		.section	.text.unlikely._Z9fl_xpixelj,"ax",@progbits
 587              	.LCOLDB8:
 588              		.section	.text._Z9fl_xpixelj,"ax",@progbits
 589              	.LHOTB8:
 590              		.p2align 4,,15
 591              		.globl	_Z9fl_xpixelj
 593              	_Z9fl_xpixelj:
 594              	.LFB473:
 203:fltk-1.3.4-1/src/fl_color.cxx ****  142:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_no() { return n; }
 595              		.loc 2 203 0
 596              		.cfi_startproc
 597              	.LVL73:
 598 0000 4156     		pushq	%r14
 599              		.cfi_def_cfa_offset 16
 600              		.cfi_offset 14, -16
 601 0002 4155     		pushq	%r13
 602              		.cfi_def_cfa_offset 24
 603              		.cfi_offset 13, -24
 604 0004 4154     		pushq	%r12
 605              		.cfi_def_cfa_offset 32
 606              		.cfi_offset 12, -32
 607 0006 55       		pushq	%rbp
 608              		.cfi_def_cfa_offset 40
 609              		.cfi_offset 6, -40
 610 0007 53       		pushq	%rbx
 611              		.cfi_def_cfa_offset 48
 612              		.cfi_offset 3, -48
 613 0008 4883EC20 		subq	$32, %rsp
 614              		.cfi_def_cfa_offset 80
 203:fltk-1.3.4-1/src/fl_color.cxx ****  142:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_no() { return n; }
 615              		.loc 2 203 0
 616 000c 64488B04 		movq	%fs:40, %rax
 616      25280000 
 616      00
 617 0015 48894424 		movq	%rax, 24(%rsp)
 617      18
 618 001a 31C0     		xorl	%eax, %eax
 204:fltk-1.3.4-1/src/fl_color.cxx ****  143:fltk-1.3.4-1/FL/Fl_Device.H ****   inline XPOINT *vertices() {return p;}
 619              		.loc 2 204 0
 620 001c F7C700FF 		testl	$-256, %edi
 620      FFFF
 621 0022 0F857801 		jne	.L105
 621      0000
 622              	.LVL74:
 209:fltk-1.3.4-1/src/fl_color.cxx ****  148:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief green color for background and/or mixing if devic
 623              		.loc 2 209 0
 624 0028 89FB     		movl	%edi, %ebx
 625 002a 4889D8   		movq	%rbx, %rax
 626 002d 48C1E004 		salq	$4, %rax
 627 0031 48050000 		addq	$fl_xmap, %rax
 627      0000
 628 0037 80780300 		cmpb	$0, 3(%rax)
 629 003b 0F852F01 		jne	.L106
 629      0000
 630              	.LVL75:
 631              	.LBB112:
 632              	.LBB113:
 211:fltk-1.3.4-1/src/fl_color.cxx ****  150:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief blue color for background and/or mixing if device
 633              		.loc 2 211 0
 634 0041 803D0000 		cmpb	$0, _ZL8beenhere(%rip)
 634      000000
 635 0048 0F843202 		je	.L107
 635      0000
 636              	.LVL76:
 637              	.L85:
 638              	.LBB114:
 214:fltk-1.3.4-1/src/fl_color.cxx ****  153:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Bitmap;
 639              		.loc 2 214 0
 640 004e 8B3C9D00 		movl	_ZL7fl_cmap(,%rbx,4), %edi
 640      000000
 641              	.LVL77:
 642              	.LBE114:
 221:fltk-1.3.4-1/src/fl_color.cxx ****  160:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2, int x3)
 643              		.loc 2 221 0
 644 0055 0FB60500 		movzbl	fl_redmask(%rip), %eax
 644      000000
 645              	.LBB115:
 214:fltk-1.3.4-1/src/fl_color.cxx ****  153:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Bitmap;
 646              		.loc 2 214 0
 647 005c 89FD     		movl	%edi, %ebp
 648 005e 4189FE   		movl	%edi, %r14d
 649 0061 C1EF08   		shrl	$8, %edi
 650              	.LVL78:
 651 0064 C1ED18   		shrl	$24, %ebp
 652              	.LVL79:
 653 0067 41C1EE10 		shrl	$16, %r14d
 654              	.LVL80:
 655              	.LBE115:
 221:fltk-1.3.4-1/src/fl_color.cxx ****  160:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2, int x3)
 656              		.loc 2 221 0
 657 006b 84C0     		testb	%al, %al
 658              	.LBB116:
 214:fltk-1.3.4-1/src/fl_color.cxx ****  153:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Bitmap;
 659              		.loc 2 214 0
 660 006d 4189FD   		movl	%edi, %r13d
 661              	.LVL81:
 662              	.LBE116:
 221:fltk-1.3.4-1/src/fl_color.cxx ****  160:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2, int x3)
 663              		.loc 2 221 0
 664 0070 0F856A01 		jne	.L108
 664      0000
 665              	.LBB117:
 249:fltk-1.3.4-1/src/fl_color.cxx ****  188:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(int x, int y, int w, int h, double a1, d
 666              		.loc 2 249 0
 667 0076 8B350000 		movl	_ZZ9fl_xpixeljE9numcolors(%rip), %esi
 667      0000
 668              	.LBE117:
 217:fltk-1.3.4-1/src/fl_color.cxx ****  156:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rectf(int x, int y, int w, int h);
 669              		.loc 2 217 0
 670 007c 4C8B2500 		movq	fl_colormap(%rip), %r12
 670      000000
 671              	.LBB120:
 249:fltk-1.3.4-1/src/fl_color.cxx ****  188:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(int x, int y, int w, int h, double a1, d
 672              		.loc 2 249 0
 673 0083 85F6     		testl	%esi, %esi
 674 0085 0F840502 		je	.L109
 674      0000
 675              	.LVL82:
 676              	.L87:
 677 008b 488B1500 		movq	_ZZ9fl_xpixeljE9allcolors(%rip), %rdx
 677      000000
 678              	.LBE120:
 274:fltk-1.3.4-1/src/fl_color.cxx ****  213:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dy(double x, double y);
 679              		.loc 2 274 0
 680 0092 31C0     		xorl	%eax, %eax
 273:fltk-1.3.4-1/src/fl_color.cxx ****  212:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dx(double x, double y);
 681              		.loc 2 273 0
 682 0094 41B9FFFF 		movl	$2147483647, %r9d
 682      FF7F
 683              	.LBB121:
 684              	.LBB122:
 282:fltk-1.3.4-1/src/fl_color.cxx ****  221:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_draw_image_mono(Fl_Draw_Image_Cb c
 685              		.loc 2 282 0
 686 009a 450FB6C6 		movzbl	%r14b, %r8d
 283:fltk-1.3.4-1/src/fl_color.cxx ****  222:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void gl_start();
 687              		.loc 2 283 0
 688 009e 410FB6FD 		movzbl	%r13b, %edi
 689              	.LVL83:
 690              		.p2align 4,,10
 691 00a2 660F1F44 		.p2align 3
 691      0000
 692              	.L94:
 693              	.LBE122:
 275:fltk-1.3.4-1/src/fl_color.cxx ****  214:fltk-1.3.4-1/FL/Fl_Device.H ****   friend Fl_Region fl_clip_region();
 694              		.loc 2 275 0
 695 00a8 83EE01   		subl	$1, %esi
 696              	.LVL84:
 697 00ab 83FEFF   		cmpl	$-1, %esi
 698 00ae 7456     		je	.L95
 699              	.L110:
 700              	.LBB123:
 279:fltk-1.3.4-1/src/fl_color.cxx ****  218:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(const uchar* buf, int X,int Y,int
 701              		.loc 2 279 0
 702 00b0 89F1     		movl	%esi, %ecx
 281:fltk-1.3.4-1/src/fl_color.cxx ****  220:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(Fl_Draw_Image_Cb cb, void* data, 
 703              		.loc 2 281 0
 704 00b2 4189EE   		movl	%ebp, %r14d
 279:fltk-1.3.4-1/src/fl_color.cxx ****  218:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(const uchar* buf, int X,int Y,int
 705              		.loc 2 279 0
 706 00b5 48C1E104 		salq	$4, %rcx
 707 00b9 4801D1   		addq	%rdx, %rcx
 708              	.LVL85:
 281:fltk-1.3.4-1/src/fl_color.cxx ****  220:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(Fl_Draw_Image_Cb cb, void* data, 
 709              		.loc 2 281 0
 710 00bc 440FB651 		movzbl	9(%rcx), %r10d
 710      09
 711 00c1 4529D6   		subl	%r10d, %r14d
 712              	.LVL86:
 282:fltk-1.3.4-1/src/fl_color.cxx ****  221:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_draw_image_mono(Fl_Draw_Image_Cb c
 713              		.loc 2 282 0
 714 00c4 440FB651 		movzbl	11(%rcx), %r10d
 714      0B
 283:fltk-1.3.4-1/src/fl_color.cxx ****  222:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void gl_start();
 715              		.loc 2 283 0
 716 00c9 0FB6490D 		movzbl	13(%rcx), %ecx
 717              	.LVL87:
 281:fltk-1.3.4-1/src/fl_color.cxx ****  220:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(Fl_Draw_Image_Cb cb, void* data, 
 718              		.loc 2 281 0
 719 00cd 4589F3   		movl	%r14d, %r11d
 720 00d0 450FAFDE 		imull	%r14d, %r11d
 721              	.LVL88:
 282:fltk-1.3.4-1/src/fl_color.cxx ****  221:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_draw_image_mono(Fl_Draw_Image_Cb c
 722              		.loc 2 282 0
 723 00d4 4589C6   		movl	%r8d, %r14d
 724              	.LVL89:
 725 00d7 4529D6   		subl	%r10d, %r14d
 726 00da 4589F2   		movl	%r14d, %r10d
 727              	.LVL90:
 283:fltk-1.3.4-1/src/fl_color.cxx ****  222:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void gl_start();
 728              		.loc 2 283 0
 729 00dd 4189FE   		movl	%edi, %r14d
 730 00e0 4129CE   		subl	%ecx, %r14d
 731 00e3 450FAFD2 		imull	%r10d, %r10d
 732              	.LVL91:
 733 00e7 4489F1   		movl	%r14d, %ecx
 734              	.LVL92:
 735 00ea 410FAFCE 		imull	%r14d, %ecx
 736              	.LVL93:
 737 00ee 4501DA   		addl	%r11d, %r10d
 738              	.LVL94:
 739 00f1 4401D1   		addl	%r10d, %ecx
 740              	.LVL95:
 284:fltk-1.3.4-1/src/fl_color.cxx ****  223:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_copy_offscreen(int x, int y, int w
 741              		.loc 2 284 0
 742 00f4 4439C9   		cmpl	%r9d, %ecx
 743 00f7 7FAF     		jg	.L94
 744 00f9 89F0     		movl	%esi, %eax
 745              	.LVL96:
 746              	.LBE123:
 275:fltk-1.3.4-1/src/fl_color.cxx ****  214:fltk-1.3.4-1/FL/Fl_Device.H ****   friend Fl_Region fl_clip_region();
 747              		.loc 2 275 0
 748 00fb 83EE01   		subl	$1, %esi
 749              	.LVL97:
 750              	.LBB124:
 284:fltk-1.3.4-1/src/fl_color.cxx ****  223:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_copy_offscreen(int x, int y, int w
 751              		.loc 2 284 0
 752 00fe 4189C9   		movl	%ecx, %r9d
 753              	.LVL98:
 754              	.LBE124:
 275:fltk-1.3.4-1/src/fl_color.cxx ****  214:fltk-1.3.4-1/FL/Fl_Device.H ****   friend Fl_Region fl_clip_region();
 755              		.loc 2 275 0
 756 0101 83FEFF   		cmpl	$-1, %esi
 757 0104 75AA     		jne	.L110
 758              	.LVL99:
 759              	.L95:
 760              	.LBE121:
 286:fltk-1.3.4-1/src/fl_color.cxx ****  225:fltk-1.3.4-1/FL/Fl_Device.H **** 
 761              		.loc 2 286 0
 762 0106 89C5     		movl	%eax, %ebp
 763              	.LVL100:
 292:fltk-1.3.4-1/src/fl_color.cxx ****  231:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rectf(int x, int y, int w, int h);
 764              		.loc 2 292 0
 765 0108 488B3D00 		movq	fl_display(%rip), %rdi
 765      000000
 766 010f 4C89E6   		movq	%r12, %rsi
 767              	.LVL101:
 286:fltk-1.3.4-1/src/fl_color.cxx ****  225:fltk-1.3.4-1/FL/Fl_Device.H **** 
 768              		.loc 2 286 0
 769 0112 4989ED   		movq	%rbp, %r13
 770              	.LVL102:
 771 0115 49C1E504 		salq	$4, %r13
 772 0119 4901D5   		addq	%rdx, %r13
 773              	.LVL103:
 292:fltk-1.3.4-1/src/fl_color.cxx ****  231:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rectf(int x, int y, int w, int h);
 774              		.loc 2 292 0
 775 011c 4C89EA   		movq	%r13, %rdx
 776 011f E8000000 		call	XAllocColor
 776      00
 777              	.LVL104:
 778 0124 85C0     		testl	%eax, %eax
 293:fltk-1.3.4-1/src/fl_color.cxx ****  232:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line_style(int style, int width, char* da
 779              		.loc 2 293 0
 780 0126 4889D8   		movq	%rbx, %rax
 292:fltk-1.3.4-1/src/fl_color.cxx ****  231:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rectf(int x, int y, int w, int h);
 781              		.loc 2 292 0
 782 0129 0F859100 		jne	.L111
 782      0000
 783              	.LVL105:
 301:fltk-1.3.4-1/src/fl_color.cxx ****  240:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1). */
 784              		.loc 2 301 0
 785 012f 48C1E004 		salq	$4, %rax
 786              	.LVL106:
 787 0133 C6800000 		movb	$2, fl_xmap+3(%rax)
 787      000002
 302:fltk-1.3.4-1/src/fl_color.cxx ****  241:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1);
 788              		.loc 2 302 0
 789 013a 4889A800 		movq	%rbp, fl_xmap+8(%rax)
 789      000000
 790              	.LVL107:
 791              	.L99:
 304:fltk-1.3.4-1/src/fl_color.cxx ****  243:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2);
 792              		.loc 2 304 0
 793 0141 410FB655 		movzbl	9(%r13), %edx
 793      09
 794 0146 48C1E304 		salq	$4, %rbx
 795              	.LVL108:
 796 014a 88930000 		movb	%dl, fl_xmap(%rbx)
 796      0000
 305:fltk-1.3.4-1/src/fl_color.cxx ****  244:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2, int 
 797              		.loc 2 305 0
 798 0150 410FB655 		movzbl	11(%r13), %edx
 798      0B
 799 0155 88930000 		movb	%dl, fl_xmap+1(%rbx)
 799      0000
 306:fltk-1.3.4-1/src/fl_color.cxx ****  245:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2, int y3);
 800              		.loc 2 306 0
 801 015b 410FB655 		movzbl	13(%r13), %edx
 801      0D
 802 0160 88930000 		movb	%dl, fl_xmap+2(%rbx)
 802      0000
 803 0166 EB0C     		jmp	.L83
 804              	.LVL109:
 805 0168 0F1F8400 		.p2align 4,,10
 805      00000000 
 806              		.p2align 3
 807              	.L106:
 808              	.LBE113:
 809              	.LBE112:
 209:fltk-1.3.4-1/src/fl_color.cxx ****  148:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief green color for background and/or mixing if devic
 810              		.loc 2 209 0 discriminator 1
 811 0170 488B6808 		movq	8(%rax), %rbp
 812              	.LVL110:
 813              	.L83:
 309:fltk-1.3.4-1/src/fl_color.cxx ****  248:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1, int x2
 814              		.loc 2 309 0
 815 0174 488B5C24 		movq	24(%rsp), %rbx
 815      18
 816 0179 6448331C 		xorq	%fs:40, %rbx
 816      25280000 
 816      00
 817 0182 4889E8   		movq	%rbp, %rax
 818 0185 0F853102 		jne	.L112
 818      0000
 819 018b 4883C420 		addq	$32, %rsp
 820              		.cfi_remember_state
 821              		.cfi_def_cfa_offset 48
 822 018f 5B       		popq	%rbx
 823              		.cfi_def_cfa_offset 40
 824 0190 5D       		popq	%rbp
 825              		.cfi_def_cfa_offset 32
 826 0191 415C     		popq	%r12
 827              		.cfi_def_cfa_offset 24
 828 0193 415D     		popq	%r13
 829              		.cfi_def_cfa_offset 16
 830 0195 415E     		popq	%r14
 831              		.cfi_def_cfa_offset 8
 832 0197 C3       		ret
 833              	.LVL111:
 834 0198 0F1F8400 		.p2align 4,,10
 834      00000000 
 835              		.p2align 3
 836              	.L105:
 837              		.cfi_restore_state
 205:fltk-1.3.4-1/src/fl_color.cxx ****  144:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_kind() {return what;}
 838              		.loc 2 205 0
 839 01a0 89FE     		movl	%edi, %esi
 840 01a2 4889F8   		movq	%rdi, %rax
 841 01a5 C1EF18   		shrl	$24, %edi
 842              	.LVL112:
 843 01a8 C1EE10   		shrl	$16, %esi
 844              	.LVL113:
 845 01ab 0FB6D4   		movzbl	%ah, %edx
 846 01ae 400FB6F6 		movzbl	%sil, %esi
 847 01b2 E8000000 		call	_Z9fl_xpixelhhh
 847      00
 848              	.LVL114:
 849 01b7 4889C5   		movq	%rax, %rbp
 850 01ba EBB8     		jmp	.L83
 851              	.LVL115:
 852 01bc 0F1F4000 		.p2align 4,,10
 853              		.p2align 3
 854              	.L111:
 855              	.LBB135:
 856              	.LBB134:
 293:fltk-1.3.4-1/src/fl_color.cxx ****  232:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line_style(int style, int width, char* da
 857              		.loc 2 293 0
 858 01c0 48C1E004 		salq	$4, %rax
 859              	.LVL116:
 860 01c4 C6800000 		movb	$1, fl_xmap+3(%rax)
 860      000001
 294:fltk-1.3.4-1/src/fl_color.cxx ****  233:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line_style(int style, int width=0, char* dashe
 861              		.loc 2 294 0
 862 01cb 498B6D00 		movq	0(%r13), %rbp
 863              	.LVL117:
 864 01cf 4889A800 		movq	%rbp, fl_xmap+8(%rax)
 864      000000
 865 01d6 E966FFFF 		jmp	.L99
 865      FF
 866              	.LVL118:
 867 01db 0F1F4400 		.p2align 4,,10
 867      00
 868              		.p2align 3
 869              	.L108:
 225:fltk-1.3.4-1/src/fl_color.cxx ****  164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 870              		.loc 2 225 0
 871 01e0 89C1     		movl	%eax, %ecx
 872              	.LBB125:
 873              	.LBB126:
 193:fltk-1.3.4-1/src/fl_color.cxx ****  132:fltk-1.3.4-1/FL/Fl_Device.H ****   int numcount;
 874              		.loc 2 193 0
 875 01e2 21C5     		andl	%eax, %ebp
 876              	.LVL119:
 877              	.LBE126:
 878              	.LBE125:
 225:fltk-1.3.4-1/src/fl_color.cxx ****  164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 879              		.loc 2 225 0
 880 01e4 D1F8     		sarl	%eax
 881 01e6 F7D1     		notl	%ecx
 224:fltk-1.3.4-1/src/fl_color.cxx ****  163:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2, int y3)
 882              		.loc 2 224 0
 883 01e8 48C1E304 		salq	$4, %rbx
 884              	.LVL120:
 885              	.LBB127:
 886              	.LBB128:
 193:fltk-1.3.4-1/src/fl_color.cxx ****  132:fltk-1.3.4-1/FL/Fl_Device.H ****   int numcount;
 887              		.loc 2 193 0
 888 01ec 4589F0   		movl	%r14d, %r8d
 889              	.LBE128:
 890              	.LBE127:
 225:fltk-1.3.4-1/src/fl_color.cxx ****  164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 891              		.loc 2 225 0
 892 01ef 21C8     		andl	%ecx, %eax
 224:fltk-1.3.4-1/src/fl_color.cxx ****  163:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2, int y3)
 893              		.loc 2 224 0
 894 01f1 C6830000 		movb	$2, fl_xmap+3(%rbx)
 894      000002
 895              	.LVL121:
 225:fltk-1.3.4-1/src/fl_color.cxx ****  164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 896              		.loc 2 225 0
 897 01f8 09E8     		orl	%ebp, %eax
 898 01fa 88830000 		movb	%al, fl_xmap(%rbx)
 898      0000
 226:fltk-1.3.4-1/src/fl_color.cxx ****  165:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1, int x2, i
 899              		.loc 2 226 0
 900 0200 0FB60500 		movzbl	fl_greenmask(%rip), %eax
 900      000000
 901              	.LVL122:
 902 0207 89C1     		movl	%eax, %ecx
 903              	.LBB130:
 904              	.LBB129:
 193:fltk-1.3.4-1/src/fl_color.cxx ****  132:fltk-1.3.4-1/FL/Fl_Device.H ****   int numcount;
 905              		.loc 2 193 0
 906 0209 4121C0   		andl	%eax, %r8d
 907              	.LVL123:
 908              	.LBE129:
 909              	.LBE130:
 226:fltk-1.3.4-1/src/fl_color.cxx ****  165:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1, int x2, i
 910              		.loc 2 226 0
 911 020c D1F8     		sarl	%eax
 912 020e F7D1     		notl	%ecx
 913 0210 21C8     		andl	%ecx, %eax
 914 0212 4409C0   		orl	%r8d, %eax
 915 0215 88830000 		movb	%al, fl_xmap+1(%rbx)
 915      0000
 227:fltk-1.3.4-1/src/fl_color.cxx ****  166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 916              		.loc 2 227 0
 917 021b 0FB60500 		movzbl	fl_bluemask(%rip), %eax
 917      000000
 918              	.LVL124:
 919 0222 89C1     		movl	%eax, %ecx
 920              	.LBB131:
 921              	.LBB132:
 193:fltk-1.3.4-1/src/fl_color.cxx ****  132:fltk-1.3.4-1/FL/Fl_Device.H ****   int numcount;
 922              		.loc 2 193 0
 923 0224 21C7     		andl	%eax, %edi
 924              	.LVL125:
 925              	.LBE132:
 926              	.LBE131:
 227:fltk-1.3.4-1/src/fl_color.cxx ****  166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 927              		.loc 2 227 0
 928 0226 D1F8     		sarl	%eax
 929 0228 F7D1     		notl	%ecx
 930 022a 21C8     		andl	%ecx, %eax
 232:fltk-1.3.4-1/src/fl_color.cxx ****  171:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rtl_draw(const char *str, int n, int x, int 
 931              		.loc 2 232 0
 932 022c 8B0D0000 		movl	fl_redshift(%rip), %ecx
 932      0000
 227:fltk-1.3.4-1/src/fl_color.cxx ****  166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 933              		.loc 2 227 0
 934 0232 09F8     		orl	%edi, %eax
 232:fltk-1.3.4-1/src/fl_color.cxx ****  171:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rtl_draw(const char *str, int n, int x, int 
 935              		.loc 2 232 0
 936 0234 400FB6FF 		movzbl	%dil, %edi
 227:fltk-1.3.4-1/src/fl_color.cxx ****  166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 937              		.loc 2 227 0
 938 0238 88830000 		movb	%al, fl_xmap+2(%rbx)
 938      0000
 232:fltk-1.3.4-1/src/fl_color.cxx ****  171:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rtl_draw(const char *str, int n, int x, int 
 939              		.loc 2 232 0
 940 023e 400FB6C5 		movzbl	%bpl, %eax
 941 0242 D3E0     		sall	%cl, %eax
 942 0244 8B0D0000 		movl	fl_greenshift(%rip), %ecx
 942      0000
 943 024a 89C5     		movl	%eax, %ebp
 944 024c 410FB6C0 		movzbl	%r8b, %eax
 945 0250 D3E0     		sall	%cl, %eax
 946 0252 8B0D0000 		movl	fl_blueshift(%rip), %ecx
 946      0000
 947 0258 8D440500 		leal	0(%rbp,%rax), %eax
 948 025c D3E7     		sall	%cl, %edi
 949 025e 8B0D0000 		movl	fl_extrashift(%rip), %ecx
 949      0000
 950 0264 01F8     		addl	%edi, %eax
 951 0266 D3F8     		sarl	%cl, %eax
 952 0268 4863E8   		movslq	%eax, %rbp
 953 026b 4889AB00 		movq	%rbp, fl_xmap+8(%rbx)
 953      000000
 954 0272 E9FDFEFF 		jmp	.L83
 954      FF
 955              	.LVL126:
 956 0277 660F1F84 		.p2align 4,,10
 956      00000000 
 956      00
 957              		.p2align 3
 958              	.L107:
 211:fltk-1.3.4-1/src/fl_color.cxx ****  150:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief blue color for background and/or mixing if device
 959              		.loc 2 211 0
 960 0280 E8000000 		call	_ZL17figure_out_visualv
 960      00
 961              	.LVL127:
 962 0285 E9C4FDFF 		jmp	.L85
 962      FF
 963              	.LVL128:
 964 028a 660F1F44 		.p2align 4,,10
 964      0000
 965              		.p2align 3
 966              	.L109:
 967              	.LBB133:
 968              	.LBB118:
 251:fltk-1.3.4-1/src/fl_color.cxx ****  190:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_points();
 969              		.loc 2 251 0
 970 0290 89E8     		movl	%ebp, %eax
 252:fltk-1.3.4-1/src/fl_color.cxx ****  191:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_line();
 971              		.loc 2 252 0
 972 0292 4889E2   		movq	%rsp, %rdx
 973 0295 4C89E6   		movq	%r12, %rsi
 251:fltk-1.3.4-1/src/fl_color.cxx ****  190:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_points();
 974              		.loc 2 251 0
 975 0298 C1E008   		sall	$8, %eax
 976 029b 66894424 		movw	%ax, 8(%rsp)
 976      08
 977 02a0 4489F0   		movl	%r14d, %eax
 978 02a3 C1E008   		sall	$8, %eax
 979 02a6 66894424 		movw	%ax, 10(%rsp)
 979      0A
 980 02ab 89F8     		movl	%edi, %eax
 252:fltk-1.3.4-1/src/fl_color.cxx ****  191:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_line();
 981              		.loc 2 252 0
 982 02ad 488B3D00 		movq	fl_display(%rip), %rdi
 982      000000
 983              	.LVL129:
 251:fltk-1.3.4-1/src/fl_color.cxx ****  190:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_points();
 984              		.loc 2 251 0
 985 02b4 C1E008   		sall	$8, %eax
 986 02b7 66894424 		movw	%ax, 12(%rsp)
 986      0C
 252:fltk-1.3.4-1/src/fl_color.cxx ****  191:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_line();
 987              		.loc 2 252 0
 988 02bc E8000000 		call	XAllocColor
 988      00
 989              	.LVL130:
 990 02c1 85C0     		testl	%eax, %eax
 991 02c3 0F85B700 		jne	.L113
 991      0000
 266:fltk-1.3.4-1/src/fl_color.cxx ****  205:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_mult_matrix(double a, double b, double c, do
 992              		.loc 2 266 0
 993 02c9 488B0500 		movq	fl_visual(%rip), %rax
 993      000000
 267:fltk-1.3.4-1/src/fl_color.cxx ****  206:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x, double y);
 994              		.loc 2 267 0
 995 02d0 488B1500 		movq	_ZZ9fl_xpixeljE9allcolors(%rip), %rdx
 995      000000
 266:fltk-1.3.4-1/src/fl_color.cxx ****  205:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_mult_matrix(double a, double b, double c, do
 996              		.loc 2 266 0
 997 02d7 48634838 		movslq	56(%rax), %rcx
 267:fltk-1.3.4-1/src/fl_color.cxx ****  206:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x, double y);
 998              		.loc 2 267 0
 999 02db 4885D2   		testq	%rdx, %rdx
 266:fltk-1.3.4-1/src/fl_color.cxx ****  205:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_mult_matrix(double a, double b, double c, do
 1000              		.loc 2 266 0
 1001 02de 890D0000 		movl	%ecx, _ZZ9fl_xpixeljE9numcolors(%rip)
 1001      0000
 267:fltk-1.3.4-1/src/fl_color.cxx ****  206:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x, double y);
 1002              		.loc 2 267 0
 1003 02e4 7457     		je	.L114
 1004              	.L89:
 1005              	.LVL131:
 1006              	.LBB119:
 268:fltk-1.3.4-1/src/fl_color.cxx ****  207:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x);
 1007              		.loc 2 268 0
 1008 02e6 85C9     		testl	%ecx, %ecx
 1009 02e8 448D49FF 		leal	-1(%rcx), %r9d
 1010              	.LVL132:
 1011 02ec 7435     		je	.L93
 1012 02ee 4D63C1   		movslq	%r9d, %r8
 1013 02f1 4589C9   		movl	%r9d, %r9d
 1014 02f4 498D70FF 		leaq	-1(%r8), %rsi
 1015 02f8 4C89C7   		movq	%r8, %rdi
 1016 02fb 48C1E704 		salq	$4, %rdi
 1017 02ff 4889F0   		movq	%rsi, %rax
 1018 0302 4801D7   		addq	%rdx, %rdi
 1019 0305 4C29C8   		subq	%r9, %rax
 1020 0308 4989C1   		movq	%rax, %r9
 1021              	.LVL133:
 1022 030b EB07     		jmp	.L92
 1023              	.LVL134:
 1024 030d 0F1F00   		.p2align 4,,10
 1025              		.p2align 3
 1026              	.L115:
 1027 0310 4883EE01 		subq	$1, %rsi
 1028              	.LVL135:
 1029              	.L92:
 1030 0314 4C8907   		movq	%r8, (%rdi)
 1031              	.LVL136:
 1032 0317 4883EF10 		subq	$16, %rdi
 1033 031b 4939F1   		cmpq	%rsi, %r9
 1034 031e 4989F0   		movq	%rsi, %r8
 1035 0321 75ED     		jne	.L115
 1036              	.LVL137:
 1037              	.L93:
 1038              	.LBE119:
 269:fltk-1.3.4-1/src/fl_color.cxx ****  208:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_translate(double x, double y);
 1039              		.loc 2 269 0
 1040 0323 488B3D00 		movq	fl_display(%rip), %rdi
 1040      000000
 1041 032a 4C89E6   		movq	%r12, %rsi
 1042 032d E8000000 		call	XQueryColors
 1042      00
 1043              	.LVL138:
 1044 0332 8B350000 		movl	_ZZ9fl_xpixeljE9numcolors(%rip), %esi
 1044      0000
 1045 0338 E94EFDFF 		jmp	.L87
 1045      FF
 1046              	.L114:
 267:fltk-1.3.4-1/src/fl_color.cxx ****  206:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x, double y);
 1047              		.loc 2 267 0
 1048 033d 4889C8   		movq	%rcx, %rax
 1049 0340 48BA0000 		movabsq	$571957152676052992, %rdx
 1049      00000000 
 1049      F007
 1050 034a 48C7C7FF 		movq	$-1, %rdi
 1050      FFFFFF
 1051 0351 48C1E004 		salq	$4, %rax
 1052 0355 4839D1   		cmpq	%rdx, %rcx
 1053 0358 480F46F8 		cmovbe	%rax, %rdi
 1054 035c E8000000 		call	_Znam
 1054      00
 1055              	.LVL139:
 1056 0361 8B0D0000 		movl	_ZZ9fl_xpixeljE9numcolors(%rip), %ecx
 1056      0000
 1057 0367 48890500 		movq	%rax, _ZZ9fl_xpixeljE9allcolors(%rip)
 1057      000000
 1058 036e 4889C2   		movq	%rax, %rdx
 1059 0371 E970FFFF 		jmp	.L89
 1059      FF
 1060 0376 662E0F1F 		.p2align 4,,10
 1060      84000000 
 1060      0000
 1061              		.p2align 3
 1062              	.L113:
 254:fltk-1.3.4-1/src/fl_color.cxx ****  193:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_polygon();
 1063              		.loc 2 254 0
 1064 0380 0FB65424 		movzbl	9(%rsp), %edx
 1064      09
 253:fltk-1.3.4-1/src/fl_color.cxx ****  192:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_loop();
 1065              		.loc 2 253 0
 1066 0385 48C1E304 		salq	$4, %rbx
 1067              	.LVL140:
 257:fltk-1.3.4-1/src/fl_color.cxx ****  196:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_clip_box(int x, int y, int w, int h, int &X, 
 1068              		.loc 2 257 0
 1069 0389 488B2C24 		movq	(%rsp), %rbp
 1070              	.LVL141:
 253:fltk-1.3.4-1/src/fl_color.cxx ****  192:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_loop();
 1071              		.loc 2 253 0
 1072 038d C6830000 		movb	$1, fl_xmap+3(%rbx)
 1072      000001
 257:fltk-1.3.4-1/src/fl_color.cxx ****  196:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_clip_box(int x, int y, int w, int h, int &X, 
 1073              		.loc 2 257 0
 1074 0394 4889AB00 		movq	%rbp, fl_xmap+8(%rbx)
 1074      000000
 254:fltk-1.3.4-1/src/fl_color.cxx ****  193:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_polygon();
 1075              		.loc 2 254 0
 1076 039b 88930000 		movb	%dl, fl_xmap(%rbx)
 1076      0000
 255:fltk-1.3.4-1/src/fl_color.cxx ****  194:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_transformed_vertex(double xf, double yf);
 1077              		.loc 2 255 0
 1078 03a1 0FB65424 		movzbl	11(%rsp), %edx
 1078      0B
 1079 03a6 88930000 		movb	%dl, fl_xmap+1(%rbx)
 1079      0000
 256:fltk-1.3.4-1/src/fl_color.cxx ****  195:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_clip(int x, int y, int w, int h);
 1080              		.loc 2 256 0
 1081 03ac 0FB65424 		movzbl	13(%rsp), %edx
 1081      0D
 1082 03b1 88930000 		movb	%dl, fl_xmap+2(%rbx)
 1082      0000
 1083 03b7 E9B8FDFF 		jmp	.L83
 1083      FF
 1084              	.LVL142:
 1085              	.L112:
 1086              	.LBE118:
 1087              	.LBE133:
 1088              	.LBE134:
 1089              	.LBE135:
 309:fltk-1.3.4-1/src/fl_color.cxx ****  248:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1, int x2
 1090              		.loc 2 309 0
 1091 03bc E8000000 		call	__stack_chk_fail
 1091      00
 1092              	.LVL143:
 1093              		.cfi_endproc
 1094              	.LFE473:
 1096              		.section	.text.unlikely._Z9fl_xpixelj
 1097              	.LCOLDE8:
 1098              		.section	.text._Z9fl_xpixelj
 1099              	.LHOTE8:
 1100              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver5colorEj,"ax",@progbits
 1101              		.align 2
 1102              	.LCOLDB9:
 1103              		.section	.text._ZN23Fl_Xlib_Graphics_Driver5colorEj,"ax",@progbits
 1104              	.LHOTB9:
 1105              		.align 2
 1106              		.p2align 4,,15
 1107              		.globl	_ZN23Fl_Xlib_Graphics_Driver5colorEj
 1109              	_ZN23Fl_Xlib_Graphics_Driver5colorEj:
 1110              	.LFB469:
 118:fltk-1.3.4-1/src/fl_color.cxx ****   36              	.LHOTB1:
 1111              		.loc 2 118 0
 1112              		.cfi_startproc
 1113              	.LVL144:
 1114              	.LBB147:
 119:fltk-1.3.4-1/src/fl_color.cxx ****   37              		.align 2
 1115              		.loc 2 119 0
 1116 0000 F7C600FF 		testl	$-256, %esi
 1116      FFFF
 1117 0006 7538     		jne	.L121
 1118              	.LVL145:
 124:fltk-1.3.4-1/src/fl_color.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 1119              		.loc 2 124 0
 1120 0008 48833D00 		cmpq	$0, fl_gc(%rip)
 1120      00000000 
 1121              	.LBB148:
 1122              	.LBB149:
 260:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(uchar r, uchar g, uchar b). */
 1123              		.loc 1 260 0
 1124 0010 897710   		movl	%esi, 16(%rdi)
 1125              	.LVL146:
 1126              	.LBE149:
 1127              	.LBE148:
 124:fltk-1.3.4-1/src/fl_color.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 1128              		.loc 2 124 0
 1129 0013 7453     		je	.L120
 1130 0015 89F7     		movl	%esi, %edi
 1131              	.LVL147:
 1132              	.LBE147:
 118:fltk-1.3.4-1/src/fl_color.cxx ****   36              	.LHOTB1:
 1133              		.loc 2 118 0
 1134 0017 4883EC08 		subq	$8, %rsp
 1135              		.cfi_def_cfa_offset 16
 1136              	.LBB150:
 125:fltk-1.3.4-1/src/fl_color.cxx ****   86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
 1137              		.loc 2 125 0
 1138 001b E8000000 		call	_Z9fl_xpixelj
 1138      00
 1139              	.LVL148:
 1140 0020 488B3500 		movq	fl_gc(%rip), %rsi
 1140      000000
 1141 0027 488B3D00 		movq	fl_display(%rip), %rdi
 1141      000000
 1142 002e 4889C2   		movq	%rax, %rdx
 1143              	.LBE150:
 127:fltk-1.3.4-1/src/fl_color.cxx ****   88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the de
 1144              		.loc 2 127 0
 1145 0031 4883C408 		addq	$8, %rsp
 1146              		.cfi_def_cfa_offset 8
 1147              	.LBB151:
 125:fltk-1.3.4-1/src/fl_color.cxx ****   86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
 1148              		.loc 2 125 0
 1149 0035 E9000000 		jmp	XSetForeground
 1149      00
 1150              	.LVL149:
 1151 003a 660F1F44 		.p2align 4,,10
 1151      0000
 1152              		.p2align 3
 1153              	.L121:
 1154              	.LBE151:
 1155              	.LBB152:
 1156              	.LBB153:
 1157              	.LBB154:
 1158              	.LBB155:
 1159              		.file 3 "fltk-1.3.4-1/FL/fl_draw.H"
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
 1160              		.loc 3 65 0
 1161 0040 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1161      000000
 1162              	.LVL150:
 1163 0047 4889F0   		movq	%rsi, %rax
 1164 004a 89F2     		movl	%esi, %edx
 1165 004c 0FB6CC   		movzbl	%ah, %ecx
 1166 004f C1EA10   		shrl	$16, %edx
 1167 0052 C1EE18   		shrl	$24, %esi
 1168              	.LVL151:
 1169 0055 0FB6D2   		movzbl	%dl, %edx
 1170 0058 488B07   		movq	(%rdi), %rax
 1171 005b FFA09000 		jmp	*144(%rax)
 1171      0000
 1172              	.LVL152:
 1173              		.p2align 4,,10
 1174 0061 0F1F8000 		.p2align 3
 1174      000000
 1175              	.L120:
 1176 0068 F3C3     		rep ret
 1177              	.LBE155:
 1178              	.LBE154:
 1179              	.LBE153:
 1180              	.LBE152:
 1181              		.cfi_endproc
 1182              	.LFE469:
 1184              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver5colorEj
 1185              	.LCOLDE9:
 1186              		.section	.text._ZN23Fl_Xlib_Graphics_Driver5colorEj
 1187              	.LHOTE9:
 1188              		.section	.text.unlikely._Z9fl_xpixelhhh,"ax",@progbits
 1189              	.LCOLDB10:
 1190              		.section	.text._Z9fl_xpixelhhh,"ax",@progbits
 1191              	.LHOTB10:
 1192              		.p2align 4,,15
 1193              		.globl	_Z9fl_xpixelhhh
 1195              	_Z9fl_xpixelhhh:
 1196              	.LFB471:
 150:fltk-1.3.4-1/src/fl_color.cxx ****   63              		.weak	_ZN23Fl_Xlib_Graphics_Driver10class_nameEv
 1197              		.loc 2 150 0
 1198              		.cfi_startproc
 1199              	.LVL153:
 1200 0000 4883EC18 		subq	$24, %rsp
 1201              		.cfi_def_cfa_offset 32
 151:fltk-1.3.4-1/src/fl_color.cxx ****   65              	_ZN23Fl_Xlib_Graphics_Driver10class_nameEv:
 1202              		.loc 2 151 0
 1203 0004 803D0000 		cmpb	$0, _ZL8beenhere(%rip)
 1203      000000
 1204 000b 0F84CF00 		je	.L135
 1204      0000
 1205              	.LVL154:
 1206              	.L123:
 1207              	.LBB163:
 153:fltk-1.3.4-1/src/fl_color.cxx ****   92:fltk-1.3.4-1/FL/Fl_Device.H **** };
 1208              		.loc 2 153 0
 1209 0011 440FB605 		movzbl	fl_redmask(%rip), %r8d
 1209      00000000 
 1210 0019 4584C0   		testb	%r8b, %r8b
 1211 001c 7572     		jne	.L124
 1212              	.LVL155:
 1213              	.LBE163:
 1214              	.LBB164:
 1215              	.LBB165:
 156:fltk-1.3.4-1/src/fl_color.cxx ****   95:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_MATRIX_STACK_SIZE 32
 1216              		.loc 2 156 0
 1217 001e 0FB6D2   		movzbl	%dl, %edx
 1218 0021 400FB6C7 		movzbl	%dil, %eax
 1219              	.LVL156:
 1220 0025 400FB6F6 		movzbl	%sil, %esi
 1221              	.LVL157:
 1222              	.LBB166:
 1223              	.LBB167:
 1224              		.file 4 "fltk-1.3.4-1/FL/Enumerations.H"
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
 995:fltk-1.3.4-1/FL/Enumerations.H **** 
 996:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns the 24-bit color value closest to \p r, \p g, \p b. */
 997:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_rgb_color(uchar r, uchar g, uchar b) {
 998:fltk-1.3.4-1/FL/Enumerations.H ****   if (!r && !g && !b) return FL_BLACK;
 999:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
1000:fltk-1.3.4-1/FL/Enumerations.H **** }
1001:fltk-1.3.4-1/FL/Enumerations.H **** 
1002:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns the 24-bit color value closest to \p g (grayscale). */
1003:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_rgb_color(uchar g) {
1004:fltk-1.3.4-1/FL/Enumerations.H ****   if (!g) return FL_BLACK;
1005:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((g << 8) | g) << 8) | g) << 8);
1006:fltk-1.3.4-1/FL/Enumerations.H **** }
1007:fltk-1.3.4-1/FL/Enumerations.H **** 
1008:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a gray color value from black (i == 0) to white (i == FL_NUM_GRAY - 1).
1009:fltk-1.3.4-1/FL/Enumerations.H ****     FL_NUM_GRAY is defined to be 24 in the current FLTK release.
1010:fltk-1.3.4-1/FL/Enumerations.H ****     To get the closest FLTK gray value to an 8-bit grayscale color 'I' use:
1011:fltk-1.3.4-1/FL/Enumerations.H **** 
1012:fltk-1.3.4-1/FL/Enumerations.H ****  \code
1013:fltk-1.3.4-1/FL/Enumerations.H ****    fl_gray_ramp(I * (FL_NUM_GRAY - 1) / 255)
1014:fltk-1.3.4-1/FL/Enumerations.H ****  \endcode
1015:fltk-1.3.4-1/FL/Enumerations.H **** */
1016:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_gray_ramp(int i) {return (Fl_Color)(i+FL_GRAY_RAMP);}
1017:fltk-1.3.4-1/FL/Enumerations.H **** 
1018:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a color out of the color cube.
1019:fltk-1.3.4-1/FL/Enumerations.H **** 
1020:fltk-1.3.4-1/FL/Enumerations.H ****   \p r must be in the range 0 to FL_NUM_RED (5) minus 1,
1021:fltk-1.3.4-1/FL/Enumerations.H ****   \p g must be in the range 0 to FL_NUM_GREEN (8) minus 1,
1022:fltk-1.3.4-1/FL/Enumerations.H ****   \p b must be in the range 0 to FL_NUM_BLUE (5) minus 1.
1023:fltk-1.3.4-1/FL/Enumerations.H **** 
1024:fltk-1.3.4-1/FL/Enumerations.H ****   To get the closest color to a 8-bit set of R,G,B values use:
1025:fltk-1.3.4-1/FL/Enumerations.H **** 
1026:fltk-1.3.4-1/FL/Enumerations.H ****   \code
1027:fltk-1.3.4-1/FL/Enumerations.H ****     fl_color_cube(R * (FL_NUM_RED - 1) / 255,
1028:fltk-1.3.4-1/FL/Enumerations.H ****        G * (FL_NUM_GREEN - 1) / 255,
1029:fltk-1.3.4-1/FL/Enumerations.H ****        B * (FL_NUM_BLUE - 1) / 255);
1030:fltk-1.3.4-1/FL/Enumerations.H ****   \endcode
1031:fltk-1.3.4-1/FL/Enumerations.H ****  */
1032:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_color_cube(int r, int g, int b) {
1033:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Color)((b*FL_NUM_RED + r) * FL_NUM_GREEN + g + FL_COLOR_CUBE);}
 1225              		.loc 4 1033 0
 1226 0029 8D0C92   		leal	(%rdx,%rdx,4), %ecx
 1227 002c C1F908   		sarl	$8, %ecx
 1228 002f 8D3C89   		leal	(%rcx,%rcx,4), %edi
 1229              	.LVL158:
 1230 0032 8D0C80   		leal	(%rax,%rax,4), %ecx
 1231 0035 C1F908   		sarl	$8, %ecx
 1232 0038 01F9     		addl	%edi, %ecx
 1233 003a 89F7     		movl	%esi, %edi
 1234 003c C1FF05   		sarl	$5, %edi
 1235              	.LVL159:
 1236 003f 448D44CF 		leal	56(%rdi,%rcx,8), %r8d
 1236      38
 1237              	.LBE167:
 1238              	.LBE166:
 158:fltk-1.3.4-1/src/fl_color.cxx ****   97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver F
 1239              		.loc 2 158 0
 1240 0044 4C89C1   		movq	%r8, %rcx
 1241              	.LBB169:
 1242              	.LBB168:
 1243              		.loc 4 1033 0
 1244 0047 4C89C7   		movq	%r8, %rdi
 1245              	.LVL160:
 1246              	.LBE168:
 1247              	.LBE169:
 158:fltk-1.3.4-1/src/fl_color.cxx ****   97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver F
 1248              		.loc 2 158 0
 1249 004a 48C1E104 		salq	$4, %rcx
 1250 004e 4881C100 		addq	$fl_xmap, %rcx
 1250      000000
 1251 0055 80790300 		cmpb	$0, 3(%rcx)
 1252 0059 0F85A900 		jne	.L136
 1252      0000
 160:fltk-1.3.4-1/src/fl_color.cxx ****   99:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations (e.g., fl_rectf()) that operate on the cu
 1253              		.loc 2 160 0
 1254 005f 4183F838 		cmpl	$56, %r8d
 1255 0063 741E     		je	.L127
 1256 0065 4181F8FF 		cmpl	$255, %r8d
 1256      000000
 1257 006c 7415     		je	.L127
 161:fltk-1.3.4-1/src/fl_color.cxx ****  100:fltk-1.3.4-1/FL/Fl_Device.H ****  Drawing operations are functionally presented in \ref drawin
 1258              		.loc 2 161 0
 1259 006e C1E018   		sall	$24, %eax
 1260              	.LVL161:
 1261 0071 C1E610   		sall	$16, %esi
 1262              	.LVL162:
 1263 0074 C1E208   		sall	$8, %edx
 1264              	.LVL163:
 1265 0077 09F0     		orl	%esi, %eax
 1266 0079 09C2     		orl	%eax, %edx
 1267 007b 42891485 		movl	%edx, _ZL7fl_cmap(,%r8,4)
 1267      00000000 
 1268              	.L127:
 1269              	.LBE165:
 1270              	.LBE164:
 170:fltk-1.3.4-1/src/fl_color.cxx ****  109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 1271              		.loc 2 170 0
 1272 0083 4883C418 		addq	$24, %rsp
 1273              		.cfi_remember_state
 1274              		.cfi_def_cfa_offset 8
 1275              	.LBB172:
 1276              	.LBB170:
 162:fltk-1.3.4-1/src/fl_color.cxx ****  101:fltk-1.3.4-1/FL/Fl_Device.H ****  in the \ref fl_drawings and \ref fl_attributes modules. The 
 1277              		.loc 2 162 0
 1278 0087 E9000000 		jmp	_Z9fl_xpixelj
 1278      00
 1279              	.LVL164:
 1280 008c 0F1F4000 		.p2align 4,,10
 1281              		.p2align 3
 1282              	.L124:
 1283              		.cfi_restore_state
 1284              	.LBE170:
 1285              	.LBE172:
 169:fltk-1.3.4-1/src/fl_color.cxx ****  108:fltk-1.3.4-1/FL/Fl_Device.H ****  to support all FLTK drawing functions.
 1286              		.loc 2 169 0
 1287 0090 40223500 		andb	fl_greenmask(%rip), %sil
 1287      000000
 1288 0097 8B0D0000 		movl	fl_greenshift(%rip), %ecx
 1288      0000
 1289 009d 4421C7   		andl	%r8d, %edi
 1290 00a0 22150000 		andb	fl_bluemask(%rip), %dl
 1290      0000
 1291 00a6 400FB6FF 		movzbl	%dil, %edi
 1292 00aa 400FB6C6 		movzbl	%sil, %eax
 1293 00ae D3E0     		sall	%cl, %eax
 1294 00b0 8B0D0000 		movl	fl_redshift(%rip), %ecx
 1294      0000
 1295 00b6 D3E7     		sall	%cl, %edi
 1296 00b8 8B0D0000 		movl	fl_blueshift(%rip), %ecx
 1296      0000
 1297 00be 01C7     		addl	%eax, %edi
 1298 00c0 0FB6C2   		movzbl	%dl, %eax
 1299 00c3 D3E0     		sall	%cl, %eax
 1300 00c5 8B0D0000 		movl	fl_extrashift(%rip), %ecx
 1300      0000
 170:fltk-1.3.4-1/src/fl_color.cxx ****  109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 1301              		.loc 2 170 0
 1302 00cb 4883C418 		addq	$24, %rsp
 1303              		.cfi_remember_state
 1304              		.cfi_def_cfa_offset 8
 169:fltk-1.3.4-1/src/fl_color.cxx ****  108:fltk-1.3.4-1/FL/Fl_Device.H ****  to support all FLTK drawing functions.
 1305              		.loc 2 169 0
 1306 00cf 01F8     		addl	%edi, %eax
 1307 00d1 D3F8     		sarl	%cl, %eax
 1308 00d3 4898     		cltq
 170:fltk-1.3.4-1/src/fl_color.cxx ****  109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 1309              		.loc 2 170 0
 1310 00d5 C3       		ret
 1311              	.LVL165:
 1312 00d6 662E0F1F 		.p2align 4,,10
 1312      84000000 
 1312      0000
 1313              		.p2align 3
 1314              	.L135:
 1315              		.cfi_restore_state
 1316 00e0 8954240C 		movl	%edx, 12(%rsp)
 1317 00e4 89742408 		movl	%esi, 8(%rsp)
 1318 00e8 897C2404 		movl	%edi, 4(%rsp)
 151:fltk-1.3.4-1/src/fl_color.cxx ****   65              	_ZN23Fl_Xlib_Graphics_Driver10class_nameEv:
 1319              		.loc 2 151 0 discriminator 1
 1320 00ec E8000000 		call	_ZL17figure_out_visualv
 1320      00
 1321              	.LVL166:
 1322 00f1 8B54240C 		movl	12(%rsp), %edx
 1323 00f5 8B742408 		movl	8(%rsp), %esi
 1324 00f9 8B7C2404 		movl	4(%rsp), %edi
 1325 00fd E90FFFFF 		jmp	.L123
 1325      FF
 1326              	.LVL167:
 1327              		.p2align 4,,10
 1328 0102 660F1F44 		.p2align 3
 1328      0000
 1329              	.L136:
 1330              	.LBB173:
 1331              	.LBB171:
 158:fltk-1.3.4-1/src/fl_color.cxx ****   97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver F
 1332              		.loc 2 158 0
 1333 0108 488B4108 		movq	8(%rcx), %rax
 1334              	.LVL168:
 1335              	.LBE171:
 1336              	.LBE173:
 170:fltk-1.3.4-1/src/fl_color.cxx ****  109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 1337              		.loc 2 170 0
 1338 010c 4883C418 		addq	$24, %rsp
 1339              		.cfi_def_cfa_offset 8
 1340 0110 C3       		ret
 1341              		.cfi_endproc
 1342              	.LFE471:
 1344              		.section	.text.unlikely._Z9fl_xpixelhhh
 1345              	.LCOLDE10:
 1346              		.section	.text._Z9fl_xpixelhhh
 1347              	.LHOTE10:
 1348              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver5colorEhhh,"ax",@progbits
 1349              		.align 2
 1350              	.LCOLDB11:
 1351              		.section	.text._ZN23Fl_Xlib_Graphics_Driver5colorEhhh,"ax",@progbits
 1352              	.LHOTB11:
 1353              		.align 2
 1354              		.p2align 4,,15
 1355              		.globl	_ZN23Fl_Xlib_Graphics_Driver5colorEhhh
 1357              	_ZN23Fl_Xlib_Graphics_Driver5colorEhhh:
 1358              	.LFB470:
 129:fltk-1.3.4-1/src/fl_color.cxx ****   90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 1359              		.loc 2 129 0
 1360              		.cfi_startproc
 1361              	.LVL169:
 1362              	.LBB174:
 1363              	.LBB175:
 998:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 1364              		.loc 4 998 0
 1365 0000 4189D0   		movl	%edx, %r8d
 1366 0003 B8380000 		movl	$56, %eax
 1366      00
 1367 0008 4109F0   		orl	%esi, %r8d
 1368 000b 4108C8   		orb	%cl, %r8b
 1369 000e 741B     		je	.L138
 999:fltk-1.3.4-1/FL/Enumerations.H **** }
 1370              		.loc 4 999 0
 1371 0010 400FB6C6 		movzbl	%sil, %eax
 1372 0014 440FB6C2 		movzbl	%dl, %r8d
 1373 0018 C1E008   		sall	$8, %eax
 1374 001b 4409C0   		orl	%r8d, %eax
 1375 001e 440FB6C1 		movzbl	%cl, %r8d
 1376 0022 C1E008   		sall	$8, %eax
 1377 0025 4409C0   		orl	%r8d, %eax
 1378 0028 C1E008   		sall	$8, %eax
 1379              	.L138:
 1380              	.LVL170:
 1381              	.LBE175:
 1382              	.LBE174:
 131:fltk-1.3.4-1/src/fl_color.cxx ****   43              		.loc 1 91 0
 1383              		.loc 2 131 0
 1384 002b 48833D00 		cmpq	$0, fl_gc(%rip)
 1384      00000000 
 1385              	.LBB176:
 1386              	.LBB177:
 260:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(uchar r, uchar g, uchar b). */
 1387              		.loc 1 260 0
 1388 0033 894710   		movl	%eax, 16(%rdi)
 1389              	.LVL171:
 1390              	.LBE177:
 1391              	.LBE176:
 131:fltk-1.3.4-1/src/fl_color.cxx ****   43              		.loc 1 91 0
 1392              		.loc 2 131 0
 1393 0036 7438     		je	.L144
 1394 0038 89D0     		movl	%edx, %eax
 1395 003a 89F7     		movl	%esi, %edi
 1396              	.LVL172:
 129:fltk-1.3.4-1/src/fl_color.cxx ****   90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 1397              		.loc 2 129 0
 1398 003c 4883EC08 		subq	$8, %rsp
 1399              		.cfi_def_cfa_offset 16
 132:fltk-1.3.4-1/src/fl_color.cxx ****   44              		.cfi_startproc
 1400              		.loc 2 132 0
 1401 0040 0FB6D1   		movzbl	%cl, %edx
 1402              	.LVL173:
 1403 0043 0FB6F0   		movzbl	%al, %esi
 1404              	.LVL174:
 1405 0046 400FB6FF 		movzbl	%dil, %edi
 1406 004a E8000000 		call	_Z9fl_xpixelhhh
 1406      00
 1407              	.LVL175:
 1408 004f 488B3500 		movq	fl_gc(%rip), %rsi
 1408      000000
 1409 0056 488B3D00 		movq	fl_display(%rip), %rdi
 1409      000000
 1410 005d 4889C2   		movq	%rax, %rdx
 133:fltk-1.3.4-1/src/fl_color.cxx ****   45              	.LVL1:
 1411              		.loc 2 133 0
 1412 0060 4883C408 		addq	$8, %rsp
 1413              		.cfi_def_cfa_offset 8
 132:fltk-1.3.4-1/src/fl_color.cxx ****   44              		.cfi_startproc
 1414              		.loc 2 132 0
 1415 0064 E9000000 		jmp	XSetForeground
 1415      00
 1416              	.LVL176:
 1417 0069 0F1F8000 		.p2align 4,,10
 1417      000000
 1418              		.p2align 3
 1419              	.L144:
 1420 0070 F3C3     		rep ret
 1421              		.cfi_endproc
 1422              	.LFE470:
 1424              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver5colorEhhh
 1425              	.LCOLDE11:
 1426              		.section	.text._ZN23Fl_Xlib_Graphics_Driver5colorEhhh
 1427              	.LHOTE11:
 1428              		.section	.text.unlikely._ZN2Fl10free_colorEji,"ax",@progbits
 1429              		.align 2
 1430              	.LCOLDB12:
 1431              		.section	.text._ZN2Fl10free_colorEji,"ax",@progbits
 1432              	.LHOTB12:
 1433              		.align 2
 1434              		.p2align 4,,15
 1435              		.globl	_ZN2Fl10free_colorEji
 1437              	_ZN2Fl10free_colorEji:
 1438              	.LFB474:
 316:fltk-1.3.4-1/src/fl_color.cxx ****  255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, i
 1439              		.loc 2 316 0
 1440              		.cfi_startproc
 1441              	.LVL177:
 319:fltk-1.3.4-1/src/fl_color.cxx ****  258:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rtl_draw(const char *str, int n, int x, int y)
 1442              		.loc 2 319 0
 1443 0000 85F6     		testl	%esi, %esi
 1444 0002 750C     		jne	.L145
 1445 0004 E9000000 		jmp	_ZN2Fl10free_colorEji.part.4
 1445      00
 1446              	.LVL178:
 1447 0009 0F1F8000 		.p2align 4,,10
 1447      000000
 1448              		.p2align 3
 1449              	.L145:
 1450 0010 F3C3     		rep ret
 1451              		.cfi_endproc
 1452              	.LFE474:
 1454              		.section	.text.unlikely._ZN2Fl10free_colorEji
 1455              	.LCOLDE12:
 1456              		.section	.text._ZN2Fl10free_colorEji
 1457              	.LHOTE12:
 1458              		.section	.text.unlikely._ZN2Fl9set_colorEjj,"ax",@progbits
 1459              		.align 2
 1460              	.LCOLDB13:
 1461              		.section	.text._ZN2Fl9set_colorEjj,"ax",@progbits
 1462              	.LHOTB13:
 1463              		.align 2
 1464              		.p2align 4,,15
 1465              		.globl	_ZN2Fl9set_colorEjj
 1467              	_ZN2Fl9set_colorEjj:
 1468              	.LFB475:
 334:fltk-1.3.4-1/src/fl_color.cxx ****  272:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2
 335:fltk-1.3.4-1/src/fl_color.cxx ****  273:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_points(). */
 336:fltk-1.3.4-1/src/fl_color.cxx ****  274:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_points();
 337:fltk-1.3.4-1/src/fl_color.cxx ****  275:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_line(). */
 338:fltk-1.3.4-1/src/fl_color.cxx ****  276:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_line();
 339:fltk-1.3.4-1/src/fl_color.cxx ****  277:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_loop(). */
 340:fltk-1.3.4-1/src/fl_color.cxx ****  278:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_loop();
 1469              		.loc 2 340 0
 1470              		.cfi_startproc
 1471              	.LVL179:
 1472 0000 55       		pushq	%rbp
 1473              		.cfi_def_cfa_offset 16
 1474              		.cfi_offset 6, -16
 1475 0001 53       		pushq	%rbx
 1476              		.cfi_def_cfa_offset 24
 1477              		.cfi_offset 3, -24
 341:fltk-1.3.4-1/src/fl_color.cxx ****  279:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_polygon(). */
 1478              		.loc 2 341 0
 1479 0002 89FD     		movl	%edi, %ebp
 340:fltk-1.3.4-1/src/fl_color.cxx ****  279:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_polygon(). */
 1480              		.loc 2 340 0
 1481 0004 4883EC08 		subq	$8, %rsp
 1482              		.cfi_def_cfa_offset 32
 1483              		.loc 2 341 0
 1484 0008 3934AD00 		cmpl	%esi, _ZL7fl_cmap(,%rbp,4)
 1484      000000
 1485 000f 7410     		je	.L147
 1486 0011 89F3     		movl	%esi, %ebx
 1487              	.LVL180:
 1488              	.LBB178:
 1489              	.LBB179:
 1490 0013 31F6     		xorl	%esi, %esi
 1491              	.LVL181:
 1492 0015 E8000000 		call	_ZN2Fl10free_colorEji.part.4
 1492      00
 1493              	.LVL182:
 1494              	.LBE179:
 1495              	.LBE178:
 342:fltk-1.3.4-1/src/fl_color.cxx ****  280:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_polygon();
 343:fltk-1.3.4-1/src/fl_color.cxx ****  281:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_vertex(double x, double y). */
 344:fltk-1.3.4-1/src/fl_color.cxx ****  282:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void vertex(double x, double y);
 345:fltk-1.3.4-1/src/fl_color.cxx ****  283:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_curve(double X0, double Y0, double X1, do
 346:fltk-1.3.4-1/src/fl_color.cxx ****  284:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void curve(double X0, double Y0, double X1, double 
 1496              		.loc 2 346 0
 1497 001a 891CAD00 		movl	%ebx, _ZL7fl_cmap(,%rbp,4)
 1497      000000
 1498              	.LVL183:
 1499              	.L147:
 347:fltk-1.3.4-1/src/fl_color.cxx ****  285:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_circle(double x, double y, double r). */
 348:fltk-1.3.4-1/src/fl_color.cxx ****  286:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void circle(double x, double y, double r);
 1500              		.loc 2 348 0
 1501 0021 4883C408 		addq	$8, %rsp
 1502              		.cfi_def_cfa_offset 24
 1503 0025 5B       		popq	%rbx
 1504              		.cfi_def_cfa_offset 16
 1505 0026 5D       		popq	%rbp
 1506              		.cfi_def_cfa_offset 8
 1507              	.LVL184:
 1508 0027 C3       		ret
 1509              		.cfi_endproc
 1510              	.LFE475:
 1512              		.section	.text.unlikely._ZN2Fl9set_colorEjj
 1513              	.LCOLDE13:
 1514              		.section	.text._ZN2Fl9set_colorEjj
 1515              	.LHOTE13:
 1516              		.section	.text.unlikely._ZN2Fl9get_colorEj,"ax",@progbits
 1517              		.align 2
 1518              	.LCOLDB14:
 1519              		.section	.text._ZN2Fl9get_colorEj,"ax",@progbits
 1520              	.LHOTB14:
 1521              		.align 2
 1522              		.p2align 4,,15
 1523              		.globl	_ZN2Fl9get_colorEj
 1525              	_ZN2Fl9get_colorEj:
 1526              	.LFB476:
 349:fltk-1.3.4-1/src/fl_color.cxx ****  287:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(double x, double y, double r, double 
 350:fltk-1.3.4-1/src/fl_color.cxx ****  288:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(double x, double y, double r, double start
 351:fltk-1.3.4-1/src/fl_color.cxx ****  289:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(int x, int y, int w, int h, double a1
 352:fltk-1.3.4-1/src/fl_color.cxx ****  290:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(int x, int y, int w, int h, double a1, dou
 353:fltk-1.3.4-1/src/fl_color.cxx ****  291:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pie(int x, int y, int w, int h, double a1
 354:fltk-1.3.4-1/src/fl_color.cxx ****  292:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pie(int x, int y, int w, int h, double a1, dou
 355:fltk-1.3.4-1/src/fl_color.cxx ****  293:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_points(). */
 356:fltk-1.3.4-1/src/fl_color.cxx ****  294:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_points();
 357:fltk-1.3.4-1/src/fl_color.cxx ****  295:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_line(). */
 358:fltk-1.3.4-1/src/fl_color.cxx ****  296:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_line();
 359:fltk-1.3.4-1/src/fl_color.cxx ****  297:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_loop(). */
 1527              		.loc 2 359 0
 1528              		.cfi_startproc
 1529              	.LVL185:
 1530 0000 89F8     		movl	%edi, %eax
 360:fltk-1.3.4-1/src/fl_color.cxx ****  298:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_loop();
 1531              		.loc 2 360 0
 1532 0002 A900FFFF 		testl	$-256, %eax
 1532      FF
 1533 0007 7507     		jne	.L151
 361:fltk-1.3.4-1/src/fl_color.cxx ****  299:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_polygon(). */
 1534              		.loc 2 361 0
 1535 0009 8B048500 		movl	_ZL7fl_cmap(,%rax,4), %eax
 1535      000000
 1536              	.L151:
 362:fltk-1.3.4-1/src/fl_color.cxx ****  300:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_polygon();
 1537              		.loc 2 362 0
 1538 0010 F3C3     		rep ret
 1539              		.cfi_endproc
 1540              	.LFE476:
 1542              		.section	.text.unlikely._ZN2Fl9get_colorEj
 1543              	.LCOLDE14:
 1544              		.section	.text._ZN2Fl9get_colorEj
 1545              	.LHOTE14:
 1546              		.section	.text.unlikely._ZN2Fl9set_colorEjhhh,"ax",@progbits
 1547              		.align 2
 1548              	.LCOLDB15:
 1549              		.section	.text._ZN2Fl9set_colorEjhhh,"ax",@progbits
 1550              	.LHOTB15:
 1551              		.align 2
 1552              		.p2align 4,,15
 1553              		.globl	_ZN2Fl9set_colorEjhhh
 1555              	_ZN2Fl9set_colorEjhhh:
 1556              	.LFB477:
 363:fltk-1.3.4-1/src/fl_color.cxx ****  301:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_complex_polygon(). */
 364:fltk-1.3.4-1/src/fl_color.cxx ****  302:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_complex_polygon();
 365:fltk-1.3.4-1/src/fl_color.cxx ****  303:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_gap(). */
 366:fltk-1.3.4-1/src/fl_color.cxx ****  304:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void gap();
 367:fltk-1.3.4-1/src/fl_color.cxx ****  305:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_complex_polygon(). */
 368:fltk-1.3.4-1/src/fl_color.cxx ****  306:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_complex_polygon();
 1557              		.loc 2 368 0
 1558              		.cfi_startproc
 1559              	.LVL186:
 369:fltk-1.3.4-1/src/fl_color.cxx ****  307:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transformed_vertex(double xf, double yf).
 1560              		.loc 2 369 0
 1561 0000 0FB6D2   		movzbl	%dl, %edx
 1562 0003 0FB6C9   		movzbl	%cl, %ecx
 368:fltk-1.3.4-1/src/fl_color.cxx ****  307:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transformed_vertex(double xf, double yf).
 1563              		.loc 2 368 0
 1564 0006 55       		pushq	%rbp
 1565              		.cfi_def_cfa_offset 16
 1566              		.cfi_offset 6, -16
 1567              		.loc 2 369 0
 1568 0007 C1E210   		sall	$16, %edx
 1569              	.LVL187:
 368:fltk-1.3.4-1/src/fl_color.cxx ****  307:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transformed_vertex(double xf, double yf).
 1570              		.loc 2 368 0
 1571 000a 53       		pushq	%rbx
 1572              		.cfi_def_cfa_offset 24
 1573              		.cfi_offset 3, -24
 1574              		.loc 2 369 0
 1575 000b C1E108   		sall	$8, %ecx
 1576              	.LVL188:
 1577 000e 01CA     		addl	%ecx, %edx
 1578 0010 C1E618   		sall	$24, %esi
 1579              	.LVL189:
 1580 0013 400FB6EF 		movzbl	%dil, %ebp
 1581              	.LVL190:
 368:fltk-1.3.4-1/src/fl_color.cxx ****  307:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transformed_vertex(double xf, double yf).
 1582              		.loc 2 368 0
 1583 0017 4883EC08 		subq	$8, %rsp
 1584              		.cfi_def_cfa_offset 32
 1585              		.loc 2 369 0
 1586 001b 8D1C32   		leal	(%rdx,%rsi), %ebx
 1587              	.LVL191:
 1588              	.LBB180:
 1589              	.LBB181:
 341:fltk-1.3.4-1/src/fl_color.cxx ****  280:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_polygon();
 1590              		.loc 2 341 0
 1591 001e 3B1CAD00 		cmpl	_ZL7fl_cmap(,%rbp,4), %ebx
 1591      000000
 1592 0025 7411     		je	.L153
 1593 0027 4889EF   		movq	%rbp, %rdi
 1594              	.LVL192:
 1595              	.LBB182:
 1596              	.LBB183:
 1597 002a 31F6     		xorl	%esi, %esi
 1598 002c E8000000 		call	_ZN2Fl10free_colorEji.part.4
 1598      00
 1599              	.LVL193:
 1600              	.LBE183:
 1601              	.LBE182:
 346:fltk-1.3.4-1/src/fl_color.cxx ****  285:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_circle(double x, double y, double r). */
 1602              		.loc 2 346 0
 1603 0031 891CAD00 		movl	%ebx, _ZL7fl_cmap(,%rbp,4)
 1603      000000
 1604              	.LVL194:
 1605              	.L153:
 1606              	.LBE181:
 1607              	.LBE180:
 370:fltk-1.3.4-1/src/fl_color.cxx ****  308:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void transformed_vertex(double xf, double yf);
 371:fltk-1.3.4-1/src/fl_color.cxx ****  309:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_clip(int x, int y, int w, int h). */
 1608              		.loc 2 371 0
 1609 0038 4883C408 		addq	$8, %rsp
 1610              		.cfi_def_cfa_offset 24
 1611 003c 5B       		popq	%rbx
 1612              		.cfi_def_cfa_offset 16
 1613 003d 5D       		popq	%rbp
 1614              		.cfi_def_cfa_offset 8
 1615 003e C3       		ret
 1616              		.cfi_endproc
 1617              	.LFE477:
 1619              		.section	.text.unlikely._ZN2Fl9set_colorEjhhh
 1620              	.LCOLDE15:
 1621              		.section	.text._ZN2Fl9set_colorEjhhh
 1622              	.LHOTE15:
 1623              		.section	.text.unlikely._ZN2Fl9get_colorEjRhS0_S0_,"ax",@progbits
 1624              		.align 2
 1625              	.LCOLDB16:
 1626              		.section	.text._ZN2Fl9get_colorEjRhS0_S0_,"ax",@progbits
 1627              	.LHOTB16:
 1628              		.align 2
 1629              		.p2align 4,,15
 1630              		.globl	_ZN2Fl9get_colorEjRhS0_S0_
 1632              	_ZN2Fl9get_colorEjRhS0_S0_:
 1633              	.LFB478:
 372:fltk-1.3.4-1/src/fl_color.cxx ****  310:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_clip(int x, int y, int w, int h);
 373:fltk-1.3.4-1/src/fl_color.cxx ****  311:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_box(int x, int y, int w, int h, int 
 374:fltk-1.3.4-1/src/fl_color.cxx ****  312:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int clip_box(int x, int y, int w, int h, int &X, in
 375:fltk-1.3.4-1/src/fl_color.cxx ****  313:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_not_clipped(int x, int y, int w, int h). 
 376:fltk-1.3.4-1/src/fl_color.cxx ****  314:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int not_clipped(int x, int y, int w, int h);
 377:fltk-1.3.4-1/src/fl_color.cxx ****  315:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_no_clip(). */
 378:fltk-1.3.4-1/src/fl_color.cxx ****  316:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_no_clip();
 379:fltk-1.3.4-1/src/fl_color.cxx ****  317:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_clip(). */
 380:fltk-1.3.4-1/src/fl_color.cxx ****  318:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pop_clip();
 1634              		.loc 2 380 0
 1635              		.cfi_startproc
 1636              	.LVL195:
 381:fltk-1.3.4-1/src/fl_color.cxx ****  319:fltk-1.3.4-1/FL/Fl_Device.H ****     
 382:fltk-1.3.4-1/src/fl_color.cxx ****  320:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_matrix(). */
 383:fltk-1.3.4-1/src/fl_color.cxx ****  321:fltk-1.3.4-1/FL/Fl_Device.H ****   void push_matrix();
 1637              		.loc 2 383 0
 1638 0000 F7C700FF 		testl	$-256, %edi
 1638      FFFF
 1639 0006 7509     		jne	.L157
 384:fltk-1.3.4-1/src/fl_color.cxx ****  322:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_matrix(). */
 1640              		.loc 2 384 0
 1641 0008 89FF     		movl	%edi, %edi
 1642 000a 8B3CBD00 		movl	_ZL7fl_cmap(,%rdi,4), %edi
 1642      000000
 1643              	.LVL196:
 1644              	.L157:
 385:fltk-1.3.4-1/src/fl_color.cxx ****  323:fltk-1.3.4-1/FL/Fl_Device.H ****   void pop_matrix();
 386:fltk-1.3.4-1/src/fl_color.cxx ****  324:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_mult_matrix(double a, double b, double c,
 1645              		.loc 2 386 0
 1646 0011 89F8     		movl	%edi, %eax
 1647 0013 C1E818   		shrl	$24, %eax
 1648 0016 8806     		movb	%al, (%rsi)
 387:fltk-1.3.4-1/src/fl_color.cxx ****  325:fltk-1.3.4-1/FL/Fl_Device.H ****   void mult_matrix(double a, double b, double c, double d, do
 1649              		.loc 2 387 0
 1650 0018 89F8     		movl	%edi, %eax
 388:fltk-1.3.4-1/src/fl_color.cxx ****  326:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x, double y). */
 1651              		.loc 2 388 0
 1652 001a C1EF08   		shrl	$8, %edi
 1653              	.LVL197:
 387:fltk-1.3.4-1/src/fl_color.cxx ****  325:fltk-1.3.4-1/FL/Fl_Device.H ****   void mult_matrix(double a, double b, double c, double d, do
 1654              		.loc 2 387 0
 1655 001d C1E810   		shrl	$16, %eax
 1656              	.LVL198:
 1657 0020 8802     		movb	%al, (%rdx)
 1658              		.loc 2 388 0
 1659 0022 408839   		movb	%dil, (%rcx)
 1660 0025 C3       		ret
 1661              		.cfi_endproc
 1662              	.LFE478:
 1664              		.section	.text.unlikely._ZN2Fl9get_colorEjRhS0_S0_
 1665              	.LCOLDE16:
 1666              		.section	.text._ZN2Fl9get_colorEjRhS0_S0_
 1667              	.LHOTE16:
 1668              		.section	.text.unlikely._Z16fl_color_averagejjf,"ax",@progbits
 1669              	.LCOLDB18:
 1670              		.section	.text._Z16fl_color_averagejjf,"ax",@progbits
 1671              	.LHOTB18:
 1672              		.p2align 4,,15
 1673              		.globl	_Z16fl_color_averagejjf
 1675              	_Z16fl_color_averagejjf:
 1676              	.LFB479:
 389:fltk-1.3.4-1/src/fl_color.cxx ****  327:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x, double y) { mult_matrix(x,0,0,y
 390:fltk-1.3.4-1/src/fl_color.cxx ****  328:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 391:fltk-1.3.4-1/src/fl_color.cxx ****  329:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x) { mult_matrix(x,0,0,x,0,0); }
 392:fltk-1.3.4-1/src/fl_color.cxx ****  330:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_translate(double x, double y). */
 393:fltk-1.3.4-1/src/fl_color.cxx ****  331:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void translate(double x,double y) { mult_matrix(1,0,
 394:fltk-1.3.4-1/src/fl_color.cxx ****  332:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 395:fltk-1.3.4-1/src/fl_color.cxx ****  333:fltk-1.3.4-1/FL/Fl_Device.H ****   void rotate(double d);
 396:fltk-1.3.4-1/src/fl_color.cxx ****  334:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_x(double x, double y). */
 397:fltk-1.3.4-1/src/fl_color.cxx ****  335:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_x(double x, double y);
 398:fltk-1.3.4-1/src/fl_color.cxx ****  336:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_y(double x, double y). */
 399:fltk-1.3.4-1/src/fl_color.cxx ****  337:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_y(double x, double y);
 400:fltk-1.3.4-1/src/fl_color.cxx ****  338:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_dx(double x, double y). */
 401:fltk-1.3.4-1/src/fl_color.cxx ****  339:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_dx(double x, double y);
 402:fltk-1.3.4-1/src/fl_color.cxx ****  340:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_dy(double x, double y). */
 1677              		.loc 2 402 0
 1678              		.cfi_startproc
 1679              	.LVL199:
 403:fltk-1.3.4-1/src/fl_color.cxx ****  341:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_dy(double x, double y);
 404:fltk-1.3.4-1/src/fl_color.cxx ****  342:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_region(). */
 405:fltk-1.3.4-1/src/fl_color.cxx ****  343:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region clip_region();
 406:fltk-1.3.4-1/src/fl_color.cxx ****  344:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_region(Fl_Region r). */
 407:fltk-1.3.4-1/src/fl_color.cxx ****  345:fltk-1.3.4-1/FL/Fl_Device.H ****   void clip_region(Fl_Region r);
 1680              		.loc 2 407 0
 1681 0000 F7C700FF 		testl	$-256, %edi
 1681      FFFF
 1682 0006 7509     		jne	.L159
 408:fltk-1.3.4-1/src/fl_color.cxx ****  346:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_restore_clip(). */
 1683              		.loc 2 408 0
 1684 0008 89FF     		movl	%edi, %edi
 1685 000a 8B3CBD00 		movl	_ZL7fl_cmap(,%rdi,4), %edi
 1685      000000
 1686              	.LVL200:
 1687              	.L159:
 409:fltk-1.3.4-1/src/fl_color.cxx ****  347:fltk-1.3.4-1/FL/Fl_Device.H ****   void restore_clip();
 410:fltk-1.3.4-1/src/fl_color.cxx ****  348:fltk-1.3.4-1/FL/Fl_Device.H ****   
 1688              		.loc 2 410 0
 1689 0011 F7C600FF 		testl	$-256, %esi
 1689      FFFF
 1690 0017 7509     		jne	.L160
 411:fltk-1.3.4-1/src/fl_color.cxx ****  349:fltk-1.3.4-1/FL/Fl_Device.H ****   // Images
 1691              		.loc 2 411 0
 1692 0019 89F6     		movl	%esi, %esi
 1693 001b 8B34B500 		movl	_ZL7fl_cmap(,%rsi,4), %esi
 1693      000000
 1694              	.LVL201:
 1695              	.L160:
 412:fltk-1.3.4-1/src/fl_color.cxx ****  350:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(const uchar* buf, int X,int Y,
 413:fltk-1.3.4-1/src/fl_color.cxx ****  351:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(const uchar* buf, int X,int Y,int
 1696              		.loc 2 413 0
 1697 0022 660FEFC9 		pxor	%xmm1, %xmm1
 1698 0026 89F8     		movl	%edi, %eax
 1699 0028 C1E818   		shrl	$24, %eax
 1700 002b F30F1015 		movss	.LC17(%rip), %xmm2
 1700      00000000 
 1701 0033 F30F5CD0 		subss	%xmm0, %xmm2
 1702 0037 F30F2AC8 		cvtsi2ss	%eax, %xmm1
 1703 003b 89F0     		movl	%esi, %eax
 1704 003d C1E818   		shrl	$24, %eax
 1705 0040 0F28D9   		movaps	%xmm1, %xmm3
 1706 0043 660FEFC9 		pxor	%xmm1, %xmm1
 1707 0047 F30F59D8 		mulss	%xmm0, %xmm3
 1708 004b F30F2AC8 		cvtsi2ss	%eax, %xmm1
 414:fltk-1.3.4-1/src/fl_color.cxx ****  352:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(const uchar* buf, int X,i
 1709              		.loc 2 414 0
 1710 004f 89F8     		movl	%edi, %eax
 1711 0051 C1E810   		shrl	$16, %eax
 1712 0054 0FB6C0   		movzbl	%al, %eax
 413:fltk-1.3.4-1/src/fl_color.cxx ****  352:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(const uchar* buf, int X,i
 1713              		.loc 2 413 0
 1714 0057 F30F59CA 		mulss	%xmm2, %xmm1
 1715 005b F30F58CB 		addss	%xmm3, %xmm1
 1716              		.loc 2 414 0
 1717 005f 660FEFDB 		pxor	%xmm3, %xmm3
 1718 0063 F30F2AD8 		cvtsi2ss	%eax, %xmm3
 1719 0067 89F0     		movl	%esi, %eax
 413:fltk-1.3.4-1/src/fl_color.cxx ****  352:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(const uchar* buf, int X,i
 1720              		.loc 2 413 0
 1721 0069 F30F2CC9 		cvttss2si	%xmm1, %ecx
 1722              	.LVL202:
 1723              		.loc 2 414 0
 1724 006d 660FEFC9 		pxor	%xmm1, %xmm1
 1725 0071 C1E810   		shrl	$16, %eax
 1726 0074 0FB6C0   		movzbl	%al, %eax
 1727 0077 F30F2AC8 		cvtsi2ss	%eax, %xmm1
 415:fltk-1.3.4-1/src/fl_color.cxx ****  353:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(const uchar* buf, int X,int 
 1728              		.loc 2 415 0
 1729 007b 4889F8   		movq	%rdi, %rax
 1730 007e 0FB6FC   		movzbl	%ah, %edi
 1731              	.LVL203:
 1732 0081 4889F0   		movq	%rsi, %rax
 1733 0084 0FB6F4   		movzbl	%ah, %esi
 1734              	.LVL204:
 1735              	.LBB184:
 1736              	.LBB185:
 998:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 1737              		.loc 4 998 0
 1738 0087 B8380000 		movl	$56, %eax
 1738      00
 1739              	.LBE185:
 1740              	.LBE184:
 414:fltk-1.3.4-1/src/fl_color.cxx ****  353:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(const uchar* buf, int X,int 
 1741              		.loc 2 414 0
 1742 008c F30F59D8 		mulss	%xmm0, %xmm3
 1743 0090 F30F59CA 		mulss	%xmm2, %xmm1
 1744 0094 F30F58CB 		addss	%xmm3, %xmm1
 1745 0098 F30F2CD1 		cvttss2si	%xmm1, %edx
 1746              	.LVL205:
 1747              		.loc 2 415 0
 1748 009c 660FEFC9 		pxor	%xmm1, %xmm1
 1749 00a0 F30F2ACF 		cvtsi2ss	%edi, %xmm1
 1750 00a4 F30F59C1 		mulss	%xmm1, %xmm0
 1751              	.LVL206:
 1752 00a8 660FEFC9 		pxor	%xmm1, %xmm1
 1753 00ac F30F2ACE 		cvtsi2ss	%esi, %xmm1
 1754 00b0 F30F59D1 		mulss	%xmm1, %xmm2
 1755 00b4 F30F58D0 		addss	%xmm0, %xmm2
 1756 00b8 F30F2CF2 		cvttss2si	%xmm2, %esi
 1757              	.LVL207:
 1758              	.LBB188:
 1759              	.LBB186:
 998:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 1760              		.loc 4 998 0
 1761 00bc 89F7     		movl	%esi, %edi
 1762 00be 09D7     		orl	%edx, %edi
 1763 00c0 4008CF   		orb	%cl, %dil
 1764 00c3 750B     		jne	.L164
 1765              	.LVL208:
 1766              	.LBE186:
 1767              	.LBE188:
 416:fltk-1.3.4-1/src/fl_color.cxx ****  354:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(Fl_Draw_Image_Cb cb, void* dat
 417:fltk-1.3.4-1/src/fl_color.cxx ****  355:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(Fl_Draw_Image_Cb cb, void* data, 
 418:fltk-1.3.4-1/src/fl_color.cxx ****  356:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(Fl_Draw_Image_Cb cb, void
 1768              		.loc 2 418 0
 1769 00c5 F3C3     		rep ret
 1770              	.LVL209:
 1771 00c7 660F1F84 		.p2align 4,,10
 1771      00000000 
 1771      00
 1772              		.p2align 3
 1773              	.L164:
 1774              	.LBB189:
 1775              	.LBB187:
 999:fltk-1.3.4-1/FL/Enumerations.H **** }
 1776              		.loc 4 999 0
 1777 00d0 0FB6C1   		movzbl	%cl, %eax
 1778 00d3 0FB6CA   		movzbl	%dl, %ecx
 1779              	.LVL210:
 1780 00d6 C1E008   		sall	$8, %eax
 1781              	.LVL211:
 1782 00d9 09C8     		orl	%ecx, %eax
 1783 00db 89C2     		movl	%eax, %edx
 1784              	.LVL212:
 1785 00dd 400FB6C6 		movzbl	%sil, %eax
 1786 00e1 C1E208   		sall	$8, %edx
 1787 00e4 09C2     		orl	%eax, %edx
 1788 00e6 89D0     		movl	%edx, %eax
 1789 00e8 C1E008   		sall	$8, %eax
 1790              	.LVL213:
 1791              	.LBE187:
 1792              	.LBE189:
 1793              		.loc 2 418 0
 1794 00eb C3       		ret
 1795              		.cfi_endproc
 1796              	.LFE479:
 1798              		.section	.text.unlikely._Z16fl_color_averagejjf
 1799              	.LCOLDE18:
 1800              		.section	.text._Z16fl_color_averagejjf
 1801              	.LHOTE18:
 1802              		.section	.text.unlikely._Z11fl_inactivej,"ax",@progbits
 1803              	.LCOLDB20:
 1804              		.section	.text._Z11fl_inactivej,"ax",@progbits
 1805              	.LHOTB20:
 1806              		.p2align 4,,15
 1807              		.globl	_Z11fl_inactivej
 1809              	_Z11fl_inactivej:
 1810              	.LFB480:
 419:fltk-1.3.4-1/src/fl_color.cxx ****  357:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(Fl_Draw_Image_Cb cb, void* d
 420:fltk-1.3.4-1/src/fl_color.cxx ****  358:fltk-1.3.4-1/FL/Fl_Device.H ****   // Image classes
 421:fltk-1.3.4-1/src/fl_color.cxx ****  359:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_RGB_Image object to the device. 
 422:fltk-1.3.4-1/src/fl_color.cxx ****  360:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 423:fltk-1.3.4-1/src/fl_color.cxx ****  361:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (u
 1811              		.loc 2 423 0
 1812              		.cfi_startproc
 1813              	.LVL214:
 424:fltk-1.3.4-1/src/fl_color.cxx ****  362:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 1814              		.loc 2 424 0
 1815 0000 F30F1005 		movss	.LC19(%rip), %xmm0
 1815      00000000 
 1816 0008 BE310000 		movl	$49, %esi
 1816      00
 1817 000d E9000000 		jmp	_Z16fl_color_averagejjf
 1817      00
 1818              	.LVL215:
 1819              		.cfi_endproc
 1820              	.LFE480:
 1822              		.section	.text.unlikely._Z11fl_inactivej
 1823              	.LCOLDE20:
 1824              		.section	.text._Z11fl_inactivej
 1825              	.LHOTE20:
 1826              		.section	.text.unlikely._Z11fl_contrastjj,"ax",@progbits
 1827              	.LCOLDB21:
 1828              		.section	.text._Z11fl_contrastjj,"ax",@progbits
 1829              	.LHOTB21:
 1830              		.p2align 4,,15
 1831              		.globl	_Z11fl_contrastjj
 1833              	_Z11fl_contrastjj:
 1834              	.LFB481:
 425:fltk-1.3.4-1/src/fl_color.cxx ****  363:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 426:fltk-1.3.4-1/src/fl_color.cxx ****  364:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_RGB_Image * rgb,int XP, int YP, int 
 427:fltk-1.3.4-1/src/fl_color.cxx ****  365:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Pixmap object to the device. 
 428:fltk-1.3.4-1/src/fl_color.cxx ****  366:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 429:fltk-1.3.4-1/src/fl_color.cxx ****  367:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (u
 430:fltk-1.3.4-1/src/fl_color.cxx ****  368:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 431:fltk-1.3.4-1/src/fl_color.cxx ****  369:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 432:fltk-1.3.4-1/src/fl_color.cxx ****  370:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_Pixmap * pxm,int XP, int YP, int WP,
 433:fltk-1.3.4-1/src/fl_color.cxx ****  371:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Bitmap object to the device. 
 434:fltk-1.3.4-1/src/fl_color.cxx ****  372:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 435:fltk-1.3.4-1/src/fl_color.cxx ****  373:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (u
 1835              		.loc 2 435 0
 1836              		.cfi_startproc
 1837              	.LVL216:
 436:fltk-1.3.4-1/src/fl_color.cxx ****  374:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 437:fltk-1.3.4-1/src/fl_color.cxx ****  375:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 438:fltk-1.3.4-1/src/fl_color.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 439:fltk-1.3.4-1/src/fl_color.cxx ****  377:fltk-1.3.4-1/FL/Fl_Device.H **** #if FLTK_ABI_VERSION >= 10301
 440:fltk-1.3.4-1/src/fl_color.cxx ****  378:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual
 441:fltk-1.3.4-1/src/fl_color.cxx ****  379:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 1838              		.loc 2 441 0
 1839 0000 F7C700FF 		testl	$-256, %edi
 1839      FFFF
 1840 0006 89F9     		movl	%edi, %ecx
 1841 0008 7509     		jne	.L167
 442:fltk-1.3.4-1/src/fl_color.cxx ****  380:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscree
 1842              		.loc 2 442 0
 1843 000a 89F8     		movl	%edi, %eax
 1844 000c 8B0C8500 		movl	_ZL7fl_cmap(,%rax,4), %ecx
 1844      000000
 1845              	.LVL217:
 1846              	.L167:
 443:fltk-1.3.4-1/src/fl_color.cxx ****  381:fltk-1.3.4-1/FL/Fl_Device.H ****   
 444:fltk-1.3.4-1/src/fl_color.cxx ****  382:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 1847              		.loc 2 444 0
 1848 0013 F7C600FF 		testl	$-256, %esi
 1848      FFFF
 1849 0019 7509     		jne	.L168
 445:fltk-1.3.4-1/src/fl_color.cxx ****  383:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 1850              		.loc 2 445 0
 1851 001b 89F6     		movl	%esi, %esi
 1852 001d 8B34B500 		movl	_ZL7fl_cmap(,%rsi,4), %esi
 1852      000000
 1853              	.LVL218:
 1854              	.L168:
 446:fltk-1.3.4-1/src/fl_color.cxx ****  384:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 447:fltk-1.3.4-1/src/fl_color.cxx ****  385:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(Fl_Font face, Fl_Fontsize size). */
 448:fltk-1.3.4-1/src/fl_color.cxx ****  386:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void font(Fl_Font face, Fl_Fontsize fsize) {font_ =
 1855              		.loc 2 448 0
 1856 0024 89C8     		movl	%ecx, %eax
 1857 0026 0FB6D5   		movzbl	%ch, %edx
 1858 0029 C1E918   		shrl	$24, %ecx
 1859              	.LVL219:
 1860 002c C1E810   		shrl	$16, %eax
 1861              	.LVL220:
 1862 002f 448D0492 		leal	(%rdx,%rdx,4), %r8d
 1863 0033 0FB6C0   		movzbl	%al, %eax
 1864 0036 6BC03B   		imull	$59, %eax, %eax
 1865 0039 428D1442 		leal	(%rdx,%r8,2), %edx
 1866 003d 41B81F85 		movl	$1374389535, %r8d
 1866      EB51
 1867 0043 6BC91E   		imull	$30, %ecx, %ecx
 1868 0046 01C2     		addl	%eax, %edx
 1869 0048 01D1     		addl	%edx, %ecx
 1870 004a 89C8     		movl	%ecx, %eax
 1871 004c 41F7E0   		mull	%r8d
 449:fltk-1.3.4-1/src/fl_color.cxx ****  387:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(void). */
 1872              		.loc 2 449 0
 1873 004f 89F0     		movl	%esi, %eax
 1874 0051 C1E810   		shrl	$16, %eax
 1875 0054 0FB6C0   		movzbl	%al, %eax
 448:fltk-1.3.4-1/src/fl_color.cxx ****  387:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(void). */
 1876              		.loc 2 448 0
 1877 0057 89D1     		movl	%edx, %ecx
 1878              		.loc 2 449 0
 1879 0059 4889F2   		movq	%rsi, %rdx
 1880 005c C1EE18   		shrl	$24, %esi
 1881              	.LVL221:
 1882 005f 0FB6D6   		movzbl	%dh, %edx
 448:fltk-1.3.4-1/src/fl_color.cxx ****  387:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(void). */
 1883              		.loc 2 448 0
 1884 0062 C1E905   		shrl	$5, %ecx
 1885              	.LVL222:
 1886              		.loc 2 449 0
 1887 0065 448D0C92 		leal	(%rdx,%rdx,4), %r9d
 1888 0069 6BC03B   		imull	$59, %eax, %eax
 1889 006c 6BF61E   		imull	$30, %esi, %esi
 1890 006f 428D144A 		leal	(%rdx,%r9,2), %edx
 1891 0073 01C2     		addl	%eax, %edx
 1892 0075 01F2     		addl	%esi, %edx
 450:fltk-1.3.4-1/src/fl_color.cxx ****  388:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font() {return font_; }
 451:fltk-1.3.4-1/src/fl_color.cxx ****  389:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_size(). */
 452:fltk-1.3.4-1/src/fl_color.cxx ****  390:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size() {return size_; }
 1893              		.loc 2 452 0
 1894 0077 89CE     		movl	%ecx, %esi
 449:fltk-1.3.4-1/src/fl_color.cxx ****  388:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font() {return font_; }
 1895              		.loc 2 449 0
 1896 0079 89D0     		movl	%edx, %eax
 1897 007b 41F7E0   		mull	%r8d
 1898 007e 89F8     		movl	%edi, %eax
 1899 0080 C1EA05   		shrl	$5, %edx
 1900              	.LVL223:
 1901              		.loc 2 452 0
 1902 0083 29D6     		subl	%edx, %esi
 1903 0085 83FE63   		cmpl	$99, %esi
 1904 0088 7F19     		jg	.L169
 1905              	.LVL224:
 453:fltk-1.3.4-1/src/fl_color.cxx ****  391:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_width(const char *str, int n). */
 1906              		.loc 2 453 0
 1907 008a 89D7     		movl	%edx, %edi
 1908 008c 29CF     		subl	%ecx, %edi
 1909 008e 83FF63   		cmpl	$99, %edi
 1910 0091 7F10     		jg	.L169
 454:fltk-1.3.4-1/src/fl_color.cxx ****  392:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual double width(const char *str, int n) {return 0;}
 455:fltk-1.3.4-1/src/fl_color.cxx ****  393:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_width(unsigned int n). */
 1911              		.loc 2 455 0
 1912 0093 81FA8000 		cmpl	$128, %edx
 1912      0000
 1913 0099 19C0     		sbbl	%eax, %eax
 1914              	.LVL225:
 1915 009b 25C70000 		andl	$199, %eax
 1915      00
 1916 00a0 83C038   		addl	$56, %eax
 1917              	.L169:
 456:fltk-1.3.4-1/src/fl_color.cxx ****  394:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual inline double width(unsigned int c) { char ch = (ch
 1918              		.loc 2 456 0
 1919 00a3 F3C3     		rep ret
 1920              		.cfi_endproc
 1921              	.LFE481:
 1923              		.section	.text.unlikely._Z11fl_contrastjj
 1924              	.LCOLDE21:
 1925              		.section	.text._Z11fl_contrastjj
 1926              	.LHOTE21:
 1927              		.section	.bss._ZZ9fl_xpixeljE9allcolors,"aw",@nobits
 1928              		.align 8
 1931              	_ZZ9fl_xpixeljE9allcolors:
 1932 0000 00000000 		.zero	8
 1932      00000000 
 1933              		.section	.bss._ZZ9fl_xpixeljE9numcolors,"aw",@nobits
 1934              		.align 4
 1937              	_ZZ9fl_xpixeljE9numcolors:
 1938 0000 00000000 		.zero	4
 1939              		.weak	_ZTS23Fl_Xlib_Graphics_Driver
 1940              		.section	.rodata._ZTS23Fl_Xlib_Graphics_Driver,"aG",@progbits,_ZTS23Fl_Xlib_Graphics_Driver,comdat
 1941              		.align 16
 1944              	_ZTS23Fl_Xlib_Graphics_Driver:
 1945 0000 3233466C 		.string	"23Fl_Xlib_Graphics_Driver"
 1945      5F586C69 
 1945      625F4772 
 1945      61706869 
 1945      63735F44 
 1946              		.weak	_ZTI23Fl_Xlib_Graphics_Driver
 1947              		.section	.rodata._ZTI23Fl_Xlib_Graphics_Driver,"aG",@progbits,_ZTI23Fl_Xlib_Graphics_Driver,comdat
 1948              		.align 8
 1951              	_ZTI23Fl_Xlib_Graphics_Driver:
 1952 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1952      00000000 
 1953 0008 00000000 		.quad	_ZTS23Fl_Xlib_Graphics_Driver
 1953      00000000 
 1954 0010 00000000 		.quad	_ZTI18Fl_Graphics_Driver
 1954      00000000 
 1955              		.weak	_ZTV23Fl_Xlib_Graphics_Driver
 1956              		.section	.rodata._ZTV23Fl_Xlib_Graphics_Driver,"aG",@progbits,_ZTV23Fl_Xlib_Graphics_Driver,comdat
 1957              		.align 8
 1960              	_ZTV23Fl_Xlib_Graphics_Driver:
 1961 0000 00000000 		.quad	0
 1961      00000000 
 1962 0008 00000000 		.quad	_ZTI23Fl_Xlib_Graphics_Driver
 1962      00000000 
 1963 0010 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver10class_nameEv
 1963      00000000 
 1964 0018 00000000 		.quad	_ZN23Fl_Xlib_Graphics_DriverD1Ev
 1964      00000000 
 1965 0020 00000000 		.quad	_ZN23Fl_Xlib_Graphics_DriverD0Ev
 1965      00000000 
 1966 0028 00000000 		.quad	_ZN18Fl_Graphics_Driver4rectEiiii
 1966      00000000 
 1967 0030 00000000 		.quad	_ZN18Fl_Graphics_Driver5rectfEiiii
 1967      00000000 
 1968 0038 00000000 		.quad	_ZN18Fl_Graphics_Driver10line_styleEiiPc
 1968      00000000 
 1969 0040 00000000 		.quad	_ZN18Fl_Graphics_Driver6xylineEiii
 1969      00000000 
 1970 0048 00000000 		.quad	_ZN18Fl_Graphics_Driver6xylineEiiii
 1970      00000000 
 1971 0050 00000000 		.quad	_ZN18Fl_Graphics_Driver6xylineEiiiii
 1971      00000000 
 1972 0058 00000000 		.quad	_ZN18Fl_Graphics_Driver6yxlineEiii
 1972      00000000 
 1973 0060 00000000 		.quad	_ZN18Fl_Graphics_Driver6yxlineEiiii
 1973      00000000 
 1974 0068 00000000 		.quad	_ZN18Fl_Graphics_Driver6yxlineEiiiii
 1974      00000000 
 1975 0070 00000000 		.quad	_ZN18Fl_Graphics_Driver4lineEiiii
 1975      00000000 
 1976 0078 00000000 		.quad	_ZN18Fl_Graphics_Driver4lineEiiiiii
 1976      00000000 
 1977 0080 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver4drawEPKciii
 1977      00000000 
 1978 0088 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver4drawEiPKciii
 1978      00000000 
 1979 0090 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver8rtl_drawEPKciii
 1979      00000000 
 1980 0098 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver5colorEj
 1980      00000000 
 1981 00a0 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver5colorEhhh
 1981      00000000 
 1982 00a8 00000000 		.quad	_ZN18Fl_Graphics_Driver5pointEii
 1982      00000000 
 1983 00b0 00000000 		.quad	_ZN18Fl_Graphics_Driver4loopEiiiiii
 1983      00000000 
 1984 00b8 00000000 		.quad	_ZN18Fl_Graphics_Driver4loopEiiiiiiii
 1984      00000000 
 1985 00c0 00000000 		.quad	_ZN18Fl_Graphics_Driver7polygonEiiiiii
 1985      00000000 
 1986 00c8 00000000 		.quad	_ZN18Fl_Graphics_Driver7polygonEiiiiiiii
 1986      00000000 
 1987 00d0 00000000 		.quad	_ZN18Fl_Graphics_Driver12begin_pointsEv
 1987      00000000 
 1988 00d8 00000000 		.quad	_ZN18Fl_Graphics_Driver10begin_lineEv
 1988      00000000 
 1989 00e0 00000000 		.quad	_ZN18Fl_Graphics_Driver10begin_loopEv
 1989      00000000 
 1990 00e8 00000000 		.quad	_ZN18Fl_Graphics_Driver13begin_polygonEv
 1990      00000000 
 1991 00f0 00000000 		.quad	_ZN18Fl_Graphics_Driver6vertexEdd
 1991      00000000 
 1992 00f8 00000000 		.quad	_ZN18Fl_Graphics_Driver5curveEdddddddd
 1992      00000000 
 1993 0100 00000000 		.quad	_ZN18Fl_Graphics_Driver6circleEddd
 1993      00000000 
 1994 0108 00000000 		.quad	_ZN18Fl_Graphics_Driver3arcEddddd
 1994      00000000 
 1995 0110 00000000 		.quad	_ZN18Fl_Graphics_Driver3arcEiiiidd
 1995      00000000 
 1996 0118 00000000 		.quad	_ZN18Fl_Graphics_Driver3pieEiiiidd
 1996      00000000 
 1997 0120 00000000 		.quad	_ZN18Fl_Graphics_Driver10end_pointsEv
 1997      00000000 
 1998 0128 00000000 		.quad	_ZN18Fl_Graphics_Driver8end_lineEv
 1998      00000000 
 1999 0130 00000000 		.quad	_ZN18Fl_Graphics_Driver8end_loopEv
 1999      00000000 
 2000 0138 00000000 		.quad	_ZN18Fl_Graphics_Driver11end_polygonEv
 2000      00000000 
 2001 0140 00000000 		.quad	_ZN18Fl_Graphics_Driver21begin_complex_polygonEv
 2001      00000000 
 2002 0148 00000000 		.quad	_ZN18Fl_Graphics_Driver3gapEv
 2002      00000000 
 2003 0150 00000000 		.quad	_ZN18Fl_Graphics_Driver19end_complex_polygonEv
 2003      00000000 
 2004 0158 00000000 		.quad	_ZN18Fl_Graphics_Driver18transformed_vertexEdd
 2004      00000000 
 2005 0160 00000000 		.quad	_ZN18Fl_Graphics_Driver9push_clipEiiii
 2005      00000000 
 2006 0168 00000000 		.quad	_ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_
 2006      00000000 
 2007 0170 00000000 		.quad	_ZN18Fl_Graphics_Driver11not_clippedEiiii
 2007      00000000 
 2008 0178 00000000 		.quad	_ZN18Fl_Graphics_Driver12push_no_clipEv
 2008      00000000 
 2009 0180 00000000 		.quad	_ZN18Fl_Graphics_Driver8pop_clipEv
 2009      00000000 
 2010 0188 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii
 2010      00000000 
 2011 0190 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii
 2011      00000000 
 2012 0198 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 2012      00000000 
 2013 01a0 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 2013      00000000 
 2014 01a8 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 2014      00000000 
 2015 01b0 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
 2015      00000000 
 2016 01b8 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 2016      00000000 
 2017 01c0 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver4fontEii
 2017      00000000 
 2018 01c8 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver5widthEPKci
 2018      00000000 
 2019 01d0 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver5widthEj
 2019      00000000 
 2020 01d8 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_
 2020      00000000 
 2021 01e0 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver6heightEv
 2021      00000000 
 2022 01e8 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver7descentEv
 2022      00000000 
 2023              		.globl	fl_xmap
 2024              		.section	.bss.fl_xmap,"aw",@nobits
 2025              		.align 32
 2028              	fl_xmap:
 2029 0000 00000000 		.zero	4096
 2029      00000000 
 2029      00000000 
 2029      00000000 
 2029      00000000 
 2030              		.section	.data._ZL7fl_cmap,"aw",@progbits
 2031              		.align 32
 2034              	_ZL7fl_cmap:
 2035 0000 00000000 		.long	0
 2036 0004 000000FF 		.long	-16777216
 2037 0008 0000FF00 		.long	16711680
 2038 000c 0000FFFF 		.long	-65536
 2039 0010 00FF0000 		.long	65280
 2040 0014 00FF00FF 		.long	-16711936
 2041 0018 00FFFF00 		.long	16776960
 2042 001c 00FFFFFF 		.long	-256
 2043 0020 00555555 		.long	1431655680
 2044 0024 007171C6 		.long	-965644032
 2045 0028 0071C671 		.long	1908830464
 2046 002c 00388E8E 		.long	-1903282176
 2047 0030 00C67171 		.long	1903281664
 2048 0034 008E388E 		.long	-1908896256
 2049 0038 008E8E38 		.long	948866560
 2050 003c 00800000 		.long	32768
 2051 0040 0098A8A8 		.long	-1465346048
 2052 0044 00D8E8E8 		.long	-387393536
 2053 0048 00586868 		.long	1751668736
 2054 004c 00A8A898 		.long	-1733777408
 2055 0050 00E8E8D8 		.long	-655824896
 2056 0054 00686858 		.long	1483237376
 2057 0058 00A89C9C 		.long	-1667454976
 2058 005c 00E8DCDC 		.long	-589502464
 2059 0060 00685C5C 		.long	1549559808
 2060 0064 009CA89C 		.long	-1666671616
 2061 0068 00DCE8DC 		.long	-588719104
 2062 006c 005C685C 		.long	1550343168
 2063 0070 00909090 		.long	-1869574144
 2064 0074 00C0C0C0 		.long	-1061109760
 2065 0078 00505050 		.long	1347440640
 2066 007c 00A0A0A0 		.long	-1600086016
 2067 0080 00000000 		.long	0
 2068 0084 000D0D0D 		.long	218959104
 2069 0088 001A1A1A 		.long	437918208
 2070 008c 00262626 		.long	640034304
 2071 0090 00313131 		.long	825307392
 2072 0094 003D3D3D 		.long	1027423488
 2073 0098 00484848 		.long	1212696576
 2074 009c 00555555 		.long	1431655680
 2075 00a0 005F5F5F 		.long	1600085760
 2076 00a4 006A6A6A 		.long	1785358848
 2077 00a8 00757575 		.long	1970631936
 2078 00ac 00808080 		.long	-2139062272
 2079 00b0 008A8A8A 		.long	-1970632192
 2080 00b4 00959595 		.long	-1785359104
 2081 00b8 00A0A0A0 		.long	-1600086016
 2082 00bc 00AAAAAA 		.long	-1431655936
 2083 00c0 00B5B5B5 		.long	-1246382848
 2084 00c4 00C0C0C0 		.long	-1061109760
 2085 00c8 00CBCBCB 		.long	-875836672
 2086 00cc 00D5D5D5 		.long	-707406592
 2087 00d0 00E0E0E0 		.long	-522133504
 2088 00d4 00EAEAEA 		.long	-353703424
 2089 00d8 00F5F5F5 		.long	-168430336
 2090 00dc 00FFFFFF 		.long	-256
 2091 00e0 00000000 		.long	0
 2092 00e4 00002400 		.long	2359296
 2093 00e8 00004800 		.long	4718592
 2094 00ec 00006D00 		.long	7143424
 2095 00f0 00009100 		.long	9502720
 2096 00f4 0000B600 		.long	11927552
 2097 00f8 0000DA00 		.long	14286848
 2098 00fc 0000FF00 		.long	16711680
 2099 0100 0000003F 		.long	1056964608
 2100 0104 0000243F 		.long	1059323904
 2101 0108 0000483F 		.long	1061683200
 2102 010c 00006D3F 		.long	1064108032
 2103 0110 0000913F 		.long	1066467328
 2104 0114 0000B63F 		.long	1068892160
 2105 0118 0000DA3F 		.long	1071251456
 2106 011c 0000FF3F 		.long	1073676288
 2107 0120 0000007F 		.long	2130706432
 2108 0124 0000247F 		.long	2133065728
 2109 0128 0000487F 		.long	2135425024
 2110 012c 00006D7F 		.long	2137849856
 2111 0130 0000917F 		.long	2140209152
 2112 0134 0000B67F 		.long	2142633984
 2113 0138 0000DA7F 		.long	2144993280
 2114 013c 0000FF7F 		.long	2147418112
 2115 0140 000000BF 		.long	-1090519040
 2116 0144 000024BF 		.long	-1088159744
 2117 0148 000048BF 		.long	-1085800448
 2118 014c 00006DBF 		.long	-1083375616
 2119 0150 000091BF 		.long	-1081016320
 2120 0154 0000B6BF 		.long	-1078591488
 2121 0158 0000DABF 		.long	-1076232192
 2122 015c 0000FFBF 		.long	-1073807360
 2123 0160 000000FF 		.long	-16777216
 2124 0164 000024FF 		.long	-14417920
 2125 0168 000048FF 		.long	-12058624
 2126 016c 00006DFF 		.long	-9633792
 2127 0170 000091FF 		.long	-7274496
 2128 0174 0000B6FF 		.long	-4849664
 2129 0178 0000DAFF 		.long	-2490368
 2130 017c 0000FFFF 		.long	-65536
 2131 0180 003F0000 		.long	16128
 2132 0184 003F2400 		.long	2375424
 2133 0188 003F4800 		.long	4734720
 2134 018c 003F6D00 		.long	7159552
 2135 0190 003F9100 		.long	9518848
 2136 0194 003FB600 		.long	11943680
 2137 0198 003FDA00 		.long	14302976
 2138 019c 003FFF00 		.long	16727808
 2139 01a0 003F003F 		.long	1056980736
 2140 01a4 003F243F 		.long	1059340032
 2141 01a8 003F483F 		.long	1061699328
 2142 01ac 003F6D3F 		.long	1064124160
 2143 01b0 003F913F 		.long	1066483456
 2144 01b4 003FB63F 		.long	1068908288
 2145 01b8 003FDA3F 		.long	1071267584
 2146 01bc 003FFF3F 		.long	1073692416
 2147 01c0 003F007F 		.long	2130722560
 2148 01c4 003F247F 		.long	2133081856
 2149 01c8 003F487F 		.long	2135441152
 2150 01cc 003F6D7F 		.long	2137865984
 2151 01d0 003F917F 		.long	2140225280
 2152 01d4 003FB67F 		.long	2142650112
 2153 01d8 003FDA7F 		.long	2145009408
 2154 01dc 003FFF7F 		.long	2147434240
 2155 01e0 003F00BF 		.long	-1090502912
 2156 01e4 003F24BF 		.long	-1088143616
 2157 01e8 003F48BF 		.long	-1085784320
 2158 01ec 003F6DBF 		.long	-1083359488
 2159 01f0 003F91BF 		.long	-1081000192
 2160 01f4 003FB6BF 		.long	-1078575360
 2161 01f8 003FDABF 		.long	-1076216064
 2162 01fc 003FFFBF 		.long	-1073791232
 2163 0200 003F00FF 		.long	-16761088
 2164 0204 003F24FF 		.long	-14401792
 2165 0208 003F48FF 		.long	-12042496
 2166 020c 003F6DFF 		.long	-9617664
 2167 0210 003F91FF 		.long	-7258368
 2168 0214 003FB6FF 		.long	-4833536
 2169 0218 003FDAFF 		.long	-2474240
 2170 021c 003FFFFF 		.long	-49408
 2171 0220 007F0000 		.long	32512
 2172 0224 007F2400 		.long	2391808
 2173 0228 007F4800 		.long	4751104
 2174 022c 007F6D00 		.long	7175936
 2175 0230 007F9100 		.long	9535232
 2176 0234 007FB600 		.long	11960064
 2177 0238 007FDA00 		.long	14319360
 2178 023c 007FFF00 		.long	16744192
 2179 0240 007F003F 		.long	1056997120
 2180 0244 007F243F 		.long	1059356416
 2181 0248 007F483F 		.long	1061715712
 2182 024c 007F6D3F 		.long	1064140544
 2183 0250 007F913F 		.long	1066499840
 2184 0254 007FB63F 		.long	1068924672
 2185 0258 007FDA3F 		.long	1071283968
 2186 025c 007FFF3F 		.long	1073708800
 2187 0260 007F007F 		.long	2130738944
 2188 0264 007F247F 		.long	2133098240
 2189 0268 007F487F 		.long	2135457536
 2190 026c 007F6D7F 		.long	2137882368
 2191 0270 007F917F 		.long	2140241664
 2192 0274 007FB67F 		.long	2142666496
 2193 0278 007FDA7F 		.long	2145025792
 2194 027c 007FFF7F 		.long	2147450624
 2195 0280 007F00BF 		.long	-1090486528
 2196 0284 007F24BF 		.long	-1088127232
 2197 0288 007F48BF 		.long	-1085767936
 2198 028c 007F6DBF 		.long	-1083343104
 2199 0290 007F91BF 		.long	-1080983808
 2200 0294 007FB6BF 		.long	-1078558976
 2201 0298 007FDABF 		.long	-1076199680
 2202 029c 007FFFBF 		.long	-1073774848
 2203 02a0 007F00FF 		.long	-16744704
 2204 02a4 007F24FF 		.long	-14385408
 2205 02a8 007F48FF 		.long	-12026112
 2206 02ac 007F6DFF 		.long	-9601280
 2207 02b0 007F91FF 		.long	-7241984
 2208 02b4 007FB6FF 		.long	-4817152
 2209 02b8 007FDAFF 		.long	-2457856
 2210 02bc 007FFFFF 		.long	-33024
 2211 02c0 00BF0000 		.long	48896
 2212 02c4 00BF2400 		.long	2408192
 2213 02c8 00BF4800 		.long	4767488
 2214 02cc 00BF6D00 		.long	7192320
 2215 02d0 00BF9100 		.long	9551616
 2216 02d4 00BFB600 		.long	11976448
 2217 02d8 00BFDA00 		.long	14335744
 2218 02dc 00BFFF00 		.long	16760576
 2219 02e0 00BF003F 		.long	1057013504
 2220 02e4 00BF243F 		.long	1059372800
 2221 02e8 00BF483F 		.long	1061732096
 2222 02ec 00BF6D3F 		.long	1064156928
 2223 02f0 00BF913F 		.long	1066516224
 2224 02f4 00BFB63F 		.long	1068941056
 2225 02f8 00BFDA3F 		.long	1071300352
 2226 02fc 00BFFF3F 		.long	1073725184
 2227 0300 00BF007F 		.long	2130755328
 2228 0304 00BF247F 		.long	2133114624
 2229 0308 00BF487F 		.long	2135473920
 2230 030c 00BF6D7F 		.long	2137898752
 2231 0310 00BF917F 		.long	2140258048
 2232 0314 00BFB67F 		.long	2142682880
 2233 0318 00BFDA7F 		.long	2145042176
 2234 031c 00BFFF7F 		.long	2147467008
 2235 0320 00BF00BF 		.long	-1090470144
 2236 0324 00BF24BF 		.long	-1088110848
 2237 0328 00BF48BF 		.long	-1085751552
 2238 032c 00BF6DBF 		.long	-1083326720
 2239 0330 00BF91BF 		.long	-1080967424
 2240 0334 00BFB6BF 		.long	-1078542592
 2241 0338 00BFDABF 		.long	-1076183296
 2242 033c 00BFFFBF 		.long	-1073758464
 2243 0340 00BF00FF 		.long	-16728320
 2244 0344 00BF24FF 		.long	-14369024
 2245 0348 00BF48FF 		.long	-12009728
 2246 034c 00BF6DFF 		.long	-9584896
 2247 0350 00BF91FF 		.long	-7225600
 2248 0354 00BFB6FF 		.long	-4800768
 2249 0358 00BFDAFF 		.long	-2441472
 2250 035c 00BFFFFF 		.long	-16640
 2251 0360 00FF0000 		.long	65280
 2252 0364 00FF2400 		.long	2424576
 2253 0368 00FF4800 		.long	4783872
 2254 036c 00FF6D00 		.long	7208704
 2255 0370 00FF9100 		.long	9568000
 2256 0374 00FFB600 		.long	11992832
 2257 0378 00FFDA00 		.long	14352128
 2258 037c 00FFFF00 		.long	16776960
 2259 0380 00FF003F 		.long	1057029888
 2260 0384 00FF243F 		.long	1059389184
 2261 0388 00FF483F 		.long	1061748480
 2262 038c 00FF6D3F 		.long	1064173312
 2263 0390 00FF913F 		.long	1066532608
 2264 0394 00FFB63F 		.long	1068957440
 2265 0398 00FFDA3F 		.long	1071316736
 2266 039c 00FFFF3F 		.long	1073741568
 2267 03a0 00FF007F 		.long	2130771712
 2268 03a4 00FF247F 		.long	2133131008
 2269 03a8 00FF487F 		.long	2135490304
 2270 03ac 00FF6D7F 		.long	2137915136
 2271 03b0 00FF917F 		.long	2140274432
 2272 03b4 00FFB67F 		.long	2142699264
 2273 03b8 00FFDA7F 		.long	2145058560
 2274 03bc 00FFFF7F 		.long	2147483392
 2275 03c0 00FF00BF 		.long	-1090453760
 2276 03c4 00FF24BF 		.long	-1088094464
 2277 03c8 00FF48BF 		.long	-1085735168
 2278 03cc 00FF6DBF 		.long	-1083310336
 2279 03d0 00FF91BF 		.long	-1080951040
 2280 03d4 00FFB6BF 		.long	-1078526208
 2281 03d8 00FFDABF 		.long	-1076166912
 2282 03dc 00FFFFBF 		.long	-1073742080
 2283 03e0 00FF00FF 		.long	-16711936
 2284 03e4 00FF24FF 		.long	-14352640
 2285 03e8 00FF48FF 		.long	-11993344
 2286 03ec 00FF6DFF 		.long	-9568512
 2287 03f0 00FF91FF 		.long	-7209216
 2288 03f4 00FFB6FF 		.long	-4784384
 2289 03f8 00FFDAFF 		.long	-2425088
 2290 03fc 00FFFFFF 		.long	-256
 2291              		.section	.bss._ZL8beenhere,"aw",@nobits
 2294              	_ZL8beenhere:
 2295 0000 00       		.zero	1
 2296              		.globl	fl_extrashift
 2297              		.section	.bss.fl_extrashift,"aw",@nobits
 2298              		.align 4
 2301              	fl_extrashift:
 2302 0000 00000000 		.zero	4
 2303              		.globl	fl_blueshift
 2304              		.section	.bss.fl_blueshift,"aw",@nobits
 2305              		.align 4
 2308              	fl_blueshift:
 2309 0000 00000000 		.zero	4
 2310              		.globl	fl_greenshift
 2311              		.section	.bss.fl_greenshift,"aw",@nobits
 2312              		.align 4
 2315              	fl_greenshift:
 2316 0000 00000000 		.zero	4
 2317              		.globl	fl_redshift
 2318              		.section	.bss.fl_redshift,"aw",@nobits
 2319              		.align 4
 2322              	fl_redshift:
 2323 0000 00000000 		.zero	4
 2324              		.globl	fl_bluemask
 2325              		.section	.bss.fl_bluemask,"aw",@nobits
 2328              	fl_bluemask:
 2329 0000 00       		.zero	1
 2330              		.globl	fl_greenmask
 2331              		.section	.bss.fl_greenmask,"aw",@nobits
 2334              	fl_greenmask:
 2335 0000 00       		.zero	1
 2336              		.globl	fl_redmask
 2337              		.section	.bss.fl_redmask,"aw",@nobits
 2340              	fl_redmask:
 2341 0000 00       		.zero	1
 2342              		.section	.rodata.cst4,"aM",@progbits,4
 2343              		.align 4
 2344              	.LC17:
 2345 0000 0000803F 		.long	1065353216
 2346              		.align 4
 2347              	.LC19:
 2348 0004 C3F5A83E 		.long	1051260355
 2349              		.text
 2350              	.Letext0:
 2351              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
 2352              	.Letext_cold0:
 2353              		.file 5 "fltk-1.3.4-1/FL/fl_types.h"
 2354              		.file 6 "fltk-1.3.4-1/src/Fl_XColor.H"
 2355              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2356              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2357              		.file 9 "/usr/include/libio.h"
 2358              		.file 10 "fltk-1.3.4-1/FL/Fl.H"
 2359              		.file 11 "fltk-1.3.4-1/FL/Fl_Widget.H"
 2360              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 2361              		.file 13 "/usr/include/X11/X.h"
 2362              		.file 14 "/usr/include/X11/Xlib.h"
 2363              		.file 15 "/usr/include/X11/Xutil.h"
 2364              		.file 16 "fltk-1.3.4-1/FL/x.H"
 2365              		.file 17 "/usr/include/stdio.h"
 2366              		.file 18 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_color.cxx
     /tmp/ccHIt22M.s:16     .text._ZN9Fl_Device10class_nameEv:0000000000000000 _ZN9Fl_Device10class_nameEv
     /tmp/ccHIt22M.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD2Ev
     /tmp/ccHIt22M.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD1Ev
     /tmp/ccHIt22M.s:65     .text._ZN23Fl_Xlib_Graphics_Driver10class_nameEv:0000000000000000 _ZN23Fl_Xlib_Graphics_Driver10class_nameEv
     /tmp/ccHIt22M.s:86     .text._ZL17figure_out_visualv:0000000000000000 _ZL17figure_out_visualv
     /tmp/ccHIt22M.s:2294   .bss._ZL8beenhere:0000000000000000 _ZL8beenhere
     /tmp/ccHIt22M.s:2322   .bss.fl_redshift:0000000000000000 fl_redshift
     /tmp/ccHIt22M.s:2340   .bss.fl_redmask:0000000000000000 fl_redmask
     /tmp/ccHIt22M.s:2315   .bss.fl_greenshift:0000000000000000 fl_greenshift
     /tmp/ccHIt22M.s:2334   .bss.fl_greenmask:0000000000000000 fl_greenmask
     /tmp/ccHIt22M.s:2308   .bss.fl_blueshift:0000000000000000 fl_blueshift
     /tmp/ccHIt22M.s:2328   .bss.fl_bluemask:0000000000000000 fl_bluemask
     /tmp/ccHIt22M.s:2301   .bss.fl_extrashift:0000000000000000 fl_extrashift
     /tmp/ccHIt22M.s:390    .text._ZN9Fl_DeviceD0Ev:0000000000000000 _ZN9Fl_DeviceD0Ev
     /tmp/ccHIt22M.s:414    .text._ZN23Fl_Xlib_Graphics_DriverD2Ev:0000000000000000 _ZN23Fl_Xlib_Graphics_DriverD2Ev
     /tmp/ccHIt22M.s:414    .text._ZN23Fl_Xlib_Graphics_DriverD2Ev:0000000000000000 _ZN23Fl_Xlib_Graphics_DriverD1Ev
     /tmp/ccHIt22M.s:453    .text._ZN23Fl_Xlib_Graphics_DriverD0Ev:0000000000000000 _ZN23Fl_Xlib_Graphics_DriverD0Ev
     /tmp/ccHIt22M.s:500    .text._ZN2Fl10free_colorEji.part.4:0000000000000000 _ZN2Fl10free_colorEji.part.4
     /tmp/ccHIt22M.s:2028   .bss.fl_xmap:0000000000000000 fl_xmap
     /tmp/ccHIt22M.s:593    .text._Z9fl_xpixelj:0000000000000000 _Z9fl_xpixelj
     /tmp/ccHIt22M.s:2034   .data._ZL7fl_cmap:0000000000000000 _ZL7fl_cmap
     /tmp/ccHIt22M.s:1937   .bss._ZZ9fl_xpixeljE9numcolors:0000000000000000 _ZZ9fl_xpixeljE9numcolors
     /tmp/ccHIt22M.s:1931   .bss._ZZ9fl_xpixeljE9allcolors:0000000000000000 _ZZ9fl_xpixeljE9allcolors
     /tmp/ccHIt22M.s:1195   .text._Z9fl_xpixelhhh:0000000000000000 _Z9fl_xpixelhhh
     /tmp/ccHIt22M.s:1109   .text._ZN23Fl_Xlib_Graphics_Driver5colorEj:0000000000000000 _ZN23Fl_Xlib_Graphics_Driver5colorEj
     /tmp/ccHIt22M.s:1357   .text._ZN23Fl_Xlib_Graphics_Driver5colorEhhh:0000000000000000 _ZN23Fl_Xlib_Graphics_Driver5colorEhhh
     /tmp/ccHIt22M.s:1437   .text._ZN2Fl10free_colorEji:0000000000000000 _ZN2Fl10free_colorEji
     /tmp/ccHIt22M.s:1467   .text._ZN2Fl9set_colorEjj:0000000000000000 _ZN2Fl9set_colorEjj
     /tmp/ccHIt22M.s:1525   .text._ZN2Fl9get_colorEj:0000000000000000 _ZN2Fl9get_colorEj
     /tmp/ccHIt22M.s:1555   .text._ZN2Fl9set_colorEjhhh:0000000000000000 _ZN2Fl9set_colorEjhhh
     /tmp/ccHIt22M.s:1632   .text._ZN2Fl9get_colorEjRhS0_S0_:0000000000000000 _ZN2Fl9get_colorEjRhS0_S0_
     /tmp/ccHIt22M.s:1675   .text._Z16fl_color_averagejjf:0000000000000000 _Z16fl_color_averagejjf
     /tmp/ccHIt22M.s:1809   .text._Z11fl_inactivej:0000000000000000 _Z11fl_inactivej
     /tmp/ccHIt22M.s:1833   .text._Z11fl_contrastjj:0000000000000000 _Z11fl_contrastjj
     /tmp/ccHIt22M.s:1944   .rodata._ZTS23Fl_Xlib_Graphics_Driver:0000000000000000 _ZTS23Fl_Xlib_Graphics_Driver
     /tmp/ccHIt22M.s:1951   .rodata._ZTI23Fl_Xlib_Graphics_Driver:0000000000000000 _ZTI23Fl_Xlib_Graphics_Driver
     /tmp/ccHIt22M.s:1960   .rodata._ZTV23Fl_Xlib_Graphics_Driver:0000000000000000 _ZTV23Fl_Xlib_Graphics_Driver
     /tmp/ccHIt22M.s:2344   .rodata.cst4:0000000000000000 .LC17
     /tmp/ccHIt22M.s:2347   .rodata.cst4:0000000000000004 .LC19
                           .group:0000000000000000 _ZN9Fl_DeviceD5Ev
                           .group:0000000000000000 _ZN23Fl_Xlib_Graphics_DriverD5Ev
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
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
_ZN9Fl_Device8class_idE
_ZN23Fl_Xlib_Graphics_Driver8class_idE
fl_visual
_ZdlPv
_ZTV18Fl_Graphics_Driver
free
fl_colormap
fl_display
XFreeColors
XAllocColor
XQueryColors
_Znam
__stack_chk_fail
fl_gc
XSetForeground
fl_graphics_driver
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI18Fl_Graphics_Driver
_ZN18Fl_Graphics_Driver4rectEiiii
_ZN18Fl_Graphics_Driver5rectfEiiii
_ZN18Fl_Graphics_Driver10line_styleEiiPc
_ZN18Fl_Graphics_Driver6xylineEiii
_ZN18Fl_Graphics_Driver6xylineEiiii
_ZN18Fl_Graphics_Driver6xylineEiiiii
_ZN18Fl_Graphics_Driver6yxlineEiii
_ZN18Fl_Graphics_Driver6yxlineEiiii
_ZN18Fl_Graphics_Driver6yxlineEiiiii
_ZN18Fl_Graphics_Driver4lineEiiii
_ZN18Fl_Graphics_Driver4lineEiiiiii
_ZN23Fl_Xlib_Graphics_Driver4drawEPKciii
_ZN23Fl_Xlib_Graphics_Driver4drawEiPKciii
_ZN23Fl_Xlib_Graphics_Driver8rtl_drawEPKciii
_ZN18Fl_Graphics_Driver5pointEii
_ZN18Fl_Graphics_Driver4loopEiiiiii
_ZN18Fl_Graphics_Driver4loopEiiiiiiii
_ZN18Fl_Graphics_Driver7polygonEiiiiii
_ZN18Fl_Graphics_Driver7polygonEiiiiiiii
_ZN18Fl_Graphics_Driver12begin_pointsEv
_ZN18Fl_Graphics_Driver10begin_lineEv
_ZN18Fl_Graphics_Driver10begin_loopEv
_ZN18Fl_Graphics_Driver13begin_polygonEv
_ZN18Fl_Graphics_Driver6vertexEdd
_ZN18Fl_Graphics_Driver5curveEdddddddd
_ZN18Fl_Graphics_Driver6circleEddd
_ZN18Fl_Graphics_Driver3arcEddddd
_ZN18Fl_Graphics_Driver3arcEiiiidd
_ZN18Fl_Graphics_Driver3pieEiiiidd
_ZN18Fl_Graphics_Driver10end_pointsEv
_ZN18Fl_Graphics_Driver8end_lineEv
_ZN18Fl_Graphics_Driver8end_loopEv
_ZN18Fl_Graphics_Driver11end_polygonEv
_ZN18Fl_Graphics_Driver21begin_complex_polygonEv
_ZN18Fl_Graphics_Driver3gapEv
_ZN18Fl_Graphics_Driver19end_complex_polygonEv
_ZN18Fl_Graphics_Driver18transformed_vertexEdd
_ZN18Fl_Graphics_Driver9push_clipEiiii
_ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_
_ZN18Fl_Graphics_Driver11not_clippedEiiii
_ZN18Fl_Graphics_Driver12push_no_clipEv
_ZN18Fl_Graphics_Driver8pop_clipEv
_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii
_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii
_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
_ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
_ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
_ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
_ZN23Fl_Xlib_Graphics_Driver4fontEii
_ZN23Fl_Xlib_Graphics_Driver5widthEPKci
_ZN23Fl_Xlib_Graphics_Driver5widthEj
_ZN23Fl_Xlib_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_
_ZN23Fl_Xlib_Graphics_Driver6heightEv
_ZN23Fl_Xlib_Graphics_Driver7descentEv
