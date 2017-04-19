   1              		.file	"Fl_Image_Surface.cxx"
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
  17              	.LFB240:
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
  26              	.LFE240:
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
  42              	.LFB242:
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
  48              	.LFE242:
  50              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
  51              	.LCOLDE1:
  52              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
  53              	.LHOTE1:
  54              		.weak	_ZN9Fl_DeviceD1Ev
  55              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
  56              		.section	.text.unlikely._ZN16Fl_Image_Surface10class_nameEv,"axG",@progbits,_ZN16Fl_Image_Surface1
  57              		.align 2
  58              	.LCOLDB2:
  59              		.section	.text._ZN16Fl_Image_Surface10class_nameEv,"axG",@progbits,_ZN16Fl_Image_Surface10class_na
  60              	.LHOTB2:
  61              		.align 2
  62              		.p2align 4,,15
  63              		.weak	_ZN16Fl_Image_Surface10class_nameEv
  65              	_ZN16Fl_Image_Surface10class_nameEv:
  66              	.LFB406:
  67              		.file 2 "fltk-1.3.4-1/FL/Fl_Image_Surface.H"
   1:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
   2:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // "$Id: Fl_Image_Surface.H 11156 2016-02-11 20:42:51Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
   4:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // Draw-to-image code for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
   6:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // Copyright 1998-2014 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
   8:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
  12:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
  14:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
  16:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
  18:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** 
  19:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #ifndef Fl_Image_Surface_H
  20:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #define Fl_Image_Surface_H
  21:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** 
  22:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #include <FL/Fl_Copy_Surface.H>
  23:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #include <FL/Fl_Image.H>
  24:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #include <FL/Fl_Shared_Image.H>
  25:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** 
  26:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** 
  27:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** /** Directs all graphics requests to an Fl_Image.
  28:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  
  29:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  After creation of an Fl_Image_Surface object, call set_current() on it, and all subsequent graphic
  30:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  will be recorded in the image. It's possible to draw widgets (using Fl_Image_Surface::draw()) 
  31:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  or to use any of the \ref fl_drawings or the \ref fl_attributes.
  32:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  Finally, call image() on the object to obtain a newly allocated Fl_RGB_Image object.
  33:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  <br> Fl_GL_Window objects can be drawn in the image as well. 
  34:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  
  35:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  <br> Usage example:
  36:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  \code
  37:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  Fl_Widget *g = ...; // a widget you want to draw in an image
  38:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  Fl_Image_Surface *img_surf = new Fl_Image_Surface(g->w(), g->h()); // create an Fl_Image_Surface o
  39:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  img_surf->set_current(); // direct graphics requests to the image
  40:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  fl_color(FL_WHITE); fl_rectf(0, 0, g->w(), g->h()); // draw a white background
  41:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  img_surf->draw(g); // draw the g widget in the image
  42:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  Fl_RGB_Image* image = img_surf->image(); // get the resulting image
  43:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  delete img_surf; // delete the img_surf object
  44:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  Fl_Display_Device::display_device()->set_current();  // direct graphics requests back to the displ
  45:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  \endcode
  46:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** */
  47:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** class FL_EXPORT Fl_Image_Surface : public Fl_Surface_Device {
  48:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** private:
  49:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   void prepare_(int w, int h, int highres);
  50:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Fl_Offscreen offscreen;
  51:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   int width;
  52:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   int height;
  53:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Fl_Paged_Device *helper;
  54:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #ifdef __APPLE__
  55:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #elif defined(WIN32)
  56:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   HDC _sgc; 
  57:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Window _sw; 
  58:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Fl_Surface_Device *_ss;
  59:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   int _savedc;
  60:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #else
  61:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Fl_Surface_Device *previous;
  62:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Window pre_window;
  63:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   GC gc;
  64:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #endif
  65:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** public:
  66:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   static const char *class_id;
  67:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   const char *class_name() {return class_id;};
  68              		.loc 2 67 0
  69              		.cfi_startproc
  70              	.LVL2:
  71              		.loc 2 67 0
  72 0000 488B0500 		movq	_ZN16Fl_Image_Surface8class_idE(%rip), %rax
  72      000000
  73 0007 C3       		ret
  74              		.cfi_endproc
  75              	.LFE406:
  77              		.section	.text.unlikely._ZN16Fl_Image_Surface10class_nameEv,"axG",@progbits,_ZN16Fl_Image_Surface1
  78              	.LCOLDE2:
  79              		.section	.text._ZN16Fl_Image_Surface10class_nameEv,"axG",@progbits,_ZN16Fl_Image_Surface10class_na
  80              	.LHOTE2:
  81              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  88              		.weak	_ZN9Fl_DeviceD0Ev
  90              	_ZN9Fl_DeviceD0Ev:
  91              	.LFB244:
  92              		.loc 1 91 0
  93              		.cfi_startproc
  94              	.LVL3:
  95              		.loc 1 91 0
  96 0000 E9000000 		jmp	_ZdlPv
  96      00
  97              	.LVL4:
  98              		.cfi_endproc
  99              	.LFE244:
 101              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 102              	.LCOLDE3:
 103              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 104              	.LHOTE3:
 105              		.section	.text.unlikely._ZN16Fl_Image_SurfaceD2Ev,"ax",@progbits
 106              		.align 2
 107              	.LCOLDB4:
 108              		.section	.text._ZN16Fl_Image_SurfaceD2Ev,"ax",@progbits
 109              	.LHOTB4:
 110              		.align 2
 111              		.p2align 4,,15
 112              		.globl	_ZN16Fl_Image_SurfaceD2Ev
 114              	_ZN16Fl_Image_SurfaceD2Ev:
 115              	.LFB510:
 116              		.file 3 "fltk-1.3.4-1/src/Fl_Image_Surface.cxx"
   1:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    1              		.file	"Fl_Image_Surface.cxx"
   2:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
   5:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    7              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
   8:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
  12:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   13              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
  14:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   14              		.weak	_ZN9Fl_Device10class_nameEv
  15:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   16              	_ZN9Fl_Device10class_nameEv:
  16:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   17              	.LFB240:
  17:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Device.H"
  18:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    1:fltk-1.3.4-1/FL/Fl_Device.H **** //
  19:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
  20:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    3:fltk-1.3.4-1/FL/Fl_Device.H **** //
  21:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Su
  22:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
  23:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    6:fltk-1.3.4-1/FL/Fl_Device.H **** //
  24:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
  25:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    8:fltk-1.3.4-1/FL/Fl_Device.H **** //
  26:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights
  27:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with th
  28:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  29:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  30:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  31:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  32:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  33:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  34:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  35:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  36:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  37:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  38:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver,
  39:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  40:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  41:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  42:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  43:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  44:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  45:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
  46:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
  47:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
  48:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  49:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  50:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  51:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  52:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  53:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  54:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  55:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all g
  56:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  57:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  58:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  59:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  60:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  61:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
  62:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
  63:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
  64:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
  65:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  66:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w
  67:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  68:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  69:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
  70:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
  71:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  72:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  73:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
  74:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
  75:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
  76:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
  77:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
  78:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
  79:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  80:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
  81:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   64:fltk-1.3.4-1/FL/Fl_Device.H **** 
  82:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 117              		.loc 3 82 0
 118              		.cfi_startproc
 119              	.LVL5:
 120 0000 53       		pushq	%rbx
 121              		.cfi_def_cfa_offset 16
 122              		.cfi_offset 3, -16
 123              		.loc 3 82 0
 124 0001 4889FB   		movq	%rdi, %rbx
 125              	.LBB48:
  83:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
  84:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type in
  85:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  86:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
  87:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  88:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  89:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class 
  90:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
  92:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 126              		.loc 3 92 0
 127 0004 488B7710 		movq	16(%rdi), %rsi
  82:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
 128              		.loc 3 82 0
 129 0008 48C70700 		movq	$_ZTV16Fl_Image_Surface+16, (%rdi)
 129      000000
 130              		.loc 3 92 0
 131 000f 488B3D00 		movq	fl_display(%rip), %rdi
 131      000000
 132              	.LVL6:
 133 0016 E8000000 		call	XFreePixmap
 133      00
 134              	.LVL7:
  93:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 135              		.loc 3 93 0
 136 001b 488B7338 		movq	56(%rbx), %rsi
 137 001f 4885F6   		testq	%rsi, %rsi
 138 0022 7417     		je	.L6
 139              		.loc 3 93 0 is_stmt 0 discriminator 1
 140 0024 488B3D00 		movq	fl_display(%rip), %rdi
 140      000000
 141 002b E8000000 		call	XFreeGC
 141      00
 142              	.LVL8:
 143 0030 48C70500 		movq	$0, fl_gc(%rip)
 143      00000000 
 143      000000
 144              	.L6:
  94:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
 145              		.loc 3 94 0 is_stmt 1
 146 003b 488B7B20 		movq	32(%rbx), %rdi
 147 003f 4885FF   		testq	%rdi, %rdi
 148 0042 740C     		je	.L5
 149              		.loc 3 94 0 is_stmt 0 discriminator 1
 150 0044 488B07   		movq	(%rdi), %rax
 151              	.LBE48:
  95:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   78:fltk-1.3.4-1/FL/Fl_Device.H ****    
  96:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be c
 152              		.loc 3 96 0 is_stmt 1 discriminator 1
 153 0047 5B       		popq	%rbx
 154              		.cfi_remember_state
 155              		.cfi_def_cfa_offset 8
 156              	.LVL9:
 157              	.LBB49:
  94:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
 158              		.loc 3 94 0 discriminator 1
 159 0048 488B4010 		movq	16(%rax), %rax
 160 004c FFE0     		jmp	*%rax
 161              	.LVL10:
 162 004e 6690     		.p2align 4,,10
 163              		.p2align 3
 164              	.L5:
 165              		.cfi_restore_state
 166              	.LBE49:
 167              		.loc 3 96 0
 168 0050 5B       		popq	%rbx
 169              		.cfi_def_cfa_offset 8
 170              	.LVL11:
 171 0051 C3       		ret
 172              		.cfi_endproc
 173              	.LFE510:
 175              		.section	.text.unlikely._ZN16Fl_Image_SurfaceD2Ev
 176              	.LCOLDE4:
 177              		.section	.text._ZN16Fl_Image_SurfaceD2Ev
 178              	.LHOTE4:
 179              		.globl	_ZN16Fl_Image_SurfaceD1Ev
 180              		.set	_ZN16Fl_Image_SurfaceD1Ev,_ZN16Fl_Image_SurfaceD2Ev
 181              		.section	.text.unlikely._ZN16Fl_Image_SurfaceD0Ev,"ax",@progbits
 182              		.align 2
 183              	.LCOLDB5:
 184              		.section	.text._ZN16Fl_Image_SurfaceD0Ev,"ax",@progbits
 185              	.LHOTB5:
 186              		.align 2
 187              		.p2align 4,,15
 188              		.globl	_ZN16Fl_Image_SurfaceD0Ev
 190              	_ZN16Fl_Image_SurfaceD0Ev:
 191              	.LFB512:
  82:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
 192              		.loc 3 82 0
 193              		.cfi_startproc
 194              	.LVL12:
 195 0000 53       		pushq	%rbx
 196              		.cfi_def_cfa_offset 16
 197              		.cfi_offset 3, -16
  82:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
 198              		.loc 3 82 0
 199 0001 4889FB   		movq	%rdi, %rbx
 200              		.loc 3 96 0
 201 0004 E8000000 		call	_ZN16Fl_Image_SurfaceD1Ev
 201      00
 202              	.LVL13:
 203 0009 4889DF   		movq	%rbx, %rdi
 204 000c 5B       		popq	%rbx
 205              		.cfi_def_cfa_offset 8
 206              	.LVL14:
 207 000d E9000000 		jmp	_ZdlPv
 207      00
 208              	.LVL15:
 209              		.cfi_endproc
 210              	.LFE512:
 212              		.section	.text.unlikely._ZN16Fl_Image_SurfaceD0Ev
 213              	.LCOLDE5:
 214              		.section	.text._ZN16Fl_Image_SurfaceD0Ev
 215              	.LHOTE5:
 216              		.section	.text.unlikely._ZN16Fl_Image_Surface11set_currentEv,"ax",@progbits
 217              		.align 2
 218              	.LCOLDB6:
 219              		.section	.text._ZN16Fl_Image_Surface11set_currentEv,"ax",@progbits
 220              	.LHOTB6:
 221              		.align 2
 222              		.p2align 4,,15
 223              		.globl	_ZN16Fl_Image_Surface11set_currentEv
 225              	_ZN16Fl_Image_Surface11set_currentEv:
 226              	.LFB516:
  97:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
  98:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ..
  99:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 100:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 101:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 102:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   19              		.loc 1 84 0
 103:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   20              		.cfi_startproc
 104:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   21              	.LVL0:
 105:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   22              		.loc 1 84 0
 106:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   23 0000 488B0500 		movq	_ZN9Fl_Device8class_idE(%rip), %rax
 107:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   23      000000
 108:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   24 0007 C3       		ret
 109:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   25              		.cfi_endproc
 110:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   26              	.LFE240:
 111:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   28              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
 112:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   29              	.LCOLDE0:
 113:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   30              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
 114:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   31              	.LHOTE0:
 115:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   32              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
 116:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   33              		.align 2
 117:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   34              	.LCOLDB1:
 118:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   35              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 119:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   36              	.LHOTB1:
 120:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   37              		.align 2
 121:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   38              		.p2align 4,,15
 122:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   39              		.weak	_ZN9Fl_DeviceD2Ev
 123:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   41              	_ZN9Fl_DeviceD2Ev:
 124:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   42              	.LFB242:
 125:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 126:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
 127:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   87:fltk-1.3.4-1/FL/Fl_Device.H ****    
 128:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the de
 129:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
 130:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 131:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
 132:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   43              		.loc 1 91 0
 133:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   44              		.cfi_startproc
 134:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   45              	.LVL1:
 135:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   46 0000 F3C3     		rep ret
 136:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   47              		.cfi_endproc
 137:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   48              	.LFE242:
 138:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   50              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
 139:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   51              	.LCOLDE1:
 140:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   52              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 141:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   53              	.LHOTE1:
 142:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   54              		.weak	_ZN9Fl_DeviceD1Ev
 143:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   55              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
 144:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   56              		.section	.text.unlikely._ZN16Fl_Image_Surface10class_nameEv,"axG",@progbits,_ZN
 145:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   57              		.align 2
 146:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   58              	.LCOLDB2:
 147:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   59              		.section	.text._ZN16Fl_Image_Surface10class_nameEv,"axG",@progbits,_ZN16Fl_Imag
 148:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   60              	.LHOTB2:
 149:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   61              		.align 2
 150:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   62              		.p2align 4,,15
 151:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   63              		.weak	_ZN16Fl_Image_Surface10class_nameEv
 152:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   65              	_ZN16Fl_Image_Surface10class_nameEv:
 153:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   66              	.LFB406:
 154:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   67              		.file 2 "fltk-1.3.4-1/FL/Fl_Image_Surface.H"
 155:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    1:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
 156:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    2:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // "$Id: Fl_Image_Surface.H 11156 2016-02-11 20:42:51Z
 157:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    3:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
 158:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    4:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // Draw-to-image code for the Fast Light Tool Kit (FLT
 159:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    5:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
 227              		.loc 3 159 0
 228              		.cfi_startproc
 229              	.LVL16:
 230 0000 4883EC18 		subq	$24, %rsp
 231              		.cfi_def_cfa_offset 32
 160:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    6:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // Copyright 1998-2014 by Bill Spitzak and others.
 161:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    7:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
 162:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    8:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // This library is free software. Distribution and use
 163:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    9:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // the file "COPYING" which should have been included 
 164:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   10:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // file is missing or damaged, see the license at:
 165:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   11:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
 166:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   12:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //     http://www.fltk.org/COPYING.php
 167:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   13:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
 168:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   14:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** // Please report all bugs and problems on the followin
 169:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   15:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
 170:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   16:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //     http://www.fltk.org/str.php
 171:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   17:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
 172:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   18:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** 
 173:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   19:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #ifndef Fl_Image_Surface_H
 174:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   20:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #define Fl_Image_Surface_H
 232              		.loc 3 174 0
 233 0004 488B0500 		movq	fl_window(%rip), %rax
 233      000000
 234 000b 48894730 		movq	%rax, 48(%rdi)
 175:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   21:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** 
 235              		.loc 3 175 0
 236 000f 488B4710 		movq	16(%rdi), %rax
 237 0013 48890500 		movq	%rax, fl_window(%rip)
 237      000000
 238              	.LBB50:
 239              	.LBB51:
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
 240              		.loc 1 575 0
 241 001a 488B0500 		movq	_ZN17Fl_Surface_Device8_surfaceE(%rip), %rax
 241      000000
 242 0021 4885C0   		testq	%rax, %rax
 243 0024 742A     		je	.L18
 244              	.LVL17:
 245              	.L16:
 246              	.LBE51:
 247              	.LBE50:
 176:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   22:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #include <FL/Fl_Copy_Surface.H>
 248              		.loc 3 176 0
 249 0026 48894728 		movq	%rax, 40(%rdi)
 177:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   23:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #include <FL/Fl_Image.H>
 250              		.loc 3 177 0
 251 002a E8000000 		call	_ZN17Fl_Surface_Device11set_currentEv
 251      00
 252              	.LVL18:
 253              	.LBB53:
 254              	.LBB54:
 255              		.file 4 "fltk-1.3.4-1/FL/fl_draw.H"
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
 256              		.loc 4 95 0
 257 002f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 257      000000
 258 0036 488B07   		movq	(%rdi), %rax
 259 0039 488B8068 		movq	360(%rax), %rax
 259      010000
 260              	.LBE54:
 261              	.LBE53:
 178:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   24:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #include <FL/Fl_Shared_Image.H>
 179:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   25:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** 
 180:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   26:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** 
 262              		.loc 3 180 0
 263 0040 4883C418 		addq	$24, %rsp
 264              		.cfi_remember_state
 265              		.cfi_def_cfa_offset 8
 266              	.LBB56:
 267              	.LBB55:
 268              		.loc 4 95 0
 269 0044 FFE0     		jmp	*%rax
 270              	.LVL19:
 271 0046 662E0F1F 		.p2align 4,,10
 271      84000000 
 271      0000
 272              		.p2align 3
 273              	.L18:
 274              		.cfi_restore_state
 275 0050 48897C24 		movq	%rdi, 8(%rsp)
 275      08
 276              	.LBE55:
 277              	.LBE56:
 278              	.LBB57:
 279              	.LBB52:
 280              		.loc 1 575 0
 281 0055 E8000000 		call	_ZN17Fl_Surface_Device15default_surfaceEv
 281      00
 282              	.LVL20:
 283 005a 488B7C24 		movq	8(%rsp), %rdi
 283      08
 284 005f EBC5     		jmp	.L16
 285              	.LBE52:
 286              	.LBE57:
 287              		.cfi_endproc
 288              	.LFE516:
 290              		.section	.text.unlikely._ZN16Fl_Image_Surface11set_currentEv
 291              	.LCOLDE6:
 292              		.section	.text._ZN16Fl_Image_Surface11set_currentEv
 293              	.LHOTE6:
 294              		.section	.text.unlikely._ZN16Fl_Image_Surface8prepare_Eiii,"ax",@progbits
 295              		.align 2
 296              	.LCOLDB7:
 297              		.section	.text._ZN16Fl_Image_Surface8prepare_Eiii,"ax",@progbits
 298              	.LHOTB7:
 299              		.align 2
 300              		.p2align 4,,15
 301              		.globl	_ZN16Fl_Image_Surface8prepare_Eiii
 303              	_ZN16Fl_Image_Surface8prepare_Eiii:
 304              	.LFB502:
  25:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights
 305              		.loc 3 25 0
 306              		.cfi_startproc
 307              	.LVL21:
  51:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
 308              		.loc 3 51 0
 309 0000 48833D00 		cmpq	$0, fl_gc(%rip)
 309      00000000 
  25:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights
 310              		.loc 3 25 0
 311 0008 4154     		pushq	%r12
 312              		.cfi_def_cfa_offset 16
 313              		.cfi_offset 12, -16
 314 000a 4189D4   		movl	%edx, %r12d
 315 000d 55       		pushq	%rbp
 316              		.cfi_def_cfa_offset 24
 317              		.cfi_offset 6, -24
 318 000e 89F5     		movl	%esi, %ebp
 319 0010 53       		pushq	%rbx
 320              		.cfi_def_cfa_offset 32
 321              		.cfi_offset 3, -32
  25:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights
 322              		.loc 3 25 0
 323 0011 4889FB   		movq	%rdi, %rbx
  26:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with th
 324              		.loc 3 26 0
 325 0014 897718   		movl	%esi, 24(%rdi)
  27:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
 326              		.loc 3 27 0
 327 0017 89571C   		movl	%edx, 28(%rdi)
 328              	.LVL22:
  50:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
 329              		.loc 3 50 0
 330 001a 48C74738 		movq	$0, 56(%rdi)
 330      00000000 
  51:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
 331              		.loc 3 51 0
 332 0022 745C     		je	.L22
 333              	.LVL23:
 334              	.L20:
  56:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
 335              		.loc 3 56 0
 336 0024 48630500 		movslq	fl_screen(%rip), %rax
 336      000000
 337 002b 488B3D00 		movq	fl_display(%rip), %rdi
 337      000000
 338 0032 4489E1   		movl	%r12d, %ecx
 339 0035 89EA     		movl	%ebp, %edx
 340 0037 48C1E007 		salq	$7, %rax
 341 003b 480387E8 		addq	232(%rdi), %rax
 341      000000
 342 0042 488B7010 		movq	16(%rax), %rsi
 343 0046 488B0500 		movq	fl_visual(%rip), %rax
 343      000000
 344 004d 448B4014 		movl	20(%rax), %r8d
 345 0051 E8000000 		call	XCreatePixmap
 345      00
 346              	.LVL24:
  57:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 347              		.loc 3 57 0
 348 0056 BF180000 		movl	$24, %edi
 348      00
  56:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
 349              		.loc 3 56 0
 350 005b 48894310 		movq	%rax, 16(%rbx)
  57:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 351              		.loc 3 57 0
 352 005f E8000000 		call	_Znwm
 352      00
 353              	.LVL25:
 354 0064 4889C5   		movq	%rax, %rbp
 355              	.LVL26:
 356 0067 4889C7   		movq	%rax, %rdi
 357 006a E8000000 		call	_ZN16Fl_Xlib_Surface_C1Ev
 357      00
 358              	.LVL27:
 359              	.LBB58:
 360              	.LBB59:
 569:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Returns the graphics driver of this drawing surface. */
 361              		.loc 1 569 0
 362 006f 488B4508 		movq	8(%rbp), %rax
 363              	.LBE59:
 364              	.LBE58:
  57:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 365              		.loc 3 57 0
 366 0073 48896B20 		movq	%rbp, 32(%rbx)
 367              	.LVL28:
 368              	.LBB61:
 369              	.LBB60:
 569:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Returns the graphics driver of this drawing surface. */
 370              		.loc 1 569 0
 371 0077 48894308 		movq	%rax, 8(%rbx)
 372              	.LBE60:
 373              	.LBE61:
  60:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
 374              		.loc 3 60 0
 375 007b 5B       		popq	%rbx
 376              		.cfi_remember_state
 377              		.cfi_def_cfa_offset 24
 378              	.LVL29:
 379 007c 5D       		popq	%rbp
 380              		.cfi_def_cfa_offset 16
 381              	.LVL30:
 382 007d 415C     		popq	%r12
 383              		.cfi_def_cfa_offset 8
 384              	.LVL31:
 385 007f C3       		ret
 386              	.LVL32:
 387              		.p2align 4,,10
 388              		.p2align 3
 389              	.L22:
 390              		.cfi_restore_state
  52:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
 391              		.loc 3 52 0
 392 0080 E8000000 		call	_Z15fl_open_displayv
 392      00
 393              	.LVL33:
  53:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
 394              		.loc 3 53 0
 395 0085 48630500 		movslq	fl_screen(%rip), %rax
 395      000000
 396 008c 488B3D00 		movq	fl_display(%rip), %rdi
 396      000000
 397 0093 31C9     		xorl	%ecx, %ecx
 398 0095 31D2     		xorl	%edx, %edx
 399 0097 48C1E007 		salq	$7, %rax
 400 009b 480387E8 		addq	232(%rdi), %rax
 400      000000
 401 00a2 488B7010 		movq	16(%rax), %rsi
 402 00a6 E8000000 		call	XCreateGC
 402      00
 403              	.LVL34:
 404 00ab 48894338 		movq	%rax, 56(%rbx)
  54:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all g
 405              		.loc 3 54 0
 406 00af 48890500 		movq	%rax, fl_gc(%rip)
 406      000000
 407 00b6 E969FFFF 		jmp	.L20
 407      FF
 408              		.cfi_endproc
 409              	.LFE502:
 411              		.section	.text.unlikely._ZN16Fl_Image_Surface8prepare_Eiii
 412              	.LCOLDE7:
 413              		.section	.text._ZN16Fl_Image_Surface8prepare_Eiii
 414              	.LHOTE7:
 415              		.section	.text.unlikely._ZN16Fl_Image_SurfaceC2Eiii,"ax",@progbits
 416              		.align 2
 417              	.LCOLDB8:
 418              		.section	.text._ZN16Fl_Image_SurfaceC2Eiii,"ax",@progbits
 419              	.LHOTB8:
 420              		.align 2
 421              		.p2align 4,,15
 422              		.globl	_ZN16Fl_Image_SurfaceC2Eiii
 424              	_ZN16Fl_Image_SurfaceC2Eiii:
 425              	.LFB504:
  70:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
 426              		.loc 3 70 0
 427              		.cfi_startproc
 428              	.LVL35:
 429              	.LBB62:
 430              	.LBB63:
 431              	.LBB64:
 563:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 432              		.loc 1 563 0
 433 0000 48C74708 		movq	$0, 8(%rdi)
 433      00000000 
 434              	.LVL36:
 435              	.LBE64:
 436              	.LBE63:
  70:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
 437              		.loc 3 70 0
 438 0008 48C70700 		movq	$_ZTV16Fl_Image_Surface+16, (%rdi)
 438      000000
  71:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
 439              		.loc 3 71 0
 440 000f E9000000 		jmp	_ZN16Fl_Image_Surface8prepare_Eiii
 440      00
 441              	.LVL37:
 442              	.LBE62:
 443              		.cfi_endproc
 444              	.LFE504:
 446              		.section	.text.unlikely._ZN16Fl_Image_SurfaceC2Eiii
 447              	.LCOLDE8:
 448              		.section	.text._ZN16Fl_Image_SurfaceC2Eiii
 449              	.LHOTE8:
 450              		.globl	_ZN16Fl_Image_SurfaceC1Eiii
 451              		.set	_ZN16Fl_Image_SurfaceC1Eiii,_ZN16Fl_Image_SurfaceC2Eiii
 452              		.section	.text.unlikely._ZN16Fl_Image_SurfaceC2Eii,"ax",@progbits
 453              		.align 2
 454              	.LCOLDB9:
 455              		.section	.text._ZN16Fl_Image_SurfaceC2Eii,"ax",@progbits
 456              	.LHOTB9:
 457              		.align 2
 458              		.p2align 4,,15
 459              		.globl	_ZN16Fl_Image_SurfaceC2Eii
 461              	_ZN16Fl_Image_SurfaceC2Eii:
 462              	.LFB507:
  74:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
 463              		.loc 3 74 0
 464              		.cfi_startproc
 465              	.LVL38:
 466              	.LBB65:
 467              	.LBB66:
 468              	.LBB67:
 563:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 469              		.loc 1 563 0
 470 0000 48C74708 		movq	$0, 8(%rdi)
 470      00000000 
 471              	.LVL39:
 472              	.LBE67:
 473              	.LBE66:
  74:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
 474              		.loc 3 74 0
 475 0008 48C70700 		movq	$_ZTV16Fl_Image_Surface+16, (%rdi)
 475      000000
  75:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
 476              		.loc 3 75 0
 477 000f 31C9     		xorl	%ecx, %ecx
 478 0011 E9000000 		jmp	_ZN16Fl_Image_Surface8prepare_Eiii
 478      00
 479              	.LVL40:
 480              	.LBE65:
 481              		.cfi_endproc
 482              	.LFE507:
 484              		.section	.text.unlikely._ZN16Fl_Image_SurfaceC2Eii
 485              	.LCOLDE9:
 486              		.section	.text._ZN16Fl_Image_SurfaceC2Eii
 487              	.LHOTE9:
 488              		.globl	_ZN16Fl_Image_SurfaceC1Eii
 489              		.set	_ZN16Fl_Image_SurfaceC1Eii,_ZN16Fl_Image_SurfaceC2Eii
 490              		.section	.text.unlikely._ZN16Fl_Image_Surface5imageEv,"ax",@progbits
 491              		.align 2
 492              	.LCOLDB10:
 493              		.section	.text._ZN16Fl_Image_Surface5imageEv,"ax",@progbits
 494              	.LHOTB10:
 495              		.align 2
 496              		.p2align 4,,15
 497              		.globl	_ZN16Fl_Image_Surface5imageEv
 499              	_ZN16Fl_Image_Surface5imageEv:
 500              	.LFB513:
 104:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   22              		.loc 1 84 0
 501              		.loc 3 104 0
 502              		.cfi_startproc
 503              	.LVL41:
 504 0000 4155     		pushq	%r13
 505              		.cfi_def_cfa_offset 16
 506              		.cfi_offset 13, -16
 507 0002 4154     		pushq	%r12
 508              		.cfi_def_cfa_offset 24
 509              		.cfi_offset 12, -24
 510 0004 55       		pushq	%rbp
 511              		.cfi_def_cfa_offset 32
 512              		.cfi_offset 6, -32
 513 0005 53       		pushq	%rbx
 514              		.cfi_def_cfa_offset 40
 515              		.cfi_offset 3, -40
 516 0006 4889FB   		movq	%rdi, %rbx
 517 0009 4883EC08 		subq	$8, %rsp
 518              		.cfi_def_cfa_offset 48
 106:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   23      000000
 519              		.loc 3 106 0
 520 000d 8B6F18   		movl	24(%rdi), %ebp
 521              	.LVL42:
 522 0010 448B671C 		movl	28(%rdi), %r12d
 523              	.LVL43:
 524              	.LBB68:
 525              	.LBB69:
  96:fltk-1.3.4-1/FL/fl_draw.H **** /**
  97:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the previous clip region.
  98:fltk-1.3.4-1/FL/fl_draw.H ****  
  99:fltk-1.3.4-1/FL/fl_draw.H ****  You must call fl_pop_clip() once for every time you call fl_push_clip().
 100:fltk-1.3.4-1/FL/fl_draw.H ****  Unpredictable results may occur if the clip stack is not empty when
 101:fltk-1.3.4-1/FL/fl_draw.H ****  you return to FLTK.
 102:fltk-1.3.4-1/FL/fl_draw.H ****  */
 103:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_clip() {fl_graphics_driver->pop_clip(); }
 526              		.loc 4 103 0
 527 0014 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 527      000000
 528              	.LVL44:
 529 001b 488B07   		movq	(%rdi), %rax
 530 001e FF907001 		call	*368(%rax)
 530      0000
 531              	.LVL45:
 532              	.LBE69:
 533              	.LBE68:
 124:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 534              		.loc 3 124 0
 535 0024 8B4B18   		movl	24(%rbx), %ecx
 536 0027 448B431C 		movl	28(%rbx), %r8d
 537 002b 4531C9   		xorl	%r9d, %r9d
 538 002e 31D2     		xorl	%edx, %edx
 539 0030 31F6     		xorl	%esi, %esi
 540 0032 31FF     		xorl	%edi, %edi
 541 0034 E8000000 		call	_Z13fl_read_imagePhiiiii
 541      00
 542              	.LVL46:
 126:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   87:fltk-1.3.4-1/FL/Fl_Device.H ****    
 543              		.loc 3 126 0
 544 0039 488B7B28 		movq	40(%rbx), %rdi
 124:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 545              		.loc 3 124 0
 546 003d 4989C5   		movq	%rax, %r13
 547              	.LVL47:
 125:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
 548              		.loc 3 125 0
 549 0040 488B4330 		movq	48(%rbx), %rax
 550              	.LVL48:
 551 0044 48890500 		movq	%rax, fl_window(%rip)
 551      000000
 126:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   87:fltk-1.3.4-1/FL/Fl_Device.H ****    
 552              		.loc 3 126 0
 553 004b 488B07   		movq	(%rdi), %rax
 554 004e FF5018   		call	*24(%rax)
 555              	.LVL49:
 128:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
 556              		.loc 3 128 0
 557 0051 BF400000 		movl	$64, %edi
 557      00
 558 0056 E8000000 		call	_Znwm
 558      00
 559              	.LVL50:
 560 005b 4489E1   		movl	%r12d, %ecx
 561 005e 4889C3   		movq	%rax, %rbx
 562              	.LVL51:
 563 0061 89EA     		movl	%ebp, %edx
 564 0063 4C89EE   		movq	%r13, %rsi
 565 0066 4889C7   		movq	%rax, %rdi
 566 0069 4531C9   		xorl	%r9d, %r9d
 567 006c 41B80300 		movl	$3, %r8d
 567      0000
 568 0072 E8000000 		call	_ZN12Fl_RGB_ImageC1EPKhiiii
 568      00
 569              	.LVL52:
 129:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 570              		.loc 3 129 0
 571 0077 C7433001 		movl	$1, 48(%rbx)
 571      000000
 131:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   43              		.loc 1 91 0
 572              		.loc 3 131 0
 573 007e 4883C408 		addq	$8, %rsp
 574              		.cfi_def_cfa_offset 40
 575 0082 4889D8   		movq	%rbx, %rax
 576 0085 5B       		popq	%rbx
 577              		.cfi_def_cfa_offset 32
 578              	.LVL53:
 579 0086 5D       		popq	%rbp
 580              		.cfi_def_cfa_offset 24
 581              	.LVL54:
 582 0087 415C     		popq	%r12
 583              		.cfi_def_cfa_offset 16
 584              	.LVL55:
 585 0089 415D     		popq	%r13
 586              		.cfi_def_cfa_offset 8
 587              	.LVL56:
 588 008b C3       		ret
 589              		.cfi_endproc
 590              	.LFE513:
 592              		.section	.text.unlikely._ZN16Fl_Image_Surface5imageEv
 593              	.LCOLDE10:
 594              		.section	.text._ZN16Fl_Image_Surface5imageEv
 595              	.LHOTE10:
 596              		.section	.text.unlikely._ZN16Fl_Image_Surface13highres_imageEv,"ax",@progbits
 597              		.align 2
 598              	.LCOLDB11:
 599              		.section	.text._ZN16Fl_Image_Surface13highres_imageEv,"ax",@progbits
 600              	.LHOTB11:
 601              		.align 2
 602              		.p2align 4,,15
 603              		.globl	_ZN16Fl_Image_Surface13highres_imageEv
 605              	_ZN16Fl_Image_Surface13highres_imageEv:
 606              	.LFB514:
 140:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   53              	.LHOTE1:
 607              		.loc 3 140 0
 608              		.cfi_startproc
 609              	.LVL57:
 610 0000 55       		pushq	%rbp
 611              		.cfi_def_cfa_offset 16
 612              		.cfi_offset 6, -16
 613 0001 53       		pushq	%rbx
 614              		.cfi_def_cfa_offset 24
 615              		.cfi_offset 3, -24
 616 0002 4889FB   		movq	%rdi, %rbx
 617 0005 4883EC08 		subq	$8, %rsp
 618              		.cfi_def_cfa_offset 32
 141:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   54              		.weak	_ZN9Fl_DeviceD1Ev
 619              		.loc 3 141 0
 620 0009 E8000000 		call	_ZN16Fl_Image_Surface5imageEv
 620      00
 621              	.LVL58:
 622 000e BE010000 		movl	$1, %esi
 622      00
 623 0013 4889C7   		movq	%rax, %rdi
 624 0016 E8000000 		call	_ZN15Fl_Shared_Image3getEP12Fl_RGB_Imagei
 624      00
 625              	.LVL59:
 142:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   55              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
 626              		.loc 3 142 0
 627 001b 8B531C   		movl	28(%rbx), %edx
 628 001e 8B7318   		movl	24(%rbx), %esi
 629 0021 4889C7   		movq	%rax, %rdi
 630 0024 4531C0   		xorl	%r8d, %r8d
 631 0027 B9010000 		movl	$1, %ecx
 631      00
 141:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   54              		.weak	_ZN9Fl_DeviceD1Ev
 632              		.loc 3 141 0
 633 002c 4889C5   		movq	%rax, %rbp
 634              	.LVL60:
 142:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   55              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
 635              		.loc 3 142 0
 636 002f E8000000 		call	_ZN15Fl_Shared_Image5scaleEiiii
 636      00
 637              	.LVL61:
 144:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   57              		.align 2
 638              		.loc 3 144 0
 639 0034 4883C408 		addq	$8, %rsp
 640              		.cfi_def_cfa_offset 24
 641 0038 4889E8   		movq	%rbp, %rax
 642 003b 5B       		popq	%rbx
 643              		.cfi_def_cfa_offset 16
 644              	.LVL62:
 645 003c 5D       		popq	%rbp
 646              		.cfi_def_cfa_offset 8
 647              	.LVL63:
 648 003d C3       		ret
 649              		.cfi_endproc
 650              	.LFE514:
 652              		.section	.text.unlikely._ZN16Fl_Image_Surface13highres_imageEv
 653              	.LCOLDE11:
 654              		.section	.text._ZN16Fl_Image_Surface13highres_imageEv
 655              	.LHOTE11:
 656              		.section	.text.unlikely._ZN16Fl_Image_Surface4drawEP9Fl_Widgetii,"ax",@progbits
 657              		.align 2
 658              	.LCOLDB12:
 659              		.section	.text._ZN16Fl_Image_Surface4drawEP9Fl_Widgetii,"ax",@progbits
 660              	.LHOTB12:
 661              		.align 2
 662              		.p2align 4,,15
 663              		.globl	_ZN16Fl_Image_Surface4drawEP9Fl_Widgetii
 665              	_ZN16Fl_Image_Surface4drawEP9Fl_Widgetii:
 666              	.LFB515:
 153:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   67              		.file 2 "fltk-1.3.4-1/FL/Fl_Image_Surface.H"
 667              		.loc 3 153 0
 668              		.cfi_startproc
 669              	.LVL64:
 154:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****    1:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** //
 670              		.loc 3 154 0
 671 0000 488B7F20 		movq	32(%rdi), %rdi
 672              	.LVL65:
 673 0004 488B07   		movq	(%rdi), %rax
 674 0007 FF6070   		jmp	*112(%rax)
 675              	.LVL66:
 676              		.cfi_endproc
 677              	.LFE515:
 679              		.section	.text.unlikely._ZN16Fl_Image_Surface4drawEP9Fl_Widgetii
 680              	.LCOLDE12:
 681              		.section	.text._ZN16Fl_Image_Surface4drawEP9Fl_Widgetii
 682              	.LHOTE12:
 683              		.section	.text.unlikely._ZN16Fl_Image_Surface21draw_decorated_windowEP9Fl_Windowii,"ax",@progbits
 684              		.align 2
 685              	.LCOLDB13:
 686              		.section	.text._ZN16Fl_Image_Surface21draw_decorated_windowEP9Fl_Windowii,"ax",@progbits
 687              	.LHOTB13:
 688              		.align 2
 689              		.p2align 4,,15
 690              		.globl	_ZN16Fl_Image_Surface21draw_decorated_windowEP9Fl_Windowii
 692              	_ZN16Fl_Image_Surface21draw_decorated_windowEP9Fl_Windowii:
 693              	.LFB517:
 181:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   27:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** /** Directs all graphics requests to an Fl_Image.
 182:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   28:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  
 183:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   29:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  After creation of an Fl_Image_Surface object, call se
 184:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   30:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  will be recorded in the image. It's possible to draw 
 185:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   31:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  or to use any of the \ref fl_drawings or the \ref fl_
 186:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   32:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  Finally, call image() on the object to obtain a newly
 187:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   33:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  <br> Fl_GL_Window objects can be drawn in the image a
 188:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   34:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  
 189:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   35:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  <br> Usage example:
 190:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   36:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  \code
 191:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   37:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  Fl_Widget *g = ...; // a widget you want to draw in a
 192:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   38:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  Fl_Image_Surface *img_surf = new Fl_Image_Surface(g->
 193:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   39:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  img_surf->set_current(); // direct graphics requests 
 194:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   40:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  fl_color(FL_WHITE); fl_rectf(0, 0, g->w(), g->h()); /
 195:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   41:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  img_surf->draw(g); // draw the g widget in the image
 196:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   42:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  Fl_RGB_Image* image = img_surf->image(); // get the r
 197:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   43:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  delete img_surf; // delete the img_surf object
 198:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   44:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  Fl_Display_Device::display_device()->set_current();  
 199:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   45:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****  \endcode
 200:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   46:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** */
 201:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   47:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** class FL_EXPORT Fl_Image_Surface : public Fl_Surface_D
 202:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   48:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** private:
 203:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   49:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   void prepare_(int w, int h, int highres);
 204:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   50:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Fl_Offscreen offscreen;
 205:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   51:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   int width;
 206:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   52:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   int height;
 207:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   53:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Fl_Paged_Device *helper;
 208:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   54:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #ifdef __APPLE__
 209:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   55:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #elif defined(WIN32)
 210:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   56:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   HDC _sgc; 
 211:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   57:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Window _sw; 
 212:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   58:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Fl_Surface_Device *_ss;
 213:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   59:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   int _savedc;
 214:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   60:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #else
 215:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   61:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Fl_Surface_Device *previous;
 216:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   62:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   Window pre_window;
 217:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   63:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   GC gc;
 218:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   64:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** #endif
 219:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   65:fltk-1.3.4-1/FL/Fl_Image_Surface.H **** public:
 220:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   66:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   static const char *class_id;
 221:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   67:fltk-1.3.4-1/FL/Fl_Image_Surface.H ****   const char *class_name() {return class_id;};
 222:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   68              		.loc 2 67 0
 223:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   69              		.cfi_startproc
 224:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   70              	.LVL2:
 225:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   71              		.loc 2 67 0
 226:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   72 0000 488B0500 		movq	_ZN16Fl_Image_Surface8class_idE(%rip), %rax
 227:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   72      000000
 228:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   73 0007 C3       		ret
 229:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   74              		.cfi_endproc
 230:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   75              	.LFE406:
 231:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   77              		.section	.text.unlikely._ZN16Fl_Image_Surface10class_nameEv,"axG",@progbits,_ZN
 232:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   78              	.LCOLDE2:
 233:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   79              		.section	.text._ZN16Fl_Image_Surface10class_nameEv,"axG",@progbits,_ZN16Fl_Imag
 234:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   80              	.LHOTE2:
 694              		.loc 3 234 0
 695              		.cfi_startproc
 696              	.LVL67:
 697 0000 4155     		pushq	%r13
 698              		.cfi_def_cfa_offset 16
 699              		.cfi_offset 13, -16
 700 0002 4154     		pushq	%r12
 701              		.cfi_def_cfa_offset 24
 702              		.cfi_offset 12, -24
 703 0004 4189CD   		movl	%ecx, %r13d
 704 0007 55       		pushq	%rbp
 705              		.cfi_def_cfa_offset 32
 706              		.cfi_offset 6, -32
 707 0008 53       		pushq	%rbx
 708              		.cfi_def_cfa_offset 40
 709              		.cfi_offset 3, -40
 710 0009 4889FB   		movq	%rdi, %rbx
 711 000c 4889F5   		movq	%rsi, %rbp
 712 000f 4189D4   		movl	%edx, %r12d
 713 0012 4883EC08 		subq	$8, %rsp
 714              		.cfi_def_cfa_offset 48
 715              	.LBB70:
 716              	.LBB71:
 717              		.loc 4 103 0
 718 0016 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 718      000000
 719              	.LVL68:
 720 001d 488B07   		movq	(%rdi), %rax
 721 0020 FF907001 		call	*368(%rax)
 721      0000
 722              	.LVL69:
 723              	.LBE71:
 724              	.LBE70:
 235:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   81              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
 236:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   82              		.align 2
 237:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   83              	.LCOLDB3:
 238:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   84              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 239:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   85              	.LHOTB3:
 240:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   86              		.align 2
 241:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   87              		.p2align 4,,15
 242:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   88              		.weak	_ZN9Fl_DeviceD0Ev
 243:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   90              	_ZN9Fl_DeviceD0Ev:
 244:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   91              	.LFB244:
 725              		.loc 3 244 0
 726 0026 488B7B20 		movq	32(%rbx), %rdi
 245:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   92              		.loc 1 91 0
 727              		.loc 3 245 0
 728 002a 4883C408 		addq	$8, %rsp
 729              		.cfi_def_cfa_offset 40
 244:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   92              		.loc 1 91 0
 730              		.loc 3 244 0
 731 002e 4989D8   		movq	%rbx, %r8
 732 0031 4489E9   		movl	%r13d, %ecx
 733 0034 4489E2   		movl	%r12d, %edx
 734 0037 4889EE   		movq	%rbp, %rsi
 735              		.loc 3 245 0
 736 003a 5B       		popq	%rbx
 737              		.cfi_def_cfa_offset 32
 738              	.LVL70:
 739 003b 5D       		popq	%rbp
 740              		.cfi_def_cfa_offset 24
 741              	.LVL71:
 742 003c 415C     		popq	%r12
 743              		.cfi_def_cfa_offset 16
 744              	.LVL72:
 745 003e 415D     		popq	%r13
 746              		.cfi_def_cfa_offset 8
 747              	.LVL73:
 244:fltk-1.3.4-1/src/Fl_Image_Surface.cxx ****   92              		.loc 1 91 0
 748              		.loc 3 244 0
 749 0040 E9000000 		jmp	_ZN15Fl_Paged_Device21draw_decorated_windowEP9Fl_WindowiiP17Fl_Surface_Device
 749      00
 750              	.LVL74:
 751              		.cfi_endproc
 752              	.LFE517:
 754              		.section	.text.unlikely._ZN16Fl_Image_Surface21draw_decorated_windowEP9Fl_Windowii
 755              	.LCOLDE13:
 756              		.section	.text._ZN16Fl_Image_Surface21draw_decorated_windowEP9Fl_Windowii
 757              	.LHOTE13:
 758              		.weak	_ZTS16Fl_Image_Surface
 759              		.section	.rodata._ZTS16Fl_Image_Surface,"aG",@progbits,_ZTS16Fl_Image_Surface,comdat
 760              		.align 16
 763              	_ZTS16Fl_Image_Surface:
 764 0000 3136466C 		.string	"16Fl_Image_Surface"
 764      5F496D61 
 764      67655F53 
 764      75726661 
 764      636500
 765              		.weak	_ZTI16Fl_Image_Surface
 766              		.section	.rodata._ZTI16Fl_Image_Surface,"aG",@progbits,_ZTI16Fl_Image_Surface,comdat
 767              		.align 8
 770              	_ZTI16Fl_Image_Surface:
 771 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 771      00000000 
 772 0008 00000000 		.quad	_ZTS16Fl_Image_Surface
 772      00000000 
 773 0010 00000000 		.quad	_ZTI17Fl_Surface_Device
 773      00000000 
 774              		.weak	_ZTV16Fl_Image_Surface
 775              		.section	.rodata._ZTV16Fl_Image_Surface,"aG",@progbits,_ZTV16Fl_Image_Surface,comdat
 776              		.align 8
 779              	_ZTV16Fl_Image_Surface:
 780 0000 00000000 		.quad	0
 780      00000000 
 781 0008 00000000 		.quad	_ZTI16Fl_Image_Surface
 781      00000000 
 782 0010 00000000 		.quad	_ZN16Fl_Image_Surface10class_nameEv
 782      00000000 
 783 0018 00000000 		.quad	_ZN16Fl_Image_SurfaceD1Ev
 783      00000000 
 784 0020 00000000 		.quad	_ZN16Fl_Image_SurfaceD0Ev
 784      00000000 
 785 0028 00000000 		.quad	_ZN16Fl_Image_Surface11set_currentEv
 785      00000000 
 786              		.globl	_ZN16Fl_Image_Surface8class_idE
 787              		.section	.rodata.str1.1,"aMS",@progbits,1
 788              	.LC14:
 789 0000 466C5F49 		.string	"Fl_Image_Surface"
 789      6D616765 
 789      5F537572 
 789      66616365 
 789      00
 790              		.section	.data._ZN16Fl_Image_Surface8class_idE,"aw",@progbits
 791              		.align 8
 794              	_ZN16Fl_Image_Surface8class_idE:
 795 0000 00000000 		.quad	.LC14
 795      00000000 
 796              		.text
 797              	.Letext0:
 798              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
 799              	.Letext_cold0:
 800              		.file 5 "fltk-1.3.4-1/FL/fl_types.h"
 801              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
 802              		.file 7 "/usr/include/x86_64-linux-gnu/bits/types.h"
 803              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 804              		.file 9 "/usr/include/X11/X.h"
 805              		.file 10 "/usr/include/X11/Xlib.h"
 806              		.file 11 "/usr/include/X11/Xutil.h"
 807              		.file 12 "fltk-1.3.4-1/FL/x.H"
 808              		.file 13 "/usr/include/libio.h"
 809              		.file 14 "fltk-1.3.4-1/FL/Fl_Paged_Device.H"
 810              		.file 15 "fltk-1.3.4-1/FL/Fl_Image.H"
 811              		.file 16 "fltk-1.3.4-1/FL/Fl_Shared_Image.H"
 812              		.file 17 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Image_Surface.cxx
     /tmp/ccczihUC.s:16     .text._ZN9Fl_Device10class_nameEv:0000000000000000 _ZN9Fl_Device10class_nameEv
     /tmp/ccczihUC.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD2Ev
     /tmp/ccczihUC.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD1Ev
     /tmp/ccczihUC.s:65     .text._ZN16Fl_Image_Surface10class_nameEv:0000000000000000 _ZN16Fl_Image_Surface10class_nameEv
     /tmp/ccczihUC.s:794    .data._ZN16Fl_Image_Surface8class_idE:0000000000000000 _ZN16Fl_Image_Surface8class_idE
     /tmp/ccczihUC.s:90     .text._ZN9Fl_DeviceD0Ev:0000000000000000 _ZN9Fl_DeviceD0Ev
     /tmp/ccczihUC.s:114    .text._ZN16Fl_Image_SurfaceD2Ev:0000000000000000 _ZN16Fl_Image_SurfaceD2Ev
     /tmp/ccczihUC.s:779    .rodata._ZTV16Fl_Image_Surface:0000000000000000 _ZTV16Fl_Image_Surface
     /tmp/ccczihUC.s:114    .text._ZN16Fl_Image_SurfaceD2Ev:0000000000000000 _ZN16Fl_Image_SurfaceD1Ev
     /tmp/ccczihUC.s:190    .text._ZN16Fl_Image_SurfaceD0Ev:0000000000000000 _ZN16Fl_Image_SurfaceD0Ev
     /tmp/ccczihUC.s:225    .text._ZN16Fl_Image_Surface11set_currentEv:0000000000000000 _ZN16Fl_Image_Surface11set_currentEv
     /tmp/ccczihUC.s:303    .text._ZN16Fl_Image_Surface8prepare_Eiii:0000000000000000 _ZN16Fl_Image_Surface8prepare_Eiii
     /tmp/ccczihUC.s:424    .text._ZN16Fl_Image_SurfaceC2Eiii:0000000000000000 _ZN16Fl_Image_SurfaceC2Eiii
     /tmp/ccczihUC.s:424    .text._ZN16Fl_Image_SurfaceC2Eiii:0000000000000000 _ZN16Fl_Image_SurfaceC1Eiii
     /tmp/ccczihUC.s:461    .text._ZN16Fl_Image_SurfaceC2Eii:0000000000000000 _ZN16Fl_Image_SurfaceC2Eii
     /tmp/ccczihUC.s:461    .text._ZN16Fl_Image_SurfaceC2Eii:0000000000000000 _ZN16Fl_Image_SurfaceC1Eii
     /tmp/ccczihUC.s:499    .text._ZN16Fl_Image_Surface5imageEv:0000000000000000 _ZN16Fl_Image_Surface5imageEv
     /tmp/ccczihUC.s:605    .text._ZN16Fl_Image_Surface13highres_imageEv:0000000000000000 _ZN16Fl_Image_Surface13highres_imageEv
     /tmp/ccczihUC.s:665    .text._ZN16Fl_Image_Surface4drawEP9Fl_Widgetii:0000000000000000 _ZN16Fl_Image_Surface4drawEP9Fl_Widgetii
     /tmp/ccczihUC.s:692    .text._ZN16Fl_Image_Surface21draw_decorated_windowEP9Fl_Windowii:0000000000000000 _ZN16Fl_Image_Surface21draw_decorated_windowEP9Fl_Windowii
     /tmp/ccczihUC.s:763    .rodata._ZTS16Fl_Image_Surface:0000000000000000 _ZTS16Fl_Image_Surface
     /tmp/ccczihUC.s:770    .rodata._ZTI16Fl_Image_Surface:0000000000000000 _ZTI16Fl_Image_Surface
                           .group:0000000000000000 _ZN9Fl_DeviceD5Ev
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
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
_ZN9Fl_Device8class_idE
_ZdlPv
fl_display
XFreePixmap
XFreeGC
fl_gc
fl_window
_ZN17Fl_Surface_Device8_surfaceE
_ZN17Fl_Surface_Device11set_currentEv
fl_graphics_driver
_ZN17Fl_Surface_Device15default_surfaceEv
fl_screen
fl_visual
XCreatePixmap
_Znwm
_ZN16Fl_Xlib_Surface_C1Ev
_Z15fl_open_displayv
XCreateGC
_Z13fl_read_imagePhiiiii
_ZN12Fl_RGB_ImageC1EPKhiiii
_ZN15Fl_Shared_Image3getEP12Fl_RGB_Imagei
_ZN15Fl_Shared_Image5scaleEiiii
_ZN15Fl_Paged_Device21draw_decorated_windowEP9Fl_WindowiiP17Fl_Surface_Device
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI17Fl_Surface_Device
