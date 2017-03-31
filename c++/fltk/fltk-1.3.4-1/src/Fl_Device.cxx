   1              		.file	"Fl_Device.cxx"
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
  56              		.section	.text.unlikely._ZN17Fl_Surface_Device10class_nameEv,"axG",@progbits,_ZN17Fl_Surface_Devic
  57              		.align 2
  58              	.LCOLDB2:
  59              		.section	.text._ZN17Fl_Surface_Device10class_nameEv,"axG",@progbits,_ZN17Fl_Surface_Device10class_
  60              	.LHOTB2:
  61              		.align 2
  62              		.p2align 4,,15
  63              		.weak	_ZN17Fl_Surface_Device10class_nameEv
  65              	_ZN17Fl_Surface_Device10class_nameEv:
  66              	.LFB380:
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
 511:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(Fl_Color c);
 512:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(uchar r, uchar g, uchar b);
 513:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char* str, int n, int x, int y);
 514:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(int angle, const char *str, int n, int x, int y);
 515:fltk-1.3.4-1/FL/Fl_Device.H ****   void rtl_draw(const char* str, int n, int x, int y);
 516:fltk-1.3.4-1/FL/Fl_Device.H ****   void font(Fl_Font face, Fl_Fontsize size);
 517:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 518:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 519:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_RGB_Image *img, int XP, int YP, int WP, int HP, int cx, int cy);
 520:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0);
 521:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3);
 522:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0);
 523:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1);
 524:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(const char *str, int n);
 525:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(unsigned int c);
 526:fltk-1.3.4-1/FL/Fl_Device.H ****   void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 527:fltk-1.3.4-1/FL/Fl_Device.H ****   int height();
 528:fltk-1.3.4-1/FL/Fl_Device.H ****   int descent();
 529:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 530:fltk-1.3.4-1/FL/Fl_Device.H **** #if ! defined(FL_DOXYGEN)
 531:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen_with_alpha(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int src
 532:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 533:fltk-1.3.4-1/FL/Fl_Device.H **** };
 534:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 535:fltk-1.3.4-1/FL/Fl_Device.H **** 
 536:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 537:fltk-1.3.4-1/FL/Fl_Device.H ****  A drawing surface that's susceptible to receive graphical output.
 538:fltk-1.3.4-1/FL/Fl_Device.H ****  Any FLTK application has at any time a current drawing surface to which all drawing requests are d
 539:fltk-1.3.4-1/FL/Fl_Device.H ****  The current surface is given by Fl_Surface_Device::surface().
 540:fltk-1.3.4-1/FL/Fl_Device.H ****  When main() begins running, the current drawing surface has been set to the computer's display, 
 541:fltk-1.3.4-1/FL/Fl_Device.H ****  an instance of the Fl_Display_Device class.
 542:fltk-1.3.4-1/FL/Fl_Device.H **** 
 543:fltk-1.3.4-1/FL/Fl_Device.H ****  A drawing surface other than the computer's display, is typically used as follows:
 544:fltk-1.3.4-1/FL/Fl_Device.H ****  <ol><li> Create \c surface, an object from a particular Fl_Surface_Device derived class (e.g., Fl_
 545:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> Memorize what is the current drawing surface with <tt> Fl_Surface_Device *old_current = Fl_Su
 546:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> Call \c surface->set_current(); to redirect all graphics requests to \c surface which becomes
 547:fltk-1.3.4-1/FL/Fl_Device.H ****  current drawing surface (not necessary with class Fl_Printer because it is done by Fl_Printer::sta
 548:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> At this point any of the \ref fl_drawings (e.g., fl_rect()) or the \ref fl_attributes or \ref
 549:fltk-1.3.4-1/FL/Fl_Device.H ****  (e.g., fl_draw_image(), Fl_Image::draw()) operates on the new current drawing surface.
 550:fltk-1.3.4-1/FL/Fl_Device.H ****  Certain drawing surfaces allow additional ways to draw to them (e.g., Fl_Printer::print_widget(), 
 551:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> After all drawing requests have been performed, redirect graphics requests back to their prev
 552:fltk-1.3.4-1/FL/Fl_Device.H ****  with \c old_current->set_current();.
 553:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> Delete \c surface.
 554:fltk-1.3.4-1/FL/Fl_Device.H ****  </ol>
 555:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 556:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Surface_Device : public Fl_Device {
 557:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The graphics driver in use by this surface. */
 558:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Graphics_Driver *_driver;
 559:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Surface_Device *_surface; // the surface that currently receives graphics output
 560:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Surface_Device *default_surface(); // create surface is none exists yet
 561:fltk-1.3.4-1/FL/Fl_Device.H **** protected:
 562:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Constructor that sets the graphics driver to use for the created surface. */
 563:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Surface_Device(Fl_Graphics_Driver *graphics_driver) {_driver = graphics_driver; };
 564:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 565:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 566:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
  67              		.loc 1 566 0
  68              		.cfi_startproc
  69              	.LVL2:
  70              		.loc 1 566 0
  71 0000 488B0500 		movq	_ZN17Fl_Surface_Device8class_idE(%rip), %rax
  71      000000
  72 0007 C3       		ret
  73              		.cfi_endproc
  74              	.LFE380:
  76              		.section	.text.unlikely._ZN17Fl_Surface_Device10class_nameEv,"axG",@progbits,_ZN17Fl_Surface_Devic
  77              	.LCOLDE2:
  78              		.section	.text._ZN17Fl_Surface_Device10class_nameEv,"axG",@progbits,_ZN17Fl_Surface_Device10class_
  79              	.LHOTE2:
  80              		.section	.text.unlikely._ZN17Fl_Surface_DeviceD2Ev,"axG",@progbits,_ZN17Fl_Surface_DeviceD5Ev,comd
  81              		.align 2
  82              	.LCOLDB3:
  83              		.section	.text._ZN17Fl_Surface_DeviceD2Ev,"axG",@progbits,_ZN17Fl_Surface_DeviceD5Ev,comdat
  84              	.LHOTB3:
  85              		.align 2
  86              		.p2align 4,,15
  87              		.weak	_ZN17Fl_Surface_DeviceD2Ev
  89              	_ZN17Fl_Surface_DeviceD2Ev:
  90              	.LFB385:
 567:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void set_current(void);
 568:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Sets the graphics driver of this drawing surface. */
 569:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void driver(Fl_Graphics_Driver *graphics_driver) {_driver = graphics_driver;};
 570:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Returns the graphics driver of this drawing surface. */
 571:fltk-1.3.4-1/FL/Fl_Device.H ****   inline Fl_Graphics_Driver *driver() {return _driver; };
 572:fltk-1.3.4-1/FL/Fl_Device.H ****   /** The current drawing surface.
 573:fltk-1.3.4-1/FL/Fl_Device.H ****    In other words, the Fl_Surface_Device object that currently receives all graphics output */
 574:fltk-1.3.4-1/FL/Fl_Device.H ****   static inline Fl_Surface_Device *surface() {
 575:fltk-1.3.4-1/FL/Fl_Device.H ****     return _surface ? _surface : default_surface();
 576:fltk-1.3.4-1/FL/Fl_Device.H ****   };
 577:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The destructor. */
 578:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Surface_Device() {}
  91              		.loc 1 578 0
  92              		.cfi_startproc
  93              	.LVL3:
  94 0000 F3C3     		rep ret
  95              		.cfi_endproc
  96              	.LFE385:
  98              		.section	.text.unlikely._ZN17Fl_Surface_DeviceD2Ev,"axG",@progbits,_ZN17Fl_Surface_DeviceD5Ev,comd
  99              	.LCOLDE3:
 100              		.section	.text._ZN17Fl_Surface_DeviceD2Ev,"axG",@progbits,_ZN17Fl_Surface_DeviceD5Ev,comdat
 101              	.LHOTE3:
 102              		.weak	_ZN17Fl_Surface_DeviceD1Ev
 103              		.set	_ZN17Fl_Surface_DeviceD1Ev,_ZN17Fl_Surface_DeviceD2Ev
 104              		.section	.text.unlikely._ZN17Fl_Display_Device10class_nameEv,"axG",@progbits,_ZN17Fl_Display_Devic
 105              		.align 2
 106              	.LCOLDB4:
 107              		.section	.text._ZN17Fl_Display_Device10class_nameEv,"axG",@progbits,_ZN17Fl_Display_Device10class_
 108              	.LHOTB4:
 109              		.align 2
 110              		.p2align 4,,15
 111              		.weak	_ZN17Fl_Display_Device10class_nameEv
 113              	_ZN17Fl_Display_Device10class_nameEv:
 114              	.LFB388:
 579:fltk-1.3.4-1/FL/Fl_Device.H **** };
 580:fltk-1.3.4-1/FL/Fl_Device.H **** 
 581:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 582:fltk-1.3.4-1/FL/Fl_Device.H ****  A display to which the computer can draw.
 583:fltk-1.3.4-1/FL/Fl_Device.H ****  When the program begins running, an Fl_Display_Device instance has been created and made the curre
 584:fltk-1.3.4-1/FL/Fl_Device.H ****  There is no need to create any other object of this class.
 585:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 586:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Display_Device : public Fl_Surface_Device {
 587:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Display_Device *_display; // the platform display device
 588:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 589:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_X;
 590:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Graphics_Driver;
 591:fltk-1.3.4-1/FL/Fl_Device.H ****   static bool high_res_window_; //< true when drawing to a window of a retina display (Mac OS X onl
 592:fltk-1.3.4-1/FL/Fl_Device.H ****   static bool high_resolution() {return high_res_window_;}
 593:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 594:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 595:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 596:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 115              		.loc 1 596 0
 116              		.cfi_startproc
 117              	.LVL4:
 118              		.loc 1 596 0
 119 0000 488B0500 		movq	_ZN17Fl_Display_Device8class_idE(%rip), %rax
 119      000000
 120 0007 C3       		ret
 121              		.cfi_endproc
 122              	.LFE388:
 124              		.section	.text.unlikely._ZN17Fl_Display_Device10class_nameEv,"axG",@progbits,_ZN17Fl_Display_Devic
 125              	.LCOLDE4:
 126              		.section	.text._ZN17Fl_Display_Device10class_nameEv,"axG",@progbits,_ZN17Fl_Display_Device10class_
 127              	.LHOTE4:
 128              		.section	.text.unlikely._ZN17Fl_Surface_Device11set_currentEv,"ax",@progbits
 129              		.align 2
 130              	.LCOLDB5:
 131              		.section	.text._ZN17Fl_Surface_Device11set_currentEv,"ax",@progbits
 132              	.LHOTB5:
 133              		.align 2
 134              		.p2align 4,,15
 135              		.globl	_ZN17Fl_Surface_Device11set_currentEv
 137              	_ZN17Fl_Surface_Device11set_currentEv:
 138              	.LFB394:
 139              		.file 2 "fltk-1.3.4-1/src/Fl_Device.cxx"
   1:fltk-1.3.4-1/src/Fl_Device.cxx ****    1              		.file	"Fl_Device.cxx"
   2:fltk-1.3.4-1/src/Fl_Device.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Device.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Device.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
   5:fltk-1.3.4-1/src/Fl_Device.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Device.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Device.cxx ****    7              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
   8:fltk-1.3.4-1/src/Fl_Device.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Device.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Device.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Device.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
  12:fltk-1.3.4-1/src/Fl_Device.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Device.cxx ****   13              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
  14:fltk-1.3.4-1/src/Fl_Device.cxx ****   14              		.weak	_ZN9Fl_Device10class_nameEv
  15:fltk-1.3.4-1/src/Fl_Device.cxx ****   16              	_ZN9Fl_Device10class_nameEv:
  16:fltk-1.3.4-1/src/Fl_Device.cxx ****   17              	.LFB335:
  17:fltk-1.3.4-1/src/Fl_Device.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Device.H"
  18:fltk-1.3.4-1/src/Fl_Device.cxx ****    1:fltk-1.3.4-1/FL/Fl_Device.H **** //
  19:fltk-1.3.4-1/src/Fl_Device.cxx ****    2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
  20:fltk-1.3.4-1/src/Fl_Device.cxx ****    3:fltk-1.3.4-1/FL/Fl_Device.H **** //
  21:fltk-1.3.4-1/src/Fl_Device.cxx ****    4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Su
  22:fltk-1.3.4-1/src/Fl_Device.cxx ****    5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
  23:fltk-1.3.4-1/src/Fl_Device.cxx ****    6:fltk-1.3.4-1/FL/Fl_Device.H **** //
  24:fltk-1.3.4-1/src/Fl_Device.cxx ****    7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
  25:fltk-1.3.4-1/src/Fl_Device.cxx ****    8:fltk-1.3.4-1/FL/Fl_Device.H **** //
  26:fltk-1.3.4-1/src/Fl_Device.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights
  27:fltk-1.3.4-1/src/Fl_Device.cxx ****   10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with th
  28:fltk-1.3.4-1/src/Fl_Device.cxx ****   11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  29:fltk-1.3.4-1/src/Fl_Device.cxx ****   12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  30:fltk-1.3.4-1/src/Fl_Device.cxx ****   13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  31:fltk-1.3.4-1/src/Fl_Device.cxx ****   14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  32:fltk-1.3.4-1/src/Fl_Device.cxx ****   15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  33:fltk-1.3.4-1/src/Fl_Device.cxx ****   16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  34:fltk-1.3.4-1/src/Fl_Device.cxx ****   17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  35:fltk-1.3.4-1/src/Fl_Device.cxx ****   18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  36:fltk-1.3.4-1/src/Fl_Device.cxx ****   19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  37:fltk-1.3.4-1/src/Fl_Device.cxx ****   20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  38:fltk-1.3.4-1/src/Fl_Device.cxx ****   21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver,
  39:fltk-1.3.4-1/src/Fl_Device.cxx ****   22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  40:fltk-1.3.4-1/src/Fl_Device.cxx ****   23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  41:fltk-1.3.4-1/src/Fl_Device.cxx ****   24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  42:fltk-1.3.4-1/src/Fl_Device.cxx ****   25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  43:fltk-1.3.4-1/src/Fl_Device.cxx ****   26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  44:fltk-1.3.4-1/src/Fl_Device.cxx ****   27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  45:fltk-1.3.4-1/src/Fl_Device.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
 140              		.loc 2 45 0
 141              		.cfi_startproc
 142              	.LVL5:
  46:fltk-1.3.4-1/src/Fl_Device.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
 143              		.loc 2 46 0
 144 0000 488B4708 		movq	8(%rdi), %rax
  47:fltk-1.3.4-1/src/Fl_Device.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
 145              		.loc 2 47 0
 146 0004 48893D00 		movq	%rdi, _ZN17Fl_Surface_Device8_surfaceE(%rip)
 146      000000
  46:fltk-1.3.4-1/src/Fl_Device.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
 147              		.loc 2 46 0
 148 000b 48890500 		movq	%rax, fl_graphics_driver(%rip)
 148      000000
 149              		.loc 2 47 0
 150 0012 C3       		ret
 151              		.cfi_endproc
 152              	.LFE394:
 154              		.section	.text.unlikely._ZN17Fl_Surface_Device11set_currentEv
 155              	.LCOLDE5:
 156              		.section	.text._ZN17Fl_Surface_Device11set_currentEv
 157              	.LHOTE5:
 158              		.section	.text.unlikely._ZN17Fl_Display_DeviceD2Ev,"axG",@progbits,_ZN17Fl_Display_DeviceD5Ev,comd
 159              		.align 2
 160              	.LCOLDB6:
 161              		.section	.text._ZN17Fl_Display_DeviceD2Ev,"axG",@progbits,_ZN17Fl_Display_DeviceD5Ev,comdat
 162              	.LHOTB6:
 163              		.align 2
 164              		.p2align 4,,15
 165              		.weak	_ZN17Fl_Display_DeviceD2Ev
 167              	_ZN17Fl_Display_DeviceD2Ev:
 168              	.LFB408:
 586:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Display_Device *_display; // the platform display device
 169              		.loc 1 586 0
 170              		.cfi_startproc
 171              	.LVL6:
 172 0000 F3C3     		rep ret
 173              		.cfi_endproc
 174              	.LFE408:
 176              		.section	.text.unlikely._ZN17Fl_Display_DeviceD2Ev,"axG",@progbits,_ZN17Fl_Display_DeviceD5Ev,comd
 177              	.LCOLDE6:
 178              		.section	.text._ZN17Fl_Display_DeviceD2Ev,"axG",@progbits,_ZN17Fl_Display_DeviceD5Ev,comdat
 179              	.LHOTE6:
 180              		.weak	_ZN17Fl_Display_DeviceD1Ev
 181              		.set	_ZN17Fl_Display_DeviceD1Ev,_ZN17Fl_Display_DeviceD2Ev
 182              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 183              		.align 2
 184              	.LCOLDB7:
 185              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 186              	.LHOTB7:
 187              		.align 2
 188              		.p2align 4,,15
 189              		.weak	_ZN9Fl_DeviceD0Ev
 191              	_ZN9Fl_DeviceD0Ev:
 192              	.LFB339:
  91:fltk-1.3.4-1/FL/Fl_Device.H **** };
 193              		.loc 1 91 0
 194              		.cfi_startproc
 195              	.LVL7:
  91:fltk-1.3.4-1/FL/Fl_Device.H **** };
 196              		.loc 1 91 0
 197 0000 E9000000 		jmp	_ZdlPv
 197      00
 198              	.LVL8:
 199              		.cfi_endproc
 200              	.LFE339:
 202              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 203              	.LCOLDE7:
 204              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 205              	.LHOTE7:
 206              		.section	.text.unlikely._ZN17Fl_Display_DeviceD0Ev,"axG",@progbits,_ZN17Fl_Display_DeviceD5Ev,comd
 207              		.align 2
 208              	.LCOLDB8:
 209              		.section	.text._ZN17Fl_Display_DeviceD0Ev,"axG",@progbits,_ZN17Fl_Display_DeviceD5Ev,comdat
 210              	.LHOTB8:
 211              		.align 2
 212              		.p2align 4,,15
 213              		.weak	_ZN17Fl_Display_DeviceD0Ev
 215              	_ZN17Fl_Display_DeviceD0Ev:
 216              	.LFB410:
 586:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Display_Device *_display; // the platform display device
 217              		.loc 1 586 0
 218              		.cfi_startproc
 219              	.LVL9:
 586:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Display_Device *_display; // the platform display device
 220              		.loc 1 586 0
 221 0000 E9000000 		jmp	_ZdlPv
 221      00
 222              	.LVL10:
 223              		.cfi_endproc
 224              	.LFE410:
 226              		.section	.text.unlikely._ZN17Fl_Display_DeviceD0Ev,"axG",@progbits,_ZN17Fl_Display_DeviceD5Ev,comd
 227              	.LCOLDE8:
 228              		.section	.text._ZN17Fl_Display_DeviceD0Ev,"axG",@progbits,_ZN17Fl_Display_DeviceD5Ev,comdat
 229              	.LHOTE8:
 230              		.section	.text.unlikely._ZN17Fl_Surface_DeviceD0Ev,"axG",@progbits,_ZN17Fl_Surface_DeviceD5Ev,comd
 231              		.align 2
 232              	.LCOLDB9:
 233              		.section	.text._ZN17Fl_Surface_DeviceD0Ev,"axG",@progbits,_ZN17Fl_Surface_DeviceD5Ev,comdat
 234              	.LHOTB9:
 235              		.align 2
 236              		.p2align 4,,15
 237              		.weak	_ZN17Fl_Surface_DeviceD0Ev
 239              	_ZN17Fl_Surface_DeviceD0Ev:
 240              	.LFB387:
 578:fltk-1.3.4-1/FL/Fl_Device.H **** };
 241              		.loc 1 578 0
 242              		.cfi_startproc
 243              	.LVL11:
 578:fltk-1.3.4-1/FL/Fl_Device.H **** };
 244              		.loc 1 578 0
 245 0000 E9000000 		jmp	_ZdlPv
 245      00
 246              	.LVL12:
 247              		.cfi_endproc
 248              	.LFE387:
 250              		.section	.text.unlikely._ZN17Fl_Surface_DeviceD0Ev,"axG",@progbits,_ZN17Fl_Surface_DeviceD5Ev,comd
 251              	.LCOLDE9:
 252              		.section	.text._ZN17Fl_Surface_DeviceD0Ev,"axG",@progbits,_ZN17Fl_Surface_DeviceD5Ev,comdat
 253              	.LHOTE9:
 254              		.section	.text.unlikely._ZN18Fl_Graphics_DriverC2Ev,"ax",@progbits
 255              		.align 2
 256              	.LCOLDB12:
 257              		.section	.text._ZN18Fl_Graphics_DriverC2Ev,"ax",@progbits
 258              	.LHOTB12:
 259              		.align 2
 260              		.p2align 4,,15
 261              		.globl	_ZN18Fl_Graphics_DriverC2Ev
 263              	_ZN18Fl_Graphics_DriverC2Ev:
 264              	.LFB396:
  48:fltk-1.3.4-1/src/Fl_Device.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  49:fltk-1.3.4-1/src/Fl_Device.cxx ****   32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  50:fltk-1.3.4-1/src/Fl_Device.cxx ****   33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  51:fltk-1.3.4-1/src/Fl_Device.cxx ****   34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  52:fltk-1.3.4-1/src/Fl_Device.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  53:fltk-1.3.4-1/src/Fl_Device.cxx ****   36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  54:fltk-1.3.4-1/src/Fl_Device.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  55:fltk-1.3.4-1/src/Fl_Device.cxx ****   38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all g
 265              		.loc 2 55 0
 266              		.cfi_startproc
 267              	.LVL13:
 268              	.LBB78:
  56:fltk-1.3.4-1/src/Fl_Device.cxx ****   39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  57:fltk-1.3.4-1/src/Fl_Device.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  58:fltk-1.3.4-1/src/Fl_Device.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  59:fltk-1.3.4-1/src/Fl_Device.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  60:fltk-1.3.4-1/src/Fl_Device.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  61:fltk-1.3.4-1/src/Fl_Device.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
 269              		.loc 2 61 0
 270 0000 660FEFC0 		pxor	%xmm0, %xmm0
  62:fltk-1.3.4-1/src/Fl_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 271              		.loc 2 62 0
 272 0004 488D8718 		leaq	1560(%rdi), %rax
 272      060000
  61:fltk-1.3.4-1/src/Fl_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 273              		.loc 2 61 0
 274 000b F20F100D 		movsd	.LC10(%rip), %xmm1
 274      00000000 
  55:fltk-1.3.4-1/src/Fl_Device.cxx ****   39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
 275              		.loc 2 55 0
 276 0013 48C70700 		movq	$_ZTV18Fl_Graphics_Driver+16, (%rdi)
 276      000000
  56:fltk-1.3.4-1/src/Fl_Device.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
 277              		.loc 2 56 0
 278 001a C7470800 		movl	$0, 8(%rdi)
 278      000000
  57:fltk-1.3.4-1/src/Fl_Device.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 279              		.loc 2 57 0
 280 0021 C7470C00 		movl	$0, 12(%rdi)
 280      000000
  58:fltk-1.3.4-1/src/Fl_Device.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
 281              		.loc 2 58 0
 282 0028 C7471400 		movl	$0, 20(%rdi)
 282      000000
 283 002f C7876806 		movl	$0, 1640(%rdi)
 283      00000000 
 283      0000
  61:fltk-1.3.4-1/src/Fl_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 284              		.loc 2 61 0
 285 0039 F20F118F 		movsd	%xmm1, 1560(%rdi)
 285      18060000 
  59:fltk-1.3.4-1/src/Fl_Device.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
 286              		.loc 2 59 0
 287 0041 48C78770 		movq	$0, 1648(%rdi)
 287      06000000 
 287      000000
  60:fltk-1.3.4-1/src/Fl_Device.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
 288              		.loc 2 60 0
 289 004c C7876406 		movl	$0, 1636(%rdi)
 289      00000000 
 289      0000
  61:fltk-1.3.4-1/src/Fl_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 290              		.loc 2 61 0
 291 0056 F20F1187 		movsd	%xmm0, 1568(%rdi)
 291      20060000 
 292 005e F20F1187 		movsd	%xmm0, 1576(%rdi)
 292      28060000 
 293              		.loc 2 62 0
 294 0066 488987C8 		movq	%rax, 1736(%rdi)
 294      060000
  61:fltk-1.3.4-1/src/Fl_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 295              		.loc 2 61 0
 296 006d F20F118F 		movsd	%xmm1, 1584(%rdi)
 296      30060000 
  63:fltk-1.3.4-1/src/Fl_Device.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
 297              		.loc 2 63 0
 298 0075 48C78758 		movq	$0, 1624(%rdi)
 298      06000000 
 298      000000
  61:fltk-1.3.4-1/src/Fl_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 299              		.loc 2 61 0
 300 0080 F20F1187 		movsd	%xmm0, 1592(%rdi)
 300      38060000 
  64:fltk-1.3.4-1/src/Fl_Device.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
 301              		.loc 2 64 0
 302 0088 48C787C0 		movq	$0, 1728(%rdi)
 302      06000000 
 302      000000
  61:fltk-1.3.4-1/src/Fl_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 303              		.loc 2 61 0
 304 0093 F20F1187 		movsd	%xmm0, 1600(%rdi)
 304      40060000 
  65:fltk-1.3.4-1/src/Fl_Device.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 305              		.loc 2 65 0
 306 009b C7874C06 		movl	$0, 1612(%rdi)
 306      00000000 
 306      0000
 307 00a5 C3       		ret
 308              	.LBE78:
 309              		.cfi_endproc
 310              	.LFE396:
 312              		.section	.text.unlikely._ZN18Fl_Graphics_DriverC2Ev
 313              	.LCOLDE12:
 314              		.section	.text._ZN18Fl_Graphics_DriverC2Ev
 315              	.LHOTE12:
 316              		.globl	_ZN18Fl_Graphics_DriverC1Ev
 317              		.set	_ZN18Fl_Graphics_DriverC1Ev,_ZN18Fl_Graphics_DriverC2Ev
 318              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_,"ax",@progbits
 319              		.align 2
 320              	.LCOLDB13:
 321              		.section	.text._ZN18Fl_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_,"ax",@progbits
 322              	.LHOTB13:
 323              		.align 2
 324              		.p2align 4,,15
 325              		.globl	_ZN18Fl_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_
 327              	_ZN18Fl_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_:
 328              	.LFB398:
  66:fltk-1.3.4-1/src/Fl_Device.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w
  67:fltk-1.3.4-1/src/Fl_Device.cxx ****   50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  68:fltk-1.3.4-1/src/Fl_Device.cxx ****   51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  69:fltk-1.3.4-1/src/Fl_Device.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 329              		.loc 2 69 0
 330              		.cfi_startproc
 331              	.LVL14:
 332 0000 4155     		pushq	%r13
 333              		.cfi_def_cfa_offset 16
 334              		.cfi_offset 13, -16
 335 0002 4154     		pushq	%r12
 336              		.cfi_def_cfa_offset 24
 337              		.cfi_offset 12, -24
 338 0004 4D89CD   		movq	%r9, %r13
 339 0007 55       		pushq	%rbp
 340              		.cfi_def_cfa_offset 32
 341              		.cfi_offset 6, -32
 342 0008 53       		pushq	%rbx
 343              		.cfi_def_cfa_offset 40
 344              		.cfi_offset 3, -40
 345 0009 4989CC   		movq	%rcx, %r12
 346 000c 4889FB   		movq	%rdi, %rbx
 347 000f 4C89C5   		movq	%r8, %rbp
 348 0012 4883EC08 		subq	$8, %rsp
 349              		.cfi_def_cfa_offset 48
  70:fltk-1.3.4-1/src/Fl_Device.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
 350              		.loc 2 70 0
 351 0016 488B07   		movq	(%rdi), %rax
 352 0019 FF90B801 		call	*440(%rax)
 352      0000
 353              	.LVL15:
 354 001f F20F2CC0 		cvttsd2si	%xmm0, %eax
  71:fltk-1.3.4-1/src/Fl_Device.cxx ****   54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
 355              		.loc 2 71 0
 356 0023 4889DF   		movq	%rbx, %rdi
  70:fltk-1.3.4-1/src/Fl_Device.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
 357              		.loc 2 70 0
 358 0026 41894500 		movl	%eax, 0(%r13)
 359              		.loc 2 71 0
 360 002a 488B03   		movq	(%rbx), %rax
 361 002d FF90D001 		call	*464(%rax)
 361      0000
 362              	.LVL16:
 363 0033 488B5424 		movq	48(%rsp), %rdx
 363      30
 364 0038 F7D8     		negl	%eax
  72:fltk-1.3.4-1/src/Fl_Device.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  73:fltk-1.3.4-1/src/Fl_Device.cxx ****   56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
 365              		.loc 2 73 0
 366 003a 4889DF   		movq	%rbx, %rdi
  71:fltk-1.3.4-1/src/Fl_Device.cxx ****   54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
 367              		.loc 2 71 0
 368 003d 8902     		movl	%eax, (%rdx)
  72:fltk-1.3.4-1/src/Fl_Device.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
 369              		.loc 2 72 0
 370 003f 41C70424 		movl	$0, (%r12)
 370      00000000 
 371              		.loc 2 73 0
 372 0047 488B03   		movq	(%rbx), %rax
 373 004a FF90D801 		call	*472(%rax)
 373      0000
 374              	.LVL17:
 375 0050 894500   		movl	%eax, 0(%rbp)
  74:fltk-1.3.4-1/src/Fl_Device.cxx ****   57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
 376              		.loc 2 74 0
 377 0053 4883C408 		addq	$8, %rsp
 378              		.cfi_def_cfa_offset 40
 379 0057 5B       		popq	%rbx
 380              		.cfi_def_cfa_offset 32
 381              	.LVL18:
 382 0058 5D       		popq	%rbp
 383              		.cfi_def_cfa_offset 24
 384              	.LVL19:
 385 0059 415C     		popq	%r12
 386              		.cfi_def_cfa_offset 16
 387              	.LVL20:
 388 005b 415D     		popq	%r13
 389              		.cfi_def_cfa_offset 8
 390              	.LVL21:
 391 005d C3       		ret
 392              		.cfi_endproc
 393              	.LFE398:
 395              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_
 396              	.LCOLDE13:
 397              		.section	.text._ZN18Fl_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_
 398              	.LHOTE13:
 399              		.section	.text.unlikely._ZN17Fl_Display_DeviceC2EP18Fl_Graphics_Driver,"ax",@progbits
 400              		.align 2
 401              	.LCOLDB14:
 402              		.section	.text._ZN17Fl_Display_DeviceC2EP18Fl_Graphics_Driver,"ax",@progbits
 403              	.LHOTB14:
 404              		.align 2
 405              		.p2align 4,,15
 406              		.globl	_ZN17Fl_Display_DeviceC2EP18Fl_Graphics_Driver
 408              	_ZN17Fl_Display_DeviceC2EP18Fl_Graphics_Driver:
 409              	.LFB400:
  75:fltk-1.3.4-1/src/Fl_Device.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
  76:fltk-1.3.4-1/src/Fl_Device.cxx ****   59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
  77:fltk-1.3.4-1/src/Fl_Device.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
 410              		.loc 2 77 0
 411              		.cfi_startproc
 412              	.LVL22:
 413              	.LBB79:
 414              		.loc 2 77 0
 415 0000 48C70700 		movq	$_ZTV17Fl_Display_Device+16, (%rdi)
 415      000000
 416              	.LBB80:
 417              	.LBB81:
 563:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 418              		.loc 1 563 0
 419 0007 48897708 		movq	%rsi, 8(%rdi)
 420              	.LVL23:
 421              	.LBE81:
 422              	.LBE80:
 423              	.LBB82:
 424              	.LBB83:
  46:fltk-1.3.4-1/src/Fl_Device.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
 425              		.loc 2 46 0
 426 000b 48893500 		movq	%rsi, fl_graphics_driver(%rip)
 426      000000
  47:fltk-1.3.4-1/src/Fl_Device.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
 427              		.loc 2 47 0
 428 0012 48893D00 		movq	%rdi, _ZN17Fl_Surface_Device8_surfaceE(%rip)
 428      000000
 429              	.LVL24:
 430 0019 C3       		ret
 431              	.LBE83:
 432              	.LBE82:
 433              	.LBE79:
 434              		.cfi_endproc
 435              	.LFE400:
 437              		.section	.text.unlikely._ZN17Fl_Display_DeviceC2EP18Fl_Graphics_Driver
 438              	.LCOLDE14:
 439              		.section	.text._ZN17Fl_Display_DeviceC2EP18Fl_Graphics_Driver
 440              	.LHOTE14:
 441              		.globl	_ZN17Fl_Display_DeviceC1EP18Fl_Graphics_Driver
 442              		.set	_ZN17Fl_Display_DeviceC1EP18Fl_Graphics_Driver,_ZN17Fl_Display_DeviceC2EP18Fl_Graphics_Driver
 443              		.section	.text.unlikely._ZN17Fl_Display_Device14display_deviceEv,"ax",@progbits
 444              		.align 2
 445              	.LCOLDB15:
 446              		.section	.text._ZN17Fl_Display_Device14display_deviceEv,"ax",@progbits
 447              	.LHOTB15:
 448              		.align 2
 449              		.p2align 4,,15
 450              		.globl	_ZN17Fl_Display_Device14display_deviceEv
 452              	_ZN17Fl_Display_Device14display_deviceEv:
 453              	.LFB402:
  78:fltk-1.3.4-1/src/Fl_Device.cxx ****   61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
  79:fltk-1.3.4-1/src/Fl_Device.cxx ****   62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  80:fltk-1.3.4-1/src/Fl_Device.cxx ****   63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
  81:fltk-1.3.4-1/src/Fl_Device.cxx ****   64:fltk-1.3.4-1/FL/Fl_Device.H **** 
  82:fltk-1.3.4-1/src/Fl_Device.cxx ****   65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  83:fltk-1.3.4-1/src/Fl_Device.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
 454              		.loc 2 83 0
 455              		.cfi_startproc
  84:fltk-1.3.4-1/src/Fl_Device.cxx ****   67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type in
  85:fltk-1.3.4-1/src/Fl_Device.cxx ****   68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  86:fltk-1.3.4-1/src/Fl_Device.cxx ****   69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
  87:fltk-1.3.4-1/src/Fl_Device.cxx ****   70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  88:fltk-1.3.4-1/src/Fl_Device.cxx ****   71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  89:fltk-1.3.4-1/src/Fl_Device.cxx ****   72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class 
  90:fltk-1.3.4-1/src/Fl_Device.cxx ****   73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/src/Fl_Device.cxx ****   74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
  92:fltk-1.3.4-1/src/Fl_Device.cxx ****   75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 456              		.loc 2 92 0
 457 0000 803D0000 		cmpb	$0, _ZGVZN17Fl_Display_Device14display_deviceEvE7display(%rip)
 457      000000
 458 0007 740F     		je	.L16
 459 0009 488B0500 		movq	_ZZN17Fl_Display_Device14display_deviceEvE7display(%rip), %rax
 459      000000
  93:fltk-1.3.4-1/src/Fl_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
  94:fltk-1.3.4-1/src/Fl_Device.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
 460              		.loc 2 94 0
 461 0010 C3       		ret
 462              		.p2align 4,,10
 463 0011 0F1F8000 		.p2align 3
 463      000000
 464              	.L16:
  83:fltk-1.3.4-1/src/Fl_Device.cxx ****   67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type in
 465              		.loc 2 83 0 discriminator 1
 466 0018 55       		pushq	%rbp
 467              		.cfi_def_cfa_offset 16
 468              		.cfi_offset 6, -16
 469 0019 53       		pushq	%rbx
 470              		.cfi_def_cfa_offset 24
 471              		.cfi_offset 3, -24
  92:fltk-1.3.4-1/src/Fl_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 472              		.loc 2 92 0 discriminator 1
 473 001a BF000000 		movl	$_ZGVZN17Fl_Display_Device14display_deviceEvE7display, %edi
 473      00
  83:fltk-1.3.4-1/src/Fl_Device.cxx ****   67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type in
 474              		.loc 2 83 0 discriminator 1
 475 001f 4883EC08 		subq	$8, %rsp
 476              		.cfi_def_cfa_offset 32
  92:fltk-1.3.4-1/src/Fl_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 477              		.loc 2 92 0 discriminator 1
 478 0023 E8000000 		call	__cxa_guard_acquire
 478      00
 479              	.LVL25:
 480 0028 85C0     		testl	%eax, %eax
 481 002a 7514     		jne	.L18
 482 002c 488B0500 		movq	_ZZN17Fl_Display_Device14display_deviceEvE7display(%rip), %rax
 482      000000
 483              		.loc 2 94 0
 484 0033 4883C408 		addq	$8, %rsp
 485              		.cfi_remember_state
 486              		.cfi_def_cfa_offset 24
 487 0037 5B       		popq	%rbx
 488              		.cfi_restore 3
 489              		.cfi_def_cfa_offset 16
 490 0038 5D       		popq	%rbp
 491              		.cfi_restore 6
 492              		.cfi_def_cfa_offset 8
 493 0039 C3       		ret
 494 003a 660F1F44 		.p2align 4,,10
 494      0000
 495              		.p2align 3
 496              	.L18:
 497              		.cfi_restore_state
  92:fltk-1.3.4-1/src/Fl_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 498              		.loc 2 92 0 discriminator 2
 499 0040 BFD00600 		movl	$1744, %edi
 499      00
 500 0045 E8000000 		call	_Znwm
 500      00
 501              	.LVL26:
 502              	.LBB84:
 503              	.LBB85:
 504              	.LBB86:
 505              	.LBB87:
  61:fltk-1.3.4-1/src/Fl_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 506              		.loc 2 61 0 discriminator 2
 507 004a F20F1005 		movsd	.LC10(%rip), %xmm0
 507      00000000 
 508              	.LBE87:
 509              	.LBE86:
 510              	.LBE85:
 511              	.LBE84:
  92:fltk-1.3.4-1/src/Fl_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 512              		.loc 2 92 0 discriminator 2
 513 0052 4889C3   		movq	%rax, %rbx
 514              	.LVL27:
 515              	.LBB94:
 516              	.LBB92:
 517              	.LBB90:
 518              	.LBB88:
  56:fltk-1.3.4-1/src/Fl_Device.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
 519              		.loc 2 56 0 discriminator 2
 520 0055 C7400800 		movl	$0, 8(%rax)
 520      000000
  57:fltk-1.3.4-1/src/Fl_Device.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 521              		.loc 2 57 0 discriminator 2
 522 005c C7400C00 		movl	$0, 12(%rax)
 522      000000
  62:fltk-1.3.4-1/src/Fl_Device.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
 523              		.loc 2 62 0 discriminator 2
 524 0063 488D8018 		leaq	1560(%rax), %rax
 524      060000
 525              	.LVL28:
  61:fltk-1.3.4-1/src/Fl_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 526              		.loc 2 61 0 discriminator 2
 527 006a F20F1100 		movsd	%xmm0, (%rax)
  58:fltk-1.3.4-1/src/Fl_Device.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
 528              		.loc 2 58 0 discriminator 2
 529 006e C780FCF9 		movl	$0, -1540(%rax)
 529      FFFF0000 
 529      0000
 530 0078 C7405000 		movl	$0, 80(%rax)
 530      000000
  59:fltk-1.3.4-1/src/Fl_Device.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
 531              		.loc 2 59 0 discriminator 2
 532 007f 48C74058 		movq	$0, 88(%rax)
 532      00000000 
  60:fltk-1.3.4-1/src/Fl_Device.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
 533              		.loc 2 60 0 discriminator 2
 534 0087 C7404C00 		movl	$0, 76(%rax)
 534      000000
 535              	.LBE88:
 536              	.LBE90:
 537              	.LBE92:
 538              	.LBE94:
  92:fltk-1.3.4-1/src/Fl_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 539              		.loc 2 92 0 discriminator 2
 540 008e BF100000 		movl	$16, %edi
 540      00
 541              	.LBB95:
 542              	.LBB93:
 543              	.LBB91:
 544              	.LBB89:
  61:fltk-1.3.4-1/src/Fl_Device.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 545              		.loc 2 61 0 discriminator 2
 546 0093 48C74008 		movq	$0, 8(%rax)
 546      00000000 
 547 009b 48C74010 		movq	$0, 16(%rax)
 547      00000000 
 548 00a3 F20F1183 		movsd	%xmm0, 1584(%rbx)
 548      30060000 
 549 00ab 48C74020 		movq	$0, 32(%rax)
 549      00000000 
 550 00b3 48C74028 		movq	$0, 40(%rax)
 550      00000000 
  62:fltk-1.3.4-1/src/Fl_Device.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
 551              		.loc 2 62 0 discriminator 2
 552 00bb 488983C8 		movq	%rax, 1736(%rbx)
 552      060000
  63:fltk-1.3.4-1/src/Fl_Device.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
 553              		.loc 2 63 0 discriminator 2
 554 00c2 48C78358 		movq	$0, 1624(%rbx)
 554      06000000 
 554      000000
  64:fltk-1.3.4-1/src/Fl_Device.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 555              		.loc 2 64 0 discriminator 2
 556 00cd 48C783C0 		movq	$0, 1728(%rbx)
 556      06000000 
 556      000000
  65:fltk-1.3.4-1/src/Fl_Device.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w
 557              		.loc 2 65 0 discriminator 2
 558 00d8 C7834C06 		movl	$0, 1612(%rbx)
 558      00000000 
 558      0000
 559              	.LVL29:
 560              	.LBE89:
 561              	.LBE91:
 507:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 562              		.loc 1 507 0 discriminator 2
 563 00e2 48C70300 		movq	$_ZTV23Fl_Xlib_Graphics_Driver+16, (%rbx)
 563      000000
 564              	.LVL30:
 565              	.LBE93:
 566              	.LBE95:
  92:fltk-1.3.4-1/src/Fl_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 567              		.loc 2 92 0 discriminator 2
 568 00e9 E8000000 		call	_Znwm
 568      00
 569              	.LVL31:
 570 00ee BF000000 		movl	$_ZGVZN17Fl_Display_Device14display_deviceEvE7display, %edi
 570      00
 571              	.LBB96:
 572              	.LBB97:
 573              	.LBB98:
 574              	.LBB99:
 563:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 575              		.loc 1 563 0 discriminator 2
 576 00f3 48895808 		movq	%rbx, 8(%rax)
 577              	.LBE99:
 578              	.LBE98:
  77:fltk-1.3.4-1/src/Fl_Device.cxx ****   61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
 579              		.loc 2 77 0 discriminator 2
 580 00f7 48C70000 		movq	$_ZTV17Fl_Display_Device+16, (%rax)
 580      000000
 581              	.LBE97:
 582              	.LBE96:
  92:fltk-1.3.4-1/src/Fl_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 583              		.loc 2 92 0 discriminator 2
 584 00fe 4889C5   		movq	%rax, %rbp
 585              	.LVL32:
 586              	.LBB103:
 587              	.LBB102:
 588              	.LBB100:
 589              	.LBB101:
  46:fltk-1.3.4-1/src/Fl_Device.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
 590              		.loc 2 46 0 discriminator 2
 591 0101 48891D00 		movq	%rbx, fl_graphics_driver(%rip)
 591      000000
  47:fltk-1.3.4-1/src/Fl_Device.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
 592              		.loc 2 47 0 discriminator 2
 593 0108 48890500 		movq	%rax, _ZN17Fl_Surface_Device8_surfaceE(%rip)
 593      000000
 594              	.LVL33:
 595              	.LBE101:
 596              	.LBE100:
 597              	.LBE102:
 598              	.LBE103:
  92:fltk-1.3.4-1/src/Fl_Device.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 599              		.loc 2 92 0 discriminator 2
 600 010f 48890500 		movq	%rax, _ZZN17Fl_Display_Device14display_deviceEvE7display(%rip)
 600      000000
 601 0116 E8000000 		call	__cxa_guard_release
 601      00
 602              	.LVL34:
 603              		.loc 2 94 0 discriminator 2
 604 011b 4883C408 		addq	$8, %rsp
 605              		.cfi_def_cfa_offset 24
 606 011f 4889E8   		movq	%rbp, %rax
 607 0122 5B       		popq	%rbx
 608              		.cfi_restore 3
 609              		.cfi_def_cfa_offset 16
 610 0123 5D       		popq	%rbp
 611              		.cfi_restore 6
 612              		.cfi_def_cfa_offset 8
 613 0124 C3       		ret
 614              		.cfi_endproc
 615              	.LFE402:
 617              		.section	.text.unlikely._ZN17Fl_Display_Device14display_deviceEv
 618              	.LCOLDE15:
 619              		.section	.text._ZN17Fl_Display_Device14display_deviceEv
 620              	.LHOTE15:
 621              		.section	.text.unlikely._ZN17Fl_Surface_Device15default_surfaceEv,"ax",@progbits
 622              		.align 2
 623              	.LCOLDB16:
 624              		.section	.text._ZN17Fl_Surface_Device15default_surfaceEv,"ax",@progbits
 625              	.LHOTB16:
 626              		.align 2
 627              		.p2align 4,,15
 628              		.globl	_ZN17Fl_Surface_Device15default_surfaceEv
 630              	_ZN17Fl_Surface_Device15default_surfaceEv:
 631              	.LFB406:
  95:fltk-1.3.4-1/src/Fl_Device.cxx ****   78:fltk-1.3.4-1/FL/Fl_Device.H ****    
  96:fltk-1.3.4-1/src/Fl_Device.cxx ****   79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be c
  97:fltk-1.3.4-1/src/Fl_Device.cxx ****   80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
  98:fltk-1.3.4-1/src/Fl_Device.cxx ****   81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ..
 632              		.loc 2 98 0
 633              		.cfi_startproc
  99:fltk-1.3.4-1/src/Fl_Device.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 634              		.loc 2 99 0
 635 0000 E9000000 		jmp	_ZN17Fl_Display_Device14display_deviceEv
 635      00
 636              	.LVL35:
 637              		.cfi_endproc
 638              	.LFE406:
 640              		.section	.text.unlikely._ZN17Fl_Surface_Device15default_surfaceEv
 641              	.LCOLDE16:
 642              		.section	.text._ZN17Fl_Surface_Device15default_surfaceEv
 643              	.LHOTE16:
 644              		.section	.text.unlikely._GLOBAL__sub_I__ZN9Fl_Device8class_idE,"ax",@progbits
 645              	.LCOLDB17:
 646              		.section	.text.startup._GLOBAL__sub_I__ZN9Fl_Device8class_idE,"ax",@progbits
 647              	.LHOTB17:
 648              		.p2align 4,,15
 650              	_GLOBAL__sub_I__ZN9Fl_Device8class_idE:
 651              	.LFB412:
 100:fltk-1.3.4-1/src/Fl_Device.cxx ****   83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 101:fltk-1.3.4-1/src/Fl_Device.cxx ****   84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 102:fltk-1.3.4-1/src/Fl_Device.cxx ****   19              		.loc 1 84 0
 103:fltk-1.3.4-1/src/Fl_Device.cxx ****   20              		.cfi_startproc
 652              		.loc 2 103 0
 653              		.cfi_startproc
 654              	.LVL36:
 655 0000 4883EC08 		subq	$8, %rsp
 656              		.cfi_def_cfa_offset 16
 657              	.LBB104:
 658              	.LBB105:
 659              		.loc 2 103 0
 660 0004 E8000000 		call	_ZN17Fl_Display_Device14display_deviceEv
 660      00
 661              	.LVL37:
 662 0009 48890500 		movq	%rax, _ZN17Fl_Display_Device8_displayE(%rip)
 662      000000
 663              	.LVL38:
 664              	.LBE105:
 665              	.LBE104:
 666 0010 4883C408 		addq	$8, %rsp
 667              		.cfi_def_cfa_offset 8
 668 0014 C3       		ret
 669              		.cfi_endproc
 670              	.LFE412:
 672              		.section	.text.unlikely._GLOBAL__sub_I__ZN9Fl_Device8class_idE
 673              	.LCOLDE17:
 674              		.section	.text.startup._GLOBAL__sub_I__ZN9Fl_Device8class_idE
 675              	.LHOTE17:
 676              		.section	.init_array,"aw"
 677              		.align 8
 678 0000 00000000 		.quad	_GLOBAL__sub_I__ZN9Fl_Device8class_idE
 678      00000000 
 679              		.section	.bss._ZZN17Fl_Display_Device14display_deviceEvE7display,"aw",@nobits
 680              		.align 8
 683              	_ZZN17Fl_Display_Device14display_deviceEvE7display:
 684 0000 00000000 		.zero	8
 684      00000000 
 685              		.weak	_ZTS9Fl_Device
 686              		.section	.rodata._ZTS9Fl_Device,"aG",@progbits,_ZTS9Fl_Device,comdat
 687              		.align 8
 690              	_ZTS9Fl_Device:
 691 0000 39466C5F 		.string	"9Fl_Device"
 691      44657669 
 691      636500
 692              		.weak	_ZTI9Fl_Device
 693              		.section	.rodata._ZTI9Fl_Device,"aG",@progbits,_ZTI9Fl_Device,comdat
 694              		.align 8
 697              	_ZTI9Fl_Device:
 698 0000 00000000 		.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
 698      00000000 
 699 0008 00000000 		.quad	_ZTS9Fl_Device
 699      00000000 
 700              		.weak	_ZTS17Fl_Surface_Device
 701              		.section	.rodata._ZTS17Fl_Surface_Device,"aG",@progbits,_ZTS17Fl_Surface_Device,comdat
 702              		.align 16
 705              	_ZTS17Fl_Surface_Device:
 706 0000 3137466C 		.string	"17Fl_Surface_Device"
 706      5F537572 
 706      66616365 
 706      5F446576 
 706      69636500 
 707              		.weak	_ZTI17Fl_Surface_Device
 708              		.section	.rodata._ZTI17Fl_Surface_Device,"aG",@progbits,_ZTI17Fl_Surface_Device,comdat
 709              		.align 8
 712              	_ZTI17Fl_Surface_Device:
 713 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 713      00000000 
 714 0008 00000000 		.quad	_ZTS17Fl_Surface_Device
 714      00000000 
 715 0010 00000000 		.quad	_ZTI9Fl_Device
 715      00000000 
 716              		.weak	_ZTS17Fl_Display_Device
 717              		.section	.rodata._ZTS17Fl_Display_Device,"aG",@progbits,_ZTS17Fl_Display_Device,comdat
 718              		.align 16
 721              	_ZTS17Fl_Display_Device:
 722 0000 3137466C 		.string	"17Fl_Display_Device"
 722      5F446973 
 722      706C6179 
 722      5F446576 
 722      69636500 
 723              		.weak	_ZTI17Fl_Display_Device
 724              		.section	.rodata._ZTI17Fl_Display_Device,"aG",@progbits,_ZTI17Fl_Display_Device,comdat
 725              		.align 8
 728              	_ZTI17Fl_Display_Device:
 729 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 729      00000000 
 730 0008 00000000 		.quad	_ZTS17Fl_Display_Device
 730      00000000 
 731 0010 00000000 		.quad	_ZTI17Fl_Surface_Device
 731      00000000 
 732              		.weak	_ZTV17Fl_Display_Device
 733              		.section	.rodata._ZTV17Fl_Display_Device,"aG",@progbits,_ZTV17Fl_Display_Device,comdat
 734              		.align 8
 737              	_ZTV17Fl_Display_Device:
 738 0000 00000000 		.quad	0
 738      00000000 
 739 0008 00000000 		.quad	_ZTI17Fl_Display_Device
 739      00000000 
 740 0010 00000000 		.quad	_ZN17Fl_Display_Device10class_nameEv
 740      00000000 
 741 0018 00000000 		.quad	_ZN17Fl_Display_DeviceD1Ev
 741      00000000 
 742 0020 00000000 		.quad	_ZN17Fl_Display_DeviceD0Ev
 742      00000000 
 743 0028 00000000 		.quad	_ZN17Fl_Surface_Device11set_currentEv
 743      00000000 
 744              		.weak	_ZTV17Fl_Surface_Device
 745              		.section	.rodata._ZTV17Fl_Surface_Device,"aG",@progbits,_ZTV17Fl_Surface_Device,comdat
 746              		.align 8
 749              	_ZTV17Fl_Surface_Device:
 750 0000 00000000 		.quad	0
 750      00000000 
 751 0008 00000000 		.quad	_ZTI17Fl_Surface_Device
 751      00000000 
 752 0010 00000000 		.quad	_ZN17Fl_Surface_Device10class_nameEv
 752      00000000 
 753 0018 00000000 		.quad	_ZN17Fl_Surface_DeviceD1Ev
 753      00000000 
 754 0020 00000000 		.quad	_ZN17Fl_Surface_DeviceD0Ev
 754      00000000 
 755 0028 00000000 		.quad	_ZN17Fl_Surface_Device11set_currentEv
 755      00000000 
 756              		.globl	_ZN17Fl_Display_Device8_displayE
 757              		.section	.bss._ZN17Fl_Display_Device8_displayE,"aw",@nobits
 758              		.align 8
 761              	_ZN17Fl_Display_Device8_displayE:
 762 0000 00000000 		.zero	8
 762      00000000 
 763              		.section	.bss._ZGVZN17Fl_Display_Device14display_deviceEvE7display,"aw",@nobits
 764              		.align 8
 767              	_ZGVZN17Fl_Display_Device14display_deviceEvE7display:
 768 0000 00000000 		.zero	8
 768      00000000 
 769              		.globl	_ZN18Fl_Graphics_Driver2m0E
 770              		.section	.rodata._ZN18Fl_Graphics_Driver2m0E,"a",@progbits
 771              		.align 32
 774              	_ZN18Fl_Graphics_Driver2m0E:
 775 0000 00000000 		.long	0
 776 0004 0000F03F 		.long	1072693248
 777 0008 00000000 		.long	0
 778 000c 00000000 		.long	0
 779 0010 00000000 		.long	0
 780 0014 00000000 		.long	0
 781 0018 00000000 		.long	0
 782 001c 0000F03F 		.long	1072693248
 783 0020 00000000 		.long	0
 784 0024 00000000 		.long	0
 785 0028 00000000 		.long	0
 786 002c 00000000 		.long	0
 787              		.globl	_ZN17Fl_Surface_Device8_surfaceE
 788              		.section	.bss._ZN17Fl_Surface_Device8_surfaceE,"aw",@nobits
 789              		.align 8
 792              	_ZN17Fl_Surface_Device8_surfaceE:
 793 0000 00000000 		.zero	8
 793      00000000 
 794              		.globl	fl_graphics_driver
 795              		.section	.bss.fl_graphics_driver,"aw",@nobits
 796              		.align 8
 799              	fl_graphics_driver:
 800 0000 00000000 		.zero	8
 800      00000000 
 801              		.globl	_ZN23Fl_Xlib_Graphics_Driver8class_idE
 802              		.section	.rodata.str1.1,"aMS",@progbits,1
 803              	.LC18:
 804 0000 466C5F58 		.string	"Fl_Xlib_Graphics_Driver"
 804      6C69625F 
 804      47726170 
 804      68696373 
 804      5F447269 
 805              		.section	.data._ZN23Fl_Xlib_Graphics_Driver8class_idE,"aw",@progbits
 806              		.align 8
 809              	_ZN23Fl_Xlib_Graphics_Driver8class_idE:
 810 0000 00000000 		.quad	.LC18
 810      00000000 
 811              		.globl	_ZN18Fl_Graphics_Driver8class_idE
 812              		.section	.rodata.str1.1
 813              	.LC19:
 814 0018 466C5F47 		.string	"Fl_Graphics_Driver"
 814      72617068 
 814      6963735F 
 814      44726976 
 814      657200
 815              		.section	.data._ZN18Fl_Graphics_Driver8class_idE,"aw",@progbits
 816              		.align 8
 819              	_ZN18Fl_Graphics_Driver8class_idE:
 820 0000 00000000 		.quad	.LC19
 820      00000000 
 821              		.globl	_ZN17Fl_Display_Device8class_idE
 822              		.section	.rodata.str1.1
 823              	.LC20:
 824 002b 466C5F44 		.string	"Fl_Display_Device"
 824      6973706C 
 824      61795F44 
 824      65766963 
 824      6500
 825              		.section	.data._ZN17Fl_Display_Device8class_idE,"aw",@progbits
 826              		.align 8
 829              	_ZN17Fl_Display_Device8class_idE:
 830 0000 00000000 		.quad	.LC20
 830      00000000 
 831              		.globl	_ZN17Fl_Surface_Device8class_idE
 832              		.section	.rodata.str1.1
 833              	.LC21:
 834 003d 466C5F53 		.string	"Fl_Surface_Device"
 834      75726661 
 834      63655F44 
 834      65766963 
 834      6500
 835              		.section	.data._ZN17Fl_Surface_Device8class_idE,"aw",@progbits
 836              		.align 8
 839              	_ZN17Fl_Surface_Device8class_idE:
 840 0000 00000000 		.quad	.LC21
 840      00000000 
 841              		.globl	_ZN9Fl_Device8class_idE
 842              		.section	.rodata.str1.1
 843              	.LC22:
 844 004f 466C5F44 		.string	"Fl_Device"
 844      65766963 
 844      6500
 845              		.section	.data._ZN9Fl_Device8class_idE,"aw",@progbits
 846              		.align 8
 849              	_ZN9Fl_Device8class_idE:
 850 0000 00000000 		.quad	.LC22
 850      00000000 
 851              		.section	.rodata.cst8,"aM",@progbits,8
 852              		.align 8
 853              	.LC10:
 854 0000 00000000 		.long	0
 855 0004 0000F03F 		.long	1072693248
 856              		.text
 857              	.Letext0:
 858              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
 859              	.Letext_cold0:
 860              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 861              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 862              		.file 5 "/usr/include/libio.h"
 863              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
 864              		.file 7 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Device.cxx
     /tmp/ccZAgXaJ.s:16     .text._ZN9Fl_Device10class_nameEv:0000000000000000 _ZN9Fl_Device10class_nameEv
     /tmp/ccZAgXaJ.s:849    .data._ZN9Fl_Device8class_idE:0000000000000000 _ZN9Fl_Device8class_idE
     /tmp/ccZAgXaJ.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD2Ev
     /tmp/ccZAgXaJ.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD1Ev
     /tmp/ccZAgXaJ.s:65     .text._ZN17Fl_Surface_Device10class_nameEv:0000000000000000 _ZN17Fl_Surface_Device10class_nameEv
     /tmp/ccZAgXaJ.s:839    .data._ZN17Fl_Surface_Device8class_idE:0000000000000000 _ZN17Fl_Surface_Device8class_idE
     /tmp/ccZAgXaJ.s:89     .text._ZN17Fl_Surface_DeviceD2Ev:0000000000000000 _ZN17Fl_Surface_DeviceD2Ev
     /tmp/ccZAgXaJ.s:89     .text._ZN17Fl_Surface_DeviceD2Ev:0000000000000000 _ZN17Fl_Surface_DeviceD1Ev
     /tmp/ccZAgXaJ.s:113    .text._ZN17Fl_Display_Device10class_nameEv:0000000000000000 _ZN17Fl_Display_Device10class_nameEv
     /tmp/ccZAgXaJ.s:829    .data._ZN17Fl_Display_Device8class_idE:0000000000000000 _ZN17Fl_Display_Device8class_idE
     /tmp/ccZAgXaJ.s:137    .text._ZN17Fl_Surface_Device11set_currentEv:0000000000000000 _ZN17Fl_Surface_Device11set_currentEv
     /tmp/ccZAgXaJ.s:792    .bss._ZN17Fl_Surface_Device8_surfaceE:0000000000000000 _ZN17Fl_Surface_Device8_surfaceE
     /tmp/ccZAgXaJ.s:799    .bss.fl_graphics_driver:0000000000000000 fl_graphics_driver
     /tmp/ccZAgXaJ.s:167    .text._ZN17Fl_Display_DeviceD2Ev:0000000000000000 _ZN17Fl_Display_DeviceD2Ev
     /tmp/ccZAgXaJ.s:167    .text._ZN17Fl_Display_DeviceD2Ev:0000000000000000 _ZN17Fl_Display_DeviceD1Ev
     /tmp/ccZAgXaJ.s:191    .text._ZN9Fl_DeviceD0Ev:0000000000000000 _ZN9Fl_DeviceD0Ev
     /tmp/ccZAgXaJ.s:215    .text._ZN17Fl_Display_DeviceD0Ev:0000000000000000 _ZN17Fl_Display_DeviceD0Ev
     /tmp/ccZAgXaJ.s:239    .text._ZN17Fl_Surface_DeviceD0Ev:0000000000000000 _ZN17Fl_Surface_DeviceD0Ev
     /tmp/ccZAgXaJ.s:263    .text._ZN18Fl_Graphics_DriverC2Ev:0000000000000000 _ZN18Fl_Graphics_DriverC2Ev
     /tmp/ccZAgXaJ.s:263    .text._ZN18Fl_Graphics_DriverC2Ev:0000000000000000 _ZN18Fl_Graphics_DriverC1Ev
     /tmp/ccZAgXaJ.s:327    .text._ZN18Fl_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_:0000000000000000 _ZN18Fl_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_
     /tmp/ccZAgXaJ.s:408    .text._ZN17Fl_Display_DeviceC2EP18Fl_Graphics_Driver:0000000000000000 _ZN17Fl_Display_DeviceC2EP18Fl_Graphics_Driver
     /tmp/ccZAgXaJ.s:737    .rodata._ZTV17Fl_Display_Device:0000000000000000 _ZTV17Fl_Display_Device
     /tmp/ccZAgXaJ.s:408    .text._ZN17Fl_Display_DeviceC2EP18Fl_Graphics_Driver:0000000000000000 _ZN17Fl_Display_DeviceC1EP18Fl_Graphics_Driver
     /tmp/ccZAgXaJ.s:452    .text._ZN17Fl_Display_Device14display_deviceEv:0000000000000000 _ZN17Fl_Display_Device14display_deviceEv
     /tmp/ccZAgXaJ.s:767    .bss._ZGVZN17Fl_Display_Device14display_deviceEvE7display:0000000000000000 _ZGVZN17Fl_Display_Device14display_deviceEvE7display
     /tmp/ccZAgXaJ.s:683    .bss._ZZN17Fl_Display_Device14display_deviceEvE7display:0000000000000000 _ZZN17Fl_Display_Device14display_deviceEvE7display
     /tmp/ccZAgXaJ.s:630    .text._ZN17Fl_Surface_Device15default_surfaceEv:0000000000000000 _ZN17Fl_Surface_Device15default_surfaceEv
     /tmp/ccZAgXaJ.s:650    .text.startup._GLOBAL__sub_I__ZN9Fl_Device8class_idE:0000000000000000 _GLOBAL__sub_I__ZN9Fl_Device8class_idE
     /tmp/ccZAgXaJ.s:761    .bss._ZN17Fl_Display_Device8_displayE:0000000000000000 _ZN17Fl_Display_Device8_displayE
     /tmp/ccZAgXaJ.s:690    .rodata._ZTS9Fl_Device:0000000000000000 _ZTS9Fl_Device
     /tmp/ccZAgXaJ.s:697    .rodata._ZTI9Fl_Device:0000000000000000 _ZTI9Fl_Device
     /tmp/ccZAgXaJ.s:705    .rodata._ZTS17Fl_Surface_Device:0000000000000000 _ZTS17Fl_Surface_Device
     /tmp/ccZAgXaJ.s:712    .rodata._ZTI17Fl_Surface_Device:0000000000000000 _ZTI17Fl_Surface_Device
     /tmp/ccZAgXaJ.s:721    .rodata._ZTS17Fl_Display_Device:0000000000000000 _ZTS17Fl_Display_Device
     /tmp/ccZAgXaJ.s:728    .rodata._ZTI17Fl_Display_Device:0000000000000000 _ZTI17Fl_Display_Device
     /tmp/ccZAgXaJ.s:749    .rodata._ZTV17Fl_Surface_Device:0000000000000000 _ZTV17Fl_Surface_Device
     /tmp/ccZAgXaJ.s:774    .rodata._ZN18Fl_Graphics_Driver2m0E:0000000000000000 _ZN18Fl_Graphics_Driver2m0E
     /tmp/ccZAgXaJ.s:809    .data._ZN23Fl_Xlib_Graphics_Driver8class_idE:0000000000000000 _ZN23Fl_Xlib_Graphics_Driver8class_idE
     /tmp/ccZAgXaJ.s:819    .data._ZN18Fl_Graphics_Driver8class_idE:0000000000000000 _ZN18Fl_Graphics_Driver8class_idE
     /tmp/ccZAgXaJ.s:853    .rodata.cst8:0000000000000000 .LC10
                           .group:0000000000000000 _ZN9Fl_DeviceD5Ev
                           .group:0000000000000000 _ZN17Fl_Surface_DeviceD5Ev
                           .group:0000000000000000 _ZN17Fl_Display_DeviceD5Ev
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
_ZdlPv
_ZTV18Fl_Graphics_Driver
__cxa_guard_acquire
_Znwm
_ZTV23Fl_Xlib_Graphics_Driver
__cxa_guard_release
_ZTVN10__cxxabiv117__class_type_infoE
_ZTVN10__cxxabiv120__si_class_type_infoE
