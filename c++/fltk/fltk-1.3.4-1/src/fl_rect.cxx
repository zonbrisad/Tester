   1              		.file	"fl_rect.cxx"
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
  56              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Graphics_Drive
  57              		.align 2
  58              	.LCOLDB2:
  59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Graphics_Driver4drawEPK
  60              	.LHOTB2:
  61              		.align 2
  62              		.p2align 4,,15
  63              		.weak	_ZN18Fl_Graphics_Driver4drawEPKciii
  65              	_ZN18Fl_Graphics_Driver4drawEPKciii:
  66              	.LFB343:
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
  67              		.loc 1 251 0
  68              		.cfi_startproc
  69              	.LVL2:
  70 0000 F3C3     		rep ret
  71              		.cfi_endproc
  72              	.LFE343:
  74              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Graphics_Drive
  75              	.LCOLDE2:
  76              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Graphics_Driver4drawEPK
  77              	.LHOTE2:
  78              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEiPKciii,"axG",@progbits,_ZN18Fl_Graphics_Driv
  79              		.align 2
  80              	.LCOLDB3:
  81              		.section	.text._ZN18Fl_Graphics_Driver4drawEiPKciii,"axG",@progbits,_ZN18Fl_Graphics_Driver4drawEi
  82              	.LHOTB3:
  83              		.align 2
  84              		.p2align 4,,15
  85              		.weak	_ZN18Fl_Graphics_Driver4drawEiPKciii
  87              	_ZN18Fl_Graphics_Driver4drawEiPKciii:
  88              	.LFB344:
 252:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 253:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, float x, float y) { draw(str, n, (int)(x+0.5), (int)(y+
 254:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, int x, int y). */
 256:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(int angle, const char *str, int n, int x, int y) {}
  89              		.loc 1 256 0
  90              		.cfi_startproc
  91              	.LVL3:
  92 0000 F3C3     		rep ret
  93              		.cfi_endproc
  94              	.LFE344:
  96              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEiPKciii,"axG",@progbits,_ZN18Fl_Graphics_Driv
  97              	.LCOLDE3:
  98              		.section	.text._ZN18Fl_Graphics_Driver4drawEiPKciii,"axG",@progbits,_ZN18Fl_Graphics_Driver4drawEi
  99              	.LHOTE3:
 100              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8rtl_drawEPKciii,"axG",@progbits,_ZN18Fl_Graphics_D
 101              		.align 2
 102              	.LCOLDB4:
 103              		.section	.text._ZN18Fl_Graphics_Driver8rtl_drawEPKciii,"axG",@progbits,_ZN18Fl_Graphics_Driver8rtl
 104              	.LHOTB4:
 105              		.align 2
 106              		.p2align 4,,15
 107              		.weak	_ZN18Fl_Graphics_Driver8rtl_drawEPKciii
 109              	_ZN18Fl_Graphics_Driver8rtl_drawEPKciii:
 110              	.LFB345:
 257:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rtl_draw(const char *str, int n, int x, int y). */
 258:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rtl_draw(const char *str, int n, int x, int y) {};
 111              		.loc 1 258 0
 112              		.cfi_startproc
 113              	.LVL4:
 114 0000 F3C3     		rep ret
 115              		.cfi_endproc
 116              	.LFE345:
 118              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8rtl_drawEPKciii,"axG",@progbits,_ZN18Fl_Graphics_D
 119              	.LCOLDE4:
 120              		.section	.text._ZN18Fl_Graphics_Driver8rtl_drawEPKciii,"axG",@progbits,_ZN18Fl_Graphics_Driver8rtl
 121              	.LHOTE4:
 122              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5colorEj,"axG",@progbits,_ZN18Fl_Graphics_Driver5co
 123              		.align 2
 124              	.LCOLDB5:
 125              		.section	.text._ZN18Fl_Graphics_Driver5colorEj,"axG",@progbits,_ZN18Fl_Graphics_Driver5colorEj,com
 126              	.LHOTB5:
 127              		.align 2
 128              		.p2align 4,,15
 129              		.weak	_ZN18Fl_Graphics_Driver5colorEj
 131              	_ZN18Fl_Graphics_Driver5colorEj:
 132              	.LFB346:
 259:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(Fl_Color c). */
 260:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(Fl_Color c) {color_ = c;}
 133              		.loc 1 260 0
 134              		.cfi_startproc
 135              	.LVL5:
 136              		.loc 1 260 0
 137 0000 897710   		movl	%esi, 16(%rdi)
 138 0003 C3       		ret
 139              		.cfi_endproc
 140              	.LFE346:
 142              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5colorEj,"axG",@progbits,_ZN18Fl_Graphics_Driver5co
 143              	.LCOLDE5:
 144              		.section	.text._ZN18Fl_Graphics_Driver5colorEj,"axG",@progbits,_ZN18Fl_Graphics_Driver5colorEj,com
 145              	.LHOTE5:
 146              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18Fl_Graphics_Driver5
 147              		.align 2
 148              	.LCOLDB6:
 149              		.section	.text._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18Fl_Graphics_Driver5colorEhhh
 150              	.LHOTB6:
 151              		.align 2
 152              		.p2align 4,,15
 153              		.weak	_ZN18Fl_Graphics_Driver5colorEhhh
 155              	_ZN18Fl_Graphics_Driver5colorEhhh:
 156              	.LFB347:
 261:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(uchar r, uchar g, uchar b). */
 262:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(uchar r, uchar g, uchar b) {}
 157              		.loc 1 262 0
 158              		.cfi_startproc
 159              	.LVL6:
 160 0000 F3C3     		rep ret
 161              		.cfi_endproc
 162              	.LFE347:
 164              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18Fl_Graphics_Driver5
 165              	.LCOLDE6:
 166              		.section	.text._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18Fl_Graphics_Driver5colorEhhh
 167              	.LHOTE6:
 168              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii,"axG",@progbits,_ZN18Fl_Grap
 169              		.align 2
 170              	.LCOLDB7:
 171              		.section	.text._ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii,"axG",@progbits,_ZN18Fl_Graphics_Driv
 172              	.LHOTB7:
 173              		.align 2
 174              		.p2align 4,,15
 175              		.weak	_ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii
 177              	_ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii:
 178              	.LFB351:
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
 179              		.loc 1 351 0
 180              		.cfi_startproc
 181              	.LVL7:
 182 0000 F3C3     		rep ret
 183              		.cfi_endproc
 184              	.LFE351:
 186              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii,"axG",@progbits,_ZN18Fl_Grap
 187              	.LCOLDE7:
 188              		.section	.text._ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii,"axG",@progbits,_ZN18Fl_Graphics_Driv
 189              	.LHOTE7:
 190              		.section	.text.unlikely._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii,"axG",@progbits,_ZN18Fl
 191              		.align 2
 192              	.LCOLDB8:
 193              		.section	.text._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii,"axG",@progbits,_ZN18Fl_Graphics
 194              	.LHOTB8:
 195              		.align 2
 196              		.p2align 4,,15
 197              		.weak	_ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii
 199              	_ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii:
 200              	.LFB352:
 352:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D, int L). */
 353:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0) {}
 201              		.loc 1 353 0
 202              		.cfi_startproc
 203              	.LVL8:
 204 0000 F3C3     		rep ret
 205              		.cfi_endproc
 206              	.LFE352:
 208              		.section	.text.unlikely._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii,"axG",@progbits,_ZN18Fl
 209              	.LCOLDE8:
 210              		.section	.text._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii,"axG",@progbits,_ZN18Fl_Graphics
 211              	.LHOTE8:
 212              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"axG",@progbits,_Z
 213              		.align 2
 214              	.LCOLDB9:
 215              		.section	.text._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"axG",@progbits,_ZN18Fl_Gra
 216              	.LHOTB9:
 217              		.align 2
 218              		.p2align 4,,15
 219              		.weak	_ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 221              	_ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii:
 222              	.LFB353:
 354:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D). */
 355:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3) {}
 223              		.loc 1 355 0
 224              		.cfi_startproc
 225              	.LVL9:
 226 0000 F3C3     		rep ret
 227              		.cfi_endproc
 228              	.LFE353:
 230              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"axG",@progbits,_Z
 231              	.LCOLDE9:
 232              		.section	.text._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"axG",@progbits,_ZN18Fl_Gra
 233              	.LHOTE9:
 234              		.section	.text.unlikely._ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"axG",@progbi
 235              		.align 2
 236              	.LCOLDB10:
 237              		.section	.text._ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"axG",@progbits,_ZN18F
 238              	.LHOTB10:
 239              		.align 2
 240              		.p2align 4,,15
 241              		.weak	_ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 243              	_ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii:
 244              	.LFB354:
 356:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D
 357:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1)
 245              		.loc 1 357 0
 246              		.cfi_startproc
 247              	.LVL10:
 248 0000 F3C3     		rep ret
 249              		.cfi_endproc
 250              	.LFE354:
 252              		.section	.text.unlikely._ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"axG",@progbi
 253              	.LCOLDE10:
 254              		.section	.text._ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"axG",@progbits,_ZN18F
 255              	.LHOTE10:
 256              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"axG",@progbits,_ZN18Fl
 257              		.align 2
 258              	.LCOLDB11:
 259              		.section	.text._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"axG",@progbits,_ZN18Fl_Graphics
 260              	.LHOTB11:
 261              		.align 2
 262              		.p2align 4,,15
 263              		.weak	_ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 265              	_ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii:
 266              	.LFB355:
 358:fltk-1.3.4-1/FL/Fl_Device.H ****   // Image classes
 359:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_RGB_Image object to the device. 
 360:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 361:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 362:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 363:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 364:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_RGB_Image * rgb,int XP, int YP, int WP, int HP, int cx, int cy) {}
 267              		.loc 1 364 0
 268              		.cfi_startproc
 269              	.LVL11:
 270 0000 F3C3     		rep ret
 271              		.cfi_endproc
 272              	.LFE355:
 274              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"axG",@progbits,_ZN18Fl
 275              	.LCOLDE11:
 276              		.section	.text._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"axG",@progbits,_ZN18Fl_Graphics
 277              	.LHOTE11:
 278              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"axG",@progbits,_ZN18Fl_Gra
 279              		.align 2
 280              	.LCOLDB12:
 281              		.section	.text._ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"axG",@progbits,_ZN18Fl_Graphics_Dri
 282              	.LHOTB12:
 283              		.align 2
 284              		.p2align 4,,15
 285              		.weak	_ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
 287              	_ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii:
 288              	.LFB356:
 365:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Pixmap object to the device. 
 366:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 367:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 368:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 369:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 370:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_Pixmap * pxm,int XP, int YP, int WP, int HP, int cx, int cy) {}
 289              		.loc 1 370 0
 290              		.cfi_startproc
 291              	.LVL12:
 292 0000 F3C3     		rep ret
 293              		.cfi_endproc
 294              	.LFE356:
 296              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"axG",@progbits,_ZN18Fl_Gra
 297              	.LCOLDE12:
 298              		.section	.text._ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"axG",@progbits,_ZN18Fl_Graphics_Dri
 299              	.LHOTE12:
 300              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"axG",@progbits,_ZN18Fl_Gra
 301              		.align 2
 302              	.LCOLDB13:
 303              		.section	.text._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"axG",@progbits,_ZN18Fl_Graphics_Dri
 304              	.LHOTB13:
 305              		.align 2
 306              		.p2align 4,,15
 307              		.weak	_ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 309              	_ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii:
 310              	.LFB357:
 371:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Bitmap object to the device. 
 372:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 373:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 374:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 375:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, int HP, int cx, int cy) {}
 311              		.loc 1 376 0
 312              		.cfi_startproc
 313              	.LVL13:
 314 0000 F3C3     		rep ret
 315              		.cfi_endproc
 316              	.LFE357:
 318              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"axG",@progbits,_ZN18Fl_Gra
 319              	.LCOLDE13:
 320              		.section	.text._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"axG",@progbits,_ZN18Fl_Graphics_Dri
 321              	.LHOTE13:
 322              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN18Fl_Graphics_Dri
 323              		.align 2
 324              	.LCOLDB14:
 325              		.section	.text._ZN18Fl_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN18Fl_Graphics_Driver10clas
 326              	.LHOTB14:
 327              		.align 2
 328              		.p2align 4,,15
 329              		.weak	_ZN18Fl_Graphics_Driver10class_nameEv
 331              	_ZN18Fl_Graphics_Driver10class_nameEv:
 332              	.LFB358:
 377:fltk-1.3.4-1/FL/Fl_Device.H **** #if FLTK_ABI_VERSION >= 10301
 378:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual
 379:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 380:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 381:fltk-1.3.4-1/FL/Fl_Device.H ****   
 382:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 383:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 384:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 333              		.loc 1 384 0
 334              		.cfi_startproc
 335              	.LVL14:
 336              		.loc 1 384 0
 337 0000 488B0500 		movq	_ZN18Fl_Graphics_Driver8class_idE(%rip), %rax
 337      000000
 338 0007 C3       		ret
 339              		.cfi_endproc
 340              	.LFE358:
 342              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN18Fl_Graphics_Dri
 343              	.LCOLDE14:
 344              		.section	.text._ZN18Fl_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN18Fl_Graphics_Driver10clas
 345              	.LHOTE14:
 346              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4fontEii,"axG",@progbits,_ZN18Fl_Graphics_Driver4fo
 347              		.align 2
 348              	.LCOLDB15:
 349              		.section	.text._ZN18Fl_Graphics_Driver4fontEii,"axG",@progbits,_ZN18Fl_Graphics_Driver4fontEii,com
 350              	.LHOTB15:
 351              		.align 2
 352              		.p2align 4,,15
 353              		.weak	_ZN18Fl_Graphics_Driver4fontEii
 355              	_ZN18Fl_Graphics_Driver4fontEii:
 356              	.LFB359:
 385:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(Fl_Font face, Fl_Fontsize size). */
 386:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void font(Fl_Font face, Fl_Fontsize fsize) {font_ = face; size_ = fsize;}
 357              		.loc 1 386 0
 358              		.cfi_startproc
 359              	.LVL15:
 360              		.loc 1 386 0
 361 0000 897708   		movl	%esi, 8(%rdi)
 362 0003 89570C   		movl	%edx, 12(%rdi)
 363 0006 C3       		ret
 364              		.cfi_endproc
 365              	.LFE359:
 367              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4fontEii,"axG",@progbits,_ZN18Fl_Graphics_Driver4fo
 368              	.LCOLDE15:
 369              		.section	.text._ZN18Fl_Graphics_Driver4fontEii,"axG",@progbits,_ZN18Fl_Graphics_Driver4fontEii,com
 370              	.LHOTE15:
 371              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5widthEPKci,"axG",@progbits,_ZN18Fl_Graphics_Driver
 372              		.align 2
 373              	.LCOLDB17:
 374              		.section	.text._ZN18Fl_Graphics_Driver5widthEPKci,"axG",@progbits,_ZN18Fl_Graphics_Driver5widthEPK
 375              	.LHOTB17:
 376              		.align 2
 377              		.p2align 4,,15
 378              		.weak	_ZN18Fl_Graphics_Driver5widthEPKci
 380              	_ZN18Fl_Graphics_Driver5widthEPKci:
 381              	.LFB362:
 387:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(void). */
 388:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font() {return font_; }
 389:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_size(). */
 390:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size() {return size_; }
 391:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_width(const char *str, int n). */
 392:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual double width(const char *str, int n) {return 0;}
 382              		.loc 1 392 0
 383              		.cfi_startproc
 384              	.LVL16:
 385              		.loc 1 392 0
 386 0000 660FEFC0 		pxor	%xmm0, %xmm0
 387 0004 C3       		ret
 388              		.cfi_endproc
 389              	.LFE362:
 391              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5widthEPKci,"axG",@progbits,_ZN18Fl_Graphics_Driver
 392              	.LCOLDE17:
 393              		.section	.text._ZN18Fl_Graphics_Driver5widthEPKci,"axG",@progbits,_ZN18Fl_Graphics_Driver5widthEPK
 394              	.LHOTE17:
 395              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5widthEj,"axG",@progbits,_ZN18Fl_Graphics_Driver5wi
 396              		.align 2
 397              	.LCOLDB18:
 398              		.section	.text._ZN18Fl_Graphics_Driver5widthEj,"axG",@progbits,_ZN18Fl_Graphics_Driver5widthEj,com
 399              	.LHOTB18:
 400              		.align 2
 401              		.p2align 4,,15
 402              		.weak	_ZN18Fl_Graphics_Driver5widthEj
 404              	_ZN18Fl_Graphics_Driver5widthEj:
 405              	.LFB363:
 393:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_width(unsigned int n). */
 394:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual inline double width(unsigned int c) { char ch = (char)c; return width(&ch, 1); }
 406              		.loc 1 394 0
 407              		.cfi_startproc
 408              	.LVL17:
 409 0000 4883EC18 		subq	$24, %rsp
 410              		.cfi_def_cfa_offset 32
 411              		.loc 1 394 0
 412 0004 BA010000 		movl	$1, %edx
 412      00
 413 0009 64488B04 		movq	%fs:40, %rax
 413      25280000 
 413      00
 414 0012 48894424 		movq	%rax, 8(%rsp)
 414      08
 415 0017 31C0     		xorl	%eax, %eax
 416 0019 488B07   		movq	(%rdi), %rax
 417 001c 40887424 		movb	%sil, 7(%rsp)
 417      07
 418 0021 488D7424 		leaq	7(%rsp), %rsi
 418      07
 419              	.LVL18:
 420 0026 FF90B801 		call	*440(%rax)
 420      0000
 421              	.LVL19:
 422 002c 488B4424 		movq	8(%rsp), %rax
 422      08
 423 0031 64483304 		xorq	%fs:40, %rax
 423      25280000 
 423      00
 424 003a 7505     		jne	.L22
 425 003c 4883C418 		addq	$24, %rsp
 426              		.cfi_remember_state
 427              		.cfi_def_cfa_offset 8
 428 0040 C3       		ret
 429              	.L22:
 430              		.cfi_restore_state
 431 0041 E8000000 		call	__stack_chk_fail
 431      00
 432              	.LVL20:
 433              		.cfi_endproc
 434              	.LFE363:
 436              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5widthEj,"axG",@progbits,_ZN18Fl_Graphics_Driver5wi
 437              	.LCOLDE18:
 438              		.section	.text._ZN18Fl_Graphics_Driver5widthEj,"axG",@progbits,_ZN18Fl_Graphics_Driver5widthEj,com
 439              	.LHOTE18:
 440              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6heightEv,"axG",@progbits,_ZN18Fl_Graphics_Driver6h
 441              		.align 2
 442              	.LCOLDB19:
 443              		.section	.text._ZN18Fl_Graphics_Driver6heightEv,"axG",@progbits,_ZN18Fl_Graphics_Driver6heightEv,c
 444              	.LHOTB19:
 445              		.align 2
 446              		.p2align 4,,15
 447              		.weak	_ZN18Fl_Graphics_Driver6heightEv
 449              	_ZN18Fl_Graphics_Driver6heightEv:
 450              	.LFB364:
 395:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_text_extents(const char*, int n, int& dx, int& dy, int& w, int& h). */
 396:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 397:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_height(). */
 398:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int height() {return size();}
 451              		.loc 1 398 0
 452              		.cfi_startproc
 453              	.LVL21:
 454              		.loc 1 398 0
 455 0000 8B470C   		movl	12(%rdi), %eax
 456 0003 C3       		ret
 457              		.cfi_endproc
 458              	.LFE364:
 460              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6heightEv,"axG",@progbits,_ZN18Fl_Graphics_Driver6h
 461              	.LCOLDE19:
 462              		.section	.text._ZN18Fl_Graphics_Driver6heightEv,"axG",@progbits,_ZN18Fl_Graphics_Driver6heightEv,c
 463              	.LHOTE19:
 464              		.section	.text.unlikely._ZN18Fl_Graphics_Driver7descentEv,"axG",@progbits,_ZN18Fl_Graphics_Driver7
 465              		.align 2
 466              	.LCOLDB20:
 467              		.section	.text._ZN18Fl_Graphics_Driver7descentEv,"axG",@progbits,_ZN18Fl_Graphics_Driver7descentEv
 468              	.LHOTB20:
 469              		.align 2
 470              		.p2align 4,,15
 471              		.weak	_ZN18Fl_Graphics_Driver7descentEv
 473              	_ZN18Fl_Graphics_Driver7descentEv:
 474              	.LFB365:
 399:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_descent(). */
 400:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int descent() {return 0;}
 475              		.loc 1 400 0
 476              		.cfi_startproc
 477              	.LVL22:
 478              		.loc 1 400 0
 479 0000 31C0     		xorl	%eax, %eax
 480 0002 C3       		ret
 481              		.cfi_endproc
 482              	.LFE365:
 484              		.section	.text.unlikely._ZN18Fl_Graphics_Driver7descentEv,"axG",@progbits,_ZN18Fl_Graphics_Driver7
 485              	.LCOLDE20:
 486              		.section	.text._ZN18Fl_Graphics_Driver7descentEv,"axG",@progbits,_ZN18Fl_Graphics_Driver7descentEv
 487              	.LHOTE20:
 488              		.section	.text.unlikely._ZL13clip_to_shortRiS_S_S_,"ax",@progbits
 489              	.LCOLDB21:
 490              		.section	.text._ZL13clip_to_shortRiS_S_S_,"ax",@progbits
 491              	.LHOTB21:
 492              		.p2align 4,,15
 494              	_ZL13clip_to_shortRiS_S_S_:
 495              	.LFB492:
 496              		.file 2 "fltk-1.3.4-1/src/fl_rect.cxx"
   1:fltk-1.3.4-1/src/fl_rect.cxx ****    1              		.file	"fl_rect.cxx"
   2:fltk-1.3.4-1/src/fl_rect.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/fl_rect.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/fl_rect.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
   5:fltk-1.3.4-1/src/fl_rect.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/fl_rect.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/fl_rect.cxx ****    7              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
   8:fltk-1.3.4-1/src/fl_rect.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/fl_rect.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/fl_rect.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/fl_rect.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
  12:fltk-1.3.4-1/src/fl_rect.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/fl_rect.cxx ****   13              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
  14:fltk-1.3.4-1/src/fl_rect.cxx ****   14              		.weak	_ZN9Fl_Device10class_nameEv
  15:fltk-1.3.4-1/src/fl_rect.cxx ****   16              	_ZN9Fl_Device10class_nameEv:
  16:fltk-1.3.4-1/src/fl_rect.cxx ****   17              	.LFB335:
  17:fltk-1.3.4-1/src/fl_rect.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Device.H"
  18:fltk-1.3.4-1/src/fl_rect.cxx ****    1:fltk-1.3.4-1/FL/Fl_Device.H **** //
  19:fltk-1.3.4-1/src/fl_rect.cxx ****    2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
  20:fltk-1.3.4-1/src/fl_rect.cxx ****    3:fltk-1.3.4-1/FL/Fl_Device.H **** //
  21:fltk-1.3.4-1/src/fl_rect.cxx ****    4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Su
  22:fltk-1.3.4-1/src/fl_rect.cxx ****    5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
  23:fltk-1.3.4-1/src/fl_rect.cxx ****    6:fltk-1.3.4-1/FL/Fl_Device.H **** //
  24:fltk-1.3.4-1/src/fl_rect.cxx ****    7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
  25:fltk-1.3.4-1/src/fl_rect.cxx ****    8:fltk-1.3.4-1/FL/Fl_Device.H **** //
  26:fltk-1.3.4-1/src/fl_rect.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights
  27:fltk-1.3.4-1/src/fl_rect.cxx ****   10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with th
  28:fltk-1.3.4-1/src/fl_rect.cxx ****   11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  29:fltk-1.3.4-1/src/fl_rect.cxx ****   12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  30:fltk-1.3.4-1/src/fl_rect.cxx ****   13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  31:fltk-1.3.4-1/src/fl_rect.cxx ****   14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  32:fltk-1.3.4-1/src/fl_rect.cxx ****   15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  33:fltk-1.3.4-1/src/fl_rect.cxx ****   16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  34:fltk-1.3.4-1/src/fl_rect.cxx ****   17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  35:fltk-1.3.4-1/src/fl_rect.cxx ****   18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  36:fltk-1.3.4-1/src/fl_rect.cxx ****   19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  37:fltk-1.3.4-1/src/fl_rect.cxx ****   20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  38:fltk-1.3.4-1/src/fl_rect.cxx ****   21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver,
  39:fltk-1.3.4-1/src/fl_rect.cxx ****   22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  40:fltk-1.3.4-1/src/fl_rect.cxx ****   23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  41:fltk-1.3.4-1/src/fl_rect.cxx ****   24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  42:fltk-1.3.4-1/src/fl_rect.cxx ****   25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  43:fltk-1.3.4-1/src/fl_rect.cxx ****   26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  44:fltk-1.3.4-1/src/fl_rect.cxx ****   27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  45:fltk-1.3.4-1/src/fl_rect.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
  46:fltk-1.3.4-1/src/fl_rect.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
  47:fltk-1.3.4-1/src/fl_rect.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
  48:fltk-1.3.4-1/src/fl_rect.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  49:fltk-1.3.4-1/src/fl_rect.cxx ****   32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  50:fltk-1.3.4-1/src/fl_rect.cxx ****   33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  51:fltk-1.3.4-1/src/fl_rect.cxx ****   34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  52:fltk-1.3.4-1/src/fl_rect.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  53:fltk-1.3.4-1/src/fl_rect.cxx ****   36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  54:fltk-1.3.4-1/src/fl_rect.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  55:fltk-1.3.4-1/src/fl_rect.cxx ****   38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all g
  56:fltk-1.3.4-1/src/fl_rect.cxx ****   39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  57:fltk-1.3.4-1/src/fl_rect.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  58:fltk-1.3.4-1/src/fl_rect.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  59:fltk-1.3.4-1/src/fl_rect.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  60:fltk-1.3.4-1/src/fl_rect.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  61:fltk-1.3.4-1/src/fl_rect.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
  62:fltk-1.3.4-1/src/fl_rect.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
  63:fltk-1.3.4-1/src/fl_rect.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
  64:fltk-1.3.4-1/src/fl_rect.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
  65:fltk-1.3.4-1/src/fl_rect.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  66:fltk-1.3.4-1/src/fl_rect.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w
  67:fltk-1.3.4-1/src/fl_rect.cxx ****   50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  68:fltk-1.3.4-1/src/fl_rect.cxx ****   51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  69:fltk-1.3.4-1/src/fl_rect.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
  70:fltk-1.3.4-1/src/fl_rect.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
  71:fltk-1.3.4-1/src/fl_rect.cxx ****   54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  72:fltk-1.3.4-1/src/fl_rect.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  73:fltk-1.3.4-1/src/fl_rect.cxx ****   56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
  74:fltk-1.3.4-1/src/fl_rect.cxx ****   57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
  75:fltk-1.3.4-1/src/fl_rect.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
  76:fltk-1.3.4-1/src/fl_rect.cxx ****   59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
  77:fltk-1.3.4-1/src/fl_rect.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
  78:fltk-1.3.4-1/src/fl_rect.cxx ****   61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
  79:fltk-1.3.4-1/src/fl_rect.cxx ****   62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  80:fltk-1.3.4-1/src/fl_rect.cxx ****   63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
  81:fltk-1.3.4-1/src/fl_rect.cxx ****   64:fltk-1.3.4-1/FL/Fl_Device.H **** 
  82:fltk-1.3.4-1/src/fl_rect.cxx ****   65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  83:fltk-1.3.4-1/src/fl_rect.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
  84:fltk-1.3.4-1/src/fl_rect.cxx ****   67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type in
  85:fltk-1.3.4-1/src/fl_rect.cxx ****   68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  86:fltk-1.3.4-1/src/fl_rect.cxx ****   69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
  87:fltk-1.3.4-1/src/fl_rect.cxx ****   70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  88:fltk-1.3.4-1/src/fl_rect.cxx ****   71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  89:fltk-1.3.4-1/src/fl_rect.cxx ****   72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class 
  90:fltk-1.3.4-1/src/fl_rect.cxx ****   73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/src/fl_rect.cxx ****   74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
  92:fltk-1.3.4-1/src/fl_rect.cxx ****   75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  93:fltk-1.3.4-1/src/fl_rect.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
  94:fltk-1.3.4-1/src/fl_rect.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
  95:fltk-1.3.4-1/src/fl_rect.cxx ****   78:fltk-1.3.4-1/FL/Fl_Device.H ****    
  96:fltk-1.3.4-1/src/fl_rect.cxx ****   79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be c
  97:fltk-1.3.4-1/src/fl_rect.cxx ****   80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
  98:fltk-1.3.4-1/src/fl_rect.cxx ****   81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ..
  99:fltk-1.3.4-1/src/fl_rect.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 100:fltk-1.3.4-1/src/fl_rect.cxx ****   83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 101:fltk-1.3.4-1/src/fl_rect.cxx ****   84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 102:fltk-1.3.4-1/src/fl_rect.cxx ****   19              		.loc 1 84 0
 103:fltk-1.3.4-1/src/fl_rect.cxx ****   20              		.cfi_startproc
 104:fltk-1.3.4-1/src/fl_rect.cxx ****   21              	.LVL0:
 105:fltk-1.3.4-1/src/fl_rect.cxx ****   22              		.loc 1 84 0
 106:fltk-1.3.4-1/src/fl_rect.cxx ****   23 0000 488B0500 		movq	_ZN9Fl_Device8class_idE(%rip), %rax
 107:fltk-1.3.4-1/src/fl_rect.cxx ****   23      000000
 108:fltk-1.3.4-1/src/fl_rect.cxx ****   24 0007 C3       		ret
 109:fltk-1.3.4-1/src/fl_rect.cxx ****   25              		.cfi_endproc
 110:fltk-1.3.4-1/src/fl_rect.cxx ****   26              	.LFE335:
 111:fltk-1.3.4-1/src/fl_rect.cxx ****   28              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
 112:fltk-1.3.4-1/src/fl_rect.cxx ****   29              	.LCOLDE0:
 113:fltk-1.3.4-1/src/fl_rect.cxx ****   30              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
 114:fltk-1.3.4-1/src/fl_rect.cxx ****   31              	.LHOTE0:
 115:fltk-1.3.4-1/src/fl_rect.cxx ****   32              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
 116:fltk-1.3.4-1/src/fl_rect.cxx ****   33              		.align 2
 497              		.loc 2 116 0
 498              		.cfi_startproc
 499              	.LVL23:
 117:fltk-1.3.4-1/src/fl_rect.cxx ****   34              	.LCOLDB1:
 118:fltk-1.3.4-1/src/fl_rect.cxx ****   35              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 119:fltk-1.3.4-1/src/fl_rect.cxx ****   36              	.LHOTB1:
 120:fltk-1.3.4-1/src/fl_rect.cxx ****   37              		.align 2
 121:fltk-1.3.4-1/src/fl_rect.cxx ****   38              		.p2align 4,,15
 122:fltk-1.3.4-1/src/fl_rect.cxx ****   39              		.weak	_ZN9Fl_DeviceD2Ev
 500              		.loc 2 122 0
 501 0000 448B0A   		movl	(%rdx), %r9d
 502 0003 4585C9   		testl	%r9d, %r9d
 503 0006 0F8EB400 		jle	.L31
 503      0000
 504              		.loc 2 122 0 is_stmt 0 discriminator 2
 505 000c 448B11   		movl	(%rcx), %r10d
 506 000f 4585D2   		testl	%r10d, %r10d
 507 0012 0F8EA800 		jle	.L31
 507      0000
 118:fltk-1.3.4-1/src/fl_rect.cxx ****   36              	.LHOTB1:
 508              		.loc 2 118 0 is_stmt 1
 509 0018 8B050000 		movl	fl_line_width_(%rip), %eax
 509      0000
 510 001e 41B80100 		movl	$1, %r8d
 510      0000
 116:fltk-1.3.4-1/src/fl_rect.cxx ****   34              	.LCOLDB1:
 511              		.loc 2 116 0
 512 0024 4154     		pushq	%r12
 513              		.cfi_def_cfa_offset 16
 514              		.cfi_offset 12, -16
 515 0026 55       		pushq	%rbp
 516              		.cfi_def_cfa_offset 24
 517              		.cfi_offset 6, -24
 518 0027 53       		pushq	%rbx
 519              		.cfi_def_cfa_offset 32
 520              		.cfi_offset 3, -32
 123:fltk-1.3.4-1/src/fl_rect.cxx ****   41              	_ZN9Fl_DeviceD2Ev:
 521              		.loc 2 123 0
 522 0028 8B1F     		movl	(%rdi), %ebx
 118:fltk-1.3.4-1/src/fl_rect.cxx ****   36              	.LHOTB1:
 523              		.loc 2 118 0
 524 002a 85C0     		testl	%eax, %eax
 525 002c 440F4F05 		cmovg	fl_line_width_(%rip), %r8d
 525      00000000 
 122:fltk-1.3.4-1/src/fl_rect.cxx ****   41              	_ZN9Fl_DeviceD2Ev:
 526              		.loc 2 122 0
 527 0034 B8010000 		movl	$1, %eax
 527      00
 528              		.loc 2 123 0
 529 0039 418D2C19 		leal	(%r9,%rbx), %ebp
 119:fltk-1.3.4-1/src/fl_rect.cxx ****   37              		.align 2
 530              		.loc 2 119 0
 531 003d 4589C3   		movl	%r8d, %r11d
 532 0040 41F7DB   		negl	%r11d
 533              		.loc 2 123 0
 534 0043 4139EB   		cmpl	%ebp, %r11d
 535 0046 7F6A     		jg	.L26
 120:fltk-1.3.4-1/src/fl_rect.cxx ****   38              		.p2align 4,,15
 536              		.loc 2 120 0 discriminator 2
 537 0048 B8FF7F00 		movl	$32767, %eax
 537      00
 538 004d 4429C0   		subl	%r8d, %eax
 539 0050 4189C0   		movl	%eax, %r8d
 540              		.loc 2 123 0 discriminator 2
 541 0053 8B06     		movl	(%rsi), %eax
 124:fltk-1.3.4-1/src/fl_rect.cxx ****   42              	.LFB337:
 542              		.loc 2 124 0 discriminator 2
 543 0055 4139D8   		cmpl	%ebx, %r8d
 544 0058 410F9CC4 		setl	%r12b
 545 005c 4139C0   		cmpl	%eax, %r8d
 546 005f 400F9CC5 		setl	%bpl
 547 0063 4108EC   		orb	%bpl, %r12b
 548 0066 7568     		jne	.L33
 549 0068 4101C2   		addl	%eax, %r10d
 550 006b 4539D3   		cmpl	%r10d, %r11d
 551 006e 7F60     		jg	.L33
 125:fltk-1.3.4-1/src/fl_rect.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 126:fltk-1.3.4-1/src/fl_rect.cxx ****   86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
 552              		.loc 2 126 0
 553 0070 4139DB   		cmpl	%ebx, %r11d
 554 0073 7E10     		jle	.L27
 555              		.loc 2 126 0 is_stmt 0 discriminator 1
 556 0075 4489D8   		movl	%r11d, %eax
 557 0078 29D8     		subl	%ebx, %eax
 558 007a 4129C1   		subl	%eax, %r9d
 559 007d 44890A   		movl	%r9d, (%rdx)
 560              	.LVL24:
 561 0080 44891F   		movl	%r11d, (%rdi)
 562 0083 8B06     		movl	(%rsi), %eax
 563              	.L27:
 127:fltk-1.3.4-1/src/fl_rect.cxx ****   87:fltk-1.3.4-1/FL/Fl_Device.H ****    
 564              		.loc 2 127 0 is_stmt 1
 565 0085 4139C3   		cmpl	%eax, %r11d
 566 0088 7E0A     		jle	.L28
 567              		.loc 2 127 0 is_stmt 0 discriminator 1
 568 008a 4489DB   		movl	%r11d, %ebx
 569 008d 29C3     		subl	%eax, %ebx
 570 008f 2919     		subl	%ebx, (%rcx)
 571 0091 44891E   		movl	%r11d, (%rsi)
 572              	.L28:
 128:fltk-1.3.4-1/src/fl_rect.cxx ****   88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the de
 573              		.loc 2 128 0 is_stmt 1
 574 0094 8B07     		movl	(%rdi), %eax
 575 0096 8B3A     		movl	(%rdx), %edi
 576              	.LVL25:
 577 0098 01C7     		addl	%eax, %edi
 578 009a 4139F8   		cmpl	%edi, %r8d
 579 009d 7C41     		jl	.L37
 580              	.L29:
 129:fltk-1.3.4-1/src/fl_rect.cxx ****   89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
 581              		.loc 2 129 0
 582 009f 8B16     		movl	(%rsi), %edx
 583              	.LVL26:
 584 00a1 8B31     		movl	(%rcx), %esi
 585              	.LVL27:
 130:fltk-1.3.4-1/src/fl_rect.cxx ****   90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 131:fltk-1.3.4-1/src/fl_rect.cxx ****   91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
 586              		.loc 2 131 0
 587 00a3 31C0     		xorl	%eax, %eax
 129:fltk-1.3.4-1/src/fl_rect.cxx ****   89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
 588              		.loc 2 129 0
 589 00a5 01D6     		addl	%edx, %esi
 590 00a7 4139F0   		cmpl	%esi, %r8d
 591 00aa 7D06     		jge	.L26
 129:fltk-1.3.4-1/src/fl_rect.cxx ****   89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
 592              		.loc 2 129 0 is_stmt 0 discriminator 1
 593 00ac 4129D0   		subl	%edx, %r8d
 594 00af 448901   		movl	%r8d, (%rcx)
 595              	.L26:
 132:fltk-1.3.4-1/src/fl_rect.cxx ****   43              		.loc 1 91 0
 596              		.loc 2 132 0 is_stmt 1
 597 00b2 5B       		popq	%rbx
 598              		.cfi_restore 3
 599              		.cfi_def_cfa_offset 24
 600 00b3 5D       		popq	%rbp
 601              		.cfi_restore 6
 602              		.cfi_def_cfa_offset 16
 603 00b4 415C     		popq	%r12
 604              		.cfi_restore 12
 605              		.cfi_def_cfa_offset 8
 606 00b6 C3       		ret
 607              	.LVL28:
 608 00b7 660F1F84 		.p2align 4,,10
 608      00000000 
 608      00
 609              		.p2align 3
 610              	.L31:
 122:fltk-1.3.4-1/src/fl_rect.cxx ****   41              	_ZN9Fl_DeviceD2Ev:
 611              		.loc 2 122 0
 612 00c0 B8010000 		movl	$1, %eax
 612      00
 613 00c5 C3       		ret
 614 00c6 662E0F1F 		.p2align 4,,10
 614      84000000 
 614      0000
 615              		.p2align 3
 616              	.L33:
 617              		.cfi_def_cfa_offset 32
 618              		.cfi_offset 3, -32
 619              		.cfi_offset 6, -24
 620              		.cfi_offset 12, -16
 621              		.loc 2 132 0
 622 00d0 5B       		popq	%rbx
 623              		.cfi_remember_state
 624              		.cfi_restore 3
 625              		.cfi_def_cfa_offset 24
 122:fltk-1.3.4-1/src/fl_rect.cxx ****   41              	_ZN9Fl_DeviceD2Ev:
 626              		.loc 2 122 0
 627 00d1 B8010000 		movl	$1, %eax
 627      00
 628              		.loc 2 132 0
 629 00d6 5D       		popq	%rbp
 630              		.cfi_restore 6
 631              		.cfi_def_cfa_offset 16
 632 00d7 415C     		popq	%r12
 633              		.cfi_restore 12
 634              		.cfi_def_cfa_offset 8
 635 00d9 C3       		ret
 636              	.LVL29:
 637 00da 660F1F44 		.p2align 4,,10
 637      0000
 638              		.p2align 3
 639              	.L37:
 640              		.cfi_restore_state
 128:fltk-1.3.4-1/src/fl_rect.cxx ****   89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
 641              		.loc 2 128 0 discriminator 1
 642 00e0 4489C3   		movl	%r8d, %ebx
 643 00e3 29C3     		subl	%eax, %ebx
 644 00e5 891A     		movl	%ebx, (%rdx)
 645 00e7 EBB6     		jmp	.L29
 646              		.cfi_endproc
 647              	.LFE492:
 649              		.section	.text.unlikely._ZL13clip_to_shortRiS_S_S_
 650              	.LCOLDE21:
 651              		.section	.text._ZL13clip_to_shortRiS_S_S_
 652              	.LHOTE21:
 653              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4rectEiiii,"ax",@progbits
 654              		.align 2
 655              	.LCOLDB22:
 656              		.section	.text._ZN18Fl_Graphics_Driver4rectEiiii,"ax",@progbits
 657              	.LHOTB22:
 658              		.align 2
 659              		.p2align 4,,15
 660              		.globl	_ZN18Fl_Graphics_Driver4rectEiiii
 662              	_ZN18Fl_Graphics_Driver4rectEiiii:
 663              	.LFB494:
 133:fltk-1.3.4-1/src/fl_rect.cxx ****   44              		.cfi_startproc
 134:fltk-1.3.4-1/src/fl_rect.cxx ****   45              	.LVL1:
 135:fltk-1.3.4-1/src/fl_rect.cxx ****   46 0000 F3C3     		rep ret
 136:fltk-1.3.4-1/src/fl_rect.cxx ****   47              		.cfi_endproc
 137:fltk-1.3.4-1/src/fl_rect.cxx ****   48              	.LFE337:
 138:fltk-1.3.4-1/src/fl_rect.cxx ****   50              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
 139:fltk-1.3.4-1/src/fl_rect.cxx ****   51              	.LCOLDE1:
 140:fltk-1.3.4-1/src/fl_rect.cxx ****   52              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 141:fltk-1.3.4-1/src/fl_rect.cxx ****   53              	.LHOTE1:
 142:fltk-1.3.4-1/src/fl_rect.cxx ****   54              		.weak	_ZN9Fl_DeviceD1Ev
 143:fltk-1.3.4-1/src/fl_rect.cxx ****   55              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   56              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 147:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   60              	.LHOTB2:
 149:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 150:fltk-1.3.4-1/src/fl_rect.cxx ****   62              		.p2align 4,,15
 151:fltk-1.3.4-1/src/fl_rect.cxx ****   63              		.weak	_ZN18Fl_Graphics_Driver4drawEPKciii
 152:fltk-1.3.4-1/src/fl_rect.cxx ****   65              	_ZN18Fl_Graphics_Driver4drawEPKciii:
 153:fltk-1.3.4-1/src/fl_rect.cxx ****   66              	.LFB343:
 154:fltk-1.3.4-1/src/fl_rect.cxx ****   92:fltk-1.3.4-1/FL/Fl_Device.H **** };
 155:fltk-1.3.4-1/src/fl_rect.cxx ****   93:fltk-1.3.4-1/FL/Fl_Device.H **** 
 156:fltk-1.3.4-1/src/fl_rect.cxx ****   94:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_REGION_STACK_SIZE 10
 157:fltk-1.3.4-1/src/fl_rect.cxx ****   95:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_MATRIX_STACK_SIZE 32
 158:fltk-1.3.4-1/src/fl_rect.cxx ****   96:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 664              		.loc 2 158 0
 665              		.cfi_startproc
 666              	.LVL30:
 667 0000 4883EC18 		subq	$24, %rsp
 668              		.cfi_def_cfa_offset 32
 159:fltk-1.3.4-1/src/fl_rect.cxx ****   97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver F
 160:fltk-1.3.4-1/src/fl_rect.cxx ****   98:fltk-1.3.4-1/FL/Fl_Device.H ****  Typically, FLTK applications do not use directly objects fro
 669              		.loc 2 160 0
 670 0004 85C9     		testl	%ecx, %ecx
 158:fltk-1.3.4-1/src/fl_rect.cxx ****   97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver F
 671              		.loc 2 158 0
 672 0006 8974240C 		movl	%esi, 12(%rsp)
 673 000a 89542408 		movl	%edx, 8(%rsp)
 674 000e 894C2404 		movl	%ecx, 4(%rsp)
 675 0012 44890424 		movl	%r8d, (%rsp)
 676              		.loc 2 160 0
 677 0016 7E20     		jle	.L38
 678 0018 4585C0   		testl	%r8d, %r8d
 679 001b 7E1B     		jle	.L38
 161:fltk-1.3.4-1/src/fl_rect.cxx ****   99:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations (e.g., fl_rectf()) that operate on the cu
 162:fltk-1.3.4-1/src/fl_rect.cxx ****  100:fltk-1.3.4-1/FL/Fl_Device.H ****  Drawing operations are functionally presented in \ref drawin
 680              		.loc 2 162 0
 681 001d 488D5424 		leaq	4(%rsp), %rdx
 681      04
 682              	.LVL31:
 683 0022 488D7424 		leaq	8(%rsp), %rsi
 683      08
 684              	.LVL32:
 685 0027 488D7C24 		leaq	12(%rsp), %rdi
 685      0C
 686              	.LVL33:
 687 002c 4889E1   		movq	%rsp, %rcx
 688              	.LVL34:
 689 002f E8000000 		call	_ZL13clip_to_shortRiS_S_S_
 689      00
 690              	.LVL35:
 691 0034 85C0     		testl	%eax, %eax
 692 0036 7408     		je	.L44
 693              	.L38:
 163:fltk-1.3.4-1/src/fl_rect.cxx ****  101:fltk-1.3.4-1/FL/Fl_Device.H ****  in the \ref fl_drawings and \ref fl_attributes modules. The 
 164:fltk-1.3.4-1/src/fl_rect.cxx ****  102:fltk-1.3.4-1/FL/Fl_Device.H ****  gives at any time the graphics driver used by all drawing op
 165:fltk-1.3.4-1/src/fl_rect.cxx ****  103:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations are directed to another drawing surface b
 166:fltk-1.3.4-1/src/fl_rect.cxx ****  104:fltk-1.3.4-1/FL/Fl_Device.H ****  
 167:fltk-1.3.4-1/src/fl_rect.cxx ****  105:fltk-1.3.4-1/FL/Fl_Device.H ****  \p The Fl_Graphics_Driver class is of interest if one wants 
 168:fltk-1.3.4-1/src/fl_rect.cxx ****  106:fltk-1.3.4-1/FL/Fl_Device.H ****  An example would be to draw to a PDF file. This would involv
 169:fltk-1.3.4-1/src/fl_rect.cxx ****  107:fltk-1.3.4-1/FL/Fl_Device.H ****  class. This new class should implement all virtual methods o
 170:fltk-1.3.4-1/src/fl_rect.cxx ****  108:fltk-1.3.4-1/FL/Fl_Device.H ****  to support all FLTK drawing functions.
 171:fltk-1.3.4-1/src/fl_rect.cxx ****  109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 172:fltk-1.3.4-1/src/fl_rect.cxx ****  110:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Graphics_Driver : public Fl_Device {
 173:fltk-1.3.4-1/src/fl_rect.cxx ****  111:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 174:fltk-1.3.4-1/src/fl_rect.cxx ****  112:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A 2D coordinate transformation matrix
 175:fltk-1.3.4-1/src/fl_rect.cxx ****  113:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 176:fltk-1.3.4-1/src/fl_rect.cxx ****  114:fltk-1.3.4-1/FL/Fl_Device.H ****   struct matrix {double a, b, c, d, x, y;};
 177:fltk-1.3.4-1/src/fl_rect.cxx ****  115:fltk-1.3.4-1/FL/Fl_Device.H **** private:
 178:fltk-1.3.4-1/src/fl_rect.cxx ****  116:fltk-1.3.4-1/FL/Fl_Device.H ****   static const matrix m0;
 694              		.loc 2 178 0
 695 0038 4883C418 		addq	$24, %rsp
 696              		.cfi_remember_state
 697              		.cfi_def_cfa_offset 8
 698              	.LVL36:
 699 003c C3       		ret
 700              	.LVL37:
 701 003d 0F1F00   		.p2align 4,,10
 702              		.p2align 3
 703              	.L44:
 704              		.cfi_restore_state
 163:fltk-1.3.4-1/src/fl_rect.cxx ****  101:fltk-1.3.4-1/FL/Fl_Device.H ****  in the \ref fl_drawings and \ref fl_attributes modules. The 
 705              		.loc 2 163 0
 706 0040 4883EC08 		subq	$8, %rsp
 707              		.cfi_def_cfa_offset 40
 708              	.LVL38:
 709 0044 488B1500 		movq	fl_gc(%rip), %rdx
 709      000000
 710 004b 488B3500 		movq	fl_window(%rip), %rsi
 710      000000
 711 0052 8B442408 		movl	8(%rsp), %eax
 712 0056 488B3D00 		movq	fl_display(%rip), %rdi
 712      000000
 713 005d 83E801   		subl	$1, %eax
 714 0060 50       		pushq	%rax
 715              		.cfi_def_cfa_offset 48
 716 0061 8B442414 		movl	20(%rsp), %eax
 717 0065 448B4424 		movl	24(%rsp), %r8d
 717      18
 718 006a 8B4C241C 		movl	28(%rsp), %ecx
 719 006e 448D48FF 		leal	-1(%rax), %r9d
 720 0072 E8000000 		call	XDrawRectangle
 720      00
 721              	.LVL39:
 722 0077 58       		popq	%rax
 723              		.cfi_def_cfa_offset 40
 724 0078 5A       		popq	%rdx
 725              		.cfi_def_cfa_offset 32
 726              	.LVL40:
 727              		.loc 2 178 0
 728 0079 4883C418 		addq	$24, %rsp
 729              		.cfi_def_cfa_offset 8
 730              	.LVL41:
 731 007d C3       		ret
 732              		.cfi_endproc
 733              	.LFE494:
 735              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4rectEiiii
 736              	.LCOLDE22:
 737              		.section	.text._ZN18Fl_Graphics_Driver4rectEiiii
 738              	.LHOTE22:
 739              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5rectfEiiii,"ax",@progbits
 740              		.align 2
 741              	.LCOLDB23:
 742              		.section	.text._ZN18Fl_Graphics_Driver5rectfEiiii,"ax",@progbits
 743              	.LHOTB23:
 744              		.align 2
 745              		.p2align 4,,15
 746              		.globl	_ZN18Fl_Graphics_Driver5rectfEiiii
 748              	_ZN18Fl_Graphics_Driver5rectfEiiii:
 749              	.LFB495:
 179:fltk-1.3.4-1/src/fl_rect.cxx ****  117:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font_; // current font
 180:fltk-1.3.4-1/src/fl_rect.cxx ****  118:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size_; // current font size
 750              		.loc 2 180 0
 751              		.cfi_startproc
 752              	.LVL42:
 753 0000 4883EC18 		subq	$24, %rsp
 754              		.cfi_def_cfa_offset 32
 181:fltk-1.3.4-1/src/fl_rect.cxx ****  119:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color_; // current color
 755              		.loc 2 181 0
 756 0004 85C9     		testl	%ecx, %ecx
 180:fltk-1.3.4-1/src/fl_rect.cxx ****  119:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color_; // current color
 757              		.loc 2 180 0
 758 0006 8974240C 		movl	%esi, 12(%rsp)
 759 000a 89542408 		movl	%edx, 8(%rsp)
 760 000e 894C2404 		movl	%ecx, 4(%rsp)
 761 0012 44890424 		movl	%r8d, (%rsp)
 762              		.loc 2 181 0
 763 0016 7E20     		jle	.L45
 764 0018 4585C0   		testl	%r8d, %r8d
 765 001b 7E1B     		jle	.L45
 182:fltk-1.3.4-1/src/fl_rect.cxx ****  120:fltk-1.3.4-1/FL/Fl_Device.H ****   int sptr;
 183:fltk-1.3.4-1/src/fl_rect.cxx ****  121:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int matrix_stack_size = FL_MATRIX_STACK_SIZE;
 766              		.loc 2 183 0
 767 001d 488D5424 		leaq	4(%rsp), %rdx
 767      04
 768              	.LVL43:
 769 0022 488D7424 		leaq	8(%rsp), %rsi
 769      08
 770              	.LVL44:
 771 0027 488D7C24 		leaq	12(%rsp), %rdi
 771      0C
 772              	.LVL45:
 773 002c 4889E1   		movq	%rsp, %rcx
 774              	.LVL46:
 775 002f E8000000 		call	_ZL13clip_to_shortRiS_S_S_
 775      00
 776              	.LVL47:
 777 0034 85C0     		testl	%eax, %eax
 778 0036 7408     		je	.L51
 779              	.L45:
 184:fltk-1.3.4-1/src/fl_rect.cxx ****  122:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix stack[FL_MATRIX_STACK_SIZE];
 185:fltk-1.3.4-1/src/fl_rect.cxx ****  123:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix m;
 186:fltk-1.3.4-1/src/fl_rect.cxx ****  124:fltk-1.3.4-1/FL/Fl_Device.H ****   int n, p_size, gap_;
 187:fltk-1.3.4-1/src/fl_rect.cxx ****  125:fltk-1.3.4-1/FL/Fl_Device.H ****   XPOINT *p;
 188:fltk-1.3.4-1/src/fl_rect.cxx ****  126:fltk-1.3.4-1/FL/Fl_Device.H ****   int what;
 189:fltk-1.3.4-1/src/fl_rect.cxx ****  127:fltk-1.3.4-1/FL/Fl_Device.H ****   int fl_clip_state_number;
 190:fltk-1.3.4-1/src/fl_rect.cxx ****  128:fltk-1.3.4-1/FL/Fl_Device.H ****   int rstackptr;
 191:fltk-1.3.4-1/src/fl_rect.cxx ****  129:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int region_stack_max = FL_REGION_STACK_SIZE - 
 192:fltk-1.3.4-1/src/fl_rect.cxx ****  130:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region rstack[FL_REGION_STACK_SIZE];
 193:fltk-1.3.4-1/src/fl_rect.cxx ****  131:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 194:fltk-1.3.4-1/src/fl_rect.cxx ****  132:fltk-1.3.4-1/FL/Fl_Device.H ****   int numcount;
 195:fltk-1.3.4-1/src/fl_rect.cxx ****  133:fltk-1.3.4-1/FL/Fl_Device.H ****   int counts[20];
 196:fltk-1.3.4-1/src/fl_rect.cxx ****  134:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 780              		.loc 2 196 0
 781 0038 4883C418 		addq	$24, %rsp
 782              		.cfi_remember_state
 783              		.cfi_def_cfa_offset 8
 784              	.LVL48:
 785 003c C3       		ret
 786              	.LVL49:
 787 003d 0F1F00   		.p2align 4,,10
 788              		.p2align 3
 789              	.L51:
 790              		.cfi_restore_state
 184:fltk-1.3.4-1/src/fl_rect.cxx ****  122:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix stack[FL_MATRIX_STACK_SIZE];
 791              		.loc 2 184 0
 792 0040 4883EC08 		subq	$8, %rsp
 793              		.cfi_def_cfa_offset 40
 794              	.LVL50:
 795 0044 488B1500 		movq	fl_gc(%rip), %rdx
 795      000000
 796 004b 488B3500 		movq	fl_window(%rip), %rsi
 796      000000
 797 0052 8B442408 		movl	8(%rsp), %eax
 798 0056 488B3D00 		movq	fl_display(%rip), %rdi
 798      000000
 799 005d 50       		pushq	%rax
 800              		.cfi_def_cfa_offset 48
 801 005e 448B4C24 		movl	20(%rsp), %r9d
 801      14
 802 0063 448B4424 		movl	24(%rsp), %r8d
 802      18
 803 0068 8B4C241C 		movl	28(%rsp), %ecx
 804 006c E8000000 		call	XFillRectangle
 804      00
 805              	.LVL51:
 806 0071 58       		popq	%rax
 807              		.cfi_def_cfa_offset 40
 808 0072 5A       		popq	%rdx
 809              		.cfi_def_cfa_offset 32
 810              	.LVL52:
 811              		.loc 2 196 0
 812 0073 4883C418 		addq	$24, %rsp
 813              		.cfi_def_cfa_offset 8
 814              	.LVL53:
 815 0077 C3       		ret
 816              		.cfi_endproc
 817              	.LFE495:
 819              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5rectfEiiii
 820              	.LCOLDE23:
 821              		.section	.text._ZN18Fl_Graphics_Driver5rectfEiiii
 822              	.LHOTE23:
 823              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6xylineEiii,"ax",@progbits
 824              		.align 2
 825              	.LCOLDB24:
 826              		.section	.text._ZN18Fl_Graphics_Driver6xylineEiii,"ax",@progbits
 827              	.LHOTB24:
 828              		.align 2
 829              		.p2align 4,,15
 830              		.globl	_ZN18Fl_Graphics_Driver6xylineEiii
 832              	_ZN18Fl_Graphics_Driver6xylineEiii:
 833              	.LFB496:
 197:fltk-1.3.4-1/src/fl_rect.cxx ****  135:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font_Descriptor *font_descriptor_;
 198:fltk-1.3.4-1/src/fl_rect.cxx ****  136:fltk-1.3.4-1/FL/Fl_Device.H ****   void transformed_vertex0(COORD_T x, COORD_T y);
 834              		.loc 2 198 0
 835              		.cfi_startproc
 836              	.LVL54:
 837 0000 4883EC08 		subq	$8, %rsp
 838              		.cfi_def_cfa_offset 16
 839              	.LBB86:
 840              	.LBB87:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 841              		.loc 2 144 0
 842 0004 8B3D0000 		movl	fl_line_width_(%rip), %edi
 842      0000
 843              	.LVL55:
 844 000a 41B80100 		movl	$1, %r8d
 844      0000
 845 0010 85FF     		testl	%edi, %edi
 846 0012 440F4F05 		cmovg	fl_line_width_(%rip), %r8d
 846      00000000 
 847              	.LVL56:
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 848              		.loc 2 146 0
 849 001a BFFF7F00 		movl	$32767, %edi
 849      00
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 850              		.loc 2 145 0
 851 001f 4489C0   		movl	%r8d, %eax
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 852              		.loc 2 146 0
 853 0022 4429C7   		subl	%r8d, %edi
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 854              		.loc 2 145 0
 855 0025 F7D8     		negl	%eax
 856              	.LVL57:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 857              		.loc 2 148 0
 858 0027 39C2     		cmpl	%eax, %edx
 859 0029 7C55     		jl	.L53
 860 002b 39FA     		cmpl	%edi, %edx
 861 002d 4189FA   		movl	%edi, %r10d
 862 0030 440F4ED2 		cmovle	%edx, %r10d
 863              	.LVL58:
 864              	.LBE87:
 865              	.LBE86:
 866              	.LBB88:
 867              	.LBB89:
 868 0034 39C1     		cmpl	%eax, %ecx
 869 0036 7C57     		jl	.L65
 870 0038 39F9     		cmpl	%edi, %ecx
 871 003a 0F4FCF   		cmovg	%edi, %ecx
 872              	.LVL59:
 873 003d 4189C9   		movl	%ecx, %r9d
 874              	.LVL60:
 875              	.L58:
 876 0040 39FA     		cmpl	%edi, %edx
 877 0042 0F4FD7   		cmovg	%edi, %edx
 878              	.LVL61:
 879 0045 4189D0   		movl	%edx, %r8d
 880              	.LVL62:
 881              	.L56:
 882              	.LBE89:
 883              	.LBE88:
 884              	.LBB91:
 885              	.LBB92:
 886 0048 39C6     		cmpl	%eax, %esi
 887 004a 89C1     		movl	%eax, %ecx
 888 004c 7C07     		jl	.L55
 889 004e 39FE     		cmpl	%edi, %esi
 890 0050 0F4EFE   		cmovle	%esi, %edi
 891              	.LVL63:
 892 0053 89F9     		movl	%edi, %ecx
 893              	.L55:
 894              	.LVL64:
 895              	.LBE92:
 896              	.LBE91:
 199:fltk-1.3.4-1/src/fl_rect.cxx ****  137:fltk-1.3.4-1/FL/Fl_Device.H ****   void fixloop();
 200:fltk-1.3.4-1/src/fl_rect.cxx ****  138:fltk-1.3.4-1/FL/Fl_Device.H ****   
 897              		.loc 2 200 0
 898 0055 4883EC08 		subq	$8, %rsp
 899              		.cfi_def_cfa_offset 24
 900 0059 488B1500 		movq	fl_gc(%rip), %rdx
 900      000000
 901 0060 488B3500 		movq	fl_window(%rip), %rsi
 901      000000
 902              	.LVL65:
 903 0067 488B3D00 		movq	fl_display(%rip), %rdi
 903      000000
 904 006e 4152     		pushq	%r10
 905              		.cfi_def_cfa_offset 32
 906 0070 E8000000 		call	XDrawLine
 906      00
 907              	.LVL66:
 201:fltk-1.3.4-1/src/fl_rect.cxx ****  139:fltk-1.3.4-1/FL/Fl_Device.H **** protected:
 202:fltk-1.3.4-1/src/fl_rect.cxx ****  140:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef FL_DOXYGEN
 203:fltk-1.3.4-1/src/fl_rect.cxx ****  141:fltk-1.3.4-1/FL/Fl_Device.H ****   enum {LINE, LOOP, POLYGON, POINT_};
 204:fltk-1.3.4-1/src/fl_rect.cxx ****  142:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_no() { return n; }
 205:fltk-1.3.4-1/src/fl_rect.cxx ****  143:fltk-1.3.4-1/FL/Fl_Device.H ****   inline XPOINT *vertices() {return p;}
 206:fltk-1.3.4-1/src/fl_rect.cxx ****  144:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_kind() {return what;}
 207:fltk-1.3.4-1/src/fl_rect.cxx ****  145:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 208:fltk-1.3.4-1/src/fl_rect.cxx ****  146:fltk-1.3.4-1/FL/Fl_Device.H **** /*  ** \brief red color for background and/or mixing if devic
 209:fltk-1.3.4-1/src/fl_rect.cxx ****  147:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_r_; 
 210:fltk-1.3.4-1/src/fl_rect.cxx ****  148:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief green color for background and/or mixing if devic
 211:fltk-1.3.4-1/src/fl_rect.cxx ****  149:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_g_; 
 212:fltk-1.3.4-1/src/fl_rect.cxx ****  150:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief blue color for background and/or mixing if device
 213:fltk-1.3.4-1/src/fl_rect.cxx ****  151:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_b_; */
 214:fltk-1.3.4-1/src/fl_rect.cxx ****  152:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Pixmap;
 215:fltk-1.3.4-1/src/fl_rect.cxx ****  153:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Bitmap;
 216:fltk-1.3.4-1/src/fl_rect.cxx ****  154:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_RGB_Image;
 217:fltk-1.3.4-1/src/fl_rect.cxx ****  155:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rect(int x, int y, int w, int h);
 218:fltk-1.3.4-1/src/fl_rect.cxx ****  156:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rectf(int x, int y, int w, int h);
 219:fltk-1.3.4-1/src/fl_rect.cxx ****  157:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line_style(int style, int width, char* dashe
 220:fltk-1.3.4-1/src/fl_rect.cxx ****  158:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1);
 908              		.loc 2 220 0
 909 0075 58       		popq	%rax
 910              		.cfi_def_cfa_offset 24
 911 0076 5A       		popq	%rdx
 912              		.cfi_def_cfa_offset 16
 913 0077 4883C408 		addq	$8, %rsp
 914              		.cfi_remember_state
 915              		.cfi_def_cfa_offset 8
 916 007b C3       		ret
 917              	.LVL67:
 918 007c 0F1F4000 		.p2align 4,,10
 919              		.p2align 3
 920              	.L53:
 921              		.cfi_restore_state
 922              	.LBB93:
 923              	.LBB90:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 924              		.loc 2 148 0
 925 0080 39C1     		cmpl	%eax, %ecx
 926 0082 7D10     		jge	.L66
 927 0084 4189C2   		movl	%eax, %r10d
 928 0087 4189C1   		movl	%eax, %r9d
 929 008a 4189C0   		movl	%eax, %r8d
 930              	.LVL68:
 931 008d EBB9     		jmp	.L56
 932              	.LVL69:
 933              	.L65:
 934 008f 4189C1   		movl	%eax, %r9d
 935 0092 EBAC     		jmp	.L58
 936              	.L66:
 937 0094 39F9     		cmpl	%edi, %ecx
 938 0096 4189C2   		movl	%eax, %r10d
 939 0099 4189C0   		movl	%eax, %r8d
 940              	.LVL70:
 941 009c 0F4FCF   		cmovg	%edi, %ecx
 942              	.LVL71:
 943 009f 4189C9   		movl	%ecx, %r9d
 944              	.LVL72:
 945 00a2 EBA4     		jmp	.L56
 946              	.LBE90:
 947              	.LBE93:
 948              		.cfi_endproc
 949              	.LFE496:
 951              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6xylineEiii
 952              	.LCOLDE24:
 953              		.section	.text._ZN18Fl_Graphics_Driver6xylineEiii
 954              	.LHOTE24:
 955              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6yxlineEiii,"ax",@progbits
 956              		.align 2
 957              	.LCOLDB25:
 958              		.section	.text._ZN18Fl_Graphics_Driver6yxlineEiii,"ax",@progbits
 959              	.LHOTB25:
 960              		.align 2
 961              		.p2align 4,,15
 962              		.globl	_ZN18Fl_Graphics_Driver6yxlineEiii
 964              	_ZN18Fl_Graphics_Driver6yxlineEiii:
 965              	.LFB499:
 221:fltk-1.3.4-1/src/fl_rect.cxx ****  159:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2);
 222:fltk-1.3.4-1/src/fl_rect.cxx ****  160:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2, int x3)
 223:fltk-1.3.4-1/src/fl_rect.cxx ****  161:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1);
 224:fltk-1.3.4-1/src/fl_rect.cxx ****  162:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2);
 225:fltk-1.3.4-1/src/fl_rect.cxx ****  163:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2, int y3)
 226:fltk-1.3.4-1/src/fl_rect.cxx ****  164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 227:fltk-1.3.4-1/src/fl_rect.cxx ****  165:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1, int x2, i
 228:fltk-1.3.4-1/src/fl_rect.cxx ****  166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 229:fltk-1.3.4-1/src/fl_rect.cxx ****  167:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 230:fltk-1.3.4-1/src/fl_rect.cxx ****  168:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, float x, float 
 231:fltk-1.3.4-1/src/fl_rect.cxx ****  169:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 232:fltk-1.3.4-1/src/fl_rect.cxx ****  170:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(int angle, const char *str, int n, int 
 233:fltk-1.3.4-1/src/fl_rect.cxx ****  171:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rtl_draw(const char *str, int n, int x, int 
 234:fltk-1.3.4-1/src/fl_rect.cxx ****  172:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_font(Fl_Font face, Fl_Fontsize size);
 235:fltk-1.3.4-1/src/fl_rect.cxx ****  173:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(Fl_Color c);
 236:fltk-1.3.4-1/src/fl_rect.cxx ****  174:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(uchar r, uchar g, uchar b);
 237:fltk-1.3.4-1/src/fl_rect.cxx ****  175:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_point(int x, int y);
 238:fltk-1.3.4-1/src/fl_rect.cxx ****  176:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2,
 239:fltk-1.3.4-1/src/fl_rect.cxx ****  177:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2,
 240:fltk-1.3.4-1/src/fl_rect.cxx ****  178:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int 
 241:fltk-1.3.4-1/src/fl_rect.cxx ****  179:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int 
 242:fltk-1.3.4-1/src/fl_rect.cxx ****  180:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_points();
 243:fltk-1.3.4-1/src/fl_rect.cxx ****  181:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_line();
 244:fltk-1.3.4-1/src/fl_rect.cxx ****  182:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_loop();
 245:fltk-1.3.4-1/src/fl_rect.cxx ****  183:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_polygon();
 246:fltk-1.3.4-1/src/fl_rect.cxx ****  184:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_vertex(double x, double y);
 247:fltk-1.3.4-1/src/fl_rect.cxx ****  185:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_curve(double X0, double Y0, double X1, doubl
 248:fltk-1.3.4-1/src/fl_rect.cxx ****  186:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_circle(double x, double y, double r);
 249:fltk-1.3.4-1/src/fl_rect.cxx ****  187:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(double x, double y, double r, double sta
 250:fltk-1.3.4-1/src/fl_rect.cxx ****  188:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(int x, int y, int w, int h, double a1, d
 251:fltk-1.3.4-1/src/fl_rect.cxx ****  189:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pie(int x, int y, int w, int h, double a1, d
 252:fltk-1.3.4-1/src/fl_rect.cxx ****  190:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_points();
 253:fltk-1.3.4-1/src/fl_rect.cxx ****  191:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_line();
 254:fltk-1.3.4-1/src/fl_rect.cxx ****  192:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_loop();
 255:fltk-1.3.4-1/src/fl_rect.cxx ****  193:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_polygon();
 256:fltk-1.3.4-1/src/fl_rect.cxx ****  194:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_transformed_vertex(double xf, double yf);
 257:fltk-1.3.4-1/src/fl_rect.cxx ****  195:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_clip(int x, int y, int w, int h);
 258:fltk-1.3.4-1/src/fl_rect.cxx ****  196:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_clip_box(int x, int y, int w, int h, int &X, 
 259:fltk-1.3.4-1/src/fl_rect.cxx ****  197:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_not_clipped(int x, int y, int w, int h);
 260:fltk-1.3.4-1/src/fl_rect.cxx ****  198:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_no_clip();
 261:fltk-1.3.4-1/src/fl_rect.cxx ****  199:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_clip();
 262:fltk-1.3.4-1/src/fl_rect.cxx ****  200:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_complex_polygon();
 263:fltk-1.3.4-1/src/fl_rect.cxx ****  201:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_gap();
 264:fltk-1.3.4-1/src/fl_rect.cxx ****  202:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_complex_polygon();
 265:fltk-1.3.4-1/src/fl_rect.cxx ****  203:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_matrix();
 266:fltk-1.3.4-1/src/fl_rect.cxx ****  204:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_matrix();
 267:fltk-1.3.4-1/src/fl_rect.cxx ****  205:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_mult_matrix(double a, double b, double c, do
 268:fltk-1.3.4-1/src/fl_rect.cxx ****  206:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x, double y);
 269:fltk-1.3.4-1/src/fl_rect.cxx ****  207:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x);
 270:fltk-1.3.4-1/src/fl_rect.cxx ****  208:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_translate(double x, double y);
 271:fltk-1.3.4-1/src/fl_rect.cxx ****  209:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rotate(double d);
 272:fltk-1.3.4-1/src/fl_rect.cxx ****  210:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_x(double x, double y);
 273:fltk-1.3.4-1/src/fl_rect.cxx ****  211:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_y(double x, double y);
 274:fltk-1.3.4-1/src/fl_rect.cxx ****  212:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dx(double x, double y);
 275:fltk-1.3.4-1/src/fl_rect.cxx ****  213:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dy(double x, double y);
 276:fltk-1.3.4-1/src/fl_rect.cxx ****  214:fltk-1.3.4-1/FL/Fl_Device.H ****   friend Fl_Region fl_clip_region();
 277:fltk-1.3.4-1/src/fl_rect.cxx ****  215:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_clip_region(Fl_Region r);
 278:fltk-1.3.4-1/src/fl_rect.cxx ****  216:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_restore_clip();
 279:fltk-1.3.4-1/src/fl_rect.cxx ****  217:fltk-1.3.4-1/FL/Fl_Device.H ****   
 280:fltk-1.3.4-1/src/fl_rect.cxx ****  218:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(const uchar* buf, int X,int Y,int
 281:fltk-1.3.4-1/src/fl_rect.cxx ****  219:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image_mono(const uchar* buf, int X,int 
 966              		.loc 2 281 0
 967              		.cfi_startproc
 968              	.LVL73:
 969 0000 4883EC08 		subq	$8, %rsp
 970              		.cfi_def_cfa_offset 16
 971              	.LBB94:
 972              	.LBB95:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 973              		.loc 2 144 0
 974 0004 8B3D0000 		movl	fl_line_width_(%rip), %edi
 974      0000
 975              	.LVL74:
 976 000a 41B80100 		movl	$1, %r8d
 976      0000
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 977              		.loc 2 146 0
 978 0010 B8FF7F00 		movl	$32767, %eax
 978      00
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 979              		.loc 2 144 0
 980 0015 85FF     		testl	%edi, %edi
 981 0017 440F4F05 		cmovg	fl_line_width_(%rip), %r8d
 981      00000000 
 982              	.LVL75:
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 983              		.loc 2 145 0
 984 001f 4489C7   		movl	%r8d, %edi
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 985              		.loc 2 146 0
 986 0022 4429C0   		subl	%r8d, %eax
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 987              		.loc 2 145 0
 988 0025 F7DF     		negl	%edi
 989              	.LVL76:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 990              		.loc 2 148 0
 991 0027 39F9     		cmpl	%edi, %ecx
 992 0029 4189FA   		movl	%edi, %r10d
 993 002c 7C08     		jl	.L68
 994 002e 39C1     		cmpl	%eax, %ecx
 995 0030 0F4FC8   		cmovg	%eax, %ecx
 996              	.LVL77:
 997 0033 4189CA   		movl	%ecx, %r10d
 998              	.L68:
 999              	.LVL78:
 1000              	.LBE95:
 1001              	.LBE94:
 1002              	.LBB96:
 1003              	.LBB97:
 1004 0036 39FE     		cmpl	%edi, %esi
 1005 0038 7C4E     		jl	.L69
 1006 003a 39C6     		cmpl	%eax, %esi
 1007 003c 4189C1   		movl	%eax, %r9d
 1008              	.LBE97:
 1009              	.LBE96:
 1010              	.LBB98:
 1011              	.LBB99:
 1012 003f 4189F8   		movl	%edi, %r8d
 1013              	.LVL79:
 1014 0042 440F4ECE 		cmovle	%esi, %r9d
 1015              	.LVL80:
 1016 0046 39FA     		cmpl	%edi, %edx
 1017 0048 4489C9   		movl	%r9d, %ecx
 1018 004b 7C0F     		jl	.L71
 1019 004d 39C2     		cmpl	%eax, %edx
 1020 004f 0F4FD0   		cmovg	%eax, %edx
 1021              	.LVL81:
 1022 0052 39C6     		cmpl	%eax, %esi
 1023 0054 0F4EC6   		cmovle	%esi, %eax
 1024              	.LVL82:
 1025 0057 4189D0   		movl	%edx, %r8d
 1026              	.LVL83:
 1027 005a 89C1     		movl	%eax, %ecx
 1028              	.LVL84:
 1029              	.L71:
 1030              	.LBE99:
 1031              	.LBE98:
 282:fltk-1.3.4-1/src/fl_rect.cxx ****  220:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(Fl_Draw_Image_Cb cb, void* data, 
 283:fltk-1.3.4-1/src/fl_rect.cxx ****  221:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_draw_image_mono(Fl_Draw_Image_Cb c
 1032              		.loc 2 283 0
 1033 005c 4883EC08 		subq	$8, %rsp
 1034              		.cfi_def_cfa_offset 24
 1035 0060 488B1500 		movq	fl_gc(%rip), %rdx
 1035      000000
 1036 0067 488B3500 		movq	fl_window(%rip), %rsi
 1036      000000
 1037              	.LVL85:
 1038 006e 488B3D00 		movq	fl_display(%rip), %rdi
 1038      000000
 1039              	.LVL86:
 1040 0075 4152     		pushq	%r10
 1041              		.cfi_def_cfa_offset 32
 1042 0077 E8000000 		call	XDrawLine
 1042      00
 1043              	.LVL87:
 284:fltk-1.3.4-1/src/fl_rect.cxx ****  222:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void gl_start();
 285:fltk-1.3.4-1/src/fl_rect.cxx ****  223:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_copy_offscreen(int x, int y, int w
 286:fltk-1.3.4-1/src/fl_rect.cxx ****  224:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix *fl_matrix; /**< Points to the current coordinate tr
 287:fltk-1.3.4-1/src/fl_rect.cxx ****  225:fltk-1.3.4-1/FL/Fl_Device.H **** 
 288:fltk-1.3.4-1/src/fl_rect.cxx ****  226:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The constructor. */
 289:fltk-1.3.4-1/src/fl_rect.cxx ****  227:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Graphics_Driver();
 290:fltk-1.3.4-1/src/fl_rect.cxx ****  228:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rect(int x, int y, int w, int h). */
 291:fltk-1.3.4-1/src/fl_rect.cxx ****  229:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rect(int x, int y, int w, int h);
 292:fltk-1.3.4-1/src/fl_rect.cxx ****  230:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rectf(int x, int y, int w, int h). */
 293:fltk-1.3.4-1/src/fl_rect.cxx ****  231:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rectf(int x, int y, int w, int h);
 294:fltk-1.3.4-1/src/fl_rect.cxx ****  232:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line_style(int style, int width, char* da
 295:fltk-1.3.4-1/src/fl_rect.cxx ****  233:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line_style(int style, int width=0, char* dashe
 296:fltk-1.3.4-1/src/fl_rect.cxx ****  234:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1). */
 297:fltk-1.3.4-1/src/fl_rect.cxx ****  235:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1);
 298:fltk-1.3.4-1/src/fl_rect.cxx ****  236:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2). */
 299:fltk-1.3.4-1/src/fl_rect.cxx ****  237:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2);
 300:fltk-1.3.4-1/src/fl_rect.cxx ****  238:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2, int 
 301:fltk-1.3.4-1/src/fl_rect.cxx ****  239:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2, int x3);
 1044              		.loc 2 301 0
 1045 007c 58       		popq	%rax
 1046              		.cfi_def_cfa_offset 24
 1047 007d 5A       		popq	%rdx
 1048              		.cfi_def_cfa_offset 16
 1049 007e 4883C408 		addq	$8, %rsp
 1050              		.cfi_remember_state
 1051              		.cfi_def_cfa_offset 8
 1052 0082 C3       		ret
 1053              	.LVL88:
 1054              		.p2align 4,,10
 1055 0083 0F1F4400 		.p2align 3
 1055      00
 1056              	.L69:
 1057              		.cfi_restore_state
 1058              	.LBB101:
 1059              	.LBB100:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1060              		.loc 2 148 0
 1061 0088 39FA     		cmpl	%edi, %edx
 1062 008a 7D14     		jge	.L81
 1063 008c 4189F9   		movl	%edi, %r9d
 1064 008f 4189F8   		movl	%edi, %r8d
 1065              	.LVL89:
 1066 0092 89F9     		movl	%edi, %ecx
 1067 0094 EBC6     		jmp	.L71
 1068              	.LVL90:
 1069 0096 662E0F1F 		.p2align 4,,10
 1069      84000000 
 1069      0000
 1070              		.p2align 3
 1071              	.L81:
 1072 00a0 39C2     		cmpl	%eax, %edx
 1073 00a2 4189F9   		movl	%edi, %r9d
 1074 00a5 89F9     		movl	%edi, %ecx
 1075 00a7 0F4EC2   		cmovle	%edx, %eax
 1076              	.LVL91:
 1077 00aa 4189C0   		movl	%eax, %r8d
 1078              	.LVL92:
 1079 00ad EBAD     		jmp	.L71
 1080              	.LBE100:
 1081              	.LBE101:
 1082              		.cfi_endproc
 1083              	.LFE499:
 1085              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6yxlineEiii
 1086              	.LCOLDE25:
 1087              		.section	.text._ZN18Fl_Graphics_Driver6yxlineEiii
 1088              	.LHOTE25:
 1089              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4lineEiiii,"ax",@progbits
 1090              		.align 2
 1091              	.LCOLDB26:
 1092              		.section	.text._ZN18Fl_Graphics_Driver4lineEiiii,"ax",@progbits
 1093              	.LHOTB26:
 1094              		.align 2
 1095              		.p2align 4,,15
 1096              		.globl	_ZN18Fl_Graphics_Driver4lineEiiii
 1098              	_ZN18Fl_Graphics_Driver4lineEiiii:
 1099              	.LFB502:
 302:fltk-1.3.4-1/src/fl_rect.cxx ****  240:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1). */
 303:fltk-1.3.4-1/src/fl_rect.cxx ****  241:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1);
 304:fltk-1.3.4-1/src/fl_rect.cxx ****  242:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2). */
 305:fltk-1.3.4-1/src/fl_rect.cxx ****  243:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2);
 306:fltk-1.3.4-1/src/fl_rect.cxx ****  244:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2, int 
 307:fltk-1.3.4-1/src/fl_rect.cxx ****  245:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2, int y3);
 308:fltk-1.3.4-1/src/fl_rect.cxx ****  246:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1). */
 309:fltk-1.3.4-1/src/fl_rect.cxx ****  247:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1);
 310:fltk-1.3.4-1/src/fl_rect.cxx ****  248:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1, int x2
 311:fltk-1.3.4-1/src/fl_rect.cxx ****  249:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1, int x2, int
 312:fltk-1.3.4-1/src/fl_rect.cxx ****  250:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(const char *str, int n, int x, int y
 313:fltk-1.3.4-1/src/fl_rect.cxx ****  251:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, int x, int y) {}
 314:fltk-1.3.4-1/src/fl_rect.cxx ****   67              		.loc 1 251 0
 315:fltk-1.3.4-1/src/fl_rect.cxx ****   68              		.cfi_startproc
 316:fltk-1.3.4-1/src/fl_rect.cxx ****   69              	.LVL2:
 317:fltk-1.3.4-1/src/fl_rect.cxx ****   70 0000 F3C3     		rep ret
 318:fltk-1.3.4-1/src/fl_rect.cxx ****   71              		.cfi_endproc
 319:fltk-1.3.4-1/src/fl_rect.cxx ****   72              	.LFE343:
 320:fltk-1.3.4-1/src/fl_rect.cxx ****   74              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN
 321:fltk-1.3.4-1/src/fl_rect.cxx ****   75              	.LCOLDE2:
 322:fltk-1.3.4-1/src/fl_rect.cxx ****   76              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 323:fltk-1.3.4-1/src/fl_rect.cxx ****   77              	.LHOTE2:
 324:fltk-1.3.4-1/src/fl_rect.cxx ****   78              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEiPKciii,"axG",@progbits,_Z
 325:fltk-1.3.4-1/src/fl_rect.cxx ****   79              		.align 2
 326:fltk-1.3.4-1/src/fl_rect.cxx ****   80              	.LCOLDB3:
 327:fltk-1.3.4-1/src/fl_rect.cxx ****   81              		.section	.text._ZN18Fl_Graphics_Driver4drawEiPKciii,"axG",@progbits,_ZN18Fl_Gra
 328:fltk-1.3.4-1/src/fl_rect.cxx ****   82              	.LHOTB3:
 329:fltk-1.3.4-1/src/fl_rect.cxx ****   83              		.align 2
 330:fltk-1.3.4-1/src/fl_rect.cxx ****   84              		.p2align 4,,15
 331:fltk-1.3.4-1/src/fl_rect.cxx ****   85              		.weak	_ZN18Fl_Graphics_Driver4drawEiPKciii
 332:fltk-1.3.4-1/src/fl_rect.cxx ****   87              	_ZN18Fl_Graphics_Driver4drawEiPKciii:
 333:fltk-1.3.4-1/src/fl_rect.cxx ****   88              	.LFB344:
 334:fltk-1.3.4-1/src/fl_rect.cxx ****  252:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 335:fltk-1.3.4-1/src/fl_rect.cxx ****  253:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, float x, float y)
 336:fltk-1.3.4-1/src/fl_rect.cxx ****  254:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 337:fltk-1.3.4-1/src/fl_rect.cxx ****  255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, i
 338:fltk-1.3.4-1/src/fl_rect.cxx ****  256:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(int angle, const char *str, int n, int x,
 339:fltk-1.3.4-1/src/fl_rect.cxx ****   89              		.loc 1 256 0
 340:fltk-1.3.4-1/src/fl_rect.cxx ****   90              		.cfi_startproc
 341:fltk-1.3.4-1/src/fl_rect.cxx ****   91              	.LVL3:
 342:fltk-1.3.4-1/src/fl_rect.cxx ****   92 0000 F3C3     		rep ret
 343:fltk-1.3.4-1/src/fl_rect.cxx ****   93              		.cfi_endproc
 344:fltk-1.3.4-1/src/fl_rect.cxx ****   94              	.LFE344:
 345:fltk-1.3.4-1/src/fl_rect.cxx ****   96              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEiPKciii,"axG",@progbits,_Z
 346:fltk-1.3.4-1/src/fl_rect.cxx ****   97              	.LCOLDE3:
 347:fltk-1.3.4-1/src/fl_rect.cxx ****   98              		.section	.text._ZN18Fl_Graphics_Driver4drawEiPKciii,"axG",@progbits,_ZN18Fl_Gra
 348:fltk-1.3.4-1/src/fl_rect.cxx ****   99              	.LHOTE3:
 349:fltk-1.3.4-1/src/fl_rect.cxx ****  100              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8rtl_drawEPKciii,"axG",@progbits
 350:fltk-1.3.4-1/src/fl_rect.cxx ****  101              		.align 2
 351:fltk-1.3.4-1/src/fl_rect.cxx ****  102              	.LCOLDB4:
 352:fltk-1.3.4-1/src/fl_rect.cxx ****  103              		.section	.text._ZN18Fl_Graphics_Driver8rtl_drawEPKciii,"axG",@progbits,_ZN18Fl_
 353:fltk-1.3.4-1/src/fl_rect.cxx ****  104              	.LHOTB4:
 354:fltk-1.3.4-1/src/fl_rect.cxx ****  105              		.align 2
 355:fltk-1.3.4-1/src/fl_rect.cxx ****  106              		.p2align 4,,15
 356:fltk-1.3.4-1/src/fl_rect.cxx ****  107              		.weak	_ZN18Fl_Graphics_Driver8rtl_drawEPKciii
 357:fltk-1.3.4-1/src/fl_rect.cxx ****  109              	_ZN18Fl_Graphics_Driver8rtl_drawEPKciii:
 358:fltk-1.3.4-1/src/fl_rect.cxx ****  110              	.LFB345:
 359:fltk-1.3.4-1/src/fl_rect.cxx ****  257:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rtl_draw(const char *str, int n, int x, i
 360:fltk-1.3.4-1/src/fl_rect.cxx ****  258:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rtl_draw(const char *str, int n, int x, int y)
 361:fltk-1.3.4-1/src/fl_rect.cxx ****  111              		.loc 1 258 0
 362:fltk-1.3.4-1/src/fl_rect.cxx ****  112              		.cfi_startproc
 1100              		.loc 2 362 0
 1101              		.cfi_startproc
 1102              	.LVL93:
 1103 0000 4883EC10 		subq	$16, %rsp
 1104              		.cfi_def_cfa_offset 24
 1105              		.loc 2 362 0
 1106 0004 4189C9   		movl	%ecx, %r9d
 363:fltk-1.3.4-1/src/fl_rect.cxx ****  113              	.LVL4:
 364:fltk-1.3.4-1/src/fl_rect.cxx ****  114 0000 F3C3     		rep ret
 1107              		.loc 2 364 0
 1108 0007 488B3D00 		movq	fl_display(%rip), %rdi
 1108      000000
 1109              	.LVL94:
 1110 000e 4150     		pushq	%r8
 1111              		.cfi_def_cfa_offset 32
 1112 0010 89F1     		movl	%esi, %ecx
 1113              	.LVL95:
 1114 0012 4189D0   		movl	%edx, %r8d
 1115              	.LVL96:
 1116 0015 488B3500 		movq	fl_window(%rip), %rsi
 1116      000000
 1117              	.LVL97:
 1118 001c 488B1500 		movq	fl_gc(%rip), %rdx
 1118      000000
 1119              	.LVL98:
 1120 0023 E8000000 		call	XDrawLine
 1120      00
 1121              	.LVL99:
 365:fltk-1.3.4-1/src/fl_rect.cxx ****  115              		.cfi_endproc
 366:fltk-1.3.4-1/src/fl_rect.cxx ****  116              	.LFE345:
 367:fltk-1.3.4-1/src/fl_rect.cxx ****  118              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8rtl_drawEPKciii,"axG",@progbits
 368:fltk-1.3.4-1/src/fl_rect.cxx ****  119              	.LCOLDE4:
 369:fltk-1.3.4-1/src/fl_rect.cxx ****  120              		.section	.text._ZN18Fl_Graphics_Driver8rtl_drawEPKciii,"axG",@progbits,_ZN18Fl_
 370:fltk-1.3.4-1/src/fl_rect.cxx ****  121              	.LHOTE4:
 371:fltk-1.3.4-1/src/fl_rect.cxx ****  122              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5colorEj,"axG",@progbits,_ZN18Fl
 372:fltk-1.3.4-1/src/fl_rect.cxx ****  123              		.align 2
 373:fltk-1.3.4-1/src/fl_rect.cxx ****  124              	.LCOLDB5:
 374:fltk-1.3.4-1/src/fl_rect.cxx ****  125              		.section	.text._ZN18Fl_Graphics_Driver5colorEj,"axG",@progbits,_ZN18Fl_Graphics
 375:fltk-1.3.4-1/src/fl_rect.cxx ****  126              	.LHOTB5:
 376:fltk-1.3.4-1/src/fl_rect.cxx ****  127              		.align 2
 377:fltk-1.3.4-1/src/fl_rect.cxx ****  128              		.p2align 4,,15
 378:fltk-1.3.4-1/src/fl_rect.cxx ****  129              		.weak	_ZN18Fl_Graphics_Driver5colorEj
 379:fltk-1.3.4-1/src/fl_rect.cxx ****  131              	_ZN18Fl_Graphics_Driver5colorEj:
 380:fltk-1.3.4-1/src/fl_rect.cxx ****  132              	.LFB346:
 1122              		.loc 2 380 0
 1123 0028 4883C418 		addq	$24, %rsp
 1124              		.cfi_def_cfa_offset 8
 1125 002c C3       		ret
 1126              		.cfi_endproc
 1127              	.LFE502:
 1129              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4lineEiiii
 1130              	.LCOLDE26:
 1131              		.section	.text._ZN18Fl_Graphics_Driver4lineEiiii
 1132              	.LHOTE26:
 1133              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6xylineEiiii,"ax",@progbits
 1134              		.align 2
 1135              	.LCOLDB27:
 1136              		.section	.text._ZN18Fl_Graphics_Driver6xylineEiiii,"ax",@progbits
 1137              	.LHOTB27:
 1138              		.align 2
 1139              		.p2align 4,,15
 1140              		.globl	_ZN18Fl_Graphics_Driver6xylineEiiii
 1142              	_ZN18Fl_Graphics_Driver6xylineEiiii:
 1143              	.LFB497:
 222:fltk-1.3.4-1/src/fl_rect.cxx ****  161:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1);
 1144              		.loc 2 222 0
 1145              		.cfi_startproc
 1146              	.LVL100:
 1147 0000 4883EC28 		subq	$40, %rsp
 1148              		.cfi_def_cfa_offset 48
 1149              	.LBB102:
 1150              	.LBB103:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 1151              		.loc 2 144 0
 1152 0004 41B90100 		movl	$1, %r9d
 1152      0000
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 1153              		.loc 2 146 0
 1154 000a BFFF7F00 		movl	$32767, %edi
 1154      00
 1155              	.LVL101:
 1156              	.LBE103:
 1157              	.LBE102:
 222:fltk-1.3.4-1/src/fl_rect.cxx ****  161:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1);
 1158              		.loc 2 222 0
 1159 000f 64488B04 		movq	%fs:40, %rax
 1159      25280000 
 1159      00
 1160 0018 48894424 		movq	%rax, 24(%rsp)
 1160      18
 1161 001d 31C0     		xorl	%eax, %eax
 1162              	.LVL102:
 1163              	.LBB105:
 1164              	.LBB104:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 1165              		.loc 2 144 0
 1166 001f 8B050000 		movl	fl_line_width_(%rip), %eax
 1166      0000
 1167 0025 85C0     		testl	%eax, %eax
 1168 0027 440F4F0D 		cmovg	fl_line_width_(%rip), %r9d
 1168      00000000 
 1169              	.LVL103:
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 1170              		.loc 2 145 0
 1171 002f 4489C8   		movl	%r9d, %eax
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 1172              		.loc 2 146 0
 1173 0032 4429CF   		subl	%r9d, %edi
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 1174              		.loc 2 145 0
 1175 0035 F7D8     		negl	%eax
 1176              	.LVL104:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1177              		.loc 2 148 0
 1178 0037 39C6     		cmpl	%eax, %esi
 1179 0039 4189C1   		movl	%eax, %r9d
 1180              	.LVL105:
 1181 003c 7C08     		jl	.L85
 1182 003e 39FE     		cmpl	%edi, %esi
 1183 0040 0F4FF7   		cmovg	%edi, %esi
 1184              	.LVL106:
 1185 0043 4189F1   		movl	%esi, %r9d
 1186              	.L85:
 1187              	.LVL107:
 1188              	.LBE104:
 1189              	.LBE105:
 1190              	.LBB106:
 1191              	.LBB107:
 1192 0046 39C2     		cmpl	%eax, %edx
 1193              	.LBE107:
 1194              	.LBE106:
 225:fltk-1.3.4-1/src/fl_rect.cxx ****  164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 1195              		.loc 2 225 0
 1196 0048 6644890C 		movw	%r9w, (%rsp)
 1196      24
 1197              	.LVL108:
 1198              	.LBB109:
 1199              	.LBB108:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1200              		.loc 2 148 0
 1201 004d 89C6     		movl	%eax, %esi
 1202 004f 7C07     		jl	.L86
 1203 0051 39FA     		cmpl	%edi, %edx
 1204 0053 0F4FD7   		cmovg	%edi, %edx
 1205              	.LVL109:
 1206 0056 89D6     		movl	%edx, %esi
 1207              	.L86:
 1208              	.LVL110:
 1209              	.LBE108:
 1210              	.LBE109:
 1211              	.LBB110:
 1212              	.LBB111:
 1213 0058 39C1     		cmpl	%eax, %ecx
 1214              	.LBE111:
 1215              	.LBE110:
 225:fltk-1.3.4-1/src/fl_rect.cxx ****  164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 1216              		.loc 2 225 0
 1217 005a 66897424 		movw	%si, 6(%rsp)
 1217      06
 1218 005f 66897424 		movw	%si, 2(%rsp)
 1218      02
 1219              	.LVL111:
 1220              	.LBB113:
 1221              	.LBB112:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1222              		.loc 2 148 0
 1223 0064 89C2     		movl	%eax, %edx
 1224 0066 7C07     		jl	.L87
 1225 0068 39F9     		cmpl	%edi, %ecx
 1226 006a 0F4FCF   		cmovg	%edi, %ecx
 1227              	.LVL112:
 1228 006d 89CA     		movl	%ecx, %edx
 1229              	.L87:
 1230              	.LVL113:
 1231              	.LBE112:
 1232              	.LBE113:
 1233              	.LBB114:
 1234              	.LBB115:
 1235 006f 4139C0   		cmpl	%eax, %r8d
 1236              	.LBE115:
 1237              	.LBE114:
 226:fltk-1.3.4-1/src/fl_rect.cxx ****  165:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1, int x2, i
 1238              		.loc 2 226 0
 1239 0072 66895424 		movw	%dx, 8(%rsp)
 1239      08
 1240 0077 66895424 		movw	%dx, 4(%rsp)
 1240      04
 1241              	.LVL114:
 1242              	.LBB117:
 1243              	.LBB116:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1244              		.loc 2 148 0
 1245 007c 7C09     		jl	.L88
 1246 007e 4139F8   		cmpl	%edi, %r8d
 1247 0081 89F8     		movl	%edi, %eax
 1248              	.LVL115:
 1249 0083 410F4EC0 		cmovle	%r8d, %eax
 1250              	.L88:
 1251              	.LVL116:
 1252              	.LBE116:
 1253              	.LBE117:
 227:fltk-1.3.4-1/src/fl_rect.cxx ****  166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 1254              		.loc 2 227 0
 1255 0087 488B1500 		movq	fl_gc(%rip), %rdx
 1255      000000
 1256 008e 488B3500 		movq	fl_window(%rip), %rsi
 1256      000000
 1257 0095 4531C9   		xorl	%r9d, %r9d
 1258 0098 488B3D00 		movq	fl_display(%rip), %rdi
 1258      000000
 1259              	.LVL117:
 1260 009f 41B80300 		movl	$3, %r8d
 1260      0000
 1261              	.LVL118:
 1262 00a5 4889E1   		movq	%rsp, %rcx
 226:fltk-1.3.4-1/src/fl_rect.cxx ****  165:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1, int x2, i
 1263              		.loc 2 226 0
 1264 00a8 66894424 		movw	%ax, 10(%rsp)
 1264      0A
 227:fltk-1.3.4-1/src/fl_rect.cxx ****  166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 1265              		.loc 2 227 0
 1266 00ad E8000000 		call	XDrawLines
 1266      00
 1267              	.LVL119:
 248:fltk-1.3.4-1/src/fl_rect.cxx ****  187:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(double x, double y, double r, double sta
 1268              		.loc 2 248 0
 1269 00b2 488B4424 		movq	24(%rsp), %rax
 1269      18
 1270 00b7 64483304 		xorq	%fs:40, %rax
 1270      25280000 
 1270      00
 1271 00c0 7505     		jne	.L96
 1272 00c2 4883C428 		addq	$40, %rsp
 1273              		.cfi_remember_state
 1274              		.cfi_def_cfa_offset 8
 1275 00c6 C3       		ret
 1276              	.L96:
 1277              		.cfi_restore_state
 1278 00c7 E8000000 		call	__stack_chk_fail
 1278      00
 1279              	.LVL120:
 1280              		.cfi_endproc
 1281              	.LFE497:
 1283              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6xylineEiiii
 1284              	.LCOLDE27:
 1285              		.section	.text._ZN18Fl_Graphics_Driver6xylineEiiii
 1286              	.LHOTE27:
 1287              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6xylineEiiiii,"ax",@progbits
 1288              		.align 2
 1289              	.LCOLDB28:
 1290              		.section	.text._ZN18Fl_Graphics_Driver6xylineEiiiii,"ax",@progbits
 1291              	.LHOTB28:
 1292              		.align 2
 1293              		.p2align 4,,15
 1294              		.globl	_ZN18Fl_Graphics_Driver6xylineEiiiii
 1296              	_ZN18Fl_Graphics_Driver6xylineEiiiii:
 1297              	.LFB498:
 250:fltk-1.3.4-1/src/fl_rect.cxx ****  189:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pie(int x, int y, int w, int h, double a1, d
 1298              		.loc 2 250 0
 1299              		.cfi_startproc
 1300              	.LVL121:
 1301 0000 4883EC28 		subq	$40, %rsp
 1302              		.cfi_def_cfa_offset 48
 1303              	.LBB118:
 1304              	.LBB119:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 1305              		.loc 2 144 0
 1306 0004 41BA0100 		movl	$1, %r10d
 1306      0000
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 1307              		.loc 2 146 0
 1308 000a BFFF7F00 		movl	$32767, %edi
 1308      00
 1309              	.LVL122:
 1310              	.LBE119:
 1311              	.LBE118:
 250:fltk-1.3.4-1/src/fl_rect.cxx ****  189:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pie(int x, int y, int w, int h, double a1, d
 1312              		.loc 2 250 0
 1313 000f 64488B04 		movq	%fs:40, %rax
 1313      25280000 
 1313      00
 1314 0018 48894424 		movq	%rax, 24(%rsp)
 1314      18
 1315 001d 31C0     		xorl	%eax, %eax
 1316              	.LVL123:
 1317              	.LBB121:
 1318              	.LBB120:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 1319              		.loc 2 144 0
 1320 001f 8B050000 		movl	fl_line_width_(%rip), %eax
 1320      0000
 1321 0025 85C0     		testl	%eax, %eax
 1322 0027 440F4F15 		cmovg	fl_line_width_(%rip), %r10d
 1322      00000000 
 1323              	.LVL124:
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 1324              		.loc 2 145 0
 1325 002f 4489D0   		movl	%r10d, %eax
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 1326              		.loc 2 146 0
 1327 0032 4429D7   		subl	%r10d, %edi
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 1328              		.loc 2 145 0
 1329 0035 F7D8     		negl	%eax
 1330              	.LVL125:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1331              		.loc 2 148 0
 1332 0037 39C6     		cmpl	%eax, %esi
 1333 0039 4189C2   		movl	%eax, %r10d
 1334              	.LVL126:
 1335 003c 7C08     		jl	.L98
 1336 003e 39FE     		cmpl	%edi, %esi
 1337 0040 0F4FF7   		cmovg	%edi, %esi
 1338              	.LVL127:
 1339 0043 4189F2   		movl	%esi, %r10d
 1340              	.L98:
 1341              	.LVL128:
 1342              	.LBE120:
 1343              	.LBE121:
 1344              	.LBB122:
 1345              	.LBB123:
 1346 0046 39C2     		cmpl	%eax, %edx
 1347              	.LBE123:
 1348              	.LBE122:
 253:fltk-1.3.4-1/src/fl_rect.cxx ****  192:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_loop();
 1349              		.loc 2 253 0
 1350 0048 66448914 		movw	%r10w, (%rsp)
 1350      24
 1351              	.LVL129:
 1352              	.LBB125:
 1353              	.LBB124:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1354              		.loc 2 148 0
 1355 004d 89C6     		movl	%eax, %esi
 1356 004f 7C07     		jl	.L99
 1357 0051 39FA     		cmpl	%edi, %edx
 1358 0053 89D6     		movl	%edx, %esi
 1359 0055 0F4FF7   		cmovg	%edi, %esi
 1360              	.L99:
 1361              	.LVL130:
 1362              	.LBE124:
 1363              	.LBE125:
 1364              	.LBB126:
 1365              	.LBB127:
 1366 0058 39C1     		cmpl	%eax, %ecx
 1367              	.LBE127:
 1368              	.LBE126:
 253:fltk-1.3.4-1/src/fl_rect.cxx ****  192:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_loop();
 1369              		.loc 2 253 0
 1370 005a 66897424 		movw	%si, 6(%rsp)
 1370      06
 1371 005f 66897424 		movw	%si, 2(%rsp)
 1371      02
 1372              	.LVL131:
 1373              	.LBB129:
 1374              	.LBB128:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1375              		.loc 2 148 0
 1376 0064 89C2     		movl	%eax, %edx
 1377              	.LVL132:
 1378 0066 7C07     		jl	.L100
 1379 0068 39F9     		cmpl	%edi, %ecx
 1380 006a 0F4FCF   		cmovg	%edi, %ecx
 1381              	.LVL133:
 1382 006d 89CA     		movl	%ecx, %edx
 1383              	.L100:
 1384              	.LVL134:
 1385              	.LBE128:
 1386              	.LBE129:
 1387              	.LBB130:
 1388              	.LBB131:
 1389 006f 4139C0   		cmpl	%eax, %r8d
 1390              	.LBE131:
 1391              	.LBE130:
 254:fltk-1.3.4-1/src/fl_rect.cxx ****  193:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_polygon();
 1392              		.loc 2 254 0
 1393 0072 66895424 		movw	%dx, 8(%rsp)
 1393      08
 1394 0077 66895424 		movw	%dx, 4(%rsp)
 1394      04
 1395              	.LVL135:
 1396              	.LBB133:
 1397              	.LBB132:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1398              		.loc 2 148 0
 1399 007c 89C2     		movl	%eax, %edx
 1400 007e 7C09     		jl	.L101
 1401 0080 4139F8   		cmpl	%edi, %r8d
 1402 0083 4489C2   		movl	%r8d, %edx
 1403 0086 0F4FD7   		cmovg	%edi, %edx
 1404              	.L101:
 1405              	.LVL136:
 1406              	.LBE132:
 1407              	.LBE133:
 1408              	.LBB134:
 1409              	.LBB135:
 1410 0089 4139C1   		cmpl	%eax, %r9d
 1411              	.LBE135:
 1412              	.LBE134:
 254:fltk-1.3.4-1/src/fl_rect.cxx ****  193:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_polygon();
 1413              		.loc 2 254 0
 1414 008c 66895424 		movw	%dx, 14(%rsp)
 1414      0E
 1415 0091 66895424 		movw	%dx, 10(%rsp)
 1415      0A
 1416              	.LVL137:
 1417              	.LBB137:
 1418              	.LBB136:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1419              		.loc 2 148 0
 1420 0096 7C09     		jl	.L102
 1421 0098 4139F9   		cmpl	%edi, %r9d
 1422 009b 89F8     		movl	%edi, %eax
 1423              	.LVL138:
 1424 009d 410F4EC1 		cmovle	%r9d, %eax
 1425              	.L102:
 1426              	.LVL139:
 1427              	.LBE136:
 1428              	.LBE137:
 256:fltk-1.3.4-1/src/fl_rect.cxx ****  195:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_clip(int x, int y, int w, int h);
 1429              		.loc 2 256 0
 1430 00a1 488B1500 		movq	fl_gc(%rip), %rdx
 1430      000000
 1431 00a8 488B3500 		movq	fl_window(%rip), %rsi
 1431      000000
 1432 00af 4531C9   		xorl	%r9d, %r9d
 1433              	.LVL140:
 1434 00b2 488B3D00 		movq	fl_display(%rip), %rdi
 1434      000000
 1435              	.LVL141:
 1436 00b9 41B80400 		movl	$4, %r8d
 1436      0000
 1437              	.LVL142:
 1438 00bf 4889E1   		movq	%rsp, %rcx
 255:fltk-1.3.4-1/src/fl_rect.cxx ****  194:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_transformed_vertex(double xf, double yf);
 1439              		.loc 2 255 0
 1440 00c2 66894424 		movw	%ax, 12(%rsp)
 1440      0C
 256:fltk-1.3.4-1/src/fl_rect.cxx ****  195:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_clip(int x, int y, int w, int h);
 1441              		.loc 2 256 0
 1442 00c7 E8000000 		call	XDrawLines
 1442      00
 1443              	.LVL143:
 279:fltk-1.3.4-1/src/fl_rect.cxx ****  218:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(const uchar* buf, int X,int Y,int
 1444              		.loc 2 279 0
 1445 00cc 488B4424 		movq	24(%rsp), %rax
 1445      18
 1446 00d1 64483304 		xorq	%fs:40, %rax
 1446      25280000 
 1446      00
 1447 00da 7505     		jne	.L111
 1448 00dc 4883C428 		addq	$40, %rsp
 1449              		.cfi_remember_state
 1450              		.cfi_def_cfa_offset 8
 1451 00e0 C3       		ret
 1452              	.L111:
 1453              		.cfi_restore_state
 1454 00e1 E8000000 		call	__stack_chk_fail
 1454      00
 1455              	.LVL144:
 1456              		.cfi_endproc
 1457              	.LFE498:
 1459              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6xylineEiiiii
 1460              	.LCOLDE28:
 1461              		.section	.text._ZN18Fl_Graphics_Driver6xylineEiiiii
 1462              	.LHOTE28:
 1463              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6yxlineEiiii,"ax",@progbits
 1464              		.align 2
 1465              	.LCOLDB29:
 1466              		.section	.text._ZN18Fl_Graphics_Driver6yxlineEiiii,"ax",@progbits
 1467              	.LHOTB29:
 1468              		.align 2
 1469              		.p2align 4,,15
 1470              		.globl	_ZN18Fl_Graphics_Driver6yxlineEiiii
 1472              	_ZN18Fl_Graphics_Driver6yxlineEiiii:
 1473              	.LFB500:
 303:fltk-1.3.4-1/src/fl_rect.cxx ****  242:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2). */
 1474              		.loc 2 303 0
 1475              		.cfi_startproc
 1476              	.LVL145:
 1477 0000 4883EC28 		subq	$40, %rsp
 1478              		.cfi_def_cfa_offset 48
 1479              	.LBB138:
 1480              	.LBB139:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 1481              		.loc 2 144 0
 1482 0004 41B90100 		movl	$1, %r9d
 1482      0000
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 1483              		.loc 2 146 0
 1484 000a BFFF7F00 		movl	$32767, %edi
 1484      00
 1485              	.LVL146:
 1486              	.LBE139:
 1487              	.LBE138:
 303:fltk-1.3.4-1/src/fl_rect.cxx ****  242:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2). */
 1488              		.loc 2 303 0
 1489 000f 64488B04 		movq	%fs:40, %rax
 1489      25280000 
 1489      00
 1490 0018 48894424 		movq	%rax, 24(%rsp)
 1490      18
 1491 001d 31C0     		xorl	%eax, %eax
 1492              	.LVL147:
 1493              	.LBB141:
 1494              	.LBB140:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 1495              		.loc 2 144 0
 1496 001f 8B050000 		movl	fl_line_width_(%rip), %eax
 1496      0000
 1497 0025 85C0     		testl	%eax, %eax
 1498 0027 440F4F0D 		cmovg	fl_line_width_(%rip), %r9d
 1498      00000000 
 1499              	.LVL148:
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 1500              		.loc 2 145 0
 1501 002f 4489C8   		movl	%r9d, %eax
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 1502              		.loc 2 146 0
 1503 0032 4429CF   		subl	%r9d, %edi
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 1504              		.loc 2 145 0
 1505 0035 F7D8     		negl	%eax
 1506              	.LVL149:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1507              		.loc 2 148 0
 1508 0037 39C6     		cmpl	%eax, %esi
 1509 0039 4189C1   		movl	%eax, %r9d
 1510              	.LVL150:
 1511 003c 7C08     		jl	.L113
 1512 003e 39FE     		cmpl	%edi, %esi
 1513 0040 0F4FF7   		cmovg	%edi, %esi
 1514              	.LVL151:
 1515 0043 4189F1   		movl	%esi, %r9d
 1516              	.L113:
 1517              	.LVL152:
 1518              	.LBE140:
 1519              	.LBE141:
 1520              	.LBB142:
 1521              	.LBB143:
 1522 0046 39C2     		cmpl	%eax, %edx
 1523              	.LBE143:
 1524              	.LBE142:
 306:fltk-1.3.4-1/src/fl_rect.cxx ****  245:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2, int y3);
 1525              		.loc 2 306 0
 1526 0048 6644894C 		movw	%r9w, 4(%rsp)
 1526      2404
 1527 004e 6644890C 		movw	%r9w, (%rsp)
 1527      24
 1528              	.LVL153:
 1529              	.LBB145:
 1530              	.LBB144:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1531              		.loc 2 148 0
 1532 0053 89C6     		movl	%eax, %esi
 1533 0055 7C07     		jl	.L114
 1534 0057 39FA     		cmpl	%edi, %edx
 1535 0059 0F4FD7   		cmovg	%edi, %edx
 1536              	.LVL154:
 1537 005c 89D6     		movl	%edx, %esi
 1538              	.L114:
 1539              	.LVL155:
 1540              	.LBE144:
 1541              	.LBE145:
 1542              	.LBB146:
 1543              	.LBB147:
 1544 005e 39C1     		cmpl	%eax, %ecx
 1545              	.LBE147:
 1546              	.LBE146:
 306:fltk-1.3.4-1/src/fl_rect.cxx ****  245:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2, int y3);
 1547              		.loc 2 306 0
 1548 0060 66897424 		movw	%si, 2(%rsp)
 1548      02
 1549              	.LVL156:
 1550              	.LBB149:
 1551              	.LBB148:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1552              		.loc 2 148 0
 1553 0065 89C2     		movl	%eax, %edx
 1554 0067 7C07     		jl	.L115
 1555 0069 39F9     		cmpl	%edi, %ecx
 1556 006b 0F4FCF   		cmovg	%edi, %ecx
 1557              	.LVL157:
 1558 006e 89CA     		movl	%ecx, %edx
 1559              	.L115:
 1560              	.LVL158:
 1561              	.LBE148:
 1562              	.LBE149:
 1563              	.LBB150:
 1564              	.LBB151:
 1565 0070 4139C0   		cmpl	%eax, %r8d
 1566              	.LBE151:
 1567              	.LBE150:
 307:fltk-1.3.4-1/src/fl_rect.cxx ****  246:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1). */
 1568              		.loc 2 307 0
 1569 0073 66895424 		movw	%dx, 10(%rsp)
 1569      0A
 1570 0078 66895424 		movw	%dx, 6(%rsp)
 1570      06
 1571              	.LVL159:
 1572              	.LBB153:
 1573              	.LBB152:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1574              		.loc 2 148 0
 1575 007d 7C09     		jl	.L116
 1576 007f 4139F8   		cmpl	%edi, %r8d
 1577 0082 89F8     		movl	%edi, %eax
 1578              	.LVL160:
 1579 0084 410F4EC0 		cmovle	%r8d, %eax
 1580              	.L116:
 1581              	.LVL161:
 1582              	.LBE152:
 1583              	.LBE153:
 308:fltk-1.3.4-1/src/fl_rect.cxx ****  247:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1);
 1584              		.loc 2 308 0
 1585 0088 488B1500 		movq	fl_gc(%rip), %rdx
 1585      000000
 1586 008f 488B3500 		movq	fl_window(%rip), %rsi
 1586      000000
 1587 0096 4531C9   		xorl	%r9d, %r9d
 1588 0099 488B3D00 		movq	fl_display(%rip), %rdi
 1588      000000
 1589              	.LVL162:
 1590 00a0 41B80300 		movl	$3, %r8d
 1590      0000
 1591              	.LVL163:
 1592 00a6 4889E1   		movq	%rsp, %rcx
 307:fltk-1.3.4-1/src/fl_rect.cxx ****  246:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1). */
 1593              		.loc 2 307 0
 1594 00a9 66894424 		movw	%ax, 8(%rsp)
 1594      08
 308:fltk-1.3.4-1/src/fl_rect.cxx ****  247:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1);
 1595              		.loc 2 308 0
 1596 00ae E8000000 		call	XDrawLines
 1596      00
 1597              	.LVL164:
 329:fltk-1.3.4-1/src/fl_rect.cxx ****   84              		.p2align 4,,15
 1598              		.loc 2 329 0
 1599 00b3 488B4424 		movq	24(%rsp), %rax
 1599      18
 1600 00b8 64483304 		xorq	%fs:40, %rax
 1600      25280000 
 1600      00
 1601 00c1 7505     		jne	.L124
 1602 00c3 4883C428 		addq	$40, %rsp
 1603              		.cfi_remember_state
 1604              		.cfi_def_cfa_offset 8
 1605 00c7 C3       		ret
 1606              	.L124:
 1607              		.cfi_restore_state
 1608 00c8 E8000000 		call	__stack_chk_fail
 1608      00
 1609              	.LVL165:
 1610              		.cfi_endproc
 1611              	.LFE500:
 1613              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6yxlineEiiii
 1614              	.LCOLDE29:
 1615              		.section	.text._ZN18Fl_Graphics_Driver6yxlineEiiii
 1616              	.LHOTE29:
 1617              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6yxlineEiiiii,"ax",@progbits
 1618              		.align 2
 1619              	.LCOLDB30:
 1620              		.section	.text._ZN18Fl_Graphics_Driver6yxlineEiiiii,"ax",@progbits
 1621              	.LHOTB30:
 1622              		.align 2
 1623              		.p2align 4,,15
 1624              		.globl	_ZN18Fl_Graphics_Driver6yxlineEiiiii
 1626              	_ZN18Fl_Graphics_Driver6yxlineEiiiii:
 1627              	.LFB501:
 331:fltk-1.3.4-1/src/fl_rect.cxx ****   87              	_ZN18Fl_Graphics_Driver4drawEiPKciii:
 1628              		.loc 2 331 0
 1629              		.cfi_startproc
 1630              	.LVL166:
 1631 0000 4883EC28 		subq	$40, %rsp
 1632              		.cfi_def_cfa_offset 48
 1633              	.LBB154:
 1634              	.LBB155:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 1635              		.loc 2 144 0
 1636 0004 41BA0100 		movl	$1, %r10d
 1636      0000
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 1637              		.loc 2 146 0
 1638 000a BFFF7F00 		movl	$32767, %edi
 1638      00
 1639              	.LVL167:
 1640              	.LBE155:
 1641              	.LBE154:
 331:fltk-1.3.4-1/src/fl_rect.cxx ****   87              	_ZN18Fl_Graphics_Driver4drawEiPKciii:
 1642              		.loc 2 331 0
 1643 000f 64488B04 		movq	%fs:40, %rax
 1643      25280000 
 1643      00
 1644 0018 48894424 		movq	%rax, 24(%rsp)
 1644      18
 1645 001d 31C0     		xorl	%eax, %eax
 1646              	.LVL168:
 1647              	.LBB157:
 1648              	.LBB156:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 1649              		.loc 2 144 0
 1650 001f 8B050000 		movl	fl_line_width_(%rip), %eax
 1650      0000
 1651 0025 85C0     		testl	%eax, %eax
 1652 0027 440F4F15 		cmovg	fl_line_width_(%rip), %r10d
 1652      00000000 
 1653              	.LVL169:
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 1654              		.loc 2 145 0
 1655 002f 4489D0   		movl	%r10d, %eax
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 1656              		.loc 2 146 0
 1657 0032 4429D7   		subl	%r10d, %edi
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 1658              		.loc 2 145 0
 1659 0035 F7D8     		negl	%eax
 1660              	.LVL170:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1661              		.loc 2 148 0
 1662 0037 39C6     		cmpl	%eax, %esi
 1663 0039 4189C2   		movl	%eax, %r10d
 1664              	.LVL171:
 1665 003c 7C08     		jl	.L126
 1666 003e 39FE     		cmpl	%edi, %esi
 1667 0040 0F4FF7   		cmovg	%edi, %esi
 1668              	.LVL172:
 1669 0043 4189F2   		movl	%esi, %r10d
 1670              	.L126:
 1671              	.LVL173:
 1672              	.LBE156:
 1673              	.LBE157:
 1674              	.LBB158:
 1675              	.LBB159:
 1676 0046 39C2     		cmpl	%eax, %edx
 1677              	.LBE159:
 1678              	.LBE158:
 334:fltk-1.3.4-1/src/fl_rect.cxx ****  253:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, float x, float y)
 1679              		.loc 2 334 0
 1680 0048 66448954 		movw	%r10w, 4(%rsp)
 1680      2404
 1681 004e 66448914 		movw	%r10w, (%rsp)
 1681      24
 1682              	.LVL174:
 1683              	.LBB161:
 1684              	.LBB160:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1685              		.loc 2 148 0
 1686 0053 89C6     		movl	%eax, %esi
 1687 0055 7C07     		jl	.L127
 1688 0057 39FA     		cmpl	%edi, %edx
 1689 0059 89D6     		movl	%edx, %esi
 1690 005b 0F4FF7   		cmovg	%edi, %esi
 1691              	.L127:
 1692              	.LVL175:
 1693              	.LBE160:
 1694              	.LBE161:
 1695              	.LBB162:
 1696              	.LBB163:
 1697 005e 39C1     		cmpl	%eax, %ecx
 1698              	.LBE163:
 1699              	.LBE162:
 334:fltk-1.3.4-1/src/fl_rect.cxx ****  253:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, float x, float y)
 1700              		.loc 2 334 0
 1701 0060 66897424 		movw	%si, 2(%rsp)
 1701      02
 1702              	.LVL176:
 1703              	.LBB165:
 1704              	.LBB164:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1705              		.loc 2 148 0
 1706 0065 89C2     		movl	%eax, %edx
 1707              	.LVL177:
 1708 0067 7C07     		jl	.L128
 1709 0069 39F9     		cmpl	%edi, %ecx
 1710 006b 0F4FCF   		cmovg	%edi, %ecx
 1711              	.LVL178:
 1712 006e 89CA     		movl	%ecx, %edx
 1713              	.L128:
 1714              	.LVL179:
 1715              	.LBE164:
 1716              	.LBE165:
 1717              	.LBB166:
 1718              	.LBB167:
 1719 0070 4139C0   		cmpl	%eax, %r8d
 1720              	.LBE167:
 1721              	.LBE166:
 335:fltk-1.3.4-1/src/fl_rect.cxx ****  254:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 1722              		.loc 2 335 0
 1723 0073 66895424 		movw	%dx, 10(%rsp)
 1723      0A
 1724 0078 66895424 		movw	%dx, 6(%rsp)
 1724      06
 1725              	.LVL180:
 1726              	.LBB169:
 1727              	.LBB168:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1728              		.loc 2 148 0
 1729 007d 89C2     		movl	%eax, %edx
 1730 007f 7C09     		jl	.L129
 1731 0081 4139F8   		cmpl	%edi, %r8d
 1732 0084 4489C2   		movl	%r8d, %edx
 1733 0087 0F4FD7   		cmovg	%edi, %edx
 1734              	.L129:
 1735              	.LVL181:
 1736              	.LBE168:
 1737              	.LBE169:
 1738              	.LBB170:
 1739              	.LBB171:
 1740 008a 4139C1   		cmpl	%eax, %r9d
 1741              	.LBE171:
 1742              	.LBE170:
 335:fltk-1.3.4-1/src/fl_rect.cxx ****  254:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 1743              		.loc 2 335 0
 1744 008d 66895424 		movw	%dx, 12(%rsp)
 1744      0C
 1745 0092 66895424 		movw	%dx, 8(%rsp)
 1745      08
 1746              	.LVL182:
 1747              	.LBB173:
 1748              	.LBB172:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 1749              		.loc 2 148 0
 1750 0097 7C09     		jl	.L130
 1751 0099 4139F9   		cmpl	%edi, %r9d
 1752 009c 89F8     		movl	%edi, %eax
 1753              	.LVL183:
 1754 009e 410F4EC1 		cmovle	%r9d, %eax
 1755              	.L130:
 1756              	.LVL184:
 1757              	.LBE172:
 1758              	.LBE173:
 337:fltk-1.3.4-1/src/fl_rect.cxx ****  256:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(int angle, const char *str, int n, int x,
 1759              		.loc 2 337 0
 1760 00a2 488B1500 		movq	fl_gc(%rip), %rdx
 1760      000000
 1761 00a9 488B3500 		movq	fl_window(%rip), %rsi
 1761      000000
 1762 00b0 4531C9   		xorl	%r9d, %r9d
 1763              	.LVL185:
 1764 00b3 488B3D00 		movq	fl_display(%rip), %rdi
 1764      000000
 1765              	.LVL186:
 1766 00ba 41B80400 		movl	$4, %r8d
 1766      0000
 1767              	.LVL187:
 1768 00c0 4889E1   		movq	%rsp, %rcx
 336:fltk-1.3.4-1/src/fl_rect.cxx ****  255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, i
 1769              		.loc 2 336 0
 1770 00c3 66894424 		movw	%ax, 14(%rsp)
 1770      0E
 337:fltk-1.3.4-1/src/fl_rect.cxx ****  256:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(int angle, const char *str, int n, int x,
 1771              		.loc 2 337 0
 1772 00c8 E8000000 		call	XDrawLines
 1772      00
 1773              	.LVL188:
 360:fltk-1.3.4-1/src/fl_rect.cxx ****  111              		.loc 1 258 0
 1774              		.loc 2 360 0
 1775 00cd 488B4424 		movq	24(%rsp), %rax
 1775      18
 1776 00d2 64483304 		xorq	%fs:40, %rax
 1776      25280000 
 1776      00
 1777 00db 7505     		jne	.L139
 1778 00dd 4883C428 		addq	$40, %rsp
 1779              		.cfi_remember_state
 1780              		.cfi_def_cfa_offset 8
 1781 00e1 C3       		ret
 1782              	.L139:
 1783              		.cfi_restore_state
 1784 00e2 E8000000 		call	__stack_chk_fail
 1784      00
 1785              	.LVL189:
 1786              		.cfi_endproc
 1787              	.LFE501:
 1789              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6yxlineEiiiii
 1790              	.LCOLDE30:
 1791              		.section	.text._ZN18Fl_Graphics_Driver6yxlineEiiiii
 1792              	.LHOTE30:
 1793              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4lineEiiiiii,"ax",@progbits
 1794              		.align 2
 1795              	.LCOLDB31:
 1796              		.section	.text._ZN18Fl_Graphics_Driver4lineEiiiiii,"ax",@progbits
 1797              	.LHOTB31:
 1798              		.align 2
 1799              		.p2align 4,,15
 1800              		.globl	_ZN18Fl_Graphics_Driver4lineEiiiiii
 1802              	_ZN18Fl_Graphics_Driver4lineEiiiiii:
 1803              	.LFB503:
 381:fltk-1.3.4-1/src/fl_rect.cxx ****  259:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(Fl_Color c). */
 382:fltk-1.3.4-1/src/fl_rect.cxx ****  260:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(Fl_Color c) {color_ = c;}
 1804              		.loc 2 382 0
 1805              		.cfi_startproc
 1806              	.LVL190:
 1807 0000 4883EC28 		subq	$40, %rsp
 1808              		.cfi_def_cfa_offset 48
 383:fltk-1.3.4-1/src/fl_rect.cxx ****  133              		.loc 1 260 0
 384:fltk-1.3.4-1/src/fl_rect.cxx ****  134              		.cfi_startproc
 385:fltk-1.3.4-1/src/fl_rect.cxx ****  135              	.LVL5:
 386:fltk-1.3.4-1/src/fl_rect.cxx ****  136              		.loc 1 260 0
 387:fltk-1.3.4-1/src/fl_rect.cxx ****  137 0000 897710   		movl	%esi, 16(%rdi)
 388:fltk-1.3.4-1/src/fl_rect.cxx ****  138 0003 C3       		ret
 1809              		.loc 2 388 0
 1810 0004 488B3D00 		movq	fl_display(%rip), %rdi
 1810      000000
 1811              	.LVL191:
 382:fltk-1.3.4-1/src/fl_rect.cxx ****  133              		.loc 1 260 0
 1812              		.loc 2 382 0
 1813 000b 64488B04 		movq	%fs:40, %rax
 1813      25280000 
 1813      00
 1814 0014 48894424 		movq	%rax, 24(%rsp)
 1814      18
 1815 0019 31C0     		xorl	%eax, %eax
 385:fltk-1.3.4-1/src/fl_rect.cxx ****  136              		.loc 1 260 0
 1816              		.loc 2 385 0
 1817 001b 66893424 		movw	%si, (%rsp)
 1818 001f 66895424 		movw	%dx, 2(%rsp)
 1818      02
 387:fltk-1.3.4-1/src/fl_rect.cxx ****  138 0003 C3       		ret
 1819              		.loc 2 387 0
 1820 0024 8B442430 		movl	48(%rsp), %eax
 1821              		.loc 2 388 0
 1822 0028 488B1500 		movq	fl_gc(%rip), %rdx
 1822      000000
 1823              	.LVL192:
 1824 002f 488B3500 		movq	fl_window(%rip), %rsi
 1824      000000
 1825              	.LVL193:
 386:fltk-1.3.4-1/src/fl_rect.cxx ****  137 0000 897710   		movl	%esi, 16(%rdi)
 1826              		.loc 2 386 0
 1827 0036 66894C24 		movw	%cx, 4(%rsp)
 1827      04
 1828              		.loc 2 388 0
 1829 003b 4889E1   		movq	%rsp, %rcx
 1830              	.LVL194:
 386:fltk-1.3.4-1/src/fl_rect.cxx ****  137 0000 897710   		movl	%esi, 16(%rdi)
 1831              		.loc 2 386 0
 1832 003e 66448944 		movw	%r8w, 6(%rsp)
 1832      2406
 387:fltk-1.3.4-1/src/fl_rect.cxx ****  138 0003 C3       		ret
 1833              		.loc 2 387 0
 1834 0044 6644894C 		movw	%r9w, 8(%rsp)
 1834      2408
 1835              		.loc 2 388 0
 1836 004a 41B80300 		movl	$3, %r8d
 1836      0000
 1837              	.LVL195:
 1838 0050 4531C9   		xorl	%r9d, %r9d
 1839              	.LVL196:
 387:fltk-1.3.4-1/src/fl_rect.cxx ****  138 0003 C3       		ret
 1840              		.loc 2 387 0
 1841 0053 66894424 		movw	%ax, 10(%rsp)
 1841      0A
 1842              		.loc 2 388 0
 1843 0058 E8000000 		call	XDrawLines
 1843      00
 1844              	.LVL197:
 389:fltk-1.3.4-1/src/fl_rect.cxx ****  139              		.cfi_endproc
 390:fltk-1.3.4-1/src/fl_rect.cxx ****  140              	.LFE346:
 391:fltk-1.3.4-1/src/fl_rect.cxx ****  142              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5colorEj,"axG",@progbits,_ZN18Fl
 392:fltk-1.3.4-1/src/fl_rect.cxx ****  143              	.LCOLDE5:
 393:fltk-1.3.4-1/src/fl_rect.cxx ****  144              		.section	.text._ZN18Fl_Graphics_Driver5colorEj,"axG",@progbits,_ZN18Fl_Graphics
 394:fltk-1.3.4-1/src/fl_rect.cxx ****  145              	.LHOTE5:
 395:fltk-1.3.4-1/src/fl_rect.cxx ****  146              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18
 396:fltk-1.3.4-1/src/fl_rect.cxx ****  147              		.align 2
 397:fltk-1.3.4-1/src/fl_rect.cxx ****  148              	.LCOLDB6:
 398:fltk-1.3.4-1/src/fl_rect.cxx ****  149              		.section	.text._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18Fl_Graphi
 399:fltk-1.3.4-1/src/fl_rect.cxx ****  150              	.LHOTB6:
 400:fltk-1.3.4-1/src/fl_rect.cxx ****  151              		.align 2
 401:fltk-1.3.4-1/src/fl_rect.cxx ****  152              		.p2align 4,,15
 402:fltk-1.3.4-1/src/fl_rect.cxx ****  153              		.weak	_ZN18Fl_Graphics_Driver5colorEhhh
 403:fltk-1.3.4-1/src/fl_rect.cxx ****  155              	_ZN18Fl_Graphics_Driver5colorEhhh:
 404:fltk-1.3.4-1/src/fl_rect.cxx ****  156              	.LFB347:
 405:fltk-1.3.4-1/src/fl_rect.cxx ****  261:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(uchar r, uchar g, uchar b). */
 406:fltk-1.3.4-1/src/fl_rect.cxx ****  262:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(uchar r, uchar g, uchar b) {}
 1845              		.loc 2 406 0
 1846 005d 488B4424 		movq	24(%rsp), %rax
 1846      18
 1847 0062 64483304 		xorq	%fs:40, %rax
 1847      25280000 
 1847      00
 1848 006b 7505     		jne	.L143
 1849 006d 4883C428 		addq	$40, %rsp
 1850              		.cfi_remember_state
 1851              		.cfi_def_cfa_offset 8
 1852 0071 C3       		ret
 1853              	.L143:
 1854              		.cfi_restore_state
 1855 0072 E8000000 		call	__stack_chk_fail
 1855      00
 1856              	.LVL198:
 1857              		.cfi_endproc
 1858              	.LFE503:
 1860              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4lineEiiiiii
 1861              	.LCOLDE31:
 1862              		.section	.text._ZN18Fl_Graphics_Driver4lineEiiiiii
 1863              	.LHOTE31:
 1864              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4loopEiiiiii,"ax",@progbits
 1865              		.align 2
 1866              	.LCOLDB32:
 1867              		.section	.text._ZN18Fl_Graphics_Driver4loopEiiiiii,"ax",@progbits
 1868              	.LHOTB32:
 1869              		.align 2
 1870              		.p2align 4,,15
 1871              		.globl	_ZN18Fl_Graphics_Driver4loopEiiiiii
 1873              	_ZN18Fl_Graphics_Driver4loopEiiiiii:
 1874              	.LFB504:
 407:fltk-1.3.4-1/src/fl_rect.cxx ****  157              		.loc 1 262 0
 408:fltk-1.3.4-1/src/fl_rect.cxx ****  158              		.cfi_startproc
 1875              		.loc 2 408 0
 1876              		.cfi_startproc
 1877              	.LVL199:
 1878 0000 4883EC28 		subq	$40, %rsp
 1879              		.cfi_def_cfa_offset 48
 409:fltk-1.3.4-1/src/fl_rect.cxx ****  159              	.LVL6:
 410:fltk-1.3.4-1/src/fl_rect.cxx ****  160 0000 F3C3     		rep ret
 411:fltk-1.3.4-1/src/fl_rect.cxx ****  161              		.cfi_endproc
 412:fltk-1.3.4-1/src/fl_rect.cxx ****  162              	.LFE347:
 413:fltk-1.3.4-1/src/fl_rect.cxx ****  164              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18
 414:fltk-1.3.4-1/src/fl_rect.cxx ****  165              	.LCOLDE6:
 415:fltk-1.3.4-1/src/fl_rect.cxx ****  166              		.section	.text._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18Fl_Graphi
 1880              		.loc 2 415 0
 1881 0004 488B3D00 		movq	fl_display(%rip), %rdi
 1881      000000
 1882              	.LVL200:
 408:fltk-1.3.4-1/src/fl_rect.cxx ****  159              	.LVL6:
 1883              		.loc 2 408 0
 1884 000b 64488B04 		movq	%fs:40, %rax
 1884      25280000 
 1884      00
 1885 0014 48894424 		movq	%rax, 24(%rsp)
 1885      18
 1886 0019 31C0     		xorl	%eax, %eax
 411:fltk-1.3.4-1/src/fl_rect.cxx ****  162              	.LFE347:
 1887              		.loc 2 411 0
 1888 001b 66893424 		movw	%si, (%rsp)
 1889 001f 66895424 		movw	%dx, 2(%rsp)
 1889      02
 413:fltk-1.3.4-1/src/fl_rect.cxx ****  165              	.LCOLDE6:
 1890              		.loc 2 413 0
 1891 0024 8B442430 		movl	48(%rsp), %eax
 414:fltk-1.3.4-1/src/fl_rect.cxx ****  166              		.section	.text._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18Fl_Graphi
 1892              		.loc 2 414 0
 1893 0028 66897424 		movw	%si, 12(%rsp)
 1893      0C
 1894 002d 66895424 		movw	%dx, 14(%rsp)
 1894      0E
 1895              		.loc 2 415 0
 1896 0032 488B3500 		movq	fl_window(%rip), %rsi
 1896      000000
 1897              	.LVL201:
 1898 0039 488B1500 		movq	fl_gc(%rip), %rdx
 1898      000000
 1899              	.LVL202:
 412:fltk-1.3.4-1/src/fl_rect.cxx ****  164              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18
 1900              		.loc 2 412 0
 1901 0040 66894C24 		movw	%cx, 4(%rsp)
 1901      04
 1902              		.loc 2 415 0
 1903 0045 4889E1   		movq	%rsp, %rcx
 1904              	.LVL203:
 412:fltk-1.3.4-1/src/fl_rect.cxx ****  164              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5colorEhhh,"axG",@progbits,_ZN18
 1905              		.loc 2 412 0
 1906 0048 66448944 		movw	%r8w, 6(%rsp)
 1906      2406
 413:fltk-1.3.4-1/src/fl_rect.cxx ****  165              	.LCOLDE6:
 1907              		.loc 2 413 0
 1908 004e 6644894C 		movw	%r9w, 8(%rsp)
 1908      2408
 1909              		.loc 2 415 0
 1910 0054 41B80400 		movl	$4, %r8d
 1910      0000
 1911              	.LVL204:
 1912 005a 4531C9   		xorl	%r9d, %r9d
 1913              	.LVL205:
 413:fltk-1.3.4-1/src/fl_rect.cxx ****  165              	.LCOLDE6:
 1914              		.loc 2 413 0
 1915 005d 66894424 		movw	%ax, 10(%rsp)
 1915      0A
 1916              		.loc 2 415 0
 1917 0062 E8000000 		call	XDrawLines
 1917      00
 1918              	.LVL206:
 416:fltk-1.3.4-1/src/fl_rect.cxx ****  167              	.LHOTE6:
 417:fltk-1.3.4-1/src/fl_rect.cxx ****  168              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii,"axG",@pr
 418:fltk-1.3.4-1/src/fl_rect.cxx ****  169              		.align 2
 419:fltk-1.3.4-1/src/fl_rect.cxx ****  170              	.LCOLDB7:
 420:fltk-1.3.4-1/src/fl_rect.cxx ****  171              		.section	.text._ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii,"axG",@progbits,_Z
 421:fltk-1.3.4-1/src/fl_rect.cxx ****  172              	.LHOTB7:
 422:fltk-1.3.4-1/src/fl_rect.cxx ****  173              		.align 2
 423:fltk-1.3.4-1/src/fl_rect.cxx ****  174              		.p2align 4,,15
 424:fltk-1.3.4-1/src/fl_rect.cxx ****  175              		.weak	_ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii
 425:fltk-1.3.4-1/src/fl_rect.cxx ****  177              	_ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii:
 426:fltk-1.3.4-1/src/fl_rect.cxx ****  178              	.LFB351:
 427:fltk-1.3.4-1/src/fl_rect.cxx ****  263:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_point(int x, int y). */
 428:fltk-1.3.4-1/src/fl_rect.cxx ****  264:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void point(int x, int y);
 429:fltk-1.3.4-1/src/fl_rect.cxx ****  265:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int 
 430:fltk-1.3.4-1/src/fl_rect.cxx ****  266:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, i
 431:fltk-1.3.4-1/src/fl_rect.cxx ****  267:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int 
 432:fltk-1.3.4-1/src/fl_rect.cxx ****  268:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, i
 1919              		.loc 2 432 0
 1920 0067 488B4424 		movq	24(%rsp), %rax
 1920      18
 1921 006c 64483304 		xorq	%fs:40, %rax
 1921      25280000 
 1921      00
 1922 0075 7505     		jne	.L147
 1923 0077 4883C428 		addq	$40, %rsp
 1924              		.cfi_remember_state
 1925              		.cfi_def_cfa_offset 8
 1926 007b C3       		ret
 1927              	.L147:
 1928              		.cfi_restore_state
 1929 007c E8000000 		call	__stack_chk_fail
 1929      00
 1930              	.LVL207:
 1931              		.cfi_endproc
 1932              	.LFE504:
 1934              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4loopEiiiiii
 1935              	.LCOLDE32:
 1936              		.section	.text._ZN18Fl_Graphics_Driver4loopEiiiiii
 1937              	.LHOTE32:
 1938              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4loopEiiiiiiii,"ax",@progbits
 1939              		.align 2
 1940              	.LCOLDB33:
 1941              		.section	.text._ZN18Fl_Graphics_Driver4loopEiiiiiiii,"ax",@progbits
 1942              	.LHOTB33:
 1943              		.align 2
 1944              		.p2align 4,,15
 1945              		.globl	_ZN18Fl_Graphics_Driver4loopEiiiiiiii
 1947              	_ZN18Fl_Graphics_Driver4loopEiiiiiiii:
 1948              	.LFB505:
 433:fltk-1.3.4-1/src/fl_rect.cxx ****  269:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, i
 434:fltk-1.3.4-1/src/fl_rect.cxx ****  270:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2
 1949              		.loc 2 434 0
 1950              		.cfi_startproc
 1951              	.LVL208:
 1952 0000 4883EC28 		subq	$40, %rsp
 1953              		.cfi_def_cfa_offset 48
 435:fltk-1.3.4-1/src/fl_rect.cxx ****  271:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, i
 436:fltk-1.3.4-1/src/fl_rect.cxx ****  272:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2
 437:fltk-1.3.4-1/src/fl_rect.cxx ****  273:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_points(). */
 438:fltk-1.3.4-1/src/fl_rect.cxx ****  274:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_points();
 439:fltk-1.3.4-1/src/fl_rect.cxx ****  275:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_line(). */
 440:fltk-1.3.4-1/src/fl_rect.cxx ****  276:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_line();
 441:fltk-1.3.4-1/src/fl_rect.cxx ****  277:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_loop(). */
 442:fltk-1.3.4-1/src/fl_rect.cxx ****  278:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_loop();
 1954              		.loc 2 442 0
 1955 0004 488B3D00 		movq	fl_display(%rip), %rdi
 1955      000000
 1956              	.LVL209:
 434:fltk-1.3.4-1/src/fl_rect.cxx ****  271:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, i
 1957              		.loc 2 434 0
 1958 000b 64488B04 		movq	%fs:40, %rax
 1958      25280000 
 1958      00
 1959 0014 48894424 		movq	%rax, 24(%rsp)
 1959      18
 1960 0019 31C0     		xorl	%eax, %eax
 439:fltk-1.3.4-1/src/fl_rect.cxx ****  276:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_line();
 1961              		.loc 2 439 0
 1962 001b 8B442430 		movl	48(%rsp), %eax
 437:fltk-1.3.4-1/src/fl_rect.cxx ****  274:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_points();
 1963              		.loc 2 437 0
 1964 001f 66893424 		movw	%si, (%rsp)
 1965 0023 66895424 		movw	%dx, 2(%rsp)
 1965      02
 441:fltk-1.3.4-1/src/fl_rect.cxx ****  278:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_loop();
 1966              		.loc 2 441 0
 1967 0028 66897424 		movw	%si, 16(%rsp)
 1967      10
 1968 002d 66895424 		movw	%dx, 18(%rsp)
 1968      12
 1969              		.loc 2 442 0
 1970 0032 488B3500 		movq	fl_window(%rip), %rsi
 1970      000000
 1971              	.LVL210:
 439:fltk-1.3.4-1/src/fl_rect.cxx ****  276:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_line();
 1972              		.loc 2 439 0
 1973 0039 66894424 		movw	%ax, 10(%rsp)
 1973      0A
 440:fltk-1.3.4-1/src/fl_rect.cxx ****  277:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_loop(). */
 1974              		.loc 2 440 0
 1975 003e 8B442438 		movl	56(%rsp), %eax
 1976              		.loc 2 442 0
 1977 0042 488B1500 		movq	fl_gc(%rip), %rdx
 1977      000000
 1978              	.LVL211:
 438:fltk-1.3.4-1/src/fl_rect.cxx ****  275:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_line(). */
 1979              		.loc 2 438 0
 1980 0049 66894C24 		movw	%cx, 4(%rsp)
 1980      04
 1981              		.loc 2 442 0
 1982 004e 4889E1   		movq	%rsp, %rcx
 1983              	.LVL212:
 438:fltk-1.3.4-1/src/fl_rect.cxx ****  275:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_line(). */
 1984              		.loc 2 438 0
 1985 0051 66448944 		movw	%r8w, 6(%rsp)
 1985      2406
 439:fltk-1.3.4-1/src/fl_rect.cxx ****  276:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_line();
 1986              		.loc 2 439 0
 1987 0057 6644894C 		movw	%r9w, 8(%rsp)
 1987      2408
 1988              		.loc 2 442 0
 1989 005d 41B80500 		movl	$5, %r8d
 1989      0000
 1990              	.LVL213:
 440:fltk-1.3.4-1/src/fl_rect.cxx ****  277:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_loop(). */
 1991              		.loc 2 440 0
 1992 0063 66894424 		movw	%ax, 12(%rsp)
 1992      0C
 1993 0068 8B442440 		movl	64(%rsp), %eax
 1994              		.loc 2 442 0
 1995 006c 4531C9   		xorl	%r9d, %r9d
 1996              	.LVL214:
 440:fltk-1.3.4-1/src/fl_rect.cxx ****  277:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_loop(). */
 1997              		.loc 2 440 0
 1998 006f 66894424 		movw	%ax, 14(%rsp)
 1998      0E
 1999              		.loc 2 442 0
 2000 0074 E8000000 		call	XDrawLines
 2000      00
 2001              	.LVL215:
 443:fltk-1.3.4-1/src/fl_rect.cxx ****  279:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_polygon(). */
 444:fltk-1.3.4-1/src/fl_rect.cxx ****  280:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_polygon();
 445:fltk-1.3.4-1/src/fl_rect.cxx ****  281:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_vertex(double x, double y). */
 446:fltk-1.3.4-1/src/fl_rect.cxx ****  282:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void vertex(double x, double y);
 447:fltk-1.3.4-1/src/fl_rect.cxx ****  283:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_curve(double X0, double Y0, double X1, do
 448:fltk-1.3.4-1/src/fl_rect.cxx ****  284:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void curve(double X0, double Y0, double X1, double 
 449:fltk-1.3.4-1/src/fl_rect.cxx ****  285:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_circle(double x, double y, double r). */
 450:fltk-1.3.4-1/src/fl_rect.cxx ****  286:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void circle(double x, double y, double r);
 451:fltk-1.3.4-1/src/fl_rect.cxx ****  287:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(double x, double y, double r, double 
 452:fltk-1.3.4-1/src/fl_rect.cxx ****  288:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(double x, double y, double r, double start
 453:fltk-1.3.4-1/src/fl_rect.cxx ****  289:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(int x, int y, int w, int h, double a1
 454:fltk-1.3.4-1/src/fl_rect.cxx ****  290:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(int x, int y, int w, int h, double a1, dou
 455:fltk-1.3.4-1/src/fl_rect.cxx ****  291:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pie(int x, int y, int w, int h, double a1
 456:fltk-1.3.4-1/src/fl_rect.cxx ****  292:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pie(int x, int y, int w, int h, double a1, dou
 457:fltk-1.3.4-1/src/fl_rect.cxx ****  293:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_points(). */
 458:fltk-1.3.4-1/src/fl_rect.cxx ****  294:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_points();
 459:fltk-1.3.4-1/src/fl_rect.cxx ****  295:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_line(). */
 460:fltk-1.3.4-1/src/fl_rect.cxx ****  296:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_line();
 461:fltk-1.3.4-1/src/fl_rect.cxx ****  297:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_loop(). */
 2002              		.loc 2 461 0
 2003 0079 488B4424 		movq	24(%rsp), %rax
 2003      18
 2004 007e 64483304 		xorq	%fs:40, %rax
 2004      25280000 
 2004      00
 2005 0087 7505     		jne	.L151
 2006 0089 4883C428 		addq	$40, %rsp
 2007              		.cfi_remember_state
 2008              		.cfi_def_cfa_offset 8
 2009 008d C3       		ret
 2010              	.L151:
 2011              		.cfi_restore_state
 2012 008e E8000000 		call	__stack_chk_fail
 2012      00
 2013              	.LVL216:
 2014              		.cfi_endproc
 2015              	.LFE505:
 2017              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4loopEiiiiiiii
 2018              	.LCOLDE33:
 2019              		.section	.text._ZN18Fl_Graphics_Driver4loopEiiiiiiii
 2020              	.LHOTE33:
 2021              		.section	.text.unlikely._ZN18Fl_Graphics_Driver7polygonEiiiiii,"ax",@progbits
 2022              		.align 2
 2023              	.LCOLDB34:
 2024              		.section	.text._ZN18Fl_Graphics_Driver7polygonEiiiiii,"ax",@progbits
 2025              	.LHOTB34:
 2026              		.align 2
 2027              		.p2align 4,,15
 2028              		.globl	_ZN18Fl_Graphics_Driver7polygonEiiiiii
 2030              	_ZN18Fl_Graphics_Driver7polygonEiiiiii:
 2031              	.LFB506:
 462:fltk-1.3.4-1/src/fl_rect.cxx ****  298:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_loop();
 463:fltk-1.3.4-1/src/fl_rect.cxx ****  299:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_polygon(). */
 2032              		.loc 2 463 0
 2033              		.cfi_startproc
 2034              	.LVL217:
 2035 0000 4883EC30 		subq	$48, %rsp
 2036              		.cfi_def_cfa_offset 56
 464:fltk-1.3.4-1/src/fl_rect.cxx ****  300:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_polygon();
 465:fltk-1.3.4-1/src/fl_rect.cxx ****  301:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_complex_polygon(). */
 466:fltk-1.3.4-1/src/fl_rect.cxx ****  302:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_complex_polygon();
 467:fltk-1.3.4-1/src/fl_rect.cxx ****  303:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_gap(). */
 468:fltk-1.3.4-1/src/fl_rect.cxx ****  304:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void gap();
 469:fltk-1.3.4-1/src/fl_rect.cxx ****  305:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_complex_polygon(). */
 470:fltk-1.3.4-1/src/fl_rect.cxx ****  306:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_complex_polygon();
 2037              		.loc 2 470 0
 2038 0004 488B3D00 		movq	fl_display(%rip), %rdi
 2038      000000
 2039              	.LVL218:
 463:fltk-1.3.4-1/src/fl_rect.cxx ****  300:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_polygon();
 2040              		.loc 2 463 0
 2041 000b 64488B04 		movq	%fs:40, %rax
 2041      25280000 
 2041      00
 2042 0014 48894424 		movq	%rax, 32(%rsp)
 2042      20
 2043 0019 31C0     		xorl	%eax, %eax
 467:fltk-1.3.4-1/src/fl_rect.cxx ****  304:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void gap();
 2044              		.loc 2 467 0
 2045 001b 8B442438 		movl	56(%rsp), %eax
 465:fltk-1.3.4-1/src/fl_rect.cxx ****  302:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_complex_polygon();
 2046              		.loc 2 465 0
 2047 001f 66897424 		movw	%si, 8(%rsp)
 2047      08
 2048 0024 66895424 		movw	%dx, 10(%rsp)
 2048      0A
 466:fltk-1.3.4-1/src/fl_rect.cxx ****  303:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_gap(). */
 2049              		.loc 2 466 0
 2050 0029 66894C24 		movw	%cx, 12(%rsp)
 2050      0C
 2051 002e 66448944 		movw	%r8w, 14(%rsp)
 2051      240E
 467:fltk-1.3.4-1/src/fl_rect.cxx ****  304:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void gap();
 2052              		.loc 2 467 0
 2053 0034 6644894C 		movw	%r9w, 16(%rsp)
 2053      2410
 2054              		.loc 2 470 0
 2055 003a 41B80300 		movl	$3, %r8d
 2055      0000
 2056              	.LVL219:
 469:fltk-1.3.4-1/src/fl_rect.cxx ****  306:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_complex_polygon();
 2057              		.loc 2 469 0
 2058 0040 66897424 		movw	%si, 20(%rsp)
 2058      14
 2059 0045 66895424 		movw	%dx, 22(%rsp)
 2059      16
 2060              		.loc 2 470 0
 2061 004a 41B90200 		movl	$2, %r9d
 2061      0000
 2062              	.LVL220:
 467:fltk-1.3.4-1/src/fl_rect.cxx ****  304:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void gap();
 2063              		.loc 2 467 0
 2064 0050 66894424 		movw	%ax, 18(%rsp)
 2064      12
 2065              		.loc 2 470 0
 2066 0055 6A00     		pushq	$0
 2067              		.cfi_def_cfa_offset 64
 2068 0057 488B1500 		movq	fl_gc(%rip), %rdx
 2068      000000
 2069              	.LVL221:
 2070 005e 488B3500 		movq	fl_window(%rip), %rsi
 2070      000000
 2071              	.LVL222:
 2072 0065 488D4C24 		leaq	16(%rsp), %rcx
 2072      10
 2073              	.LVL223:
 2074 006a E8000000 		call	XFillPolygon
 2074      00
 2075              	.LVL224:
 471:fltk-1.3.4-1/src/fl_rect.cxx ****  307:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transformed_vertex(double xf, double yf).
 2076              		.loc 2 471 0
 2077 006f 488B1500 		movq	fl_gc(%rip), %rdx
 2077      000000
 2078 0076 488B3500 		movq	fl_window(%rip), %rsi
 2078      000000
 2079 007d 488D4C24 		leaq	16(%rsp), %rcx
 2079      10
 2080 0082 488B3D00 		movq	fl_display(%rip), %rdi
 2080      000000
 2081 0089 4531C9   		xorl	%r9d, %r9d
 2082 008c 41B80400 		movl	$4, %r8d
 2082      0000
 2083 0092 E8000000 		call	XDrawLines
 2083      00
 2084              	.LVL225:
 472:fltk-1.3.4-1/src/fl_rect.cxx ****  308:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void transformed_vertex(double xf, double yf);
 473:fltk-1.3.4-1/src/fl_rect.cxx ****  309:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_clip(int x, int y, int w, int h). */
 474:fltk-1.3.4-1/src/fl_rect.cxx ****  310:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_clip(int x, int y, int w, int h);
 475:fltk-1.3.4-1/src/fl_rect.cxx ****  311:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_box(int x, int y, int w, int h, int 
 476:fltk-1.3.4-1/src/fl_rect.cxx ****  312:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int clip_box(int x, int y, int w, int h, int &X, in
 477:fltk-1.3.4-1/src/fl_rect.cxx ****  313:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_not_clipped(int x, int y, int w, int h). 
 478:fltk-1.3.4-1/src/fl_rect.cxx ****  314:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int not_clipped(int x, int y, int w, int h);
 479:fltk-1.3.4-1/src/fl_rect.cxx ****  315:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_no_clip(). */
 480:fltk-1.3.4-1/src/fl_rect.cxx ****  316:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_no_clip();
 481:fltk-1.3.4-1/src/fl_rect.cxx ****  317:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_clip(). */
 482:fltk-1.3.4-1/src/fl_rect.cxx ****  318:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pop_clip();
 483:fltk-1.3.4-1/src/fl_rect.cxx ****  319:fltk-1.3.4-1/FL/Fl_Device.H ****     
 484:fltk-1.3.4-1/src/fl_rect.cxx ****  320:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_matrix(). */
 485:fltk-1.3.4-1/src/fl_rect.cxx ****  321:fltk-1.3.4-1/FL/Fl_Device.H ****   void push_matrix();
 486:fltk-1.3.4-1/src/fl_rect.cxx ****  322:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_matrix(). */
 2085              		.loc 2 486 0
 2086 0097 58       		popq	%rax
 2087              		.cfi_def_cfa_offset 56
 2088 0098 5A       		popq	%rdx
 2089              		.cfi_def_cfa_offset 48
 2090 0099 488B4424 		movq	24(%rsp), %rax
 2090      18
 2091 009e 64483304 		xorq	%fs:40, %rax
 2091      25280000 
 2091      00
 2092 00a7 7505     		jne	.L155
 2093 00a9 4883C428 		addq	$40, %rsp
 2094              		.cfi_remember_state
 2095              		.cfi_def_cfa_offset 8
 2096 00ad C3       		ret
 2097              	.L155:
 2098              		.cfi_restore_state
 2099 00ae E8000000 		call	__stack_chk_fail
 2099      00
 2100              	.LVL226:
 2101              		.cfi_endproc
 2102              	.LFE506:
 2104              		.section	.text.unlikely._ZN18Fl_Graphics_Driver7polygonEiiiiii
 2105              	.LCOLDE34:
 2106              		.section	.text._ZN18Fl_Graphics_Driver7polygonEiiiiii
 2107              	.LHOTE34:
 2108              		.section	.text.unlikely._ZN18Fl_Graphics_Driver7polygonEiiiiiiii,"ax",@progbits
 2109              		.align 2
 2110              	.LCOLDB35:
 2111              		.section	.text._ZN18Fl_Graphics_Driver7polygonEiiiiiiii,"ax",@progbits
 2112              	.LHOTB35:
 2113              		.align 2
 2114              		.p2align 4,,15
 2115              		.globl	_ZN18Fl_Graphics_Driver7polygonEiiiiiiii
 2117              	_ZN18Fl_Graphics_Driver7polygonEiiiiiiii:
 2118              	.LFB507:
 487:fltk-1.3.4-1/src/fl_rect.cxx ****  323:fltk-1.3.4-1/FL/Fl_Device.H ****   void pop_matrix();
 488:fltk-1.3.4-1/src/fl_rect.cxx ****  324:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_mult_matrix(double a, double b, double c,
 2119              		.loc 2 488 0
 2120              		.cfi_startproc
 2121              	.LVL227:
 2122 0000 4883EC30 		subq	$48, %rsp
 2123              		.cfi_def_cfa_offset 56
 489:fltk-1.3.4-1/src/fl_rect.cxx ****  325:fltk-1.3.4-1/FL/Fl_Device.H ****   void mult_matrix(double a, double b, double c, double d, do
 490:fltk-1.3.4-1/src/fl_rect.cxx ****  326:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x, double y). */
 491:fltk-1.3.4-1/src/fl_rect.cxx ****  327:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x, double y) { mult_matrix(x,0,0,y
 492:fltk-1.3.4-1/src/fl_rect.cxx ****  328:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 493:fltk-1.3.4-1/src/fl_rect.cxx ****  329:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x) { mult_matrix(x,0,0,x,0,0); }
 494:fltk-1.3.4-1/src/fl_rect.cxx ****  330:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_translate(double x, double y). */
 495:fltk-1.3.4-1/src/fl_rect.cxx ****  331:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void translate(double x,double y) { mult_matrix(1,0,
 496:fltk-1.3.4-1/src/fl_rect.cxx ****  332:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 2124              		.loc 2 496 0
 2125 0004 488B3D00 		movq	fl_display(%rip), %rdi
 2125      000000
 2126              	.LVL228:
 488:fltk-1.3.4-1/src/fl_rect.cxx ****  325:fltk-1.3.4-1/FL/Fl_Device.H ****   void mult_matrix(double a, double b, double c, double d, do
 2127              		.loc 2 488 0
 2128 000b 64488B04 		movq	%fs:40, %rax
 2128      25280000 
 2128      00
 2129 0014 48894424 		movq	%rax, 32(%rsp)
 2129      20
 2130 0019 31C0     		xorl	%eax, %eax
 492:fltk-1.3.4-1/src/fl_rect.cxx ****  329:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x) { mult_matrix(x,0,0,x,0,0); }
 2131              		.loc 2 492 0
 2132 001b 8B442438 		movl	56(%rsp), %eax
 490:fltk-1.3.4-1/src/fl_rect.cxx ****  327:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x, double y) { mult_matrix(x,0,0,y
 2133              		.loc 2 490 0
 2134 001f 66897424 		movw	%si, 8(%rsp)
 2134      08
 2135 0024 66895424 		movw	%dx, 10(%rsp)
 2135      0A
 491:fltk-1.3.4-1/src/fl_rect.cxx ****  328:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 2136              		.loc 2 491 0
 2137 0029 66894C24 		movw	%cx, 12(%rsp)
 2137      0C
 2138 002e 66448944 		movw	%r8w, 14(%rsp)
 2138      240E
 492:fltk-1.3.4-1/src/fl_rect.cxx ****  329:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x) { mult_matrix(x,0,0,x,0,0); }
 2139              		.loc 2 492 0
 2140 0034 6644894C 		movw	%r9w, 16(%rsp)
 2140      2410
 2141              		.loc 2 496 0
 2142 003a 41B80400 		movl	$4, %r8d
 2142      0000
 2143              	.LVL229:
 492:fltk-1.3.4-1/src/fl_rect.cxx ****  329:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x) { mult_matrix(x,0,0,x,0,0); }
 2144              		.loc 2 492 0
 2145 0040 66894424 		movw	%ax, 18(%rsp)
 2145      12
 493:fltk-1.3.4-1/src/fl_rect.cxx ****  330:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_translate(double x, double y). */
 2146              		.loc 2 493 0
 2147 0045 8B442440 		movl	64(%rsp), %eax
 2148              		.loc 2 496 0
 2149 0049 41B90200 		movl	$2, %r9d
 2149      0000
 2150              	.LVL230:
 495:fltk-1.3.4-1/src/fl_rect.cxx ****  332:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 2151              		.loc 2 495 0
 2152 004f 66897424 		movw	%si, 24(%rsp)
 2152      18
 2153 0054 66895424 		movw	%dx, 26(%rsp)
 2153      1A
 2154              		.loc 2 496 0
 2155 0059 488B3500 		movq	fl_window(%rip), %rsi
 2155      000000
 2156              	.LVL231:
 2157 0060 488B1500 		movq	fl_gc(%rip), %rdx
 2157      000000
 2158              	.LVL232:
 493:fltk-1.3.4-1/src/fl_rect.cxx ****  330:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_translate(double x, double y). */
 2159              		.loc 2 493 0
 2160 0067 66894424 		movw	%ax, 20(%rsp)
 2160      14
 2161 006c 8B442448 		movl	72(%rsp), %eax
 2162 0070 66894424 		movw	%ax, 22(%rsp)
 2162      16
 2163              		.loc 2 496 0
 2164 0075 6A00     		pushq	$0
 2165              		.cfi_def_cfa_offset 64
 2166 0077 488D4C24 		leaq	16(%rsp), %rcx
 2166      10
 2167              	.LVL233:
 2168 007c E8000000 		call	XFillPolygon
 2168      00
 2169              	.LVL234:
 497:fltk-1.3.4-1/src/fl_rect.cxx ****  333:fltk-1.3.4-1/FL/Fl_Device.H ****   void rotate(double d);
 2170              		.loc 2 497 0
 2171 0081 488B1500 		movq	fl_gc(%rip), %rdx
 2171      000000
 2172 0088 488B3500 		movq	fl_window(%rip), %rsi
 2172      000000
 2173 008f 488D4C24 		leaq	16(%rsp), %rcx
 2173      10
 2174 0094 488B3D00 		movq	fl_display(%rip), %rdi
 2174      000000
 2175 009b 4531C9   		xorl	%r9d, %r9d
 2176 009e 41B80500 		movl	$5, %r8d
 2176      0000
 2177 00a4 E8000000 		call	XDrawLines
 2177      00
 2178              	.LVL235:
 498:fltk-1.3.4-1/src/fl_rect.cxx ****  334:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_x(double x, double y). */
 499:fltk-1.3.4-1/src/fl_rect.cxx ****  335:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_x(double x, double y);
 500:fltk-1.3.4-1/src/fl_rect.cxx ****  336:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_y(double x, double y). */
 501:fltk-1.3.4-1/src/fl_rect.cxx ****  337:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_y(double x, double y);
 502:fltk-1.3.4-1/src/fl_rect.cxx ****  338:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_dx(double x, double y). */
 503:fltk-1.3.4-1/src/fl_rect.cxx ****  339:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_dx(double x, double y);
 504:fltk-1.3.4-1/src/fl_rect.cxx ****  340:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_dy(double x, double y). */
 505:fltk-1.3.4-1/src/fl_rect.cxx ****  341:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_dy(double x, double y);
 506:fltk-1.3.4-1/src/fl_rect.cxx ****  342:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_region(). */
 507:fltk-1.3.4-1/src/fl_rect.cxx ****  343:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region clip_region();
 508:fltk-1.3.4-1/src/fl_rect.cxx ****  344:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_region(Fl_Region r). */
 509:fltk-1.3.4-1/src/fl_rect.cxx ****  345:fltk-1.3.4-1/FL/Fl_Device.H ****   void clip_region(Fl_Region r);
 510:fltk-1.3.4-1/src/fl_rect.cxx ****  346:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_restore_clip(). */
 511:fltk-1.3.4-1/src/fl_rect.cxx ****  347:fltk-1.3.4-1/FL/Fl_Device.H ****   void restore_clip();
 512:fltk-1.3.4-1/src/fl_rect.cxx ****  348:fltk-1.3.4-1/FL/Fl_Device.H ****   
 513:fltk-1.3.4-1/src/fl_rect.cxx ****  349:fltk-1.3.4-1/FL/Fl_Device.H ****   // Images
 2179              		.loc 2 513 0
 2180 00a9 58       		popq	%rax
 2181              		.cfi_def_cfa_offset 56
 2182 00aa 5A       		popq	%rdx
 2183              		.cfi_def_cfa_offset 48
 2184 00ab 488B4424 		movq	24(%rsp), %rax
 2184      18
 2185 00b0 64483304 		xorq	%fs:40, %rax
 2185      25280000 
 2185      00
 2186 00b9 7505     		jne	.L159
 2187 00bb 4883C428 		addq	$40, %rsp
 2188              		.cfi_remember_state
 2189              		.cfi_def_cfa_offset 8
 2190 00bf C3       		ret
 2191              	.L159:
 2192              		.cfi_restore_state
 2193 00c0 E8000000 		call	__stack_chk_fail
 2193      00
 2194              	.LVL236:
 2195              		.cfi_endproc
 2196              	.LFE507:
 2198              		.section	.text.unlikely._ZN18Fl_Graphics_Driver7polygonEiiiiiiii
 2199              	.LCOLDE35:
 2200              		.section	.text._ZN18Fl_Graphics_Driver7polygonEiiiiiiii
 2201              	.LHOTE35:
 2202              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5pointEii,"ax",@progbits
 2203              		.align 2
 2204              	.LCOLDB36:
 2205              		.section	.text._ZN18Fl_Graphics_Driver5pointEii,"ax",@progbits
 2206              	.LHOTB36:
 2207              		.align 2
 2208              		.p2align 4,,15
 2209              		.globl	_ZN18Fl_Graphics_Driver5pointEii
 2211              	_ZN18Fl_Graphics_Driver5pointEii:
 2212              	.LFB508:
 514:fltk-1.3.4-1/src/fl_rect.cxx ****  350:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(const uchar* buf, int X,int Y,
 515:fltk-1.3.4-1/src/fl_rect.cxx ****  351:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(const uchar* buf, int X,int Y,int
 2213              		.loc 2 515 0
 2214              		.cfi_startproc
 2215              	.LVL237:
 2216              	.LBB174:
 2217              	.LBB175:
 144:fltk-1.3.4-1/src/fl_rect.cxx ****   57              		.align 2
 2218              		.loc 2 144 0
 2219 0000 8B050000 		movl	fl_line_width_(%rip), %eax
 2219      0000
 2220 0006 BF010000 		movl	$1, %edi
 2220      00
 2221              	.LVL238:
 2222 000b 85C0     		testl	%eax, %eax
 2223 000d 0F4F3D00 		cmovg	fl_line_width_(%rip), %edi
 2223      000000
 2224              	.LVL239:
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 2225              		.loc 2 146 0
 2226 0014 B8FF7F00 		movl	$32767, %eax
 2226      00
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 2227              		.loc 2 145 0
 2228 0019 89F9     		movl	%edi, %ecx
 146:fltk-1.3.4-1/src/fl_rect.cxx ****   59              		.section	.text._ZN18Fl_Graphics_Driver4drawEPKciii,"axG",@progbits,_ZN18Fl_Grap
 2229              		.loc 2 146 0
 2230 001b 29F8     		subl	%edi, %eax
 145:fltk-1.3.4-1/src/fl_rect.cxx ****   58              	.LCOLDB2:
 2231              		.loc 2 145 0
 2232 001d F7D9     		negl	%ecx
 2233              	.LVL240:
 148:fltk-1.3.4-1/src/fl_rect.cxx ****   61              		.align 2
 2234              		.loc 2 148 0
 2235 001f 39CA     		cmpl	%ecx, %edx
 2236 0021 4189C8   		movl	%ecx, %r8d
 2237 0024 7C08     		jl	.L161
 2238 0026 39C2     		cmpl	%eax, %edx
 2239 0028 0F4FD0   		cmovg	%eax, %edx
 2240              	.LVL241:
 2241 002b 4189D0   		movl	%edx, %r8d
 2242              	.L161:
 2243              	.LVL242:
 2244              	.LBE175:
 2245              	.LBE174:
 2246              	.LBB176:
 2247              	.LBB177:
 2248 002e 39CE     		cmpl	%ecx, %esi
 2249 0030 7C07     		jl	.L162
 2250 0032 39C6     		cmpl	%eax, %esi
 2251 0034 0F4EC6   		cmovle	%esi, %eax
 2252              	.LVL243:
 2253 0037 89C1     		movl	%eax, %ecx
 2254              	.LVL244:
 2255              	.L162:
 2256              	.LBE177:
 2257              	.LBE176:
 516:fltk-1.3.4-1/src/fl_rect.cxx ****  179              		.loc 1 351 0
 517:fltk-1.3.4-1/src/fl_rect.cxx ****  180              		.cfi_startproc
 2258              		.loc 2 517 0
 2259 0039 488B1500 		movq	fl_gc(%rip), %rdx
 2259      000000
 2260 0040 488B3500 		movq	fl_window(%rip), %rsi
 2260      000000
 2261              	.LVL245:
 2262 0047 488B3D00 		movq	fl_display(%rip), %rdi
 2262      000000
 2263              	.LVL246:
 2264 004e E9000000 		jmp	XDrawPoint
 2264      00
 2265              	.LVL247:
 2266              		.cfi_endproc
 2267              	.LFE508:
 2269              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5pointEii
 2270              	.LCOLDE36:
 2271              		.section	.text._ZN18Fl_Graphics_Driver5pointEii
 2272              	.LHOTE36:
 2273              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11not_clippedEiiii,"ax",@progbits
 2274              		.align 2
 2275              	.LCOLDB37:
 2276              		.section	.text._ZN18Fl_Graphics_Driver11not_clippedEiiii,"ax",@progbits
 2277              	.LHOTB37:
 2278              		.align 2
 2279              		.p2align 4,,15
 2280              		.globl	_ZN18Fl_Graphics_Driver11not_clippedEiiii
 2282              	_ZN18Fl_Graphics_Driver11not_clippedEiiii:
 2283              	.LFB516:
 518:fltk-1.3.4-1/src/fl_rect.cxx ****  181              	.LVL7:
 519:fltk-1.3.4-1/src/fl_rect.cxx ****  182 0000 F3C3     		rep ret
 520:fltk-1.3.4-1/src/fl_rect.cxx ****  183              		.cfi_endproc
 521:fltk-1.3.4-1/src/fl_rect.cxx ****  184              	.LFE351:
 522:fltk-1.3.4-1/src/fl_rect.cxx ****  186              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii,"axG",@pr
 523:fltk-1.3.4-1/src/fl_rect.cxx ****  187              	.LCOLDE7:
 524:fltk-1.3.4-1/src/fl_rect.cxx ****  188              		.section	.text._ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii,"axG",@progbits,_Z
 525:fltk-1.3.4-1/src/fl_rect.cxx ****  189              	.LHOTE7:
 526:fltk-1.3.4-1/src/fl_rect.cxx ****  190              		.section	.text.unlikely._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii,"axG
 527:fltk-1.3.4-1/src/fl_rect.cxx ****  191              		.align 2
 528:fltk-1.3.4-1/src/fl_rect.cxx ****  192              	.LCOLDB8:
 529:fltk-1.3.4-1/src/fl_rect.cxx ****  193              		.section	.text._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii,"axG",@progbi
 530:fltk-1.3.4-1/src/fl_rect.cxx ****  194              	.LHOTB8:
 531:fltk-1.3.4-1/src/fl_rect.cxx ****  195              		.align 2
 532:fltk-1.3.4-1/src/fl_rect.cxx ****  196              		.p2align 4,,15
 533:fltk-1.3.4-1/src/fl_rect.cxx ****  197              		.weak	_ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii
 534:fltk-1.3.4-1/src/fl_rect.cxx ****  199              	_ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii:
 535:fltk-1.3.4-1/src/fl_rect.cxx ****  200              	.LFB352:
 536:fltk-1.3.4-1/src/fl_rect.cxx ****  352:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(const uchar* buf, int X,i
 537:fltk-1.3.4-1/src/fl_rect.cxx ****  353:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(const uchar* buf, int X,int 
 538:fltk-1.3.4-1/src/fl_rect.cxx ****  201              		.loc 1 353 0
 539:fltk-1.3.4-1/src/fl_rect.cxx ****  202              		.cfi_startproc
 540:fltk-1.3.4-1/src/fl_rect.cxx ****  203              	.LVL8:
 541:fltk-1.3.4-1/src/fl_rect.cxx ****  204 0000 F3C3     		rep ret
 542:fltk-1.3.4-1/src/fl_rect.cxx ****  205              		.cfi_endproc
 543:fltk-1.3.4-1/src/fl_rect.cxx ****  206              	.LFE352:
 544:fltk-1.3.4-1/src/fl_rect.cxx ****  208              		.section	.text.unlikely._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii,"axG
 545:fltk-1.3.4-1/src/fl_rect.cxx ****  209              	.LCOLDE8:
 546:fltk-1.3.4-1/src/fl_rect.cxx ****  210              		.section	.text._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii,"axG",@progbi
 547:fltk-1.3.4-1/src/fl_rect.cxx ****  211              	.LHOTE8:
 548:fltk-1.3.4-1/src/fl_rect.cxx ****  212              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 549:fltk-1.3.4-1/src/fl_rect.cxx ****  213              		.align 2
 550:fltk-1.3.4-1/src/fl_rect.cxx ****  214              	.LCOLDB9:
 551:fltk-1.3.4-1/src/fl_rect.cxx ****  215              		.section	.text._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"axG",@p
 552:fltk-1.3.4-1/src/fl_rect.cxx ****  216              	.LHOTB9:
 553:fltk-1.3.4-1/src/fl_rect.cxx ****  217              		.align 2
 554:fltk-1.3.4-1/src/fl_rect.cxx ****  218              		.p2align 4,,15
 555:fltk-1.3.4-1/src/fl_rect.cxx ****  219              		.weak	_ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 556:fltk-1.3.4-1/src/fl_rect.cxx ****  221              	_ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii:
 557:fltk-1.3.4-1/src/fl_rect.cxx ****  222              	.LFB353:
 558:fltk-1.3.4-1/src/fl_rect.cxx ****  354:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(Fl_Draw_Image_Cb cb, void* dat
 559:fltk-1.3.4-1/src/fl_rect.cxx ****  355:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(Fl_Draw_Image_Cb cb, void* data, 
 560:fltk-1.3.4-1/src/fl_rect.cxx ****  223              		.loc 1 355 0
 561:fltk-1.3.4-1/src/fl_rect.cxx ****  224              		.cfi_startproc
 562:fltk-1.3.4-1/src/fl_rect.cxx ****  225              	.LVL9:
 563:fltk-1.3.4-1/src/fl_rect.cxx ****  226 0000 F3C3     		rep ret
 564:fltk-1.3.4-1/src/fl_rect.cxx ****  227              		.cfi_endproc
 565:fltk-1.3.4-1/src/fl_rect.cxx ****  228              	.LFE353:
 566:fltk-1.3.4-1/src/fl_rect.cxx ****  230              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 567:fltk-1.3.4-1/src/fl_rect.cxx ****  231              	.LCOLDE9:
 568:fltk-1.3.4-1/src/fl_rect.cxx ****  232              		.section	.text._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"axG",@p
 569:fltk-1.3.4-1/src/fl_rect.cxx ****  233              	.LHOTE9:
 570:fltk-1.3.4-1/src/fl_rect.cxx ****  234              		.section	.text.unlikely._ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_
 571:fltk-1.3.4-1/src/fl_rect.cxx ****  235              		.align 2
 572:fltk-1.3.4-1/src/fl_rect.cxx ****  236              	.LCOLDB10:
 573:fltk-1.3.4-1/src/fl_rect.cxx ****  237              		.section	.text._ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"ax
 574:fltk-1.3.4-1/src/fl_rect.cxx ****  238              	.LHOTB10:
 575:fltk-1.3.4-1/src/fl_rect.cxx ****  239              		.align 2
 576:fltk-1.3.4-1/src/fl_rect.cxx ****  240              		.p2align 4,,15
 577:fltk-1.3.4-1/src/fl_rect.cxx ****  241              		.weak	_ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 578:fltk-1.3.4-1/src/fl_rect.cxx ****  243              	_ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii:
 579:fltk-1.3.4-1/src/fl_rect.cxx ****  244              	.LFB354:
 580:fltk-1.3.4-1/src/fl_rect.cxx ****  356:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(Fl_Draw_Image_Cb cb, void
 581:fltk-1.3.4-1/src/fl_rect.cxx ****  357:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(Fl_Draw_Image_Cb cb, void* d
 582:fltk-1.3.4-1/src/fl_rect.cxx ****  245              		.loc 1 357 0
 583:fltk-1.3.4-1/src/fl_rect.cxx ****  246              		.cfi_startproc
 584:fltk-1.3.4-1/src/fl_rect.cxx ****  247              	.LVL10:
 585:fltk-1.3.4-1/src/fl_rect.cxx ****  248 0000 F3C3     		rep ret
 586:fltk-1.3.4-1/src/fl_rect.cxx ****  249              		.cfi_endproc
 587:fltk-1.3.4-1/src/fl_rect.cxx ****  250              	.LFE354:
 588:fltk-1.3.4-1/src/fl_rect.cxx ****  252              		.section	.text.unlikely._ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_
 589:fltk-1.3.4-1/src/fl_rect.cxx ****  253              	.LCOLDE10:
 590:fltk-1.3.4-1/src/fl_rect.cxx ****  254              		.section	.text._ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"ax
 591:fltk-1.3.4-1/src/fl_rect.cxx ****  255              	.LHOTE10:
 592:fltk-1.3.4-1/src/fl_rect.cxx ****  256              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"axG
 593:fltk-1.3.4-1/src/fl_rect.cxx ****  257              		.align 2
 594:fltk-1.3.4-1/src/fl_rect.cxx ****  258              	.LCOLDB11:
 595:fltk-1.3.4-1/src/fl_rect.cxx ****  259              		.section	.text._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"axG",@progbi
 596:fltk-1.3.4-1/src/fl_rect.cxx ****  260              	.LHOTB11:
 597:fltk-1.3.4-1/src/fl_rect.cxx ****  261              		.align 2
 598:fltk-1.3.4-1/src/fl_rect.cxx ****  262              		.p2align 4,,15
 599:fltk-1.3.4-1/src/fl_rect.cxx ****  263              		.weak	_ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 600:fltk-1.3.4-1/src/fl_rect.cxx ****  265              	_ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii:
 601:fltk-1.3.4-1/src/fl_rect.cxx ****  266              	.LFB355:
 602:fltk-1.3.4-1/src/fl_rect.cxx ****  358:fltk-1.3.4-1/FL/Fl_Device.H ****   // Image classes
 603:fltk-1.3.4-1/src/fl_rect.cxx ****  359:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_RGB_Image object to the device. 
 604:fltk-1.3.4-1/src/fl_rect.cxx ****  360:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 605:fltk-1.3.4-1/src/fl_rect.cxx ****  361:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (u
 606:fltk-1.3.4-1/src/fl_rect.cxx ****  362:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 607:fltk-1.3.4-1/src/fl_rect.cxx ****  363:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 608:fltk-1.3.4-1/src/fl_rect.cxx ****  364:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_RGB_Image * rgb,int XP, int YP, int 
 609:fltk-1.3.4-1/src/fl_rect.cxx ****  267              		.loc 1 364 0
 610:fltk-1.3.4-1/src/fl_rect.cxx ****  268              		.cfi_startproc
 611:fltk-1.3.4-1/src/fl_rect.cxx ****  269              	.LVL11:
 612:fltk-1.3.4-1/src/fl_rect.cxx ****  270 0000 F3C3     		rep ret
 613:fltk-1.3.4-1/src/fl_rect.cxx ****  271              		.cfi_endproc
 614:fltk-1.3.4-1/src/fl_rect.cxx ****  272              	.LFE355:
 615:fltk-1.3.4-1/src/fl_rect.cxx ****  274              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"axG
 616:fltk-1.3.4-1/src/fl_rect.cxx ****  275              	.LCOLDE11:
 617:fltk-1.3.4-1/src/fl_rect.cxx ****  276              		.section	.text._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"axG",@progbi
 618:fltk-1.3.4-1/src/fl_rect.cxx ****  277              	.LHOTE11:
 619:fltk-1.3.4-1/src/fl_rect.cxx ****  278              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"axG",@p
 620:fltk-1.3.4-1/src/fl_rect.cxx ****  279              		.align 2
 621:fltk-1.3.4-1/src/fl_rect.cxx ****  280              	.LCOLDB12:
 622:fltk-1.3.4-1/src/fl_rect.cxx ****  281              		.section	.text._ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"axG",@progbits,_
 623:fltk-1.3.4-1/src/fl_rect.cxx ****  282              	.LHOTB12:
 624:fltk-1.3.4-1/src/fl_rect.cxx ****  283              		.align 2
 625:fltk-1.3.4-1/src/fl_rect.cxx ****  284              		.p2align 4,,15
 626:fltk-1.3.4-1/src/fl_rect.cxx ****  285              		.weak	_ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
 627:fltk-1.3.4-1/src/fl_rect.cxx ****  287              	_ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii:
 628:fltk-1.3.4-1/src/fl_rect.cxx ****  288              	.LFB356:
 2284              		.loc 2 628 0
 2285              		.cfi_startproc
 2286              	.LVL248:
 2287 0000 53       		pushq	%rbx
 2288              		.cfi_def_cfa_offset 16
 2289              		.cfi_offset 3, -16
 2290 0001 89F0     		movl	%esi, %eax
 2291 0003 4883EC10 		subq	$16, %rsp
 2292              		.cfi_def_cfa_offset 32
 2293              		.loc 2 628 0
 2294 0007 8974240C 		movl	%esi, 12(%rsp)
 2295 000b 89CE     		movl	%ecx, %esi
 2296              	.LVL249:
 2297 000d 89542408 		movl	%edx, 8(%rsp)
 629:fltk-1.3.4-1/src/fl_rect.cxx ****  365:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Pixmap object to the device. 
 2298              		.loc 2 629 0
 2299 0011 01C6     		addl	%eax, %esi
 628:fltk-1.3.4-1/src/fl_rect.cxx ****  365:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Pixmap object to the device. 
 2300              		.loc 2 628 0
 2301 0013 894C2404 		movl	%ecx, 4(%rsp)
 2302 0017 44890424 		movl	%r8d, (%rsp)
 2303              		.loc 2 629 0
 2304 001b 85F6     		testl	%esi, %esi
 2305 001d 7E3F     		jle	.L168
 2306              		.loc 2 629 0 is_stmt 0 discriminator 2
 2307 001f 8B0424   		movl	(%rsp), %eax
 2308              	.LVL250:
 2309 0022 03442408 		addl	8(%rsp), %eax
 2310 0026 85C0     		testl	%eax, %eax
 2311 0028 7E34     		jle	.L168
 630:fltk-1.3.4-1/src/fl_rect.cxx ****  366:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 2312              		.loc 2 630 0 is_stmt 1
 2313 002a 48638768 		movslq	1640(%rdi), %rax
 2313      060000
 2314 0031 488B9CC7 		movq	1648(%rdi,%rax,8), %rbx
 2314      70060000 
 2315              	.LVL251:
 631:fltk-1.3.4-1/src/fl_rect.cxx ****  367:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (u
 2316              		.loc 2 631 0
 2317 0039 B8010000 		movl	$1, %eax
 2317      00
 2318 003e 4885DB   		testq	%rbx, %rbx
 2319 0041 741D     		je	.L167
 632:fltk-1.3.4-1/src/fl_rect.cxx ****  368:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 633:fltk-1.3.4-1/src/fl_rect.cxx ****  369:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 634:fltk-1.3.4-1/src/fl_rect.cxx ****  370:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_Pixmap * pxm,int XP, int YP, int WP,
 2320              		.loc 2 634 0
 2321 0043 488D5424 		leaq	4(%rsp), %rdx
 2321      04
 2322              	.LVL252:
 2323 0048 488D7424 		leaq	8(%rsp), %rsi
 2323      08
 2324              	.LVL253:
 2325 004d 488D7C24 		leaq	12(%rsp), %rdi
 2325      0C
 2326              	.LVL254:
 2327 0052 4889E1   		movq	%rsp, %rcx
 2328              	.LVL255:
 2329 0055 E8000000 		call	_ZL13clip_to_shortRiS_S_S_
 2329      00
 2330              	.LVL256:
 2331 005a 85C0     		testl	%eax, %eax
 2332 005c 7412     		je	.L172
 2333              	.LVL257:
 2334              	.L168:
 629:fltk-1.3.4-1/src/fl_rect.cxx ****  366:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 2335              		.loc 2 629 0
 2336 005e 31C0     		xorl	%eax, %eax
 2337              	.L167:
 635:fltk-1.3.4-1/src/fl_rect.cxx ****  289              		.loc 1 370 0
 636:fltk-1.3.4-1/src/fl_rect.cxx ****  290              		.cfi_startproc
 637:fltk-1.3.4-1/src/fl_rect.cxx ****  291              	.LVL12:
 638:fltk-1.3.4-1/src/fl_rect.cxx ****  292 0000 F3C3     		rep ret
 639:fltk-1.3.4-1/src/fl_rect.cxx ****  293              		.cfi_endproc
 640:fltk-1.3.4-1/src/fl_rect.cxx ****  294              	.LFE356:
 641:fltk-1.3.4-1/src/fl_rect.cxx ****  296              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"axG",@p
 642:fltk-1.3.4-1/src/fl_rect.cxx ****  297              	.LCOLDE12:
 643:fltk-1.3.4-1/src/fl_rect.cxx ****  298              		.section	.text._ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"axG",@progbits,_
 644:fltk-1.3.4-1/src/fl_rect.cxx ****  299              	.LHOTE12:
 645:fltk-1.3.4-1/src/fl_rect.cxx ****  300              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"axG",@p
 646:fltk-1.3.4-1/src/fl_rect.cxx ****  301              		.align 2
 647:fltk-1.3.4-1/src/fl_rect.cxx ****  302              	.LCOLDB13:
 648:fltk-1.3.4-1/src/fl_rect.cxx ****  303              		.section	.text._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"axG",@progbits,_
 649:fltk-1.3.4-1/src/fl_rect.cxx ****  304              	.LHOTB13:
 650:fltk-1.3.4-1/src/fl_rect.cxx ****  305              		.align 2
 651:fltk-1.3.4-1/src/fl_rect.cxx ****  306              		.p2align 4,,15
 652:fltk-1.3.4-1/src/fl_rect.cxx ****  307              		.weak	_ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 653:fltk-1.3.4-1/src/fl_rect.cxx ****  309              	_ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii:
 654:fltk-1.3.4-1/src/fl_rect.cxx ****  310              	.LFB357:
 655:fltk-1.3.4-1/src/fl_rect.cxx ****  371:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Bitmap object to the device. 
 656:fltk-1.3.4-1/src/fl_rect.cxx ****  372:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 2338              		.loc 2 656 0
 2339 0060 4883C410 		addq	$16, %rsp
 2340              		.cfi_remember_state
 2341              		.cfi_def_cfa_offset 16
 2342              	.LVL258:
 2343 0064 5B       		popq	%rbx
 2344              		.cfi_def_cfa_offset 8
 2345 0065 C3       		ret
 2346              	.LVL259:
 2347 0066 662E0F1F 		.p2align 4,,10
 2347      84000000 
 2347      0000
 2348              		.p2align 3
 2349              	.L172:
 2350              		.cfi_restore_state
 635:fltk-1.3.4-1/src/fl_rect.cxx ****  289              		.loc 1 370 0
 2351              		.loc 2 635 0
 2352 0070 448B0424 		movl	(%rsp), %r8d
 2353 0074 8B4C2404 		movl	4(%rsp), %ecx
 2354 0078 4889DF   		movq	%rbx, %rdi
 2355 007b 8B542408 		movl	8(%rsp), %edx
 2356 007f 8B74240C 		movl	12(%rsp), %esi
 2357 0083 E8000000 		call	XRectInRegion
 2357      00
 2358              	.LVL260:
 2359              		.loc 2 656 0
 2360 0088 4883C410 		addq	$16, %rsp
 2361              		.cfi_def_cfa_offset 16
 2362              	.LVL261:
 2363 008c 5B       		popq	%rbx
 2364              		.cfi_def_cfa_offset 8
 2365              	.LVL262:
 2366 008d C3       		ret
 2367              		.cfi_endproc
 2368              	.LFE516:
 2370              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11not_clippedEiiii
 2371              	.LCOLDE37:
 2372              		.section	.text._ZN18Fl_Graphics_Driver11not_clippedEiiii
 2373              	.LHOTE37:
 2374              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 2375              		.align 2
 2376              	.LCOLDB38:
 2377              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 2378              	.LHOTB38:
 2379              		.align 2
 2380              		.p2align 4,,15
 2381              		.weak	_ZN9Fl_DeviceD0Ev
 2383              	_ZN9Fl_DeviceD0Ev:
 2384              	.LFB339:
  91:fltk-1.3.4-1/FL/Fl_Device.H **** };
 2385              		.loc 1 91 0
 2386              		.cfi_startproc
 2387              	.LVL263:
  91:fltk-1.3.4-1/FL/Fl_Device.H **** };
 2388              		.loc 1 91 0
 2389 0000 E9000000 		jmp	_ZdlPv
 2389      00
 2390              	.LVL264:
 2391              		.cfi_endproc
 2392              	.LFE339:
 2394              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 2395              	.LCOLDE38:
 2396              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 2397              	.LHOTE38:
 2398              		.section	.text.unlikely._ZN18Fl_Graphics_DriverD2Ev,"axG",@progbits,_ZN18Fl_Graphics_DriverD5Ev,co
 2399              		.align 2
 2400              	.LCOLDB39:
 2401              		.section	.text._ZN18Fl_Graphics_DriverD2Ev,"axG",@progbits,_ZN18Fl_Graphics_DriverD5Ev,comdat
 2402              	.LHOTB39:
 2403              		.align 2
 2404              		.p2align 4,,15
 2405              		.weak	_ZN18Fl_Graphics_DriverD2Ev
 2407              	_ZN18Fl_Graphics_DriverD2Ev:
 2408              	.LFB370:
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
 2409              		.loc 1 412 0
 2410              		.cfi_startproc
 2411              	.LVL265:
 2412              	.LBB178:
 2413              		.loc 1 412 0
 2414 0000 48C70700 		movq	$_ZTV18Fl_Graphics_Driver+16, (%rdi)
 2414      000000
 2415 0007 488BBF58 		movq	1624(%rdi), %rdi
 2415      060000
 2416              	.LVL266:
 2417 000e 4885FF   		testq	%rdi, %rdi
 2418 0011 740D     		je	.L174
 2419              		.loc 1 412 0 is_stmt 0 discriminator 1
 2420 0013 E9000000 		jmp	free
 2420      00
 2421              	.LVL267:
 2422 0018 0F1F8400 		.p2align 4,,10
 2422      00000000 
 2423              		.p2align 3
 2424              	.L174:
 2425 0020 F3C3     		rep ret
 2426              	.LBE178:
 2427              		.cfi_endproc
 2428              	.LFE370:
 2430              		.section	.text.unlikely._ZN18Fl_Graphics_DriverD2Ev,"axG",@progbits,_ZN18Fl_Graphics_DriverD5Ev,co
 2431              	.LCOLDE39:
 2432              		.section	.text._ZN18Fl_Graphics_DriverD2Ev,"axG",@progbits,_ZN18Fl_Graphics_DriverD5Ev,comdat
 2433              	.LHOTE39:
 2434              		.weak	_ZN18Fl_Graphics_DriverD1Ev
 2435              		.set	_ZN18Fl_Graphics_DriverD1Ev,_ZN18Fl_Graphics_DriverD2Ev
 2436              		.section	.text.unlikely._ZN18Fl_Graphics_DriverD0Ev,"axG",@progbits,_ZN18Fl_Graphics_DriverD5Ev,co
 2437              		.align 2
 2438              	.LCOLDB40:
 2439              		.section	.text._ZN18Fl_Graphics_DriverD0Ev,"axG",@progbits,_ZN18Fl_Graphics_DriverD5Ev,comdat
 2440              	.LHOTB40:
 2441              		.align 2
 2442              		.p2align 4,,15
 2443              		.weak	_ZN18Fl_Graphics_DriverD0Ev
 2445              	_ZN18Fl_Graphics_DriverD0Ev:
 2446              	.LFB372:
 2447              		.loc 1 412 0 is_stmt 1
 2448              		.cfi_startproc
 2449              	.LVL268:
 2450 0000 53       		pushq	%rbx
 2451              		.cfi_def_cfa_offset 16
 2452              		.cfi_offset 3, -16
 2453              		.loc 1 412 0
 2454 0001 4889FB   		movq	%rdi, %rbx
 2455              	.LBB179:
 2456              	.LBB180:
 2457 0004 48C70700 		movq	$_ZTV18Fl_Graphics_Driver+16, (%rdi)
 2457      000000
 2458 000b 488BBF58 		movq	1624(%rdi), %rdi
 2458      060000
 2459              	.LVL269:
 2460 0012 4885FF   		testq	%rdi, %rdi
 2461 0015 7405     		je	.L177
 2462 0017 E8000000 		call	free
 2462      00
 2463              	.LVL270:
 2464              	.L177:
 2465              	.LBE180:
 2466              	.LBE179:
 2467 001c 4889DF   		movq	%rbx, %rdi
 2468 001f 5B       		popq	%rbx
 2469              		.cfi_def_cfa_offset 8
 2470              	.LVL271:
 2471 0020 E9000000 		jmp	_ZdlPv
 2471      00
 2472              	.LVL272:
 2473              		.cfi_endproc
 2474              	.LFE372:
 2476              		.section	.text.unlikely._ZN18Fl_Graphics_DriverD0Ev,"axG",@progbits,_ZN18Fl_Graphics_DriverD5Ev,co
 2477              	.LCOLDE40:
 2478              		.section	.text._ZN18Fl_Graphics_DriverD0Ev,"axG",@progbits,_ZN18Fl_Graphics_DriverD5Ev,comdat
 2479              	.LHOTE40:
 2480              		.section	.text.unlikely._Z16XRectangleRegioniiii,"ax",@progbits
 2481              	.LCOLDB41:
 2482              		.section	.text._Z16XRectangleRegioniiii,"ax",@progbits
 2483              	.LHOTB41:
 2484              		.p2align 4,,15
 2485              		.globl	_Z16XRectangleRegioniiii
 2487              	_Z16XRectangleRegioniiii:
 2488              	.LFB509:
 532:fltk-1.3.4-1/src/fl_rect.cxx ****  197              		.weak	_ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii
 2489              		.loc 2 532 0
 2490              		.cfi_startproc
 2491              	.LVL273:
 2492 0000 53       		pushq	%rbx
 2493              		.cfi_def_cfa_offset 16
 2494              		.cfi_offset 3, -16
 2495 0001 4883EC20 		subq	$32, %rsp
 2496              		.cfi_def_cfa_offset 48
 532:fltk-1.3.4-1/src/fl_rect.cxx ****  197              		.weak	_ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii
 2497              		.loc 2 532 0
 2498 0005 897C240C 		movl	%edi, 12(%rsp)
 2499 0009 89742408 		movl	%esi, 8(%rsp)
 534:fltk-1.3.4-1/src/fl_rect.cxx ****  200              	.LFB352:
 2500              		.loc 2 534 0
 2501 000d 488D7C24 		leaq	12(%rsp), %rdi
 2501      0C
 2502              	.LVL274:
 2503 0012 488D7424 		leaq	8(%rsp), %rsi
 2503      08
 2504              	.LVL275:
 532:fltk-1.3.4-1/src/fl_rect.cxx ****  197              		.weak	_ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii
 2505              		.loc 2 532 0
 2506 0017 89542404 		movl	%edx, 4(%rsp)
 534:fltk-1.3.4-1/src/fl_rect.cxx ****  200              	.LFB352:
 2507              		.loc 2 534 0
 2508 001b 488D5424 		leaq	4(%rsp), %rdx
 2508      04
 2509              	.LVL276:
 532:fltk-1.3.4-1/src/fl_rect.cxx ****  197              		.weak	_ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii
 2510              		.loc 2 532 0
 2511 0020 890C24   		movl	%ecx, (%rsp)
 534:fltk-1.3.4-1/src/fl_rect.cxx ****  200              	.LFB352:
 2512              		.loc 2 534 0
 2513 0023 4889E1   		movq	%rsp, %rcx
 2514              	.LVL277:
 532:fltk-1.3.4-1/src/fl_rect.cxx ****  197              		.weak	_ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii
 2515              		.loc 2 532 0
 2516 0026 64488B04 		movq	%fs:40, %rax
 2516      25280000 
 2516      00
 2517 002f 48894424 		movq	%rax, 24(%rsp)
 2517      18
 2518 0034 31C0     		xorl	%eax, %eax
 534:fltk-1.3.4-1/src/fl_rect.cxx ****  200              	.LFB352:
 2519              		.loc 2 534 0
 2520 0036 E8000000 		call	_ZL13clip_to_shortRiS_S_S_
 2520      00
 2521              	.LVL278:
 535:fltk-1.3.4-1/src/fl_rect.cxx ****  352:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(const uchar* buf, int X,i
 2522              		.loc 2 535 0
 2523 003b 8B44240C 		movl	12(%rsp), %eax
 2524 003f 66894424 		movw	%ax, 16(%rsp)
 2524      10
 2525 0044 8B442408 		movl	8(%rsp), %eax
 2526 0048 66894424 		movw	%ax, 18(%rsp)
 2526      12
 2527 004d 8B442404 		movl	4(%rsp), %eax
 2528 0051 66894424 		movw	%ax, 20(%rsp)
 2528      14
 2529 0056 8B0424   		movl	(%rsp), %eax
 2530 0059 66894424 		movw	%ax, 22(%rsp)
 2530      16
 536:fltk-1.3.4-1/src/fl_rect.cxx ****  353:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(const uchar* buf, int X,int 
 2531              		.loc 2 536 0
 2532 005e E8000000 		call	XCreateRegion
 2532      00
 2533              	.LVL279:
 537:fltk-1.3.4-1/src/fl_rect.cxx ****  201              		.loc 1 353 0
 2534              		.loc 2 537 0
 2535 0063 488D7C24 		leaq	16(%rsp), %rdi
 2535      10
 2536 0068 4889C2   		movq	%rax, %rdx
 2537 006b 4889C6   		movq	%rax, %rsi
 536:fltk-1.3.4-1/src/fl_rect.cxx ****  353:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(const uchar* buf, int X,int 
 2538              		.loc 2 536 0
 2539 006e 4889C3   		movq	%rax, %rbx
 2540              	.LVL280:
 537:fltk-1.3.4-1/src/fl_rect.cxx ****  201              		.loc 1 353 0
 2541              		.loc 2 537 0
 2542 0071 E8000000 		call	XUnionRectWithRegion
 2542      00
 2543              	.LVL281:
 539:fltk-1.3.4-1/src/fl_rect.cxx ****  203              	.LVL8:
 2544              		.loc 2 539 0
 2545 0076 488B4C24 		movq	24(%rsp), %rcx
 2545      18
 2546 007b 6448330C 		xorq	%fs:40, %rcx
 2546      25280000 
 2546      00
 2547 0084 7509     		jne	.L185
 2548 0086 4883C420 		addq	$32, %rsp
 2549              		.cfi_remember_state
 2550              		.cfi_def_cfa_offset 16
 2551              	.LVL282:
 2552 008a 4889D8   		movq	%rbx, %rax
 2553 008d 5B       		popq	%rbx
 2554              		.cfi_def_cfa_offset 8
 2555              	.LVL283:
 2556 008e C3       		ret
 2557              	.LVL284:
 2558              	.L185:
 2559              		.cfi_restore_state
 2560 008f E8000000 		call	__stack_chk_fail
 2560      00
 2561              	.LVL285:
 2562              		.cfi_endproc
 2563              	.LFE509:
 2565              		.section	.text.unlikely._Z16XRectangleRegioniiii
 2566              	.LCOLDE41:
 2567              		.section	.text._Z16XRectangleRegioniiii
 2568              	.LHOTE41:
 2569              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_,"ax",@progbits
 2570              		.align 2
 2571              	.LCOLDB42:
 2572              		.section	.text._ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_,"ax",@progbits
 2573              	.LHOTB42:
 2574              		.align 2
 2575              		.p2align 4,,15
 2576              		.globl	_ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_
 2578              	_ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_:
 2579              	.LFB517:
 657:fltk-1.3.4-1/src/fl_rect.cxx ****  373:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (u
 658:fltk-1.3.4-1/src/fl_rect.cxx ****  374:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 659:fltk-1.3.4-1/src/fl_rect.cxx ****  375:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 2580              		.loc 2 659 0
 2581              		.cfi_startproc
 2582              	.LVL286:
 2583 0000 4157     		pushq	%r15
 2584              		.cfi_def_cfa_offset 16
 2585              		.cfi_offset 15, -16
 2586 0002 4156     		pushq	%r14
 2587              		.cfi_def_cfa_offset 24
 2588              		.cfi_offset 14, -24
 660:fltk-1.3.4-1/src/fl_rect.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 661:fltk-1.3.4-1/src/fl_rect.cxx ****  311              		.loc 1 376 0
 662:fltk-1.3.4-1/src/fl_rect.cxx ****  312              		.cfi_startproc
 2589              		.loc 2 662 0
 2590 0004 4531DB   		xorl	%r11d, %r11d
 659:fltk-1.3.4-1/src/fl_rect.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 2591              		.loc 2 659 0
 2592 0007 4155     		pushq	%r13
 2593              		.cfi_def_cfa_offset 32
 2594              		.cfi_offset 13, -32
 2595 0009 4154     		pushq	%r12
 2596              		.cfi_def_cfa_offset 40
 2597              		.cfi_offset 12, -40
 2598 000b 4189CD   		movl	%ecx, %r13d
 2599 000e 55       		pushq	%rbp
 2600              		.cfi_def_cfa_offset 48
 2601              		.cfi_offset 6, -48
 2602 000f 53       		pushq	%rbx
 2603              		.cfi_def_cfa_offset 56
 2604              		.cfi_offset 3, -56
 2605 0010 4883EC38 		subq	$56, %rsp
 2606              		.cfi_def_cfa_offset 112
 660:fltk-1.3.4-1/src/fl_rect.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 2607              		.loc 2 660 0
 2608 0014 418931   		movl	%esi, (%r9)
 659:fltk-1.3.4-1/src/fl_rect.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 2609              		.loc 2 659 0
 2610 0017 488B4424 		movq	112(%rsp), %rax
 2610      70
 2611 001c 4C8B5424 		movq	120(%rsp), %r10
 2611      78
 2612 0021 4C8BBC24 		movq	128(%rsp), %r15
 2612      80000000 
 660:fltk-1.3.4-1/src/fl_rect.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 2613              		.loc 2 660 0
 2614 0029 4C894C24 		movq	%r9, 24(%rsp)
 2614      18
 659:fltk-1.3.4-1/src/fl_rect.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 2615              		.loc 2 659 0
 2616 002e 64488B0C 		movq	%fs:40, %rcx
 2616      25280000 
 2616      00
 2617 0037 48894C24 		movq	%rcx, 40(%rsp)
 2617      28
 2618 003c 31C9     		xorl	%ecx, %ecx
 2619              	.LVL287:
 660:fltk-1.3.4-1/src/fl_rect.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 2620              		.loc 2 660 0
 2621 003e 8910     		movl	%edx, (%rax)
 659:fltk-1.3.4-1/src/fl_rect.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 2622              		.loc 2 659 0
 2623 0040 48894424 		movq	%rax, 16(%rsp)
 2623      10
 660:fltk-1.3.4-1/src/fl_rect.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 2624              		.loc 2 660 0
 2625 0045 45892A   		movl	%r13d, (%r10)
 2626 0048 458907   		movl	%r8d, (%r15)
 661:fltk-1.3.4-1/src/fl_rect.cxx ****  312              		.cfi_startproc
 2627              		.loc 2 661 0
 2628 004b 48638768 		movslq	1640(%rdi), %rax
 2628      060000
 660:fltk-1.3.4-1/src/fl_rect.cxx ****  376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, in
 2629              		.loc 2 660 0
 2630 0052 4C891424 		movq	%r10, (%rsp)
 661:fltk-1.3.4-1/src/fl_rect.cxx ****  312              		.cfi_startproc
 2631              		.loc 2 661 0
 2632 0056 488B9CC7 		movq	1648(%rdi,%rax,8), %rbx
 2632      70060000 
 2633              	.LVL288:
 2634              		.loc 2 662 0
 2635 005e 4885DB   		testq	%rbx, %rbx
 2636 0061 742E     		je	.L187
 663:fltk-1.3.4-1/src/fl_rect.cxx ****  313              	.LVL13:
 664:fltk-1.3.4-1/src/fl_rect.cxx ****  314 0000 F3C3     		rep ret
 2637              		.loc 2 664 0
 2638 0063 4489E9   		movl	%r13d, %ecx
 2639 0066 4889DF   		movq	%rbx, %rdi
 2640              	.LVL289:
 2641 0069 89F5     		movl	%esi, %ebp
 2642 006b 4189D4   		movl	%edx, %r12d
 2643 006e 4589C6   		movl	%r8d, %r14d
 2644 0071 44895C24 		movl	%r11d, 8(%rsp)
 2644      08
 2645 0076 E8000000 		call	XRectInRegion
 2645      00
 2646              	.LVL290:
 2647 007b 85C0     		testl	%eax, %eax
 2648 007d 4C8B1424 		movq	(%rsp), %r10
 2649 0081 0F84C900 		je	.L189
 2649      0000
 2650 0087 83F801   		cmpl	$1, %eax
 2651 008a 448B5C24 		movl	8(%rsp), %r11d
 2651      08
 2652 008f 752F     		jne	.L199
 2653              	.LVL291:
 2654              	.L187:
 665:fltk-1.3.4-1/src/fl_rect.cxx ****  315              		.cfi_endproc
 666:fltk-1.3.4-1/src/fl_rect.cxx ****  316              	.LFE357:
 667:fltk-1.3.4-1/src/fl_rect.cxx ****  318              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"axG",@p
 668:fltk-1.3.4-1/src/fl_rect.cxx ****  319              	.LCOLDE13:
 669:fltk-1.3.4-1/src/fl_rect.cxx ****  320              		.section	.text._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"axG",@progbits,_
 670:fltk-1.3.4-1/src/fl_rect.cxx ****  321              	.LHOTE13:
 671:fltk-1.3.4-1/src/fl_rect.cxx ****  322              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10class_nameEv,"axG",@progbits,_
 672:fltk-1.3.4-1/src/fl_rect.cxx ****  323              		.align 2
 673:fltk-1.3.4-1/src/fl_rect.cxx ****  324              	.LCOLDB14:
 674:fltk-1.3.4-1/src/fl_rect.cxx ****  325              		.section	.text._ZN18Fl_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN18Fl_Gr
 675:fltk-1.3.4-1/src/fl_rect.cxx ****  326              	.LHOTB14:
 676:fltk-1.3.4-1/src/fl_rect.cxx ****  327              		.align 2
 677:fltk-1.3.4-1/src/fl_rect.cxx ****  328              		.p2align 4,,15
 678:fltk-1.3.4-1/src/fl_rect.cxx ****  329              		.weak	_ZN18Fl_Graphics_Driver10class_nameEv
 679:fltk-1.3.4-1/src/fl_rect.cxx ****  331              	_ZN18Fl_Graphics_Driver10class_nameEv:
 680:fltk-1.3.4-1/src/fl_rect.cxx ****  332              	.LFB358:
 681:fltk-1.3.4-1/src/fl_rect.cxx ****  377:fltk-1.3.4-1/FL/Fl_Device.H **** #if FLTK_ABI_VERSION >= 10301
 682:fltk-1.3.4-1/src/fl_rect.cxx ****  378:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual
 683:fltk-1.3.4-1/src/fl_rect.cxx ****  379:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 684:fltk-1.3.4-1/src/fl_rect.cxx ****  380:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscree
 685:fltk-1.3.4-1/src/fl_rect.cxx ****  381:fltk-1.3.4-1/FL/Fl_Device.H ****   
 686:fltk-1.3.4-1/src/fl_rect.cxx ****  382:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 687:fltk-1.3.4-1/src/fl_rect.cxx ****  383:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 688:fltk-1.3.4-1/src/fl_rect.cxx ****  384:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 689:fltk-1.3.4-1/src/fl_rect.cxx ****  333              		.loc 1 384 0
 690:fltk-1.3.4-1/src/fl_rect.cxx ****  334              		.cfi_startproc
 691:fltk-1.3.4-1/src/fl_rect.cxx ****  335              	.LVL14:
 692:fltk-1.3.4-1/src/fl_rect.cxx ****  336              		.loc 1 384 0
 693:fltk-1.3.4-1/src/fl_rect.cxx ****  337 0000 488B0500 		movq	_ZN18Fl_Graphics_Driver8class_idE(%rip), %rax
 694:fltk-1.3.4-1/src/fl_rect.cxx ****  337      000000
 695:fltk-1.3.4-1/src/fl_rect.cxx ****  338 0007 C3       		ret
 696:fltk-1.3.4-1/src/fl_rect.cxx ****  339              		.cfi_endproc
 697:fltk-1.3.4-1/src/fl_rect.cxx ****  340              	.LFE358:
 698:fltk-1.3.4-1/src/fl_rect.cxx ****  342              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10class_nameEv,"axG",@progbits,_
 699:fltk-1.3.4-1/src/fl_rect.cxx ****  343              	.LCOLDE14:
 700:fltk-1.3.4-1/src/fl_rect.cxx ****  344              		.section	.text._ZN18Fl_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN18Fl_Gr
 701:fltk-1.3.4-1/src/fl_rect.cxx ****  345              	.LHOTE14:
 702:fltk-1.3.4-1/src/fl_rect.cxx ****  346              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4fontEii,"axG",@progbits,_ZN18Fl
 703:fltk-1.3.4-1/src/fl_rect.cxx ****  347              		.align 2
 704:fltk-1.3.4-1/src/fl_rect.cxx ****  348              	.LCOLDB15:
 705:fltk-1.3.4-1/src/fl_rect.cxx ****  349              		.section	.text._ZN18Fl_Graphics_Driver4fontEii,"axG",@progbits,_ZN18Fl_Graphics
 706:fltk-1.3.4-1/src/fl_rect.cxx ****  350              	.LHOTB15:
 707:fltk-1.3.4-1/src/fl_rect.cxx ****  351              		.align 2
 708:fltk-1.3.4-1/src/fl_rect.cxx ****  352              		.p2align 4,,15
 709:fltk-1.3.4-1/src/fl_rect.cxx ****  353              		.weak	_ZN18Fl_Graphics_Driver4fontEii
 710:fltk-1.3.4-1/src/fl_rect.cxx ****  355              	_ZN18Fl_Graphics_Driver4fontEii:
 711:fltk-1.3.4-1/src/fl_rect.cxx ****  356              	.LFB359:
 712:fltk-1.3.4-1/src/fl_rect.cxx ****  385:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(Fl_Font face, Fl_Fontsize size). */
 713:fltk-1.3.4-1/src/fl_rect.cxx ****  386:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void font(Fl_Font face, Fl_Fontsize fsize) {font_ =
 714:fltk-1.3.4-1/src/fl_rect.cxx ****  357              		.loc 1 386 0
 715:fltk-1.3.4-1/src/fl_rect.cxx ****  358              		.cfi_startproc
 716:fltk-1.3.4-1/src/fl_rect.cxx ****  359              	.LVL15:
 717:fltk-1.3.4-1/src/fl_rect.cxx ****  360              		.loc 1 386 0
 718:fltk-1.3.4-1/src/fl_rect.cxx ****  361 0000 897708   		movl	%esi, 8(%rdi)
 719:fltk-1.3.4-1/src/fl_rect.cxx ****  362 0003 89570C   		movl	%edx, 12(%rdi)
 720:fltk-1.3.4-1/src/fl_rect.cxx ****  363 0006 C3       		ret
 721:fltk-1.3.4-1/src/fl_rect.cxx ****  364              		.cfi_endproc
 722:fltk-1.3.4-1/src/fl_rect.cxx ****  365              	.LFE359:
 723:fltk-1.3.4-1/src/fl_rect.cxx ****  367              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4fontEii,"axG",@progbits,_ZN18Fl
 724:fltk-1.3.4-1/src/fl_rect.cxx ****  368              	.LCOLDE15:
 725:fltk-1.3.4-1/src/fl_rect.cxx ****  369              		.section	.text._ZN18Fl_Graphics_Driver4fontEii,"axG",@progbits,_ZN18Fl_Graphics
 726:fltk-1.3.4-1/src/fl_rect.cxx ****  370              	.LHOTE15:
 727:fltk-1.3.4-1/src/fl_rect.cxx ****  371              		.section	.text.unlikely._ZN18Fl_Graphics_Driver5widthEPKci,"axG",@progbits,_ZN1
 728:fltk-1.3.4-1/src/fl_rect.cxx ****  372              		.align 2
 729:fltk-1.3.4-1/src/fl_rect.cxx ****  373              	.LCOLDB17:
 730:fltk-1.3.4-1/src/fl_rect.cxx ****  374              		.section	.text._ZN18Fl_Graphics_Driver5widthEPKci,"axG",@progbits,_ZN18Fl_Graph
 731:fltk-1.3.4-1/src/fl_rect.cxx ****  375              	.LHOTB17:
 2655              		.loc 2 731 0
 2656 0091 488B5424 		movq	40(%rsp), %rdx
 2656      28
 2657 0096 64483314 		xorq	%fs:40, %rdx
 2657      25280000 
 2657      00
 2658 009f 4489D8   		movl	%r11d, %eax
 2659 00a2 0F85C100 		jne	.L200
 2659      0000
 2660 00a8 4883C438 		addq	$56, %rsp
 2661              		.cfi_remember_state
 2662              		.cfi_def_cfa_offset 56
 2663 00ac 5B       		popq	%rbx
 2664              		.cfi_def_cfa_offset 48
 2665              	.LVL292:
 2666 00ad 5D       		popq	%rbp
 2667              		.cfi_def_cfa_offset 40
 2668 00ae 415C     		popq	%r12
 2669              		.cfi_def_cfa_offset 32
 2670 00b0 415D     		popq	%r13
 2671              		.cfi_def_cfa_offset 24
 2672              	.LVL293:
 2673 00b2 415E     		popq	%r14
 2674              		.cfi_def_cfa_offset 16
 2675 00b4 415F     		popq	%r15
 2676              		.cfi_def_cfa_offset 8
 2677 00b6 C3       		ret
 2678              	.LVL294:
 2679 00b7 660F1F84 		.p2align 4,,10
 2679      00000000 
 2679      00
 2680              		.p2align 3
 2681              	.L199:
 2682              		.cfi_restore_state
 2683 00c0 4C8B4C24 		movq	24(%rsp), %r9
 2683      18
 673:fltk-1.3.4-1/src/fl_rect.cxx ****  325              		.section	.text._ZN18Fl_Graphics_Driver10class_nameEv,"axG",@progbits,_ZN18Fl_Gr
 2684              		.loc 2 673 0
 2685 00c5 4489F1   		movl	%r14d, %ecx
 2686 00c8 4489E6   		movl	%r12d, %esi
 2687 00cb 89EF     		movl	%ebp, %edi
 2688 00cd 4489EA   		movl	%r13d, %edx
 2689 00d0 4C895424 		movq	%r10, 8(%rsp)
 2689      08
 2690 00d5 4C890C24 		movq	%r9, (%rsp)
 2691 00d9 E8000000 		call	_Z16XRectangleRegioniiii
 2691      00
 2692              	.LVL295:
 2693 00de 4989C4   		movq	%rax, %r12
 2694              	.LVL296:
 674:fltk-1.3.4-1/src/fl_rect.cxx ****  326              	.LHOTB14:
 2695              		.loc 2 674 0
 2696 00e1 E8000000 		call	XCreateRegion
 2696      00
 2697              	.LVL297:
 675:fltk-1.3.4-1/src/fl_rect.cxx ****  327              		.align 2
 2698              		.loc 2 675 0
 2699 00e6 4C89E6   		movq	%r12, %rsi
 2700 00e9 4889C2   		movq	%rax, %rdx
 2701 00ec 4889DF   		movq	%rbx, %rdi
 674:fltk-1.3.4-1/src/fl_rect.cxx ****  326              	.LHOTB14:
 2702              		.loc 2 674 0
 2703 00ef 4889C5   		movq	%rax, %rbp
 2704              	.LVL298:
 675:fltk-1.3.4-1/src/fl_rect.cxx ****  327              		.align 2
 2705              		.loc 2 675 0
 2706 00f2 E8000000 		call	XIntersectRegion
 2706      00
 2707              	.LVL299:
 677:fltk-1.3.4-1/src/fl_rect.cxx ****  329              		.weak	_ZN18Fl_Graphics_Driver10class_nameEv
 2708              		.loc 2 677 0
 2709 00f7 488D7424 		leaq	32(%rsp), %rsi
 2709      20
 2710 00fc 4889EF   		movq	%rbp, %rdi
 2711 00ff E8000000 		call	XClipBox
 2711      00
 2712              	.LVL300:
 678:fltk-1.3.4-1/src/fl_rect.cxx ****  331              	_ZN18Fl_Graphics_Driver10class_nameEv:
 2713              		.loc 2 678 0
 2714 0104 0FBF4424 		movswl	32(%rsp), %eax
 2714      20
 2715 0109 4C8B0C24 		movq	(%rsp), %r9
 679:fltk-1.3.4-1/src/fl_rect.cxx ****  332              	.LFB358:
 2716              		.loc 2 679 0
 2717 010d 4889EF   		movq	%rbp, %rdi
 678:fltk-1.3.4-1/src/fl_rect.cxx ****  331              	_ZN18Fl_Graphics_Driver10class_nameEv:
 2718              		.loc 2 678 0
 2719 0110 488B7424 		movq	16(%rsp), %rsi
 2719      10
 2720 0115 4C8B5424 		movq	8(%rsp), %r10
 2720      08
 2721 011a 418901   		movl	%eax, (%r9)
 2722 011d 0FBF4424 		movswl	34(%rsp), %eax
 2722      22
 2723 0122 8906     		movl	%eax, (%rsi)
 2724 0124 0FB74424 		movzwl	36(%rsp), %eax
 2724      24
 2725 0129 418902   		movl	%eax, (%r10)
 2726 012c 0FB74424 		movzwl	38(%rsp), %eax
 2726      26
 2727 0131 418907   		movl	%eax, (%r15)
 679:fltk-1.3.4-1/src/fl_rect.cxx ****  332              	.LFB358:
 2728              		.loc 2 679 0
 2729 0134 E8000000 		call	XDestroyRegion
 2729      00
 2730              	.LVL301:
 680:fltk-1.3.4-1/src/fl_rect.cxx ****  377:fltk-1.3.4-1/FL/Fl_Device.H **** #if FLTK_ABI_VERSION >= 10301
 2731              		.loc 2 680 0
 2732 0139 4C89E7   		movq	%r12, %rdi
 2733 013c E8000000 		call	XDestroyRegion
 2733      00
 2734              	.LVL302:
 681:fltk-1.3.4-1/src/fl_rect.cxx ****  378:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual
 2735              		.loc 2 681 0
 2736 0141 41BB0100 		movl	$1, %r11d
 2736      0000
 2737 0147 E945FFFF 		jmp	.L187
 2737      FF
 2738              	.LVL303:
 2739 014c 0F1F4000 		.p2align 4,,10
 2740              		.p2align 3
 2741              	.L189:
 666:fltk-1.3.4-1/src/fl_rect.cxx ****  318              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"axG",@p
 2742              		.loc 2 666 0
 2743 0150 41C70700 		movl	$0, (%r15)
 2743      000000
 667:fltk-1.3.4-1/src/fl_rect.cxx ****  319              	.LCOLDE13:
 2744              		.loc 2 667 0
 2745 0157 41BB0200 		movl	$2, %r11d
 2745      0000
 666:fltk-1.3.4-1/src/fl_rect.cxx ****  318              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"axG",@p
 2746              		.loc 2 666 0
 2747 015d 41C70200 		movl	$0, (%r10)
 2747      000000
 667:fltk-1.3.4-1/src/fl_rect.cxx ****  319              	.LCOLDE13:
 2748              		.loc 2 667 0
 2749 0164 E928FFFF 		jmp	.L187
 2749      FF
 2750              	.LVL304:
 2751              	.L200:
 2752              		.loc 2 731 0
 2753 0169 E8000000 		call	__stack_chk_fail
 2753      00
 2754              	.LVL305:
 2755              		.cfi_endproc
 2756              	.LFE517:
 2758              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_
 2759              	.LCOLDE42:
 2760              		.section	.text._ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_
 2761              	.LHOTE42:
 2762              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12restore_clipEv,"ax",@progbits
 2763              		.align 2
 2764              	.LCOLDB43:
 2765              		.section	.text._ZN18Fl_Graphics_Driver12restore_clipEv,"ax",@progbits
 2766              	.LHOTB43:
 2767              		.align 2
 2768              		.p2align 4,,15
 2769              		.globl	_ZN18Fl_Graphics_Driver12restore_clipEv
 2771              	_ZN18Fl_Graphics_Driver12restore_clipEv:
 2772              	.LFB510:
 542:fltk-1.3.4-1/src/fl_rect.cxx ****  206              	.LFE352:
 2773              		.loc 2 542 0
 2774              		.cfi_startproc
 2775              	.LVL306:
 544:fltk-1.3.4-1/src/fl_rect.cxx ****  209              	.LCOLDE8:
 2776              		.loc 2 544 0
 2777 0000 488B3500 		movq	fl_gc(%rip), %rsi
 2777      000000
 543:fltk-1.3.4-1/src/fl_rect.cxx ****  208              		.section	.text.unlikely._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii,"axG
 2778              		.loc 2 543 0
 2779 0007 83876406 		addl	$1, 1636(%rdi)
 2779      000001
 544:fltk-1.3.4-1/src/fl_rect.cxx ****  209              	.LCOLDE8:
 2780              		.loc 2 544 0
 2781 000e 4885F6   		testq	%rsi, %rsi
 2782 0011 743D     		je	.L201
 545:fltk-1.3.4-1/src/fl_rect.cxx ****  210              		.section	.text._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii,"axG",@progbi
 2783              		.loc 2 545 0
 2784 0013 48638768 		movslq	1640(%rdi), %rax
 2784      060000
 2785 001a 488B94C7 		movq	1648(%rdi,%rax,8), %rdx
 2785      70060000 
 2786              	.LVL307:
 547:fltk-1.3.4-1/src/fl_rect.cxx ****  212              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 2787              		.loc 2 547 0
 2788 0022 4885D2   		testq	%rdx, %rdx
 2789 0025 7411     		je	.L203
 547:fltk-1.3.4-1/src/fl_rect.cxx ****  212              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 2790              		.loc 2 547 0 is_stmt 0 discriminator 1
 2791 0027 488B3D00 		movq	fl_display(%rip), %rdi
 2791      000000
 2792              	.LVL308:
 2793 002e E9000000 		jmp	XSetRegion
 2793      00
 2794              	.LVL309:
 2795              		.p2align 4,,10
 2796 0033 0F1F4400 		.p2align 3
 2796      00
 2797              	.L203:
 548:fltk-1.3.4-1/src/fl_rect.cxx ****  213              		.align 2
 2798              		.loc 2 548 0 is_stmt 1
 2799 0038 488B3D00 		movq	fl_display(%rip), %rdi
 2799      000000
 2800              	.LVL310:
 2801 003f 31D2     		xorl	%edx, %edx
 2802              	.LVL311:
 2803 0041 E9000000 		jmp	XSetClipMask
 2803      00
 2804              	.LVL312:
 2805 0046 662E0F1F 		.p2align 4,,10
 2805      84000000 
 2805      0000
 2806              		.p2align 3
 2807              	.L201:
 2808 0050 F3C3     		rep ret
 2809              		.cfi_endproc
 2810              	.LFE510:
 2812              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12restore_clipEv
 2813              	.LCOLDE43:
 2814              		.section	.text._ZN18Fl_Graphics_Driver12restore_clipEv
 2815              	.LHOTE43:
 2816              		.section	.rodata.str1.8,"aMS",@progbits,1
 2817              		.align 8
 2818              	.LC44:
 2819 0000 666C5F70 		.string	"fl_push_clip: clip stack overflow!\n"
 2819      7573685F 
 2819      636C6970 
 2819      3A20636C 
 2819      69702073 
 2820              		.section	.text.unlikely._ZN18Fl_Graphics_Driver9push_clipEiiii,"ax",@progbits
 2821              		.align 2
 2822              	.LCOLDB45:
 2823              		.section	.text._ZN18Fl_Graphics_Driver9push_clipEiiii,"ax",@progbits
 2824              	.LHOTB45:
 2825              		.align 2
 2826              		.p2align 4,,15
 2827              		.globl	_ZN18Fl_Graphics_Driver9push_clipEiiii
 2829              	_ZN18Fl_Graphics_Driver9push_clipEiiii:
 2830              	.LFB513:
 576:fltk-1.3.4-1/src/fl_rect.cxx ****  241              		.weak	_ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 2831              		.loc 2 576 0
 2832              		.cfi_startproc
 2833              	.LVL313:
 2834 0000 4155     		pushq	%r13
 2835              		.cfi_def_cfa_offset 16
 2836              		.cfi_offset 13, -16
 2837 0002 4154     		pushq	%r12
 2838              		.cfi_def_cfa_offset 24
 2839              		.cfi_offset 12, -24
 2840 0004 55       		pushq	%rbp
 2841              		.cfi_def_cfa_offset 32
 2842              		.cfi_offset 6, -32
 2843 0005 53       		pushq	%rbx
 2844              		.cfi_def_cfa_offset 40
 2845              		.cfi_offset 3, -40
 2846 0006 4889FB   		movq	%rdi, %rbx
 2847 0009 4883EC08 		subq	$8, %rsp
 2848              		.cfi_def_cfa_offset 48
 2849              	.LBB181:
 578:fltk-1.3.4-1/src/fl_rect.cxx ****  244              	.LFB354:
 2850              		.loc 2 578 0
 2851 000d 85C9     		testl	%ecx, %ecx
 2852 000f 0F8E8B00 		jle	.L205
 2852      0000
 2853 0015 4585C0   		testl	%r8d, %r8d
 2854 0018 0F8E8200 		jle	.L205
 2854      0000
 2855 001e 89F7     		movl	%esi, %edi
 2856              	.LVL314:
 2857 0020 89D6     		movl	%edx, %esi
 2858              	.LVL315:
 2859 0022 89CA     		movl	%ecx, %edx
 2860              	.LVL316:
 2861              	.LBB182:
 579:fltk-1.3.4-1/src/fl_rect.cxx ****  356:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(Fl_Draw_Image_Cb cb, void
 2862              		.loc 2 579 0
 2863 0024 4489C1   		movl	%r8d, %ecx
 2864              	.LVL317:
 2865 0027 E8000000 		call	_Z16XRectangleRegioniiii
 2865      00
 2866              	.LVL318:
 580:fltk-1.3.4-1/src/fl_rect.cxx ****  357:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(Fl_Draw_Image_Cb cb, void* d
 2867              		.loc 2 580 0
 2868 002c 48639368 		movslq	1640(%rbx), %rdx
 2868      060000
 579:fltk-1.3.4-1/src/fl_rect.cxx ****  356:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(Fl_Draw_Image_Cb cb, void
 2869              		.loc 2 579 0
 2870 0033 4989C4   		movq	%rax, %r12
 2871              	.LVL319:
 2872 0036 4C89E5   		movq	%r12, %rbp
 580:fltk-1.3.4-1/src/fl_rect.cxx ****  357:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(Fl_Draw_Image_Cb cb, void* d
 2873              		.loc 2 580 0
 2874 0039 4C8BACD3 		movq	1648(%rbx,%rdx,8), %r13
 2874      70060000 
 2875              	.LVL320:
 2876 0041 4889D0   		movq	%rdx, %rax
 2877              	.LVL321:
 2878              	.LBB183:
 581:fltk-1.3.4-1/src/fl_rect.cxx ****  245              		.loc 1 357 0
 2879              		.loc 2 581 0
 2880 0044 4D85ED   		testq	%r13, %r13
 2881 0047 7424     		je	.L206
 2882              	.LBB184:
 583:fltk-1.3.4-1/src/fl_rect.cxx ****  247              	.LVL10:
 2883              		.loc 2 583 0
 2884 0049 E8000000 		call	XCreateRegion
 2884      00
 2885              	.LVL322:
 584:fltk-1.3.4-1/src/fl_rect.cxx ****  248 0000 F3C3     		rep ret
 2886              		.loc 2 584 0
 2887 004e 4C89E6   		movq	%r12, %rsi
 2888 0051 4889C2   		movq	%rax, %rdx
 2889 0054 4C89EF   		movq	%r13, %rdi
 583:fltk-1.3.4-1/src/fl_rect.cxx ****  247              	.LVL10:
 2890              		.loc 2 583 0
 2891 0057 4889C5   		movq	%rax, %rbp
 2892              	.LVL323:
 584:fltk-1.3.4-1/src/fl_rect.cxx ****  248 0000 F3C3     		rep ret
 2893              		.loc 2 584 0
 2894 005a E8000000 		call	XIntersectRegion
 2894      00
 2895              	.LVL324:
 585:fltk-1.3.4-1/src/fl_rect.cxx ****  249              		.cfi_endproc
 2896              		.loc 2 585 0
 2897 005f 4C89E7   		movq	%r12, %rdi
 2898 0062 E8000000 		call	XDestroyRegion
 2898      00
 2899              	.LVL325:
 2900 0067 8B836806 		movl	1640(%rbx), %eax
 2900      0000
 2901              	.LVL326:
 2902              	.L206:
 2903              	.LBE184:
 2904              	.LBE183:
 2905              	.LBE182:
 2906              	.LBE181:
 607:fltk-1.3.4-1/src/fl_rect.cxx ****  364:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_RGB_Image * rgb,int XP, int YP, int 
 2907              		.loc 2 607 0
 2908 006d 83F808   		cmpl	$8, %eax
 2909 0070 7F41     		jg	.L207
 2910              	.LVL327:
 2911              	.L218:
 607:fltk-1.3.4-1/src/fl_rect.cxx ****  364:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_RGB_Image * rgb,int XP, int YP, int 
 2912              		.loc 2 607 0 is_stmt 0 discriminator 1
 2913 0072 83C001   		addl	$1, %eax
 2914 0075 89836806 		movl	%eax, 1640(%rbx)
 2914      0000
 2915 007b 4898     		cltq
 2916 007d 4889ACC3 		movq	%rbp, 1648(%rbx,%rax,8)
 2916      70060000 
 2917              	.L208:
 2918              	.LBB185:
 2919              	.LBB186:
 2920              		.file 3 "fltk-1.3.4-1/FL/fl_draw.H"
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
 2921              		.loc 3 129 0 is_stmt 1
 2922 0085 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2922      000000
 2923              	.LBE186:
 2924              	.LBE185:
 610:fltk-1.3.4-1/src/fl_rect.cxx ****  269              	.LVL11:
 2925              		.loc 2 610 0
 2926 008c 4883C408 		addq	$8, %rsp
 2927              		.cfi_remember_state
 2928              		.cfi_def_cfa_offset 40
 2929 0090 5B       		popq	%rbx
 2930              		.cfi_def_cfa_offset 32
 2931              	.LVL328:
 2932 0091 5D       		popq	%rbp
 2933              		.cfi_def_cfa_offset 24
 2934              	.LVL329:
 2935 0092 415C     		popq	%r12
 2936              		.cfi_def_cfa_offset 16
 2937 0094 415D     		popq	%r13
 2938              		.cfi_def_cfa_offset 8
 2939              	.LBB188:
 2940              	.LBB187:
 2941              		.loc 3 129 0
 2942 0096 E9000000 		jmp	_ZN18Fl_Graphics_Driver12restore_clipEv
 2942      00
 2943              	.LVL330:
 2944 009b 0F1F4400 		.p2align 4,,10
 2944      00
 2945              		.p2align 3
 2946              	.L205:
 2947              		.cfi_restore_state
 2948              	.LBE187:
 2949              	.LBE188:
 2950              	.LBB189:
 598:fltk-1.3.4-1/src/fl_rect.cxx ****  263              		.weak	_ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 2951              		.loc 2 598 0
 2952 00a0 E8000000 		call	XCreateRegion
 2952      00
 2953              	.LVL331:
 2954 00a5 4889C5   		movq	%rax, %rbp
 2955              	.LVL332:
 2956 00a8 8B836806 		movl	1640(%rbx), %eax
 2956      0000
 2957              	.LVL333:
 2958              	.LBE189:
 607:fltk-1.3.4-1/src/fl_rect.cxx ****  364:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_RGB_Image * rgb,int XP, int YP, int 
 2959              		.loc 2 607 0
 2960 00ae 83F808   		cmpl	$8, %eax
 2961 00b1 7EBF     		jle	.L218
 2962              	.L207:
 608:fltk-1.3.4-1/src/fl_rect.cxx ****  267              		.loc 1 364 0
 2963              		.loc 2 608 0
 2964 00b3 BF000000 		movl	$.LC44, %edi
 2964      00
 2965 00b8 31C0     		xorl	%eax, %eax
 2966 00ba FF150000 		call	*_ZN2Fl7warningE(%rip)
 2966      0000
 2967              	.LVL334:
 2968 00c0 EBC3     		jmp	.L208
 2969              		.cfi_endproc
 2970              	.LFE513:
 2972              		.section	.text.unlikely._ZN18Fl_Graphics_Driver9push_clipEiiii
 2973              	.LCOLDE45:
 2974              		.section	.text._ZN18Fl_Graphics_Driver9push_clipEiiii
 2975              	.LHOTE45:
 2976              		.section	.rodata.str1.8
 2977 0024 00000000 		.align 8
 2978              	.LC46:
 2979 0028 666C5F70 		.string	"fl_push_no_clip: clip stack overflow!\n"
 2979      7573685F 
 2979      6E6F5F63 
 2979      6C69703A 
 2979      20636C69 
 2980              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12push_no_clipEv,"ax",@progbits
 2981              		.align 2
 2982              	.LCOLDB47:
 2983              		.section	.text._ZN18Fl_Graphics_Driver12push_no_clipEv,"ax",@progbits
 2984              	.LHOTB47:
 2985              		.align 2
 2986              		.p2align 4,,15
 2987              		.globl	_ZN18Fl_Graphics_Driver12push_no_clipEv
 2989              	_ZN18Fl_Graphics_Driver12push_no_clipEv:
 2990              	.LFB514:
 613:fltk-1.3.4-1/src/fl_rect.cxx ****  272              	.LFE355:
 2991              		.loc 2 613 0
 2992              		.cfi_startproc
 2993              	.LVL335:
 614:fltk-1.3.4-1/src/fl_rect.cxx ****  274              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"axG
 2994              		.loc 2 614 0
 2995 0000 8B876806 		movl	1640(%rdi), %eax
 2995      0000
 2996 0006 83F808   		cmpl	$8, %eax
 2997 0009 7F25     		jg	.L220
 614:fltk-1.3.4-1/src/fl_rect.cxx ****  274              		.section	.text.unlikely._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"axG
 2998              		.loc 2 614 0 is_stmt 0 discriminator 1
 2999 000b 83C001   		addl	$1, %eax
 3000 000e 89876806 		movl	%eax, 1640(%rdi)
 3000      0000
 3001 0014 4898     		cltq
 3002 0016 48C784C7 		movq	$0, 1648(%rdi,%rax,8)
 3002      70060000 
 3002      00000000 
 3003              	.LBB190:
 3004              	.LBB191:
 3005              		.loc 3 129 0 is_stmt 1 discriminator 1
 3006 0022 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3006      000000
 3007              	.LVL336:
 3008 0029 E9000000 		jmp	_ZN18Fl_Graphics_Driver12restore_clipEv
 3008      00
 3009              	.LVL337:
 3010 002e 6690     		.p2align 4,,10
 3011              		.p2align 3
 3012              	.L220:
 3013              	.LBE191:
 3014              	.LBE190:
 613:fltk-1.3.4-1/src/fl_rect.cxx ****  272              	.LFE355:
 3015              		.loc 2 613 0
 3016 0030 4883EC08 		subq	$8, %rsp
 3017              		.cfi_def_cfa_offset 16
 615:fltk-1.3.4-1/src/fl_rect.cxx ****  275              	.LCOLDE11:
 3018              		.loc 2 615 0
 3019 0034 BF000000 		movl	$.LC46, %edi
 3019      00
 3020              	.LVL338:
 3021 0039 31C0     		xorl	%eax, %eax
 3022 003b FF150000 		call	*_ZN2Fl7warningE(%rip)
 3022      0000
 3023              	.LVL339:
 3024              	.LBB194:
 3025              	.LBB192:
 3026              		.loc 3 129 0
 3027 0041 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3027      000000
 3028              	.LBE192:
 3029              	.LBE194:
 617:fltk-1.3.4-1/src/fl_rect.cxx ****  277              	.LHOTE11:
 3030              		.loc 2 617 0
 3031 0048 4883C408 		addq	$8, %rsp
 3032              		.cfi_def_cfa_offset 8
 3033              	.LBB195:
 3034              	.LBB193:
 3035              		.loc 3 129 0
 3036 004c E9000000 		jmp	_ZN18Fl_Graphics_Driver12restore_clipEv
 3036      00
 3037              	.LVL340:
 3038              	.LBE193:
 3039              	.LBE195:
 3040              		.cfi_endproc
 3041              	.LFE514:
 3043              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12push_no_clipEv
 3044              	.LCOLDE47:
 3045              		.section	.text._ZN18Fl_Graphics_Driver12push_no_clipEv
 3046              	.LHOTE47:
 3047              		.section	.rodata.str1.8
 3048 004f 00       		.align 8
 3049              	.LC48:
 3050 0050 666C5F70 		.string	"fl_pop_clip: clip stack underflow!\n"
 3050      6F705F63 
 3050      6C69703A 
 3050      20636C69 
 3050      70207374 
 3051              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8pop_clipEv,"ax",@progbits
 3052              		.align 2
 3053              	.LCOLDB49:
 3054              		.section	.text._ZN18Fl_Graphics_Driver8pop_clipEv,"ax",@progbits
 3055              	.LHOTB49:
 3056              		.align 2
 3057              		.p2align 4,,15
 3058              		.globl	_ZN18Fl_Graphics_Driver8pop_clipEv
 3060              	_ZN18Fl_Graphics_Driver8pop_clipEv:
 3061              	.LFB515:
 620:fltk-1.3.4-1/src/fl_rect.cxx ****  280              	.LCOLDB12:
 3062              		.loc 2 620 0
 3063              		.cfi_startproc
 3064              	.LVL341:
 3065 0000 4883EC08 		subq	$8, %rsp
 3066              		.cfi_def_cfa_offset 16
 3067              	.LBB196:
 621:fltk-1.3.4-1/src/fl_rect.cxx ****  281              		.section	.text._ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"axG",@progbits,_
 3068              		.loc 2 621 0
 3069 0004 48638768 		movslq	1640(%rdi), %rax
 3069      060000
 3070 000b 85C0     		testl	%eax, %eax
 3071 000d 7E31     		jle	.L224
 3072              	.LBB197:
 622:fltk-1.3.4-1/src/fl_rect.cxx ****  282              	.LHOTB12:
 3073              		.loc 2 622 0
 3074 000f 8D50FF   		leal	-1(%rax), %edx
 3075 0012 89976806 		movl	%edx, 1640(%rdi)
 3075      0000
 3076 0018 488BBCC7 		movq	1648(%rdi,%rax,8), %rdi
 3076      70060000 
 3077              	.LVL342:
 623:fltk-1.3.4-1/src/fl_rect.cxx ****  283              		.align 2
 3078              		.loc 2 623 0
 3079 0020 4885FF   		testq	%rdi, %rdi
 3080 0023 7405     		je	.L225
 623:fltk-1.3.4-1/src/fl_rect.cxx ****  283              		.align 2
 3081              		.loc 2 623 0 is_stmt 0 discriminator 1
 3082 0025 E8000000 		call	XDestroyRegion
 3082      00
 3083              	.LVL343:
 3084              	.L225:
 3085              	.LBE197:
 3086              	.LBE196:
 3087              	.LBB198:
 3088              	.LBB199:
 3089              		.loc 3 129 0 is_stmt 1
 3090 002a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3090      000000
 3091              	.LBE199:
 3092              	.LBE198:
 626:fltk-1.3.4-1/src/fl_rect.cxx ****  287              	_ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii:
 3093              		.loc 2 626 0
 3094 0031 4883C408 		addq	$8, %rsp
 3095              		.cfi_remember_state
 3096              		.cfi_def_cfa_offset 8
 3097              	.LBB201:
 3098              	.LBB200:
 3099              		.loc 3 129 0
 3100 0035 E9000000 		jmp	_ZN18Fl_Graphics_Driver12restore_clipEv
 3100      00
 3101              	.LVL344:
 3102 003a 660F1F44 		.p2align 4,,10
 3102      0000
 3103              		.p2align 3
 3104              	.L224:
 3105              		.cfi_restore_state
 3106              	.LBE200:
 3107              	.LBE201:
 3108              	.LBB202:
 624:fltk-1.3.4-1/src/fl_rect.cxx ****  284              		.p2align 4,,15
 3109              		.loc 2 624 0
 3110 0040 BF000000 		movl	$.LC48, %edi
 3110      00
 3111              	.LVL345:
 3112 0045 31C0     		xorl	%eax, %eax
 3113 0047 FF150000 		call	*_ZN2Fl7warningE(%rip)
 3113      0000
 3114              	.LVL346:
 3115 004d EBDB     		jmp	.L225
 3116              	.LBE202:
 3117              		.cfi_endproc
 3118              	.LFE515:
 3120              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8pop_clipEv
 3121              	.LCOLDE49:
 3122              		.section	.text._ZN18Fl_Graphics_Driver8pop_clipEv
 3123              	.LHOTE49:
 3124              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11clip_regionEP8_XRegion,"ax",@progbits
 3125              		.align 2
 3126              	.LCOLDB50:
 3127              		.section	.text._ZN18Fl_Graphics_Driver11clip_regionEP8_XRegion,"ax",@progbits
 3128              	.LHOTB50:
 3129              		.align 2
 3130              		.p2align 4,,15
 3131              		.globl	_ZN18Fl_Graphics_Driver11clip_regionEP8_XRegion
 3133              	_ZN18Fl_Graphics_Driver11clip_regionEP8_XRegion:
 3134              	.LFB511:
 565:fltk-1.3.4-1/src/fl_rect.cxx ****  230              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 3135              		.loc 2 565 0
 3136              		.cfi_startproc
 3137              	.LVL347:
 3138 0000 55       		pushq	%rbp
 3139              		.cfi_def_cfa_offset 16
 3140              		.cfi_offset 6, -16
 3141 0001 53       		pushq	%rbx
 3142              		.cfi_def_cfa_offset 24
 3143              		.cfi_offset 3, -24
 3144 0002 4889FB   		movq	%rdi, %rbx
 3145 0005 4889F5   		movq	%rsi, %rbp
 3146 0008 4883EC08 		subq	$8, %rsp
 3147              		.cfi_def_cfa_offset 32
 566:fltk-1.3.4-1/src/fl_rect.cxx ****  231              	.LCOLDE9:
 3148              		.loc 2 566 0
 3149 000c 48638768 		movslq	1640(%rdi), %rax
 3149      060000
 3150 0013 488BBCC7 		movq	1648(%rdi,%rax,8), %rdi
 3150      70060000 
 3151              	.LVL348:
 567:fltk-1.3.4-1/src/fl_rect.cxx ****  232              		.section	.text._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"axG",@p
 3152              		.loc 2 567 0
 3153 001b 4885FF   		testq	%rdi, %rdi
 3154 001e 740C     		je	.L231
 567:fltk-1.3.4-1/src/fl_rect.cxx ****  232              		.section	.text._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"axG",@p
 3155              		.loc 2 567 0 is_stmt 0 discriminator 1
 3156 0020 E8000000 		call	XDestroyRegion
 3156      00
 3157              	.LVL349:
 3158 0025 48638368 		movslq	1640(%rbx), %rax
 3158      060000
 3159              	.L231:
 568:fltk-1.3.4-1/src/fl_rect.cxx ****  233              	.LHOTE9:
 3160              		.loc 2 568 0 is_stmt 1
 3161 002c 4889ACC3 		movq	%rbp, 1648(%rbx,%rax,8)
 3161      70060000 
 3162              	.LBB203:
 3163              	.LBB204:
 3164              		.loc 3 129 0
 3165 0034 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3165      000000
 3166              	.LBE204:
 3167              	.LBE203:
 570:fltk-1.3.4-1/src/fl_rect.cxx ****  235              		.align 2
 3168              		.loc 2 570 0
 3169 003b 4883C408 		addq	$8, %rsp
 3170              		.cfi_def_cfa_offset 24
 3171 003f 5B       		popq	%rbx
 3172              		.cfi_def_cfa_offset 16
 3173              	.LVL350:
 3174 0040 5D       		popq	%rbp
 3175              		.cfi_def_cfa_offset 8
 3176              	.LVL351:
 3177              	.LBB206:
 3178              	.LBB205:
 3179              		.loc 3 129 0
 3180 0041 E9000000 		jmp	_ZN18Fl_Graphics_Driver12restore_clipEv
 3180      00
 3181              	.LVL352:
 3182              	.LBE205:
 3183              	.LBE206:
 3184              		.cfi_endproc
 3185              	.LFE511:
 3187              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11clip_regionEP8_XRegion
 3188              	.LCOLDE50:
 3189              		.section	.text._ZN18Fl_Graphics_Driver11clip_regionEP8_XRegion
 3190              	.LHOTE50:
 3191              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11clip_regionEv,"ax",@progbits
 3192              		.align 2
 3193              	.LCOLDB51:
 3194              		.section	.text._ZN18Fl_Graphics_Driver11clip_regionEv,"ax",@progbits
 3195              	.LHOTB51:
 3196              		.align 2
 3197              		.p2align 4,,15
 3198              		.globl	_ZN18Fl_Graphics_Driver11clip_regionEv
 3200              	_ZN18Fl_Graphics_Driver11clip_regionEv:
 3201              	.LFB512:
 572:fltk-1.3.4-1/src/fl_rect.cxx ****  237              		.section	.text._ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"ax
 3202              		.loc 2 572 0
 3203              		.cfi_startproc
 3204              	.LVL353:
 573:fltk-1.3.4-1/src/fl_rect.cxx ****  238              	.LHOTB10:
 3205              		.loc 2 573 0
 3206 0000 48638768 		movslq	1640(%rdi), %rax
 3206      060000
 3207 0007 488B84C7 		movq	1648(%rdi,%rax,8), %rax
 3207      70060000 
 574:fltk-1.3.4-1/src/fl_rect.cxx ****  239              		.align 2
 3208              		.loc 2 574 0
 3209 000f C3       		ret
 3210              		.cfi_endproc
 3211              	.LFE512:
 3213              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11clip_regionEv
 3214              	.LCOLDE51:
 3215              		.section	.text._ZN18Fl_Graphics_Driver11clip_regionEv
 3216              	.LHOTE51:
 3217              		.weak	_ZTS9Fl_Device
 3218              		.section	.rodata._ZTS9Fl_Device,"aG",@progbits,_ZTS9Fl_Device,comdat
 3219              		.align 8
 3222              	_ZTS9Fl_Device:
 3223 0000 39466C5F 		.string	"9Fl_Device"
 3223      44657669 
 3223      636500
 3224              		.weak	_ZTI9Fl_Device
 3225              		.section	.rodata._ZTI9Fl_Device,"aG",@progbits,_ZTI9Fl_Device,comdat
 3226              		.align 8
 3229              	_ZTI9Fl_Device:
 3230 0000 00000000 		.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
 3230      00000000 
 3231 0008 00000000 		.quad	_ZTS9Fl_Device
 3231      00000000 
 3232              		.weak	_ZTS18Fl_Graphics_Driver
 3233              		.section	.rodata._ZTS18Fl_Graphics_Driver,"aG",@progbits,_ZTS18Fl_Graphics_Driver,comdat
 3234              		.align 16
 3237              	_ZTS18Fl_Graphics_Driver:
 3238 0000 3138466C 		.string	"18Fl_Graphics_Driver"
 3238      5F477261 
 3238      70686963 
 3238      735F4472 
 3238      69766572 
 3239              		.weak	_ZTI18Fl_Graphics_Driver
 3240              		.section	.rodata._ZTI18Fl_Graphics_Driver,"aG",@progbits,_ZTI18Fl_Graphics_Driver,comdat
 3241              		.align 8
 3244              	_ZTI18Fl_Graphics_Driver:
 3245 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3245      00000000 
 3246 0008 00000000 		.quad	_ZTS18Fl_Graphics_Driver
 3246      00000000 
 3247 0010 00000000 		.quad	_ZTI9Fl_Device
 3247      00000000 
 3248              		.weak	_ZTV18Fl_Graphics_Driver
 3249              		.section	.rodata._ZTV18Fl_Graphics_Driver,"aG",@progbits,_ZTV18Fl_Graphics_Driver,comdat
 3250              		.align 8
 3253              	_ZTV18Fl_Graphics_Driver:
 3254 0000 00000000 		.quad	0
 3254      00000000 
 3255 0008 00000000 		.quad	_ZTI18Fl_Graphics_Driver
 3255      00000000 
 3256 0010 00000000 		.quad	_ZN18Fl_Graphics_Driver10class_nameEv
 3256      00000000 
 3257 0018 00000000 		.quad	_ZN18Fl_Graphics_DriverD1Ev
 3257      00000000 
 3258 0020 00000000 		.quad	_ZN18Fl_Graphics_DriverD0Ev
 3258      00000000 
 3259 0028 00000000 		.quad	_ZN18Fl_Graphics_Driver4rectEiiii
 3259      00000000 
 3260 0030 00000000 		.quad	_ZN18Fl_Graphics_Driver5rectfEiiii
 3260      00000000 
 3261 0038 00000000 		.quad	_ZN18Fl_Graphics_Driver10line_styleEiiPc
 3261      00000000 
 3262 0040 00000000 		.quad	_ZN18Fl_Graphics_Driver6xylineEiii
 3262      00000000 
 3263 0048 00000000 		.quad	_ZN18Fl_Graphics_Driver6xylineEiiii
 3263      00000000 
 3264 0050 00000000 		.quad	_ZN18Fl_Graphics_Driver6xylineEiiiii
 3264      00000000 
 3265 0058 00000000 		.quad	_ZN18Fl_Graphics_Driver6yxlineEiii
 3265      00000000 
 3266 0060 00000000 		.quad	_ZN18Fl_Graphics_Driver6yxlineEiiii
 3266      00000000 
 3267 0068 00000000 		.quad	_ZN18Fl_Graphics_Driver6yxlineEiiiii
 3267      00000000 
 3268 0070 00000000 		.quad	_ZN18Fl_Graphics_Driver4lineEiiii
 3268      00000000 
 3269 0078 00000000 		.quad	_ZN18Fl_Graphics_Driver4lineEiiiiii
 3269      00000000 
 3270 0080 00000000 		.quad	_ZN18Fl_Graphics_Driver4drawEPKciii
 3270      00000000 
 3271 0088 00000000 		.quad	_ZN18Fl_Graphics_Driver4drawEiPKciii
 3271      00000000 
 3272 0090 00000000 		.quad	_ZN18Fl_Graphics_Driver8rtl_drawEPKciii
 3272      00000000 
 3273 0098 00000000 		.quad	_ZN18Fl_Graphics_Driver5colorEj
 3273      00000000 
 3274 00a0 00000000 		.quad	_ZN18Fl_Graphics_Driver5colorEhhh
 3274      00000000 
 3275 00a8 00000000 		.quad	_ZN18Fl_Graphics_Driver5pointEii
 3275      00000000 
 3276 00b0 00000000 		.quad	_ZN18Fl_Graphics_Driver4loopEiiiiii
 3276      00000000 
 3277 00b8 00000000 		.quad	_ZN18Fl_Graphics_Driver4loopEiiiiiiii
 3277      00000000 
 3278 00c0 00000000 		.quad	_ZN18Fl_Graphics_Driver7polygonEiiiiii
 3278      00000000 
 3279 00c8 00000000 		.quad	_ZN18Fl_Graphics_Driver7polygonEiiiiiiii
 3279      00000000 
 3280 00d0 00000000 		.quad	_ZN18Fl_Graphics_Driver12begin_pointsEv
 3280      00000000 
 3281 00d8 00000000 		.quad	_ZN18Fl_Graphics_Driver10begin_lineEv
 3281      00000000 
 3282 00e0 00000000 		.quad	_ZN18Fl_Graphics_Driver10begin_loopEv
 3282      00000000 
 3283 00e8 00000000 		.quad	_ZN18Fl_Graphics_Driver13begin_polygonEv
 3283      00000000 
 3284 00f0 00000000 		.quad	_ZN18Fl_Graphics_Driver6vertexEdd
 3284      00000000 
 3285 00f8 00000000 		.quad	_ZN18Fl_Graphics_Driver5curveEdddddddd
 3285      00000000 
 3286 0100 00000000 		.quad	_ZN18Fl_Graphics_Driver6circleEddd
 3286      00000000 
 3287 0108 00000000 		.quad	_ZN18Fl_Graphics_Driver3arcEddddd
 3287      00000000 
 3288 0110 00000000 		.quad	_ZN18Fl_Graphics_Driver3arcEiiiidd
 3288      00000000 
 3289 0118 00000000 		.quad	_ZN18Fl_Graphics_Driver3pieEiiiidd
 3289      00000000 
 3290 0120 00000000 		.quad	_ZN18Fl_Graphics_Driver10end_pointsEv
 3290      00000000 
 3291 0128 00000000 		.quad	_ZN18Fl_Graphics_Driver8end_lineEv
 3291      00000000 
 3292 0130 00000000 		.quad	_ZN18Fl_Graphics_Driver8end_loopEv
 3292      00000000 
 3293 0138 00000000 		.quad	_ZN18Fl_Graphics_Driver11end_polygonEv
 3293      00000000 
 3294 0140 00000000 		.quad	_ZN18Fl_Graphics_Driver21begin_complex_polygonEv
 3294      00000000 
 3295 0148 00000000 		.quad	_ZN18Fl_Graphics_Driver3gapEv
 3295      00000000 
 3296 0150 00000000 		.quad	_ZN18Fl_Graphics_Driver19end_complex_polygonEv
 3296      00000000 
 3297 0158 00000000 		.quad	_ZN18Fl_Graphics_Driver18transformed_vertexEdd
 3297      00000000 
 3298 0160 00000000 		.quad	_ZN18Fl_Graphics_Driver9push_clipEiiii
 3298      00000000 
 3299 0168 00000000 		.quad	_ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_
 3299      00000000 
 3300 0170 00000000 		.quad	_ZN18Fl_Graphics_Driver11not_clippedEiiii
 3300      00000000 
 3301 0178 00000000 		.quad	_ZN18Fl_Graphics_Driver12push_no_clipEv
 3301      00000000 
 3302 0180 00000000 		.quad	_ZN18Fl_Graphics_Driver8pop_clipEv
 3302      00000000 
 3303 0188 00000000 		.quad	_ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii
 3303      00000000 
 3304 0190 00000000 		.quad	_ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii
 3304      00000000 
 3305 0198 00000000 		.quad	_ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 3305      00000000 
 3306 01a0 00000000 		.quad	_ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 3306      00000000 
 3307 01a8 00000000 		.quad	_ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 3307      00000000 
 3308 01b0 00000000 		.quad	_ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
 3308      00000000 
 3309 01b8 00000000 		.quad	_ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 3309      00000000 
 3310 01c0 00000000 		.quad	_ZN18Fl_Graphics_Driver4fontEii
 3310      00000000 
 3311 01c8 00000000 		.quad	_ZN18Fl_Graphics_Driver5widthEPKci
 3311      00000000 
 3312 01d0 00000000 		.quad	_ZN18Fl_Graphics_Driver5widthEj
 3312      00000000 
 3313 01d8 00000000 		.quad	_ZN18Fl_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_
 3313      00000000 
 3314 01e0 00000000 		.quad	_ZN18Fl_Graphics_Driver6heightEv
 3314      00000000 
 3315 01e8 00000000 		.quad	_ZN18Fl_Graphics_Driver7descentEv
 3315      00000000 
 3316              		.text
 3317              	.Letext0:
 3318              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
 3319              	.Letext_cold0:
 3320              		.file 4 "fltk-1.3.4-1/FL/fl_types.h"
 3321              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3322              		.file 6 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3323              		.file 7 "/usr/include/libio.h"
 3324              		.file 8 "fltk-1.3.4-1/FL/Enumerations.H"
 3325              		.file 9 "fltk-1.3.4-1/FL/Fl_Image.H"
 3326              		.file 10 "/usr/include/X11/X.h"
 3327              		.file 11 "/usr/include/X11/Xlib.h"
 3328              		.file 12 "/usr/include/X11/Xutil.h"
 3329              		.file 13 "fltk-1.3.4-1/FL/x.H"
 3330              		.file 14 "/usr/include/stdio.h"
 3331              		.file 15 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_rect.cxx
     /tmp/cc4zVLZY.s:16     .text._ZN9Fl_Device10class_nameEv:0000000000000000 _ZN9Fl_Device10class_nameEv
     /tmp/cc4zVLZY.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD2Ev
     /tmp/cc4zVLZY.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD1Ev
     /tmp/cc4zVLZY.s:65     .text._ZN18Fl_Graphics_Driver4drawEPKciii:0000000000000000 _ZN18Fl_Graphics_Driver4drawEPKciii
     /tmp/cc4zVLZY.s:87     .text._ZN18Fl_Graphics_Driver4drawEiPKciii:0000000000000000 _ZN18Fl_Graphics_Driver4drawEiPKciii
     /tmp/cc4zVLZY.s:109    .text._ZN18Fl_Graphics_Driver8rtl_drawEPKciii:0000000000000000 _ZN18Fl_Graphics_Driver8rtl_drawEPKciii
     /tmp/cc4zVLZY.s:131    .text._ZN18Fl_Graphics_Driver5colorEj:0000000000000000 _ZN18Fl_Graphics_Driver5colorEj
     /tmp/cc4zVLZY.s:155    .text._ZN18Fl_Graphics_Driver5colorEhhh:0000000000000000 _ZN18Fl_Graphics_Driver5colorEhhh
     /tmp/cc4zVLZY.s:177    .text._ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii:0000000000000000 _ZN18Fl_Graphics_Driver10draw_imageEPKhiiiiii
     /tmp/cc4zVLZY.s:199    .text._ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii:0000000000000000 _ZN18Fl_Graphics_Driver15draw_image_monoEPKhiiiiii
     /tmp/cc4zVLZY.s:221    .text._ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii:0000000000000000 _ZN18Fl_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
     /tmp/cc4zVLZY.s:243    .text._ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii:0000000000000000 _ZN18Fl_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
     /tmp/cc4zVLZY.s:265    .text._ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii:0000000000000000 _ZN18Fl_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
     /tmp/cc4zVLZY.s:287    .text._ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii:0000000000000000 _ZN18Fl_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
     /tmp/cc4zVLZY.s:309    .text._ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii:0000000000000000 _ZN18Fl_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
     /tmp/cc4zVLZY.s:331    .text._ZN18Fl_Graphics_Driver10class_nameEv:0000000000000000 _ZN18Fl_Graphics_Driver10class_nameEv
     /tmp/cc4zVLZY.s:355    .text._ZN18Fl_Graphics_Driver4fontEii:0000000000000000 _ZN18Fl_Graphics_Driver4fontEii
     /tmp/cc4zVLZY.s:380    .text._ZN18Fl_Graphics_Driver5widthEPKci:0000000000000000 _ZN18Fl_Graphics_Driver5widthEPKci
     /tmp/cc4zVLZY.s:404    .text._ZN18Fl_Graphics_Driver5widthEj:0000000000000000 _ZN18Fl_Graphics_Driver5widthEj
     /tmp/cc4zVLZY.s:449    .text._ZN18Fl_Graphics_Driver6heightEv:0000000000000000 _ZN18Fl_Graphics_Driver6heightEv
     /tmp/cc4zVLZY.s:473    .text._ZN18Fl_Graphics_Driver7descentEv:0000000000000000 _ZN18Fl_Graphics_Driver7descentEv
     /tmp/cc4zVLZY.s:494    .text._ZL13clip_to_shortRiS_S_S_:0000000000000000 _ZL13clip_to_shortRiS_S_S_
     /tmp/cc4zVLZY.s:662    .text._ZN18Fl_Graphics_Driver4rectEiiii:0000000000000000 _ZN18Fl_Graphics_Driver4rectEiiii
     /tmp/cc4zVLZY.s:748    .text._ZN18Fl_Graphics_Driver5rectfEiiii:0000000000000000 _ZN18Fl_Graphics_Driver5rectfEiiii
     /tmp/cc4zVLZY.s:832    .text._ZN18Fl_Graphics_Driver6xylineEiii:0000000000000000 _ZN18Fl_Graphics_Driver6xylineEiii
     /tmp/cc4zVLZY.s:964    .text._ZN18Fl_Graphics_Driver6yxlineEiii:0000000000000000 _ZN18Fl_Graphics_Driver6yxlineEiii
     /tmp/cc4zVLZY.s:1098   .text._ZN18Fl_Graphics_Driver4lineEiiii:0000000000000000 _ZN18Fl_Graphics_Driver4lineEiiii
     /tmp/cc4zVLZY.s:1142   .text._ZN18Fl_Graphics_Driver6xylineEiiii:0000000000000000 _ZN18Fl_Graphics_Driver6xylineEiiii
     /tmp/cc4zVLZY.s:1296   .text._ZN18Fl_Graphics_Driver6xylineEiiiii:0000000000000000 _ZN18Fl_Graphics_Driver6xylineEiiiii
     /tmp/cc4zVLZY.s:1472   .text._ZN18Fl_Graphics_Driver6yxlineEiiii:0000000000000000 _ZN18Fl_Graphics_Driver6yxlineEiiii
     /tmp/cc4zVLZY.s:1626   .text._ZN18Fl_Graphics_Driver6yxlineEiiiii:0000000000000000 _ZN18Fl_Graphics_Driver6yxlineEiiiii
     /tmp/cc4zVLZY.s:1802   .text._ZN18Fl_Graphics_Driver4lineEiiiiii:0000000000000000 _ZN18Fl_Graphics_Driver4lineEiiiiii
     /tmp/cc4zVLZY.s:1873   .text._ZN18Fl_Graphics_Driver4loopEiiiiii:0000000000000000 _ZN18Fl_Graphics_Driver4loopEiiiiii
     /tmp/cc4zVLZY.s:1947   .text._ZN18Fl_Graphics_Driver4loopEiiiiiiii:0000000000000000 _ZN18Fl_Graphics_Driver4loopEiiiiiiii
     /tmp/cc4zVLZY.s:2030   .text._ZN18Fl_Graphics_Driver7polygonEiiiiii:0000000000000000 _ZN18Fl_Graphics_Driver7polygonEiiiiii
     /tmp/cc4zVLZY.s:2117   .text._ZN18Fl_Graphics_Driver7polygonEiiiiiiii:0000000000000000 _ZN18Fl_Graphics_Driver7polygonEiiiiiiii
     /tmp/cc4zVLZY.s:2211   .text._ZN18Fl_Graphics_Driver5pointEii:0000000000000000 _ZN18Fl_Graphics_Driver5pointEii
     /tmp/cc4zVLZY.s:2282   .text._ZN18Fl_Graphics_Driver11not_clippedEiiii:0000000000000000 _ZN18Fl_Graphics_Driver11not_clippedEiiii
     /tmp/cc4zVLZY.s:2383   .text._ZN9Fl_DeviceD0Ev:0000000000000000 _ZN9Fl_DeviceD0Ev
     /tmp/cc4zVLZY.s:2407   .text._ZN18Fl_Graphics_DriverD2Ev:0000000000000000 _ZN18Fl_Graphics_DriverD2Ev
     /tmp/cc4zVLZY.s:3253   .rodata._ZTV18Fl_Graphics_Driver:0000000000000000 _ZTV18Fl_Graphics_Driver
     /tmp/cc4zVLZY.s:2407   .text._ZN18Fl_Graphics_DriverD2Ev:0000000000000000 _ZN18Fl_Graphics_DriverD1Ev
     /tmp/cc4zVLZY.s:2445   .text._ZN18Fl_Graphics_DriverD0Ev:0000000000000000 _ZN18Fl_Graphics_DriverD0Ev
     /tmp/cc4zVLZY.s:2487   .text._Z16XRectangleRegioniiii:0000000000000000 _Z16XRectangleRegioniiii
     /tmp/cc4zVLZY.s:2578   .text._ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_:0000000000000000 _ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_
     /tmp/cc4zVLZY.s:2771   .text._ZN18Fl_Graphics_Driver12restore_clipEv:0000000000000000 _ZN18Fl_Graphics_Driver12restore_clipEv
     /tmp/cc4zVLZY.s:2829   .text._ZN18Fl_Graphics_Driver9push_clipEiiii:0000000000000000 _ZN18Fl_Graphics_Driver9push_clipEiiii
     /tmp/cc4zVLZY.s:2989   .text._ZN18Fl_Graphics_Driver12push_no_clipEv:0000000000000000 _ZN18Fl_Graphics_Driver12push_no_clipEv
     /tmp/cc4zVLZY.s:3060   .text._ZN18Fl_Graphics_Driver8pop_clipEv:0000000000000000 _ZN18Fl_Graphics_Driver8pop_clipEv
     /tmp/cc4zVLZY.s:3133   .text._ZN18Fl_Graphics_Driver11clip_regionEP8_XRegion:0000000000000000 _ZN18Fl_Graphics_Driver11clip_regionEP8_XRegion
     /tmp/cc4zVLZY.s:3200   .text._ZN18Fl_Graphics_Driver11clip_regionEv:0000000000000000 _ZN18Fl_Graphics_Driver11clip_regionEv
     /tmp/cc4zVLZY.s:3222   .rodata._ZTS9Fl_Device:0000000000000000 _ZTS9Fl_Device
     /tmp/cc4zVLZY.s:3229   .rodata._ZTI9Fl_Device:0000000000000000 _ZTI9Fl_Device
     /tmp/cc4zVLZY.s:3237   .rodata._ZTS18Fl_Graphics_Driver:0000000000000000 _ZTS18Fl_Graphics_Driver
     /tmp/cc4zVLZY.s:3244   .rodata._ZTI18Fl_Graphics_Driver:0000000000000000 _ZTI18Fl_Graphics_Driver
                           .group:0000000000000000 _ZN9Fl_DeviceD5Ev
                           .group:0000000000000000 _ZN18Fl_Graphics_DriverD5Ev
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
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef

UNDEFINED SYMBOLS
_ZN9Fl_Device8class_idE
_ZN18Fl_Graphics_Driver8class_idE
__stack_chk_fail
fl_line_width_
fl_gc
fl_window
fl_display
XDrawRectangle
XFillRectangle
XDrawLine
XDrawLines
XFillPolygon
XDrawPoint
XRectInRegion
_ZdlPv
free
XCreateRegion
XUnionRectWithRegion
XIntersectRegion
XClipBox
XDestroyRegion
XSetRegion
XSetClipMask
fl_graphics_driver
_ZN2Fl7warningE
_ZTVN10__cxxabiv117__class_type_infoE
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZN18Fl_Graphics_Driver10line_styleEiiPc
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
_ZN18Fl_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_
