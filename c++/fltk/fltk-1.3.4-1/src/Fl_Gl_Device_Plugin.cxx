   1              		.file	"Fl_Gl_Device_Plugin.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5              	.LC0:
   6 0000 666C746B 		.string	"fltk:device"
   6      3A646576 
   6      69636500 
   7              		.section	.text.unlikely._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_Device_Plugin5klassE
   8              		.align 2
   9              	.LCOLDB1:
  10              		.section	.text._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_Device_Plugin5klassEv,comdat
  11              	.LHOTB1:
  12              		.align 2
  13              		.p2align 4,,15
  14              		.section	.text.unlikely._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_Device_Plugin5klassE
  15              	.Ltext_cold0:
  16              		.section	.text._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_Device_Plugin5klassEv,comdat
  17              		.weak	_ZN16Fl_Device_Plugin5klassEv
  19              	_ZN16Fl_Device_Plugin5klassEv:
  20              	.LFB297:
  21              		.file 1 "fltk-1.3.4-1/FL/Fl_Device.H"
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
  85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
  87:fltk-1.3.4-1/FL/Fl_Device.H ****    
  88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the destructors of
  89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
  90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
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
 597:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Display_Device(Fl_Graphics_Driver *graphics_driver);
 598:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Display_Device *display_device();
 599:fltk-1.3.4-1/FL/Fl_Device.H **** };
 600:fltk-1.3.4-1/FL/Fl_Device.H **** 
 601:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 602:fltk-1.3.4-1/FL/Fl_Device.H ****  This plugin socket allows the integration of new device drivers for special
 603:fltk-1.3.4-1/FL/Fl_Device.H ****  window or screen types. 
 604:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is not intended for use outside the FLTK library.
 605:fltk-1.3.4-1/FL/Fl_Device.H ****  It is currently used to provide an automated printing
 606:fltk-1.3.4-1/FL/Fl_Device.H ****  service and screen capture for OpenGL windows, if linked with fltk_gl.
 607:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 608:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device_Plugin : public Fl_Plugin {
 609:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 610:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The constructor */
 611:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Device_Plugin(const char *pluginName)
 612:fltk-1.3.4-1/FL/Fl_Device.H ****   : Fl_Plugin(klass(), pluginName) { }
 613:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Returns the class name */
 614:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *klass() { return "fltk:device"; }
  22              		.loc 1 614 0
  23              		.cfi_startproc
  24              	.LVL0:
  25              		.loc 1 614 0
  26 0000 B8000000 		movl	$.LC0, %eax
  26      00
  27 0005 C3       		ret
  28              		.cfi_endproc
  29              	.LFE297:
  31              		.section	.text.unlikely._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_Device_Plugin5klassE
  32              	.LCOLDE1:
  33              		.section	.text._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_Device_Plugin5klassEv,comdat
  34              	.LHOTE1:
  35              		.section	.rodata.str1.1
  36              	.LC2:
  37 000c 6F70656E 		.string	"opengl.device.fltk.org"
  37      676C2E64 
  37      65766963 
  37      652E666C 
  37      746B2E6F 
  38              		.section	.text.unlikely._ZN19Fl_Gl_Device_Plugin4nameEv,"axG",@progbits,_ZN19Fl_Gl_Device_Plugin4n
  39              		.align 2
  40              	.LCOLDB3:
  41              		.section	.text._ZN19Fl_Gl_Device_Plugin4nameEv,"axG",@progbits,_ZN19Fl_Gl_Device_Plugin4nameEv,com
  42              	.LHOTB3:
  43              		.align 2
  44              		.p2align 4,,15
  45              		.weak	_ZN19Fl_Gl_Device_Plugin4nameEv
  47              	_ZN19Fl_Gl_Device_Plugin4nameEv:
  48              	.LFB527:
  49              		.file 2 "fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx"
   1:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    1              		.file	"Fl_Gl_Device_Plugin.cxx"
   2:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    5              	.LC0:
   6:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    6 0000 666C746B 		.string	"fltk:device"
   7:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    6      3A646576 
   8:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    6      69636500 
   9:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    7              		.section	.text.unlikely._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_D
  10:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    8              		.align 2
  11:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    9              	.LCOLDB1:
  12:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   10              		.section	.text._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_Device_Plu
  13:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   11              	.LHOTB1:
  14:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   12              		.align 2
  15:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   13              		.p2align 4,,15
  16:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   14              		.section	.text.unlikely._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_D
  17:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   15              	.Ltext_cold0:
  18:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   16              		.section	.text._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_Device_Plu
  19:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   17              		.weak	_ZN16Fl_Device_Plugin5klassEv
  20:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   19              	_ZN16Fl_Device_Plugin5klassEv:
  21:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   20              	.LFB297:
  22:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   21              		.file 1 "fltk-1.3.4-1/FL/Fl_Device.H"
  23:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    1:fltk-1.3.4-1/FL/Fl_Device.H **** //
  24:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
  25:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    3:fltk-1.3.4-1/FL/Fl_Device.H **** //
  26:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Su
  27:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
  28:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    6:fltk-1.3.4-1/FL/Fl_Device.H **** //
  29:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
  30:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    8:fltk-1.3.4-1/FL/Fl_Device.H **** //
  31:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights
  32:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with th
  33:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  34:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  35:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  36:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  37:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  38:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  39:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  40:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  41:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  42:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  43:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver,
  44:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  45:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  46:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  47:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  48:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  49:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  50:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
  51:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
  52:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
  53:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  54:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  55:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  56:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  57:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  58:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  59:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  60:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all g
  61:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  62:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  63:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  64:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  65:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  66:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
  67:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
  68:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
  69:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
  70:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  71:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w
  72:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  73:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  74:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
  75:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
  76:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  77:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  78:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
  79:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
  80:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
  81:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
  82:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
  83:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
  84:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  85:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
  86:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   64:fltk-1.3.4-1/FL/Fl_Device.H **** 
  87:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  88:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
  89:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type in
  90:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  91:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
  92:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  93:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  94:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class 
  95:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  96:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
  97:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  98:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
  99:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
 100:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   78:fltk-1.3.4-1/FL/Fl_Device.H ****    
 101:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be c
 102:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
 103:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ..
 104:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 105:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 106:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
  50              		.loc 2 106 0
  51              		.cfi_startproc
  52              	.LVL1:
  53              		.loc 2 106 0
  54 0000 B8000000 		movl	$.LC2, %eax
  54      00
  55 0005 C3       		ret
  56              		.cfi_endproc
  57              	.LFE527:
  59              		.section	.text.unlikely._ZN19Fl_Gl_Device_Plugin4nameEv,"axG",@progbits,_ZN19Fl_Gl_Device_Plugin4n
  60              	.LCOLDE3:
  61              		.section	.text._ZN19Fl_Gl_Device_Plugin4nameEv,"axG",@progbits,_ZN19Fl_Gl_Device_Plugin4nameEv,com
  62              	.LHOTE3:
  63              		.section	.text.unlikely._ZN19Fl_Gl_Device_PluginD2Ev,"axG",@progbits,_ZN19Fl_Gl_Device_PluginD5Ev,
  64              		.align 2
  65              	.LCOLDB4:
  66              		.section	.text._ZN19Fl_Gl_Device_PluginD2Ev,"axG",@progbits,_ZN19Fl_Gl_Device_PluginD5Ev,comdat
  67              	.LHOTB4:
  68              		.align 2
  69              		.p2align 4,,15
  70              		.weak	_ZN19Fl_Gl_Device_PluginD2Ev
  72              	_ZN19Fl_Gl_Device_PluginD2Ev:
  73              	.LFB531:
 103:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
  74              		.loc 2 103 0
  75              		.cfi_startproc
  76              	.LVL2:
  77              	.LBB65:
  78              	.LBB66:
 608:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  79              		.loc 1 608 0
  80 0000 48C70700 		movq	$_ZTV16Fl_Device_Plugin+16, (%rdi)
  80      000000
  81 0007 E9000000 		jmp	_ZN9Fl_PluginD2Ev
  81      00
  82              	.LVL3:
  83              	.LBE66:
  84              	.LBE65:
  85              		.cfi_endproc
  86              	.LFE531:
  88              		.section	.text.unlikely._ZN19Fl_Gl_Device_PluginD2Ev,"axG",@progbits,_ZN19Fl_Gl_Device_PluginD5Ev,
  89              	.LCOLDE4:
  90              		.section	.text._ZN19Fl_Gl_Device_PluginD2Ev,"axG",@progbits,_ZN19Fl_Gl_Device_PluginD5Ev,comdat
  91              	.LHOTE4:
  92              		.weak	_ZN19Fl_Gl_Device_PluginD1Ev
  93              		.set	_ZN19Fl_Gl_Device_PluginD1Ev,_ZN19Fl_Gl_Device_PluginD2Ev
  94              		.section	.text.unlikely._ZN19Fl_Gl_Device_PluginD0Ev,"axG",@progbits,_ZN19Fl_Gl_Device_PluginD5Ev,
  95              		.align 2
  96              	.LCOLDB5:
  97              		.section	.text._ZN19Fl_Gl_Device_PluginD0Ev,"axG",@progbits,_ZN19Fl_Gl_Device_PluginD5Ev,comdat
  98              	.LHOTB5:
  99              		.align 2
 100              		.p2align 4,,15
 101              		.weak	_ZN19Fl_Gl_Device_PluginD0Ev
 103              	_ZN19Fl_Gl_Device_PluginD0Ev:
 104              	.LFB533:
 103:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 105              		.loc 2 103 0
 106              		.cfi_startproc
 107              	.LVL4:
 108 0000 53       		pushq	%rbx
 109              		.cfi_def_cfa_offset 16
 110              		.cfi_offset 3, -16
 103:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 111              		.loc 2 103 0
 112 0001 4889FB   		movq	%rdi, %rbx
 113              	.LBB67:
 114              	.LBB68:
 115              	.LBB69:
 608:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 116              		.loc 1 608 0
 117 0004 48C70700 		movq	$_ZTV16Fl_Device_Plugin+16, (%rdi)
 117      000000
 118 000b E8000000 		call	_ZN9Fl_PluginD2Ev
 118      00
 119              	.LVL5:
 120              	.LBE69:
 121              	.LBE68:
 122              	.LBE67:
 103:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 123              		.loc 2 103 0
 124 0010 4889DF   		movq	%rbx, %rdi
 125 0013 5B       		popq	%rbx
 126              		.cfi_def_cfa_offset 8
 127              	.LVL6:
 128 0014 E9000000 		jmp	_ZdlPv
 128      00
 129              	.LVL7:
 130              		.cfi_endproc
 131              	.LFE533:
 133              		.section	.text.unlikely._ZN19Fl_Gl_Device_PluginD0Ev,"axG",@progbits,_ZN19Fl_Gl_Device_PluginD5Ev,
 134              	.LCOLDE5:
 135              		.section	.text._ZN19Fl_Gl_Device_PluginD0Ev,"axG",@progbits,_ZN19Fl_Gl_Device_PluginD5Ev,comdat
 136              	.LHOTE5:
 137              		.section	.text.unlikely._ZL20capture_gl_rectangleP12Fl_Gl_Windowiiii.constprop.8,"ax",@progbits
 138              	.LCOLDB7:
 139              		.section	.text._ZL20capture_gl_rectangleP12Fl_Gl_Windowiiii.constprop.8,"ax",@progbits
 140              	.LHOTB7:
 141              		.p2align 4,,15
 143              	_ZL20capture_gl_rectangleP12Fl_Gl_Windowiiii.constprop.8:
 144              	.LFB543:
  49:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
 145              		.loc 2 49 0
 146              		.cfi_startproc
 147              	.LVL8:
 148 0000 4157     		pushq	%r15
 149              		.cfi_def_cfa_offset 16
 150              		.cfi_offset 15, -16
 151 0002 4156     		pushq	%r14
 152              		.cfi_def_cfa_offset 24
 153              		.cfi_offset 14, -24
 154 0004 4189D7   		movl	%edx, %r15d
 155 0007 4155     		pushq	%r13
 156              		.cfi_def_cfa_offset 32
 157              		.cfi_offset 13, -32
 158 0009 4154     		pushq	%r12
 159              		.cfi_def_cfa_offset 40
 160              		.cfi_offset 12, -40
 161 000b 4989FD   		movq	%rdi, %r13
 162 000e 55       		pushq	%rbp
 163              		.cfi_def_cfa_offset 48
 164              		.cfi_offset 6, -48
 165 000f 53       		pushq	%rbx
 166              		.cfi_def_cfa_offset 56
 167              		.cfi_offset 3, -56
 168 0010 4489C5   		movl	%r8d, %ebp
 169 0013 89CB     		movl	%ecx, %ebx
  81:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
 170              		.loc 2 81 0
 171 0015 4101EF   		addl	%ebp, %r15d
  49:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
 172              		.loc 2 49 0
 173 0018 4883EC18 		subq	$24, %rsp
 174              		.cfi_def_cfa_offset 80
  63:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
 175              		.loc 2 63 0
 176 001c 488B07   		movq	(%rdi), %rax
  73:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 177              		.loc 2 73 0
 178 001f 448D645B 		leal	3(%rbx,%rbx,2), %r12d
 178      03
  49:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
 179              		.loc 2 49 0
 180 0024 8974240C 		movl	%esi, 12(%rsp)
  73:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 181              		.loc 2 73 0
 182 0028 4183E4FC 		andl	$-4, %r12d
  63:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
 183              		.loc 2 63 0
 184 002c FF5050   		call	*80(%rax)
 185              	.LVL9:
  66:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
 186              		.loc 2 66 0
 187 002f BF010000 		movl	$1, %edi
 187      00
 188 0034 E8000000 		call	glPushClientAttrib
 188      00
 189              	.LVL10:
  67:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
 190              		.loc 2 67 0
 191 0039 BE040000 		movl	$4, %esi
 191      00
 192 003e BF050D00 		movl	$3333, %edi
 192      00
 193 0043 E8000000 		call	glPixelStorei
 193      00
 194              	.LVL11:
  68:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
 195              		.loc 2 68 0
 196 0048 31F6     		xorl	%esi, %esi
 197 004a BF020D00 		movl	$3330, %edi
 197      00
 198 004f E8000000 		call	glPixelStorei
 198      00
 199              	.LVL12:
  69:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 200              		.loc 2 69 0
 201 0054 31F6     		xorl	%esi, %esi
 202 0056 BF030D00 		movl	$3331, %edi
 202      00
 203 005b E8000000 		call	glPixelStorei
 203      00
 204              	.LVL13:
  70:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w
 205              		.loc 2 70 0
 206 0060 31F6     		xorl	%esi, %esi
 207 0062 BF040D00 		movl	$3332, %edi
 207      00
 208 0067 E8000000 		call	glPixelStorei
 208      00
 209              	.LVL14:
  74:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
 210              		.loc 2 74 0
 211 006c 4489E0   		movl	%r12d, %eax
 212 006f 0FAFC5   		imull	%ebp, %eax
 213 0072 4863F8   		movslq	%eax, %rdi
 214 0075 E8000000 		call	_Znam
 214      00
 215              	.LVL15:
  81:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
 216              		.loc 2 81 0
 217 007a 660FEFC0 		pxor	%xmm0, %xmm0
 218 007e 4883EC08 		subq	$8, %rsp
 219              		.cfi_def_cfa_offset 88
 220 0082 89E9     		movl	%ebp, %ecx
 221 0084 89DA     		movl	%ebx, %edx
 222 0086 41B90114 		movl	$5121, %r9d
 222      0000
 223 008c 41B80719 		movl	$6407, %r8d
 223      0000
  74:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
 224              		.loc 2 74 0
 225 0092 4989C6   		movq	%rax, %r14
 226              	.LVL16:
  81:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
 227              		.loc 2 81 0
 228 0095 F3410F2A 		cvtsi2ss	44(%r13), %xmm0
 228      452C
 229 009b 50       		pushq	%rax
 230              		.cfi_def_cfa_offset 96
 231 009c 8B7C241C 		movl	28(%rsp), %edi
 232 00a0 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 233 00a4 F20F5805 		addsd	.LC6(%rip), %xmm0
 233      00000000 
 234 00ac F20F2CF0 		cvttsd2si	%xmm0, %esi
 235 00b0 4429FE   		subl	%r15d, %esi
 236 00b3 E8000000 		call	glReadPixels
 236      00
 237              	.LVL17:
  82:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
 238              		.loc 2 82 0
 239 00b8 E8000000 		call	glPopClientAttrib
 239      00
 240              	.LVL18:
  87:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
 241              		.loc 2 87 0
 242 00bd BF400000 		movl	$64, %edi
 242      00
 243 00c2 E8000000 		call	_Znwm
 243      00
 244              	.LVL19:
 245 00c7 4589E1   		movl	%r12d, %r9d
 246 00ca 4989C5   		movq	%rax, %r13
 247              	.LVL20:
 248 00cd 89E9     		movl	%ebp, %ecx
 249 00cf 89DA     		movl	%ebx, %edx
 250 00d1 4C89F6   		movq	%r14, %rsi
 251 00d4 4889C7   		movq	%rax, %rdi
 252 00d7 41B80300 		movl	$3, %r8d
 252      0000
 253 00dd E8000000 		call	_ZN12Fl_RGB_ImageC1EPKhiiii
 253      00
 254              	.LVL21:
  88:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type in
 255              		.loc 2 88 0
 256 00e2 41C74530 		movl	$1, 48(%r13)
 256      01000000 
  90:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
 257              		.loc 2 90 0
 258 00ea 4883C428 		addq	$40, %rsp
 259              		.cfi_def_cfa_offset 56
 260 00ee 4C89E8   		movq	%r13, %rax
 261 00f1 5B       		popq	%rbx
 262              		.cfi_def_cfa_offset 48
 263              	.LVL22:
 264 00f2 5D       		popq	%rbp
 265              		.cfi_def_cfa_offset 40
 266              	.LVL23:
 267 00f3 415C     		popq	%r12
 268              		.cfi_def_cfa_offset 32
 269              	.LVL24:
 270 00f5 415D     		popq	%r13
 271              		.cfi_def_cfa_offset 24
 272              	.LVL25:
 273 00f7 415E     		popq	%r14
 274              		.cfi_def_cfa_offset 16
 275              	.LVL26:
 276 00f9 415F     		popq	%r15
 277              		.cfi_def_cfa_offset 8
 278 00fb C3       		ret
 279              		.cfi_endproc
 280              	.LFE543:
 282              		.section	.text.unlikely._ZL20capture_gl_rectangleP12Fl_Gl_Windowiiii.constprop.8
 283              	.LCOLDE7:
 284              		.section	.text._ZL20capture_gl_rectangleP12Fl_Gl_Windowiiii.constprop.8
 285              	.LHOTE7:
 286              		.section	.text.unlikely._ZN19Fl_Gl_Device_Plugin5printEP9Fl_Widgetiii,"axG",@progbits,_ZN19Fl_Gl_D
 287              		.align 2
 288              	.LCOLDB8:
 289              		.section	.text._ZN19Fl_Gl_Device_Plugin5printEP9Fl_Widgetiii,"axG",@progbits,_ZN19Fl_Gl_Device_Plu
 290              	.LHOTB8:
 291              		.align 2
 292              		.p2align 4,,15
 293              		.weak	_ZN19Fl_Gl_Device_Plugin5printEP9Fl_Widgetiii
 295              	_ZN19Fl_Gl_Device_Plugin5printEP9Fl_Widgetiii:
 296              	.LFB528:
 107:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 297              		.loc 2 107 0
 298              		.cfi_startproc
 299              	.LVL27:
 300 0000 4154     		pushq	%r12
 301              		.cfi_def_cfa_offset 16
 302              		.cfi_offset 12, -16
 303 0002 55       		pushq	%rbp
 304              		.cfi_def_cfa_offset 24
 305              		.cfi_offset 6, -24
 108:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
 306              		.loc 2 108 0
 307 0003 4889F7   		movq	%rsi, %rdi
 308              	.LVL28:
 107:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 309              		.loc 2 107 0
 310 0006 53       		pushq	%rbx
 311              		.cfi_def_cfa_offset 32
 312              		.cfi_offset 3, -32
 313              		.loc 2 108 0
 314 0007 488B06   		movq	(%rsi), %rax
 107:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 315              		.loc 2 107 0
 316 000a 89D3     		movl	%edx, %ebx
 317 000c 89CD     		movl	%ecx, %ebp
 318              		.loc 2 108 0
 319 000e FF5048   		call	*72(%rax)
 320              	.LVL29:
 321 0011 4889C7   		movq	%rax, %rdi
 322              	.LVL30:
 323 0014 31C0     		xorl	%eax, %eax
 324              	.LVL31:
 109:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   87:fltk-1.3.4-1/FL/Fl_Device.H ****    
 325              		.loc 2 109 0
 326 0016 4885FF   		testq	%rdi, %rdi
 327 0019 745E     		je	.L9
 328              	.LVL32:
 110:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the de
 329              		.loc 2 110 0
 330 001b 448B472C 		movl	44(%rdi), %r8d
 331 001f 8B4F28   		movl	40(%rdi), %ecx
 332 0022 31D2     		xorl	%edx, %edx
 333 0024 31F6     		xorl	%esi, %esi
 334 0026 E8000000 		call	_ZL20capture_gl_rectangleP12Fl_Gl_Windowiiii.constprop.8
 334      00
 335              	.LVL33:
 336 002b 4989C4   		movq	%rax, %r12
 337              	.LVL34:
 338 002e 8B4014   		movl	20(%rax), %eax
 339              	.LVL35:
 340 0031 458B4424 		movl	8(%r12), %r8d
 340      08
 111:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
 112:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 113:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
 114:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   92:fltk-1.3.4-1/FL/Fl_Device.H **** };
 115:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   93:fltk-1.3.4-1/FL/Fl_Device.H **** 
 116:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   94:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_REGION_STACK_SIZE 10
 117:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   95:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_MATRIX_STACK_SIZE 32
 118:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   96:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 119:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver F
 120:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   98:fltk-1.3.4-1/FL/Fl_Device.H ****  Typically, FLTK applications do not use directly objects fro
 121:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   99:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations (e.g., fl_rectf()) that operate on the cu
 122:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  100:fltk-1.3.4-1/FL/Fl_Device.H ****  Drawing operations are functionally presented in \ref drawin
 123:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  101:fltk-1.3.4-1/FL/Fl_Device.H ****  in the \ref fl_drawings and \ref fl_attributes modules. The 
 124:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  102:fltk-1.3.4-1/FL/Fl_Device.H ****  gives at any time the graphics driver used by all drawing op
 125:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  103:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations are directed to another drawing surface b
 126:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  104:fltk-1.3.4-1/FL/Fl_Device.H ****  
 127:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  105:fltk-1.3.4-1/FL/Fl_Device.H ****  \p The Fl_Graphics_Driver class is of interest if one wants 
 128:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  106:fltk-1.3.4-1/FL/Fl_Device.H ****  An example would be to draw to a PDF file. This would involv
 129:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  107:fltk-1.3.4-1/FL/Fl_Device.H ****  class. This new class should implement all virtual methods o
 130:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  108:fltk-1.3.4-1/FL/Fl_Device.H ****  to support all FLTK drawing functions.
 341              		.loc 2 130 0
 342 0036 85C0     		testl	%eax, %eax
 343 0038 7446     		je	.L17
 344              	.L11:
 345              	.LVL36:
 346 003a 458B4C24 		movl	12(%r12), %r9d
 346      0C
 347              	.LVL37:
 348              	.LBB70:
 349              	.LBB71:
 350              		.file 3 "fltk-1.3.4-1/FL/fl_draw.H"
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
 318:fltk-1.3.4-1/FL/fl_draw.H **** /** fl_chord declaration is a place holder - the function does not yet exist */
 319:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_chord(int x, int y, int w, int h, double a1, double a2); // nyi
 320:fltk-1.3.4-1/FL/fl_draw.H **** 
 321:fltk-1.3.4-1/FL/fl_draw.H **** // scalable drawing code (code in fl_vertex.C and fl_arc.C):
 322:fltk-1.3.4-1/FL/fl_draw.H **** /**
 323:fltk-1.3.4-1/FL/fl_draw.H ****  Saves the current transformation matrix on the stack. 
 324:fltk-1.3.4-1/FL/fl_draw.H ****  The maximum depth of the stack is 32.
 325:fltk-1.3.4-1/FL/fl_draw.H ****  */
 326:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_matrix() { fl_graphics_driver->push_matrix(); }
 327:fltk-1.3.4-1/FL/fl_draw.H **** /**
 328:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the current transformation matrix from the stack.
 329:fltk-1.3.4-1/FL/fl_draw.H ****  */
 330:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_matrix() { fl_graphics_driver->pop_matrix(); }
 331:fltk-1.3.4-1/FL/fl_draw.H **** /**
 332:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates scaling transformation onto the current one.
 333:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y scale factors in x-direction and y-direction
 334:fltk-1.3.4-1/FL/fl_draw.H ****  */
 335:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_scale(double x, double y) { fl_graphics_driver->scale(x, y); }
 336:fltk-1.3.4-1/FL/fl_draw.H **** /**
 337:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates scaling transformation onto the current one.
 338:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x scale factor in both x-direction and y-direction
 339:fltk-1.3.4-1/FL/fl_draw.H ****  */
 340:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_scale(double x) { fl_graphics_driver->scale(x, x); }
 341:fltk-1.3.4-1/FL/fl_draw.H **** /**
 342:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates translation transformation onto the current one.
 343:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y translation factor in x-direction and y-direction
 344:fltk-1.3.4-1/FL/fl_draw.H ****  */
 345:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_translate(double x, double y) { fl_graphics_driver->translate(x, y); }
 346:fltk-1.3.4-1/FL/fl_draw.H **** /**
 347:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates rotation transformation onto the current one.
 348:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] d - rotation angle, counter-clockwise in degrees (not radians)
 349:fltk-1.3.4-1/FL/fl_draw.H ****  */
 350:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rotate(double d) { fl_graphics_driver->rotate(d); }
 351:fltk-1.3.4-1/FL/fl_draw.H **** /**
 352:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates another transformation onto the current one.
 353:fltk-1.3.4-1/FL/fl_draw.H ****  
 354:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] a,b,c,d,x,y transformation matrix elements such that
 355:fltk-1.3.4-1/FL/fl_draw.H ****  <tt> X' = aX + cY + x </tt> and <tt> Y' = bX +dY + y </tt>
 356:fltk-1.3.4-1/FL/fl_draw.H ****  */
 357:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_mult_matrix(double a, double b, double c, double d, double x,double y) 
 358:fltk-1.3.4-1/FL/fl_draw.H **** 	{ fl_graphics_driver->mult_matrix(a, b, c, d, x, y); }
 359:fltk-1.3.4-1/FL/fl_draw.H **** /**
 360:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a list of points. Points are added to the list with fl_vertex()
 361:fltk-1.3.4-1/FL/fl_draw.H ****  */
 362:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_points() {fl_graphics_driver->begin_points(); }
 363:fltk-1.3.4-1/FL/fl_draw.H **** /**
 364:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a list of lines.
 365:fltk-1.3.4-1/FL/fl_draw.H ****  */
 366:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_line() {fl_graphics_driver->begin_line(); }
 367:fltk-1.3.4-1/FL/fl_draw.H **** /**
 368:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a closed sequence of lines.
 369:fltk-1.3.4-1/FL/fl_draw.H ****  */
 370:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_loop() {fl_graphics_driver->begin_loop(); }
 371:fltk-1.3.4-1/FL/fl_draw.H **** /**
 372:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a convex filled polygon.
 373:fltk-1.3.4-1/FL/fl_draw.H ****  */
 374:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_polygon() {fl_graphics_driver->begin_polygon(); }
 375:fltk-1.3.4-1/FL/fl_draw.H **** /**
 376:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a single vertex to the current path.
 377:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 378:fltk-1.3.4-1/FL/fl_draw.H ****  */
 379:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_vertex(double x, double y) {fl_graphics_driver->vertex(x,y); }
 380:fltk-1.3.4-1/FL/fl_draw.H **** /**
 381:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points on a Bezier curve to the path.
 382:fltk-1.3.4-1/FL/fl_draw.H ****  The curve ends (and two of the points) are at X0,Y0 and X3,Y3.
 383:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X0,Y0 curve start point
 384:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X1,Y1 curve control point
 385:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X2,Y2 curve control point
 386:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X3,Y3 curve end point
 387:fltk-1.3.4-1/FL/fl_draw.H ****  */
 388:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3, d
 389:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->curve(X0,Y0,X1,Y1,X2,Y2,X3,Y3); }
 390:fltk-1.3.4-1/FL/fl_draw.H **** /**
 391:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points to the current path on the arc of a circle.
 392:fltk-1.3.4-1/FL/fl_draw.H ****  You can get elliptical paths by using scale and rotate before calling fl_arc().
 393:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,r center and radius of circular arc
 394:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] start,end angles of start and end of arc measured in degrees
 395:fltk-1.3.4-1/FL/fl_draw.H ****  counter-clockwise from 3 o'clock. If \p end is less than \p start
 396:fltk-1.3.4-1/FL/fl_draw.H ****  then it draws the arc in a clockwise direction.
 397:fltk-1.3.4-1/FL/fl_draw.H **** 
 398:fltk-1.3.4-1/FL/fl_draw.H ****  Examples:
 399:fltk-1.3.4-1/FL/fl_draw.H ****  \code
 400:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw an arc of points
 401:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_points();
 402:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(100.0, 100.0, 50.0, 0.0, 180.0);
 403:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_points();
 404:fltk-1.3.4-1/FL/fl_draw.H **** 
 405:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw arc with a line
 406:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_line();
 407:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(200.0, 100.0, 50.0, 0.0, 180.0);
 408:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_line();
 409:fltk-1.3.4-1/FL/fl_draw.H **** 
 410:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw filled arc
 411:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_polygon();
 412:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(300.0, 100.0, 50.0, 0.0, 180.0);
 413:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_polygon();
 414:fltk-1.3.4-1/FL/fl_draw.H ****  \endcode
 415:fltk-1.3.4-1/FL/fl_draw.H ****  */
 416:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_arc(double x, double y, double r, double start, double end) {fl_graphics_driver->arc
 417:fltk-1.3.4-1/FL/fl_draw.H **** /**
 418:fltk-1.3.4-1/FL/fl_draw.H ****  fl_circle() is equivalent to fl_arc(x,y,r,0,360), but may be faster.
 419:fltk-1.3.4-1/FL/fl_draw.H ****  
 420:fltk-1.3.4-1/FL/fl_draw.H ****  It must be the \e only thing in the path: if you want a circle as part of
 421:fltk-1.3.4-1/FL/fl_draw.H ****  a complex polygon you must use fl_arc()
 422:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,r center and radius of circle
 423:fltk-1.3.4-1/FL/fl_draw.H ****  */
 424:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_circle(double x, double y, double r) {fl_graphics_driver->circle(x,y,r); }
 425:fltk-1.3.4-1/FL/fl_draw.H **** /**
 426:fltk-1.3.4-1/FL/fl_draw.H ****  Ends list of points, and draws.
 427:fltk-1.3.4-1/FL/fl_draw.H ****  */
 428:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_points() {fl_graphics_driver->end_points(); }
 429:fltk-1.3.4-1/FL/fl_draw.H **** /**
 430:fltk-1.3.4-1/FL/fl_draw.H ****  Ends list of lines, and draws.
 431:fltk-1.3.4-1/FL/fl_draw.H ****  */
 432:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_line() {fl_graphics_driver->end_line(); }
 433:fltk-1.3.4-1/FL/fl_draw.H **** /**
 434:fltk-1.3.4-1/FL/fl_draw.H ****  Ends closed sequence of lines, and draws.
 435:fltk-1.3.4-1/FL/fl_draw.H ****  */
 436:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_loop() {fl_graphics_driver->end_loop(); }
 437:fltk-1.3.4-1/FL/fl_draw.H **** /**
 438:fltk-1.3.4-1/FL/fl_draw.H ****  Ends convex filled polygon, and draws.
 439:fltk-1.3.4-1/FL/fl_draw.H ****  */
 440:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_polygon() {fl_graphics_driver->end_polygon(); }
 441:fltk-1.3.4-1/FL/fl_draw.H **** /**
 442:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a complex filled polygon.
 443:fltk-1.3.4-1/FL/fl_draw.H ****  
 444:fltk-1.3.4-1/FL/fl_draw.H ****  The polygon may be concave, may have holes in it, or may be several
 445:fltk-1.3.4-1/FL/fl_draw.H ****  disconnected pieces. Call fl_gap() to separate loops of the path.
 446:fltk-1.3.4-1/FL/fl_draw.H ****  
 447:fltk-1.3.4-1/FL/fl_draw.H ****  To outline the polygon, use fl_begin_loop() and replace each fl_gap()
 448:fltk-1.3.4-1/FL/fl_draw.H ****  with fl_end_loop();fl_begin_loop() pairs.
 449:fltk-1.3.4-1/FL/fl_draw.H ****  
 450:fltk-1.3.4-1/FL/fl_draw.H ****  \note
 451:fltk-1.3.4-1/FL/fl_draw.H ****  For portability, you should only draw polygons that appear the same
 452:fltk-1.3.4-1/FL/fl_draw.H ****  whether "even/odd" or "non-zero" winding rules are used to fill them.
 453:fltk-1.3.4-1/FL/fl_draw.H ****  Holes should be drawn in the opposite direction to the outside loop.
 454:fltk-1.3.4-1/FL/fl_draw.H ****  */
 455:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_complex_polygon() {fl_graphics_driver->begin_complex_polygon(); }
 456:fltk-1.3.4-1/FL/fl_draw.H **** /**
 457:fltk-1.3.4-1/FL/fl_draw.H ****  Call fl_gap() to separate loops of the path.
 458:fltk-1.3.4-1/FL/fl_draw.H ****  
 459:fltk-1.3.4-1/FL/fl_draw.H ****  It is unnecessary but harmless to call fl_gap() before the first vertex,
 460:fltk-1.3.4-1/FL/fl_draw.H ****  after the last vertex, or several times in a row.
 461:fltk-1.3.4-1/FL/fl_draw.H ****  */
 462:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_gap() {fl_graphics_driver->gap(); }
 463:fltk-1.3.4-1/FL/fl_draw.H **** /**
 464:fltk-1.3.4-1/FL/fl_draw.H ****  Ends complex filled polygon, and draws.
 465:fltk-1.3.4-1/FL/fl_draw.H ****  */
 466:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_complex_polygon() {fl_graphics_driver->end_complex_polygon(); }
 467:fltk-1.3.4-1/FL/fl_draw.H **** // get and use transformed positions:
 468:fltk-1.3.4-1/FL/fl_draw.H **** /**
 469:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms coordinate using the current transformation matrix.
 470:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 471:fltk-1.3.4-1/FL/fl_draw.H ****  */
 472:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_x(double x, double y) {return fl_graphics_driver->transform_x(x, y); }
 473:fltk-1.3.4-1/FL/fl_draw.H **** /**
 474:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms coordinate using the current transformation matrix.
 475:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 476:fltk-1.3.4-1/FL/fl_draw.H ****  */
 477:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_y(double x, double y) {return fl_graphics_driver->transform_y(x, y); }
 478:fltk-1.3.4-1/FL/fl_draw.H **** /**
 479:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms distance using current transformation matrix.
 480:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 481:fltk-1.3.4-1/FL/fl_draw.H ****  */
 482:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_dx(double x, double y) {return fl_graphics_driver->transform_dx(x, y); }
 483:fltk-1.3.4-1/FL/fl_draw.H **** /**
 484:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms distance using current transformation matrix.
 485:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 486:fltk-1.3.4-1/FL/fl_draw.H ****  */
 487:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_dy(double x, double y) {return fl_graphics_driver->transform_dy(x, y); }
 488:fltk-1.3.4-1/FL/fl_draw.H **** /**
 489:fltk-1.3.4-1/FL/fl_draw.H ****  Adds coordinate pair to the vertex list without further transformations.
 490:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] xf,yf transformed coordinate
 491:fltk-1.3.4-1/FL/fl_draw.H ****  */
 492:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_transformed_vertex(double xf, double yf) {fl_graphics_driver->transformed_vertex(xf,
 493:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
 494:fltk-1.3.4-1/FL/fl_draw.H **** 
 495:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup  fl_attributes
 496:fltk-1.3.4-1/FL/fl_draw.H ****     @{ */
 497:fltk-1.3.4-1/FL/fl_draw.H **** /* NOTE: doxygen comments here to avoid triplication in os-specific sources */
 498:fltk-1.3.4-1/FL/fl_draw.H **** 
 499:fltk-1.3.4-1/FL/fl_draw.H **** // Fonts:
 500:fltk-1.3.4-1/FL/fl_draw.H **** /**
 501:fltk-1.3.4-1/FL/fl_draw.H ****   Sets the current font, which is then used in various drawing routines.
 502:fltk-1.3.4-1/FL/fl_draw.H ****   You may call this outside a draw context if necessary to call fl_width(),
 503:fltk-1.3.4-1/FL/fl_draw.H ****   but on X this will open the display.
 504:fltk-1.3.4-1/FL/fl_draw.H **** 
 505:fltk-1.3.4-1/FL/fl_draw.H ****   The font is identified by a \p face and a \p size.
 506:fltk-1.3.4-1/FL/fl_draw.H ****   The size of the font is measured in pixels and not "points".
 507:fltk-1.3.4-1/FL/fl_draw.H ****   Lines should be spaced \p size pixels apart or more.
 508:fltk-1.3.4-1/FL/fl_draw.H **** */
 509:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_font(Fl_Font face, Fl_Fontsize fsize) { fl_graphics_driver->font(face,fsize); }
 510:fltk-1.3.4-1/FL/fl_draw.H **** 
 511:fltk-1.3.4-1/FL/fl_draw.H **** /**
 512:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the \p face set by the most recent call to fl_font().
 513:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used to save/restore the font.
 514:fltk-1.3.4-1/FL/fl_draw.H **** */
 515:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Font fl_font() {return fl_graphics_driver->font();}
 516:fltk-1.3.4-1/FL/fl_draw.H **** /**
 517:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the \p size set by the most recent call to fl_font().
 518:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used to save/restore the font.
 519:fltk-1.3.4-1/FL/fl_draw.H **** */
 520:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Fontsize fl_size() {return fl_graphics_driver->size();}
 521:fltk-1.3.4-1/FL/fl_draw.H **** 
 522:fltk-1.3.4-1/FL/fl_draw.H **** // information you can get about the current font:
 523:fltk-1.3.4-1/FL/fl_draw.H **** /**
 524:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the recommended minimum line spacing for the current font.
 525:fltk-1.3.4-1/FL/fl_draw.H ****   You can also use the value of \p size passed to fl_font()
 526:fltk-1.3.4-1/FL/fl_draw.H **** */
 527:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_height() {return fl_graphics_driver->height();}
 528:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 529:fltk-1.3.4-1/FL/fl_draw.H **** /**
 530:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the recommended distance above the bottom of a fl_height() tall box to
 531:fltk-1.3.4-1/FL/fl_draw.H ****   draw the text at so it looks centered vertically in that box.
 532:fltk-1.3.4-1/FL/fl_draw.H **** */
 533:fltk-1.3.4-1/FL/fl_draw.H **** inline int  fl_descent() {return fl_graphics_driver->descent();}
 534:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a nul-terminated string
 535:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size. */
 536:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT double fl_width(const char* txt);
 537:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a sequence of \p n characters
 538:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size. */
 539:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_width(const char* txt, int n) {return fl_graphics_driver->width(txt, n);}
 540:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a single character
 541:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size.
 542:fltk-1.3.4-1/FL/fl_draw.H ****     \note if a valid fl_gc is NOT found then it uses the first window gc,
 543:fltk-1.3.4-1/FL/fl_draw.H ****     or the screen gc if no fltk window is available when called. */
 544:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_width(unsigned int c)  {return fl_graphics_driver->width(c);}
 545:fltk-1.3.4-1/FL/fl_draw.H **** /** Determines the minimum pixel dimensions of a nul-terminated string.
 546:fltk-1.3.4-1/FL/fl_draw.H **** 
 547:fltk-1.3.4-1/FL/fl_draw.H ****   Usage: given a string "txt" drawn using fl_draw(txt, x, y) you would determine
 548:fltk-1.3.4-1/FL/fl_draw.H ****   its pixel extents on the display using fl_text_extents(txt, dx, dy, wo, ho)
 549:fltk-1.3.4-1/FL/fl_draw.H ****   such that a bounding box that exactly fits around the text could be drawn with
 550:fltk-1.3.4-1/FL/fl_draw.H ****   fl_rect(x+dx, y+dy, wo, ho). Note the dx, dy values hold the offset of the first
 551:fltk-1.3.4-1/FL/fl_draw.H ****   "colored in" pixel of the string, from the draw origin.
 552:fltk-1.3.4-1/FL/fl_draw.H **** 
 553:fltk-1.3.4-1/FL/fl_draw.H ****   No FLTK symbol expansion will be performed.
 554:fltk-1.3.4-1/FL/fl_draw.H **** */
 555:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_text_extents(const char*, int& dx, int& dy, int& w, int& h); // NO fltk symbol ex
 556:fltk-1.3.4-1/FL/fl_draw.H **** /** Determines the minimum pixel dimensions of a sequence of \p n characters.
 557:fltk-1.3.4-1/FL/fl_draw.H **** \see fl_text_extents(const char*, int& dx, int& dy, int& w, int& h)
 558:fltk-1.3.4-1/FL/fl_draw.H **** */
 559:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_text_extents(const char *t, int n, int& dx, int& dy, int& w, int& h)
 560:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->text_extents(t, n, dx, dy, w, h);}
 561:fltk-1.3.4-1/FL/fl_draw.H **** 
 562:fltk-1.3.4-1/FL/fl_draw.H **** // font encoding:
 563:fltk-1.3.4-1/FL/fl_draw.H **** // Note: doxygen comments here to avoid duplication for os-sepecific cases
 564:fltk-1.3.4-1/FL/fl_draw.H **** /**
 565:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from Windows/X11 latin1 character set to local encoding.
 566:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (latin1 encoding)
 567:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 568:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 569:fltk-1.3.4-1/FL/fl_draw.H ****   */
 570:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_latin1_to_local(const char *t, int n=-1);
 571:fltk-1.3.4-1/FL/fl_draw.H **** /**
 572:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from local encoding to Windowx/X11 latin1 character set.
 573:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (local encoding)
 574:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 575:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 576:fltk-1.3.4-1/FL/fl_draw.H ****   */
 577:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_local_to_latin1(const char *t, int n=-1);
 578:fltk-1.3.4-1/FL/fl_draw.H **** /**
 579:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from Mac Roman character set to local encoding.
 580:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (Mac Roman encoding)
 581:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 582:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 583:fltk-1.3.4-1/FL/fl_draw.H ****   */
 584:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_mac_roman_to_local(const char *t, int n=-1);
 585:fltk-1.3.4-1/FL/fl_draw.H **** /**
 586:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from local encoding to Mac Roman character set.
 587:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (local encoding)
 588:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 589:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 590:fltk-1.3.4-1/FL/fl_draw.H ****   */
 591:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_local_to_mac_roman(const char *t, int n=-1);
 592:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
 593:fltk-1.3.4-1/FL/fl_draw.H **** 
 594:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup  fl_drawings
 595:fltk-1.3.4-1/FL/fl_draw.H ****     @{ */
 596:fltk-1.3.4-1/FL/fl_draw.H **** /**
 597:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a nul-terminated UTF-8 string starting at the given \p x, \p y location.
 598:fltk-1.3.4-1/FL/fl_draw.H **** 
 599:fltk-1.3.4-1/FL/fl_draw.H ****   Text is aligned to the left and to the baseline of the font.
 600:fltk-1.3.4-1/FL/fl_draw.H ****   To align to the bottom, subtract fl_descent() from \p y.
 601:fltk-1.3.4-1/FL/fl_draw.H ****   To align to the top, subtract fl_descent() and add fl_height().
 602:fltk-1.3.4-1/FL/fl_draw.H ****   This version of fl_draw provides direct access to the text drawing
 603:fltk-1.3.4-1/FL/fl_draw.H ****   function of the underlying OS. It does not apply any special handling
 604:fltk-1.3.4-1/FL/fl_draw.H ****   to control characters.
 605:fltk-1.3.4-1/FL/fl_draw.H **** */
 606:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y);
 607:fltk-1.3.4-1/FL/fl_draw.H **** /**
 608:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a nul-terminated UTF-8 string starting at the given \p x, \p y
 609:fltk-1.3.4-1/FL/fl_draw.H ****   location and rotating \p angle degrees counter-clockwise.
 610:fltk-1.3.4-1/FL/fl_draw.H ****   This version of fl_draw provides direct access to the text drawing
 611:fltk-1.3.4-1/FL/fl_draw.H ****   function of the underlying OS and is supported by Xft, Win32 and MacOS
 612:fltk-1.3.4-1/FL/fl_draw.H ****   fltk subsets.
 613:fltk-1.3.4-1/FL/fl_draw.H **** */
 614:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(int angle, const char* str, int x, int y);
 615:fltk-1.3.4-1/FL/fl_draw.H **** /**
 616:fltk-1.3.4-1/FL/fl_draw.H ****  Draws starting at the given \p x, \p y location a UTF-8 string of length \p n bytes.
 617:fltk-1.3.4-1/FL/fl_draw.H **** */
 618:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw(const char* str, int n, int x, int y) {fl_graphics_driver->draw(str,n,x,y); }
 619:fltk-1.3.4-1/FL/fl_draw.H **** /**
 620:fltk-1.3.4-1/FL/fl_draw.H ****   Draws at the given \p x, \p y location a UTF-8 string of length \p n bytes
 621:fltk-1.3.4-1/FL/fl_draw.H ****   rotating \p angle degrees counter-clockwise.
 622:fltk-1.3.4-1/FL/fl_draw.H **** 
 623:fltk-1.3.4-1/FL/fl_draw.H ****   \note When using X11 (Unix, Linux, Cygwin et al.) this needs Xft to work.
 624:fltk-1.3.4-1/FL/fl_draw.H **** 	Under plain X11 (w/o Xft) rotated text is not supported by FLTK.
 625:fltk-1.3.4-1/FL/fl_draw.H **** 	A warning will be issued to stderr at runtime (only once) if you
 626:fltk-1.3.4-1/FL/fl_draw.H **** 	use this method with an angle other than 0.
 627:fltk-1.3.4-1/FL/fl_draw.H **** */
 628:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw(int angle, const char* str, int n, int x, int y) {fl_graphics_driver->draw(angl
 629:fltk-1.3.4-1/FL/fl_draw.H **** /**
 630:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a UTF-8 string of length \p n bytes right to left starting at the given \p x, \p y location
 631:fltk-1.3.4-1/FL/fl_draw.H **** */
 632:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rtl_draw(const char* str, int n, int x, int y) {fl_graphics_driver->rtl_draw(str,n,x
 633:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_measure(const char* str, int& x, int& y,
 634:fltk-1.3.4-1/FL/fl_draw.H ****                           int draw_symbols = 1);
 635:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y, int w, int h,
 636:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Align align,
 637:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Image* img=0, int draw_symbols = 1);
 638:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y, int w, int h,
 639:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Align align,
 640:fltk-1.3.4-1/FL/fl_draw.H ****                        void (*callthis)(const char *,int,int,int),
 641:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Image* img=0, int draw_symbols = 1);
 642:fltk-1.3.4-1/FL/fl_draw.H **** 
 643:fltk-1.3.4-1/FL/fl_draw.H **** // boxtypes:
 644:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_frame(const char* s, int x, int y, int w, int h);
 645:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_frame2(const char* s, int x, int y, int w, int h);
 646:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw_box(Fl_Boxtype, int x, int y, int w, int h, Fl_Color);
 647:fltk-1.3.4-1/FL/fl_draw.H **** 
 648:fltk-1.3.4-1/FL/fl_draw.H **** // images:
 649:fltk-1.3.4-1/FL/fl_draw.H **** 
 650:fltk-1.3.4-1/FL/fl_draw.H **** /**
 651:fltk-1.3.4-1/FL/fl_draw.H ****   Draws an 8-bit per color RGB or luminance image.
 652:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] buf points at the "r" data of the top-left pixel.
 653:fltk-1.3.4-1/FL/fl_draw.H ****                  Color data must be in <tt>r,g,b</tt> order.
 654:fltk-1.3.4-1/FL/fl_draw.H **** 		 Luminance data is only one <tt>gray</tt> byte.
 655:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] X,Y position where to put top-left corner of image
 656:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] W,H size of the image
 657:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] D   delta to add to the pointer between pixels. It may be
 658:fltk-1.3.4-1/FL/fl_draw.H ****                  any value greater than or equal to 1, or it can be
 659:fltk-1.3.4-1/FL/fl_draw.H **** 		 negative to flip the image horizontally
 660:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] L   delta to add to the pointer between lines (if 0 is
 661:fltk-1.3.4-1/FL/fl_draw.H ****                  passed it uses \p W * \p D), and may be larger than
 662:fltk-1.3.4-1/FL/fl_draw.H **** 		 \p W * \p D to crop data, or negative to flip the
 663:fltk-1.3.4-1/FL/fl_draw.H **** 		 image vertically
 664:fltk-1.3.4-1/FL/fl_draw.H **** 
 665:fltk-1.3.4-1/FL/fl_draw.H ****   It is highly recommended that you put the following code before the
 666:fltk-1.3.4-1/FL/fl_draw.H ****   first <tt>show()</tt> of \e any window in your program to get rid of
 667:fltk-1.3.4-1/FL/fl_draw.H ****   the dithering if possible:
 668:fltk-1.3.4-1/FL/fl_draw.H ****   \code
 669:fltk-1.3.4-1/FL/fl_draw.H ****   Fl::visual(FL_RGB);
 670:fltk-1.3.4-1/FL/fl_draw.H ****   \endcode
 671:fltk-1.3.4-1/FL/fl_draw.H **** 
 672:fltk-1.3.4-1/FL/fl_draw.H ****   Gray scale (1-channel) images may be drawn. This is done if
 673:fltk-1.3.4-1/FL/fl_draw.H ****   <tt>abs(D)</tt> is less than 3, or by calling fl_draw_image_mono().
 674:fltk-1.3.4-1/FL/fl_draw.H ****   Only one 8-bit sample is used for each pixel, and on screens with
 675:fltk-1.3.4-1/FL/fl_draw.H ****   different numbers of bits for red, green, and blue only gray colors
 676:fltk-1.3.4-1/FL/fl_draw.H ****   are used. Setting \p D greater than 1 will let you display one channel
 677:fltk-1.3.4-1/FL/fl_draw.H ****   of a color image.
 678:fltk-1.3.4-1/FL/fl_draw.H **** 
 679:fltk-1.3.4-1/FL/fl_draw.H ****   \par Note:
 680:fltk-1.3.4-1/FL/fl_draw.H ****   The X version does not support all possible visuals. If FLTK cannot
 681:fltk-1.3.4-1/FL/fl_draw.H ****   draw the image in the current visual it will abort. FLTK supports
 682:fltk-1.3.4-1/FL/fl_draw.H ****   any visual of 8 bits or less, and all common TrueColor visuals up
 683:fltk-1.3.4-1/FL/fl_draw.H ****   to 32 bits.
 684:fltk-1.3.4-1/FL/fl_draw.H ****   */
 685:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0)
 686:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->draw_image(buf, X, Y, W, H, D, L); }
 351              		.loc 3 686 0 discriminator 4
 352 003f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 352      000000
 353 0046 89DA     		movl	%ebx, %edx
 354 0048 89E9     		movl	%ebp, %ecx
 355 004a 418D71FF 		leal	-1(%r9), %esi
 356 004e 4C8B17   		movq	(%rdi), %r10
 357 0051 0FAFF0   		imull	%eax, %esi
 358 0054 F7D8     		negl	%eax
 359              	.LVL38:
 360 0056 4863F6   		movslq	%esi, %rsi
 361 0059 49037424 		addq	40(%r12), %rsi
 361      28
 362              	.LVL39:
 363 005e 50       		pushq	%rax
 364              		.cfi_def_cfa_offset 40
 365 005f 6A03     		pushq	$3
 366              		.cfi_def_cfa_offset 48
 367 0061 41FF9278 		call	*376(%r10)
 367      010000
 368              	.LVL40:
 369              	.LBE71:
 370              	.LBE70:
 131:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 132:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  110:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Graphics_Driver : public Fl_Device {
 371              		.loc 2 132 0 discriminator 4
 372 0068 498B0424 		movq	(%r12), %rax
 373 006c 4C89E7   		movq	%r12, %rdi
 374 006f FF5008   		call	*8(%rax)
 375              	.LVL41:
 376 0072 58       		popq	%rax
 377              		.cfi_def_cfa_offset 40
 378 0073 5A       		popq	%rdx
 379              		.cfi_def_cfa_offset 32
 133:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  111:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 380              		.loc 2 133 0 discriminator 4
 381 0074 B8010000 		movl	$1, %eax
 381      00
 382              	.LVL42:
 383              	.L9:
 134:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  112:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A 2D coordinate transformation matrix
 384              		.loc 2 134 0
 385 0079 5B       		popq	%rbx
 386              		.cfi_remember_state
 387              		.cfi_def_cfa_offset 24
 388              	.LVL43:
 389 007a 5D       		popq	%rbp
 390              		.cfi_def_cfa_offset 16
 391              	.LVL44:
 392 007b 415C     		popq	%r12
 393              		.cfi_def_cfa_offset 8
 394 007d C3       		ret
 395              	.LVL45:
 396 007e 6690     		.p2align 4,,10
 397              		.p2align 3
 398              	.L17:
 399              		.cfi_restore_state
 130:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 400              		.loc 2 130 0 discriminator 2
 401 0080 418B4424 		movl	16(%r12), %eax
 401      10
 402 0085 410FAFC0 		imull	%r8d, %eax
 403 0089 EBAF     		jmp	.L11
 404              		.cfi_endproc
 405              	.LFE528:
 407              		.section	.text.unlikely._ZN19Fl_Gl_Device_Plugin5printEP9Fl_Widgetiii,"axG",@progbits,_ZN19Fl_Gl_D
 408              	.LCOLDE8:
 409              		.section	.text._ZN19Fl_Gl_Device_Plugin5printEP9Fl_Widgetiii,"axG",@progbits,_ZN19Fl_Gl_Device_Plu
 410              	.LHOTE8:
 411              		.section	.text.unlikely._ZN19Fl_Gl_Device_Plugin17rectangle_captureEP9Fl_Widgetiiii,"axG",@progbit
 412              		.align 2
 413              	.LCOLDB9:
 414              		.section	.text._ZN19Fl_Gl_Device_Plugin17rectangle_captureEP9Fl_Widgetiiii,"axG",@progbits,_ZN19Fl
 415              	.LHOTB9:
 416              		.align 2
 417              		.p2align 4,,15
 418              		.weak	_ZN19Fl_Gl_Device_Plugin17rectangle_captureEP9Fl_Widgetiiii
 420              	_ZN19Fl_Gl_Device_Plugin17rectangle_captureEP9Fl_Widgetiiii:
 421              	.LFB529:
 135:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  113:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 422              		.loc 2 135 0
 423              		.cfi_startproc
 424              	.LVL46:
 425 0000 4155     		pushq	%r13
 426              		.cfi_def_cfa_offset 16
 427              		.cfi_offset 13, -16
 428 0002 4154     		pushq	%r12
 429              		.cfi_def_cfa_offset 24
 430              		.cfi_offset 12, -24
 431 0004 4889F7   		movq	%rsi, %rdi
 432              	.LVL47:
 433 0007 55       		pushq	%rbp
 434              		.cfi_def_cfa_offset 32
 435              		.cfi_offset 6, -32
 436 0008 53       		pushq	%rbx
 437              		.cfi_def_cfa_offset 40
 438              		.cfi_offset 3, -40
 439 0009 89CD     		movl	%ecx, %ebp
 440 000b 89D3     		movl	%edx, %ebx
 441 000d 4589C4   		movl	%r8d, %r12d
 442 0010 4589CD   		movl	%r9d, %r13d
 443 0013 4883EC08 		subq	$8, %rsp
 444              		.cfi_def_cfa_offset 48
 136:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  114:fltk-1.3.4-1/FL/Fl_Device.H ****   struct matrix {double a, b, c, d, x, y;};
 445              		.loc 2 136 0
 446 0017 488B06   		movq	(%rsi), %rax
 447 001a FF5048   		call	*72(%rax)
 448              	.LVL48:
 137:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  115:fltk-1.3.4-1/FL/Fl_Device.H **** private:
 449              		.loc 2 137 0
 450 001d 4885C0   		testq	%rax, %rax
 451 0020 741E     		je	.L19
 138:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  116:fltk-1.3.4-1/FL/Fl_Device.H ****   static const matrix m0;
 139:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  117:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font_; // current font
 452              		.loc 2 139 0
 453 0022 4883C408 		addq	$8, %rsp
 454              		.cfi_remember_state
 455              		.cfi_def_cfa_offset 40
 138:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  116:fltk-1.3.4-1/FL/Fl_Device.H ****   static const matrix m0;
 456              		.loc 2 138 0
 457 0026 4589E8   		movl	%r13d, %r8d
 458 0029 4489E1   		movl	%r12d, %ecx
 459 002c 89EA     		movl	%ebp, %edx
 460 002e 89DE     		movl	%ebx, %esi
 461 0030 4889C7   		movq	%rax, %rdi
 462              		.loc 2 139 0
 463 0033 5B       		popq	%rbx
 464              		.cfi_def_cfa_offset 32
 465              	.LVL49:
 466 0034 5D       		popq	%rbp
 467              		.cfi_def_cfa_offset 24
 468              	.LVL50:
 469 0035 415C     		popq	%r12
 470              		.cfi_def_cfa_offset 16
 471              	.LVL51:
 472 0037 415D     		popq	%r13
 473              		.cfi_def_cfa_offset 8
 474              	.LVL52:
 138:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  116:fltk-1.3.4-1/FL/Fl_Device.H ****   static const matrix m0;
 475              		.loc 2 138 0
 476 0039 E9000000 		jmp	_ZL20capture_gl_rectangleP12Fl_Gl_Windowiiii.constprop.8
 476      00
 477              	.LVL53:
 478 003e 6690     		.p2align 4,,10
 479              		.p2align 3
 480              	.L19:
 481              		.cfi_restore_state
 482              		.loc 2 139 0
 483 0040 4883C408 		addq	$8, %rsp
 484              		.cfi_def_cfa_offset 40
 485 0044 31C0     		xorl	%eax, %eax
 486              	.LVL54:
 487 0046 5B       		popq	%rbx
 488              		.cfi_def_cfa_offset 32
 489              	.LVL55:
 490 0047 5D       		popq	%rbp
 491              		.cfi_def_cfa_offset 24
 492              	.LVL56:
 493 0048 415C     		popq	%r12
 494              		.cfi_def_cfa_offset 16
 495              	.LVL57:
 496 004a 415D     		popq	%r13
 497              		.cfi_def_cfa_offset 8
 498              	.LVL58:
 499 004c C3       		ret
 500              		.cfi_endproc
 501              	.LFE529:
 503              		.section	.text.unlikely._ZN19Fl_Gl_Device_Plugin17rectangle_captureEP9Fl_Widgetiiii,"axG",@progbit
 504              	.LCOLDE9:
 505              		.section	.text._ZN19Fl_Gl_Device_Plugin17rectangle_captureEP9Fl_Widgetiiii,"axG",@progbits,_ZN19Fl
 506              	.LHOTE9:
 507              		.section	.text.unlikely._GLOBAL__sub_I_fl_gl_load_plugin,"ax",@progbits
 508              	.LCOLDB10:
 509              		.section	.text.startup._GLOBAL__sub_I_fl_gl_load_plugin,"ax",@progbits
 510              	.LHOTB10:
 511              		.p2align 4,,15
 513              	_GLOBAL__sub_I_fl_gl_load_plugin:
 514              	.LFB535:
 140:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  118:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size_; // current font size
 141:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  119:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color_; // current color
 142:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  120:fltk-1.3.4-1/FL/Fl_Device.H ****   int sptr;
 143:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  121:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int matrix_stack_size = FL_MATRIX_STACK_SIZE;
 144:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  122:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix stack[FL_MATRIX_STACK_SIZE];
 145:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  123:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix m;
 146:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  124:fltk-1.3.4-1/FL/Fl_Device.H ****   int n, p_size, gap_;
 515              		.loc 2 146 0
 516              		.cfi_startproc
 517              	.LVL59:
 518 0000 4883EC08 		subq	$8, %rsp
 519              		.cfi_def_cfa_offset 16
 520              	.LBB80:
 521              	.LBB81:
 522              	.LBB82:
 523              	.LBB83:
 524              	.LBB84:
 525              	.LBB85:
 612:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Returns the class name */
 526              		.loc 1 612 0
 527 0004 BA000000 		movl	$.LC2, %edx
 527      00
 528 0009 BE000000 		movl	$.LC0, %esi
 528      00
 529 000e BF000000 		movl	$_ZL16Gl_Device_Plugin, %edi
 529      00
 530 0013 E8000000 		call	_ZN9Fl_PluginC2EPKcS1_
 530      00
 531              	.LVL60:
 532              	.LBE85:
 533              	.LBE84:
 105:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****   84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 534              		.loc 2 105 0
 535 0018 48C70500 		movq	$_ZTV19Fl_Gl_Device_Plugin+16, _ZL16Gl_Device_Plugin(%rip)
 535      00000000 
 535      000000
 536              	.LVL61:
 537              	.LBE83:
 538              	.LBE82:
 142:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  121:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int matrix_stack_size = FL_MATRIX_STACK_SIZE;
 539              		.loc 2 142 0
 540 0023 BA000000 		movl	$__dso_handle, %edx
 540      00
 541 0028 BE000000 		movl	$_ZL16Gl_Device_Plugin, %esi
 541      00
 542 002d BF000000 		movl	$_ZN19Fl_Gl_Device_PluginD1Ev, %edi
 542      00
 543              	.LBE81:
 544              	.LBE80:
 545              		.loc 2 146 0
 546 0032 4883C408 		addq	$8, %rsp
 547              		.cfi_def_cfa_offset 8
 548              	.LBB87:
 549              	.LBB86:
 142:fltk-1.3.4-1/src/Fl_Gl_Device_Plugin.cxx ****  121:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int matrix_stack_size = FL_MATRIX_STACK_SIZE;
 550              		.loc 2 142 0
 551 0036 E9000000 		jmp	__cxa_atexit
 551      00
 552              	.LVL62:
 553              	.LBE86:
 554              	.LBE87:
 555              		.cfi_endproc
 556              	.LFE535:
 558              		.section	.text.unlikely._GLOBAL__sub_I_fl_gl_load_plugin
 559              	.LCOLDE10:
 560              		.section	.text.startup._GLOBAL__sub_I_fl_gl_load_plugin
 561              	.LHOTE10:
 562              		.section	.init_array,"aw"
 563              		.align 8
 564 0000 00000000 		.quad	_GLOBAL__sub_I_fl_gl_load_plugin
 564      00000000 
 565              		.weak	_ZTS16Fl_Device_Plugin
 566              		.section	.rodata._ZTS16Fl_Device_Plugin,"aG",@progbits,_ZTS16Fl_Device_Plugin,comdat
 567              		.align 16
 570              	_ZTS16Fl_Device_Plugin:
 571 0000 3136466C 		.string	"16Fl_Device_Plugin"
 571      5F446576 
 571      6963655F 
 571      506C7567 
 571      696E00
 572              		.weak	_ZTI16Fl_Device_Plugin
 573              		.section	.rodata._ZTI16Fl_Device_Plugin,"aG",@progbits,_ZTI16Fl_Device_Plugin,comdat
 574              		.align 8
 577              	_ZTI16Fl_Device_Plugin:
 578 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 578      00000000 
 579 0008 00000000 		.quad	_ZTS16Fl_Device_Plugin
 579      00000000 
 580 0010 00000000 		.quad	_ZTI9Fl_Plugin
 580      00000000 
 581              		.weak	_ZTS19Fl_Gl_Device_Plugin
 582              		.section	.rodata._ZTS19Fl_Gl_Device_Plugin,"aG",@progbits,_ZTS19Fl_Gl_Device_Plugin,comdat
 583              		.align 16
 586              	_ZTS19Fl_Gl_Device_Plugin:
 587 0000 3139466C 		.string	"19Fl_Gl_Device_Plugin"
 587      5F476C5F 
 587      44657669 
 587      63655F50 
 587      6C756769 
 588              		.weak	_ZTI19Fl_Gl_Device_Plugin
 589              		.section	.rodata._ZTI19Fl_Gl_Device_Plugin,"aG",@progbits,_ZTI19Fl_Gl_Device_Plugin,comdat
 590              		.align 8
 593              	_ZTI19Fl_Gl_Device_Plugin:
 594 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 594      00000000 
 595 0008 00000000 		.quad	_ZTS19Fl_Gl_Device_Plugin
 595      00000000 
 596 0010 00000000 		.quad	_ZTI16Fl_Device_Plugin
 596      00000000 
 597              		.weak	_ZTV16Fl_Device_Plugin
 598              		.section	.rodata._ZTV16Fl_Device_Plugin,"aG",@progbits,_ZTV16Fl_Device_Plugin,comdat
 599              		.align 8
 602              	_ZTV16Fl_Device_Plugin:
 603 0000 00000000 		.quad	0
 603      00000000 
 604 0008 00000000 		.quad	_ZTI16Fl_Device_Plugin
 604      00000000 
 605 0010 00000000 		.quad	0
 605      00000000 
 606 0018 00000000 		.quad	0
 606      00000000 
 607 0020 00000000 		.quad	_ZN16Fl_Device_Plugin5klassEv
 607      00000000 
 608 0028 00000000 		.quad	__cxa_pure_virtual
 608      00000000 
 609 0030 00000000 		.quad	__cxa_pure_virtual
 609      00000000 
 610              		.weak	_ZTV19Fl_Gl_Device_Plugin
 611              		.section	.rodata._ZTV19Fl_Gl_Device_Plugin,"aG",@progbits,_ZTV19Fl_Gl_Device_Plugin,comdat
 612              		.align 8
 615              	_ZTV19Fl_Gl_Device_Plugin:
 616 0000 00000000 		.quad	0
 616      00000000 
 617 0008 00000000 		.quad	_ZTI19Fl_Gl_Device_Plugin
 617      00000000 
 618 0010 00000000 		.quad	_ZN19Fl_Gl_Device_PluginD1Ev
 618      00000000 
 619 0018 00000000 		.quad	_ZN19Fl_Gl_Device_PluginD0Ev
 619      00000000 
 620 0020 00000000 		.quad	_ZN16Fl_Device_Plugin5klassEv
 620      00000000 
 621 0028 00000000 		.quad	_ZN19Fl_Gl_Device_Plugin4nameEv
 621      00000000 
 622 0030 00000000 		.quad	_ZN19Fl_Gl_Device_Plugin5printEP9Fl_Widgetiii
 622      00000000 
 623 0038 00000000 		.quad	_ZN19Fl_Gl_Device_Plugin17rectangle_captureEP9Fl_Widgetiiii
 623      00000000 
 624              		.globl	fl_gl_load_plugin
 625              		.section	.bss.fl_gl_load_plugin,"aw",@nobits
 626              		.align 4
 629              	fl_gl_load_plugin:
 630 0000 00000000 		.zero	4
 631              		.section	.bss._ZL16Gl_Device_Plugin,"aw",@nobits
 632              		.align 16
 635              	_ZL16Gl_Device_Plugin:
 636 0000 00000000 		.zero	16
 636      00000000 
 636      00000000 
 636      00000000 
 637              		.section	.rodata.cst8,"aM",@progbits,8
 638              		.align 8
 639              	.LC6:
 640 0000 00000000 		.long	0
 641 0004 0000E03F 		.long	1071644672
 642              		.text
 643              	.Letext0:
 644              		.section	.text.unlikely._ZN16Fl_Device_Plugin5klassEv,"axG",@progbits,_ZN16Fl_Device_Plugin5klassE
 645              	.Letext_cold0:
 646              		.file 4 "fltk-1.3.4-1/FL/fl_types.h"
 647              		.file 5 "fltk-1.3.4-1/FL/Enumerations.H"
 648              		.file 6 "/usr/include/x86_64-linux-gnu/bits/types.h"
 649              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 650              		.file 8 "fltk-1.3.4-1/FL/Fl_Widget.H"
 651              		.file 9 "fltk-1.3.4-1/FL/Fl_Image.H"
 652              		.file 10 "/usr/include/libio.h"
 653              		.file 11 "fltk-1.3.4-1/FL/Fl_Gl_Window.H"
 654              		.file 12 "/usr/include/stdio.h"
 655              		.file 13 "/usr/include/GL/gl.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Gl_Device_Plugin.cxx
     /tmp/ccPd1HkW.s:19     .text._ZN16Fl_Device_Plugin5klassEv:0000000000000000 _ZN16Fl_Device_Plugin5klassEv
     /tmp/ccPd1HkW.s:47     .text._ZN19Fl_Gl_Device_Plugin4nameEv:0000000000000000 _ZN19Fl_Gl_Device_Plugin4nameEv
     /tmp/ccPd1HkW.s:72     .text._ZN19Fl_Gl_Device_PluginD2Ev:0000000000000000 _ZN19Fl_Gl_Device_PluginD2Ev
     /tmp/ccPd1HkW.s:602    .rodata._ZTV16Fl_Device_Plugin:0000000000000000 _ZTV16Fl_Device_Plugin
     /tmp/ccPd1HkW.s:72     .text._ZN19Fl_Gl_Device_PluginD2Ev:0000000000000000 _ZN19Fl_Gl_Device_PluginD1Ev
     /tmp/ccPd1HkW.s:103    .text._ZN19Fl_Gl_Device_PluginD0Ev:0000000000000000 _ZN19Fl_Gl_Device_PluginD0Ev
     /tmp/ccPd1HkW.s:143    .text._ZL20capture_gl_rectangleP12Fl_Gl_Windowiiii.constprop.8:0000000000000000 _ZL20capture_gl_rectangleP12Fl_Gl_Windowiiii.constprop.8
     /tmp/ccPd1HkW.s:295    .text._ZN19Fl_Gl_Device_Plugin5printEP9Fl_Widgetiii:0000000000000000 _ZN19Fl_Gl_Device_Plugin5printEP9Fl_Widgetiii
     /tmp/ccPd1HkW.s:420    .text._ZN19Fl_Gl_Device_Plugin17rectangle_captureEP9Fl_Widgetiiii:0000000000000000 _ZN19Fl_Gl_Device_Plugin17rectangle_captureEP9Fl_Widgetiiii
     /tmp/ccPd1HkW.s:513    .text.startup._GLOBAL__sub_I_fl_gl_load_plugin:0000000000000000 _GLOBAL__sub_I_fl_gl_load_plugin
     /tmp/ccPd1HkW.s:635    .bss._ZL16Gl_Device_Plugin:0000000000000000 _ZL16Gl_Device_Plugin
     /tmp/ccPd1HkW.s:615    .rodata._ZTV19Fl_Gl_Device_Plugin:0000000000000000 _ZTV19Fl_Gl_Device_Plugin
     /tmp/ccPd1HkW.s:570    .rodata._ZTS16Fl_Device_Plugin:0000000000000000 _ZTS16Fl_Device_Plugin
     /tmp/ccPd1HkW.s:577    .rodata._ZTI16Fl_Device_Plugin:0000000000000000 _ZTI16Fl_Device_Plugin
     /tmp/ccPd1HkW.s:586    .rodata._ZTS19Fl_Gl_Device_Plugin:0000000000000000 _ZTS19Fl_Gl_Device_Plugin
     /tmp/ccPd1HkW.s:593    .rodata._ZTI19Fl_Gl_Device_Plugin:0000000000000000 _ZTI19Fl_Gl_Device_Plugin
     /tmp/ccPd1HkW.s:629    .bss.fl_gl_load_plugin:0000000000000000 fl_gl_load_plugin
     /tmp/ccPd1HkW.s:639    .rodata.cst8:0000000000000000 .LC6
                           .group:0000000000000000 _ZN19Fl_Gl_Device_PluginD5Ev
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.features.h.19.ad7942cac365cc9b820965257723f4cc
                           .group:0000000000000000 wm4.cdefs.h.19.871bad770587d04922449df94ac50bdb
                           .group:0000000000000000 wm4.wordsize.h.4.256e8fdbd37801980286acdbc40d0280
                           .group:0000000000000000 wm4.cdefs.h.432.619afd0aac7c4b439843706c1b28ddea
                           .group:0000000000000000 wm4.stubs64.h.10.918ceb5fa58268542bf143e4c1efbcf3
                           .group:0000000000000000 wm4.types.h.89.468e2451361e3b92f048f6cad51690ff
                           .group:0000000000000000 wm4.typesizes.h.24.40eb69a6270178f15d1bf3d7b6635a8b
                           .group:0000000000000000 wm4.types.h.40.2a7c526b979ef3aceacac975f5edcefb
                           .group:0000000000000000 wm4.time.h.53.beb46e650cd406cb917b6b96b45e640a
                           .group:0000000000000000 wm4.types.h.137.b47ba4422427ad6e74c43b7db72dcd74
                           .group:0000000000000000 wm4.stddef.h.187.16ef0524e1724b0cb2c6fb742929660a
                           .group:0000000000000000 wm4.types.h.187.bd5a05039b505b3620e6973f1b2ffeb1
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
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
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.a2ca0b29d01f5da7ea7f879d801b43ca
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.0af3535195ddeb87f5c2e8ca307f12bc
                           .group:0000000000000000 wm4.alloca.h.19.edefa922a76c1cbaaf1e416903ba2d1c
                           .group:0000000000000000 wm4.alloca.h.29.156e12058824cc23d961c4d3b13031f6
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.stdio.h.26.4719156f1aea2bb9662fd6c582dc9a4c
                           .group:0000000000000000 wm4.stdio.h.36.2dd12c1fd035242ad5cfd0152a01be5a
                           .group:0000000000000000 wm4._G_config.h.5.b0f37d9e474454cf6e459063458db32f
                           .group:0000000000000000 wm4.wchar.h.80.eea3eba2d2a17aace9470a8e0d8218dc
                           .group:0000000000000000 wm4._G_config.h.46.5187c97b14fd664662cb32e6b94fc49e
                           .group:0000000000000000 wm4.libio.h.33.a775b9ecae273f33bc59931e9891e4ca
                           .group:0000000000000000 wm4.stdarg.h.34.3a23a216c0c293b3d2ea2e89281481e6
                           .group:0000000000000000 wm4.libio.h.51.dab170798ec1df48c625aea7c30e1b63
                           .group:0000000000000000 wm4.stdio.h.80.7c3a1fd1f0babda3c692439566e04dd1
                           .group:0000000000000000 wm4.stdio_lim.h.23.f8541119d1bcf759d7de9531671fd758
                           .group:0000000000000000 wm4.stdio.h.172.df21df34a7396d7da2e08f9b617d582f
                           .group:0000000000000000 wm4.stdio.h.26.e50fc3808d57d965ceefc6f6dd102eb7
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.gl.h.28.27e118789b77bf53572e8b8b827388be
                           .group:0000000000000000 wm4.glext.h.2.33ebf91cb2ac393e00fbf001cfd5adf6
                           .group:0000000000000000 wm4.glext.h.470.f1f9a32ea973d58e9e9d60b0d331a28b
                           .group:0000000000000000 wm4.wchar.h.20.510818a05484290d697a517509bf4b2d
                           .group:0000000000000000 wm4.stdint.h.52.8bda5d4f6e37fcdcd6c952c7de376f68
                           .group:0000000000000000 wm4.inttypes.h.32.c4dc77c414e5a88041490e6d2aa1116a
                           .group:0000000000000000 wm4.glext.h.1425.4660c46bd83bf818a1c8102c2fa59820
                           .group:0000000000000000 wm4.gl.h.2066.d218939585eb4fd8b54422df1c78229d
                           .group:0000000000000000 wm4.glx.h.45.4b7e546d91728004cab1371c348ddb63
                           .group:0000000000000000 wm4.glxext.h.2.b4e8a31b7f042be05811d22657d85b23
                           .group:0000000000000000 wm4.glx.h.347.6b73155b2e226683d914b22e4387b260
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915

UNDEFINED SYMBOLS
_ZN9Fl_PluginD2Ev
_ZdlPv
glPushClientAttrib
glPixelStorei
_Znam
glReadPixels
glPopClientAttrib
_Znwm
_ZN12Fl_RGB_ImageC1EPKhiiii
fl_graphics_driver
_ZN9Fl_PluginC2EPKcS1_
__dso_handle
__cxa_atexit
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Plugin
__cxa_pure_virtual
