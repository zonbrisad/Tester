   1              		.file	"Fl_Copy_Surface.cxx"
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
  56              		.section	.text.unlikely._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN15Fl_Copy_Surface10c
  57              		.align 2
  58              	.LCOLDB2:
  59              		.section	.text._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN15Fl_Copy_Surface10class_name
  60              	.LHOTB2:
  61              		.align 2
  62              		.p2align 4,,15
  63              		.weak	_ZN15Fl_Copy_Surface10class_nameEv
  65              	_ZN15Fl_Copy_Surface10class_nameEv:
  66              	.LFB397:
  67              		.file 2 "fltk-1.3.4-1/FL/Fl_Copy_Surface.H"
   1:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
   2:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // "$Id: Fl_Copy_Surface.H 10928 2015-11-24 14:26:52Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
   4:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // Copy-to-clipboard code for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
   6:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // Copyright 1998-2014 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
   8:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
  12:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
  14:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
  16:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
  18:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
  19:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #ifndef Fl_Copy_Surface_H
  20:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #define Fl_Copy_Surface_H
  21:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
  22:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #include <FL/Fl_Paged_Device.H>
  23:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #include <FL/Fl_Printer.H>
  24:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #include <FL/x.H>
  25:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
  26:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /** Supports copying of graphical data to the clipboard.
  27:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  
  28:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  <br> After creation of an Fl_Copy_Surface object, call set_current() on it, and all subsequent gra
  29:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  will be recorded in the clipboard. It's possible to draw widgets (using Fl_Copy_Surface::draw()
  30:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  ) or to use any of the \ref fl_drawings or the \ref fl_attributes.
  31:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Finally, delete the Fl_Copy_Surface object to load the clipboard with the graphical data.
  32:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  <br> Fl_GL_Window 's can be copied to the clipboard as well. 
  33:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  <br> Usage example:
  34:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  \code
  35:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Fl_Widget *g = ...; // a widget you want to copy to the clipboard
  36:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Fl_Copy_Surface *copy_surf = new Fl_Copy_Surface(g->w(), g->h()); // create an Fl_Copy_Surface obj
  37:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  copy_surf->set_current(); // direct graphics requests to the clipboard
  38:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  fl_color(FL_WHITE); fl_rectf(0, 0, g->w(), g->h()); // draw a white background
  39:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  copy_surf->draw(g); // draw the g widget in the clipboard
  40:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  delete copy_surf; // after this, the clipboard is loaded
  41:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Fl_Display_Device::display_device()->set_current();  // direct graphics requests back to the displ
  42:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  \endcode
  43:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Platform details:
  44:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  \li MSWindows: Transparent RGB images copy without transparency.
  45:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  The graphical data are copied to the clipboard as an 'enhanced metafile'.
  46:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  \li Mac OS: The graphical data are copied to the clipboard (a.k.a. pasteboard) in two 'flavors':
  47:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  1) in vectorial form as PDF data; 2) in bitmap form as a TIFF image. 
  48:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Applications to which the clipboard content is pasted can use the flavor that suits them best.
  49:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  \li X11: the graphical data are copied to the clipboard as an image in BMP format.
  50:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** */
  51:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_Copy_Surface : public Fl_Surface_Device {
  52:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** private:
  53:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
  54:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
  55:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_Paged_Device *helper;
  56:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #ifdef __APPLE__
  57:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   CFMutableDataRef pdfdata;
  58:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   CGContextRef oldgc;
  59:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   CGContextRef gc;
  60:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void prepare_copy_pdf_and_tiff(int w, int h);
  61:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void complete_copy_pdf_and_tiff();
  62:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void init_PDF_context(int w, int h);
  63:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static size_t MyPutBytes(void* info, const void* buffer, size_t count);
  64:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif defined(WIN32)
  65:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   HDC oldgc;
  66:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   HDC gc;
  67:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #else // Xlib
  68:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_Offscreen xid;
  69:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Window oldwindow;
  70:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_Surface_Device *_ss;
  71:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #endif
  72:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
  73:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
  74:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   const char *class_name() {return class_id;};
  68              		.loc 2 74 0
  69              		.cfi_startproc
  70              	.LVL2:
  71              		.loc 2 74 0
  72 0000 488B0500 		movq	_ZN15Fl_Copy_Surface8class_idE(%rip), %rax
  72      000000
  73 0007 C3       		ret
  74              		.cfi_endproc
  75              	.LFE397:
  77              		.section	.text.unlikely._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN15Fl_Copy_Surface10c
  78              	.LCOLDE2:
  79              		.section	.text._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN15Fl_Copy_Surface10class_name
  80              	.LHOTE2:
  81              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_10class_nameEv,"axG",@progbits,_ZN16Fl_Xlib_Surface_1
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZN16Fl_Xlib_Surface_10class_nameEv,"axG",@progbits,_ZN16Fl_Xlib_Surface_10class_na
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  88              		.weak	_ZN16Fl_Xlib_Surface_10class_nameEv
  90              	_ZN16Fl_Xlib_Surface_10class_nameEv:
  91              	.LFB400:
  75:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_Copy_Surface(int w, int h);
  76:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   ~Fl_Copy_Surface();
  77:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void set_current();
  78:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void draw(Fl_Widget* widget, int delta_x = 0, int delta_y = 0);
  79:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void draw_decorated_window(Fl_Window* win, int delta_x = 0, int delta_y = 0);
  80:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   /** Returns the pixel width of the copy surface */
  81:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int w() { return width; }
  82:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   /** Returns the pixel height of the copy surface */
  83:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int h() { return height; }
  84:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
  85:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
  86:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #if defined(__APPLE__)
  87:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
  88:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Mac class to reimplement Fl_Paged_Device::printable_rect() */
  89:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_Quartz_Surface_ : public Fl_System_Printer {
  90:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** protected:
  91:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
  92:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
  93:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
  94:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
  95:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   const char *class_name() {return class_id;};
  96:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_Quartz_Surface_(int w, int h);
  97:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual int printable_rect(int *w, int *h);
  98:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_Quartz_Surface_() {};
  99:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 100:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 101:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif defined(WIN32)
 102:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Device {
 105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 108:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   POINT origins[10];
 109:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 110:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 111:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   const char *class_name() {return class_id;};
 112:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_GDI_Surface_();
 113:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void translate(int x, int y);
 114:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void untranslate();
 115:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_GDI_Surface_();
 116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 117:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 118:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif !defined(FL_DOXYGEN)
 119:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 120:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Xlib class to implement translate()/untranslate() */
 121:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_Xlib_Surface_ : public Fl_Paged_Device {
 122:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 123:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 124:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   const char *class_name() {return class_id;};
  92              		.loc 2 124 0
  93              		.cfi_startproc
  94              	.LVL3:
  95              		.loc 2 124 0
  96 0000 488B0500 		movq	_ZN16Fl_Xlib_Surface_8class_idE(%rip), %rax
  96      000000
  97 0007 C3       		ret
  98              		.cfi_endproc
  99              	.LFE400:
 101              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_10class_nameEv,"axG",@progbits,_ZN16Fl_Xlib_Surface_1
 102              	.LCOLDE3:
 103              		.section	.text._ZN16Fl_Xlib_Surface_10class_nameEv,"axG",@progbits,_ZN16Fl_Xlib_Surface_10class_na
 104              	.LHOTE3:
 105              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv,"axG",@progbits,_ZN
 106              		.align 2
 107              	.LCOLDB4:
 108              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv,"axG",@progbits,_ZN35Fl_tran
 109              	.LHOTB4:
 110              		.align 2
 111              		.p2align 4,,15
 112              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv
 114              	_ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv:
 115              	.LFB506:
 116              		.file 3 "fltk-1.3.4-1/src/Fl_Copy_Surface.cxx"
   1:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1              		.file	"Fl_Copy_Surface.cxx"
   2:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
   5:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
   8:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
  12:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
  14:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   14              		.weak	_ZN9Fl_Device10class_nameEv
  15:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   16              	_ZN9Fl_Device10class_nameEv:
  16:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   17              	.LFB240:
  17:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Device.H"
  18:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1:fltk-1.3.4-1/FL/Fl_Device.H **** //
  19:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
  20:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    3:fltk-1.3.4-1/FL/Fl_Device.H **** //
  21:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Su
  22:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
  23:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    6:fltk-1.3.4-1/FL/Fl_Device.H **** //
  24:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
  25:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8:fltk-1.3.4-1/FL/Fl_Device.H **** //
  26:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights
  27:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with th
  28:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  29:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  30:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  31:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  32:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  33:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  34:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  35:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  36:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  37:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  38:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver,
  39:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  40:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  41:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  42:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  43:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  44:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  45:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
  46:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
  47:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
  48:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  49:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  50:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  51:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  52:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  53:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  54:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  55:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all g
  56:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  57:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  58:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  59:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  60:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  61:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
  62:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
  63:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
  64:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
  65:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  66:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w
  67:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  68:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  69:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
  70:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
  71:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  72:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  73:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
  74:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
  75:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
  76:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
  77:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
  78:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
  79:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  80:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
  81:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   64:fltk-1.3.4-1/FL/Fl_Device.H **** 
  82:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  83:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
  84:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type in
  85:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  86:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
  87:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  88:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  89:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class 
  90:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
  92:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  93:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
  94:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
  95:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   78:fltk-1.3.4-1/FL/Fl_Device.H ****    
  96:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be c
  97:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
  98:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ..
  99:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 100:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 101:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 102:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   19              		.loc 1 84 0
 103:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   20              		.cfi_startproc
 104:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   21              	.LVL0:
 105:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   22              		.loc 1 84 0
 106:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   23 0000 488B0500 		movq	_ZN9Fl_Device8class_idE(%rip), %rax
 107:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   23      000000
 108:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   24 0007 C3       		ret
 109:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   25              		.cfi_endproc
 110:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   26              	.LFE240:
 111:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   28              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
 112:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   29              	.LCOLDE0:
 113:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   30              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
 114:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   31              	.LHOTE0:
 115:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   32              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
 116:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   33              		.align 2
 117:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   34              	.LCOLDB1:
 118:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   35              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 119:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   36              	.LHOTB1:
 120:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37              		.align 2
 121:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   38              		.p2align 4,,15
 122:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   39              		.weak	_ZN9Fl_DeviceD2Ev
 123:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   41              	_ZN9Fl_DeviceD2Ev:
 124:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   42              	.LFB242:
 125:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 126:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
 127:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   87:fltk-1.3.4-1/FL/Fl_Device.H ****    
 128:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the de
 129:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
 130:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 131:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
 132:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   43              		.loc 1 91 0
 133:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   44              		.cfi_startproc
 134:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   45              	.LVL1:
 135:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   46 0000 F3C3     		rep ret
 136:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   47              		.cfi_endproc
 137:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   48              	.LFE242:
 138:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   50              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
 139:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   51              	.LCOLDE1:
 140:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   52              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 141:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   53              	.LHOTE1:
 142:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   54              		.weak	_ZN9Fl_DeviceD1Ev
 143:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   55              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
 144:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   56              		.section	.text.unlikely._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN1
 145:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   57              		.align 2
 146:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   58              	.LCOLDB2:
 147:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   59              		.section	.text._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN15Fl_Copy_
 148:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   60              	.LHOTB2:
 149:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   61              		.align 2
 150:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   62              		.p2align 4,,15
 151:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   63              		.weak	_ZN15Fl_Copy_Surface10class_nameEv
 152:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   65              	_ZN15Fl_Copy_Surface10class_nameEv:
 153:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   66              	.LFB397:
 154:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   67              		.file 2 "fltk-1.3.4-1/FL/Fl_Copy_Surface.H"
 155:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
 156:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // "$Id: Fl_Copy_Surface.H 10928 2015-11-24 14:26:52Z m
 157:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    3:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
 158:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    4:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // Copy-to-clipboard code for the Fast Light Tool Kit (
 159:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    5:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
 160:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    6:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // Copyright 1998-2014 by Bill Spitzak and others.
 161:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
 162:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // This library is free software. Distribution and use 
 163:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    9:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // the file "COPYING" which should have been included w
 164:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   10:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // file is missing or damaged, see the license at:
 165:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   11:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
 166:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   12:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //     http://www.fltk.org/COPYING.php
 167:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
 168:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   14:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // Please report all bugs and problems on the following
 169:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   15:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
 170:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   16:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //     http://www.fltk.org/str.php
 171:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   17:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
 172:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   18:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 173:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   19:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #ifndef Fl_Copy_Surface_H
 174:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   20:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #define Fl_Copy_Surface_H
 175:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   21:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 176:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   22:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #include <FL/Fl_Paged_Device.H>
 177:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   23:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #include <FL/Fl_Printer.H>
 178:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   24:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #include <FL/x.H>
 179:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   25:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 180:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   26:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /** Supports copying of graphical data to the clipboard
 181:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   27:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  
 182:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   28:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  <br> After creation of an Fl_Copy_Surface object, call
 183:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   29:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  will be recorded in the clipboard. It's possible to dr
 184:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   30:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  ) or to use any of the \ref fl_drawings or the \ref fl
 185:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   31:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Finally, delete the Fl_Copy_Surface object to load the
 186:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   32:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  <br> Fl_GL_Window 's can be copied to the clipboard as
 187:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   33:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  <br> Usage example:
 188:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   34:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  \code
 189:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   35:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Fl_Widget *g = ...; // a widget you want to copy to th
 190:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   36:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Fl_Copy_Surface *copy_surf = new Fl_Copy_Surface(g->w(
 191:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  copy_surf->set_current(); // direct graphics requests 
 192:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   38:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  fl_color(FL_WHITE); fl_rectf(0, 0, g->w(), g->h()); //
 193:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   39:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  copy_surf->draw(g); // draw the g widget in the clipbo
 194:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   40:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  delete copy_surf; // after this, the clipboard is load
 195:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   41:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Fl_Display_Device::display_device()->set_current();  /
 196:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   42:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  \endcode
 197:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   43:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Platform details:
 198:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   44:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  \li MSWindows: Transparent RGB images copy without tra
 199:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   45:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  The graphical data are copied to the clipboard as an '
 200:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   46:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  \li Mac OS: The graphical data are copied to the clipb
 201:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   47:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  1) in vectorial form as PDF data; 2) in bitmap form as
 202:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   48:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  Applications to which the clipboard content is pasted 
 203:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   49:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****  \li X11: the graphical data are copied to the clipboar
 204:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   50:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** */
 205:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   51:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_Copy_Surface : public Fl_Surface_Dev
 206:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   52:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** private:
 207:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   53:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 208:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   54:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 209:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   55:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_Paged_Device *helper;
 210:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   56:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #ifdef __APPLE__
 211:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   57:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   CFMutableDataRef pdfdata;
 212:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   58:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   CGContextRef oldgc;
 213:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   59:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   CGContextRef gc;
 214:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   60:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void prepare_copy_pdf_and_tiff(int w, int h);
 215:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   61:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void complete_copy_pdf_and_tiff();
 216:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   62:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void init_PDF_context(int w, int h);
 217:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   63:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static size_t MyPutBytes(void* info, const void* buff
 218:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   64:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif defined(WIN32)
 219:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   65:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   HDC oldgc;
 220:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   66:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   HDC gc;
 221:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   67:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #else // Xlib
 222:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   68:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_Offscreen xid;
 223:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   69:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Window oldwindow;
 224:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   70:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_Surface_Device *_ss;
 225:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   71:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #endif
 226:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   72:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 227:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   73:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 228:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   74:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   const char *class_name() {return class_id;};
 229:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   68              		.loc 2 74 0
 230:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   69              		.cfi_startproc
 231:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   70              	.LVL2:
 232:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   71              		.loc 2 74 0
 233:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   72 0000 488B0500 		movq	_ZN15Fl_Copy_Surface8class_idE(%rip), %rax
 234:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   72      000000
 235:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   73 0007 C3       		ret
 236:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   74              		.cfi_endproc
 237:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   75              	.LFE397:
 238:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   77              		.section	.text.unlikely._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN1
 239:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   78              	.LCOLDE2:
 240:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   79              		.section	.text._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN15Fl_Copy_
 241:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   80              	.LHOTE2:
 242:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   81              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_10class_nameEv,"axG",@progbits,_ZN
 243:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   82              		.align 2
 244:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   83              	.LCOLDB3:
 245:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   84              		.section	.text._ZN16Fl_Xlib_Surface_10class_nameEv,"axG",@progbits,_ZN16Fl_Xlib
 246:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   85              	.LHOTB3:
 247:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   86              		.align 2
 248:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   87              		.p2align 4,,15
 249:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   88              		.weak	_ZN16Fl_Xlib_Surface_10class_nameEv
 250:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   90              	_ZN16Fl_Xlib_Surface_10class_nameEv:
 251:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   91              	.LFB400:
 252:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   75:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_Copy_Surface(int w, int h);
 253:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   76:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   ~Fl_Copy_Surface();
 254:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   77:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void set_current();
 255:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   78:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void draw(Fl_Widget* widget, int delta_x = 0, int del
 256:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   79:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   void draw_decorated_window(Fl_Window* win, int delta_
 257:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   80:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   /** Returns the pixel width of the copy surface */
 258:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   81:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int w() { return width; }
 259:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   82:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   /** Returns the pixel height of the copy surface */
 260:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   83:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int h() { return height; }
 261:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   84:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 262:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   85:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 263:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   86:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #if defined(__APPLE__)
 264:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   87:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 265:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   88:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Mac class to reimplement Fl_Paged_Device::printable_
 266:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   89:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_Quartz_Surface_ : public Fl_System_P
 267:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   90:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** protected:
 268:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   91:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 269:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   92:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 270:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   93:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 271:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   94:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 272:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   95:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   const char *class_name() {return class_id;};
 117              		.loc 3 272 0
 118              		.cfi_startproc
 119              	.LVL4:
 120              		.loc 3 272 0
 121 0000 488B0500 		movq	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE(%rip), %rax
 121      000000
 122 0007 C3       		ret
 123              		.cfi_endproc
 124              	.LFE506:
 126              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv,"axG",@progbits,_ZN
 127              	.LCOLDE4:
 128              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv,"axG",@progbits,_ZN35Fl_tran
 129              	.LHOTE4:
 130              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_D2Ev,"ax",@progbits
 131              		.align 2
 132              	.LCOLDB5:
 133              		.section	.text._ZN16Fl_Xlib_Surface_D2Ev,"ax",@progbits
 134              	.LHOTB5:
 135              		.align 2
 136              		.p2align 4,,15
 137              		.globl	_ZN16Fl_Xlib_Surface_D2Ev
 139              	_ZN16Fl_Xlib_Surface_D2Ev:
 140              	.LFB560:
 273:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   96:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_Quartz_Surface_(int w, int h);
 274:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   97:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual int printable_rect(int *w, int *h);
 275:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   98:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_Quartz_Surface_() {};
 276:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   99:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 277:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  100:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 278:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  101:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif defined(WIN32)
 279:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  102:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 280:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 281:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Devic
 282:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 283:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 284:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 285:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  108:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   POINT origins[10];
 286:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 287:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 288:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  111:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   const char *class_name() {return class_id;};
 289:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  112:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   Fl_GDI_Surface_();
 290:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  113:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void translate(int x, int y);
 291:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void untranslate();
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  115:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_GDI_Surface_();
 293:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 294:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  117:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 295:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  118:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif !defined(FL_DOXYGEN)
 296:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  119:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 297:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  120:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Xlib class to implement translate()/untranslate() */
 298:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  121:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_Xlib_Surface_ : public Fl_Paged_Devi
 299:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  122:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 300:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  123:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 301:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  124:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   const char *class_name() {return class_id;};
 302:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   92              		.loc 2 124 0
 303:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   93              		.cfi_startproc
 304:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   94              	.LVL3:
 305:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   95              		.loc 2 124 0
 306:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   96 0000 488B0500 		movq	_ZN16Fl_Xlib_Surface_8class_idE(%rip), %rax
 307:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   96      000000
 308:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   97 0007 C3       		ret
 309:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   98              		.cfi_endproc
 310:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   99              	.LFE400:
 311:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  101              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_10class_nameEv,"axG",@progbits,_ZN
 312:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  102              	.LCOLDE3:
 313:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103              		.section	.text._ZN16Fl_Xlib_Surface_10class_nameEv,"axG",@progbits,_ZN16Fl_Xlib
 314:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104              	.LHOTE3:
 315:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv,
 316:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106              		.align 2
 317:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107              	.LCOLDB4:
 318:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  108              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv,"axG",@pr
 319:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109              	.LHOTB4:
 320:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110              		.align 2
 321:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  111              		.p2align 4,,15
 322:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  112              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv
 323:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114              	_ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv:
 324:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  115              	.LFB506:
 325:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116              		.file 3 "fltk-1.3.4-1/src/Fl_Copy_Surface.cxx"
 326:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1              		.file	"Fl_Copy_Surface.cxx"
 327:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2              		.text
 328:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    3:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    3              	.Ltext0:
 329:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    4:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    4              		.section	.text.unlikely._ZN9Fl_D
 330:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    5:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    5              		.align 2
 331:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    6:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    6              	.LCOLDB0:
 332:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7              		.section	.text._ZN9Fl_Device10cl
 333:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8              	.LHOTB0:
 334:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    9:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    9              		.align 2
 335:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   10:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   10              		.p2align 4,,15
 336:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   11:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   11              		.section	.text.unlikely._ZN9Fl_D
 337:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   12:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   12              	.Ltext_cold0:
 338:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13              		.section	.text._ZN9Fl_Device10cl
 339:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   14:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   14              		.weak	_ZN9Fl_Device10class_nameE
 340:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   15:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   16              	_ZN9Fl_Device10class_nameEv:
 341:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   16:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   17              	.LFB240:
 342:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   17:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Devi
 343:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   18:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1:fltk-1.3.4-1/FL/Fl_Device.H **** //
 344:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   19:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_De
 345:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   20:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    3:fltk-1.3.4-1/FL/Fl_Device.H **** //
 346:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   21:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition 
 347:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   22:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fas
 348:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   23:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    6:fltk-1.3.4-1/FL/Fl_Device.H **** //
 349:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   24:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2
 350:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   25:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8:fltk-1.3.4-1/FL/Fl_Device.H **** //
 351:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   26:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This librar
 352:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   27:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "C
 353:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   28:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is mis
 354:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   29:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   12:fltk-1.3.4-1/FL/Fl_Device.H **** //
 355:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   30:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://
 356:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   31:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   14:fltk-1.3.4-1/FL/Fl_Device.H **** //
 357:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   32:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please repo
 358:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   33:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   16:fltk-1.3.4-1/FL/Fl_Device.H **** //
 359:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   34:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://
 360:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   35:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   18:fltk-1.3.4-1/FL/Fl_Device.H **** //
 361:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   36:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   19:fltk-1.3.4-1/FL/Fl_Device.H **** 
 362:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_D
 363:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   38:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declar
 364:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   39:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_De
 365:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   40:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   23:fltk-1.3.4-1/FL/Fl_Device.H **** */
 366:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   41:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   24:fltk-1.3.4-1/FL/Fl_Device.H **** 
 367:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   42:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Dev
 368:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   43:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Dev
 369:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   44:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   27:fltk-1.3.4-1/FL/Fl_Device.H **** 
 370:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   45:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x
 371:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   46:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 372:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   47:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 373:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   48:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 374:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   49:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 375:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   50:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 376:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   51:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdl
 377:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   52:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
 378:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   53:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graph
 379:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   54:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_
 380:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   55:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Poi
 381:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   56:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT exte
 382:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   57:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
 383:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   58:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 384:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   59:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of 
 385:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   60:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  d
 386:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   61:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x
 387:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   62:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] b
 388:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   63:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from s
 389:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   64:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffe
 390:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   65:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 391:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   66:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (
 392:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   67:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   50:fltk-1.3.4-1/FL/Fl_Device.H **** 
 393:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   68:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef wha
 141              		.loc 3 393 0
 142              		.cfi_startproc
 143              	.LVL5:
 144              	.LBB168:
 145              		.loc 3 393 0
 146 0000 48C70700 		movq	$_ZTV16Fl_Xlib_Surface_+16, (%rdi)
 146      000000
 147 0007 488B7F08 		movq	8(%rdi), %rdi
 148              	.LVL6:
 394:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   69:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 149              		.loc 3 394 0
 150 000b 4885FF   		testq	%rdi, %rdi
 151 000e 7410     		je	.L6
 152              		.loc 3 394 0 is_stmt 0 discriminator 1
 153 0010 488B07   		movq	(%rdi), %rax
 154 0013 FF6010   		jmp	*16(%rax)
 155              	.LVL7:
 156 0016 662E0F1F 		.p2align 4,,10
 156      84000000 
 156      0000
 157              		.p2align 3
 158              	.L6:
 159 0020 F3C3     		rep ret
 160              	.LBE168:
 161              		.cfi_endproc
 162              	.LFE560:
 164              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_D2Ev
 165              	.LCOLDE5:
 166              		.section	.text._ZN16Fl_Xlib_Surface_D2Ev
 167              	.LHOTE5:
 168              		.globl	_ZN16Fl_Xlib_Surface_D1Ev
 169              		.set	_ZN16Fl_Xlib_Surface_D1Ev,_ZN16Fl_Xlib_Surface_D2Ev
 170              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 171              		.align 2
 172              	.LCOLDB6:
 173              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 174              	.LHOTB6:
 175              		.align 2
 176              		.p2align 4,,15
 177              		.weak	_ZN9Fl_DeviceD0Ev
 179              	_ZN9Fl_DeviceD0Ev:
 180              	.LFB244:
 181              		.loc 1 91 0 is_stmt 1
 182              		.cfi_startproc
 183              	.LVL8:
 184              		.loc 1 91 0
 185 0000 E9000000 		jmp	_ZdlPv
 185      00
 186              	.LVL9:
 187              		.cfi_endproc
 188              	.LFE244:
 190              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 191              	.LCOLDE6:
 192              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 193              	.LHOTE6:
 194              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_D0Ev,"ax",@progbits
 195              		.align 2
 196              	.LCOLDB7:
 197              		.section	.text._ZN16Fl_Xlib_Surface_D0Ev,"ax",@progbits
 198              	.LHOTB7:
 199              		.align 2
 200              		.p2align 4,,15
 201              		.globl	_ZN16Fl_Xlib_Surface_D0Ev
 203              	_ZN16Fl_Xlib_Surface_D0Ev:
 204              	.LFB562:
 393:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   69:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 205              		.loc 3 393 0
 206              		.cfi_startproc
 207              	.LVL10:
 208 0000 53       		pushq	%rbx
 209              		.cfi_def_cfa_offset 16
 210              		.cfi_offset 3, -16
 393:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   69:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 211              		.loc 3 393 0
 212 0001 4889FB   		movq	%rdi, %rbx
 213              	.LBB169:
 214              	.LBB170:
 215 0004 48C70700 		movq	$_ZTV16Fl_Xlib_Surface_+16, (%rdi)
 215      000000
 216 000b 488B7F08 		movq	8(%rdi), %rdi
 217              	.LVL11:
 218              		.loc 3 394 0
 219 000f 4885FF   		testq	%rdi, %rdi
 220 0012 7406     		je	.L11
 221 0014 488B07   		movq	(%rdi), %rax
 222 0017 FF5010   		call	*16(%rax)
 223              	.LVL12:
 224              	.L11:
 225              	.LBE170:
 226              	.LBE169:
 395:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   70:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int CO
 227              		.loc 3 395 0
 228 001a 4889DF   		movq	%rbx, %rdi
 229 001d 5B       		popq	%rbx
 230              		.cfi_def_cfa_offset 8
 231              	.LVL13:
 232 001e E9000000 		jmp	_ZdlPv
 232      00
 233              	.LVL14:
 234              		.cfi_endproc
 235              	.LFE562:
 237              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_D0Ev
 238              	.LCOLDE7:
 239              		.section	.text._ZN16Fl_Xlib_Surface_D0Ev
 240              	.LHOTE7:
 241              		.section	.text.unlikely._ZN15Fl_Copy_Surface11set_currentEv,"ax",@progbits
 242              		.align 2
 243              	.LCOLDB8:
 244              		.section	.text._ZN15Fl_Copy_Surface11set_currentEv,"ax",@progbits
 245              	.LHOTB8:
 246              		.align 2
 247              		.p2align 4,,15
 248              		.globl	_ZN15Fl_Copy_Surface11set_currentEv
 250              	_ZN15Fl_Copy_Surface11set_currentEv:
 251              	.LFB504:
 163:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   10:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // file is missing or damaged, see the license at:
 252              		.loc 3 163 0
 253              		.cfi_startproc
 254              	.LVL15:
 255 0000 4883EC18 		subq	$24, %rsp
 256              		.cfi_def_cfa_offset 32
 169:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   16:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //     http://www.fltk.org/str.php
 257              		.loc 3 169 0
 258 0004 488B4720 		movq	32(%rdi), %rax
 259 0008 48890500 		movq	%rax, fl_window(%rip)
 259      000000
 260              	.LBB171:
 261              	.LBB172:
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
 262              		.loc 1 575 0
 263 000f 488B0500 		movq	_ZN17Fl_Surface_Device8_surfaceE(%rip), %rax
 263      000000
 264 0016 4885C0   		testq	%rax, %rax
 265 0019 7425     		je	.L19
 266              	.LVL16:
 267              	.L17:
 268              	.LBE172:
 269              	.LBE171:
 170:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   17:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
 270              		.loc 3 170 0
 271 001b 48894730 		movq	%rax, 48(%rdi)
 171:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   18:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 272              		.loc 3 171 0
 273 001f E8000000 		call	_ZN17Fl_Surface_Device11set_currentEv
 273      00
 274              	.LVL17:
 275              	.LBB174:
 276              	.LBB175:
 277              		.file 4 "fltk-1.3.4-1/FL/fl_draw.H"
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
 278              		.loc 4 95 0
 279 0024 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 279      000000
 280 002b 488B07   		movq	(%rdi), %rax
 281 002e 488B8068 		movq	360(%rax), %rax
 281      010000
 282              	.LBE175:
 283              	.LBE174:
 174:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   21:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 284              		.loc 3 174 0
 285 0035 4883C418 		addq	$24, %rsp
 286              		.cfi_remember_state
 287              		.cfi_def_cfa_offset 8
 288              	.LBB177:
 289              	.LBB176:
 290              		.loc 4 95 0
 291 0039 FFE0     		jmp	*%rax
 292              	.LVL18:
 293 003b 0F1F4400 		.p2align 4,,10
 293      00
 294              		.p2align 3
 295              	.L19:
 296              		.cfi_restore_state
 297 0040 48897C24 		movq	%rdi, 8(%rsp)
 297      08
 298              	.LBE176:
 299              	.LBE177:
 300              	.LBB178:
 301              	.LBB173:
 302              		.loc 1 575 0
 303 0045 E8000000 		call	_ZN17Fl_Surface_Device15default_surfaceEv
 303      00
 304              	.LVL19:
 305 004a 488B7C24 		movq	8(%rsp), %rdi
 305      08
 306 004f EBCA     		jmp	.L17
 307              	.LBE173:
 308              	.LBE178:
 309              		.cfi_endproc
 310              	.LFE504:
 312              		.section	.text.unlikely._ZN15Fl_Copy_Surface11set_currentEv
 313              	.LCOLDE8:
 314              		.section	.text._ZN15Fl_Copy_Surface11set_currentEv
 315              	.LHOTE8:
 316              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_5rectfEiiii,"axG",@progbits,_ZN35F
 317              		.align 2
 318              	.LCOLDB9:
 319              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_5rectfEiiii,"axG",@progbits,_ZN35Fl_transla
 320              	.LHOTB9:
 321              		.align 2
 322              		.p2align 4,,15
 323              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_5rectfEiiii
 325              	_ZN35Fl_translated_Xlib_Graphics_Driver_5rectfEiiii:
 326              	.LFB524:
 295:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  119:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 327              		.loc 3 295 0
 328              		.cfi_startproc
 329              	.LVL20:
 295:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  119:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** 
 330              		.loc 3 295 0
 331 0000 0397D406 		addl	1748(%rdi), %edx
 331      0000
 332              	.LVL21:
 333 0006 03B7D006 		addl	1744(%rdi), %esi
 333      0000
 334              	.LVL22:
 335 000c E9000000 		jmp	_ZN18Fl_Graphics_Driver5rectfEiiii
 335      00
 336              	.LVL23:
 337              		.cfi_endproc
 338              	.LFE524:
 340              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_5rectfEiiii,"axG",@progbits,_ZN35F
 341              	.LCOLDE9:
 342              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_5rectfEiiii,"axG",@progbits,_ZN35Fl_transla
 343              	.LHOTE9:
 344              		.section	.text.unlikely._ZN15Fl_Copy_SurfaceD2Ev,"ax",@progbits
 345              		.align 2
 346              	.LCOLDB10:
 347              		.section	.text._ZN15Fl_Copy_SurfaceD2Ev,"ax",@progbits
 348              	.LHOTB10:
 349              		.align 2
 350              		.p2align 4,,15
 351              		.globl	_ZN15Fl_Copy_SurfaceD2Ev
 353              	_ZN15Fl_Copy_SurfaceD2Ev:
 354              	.LFB500:
 119:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37              		.align 2
 355              		.loc 3 119 0
 356              		.cfi_startproc
 357              	.LVL24:
 358 0000 55       		pushq	%rbp
 359              		.cfi_def_cfa_offset 16
 360              		.cfi_offset 6, -16
 361 0001 53       		pushq	%rbx
 362              		.cfi_def_cfa_offset 24
 363              		.cfi_offset 3, -24
 364 0002 4889FB   		movq	%rdi, %rbx
 365 0005 4883EC08 		subq	$8, %rsp
 366              		.cfi_def_cfa_offset 32
 367              	.LBB179:
 119:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37              		.align 2
 368              		.loc 3 119 0
 369 0009 48C70700 		movq	$_ZTV15Fl_Copy_Surface+16, (%rdi)
 369      000000
 370              	.LBB180:
 371              	.LBB181:
 372              	.LBB182:
  96:fltk-1.3.4-1/FL/fl_draw.H **** /**
  97:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the previous clip region.
  98:fltk-1.3.4-1/FL/fl_draw.H ****  
  99:fltk-1.3.4-1/FL/fl_draw.H ****  You must call fl_pop_clip() once for every time you call fl_push_clip().
 100:fltk-1.3.4-1/FL/fl_draw.H ****  Unpredictable results may occur if the clip stack is not empty when
 101:fltk-1.3.4-1/FL/fl_draw.H ****  you return to FLTK.
 102:fltk-1.3.4-1/FL/fl_draw.H ****  */
 103:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_clip() {fl_graphics_driver->pop_clip(); }
 373              		.loc 4 103 0
 374 0010 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 374      000000
 375              	.LVL25:
 376 0017 488B07   		movq	(%rdi), %rax
 377 001a FF907001 		call	*368(%rax)
 377      0000
 378              	.LVL26:
 379              	.LBE182:
 380              	.LBE181:
 141:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   54              		.weak	_ZN9Fl_DeviceD1Ev
 381              		.loc 3 141 0
 382 0020 8B4B10   		movl	16(%rbx), %ecx
 383 0023 448B4314 		movl	20(%rbx), %r8d
 384 0027 4531C9   		xorl	%r9d, %r9d
 385 002a 31D2     		xorl	%edx, %edx
 386 002c 31F6     		xorl	%esi, %esi
 387 002e 31FF     		xorl	%edi, %edi
 388 0030 E8000000 		call	_Z13fl_read_imagePhiiiii
 388      00
 389              	.LVL27:
 143:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   56              		.section	.text.unlikely._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN1
 390              		.loc 3 143 0
 391 0035 488B7B30 		movq	48(%rbx), %rdi
 141:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   54              		.weak	_ZN9Fl_DeviceD1Ev
 392              		.loc 3 141 0
 393 0039 4889C5   		movq	%rax, %rbp
 394              	.LVL28:
 142:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   55              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
 395              		.loc 3 142 0
 396 003c 488B4328 		movq	40(%rbx), %rax
 397              	.LVL29:
 398 0040 48890500 		movq	%rax, fl_window(%rip)
 398      000000
 143:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   56              		.section	.text.unlikely._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN1
 399              		.loc 3 143 0
 400 0047 488B07   		movq	(%rdi), %rax
 401 004a FF5018   		call	*24(%rax)
 402              	.LVL30:
 144:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   57              		.align 2
 403              		.loc 3 144 0
 404 004d 8B5314   		movl	20(%rbx), %edx
 405 0050 8B7310   		movl	16(%rbx), %esi
 406 0053 B9010000 		movl	$1, %ecx
 406      00
 407 0058 4889EF   		movq	%rbp, %rdi
 408 005b E8000000 		call	_ZN2Fl10copy_imageEPKhiii
 408      00
 409              	.LVL31:
 145:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   58              	.LCOLDB2:
 410              		.loc 3 145 0
 411 0060 4885ED   		testq	%rbp, %rbp
 412 0063 7408     		je	.L22
 145:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   58              	.LCOLDB2:
 413              		.loc 3 145 0 is_stmt 0 discriminator 1
 414 0065 4889EF   		movq	%rbp, %rdi
 415 0068 E8000000 		call	_ZdaPv
 415      00
 416              	.LVL32:
 417              	.L22:
 146:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   59              		.section	.text._ZN15Fl_Copy_Surface10class_nameEv,"axG",@progbits,_ZN15Fl_Copy_
 418              		.loc 3 146 0 is_stmt 1
 419 006d 488B3D00 		movq	fl_display(%rip), %rdi
 419      000000
 420 0074 488B7320 		movq	32(%rbx), %rsi
 421 0078 E8000000 		call	XFreePixmap
 421      00
 422              	.LVL33:
 147:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   60              	.LHOTB2:
 423              		.loc 3 147 0
 424 007d 488B7B18 		movq	24(%rbx), %rdi
 425 0081 4885FF   		testq	%rdi, %rdi
 426 0084 7412     		je	.L21
 147:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   60              	.LHOTB2:
 427              		.loc 3 147 0 is_stmt 0 discriminator 1
 428 0086 488B07   		movq	(%rdi), %rax
 429 0089 488B4010 		movq	16(%rax), %rax
 430              	.LBE180:
 431              	.LBE179:
 149:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   62              		.p2align 4,,15
 432              		.loc 3 149 0 is_stmt 1 discriminator 1
 433 008d 4883C408 		addq	$8, %rsp
 434              		.cfi_remember_state
 435              		.cfi_def_cfa_offset 24
 436 0091 5B       		popq	%rbx
 437              		.cfi_def_cfa_offset 16
 438              	.LVL34:
 439 0092 5D       		popq	%rbp
 440              		.cfi_def_cfa_offset 8
 441              	.LVL35:
 442              	.LBB184:
 443              	.LBB183:
 147:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   60              	.LHOTB2:
 444              		.loc 3 147 0 discriminator 1
 445 0093 FFE0     		jmp	*%rax
 446              	.LVL36:
 447              		.p2align 4,,10
 448 0095 0F1F00   		.p2align 3
 449              	.L21:
 450              		.cfi_restore_state
 451              	.LBE183:
 452              	.LBE184:
 149:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   62              		.p2align 4,,15
 453              		.loc 3 149 0
 454 0098 4883C408 		addq	$8, %rsp
 455              		.cfi_def_cfa_offset 24
 456 009c 5B       		popq	%rbx
 457              		.cfi_def_cfa_offset 16
 458              	.LVL37:
 459 009d 5D       		popq	%rbp
 460              		.cfi_def_cfa_offset 8
 461              	.LVL38:
 462 009e C3       		ret
 463              		.cfi_endproc
 464              	.LFE500:
 466              		.section	.text.unlikely._ZN15Fl_Copy_SurfaceD2Ev
 467              	.LCOLDE10:
 468              		.section	.text._ZN15Fl_Copy_SurfaceD2Ev
 469              	.LHOTE10:
 470              		.globl	_ZN15Fl_Copy_SurfaceD1Ev
 471              		.set	_ZN15Fl_Copy_SurfaceD1Ev,_ZN15Fl_Copy_SurfaceD2Ev
 472              		.section	.text.unlikely._ZN15Fl_Copy_SurfaceD0Ev,"ax",@progbits
 473              		.align 2
 474              	.LCOLDB11:
 475              		.section	.text._ZN15Fl_Copy_SurfaceD0Ev,"ax",@progbits
 476              	.LHOTB11:
 477              		.align 2
 478              		.p2align 4,,15
 479              		.globl	_ZN15Fl_Copy_SurfaceD0Ev
 481              	_ZN15Fl_Copy_SurfaceD0Ev:
 482              	.LFB502:
 119:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37              		.align 2
 483              		.loc 3 119 0
 484              		.cfi_startproc
 485              	.LVL39:
 486 0000 53       		pushq	%rbx
 487              		.cfi_def_cfa_offset 16
 488              		.cfi_offset 3, -16
 119:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37              		.align 2
 489              		.loc 3 119 0
 490 0001 4889FB   		movq	%rdi, %rbx
 149:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   62              		.p2align 4,,15
 491              		.loc 3 149 0
 492 0004 E8000000 		call	_ZN15Fl_Copy_SurfaceD1Ev
 492      00
 493              	.LVL40:
 494 0009 4889DF   		movq	%rbx, %rdi
 495 000c 5B       		popq	%rbx
 496              		.cfi_def_cfa_offset 8
 497              	.LVL41:
 498 000d E9000000 		jmp	_ZdlPv
 498      00
 499              	.LVL42:
 500              		.cfi_endproc
 501              	.LFE502:
 503              		.section	.text.unlikely._ZN15Fl_Copy_SurfaceD0Ev
 504              	.LCOLDE11:
 505              		.section	.text._ZN15Fl_Copy_SurfaceD0Ev
 506              	.LHOTE11:
 507              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_11untranslateEv,"ax",@progbits
 508              		.align 2
 509              	.LCOLDB12:
 510              		.section	.text._ZN16Fl_Xlib_Surface_11untranslateEv,"ax",@progbits
 511              	.LHOTB12:
 512              		.align 2
 513              		.p2align 4,,15
 514              		.globl	_ZN16Fl_Xlib_Surface_11untranslateEv
 516              	_ZN16Fl_Xlib_Surface_11untranslateEv:
 517              	.LFB555:
 386:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   62:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] b
 518              		.loc 3 386 0
 519              		.cfi_startproc
 520              	.LVL43:
 521 0000 488B7F08 		movq	8(%rdi), %rdi
 522              	.LVL44:
 523              	.LBB185:
 524              	.LBB186:
 289:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  113:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void translate(int x, int y);
 525              		.loc 3 289 0
 526 0004 8B87D806 		movl	1752(%rdi), %eax
 526      0000
 527 000a 85C0     		testl	%eax, %eax
 528 000c 7409     		je	.L31
 529 000e 83E801   		subl	$1, %eax
 530 0011 8987D806 		movl	%eax, 1752(%rdi)
 530      0000
 531              	.L31:
 532 0017 488D0487 		leaq	(%rdi,%rax,4), %rax
 290:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void untranslate();
 533              		.loc 3 290 0
 534 001b 8B90DC06 		movl	1756(%rax), %edx
 534      0000
 535 0021 8997D006 		movl	%edx, 1744(%rdi)
 535      0000
 291:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  115:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_GDI_Surface_();
 536              		.loc 3 291 0
 537 0027 8B802C07 		movl	1836(%rax), %eax
 537      0000
 538 002d 8987D406 		movl	%eax, 1748(%rdi)
 538      0000
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 539              		.loc 3 292 0
 540 0033 E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 540      00
 541              	.LVL45:
 542              	.LBE186:
 543              	.LBE185:
 544              		.cfi_endproc
 545              	.LFE555:
 547              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_11untranslateEv
 548              	.LCOLDE12:
 549              		.section	.text._ZN16Fl_Xlib_Surface_11untranslateEv
 550              	.LHOTE12:
 551              		.section	.rodata.str1.1,"aMS",@progbits,1
 552              	.LC15:
 553 0000 25733A20 		.string	"%s: translate stack overflow!"
 553      7472616E 
 553      736C6174 
 553      65207374 
 553      61636B20 
 554              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPFvPviiiPhES0_ii
 555              		.align 2
 556              	.LCOLDB16:
 557              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPFvPviiiPhES0_iiiii,"axG"
 558              	.LHOTB16:
 559              		.align 2
 560              		.p2align 4,,15
 561              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPFvPviiiPhES0_iiiii
 563              	_ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPFvPviiiPhES0_iiiii:
 564              	.LFB542:
 349:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   25:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8:fltk-1.3.4-1/FL/Fl_Device.H **** //
 565              		.loc 3 349 0
 566              		.cfi_startproc
 567              	.LVL46:
 568 0000 4157     		pushq	%r15
 569              		.cfi_def_cfa_offset 16
 570              		.cfi_offset 15, -16
 571 0002 4156     		pushq	%r14
 572              		.cfi_def_cfa_offset 24
 573              		.cfi_offset 14, -24
 574 0004 4155     		pushq	%r13
 575              		.cfi_def_cfa_offset 32
 576              		.cfi_offset 13, -32
 577 0006 4154     		pushq	%r12
 578              		.cfi_def_cfa_offset 40
 579              		.cfi_offset 12, -40
 580 0008 4989D5   		movq	%rdx, %r13
 581 000b 55       		pushq	%rbp
 582              		.cfi_def_cfa_offset 48
 583              		.cfi_offset 6, -48
 584 000c 53       		pushq	%rbx
 585              		.cfi_def_cfa_offset 56
 586              		.cfi_offset 3, -56
 587 000d 4889FB   		movq	%rdi, %rbx
 588 0010 4883EC28 		subq	$40, %rsp
 589              		.cfi_def_cfa_offset 96
 350:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   26:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This librar
 590              		.loc 3 350 0
 591 0014 8BAFD006 		movl	1744(%rdi), %ebp
 591      0000
 592 001a 448BA7D4 		movl	1748(%rdi), %r12d
 592      060000
 349:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   25:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8:fltk-1.3.4-1/FL/Fl_Device.H **** //
 593              		.loc 3 349 0
 594 0021 44894C24 		movl	%r9d, 28(%rsp)
 594      1C
 595 0026 48897424 		movq	%rsi, 16(%rsp)
 595      10
 596 002b 448B7424 		movl	96(%rsp), %r14d
 596      60
 597 0030 448B7C24 		movl	104(%rsp), %r15d
 597      68
 350:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   26:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This librar
 598              		.loc 3 350 0
 599 0035 8D440D00 		leal	0(%rbp,%rcx), %eax
 600 0039 8B8FD806 		movl	1752(%rdi), %ecx
 600      0000
 601              	.LVL47:
 602 003f 4501E0   		addl	%r12d, %r8d
 603              	.LVL48:
 604 0042 44894424 		movl	%r8d, 24(%rsp)
 604      18
 605 0047 8944240C 		movl	%eax, 12(%rsp)
 606              	.LVL49:
 607 004b 488D0C8F 		leaq	(%rdi,%rcx,4), %rcx
 608              	.LBB193:
 609              	.LBB194:
 279:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 610              		.loc 3 279 0
 611 004f 89A9DC06 		movl	%ebp, 1756(%rcx)
 611      0000
 280:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Devic
 612              		.loc 3 280 0
 613 0055 4489A12C 		movl	%r12d, 1836(%rcx)
 613      070000
 281:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 614              		.loc 3 281 0
 615 005c C787D006 		movl	$0, 1744(%rdi)
 615      00000000 
 615      0000
 282:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 616              		.loc 3 282 0
 617 0066 C787D406 		movl	$0, 1748(%rdi)
 617      00000000 
 617      0000
 283:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 618              		.loc 3 283 0
 619 0070 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 619      00
 620              	.LVL50:
 621              	.LBB195:
 622              	.LBB196:
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 623              		.loc 1 331 0
 624 0075 660FEFED 		pxor	%xmm5, %xmm5
 625 0079 4489E2   		movl	%r12d, %edx
 626 007c 660FEFE4 		pxor	%xmm4, %xmm4
 627 0080 89E8     		movl	%ebp, %eax
 628 0082 F7D8     		negl	%eax
 629              	.LVL51:
 630 0084 F7DA     		negl	%edx
 631              	.LVL52:
 632 0086 4889DF   		movq	%rbx, %rdi
 633 0089 F20F2AEA 		cvtsi2sd	%edx, %xmm5
 634 008d F20F2AE0 		cvtsi2sd	%eax, %xmm4
 635 0091 660FEFD2 		pxor	%xmm2, %xmm2
 636 0095 F20F101D 		movsd	.LC13(%rip), %xmm3
 636      00000000 
 637 009d 660F28CA 		movapd	%xmm2, %xmm1
 638 00a1 660F28C3 		movapd	%xmm3, %xmm0
 639 00a5 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 639      00
 640              	.LVL53:
 641              	.LBE196:
 642              	.LBE195:
 285:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 643              		.loc 3 285 0
 644 00aa 8B83D806 		movl	1752(%rbx), %eax
 644      0000
 645 00b0 448B4424 		movl	24(%rsp), %r8d
 645      18
 646 00b5 448B4C24 		movl	28(%rsp), %r9d
 646      1C
 647 00ba 83F813   		cmpl	$19, %eax
 648 00bd 7771     		ja	.L36
 649 00bf 83C001   		addl	$1, %eax
 650 00c2 8983D806 		movl	%eax, 1752(%rbx)
 650      0000
 651              	.LVL54:
 652              	.L37:
 653              	.LBE194:
 654              	.LBE193:
 352:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   28:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is mis
 655              		.loc 3 352 0
 656 00c8 4157     		pushq	%r15
 657              		.cfi_def_cfa_offset 104
 658 00ca 4156     		pushq	%r14
 659              		.cfi_def_cfa_offset 112
 660 00cc 4C89EA   		movq	%r13, %rdx
 661 00cf 8B4C241C 		movl	28(%rsp), %ecx
 662 00d3 488B7424 		movq	32(%rsp), %rsi
 662      20
 663 00d8 4889DF   		movq	%rbx, %rdi
 664 00db E8000000 		call	_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 664      00
 665              	.LVL55:
 666              	.LBB198:
 667              	.LBB199:
 289:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  113:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void translate(int x, int y);
 668              		.loc 3 289 0
 669 00e0 8B83D806 		movl	1752(%rbx), %eax
 669      0000
 670 00e6 5A       		popq	%rdx
 671              		.cfi_def_cfa_offset 104
 672 00e7 59       		popq	%rcx
 673              		.cfi_def_cfa_offset 96
 674 00e8 85C0     		testl	%eax, %eax
 675 00ea 7409     		je	.L38
 676 00ec 83E801   		subl	$1, %eax
 677 00ef 8983D806 		movl	%eax, 1752(%rbx)
 677      0000
 678              	.L38:
 679 00f5 488D0483 		leaq	(%rbx,%rax,4), %rax
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 680              		.loc 3 292 0
 681 00f9 4889DF   		movq	%rbx, %rdi
 290:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void untranslate();
 682              		.loc 3 290 0
 683 00fc 8B90DC06 		movl	1756(%rax), %edx
 683      0000
 684 0102 8993D006 		movl	%edx, 1744(%rbx)
 684      0000
 291:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  115:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_GDI_Surface_();
 685              		.loc 3 291 0
 686 0108 8B802C07 		movl	1836(%rax), %eax
 686      0000
 687 010e 8983D406 		movl	%eax, 1748(%rbx)
 687      0000
 688              	.LBE199:
 689              	.LBE198:
 354:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   30:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://
 690              		.loc 3 354 0
 691 0114 4883C428 		addq	$40, %rsp
 692              		.cfi_remember_state
 693              		.cfi_def_cfa_offset 56
 694 0118 5B       		popq	%rbx
 695              		.cfi_def_cfa_offset 48
 696              	.LVL56:
 697 0119 5D       		popq	%rbp
 698              		.cfi_def_cfa_offset 40
 699 011a 415C     		popq	%r12
 700              		.cfi_def_cfa_offset 32
 701              	.LVL57:
 702 011c 415D     		popq	%r13
 703              		.cfi_def_cfa_offset 24
 704              	.LVL58:
 705 011e 415E     		popq	%r14
 706              		.cfi_def_cfa_offset 16
 707 0120 415F     		popq	%r15
 708              		.cfi_def_cfa_offset 8
 709              	.LBB201:
 710              	.LBB200:
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 711              		.loc 3 292 0
 712 0122 E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 712      00
 713              	.LVL59:
 714 0127 660F1F84 		.p2align 4,,10
 714      00000000 
 714      00
 715              		.p2align 3
 716              	.L36:
 717              		.cfi_restore_state
 718 0130 44894C24 		movl	%r9d, 28(%rsp)
 718      1C
 719              	.LVL60:
 720 0135 44894424 		movl	%r8d, 24(%rsp)
 720      18
 721              	.LVL61:
 722              	.LBE200:
 723              	.LBE201:
 724              	.LBB202:
 725              	.LBB197:
 286:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 726              		.loc 3 286 0
 727 013a BF000000 		movl	$.LC15, %edi
 727      00
 728 013f 488B3500 		movq	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE(%rip), %rsi
 728      000000
 729 0146 31C0     		xorl	%eax, %eax
 730 0148 FF150000 		call	*_ZN2Fl7warningE(%rip)
 730      0000
 731              	.LVL62:
 732 014e 448B4C24 		movl	28(%rsp), %r9d
 732      1C
 733 0153 448B4424 		movl	24(%rsp), %r8d
 733      18
 734 0158 E96BFFFF 		jmp	.L37
 734      FF
 735              	.LBE197:
 736              	.LBE202:
 737              		.cfi_endproc
 738              	.LFE542:
 740              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPFvPviiiPhES0_ii
 741              	.LCOLDE16:
 742              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPFvPviiiPhES0_iiiii,"axG"
 743              	.LHOTE16:
 744              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_11not_clippedEiiii,"axG",@progbits
 745              		.align 2
 746              	.LCOLDB17:
 747              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_11not_clippedEiiii,"axG",@progbits,_ZN35Fl_
 748              	.LHOTB17:
 749              		.align 2
 750              		.p2align 4,,15
 751              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_11not_clippedEiiii
 753              	_ZN35Fl_translated_Xlib_Graphics_Driver_11not_clippedEiiii:
 754              	.LFB545:
 361:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_D
 755              		.loc 3 361 0
 756              		.cfi_startproc
 757              	.LVL63:
 361:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_D
 758              		.loc 3 361 0
 759 0000 0397D406 		addl	1748(%rdi), %edx
 759      0000
 760              	.LVL64:
 761 0006 03B7D006 		addl	1744(%rdi), %esi
 761      0000
 762              	.LVL65:
 763 000c E9000000 		jmp	_ZN18Fl_Graphics_Driver11not_clippedEiiii
 763      00
 764              	.LVL66:
 765              		.cfi_endproc
 766              	.LFE545:
 768              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_11not_clippedEiiii,"axG",@progbits
 769              	.LCOLDE17:
 770              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_11not_clippedEiiii,"axG",@progbits,_ZN35Fl_
 771              	.LHOTE17:
 772              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_8clip_boxEiiiiRiS0_S0_S0_,"axG",@p
 773              		.align 2
 774              	.LCOLDB18:
 775              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_8clip_boxEiiiiRiS0_S0_S0_,"axG",@progbits,_
 776              	.LHOTB18:
 777              		.align 2
 778              		.p2align 4,,15
 779              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_8clip_boxEiiiiRiS0_S0_S0_
 781              	_ZN35Fl_translated_Xlib_Graphics_Driver_8clip_boxEiiiiRiS0_S0_S0_:
 782              	.LFB546:
 362:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   38:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declar
 783              		.loc 3 362 0
 784              		.cfi_startproc
 785              	.LVL67:
 786 0000 4154     		pushq	%r12
 787              		.cfi_def_cfa_offset 16
 788              		.cfi_offset 12, -16
 789 0002 55       		pushq	%rbp
 790              		.cfi_def_cfa_offset 24
 791              		.cfi_offset 6, -24
 792 0003 4D89CC   		movq	%r9, %r12
 793 0006 53       		pushq	%rbx
 794              		.cfi_def_cfa_offset 32
 795              		.cfi_offset 3, -32
 362:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   38:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declar
 796              		.loc 3 362 0
 797 0007 488B6C24 		movq	32(%rsp), %rbp
 797      20
 798 000c 4889FB   		movq	%rdi, %rbx
 363:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   39:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_De
 799              		.loc 3 363 0
 800 000f 0397D406 		addl	1748(%rdi), %edx
 800      0000
 801              	.LVL68:
 802 0015 03B7D006 		addl	1744(%rdi), %esi
 802      0000
 803              	.LVL69:
 804 001b 4883EC08 		subq	$8, %rsp
 805              		.cfi_def_cfa_offset 40
 806 001f FF742438 		pushq	56(%rsp)
 807              		.cfi_def_cfa_offset 48
 808 0023 FF742438 		pushq	56(%rsp)
 809              		.cfi_def_cfa_offset 56
 810 0027 55       		pushq	%rbp
 811              		.cfi_def_cfa_offset 64
 812 0028 E8000000 		call	_ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_
 812      00
 813              	.LVL70:
 364:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   40:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   23:fltk-1.3.4-1/FL/Fl_Device.H **** */
 814              		.loc 3 364 0
 815 002d 8B93D006 		movl	1744(%rbx), %edx
 815      0000
 816 0033 41291424 		subl	%edx, (%r12)
 366:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   42:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Dev
 817              		.loc 3 366 0
 818 0037 4883C420 		addq	$32, %rsp
 819              		.cfi_def_cfa_offset 32
 365:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   41:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   24:fltk-1.3.4-1/FL/Fl_Device.H **** 
 820              		.loc 3 365 0
 821 003b 8B93D406 		movl	1748(%rbx), %edx
 821      0000
 822 0041 295500   		subl	%edx, 0(%rbp)
 367:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   43:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Dev
 823              		.loc 3 367 0
 824 0044 5B       		popq	%rbx
 825              		.cfi_def_cfa_offset 24
 826              	.LVL71:
 827 0045 5D       		popq	%rbp
 828              		.cfi_def_cfa_offset 16
 829 0046 415C     		popq	%r12
 830              		.cfi_def_cfa_offset 8
 831              	.LVL72:
 832 0048 C3       		ret
 833              		.cfi_endproc
 834              	.LFE546:
 836              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_8clip_boxEiiiiRiS0_S0_S0_,"axG",@p
 837              	.LCOLDE18:
 838              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_8clip_boxEiiiiRiS0_S0_S0_,"axG",@progbits,_
 839              	.LHOTE18:
 840              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_9push_clipEiiii,"axG",@progbits,_Z
 841              		.align 2
 842              	.LCOLDB19:
 843              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_9push_clipEiiii,"axG",@progbits,_ZN35Fl_tra
 844              	.LHOTB19:
 845              		.align 2
 846              		.p2align 4,,15
 847              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_9push_clipEiiii
 849              	_ZN35Fl_translated_Xlib_Graphics_Driver_9push_clipEiiii:
 850              	.LFB544:
 358:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   34:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://
 851              		.loc 3 358 0
 852              		.cfi_startproc
 853              	.LVL73:
 359:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   35:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   18:fltk-1.3.4-1/FL/Fl_Device.H **** //
 854              		.loc 3 359 0
 855 0000 0397D406 		addl	1748(%rdi), %edx
 855      0000
 856              	.LVL74:
 857 0006 03B7D006 		addl	1744(%rdi), %esi
 857      0000
 858              	.LVL75:
 859 000c E9000000 		jmp	_ZN18Fl_Graphics_Driver9push_clipEiiii
 859      00
 860              	.LVL76:
 861              		.cfi_endproc
 862              	.LFE544:
 864              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_9push_clipEiiii,"axG",@progbits,_Z
 865              	.LCOLDE19:
 866              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_9push_clipEiiii,"axG",@progbits,_ZN35Fl_tra
 867              	.LHOTE19:
 868              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_3pieEiiiidd,"axG",@progbits,_ZN35F
 869              		.align 2
 870              	.LCOLDB20:
 871              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_3pieEiiiidd,"axG",@progbits,_ZN35Fl_transla
 872              	.LHOTB20:
 873              		.align 2
 874              		.p2align 4,,15
 875              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_3pieEiiiidd
 877              	_ZN35Fl_translated_Xlib_Graphics_Driver_3pieEiiiidd:
 878              	.LFB547:
 368:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   44:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   27:fltk-1.3.4-1/FL/Fl_Device.H **** 
 879              		.loc 3 368 0
 880              		.cfi_startproc
 881              	.LVL77:
 368:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   44:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   27:fltk-1.3.4-1/FL/Fl_Device.H **** 
 882              		.loc 3 368 0
 883 0000 0397D406 		addl	1748(%rdi), %edx
 883      0000
 884              	.LVL78:
 885 0006 03B7D006 		addl	1744(%rdi), %esi
 885      0000
 886              	.LVL79:
 887 000c E9000000 		jmp	_ZN18Fl_Graphics_Driver3pieEiiiidd
 887      00
 888              	.LVL80:
 889              		.cfi_endproc
 890              	.LFE547:
 892              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_3pieEiiiidd,"axG",@progbits,_ZN35F
 893              	.LCOLDE20:
 894              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_3pieEiiiidd,"axG",@progbits,_ZN35Fl_transla
 895              	.LHOTE20:
 896              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_3arcEiiiidd,"axG",@progbits,_ZN35F
 897              		.align 2
 898              	.LCOLDB21:
 899              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_3arcEiiiidd,"axG",@progbits,_ZN35Fl_transla
 900              	.LHOTB21:
 901              		.align 2
 902              		.p2align 4,,15
 903              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_3arcEiiiidd
 905              	_ZN35Fl_translated_Xlib_Graphics_Driver_3arcEiiiidd:
 906              	.LFB548:
 369:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   45:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x
 907              		.loc 3 369 0
 908              		.cfi_startproc
 909              	.LVL81:
 369:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   45:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x
 910              		.loc 3 369 0
 911 0000 0397D406 		addl	1748(%rdi), %edx
 911      0000
 912              	.LVL82:
 913 0006 03B7D006 		addl	1744(%rdi), %esi
 913      0000
 914              	.LVL83:
 915 000c E9000000 		jmp	_ZN18Fl_Graphics_Driver3arcEiiiidd
 915      00
 916              	.LVL84:
 917              		.cfi_endproc
 918              	.LFE548:
 920              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_3arcEiiiidd,"axG",@progbits,_ZN35F
 921              	.LCOLDE21:
 922              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_3arcEiiiidd,"axG",@progbits,_ZN35Fl_transla
 923              	.LHOTE21:
 924              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiiiii,"axG",@progbits,
 925              		.align 2
 926              	.LCOLDB22:
 927              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiiiii,"axG",@progbits,_ZN35Fl_t
 928              	.LHOTB22:
 929              		.align 2
 930              		.p2align 4,,15
 931              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiiiii
 933              	_ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiiiii:
 934              	.LFB550:
 371:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   47:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 935              		.loc 3 371 0
 936              		.cfi_startproc
 937              	.LVL85:
 372:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   48:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 938              		.loc 3 372 0
 939 0000 448B97D0 		movl	1744(%rdi), %r10d
 939      060000
 940 0007 448B5C24 		movl	16(%rsp), %r11d
 940      10
 941 000c 8B87D406 		movl	1748(%rdi), %eax
 941      0000
 942 0012 01442418 		addl	%eax, 24(%rsp)
 943              	.LVL86:
 944 0016 4501D3   		addl	%r10d, %r11d
 945 0019 4401D1   		addl	%r10d, %ecx
 946              	.LVL87:
 947 001c 4401D6   		addl	%r10d, %esi
 948              	.LVL88:
 949 001f 44895C24 		movl	%r11d, 16(%rsp)
 949      10
 950              	.LVL89:
 951 0024 01C2     		addl	%eax, %edx
 952              	.LVL90:
 953 0026 4501D1   		addl	%r10d, %r9d
 954              	.LVL91:
 955 0029 448B5C24 		movl	8(%rsp), %r11d
 955      08
 956 002e 4101C0   		addl	%eax, %r8d
 957              	.LVL92:
 958 0031 4101C3   		addl	%eax, %r11d
 959 0034 44895C24 		movl	%r11d, 8(%rsp)
 959      08
 960              	.LVL93:
 961 0039 E9000000 		jmp	_ZN18Fl_Graphics_Driver7polygonEiiiiiiii
 961      00
 962              	.LVL94:
 963              		.cfi_endproc
 964              	.LFE550:
 966              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiiiii,"axG",@progbits,
 967              	.LCOLDE22:
 968              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiiiii,"axG",@progbits,_ZN35Fl_t
 969              	.LHOTE22:
 970              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiii,"axG",@progbits,_Z
 971              		.align 2
 972              	.LCOLDB23:
 973              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiii,"axG",@progbits,_ZN35Fl_tra
 974              	.LHOTB23:
 975              		.align 2
 976              		.p2align 4,,15
 977              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiii
 979              	_ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiii:
 980              	.LFB549:
 370:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   46:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 981              		.loc 3 370 0
 982              		.cfi_startproc
 983              	.LVL95:
 370:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   46:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 984              		.loc 3 370 0
 985 0000 8B87D406 		movl	1748(%rdi), %eax
 985      0000
 986 0006 448B97D0 		movl	1744(%rdi), %r10d
 986      060000
 987 000d 01442408 		addl	%eax, 8(%rsp)
 988              	.LVL96:
 989 0011 4401D1   		addl	%r10d, %ecx
 990              	.LVL97:
 991 0014 01C2     		addl	%eax, %edx
 992              	.LVL98:
 993 0016 4401D6   		addl	%r10d, %esi
 994              	.LVL99:
 995 0019 4501D1   		addl	%r10d, %r9d
 996              	.LVL100:
 997 001c 4101C0   		addl	%eax, %r8d
 998              	.LVL101:
 999 001f E9000000 		jmp	_ZN18Fl_Graphics_Driver7polygonEiiiiii
 999      00
 1000              	.LVL102:
 1001              		.cfi_endproc
 1002              	.LFE549:
 1004              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiii,"axG",@progbits,_Z
 1005              	.LCOLDE23:
 1006              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiii,"axG",@progbits,_ZN35Fl_tra
 1007              	.LHOTE23:
 1008              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiiiii,"axG",@progbits,_ZN
 1009              		.align 2
 1010              	.LCOLDB24:
 1011              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiiiii,"axG",@progbits,_ZN35Fl_tran
 1012              	.LHOTB24:
 1013              		.align 2
 1014              		.p2align 4,,15
 1015              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiiiii
 1017              	_ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiiiii:
 1018              	.LFB552:
 375:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   51:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdl
 1019              		.loc 3 375 0
 1020              		.cfi_startproc
 1021              	.LVL103:
 376:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   52:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
 1022              		.loc 3 376 0
 1023 0000 448B97D0 		movl	1744(%rdi), %r10d
 1023      060000
 1024 0007 448B5C24 		movl	16(%rsp), %r11d
 1024      10
 1025 000c 8B87D406 		movl	1748(%rdi), %eax
 1025      0000
 1026 0012 01442418 		addl	%eax, 24(%rsp)
 1027              	.LVL104:
 1028 0016 4501D3   		addl	%r10d, %r11d
 1029 0019 4401D1   		addl	%r10d, %ecx
 1030              	.LVL105:
 1031 001c 4401D6   		addl	%r10d, %esi
 1032              	.LVL106:
 1033 001f 44895C24 		movl	%r11d, 16(%rsp)
 1033      10
 1034              	.LVL107:
 1035 0024 01C2     		addl	%eax, %edx
 1036              	.LVL108:
 1037 0026 4501D1   		addl	%r10d, %r9d
 1038              	.LVL109:
 1039 0029 448B5C24 		movl	8(%rsp), %r11d
 1039      08
 1040 002e 4101C0   		addl	%eax, %r8d
 1041              	.LVL110:
 1042 0031 4101C3   		addl	%eax, %r11d
 1043 0034 44895C24 		movl	%r11d, 8(%rsp)
 1043      08
 1044              	.LVL111:
 1045 0039 E9000000 		jmp	_ZN18Fl_Graphics_Driver4loopEiiiiiiii
 1045      00
 1046              	.LVL112:
 1047              		.cfi_endproc
 1048              	.LFE552:
 1050              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiiiii,"axG",@progbits,_ZN
 1051              	.LCOLDE24:
 1052              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiiiii,"axG",@progbits,_ZN35Fl_tran
 1053              	.LHOTE24:
 1054              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiii,"axG",@progbits,_ZN35
 1055              		.align 2
 1056              	.LCOLDB25:
 1057              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiii,"axG",@progbits,_ZN35Fl_transl
 1058              	.LHOTB25:
 1059              		.align 2
 1060              		.p2align 4,,15
 1061              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiii
 1063              	_ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiii:
 1064              	.LFB551:
 374:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   50:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 1065              		.loc 3 374 0
 1066              		.cfi_startproc
 1067              	.LVL113:
 374:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   50:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/F
 1068              		.loc 3 374 0
 1069 0000 8B87D406 		movl	1748(%rdi), %eax
 1069      0000
 1070 0006 448B97D0 		movl	1744(%rdi), %r10d
 1070      060000
 1071 000d 01442408 		addl	%eax, 8(%rsp)
 1072              	.LVL114:
 1073 0011 4401D1   		addl	%r10d, %ecx
 1074              	.LVL115:
 1075 0014 01C2     		addl	%eax, %edx
 1076              	.LVL116:
 1077 0016 4401D6   		addl	%r10d, %esi
 1078              	.LVL117:
 1079 0019 4501D1   		addl	%r10d, %r9d
 1080              	.LVL118:
 1081 001c 4101C0   		addl	%eax, %r8d
 1082              	.LVL119:
 1083 001f E9000000 		jmp	_ZN18Fl_Graphics_Driver4loopEiiiiii
 1083      00
 1084              	.LVL120:
 1085              		.cfi_endproc
 1086              	.LFE551:
 1088              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiii,"axG",@progbits,_ZN35
 1089              	.LCOLDE25:
 1090              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiii,"axG",@progbits,_ZN35Fl_transl
 1091              	.LHOTE25:
 1092              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_5pointEii,"axG",@progbits,_ZN35Fl_
 1093              		.align 2
 1094              	.LCOLDB26:
 1095              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_5pointEii,"axG",@progbits,_ZN35Fl_translate
 1096              	.LHOTB26:
 1097              		.align 2
 1098              		.p2align 4,,15
 1099              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_5pointEii
 1101              	_ZN35Fl_translated_Xlib_Graphics_Driver_5pointEii:
 1102              	.LFB553:
 378:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   54:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_
 1103              		.loc 3 378 0
 1104              		.cfi_startproc
 1105              	.LVL121:
 378:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   54:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_
 1106              		.loc 3 378 0
 1107 0000 0397D406 		addl	1748(%rdi), %edx
 1107      0000
 1108              	.LVL122:
 1109 0006 03B7D006 		addl	1744(%rdi), %esi
 1109      0000
 1110              	.LVL123:
 1111 000c E9000000 		jmp	_ZN18Fl_Graphics_Driver5pointEii
 1111      00
 1112              	.LVL124:
 1113              		.cfi_endproc
 1114              	.LFE553:
 1116              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_5pointEii,"axG",@progbits,_ZN35Fl_
 1117              	.LCOLDE26:
 1118              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_5pointEii,"axG",@progbits,_ZN35Fl_translate
 1119              	.LHOTE26:
 1120              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_8rtl_drawEPKciii,"axG",@progbits,_
 1121              		.align 2
 1122              	.LCOLDB27:
 1123              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_8rtl_drawEPKciii,"axG",@progbits,_ZN35Fl_tr
 1124              	.LHOTB27:
 1125              		.align 2
 1126              		.p2align 4,,15
 1127              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_8rtl_drawEPKciii
 1129              	_ZN35Fl_translated_Xlib_Graphics_Driver_8rtl_drawEPKciii:
 1130              	.LFB535:
 310:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  101              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_10class_nameEv,"axG",@progbits,_ZN
 1131              		.loc 3 310 0
 1132              		.cfi_startproc
 1133              	.LVL125:
 311:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  102              	.LCOLDE3:
 1134              		.loc 3 311 0
 1135 0000 038FD006 		addl	1744(%rdi), %ecx
 1135      0000
 1136              	.LVL126:
 1137 0006 440387D4 		addl	1748(%rdi), %r8d
 1137      060000
 1138              	.LVL127:
 1139 000d E9000000 		jmp	_ZN23Fl_Xlib_Graphics_Driver8rtl_drawEPKciii
 1139      00
 1140              	.LVL128:
 1141              		.cfi_endproc
 1142              	.LFE535:
 1144              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_8rtl_drawEPKciii,"axG",@progbits,_
 1145              	.LCOLDE27:
 1146              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_8rtl_drawEPKciii,"axG",@progbits,_ZN35Fl_tr
 1147              	.LHOTE27:
 1148              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEiPKciii,"axG",@progbits,_ZN3
 1149              		.align 2
 1150              	.LCOLDB28:
 1151              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEiPKciii,"axG",@progbits,_ZN35Fl_trans
 1152              	.LHOTB28:
 1153              		.align 2
 1154              		.p2align 4,,15
 1155              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEiPKciii
 1157              	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEiPKciii:
 1158              	.LFB534:
 307:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   97 0007 C3       		ret
 1159              		.loc 3 307 0
 1160              		.cfi_startproc
 1161              	.LVL129:
 308:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   98              		.cfi_endproc
 1162              		.loc 3 308 0
 1163 0000 44038FD4 		addl	1748(%rdi), %r9d
 1163      060000
 1164              	.LVL130:
 1165 0007 440387D0 		addl	1744(%rdi), %r8d
 1165      060000
 1166              	.LVL131:
 1167 000e E9000000 		jmp	_ZN23Fl_Xlib_Graphics_Driver4drawEiPKciii
 1167      00
 1168              	.LVL132:
 1169              		.cfi_endproc
 1170              	.LFE534:
 1172              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEiPKciii,"axG",@progbits,_ZN3
 1173              	.LCOLDE28:
 1174              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEiPKciii,"axG",@progbits,_ZN35Fl_trans
 1175              	.LHOTE28:
 1176              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEPKciii,"axG",@progbits,_ZN35
 1177              		.align 2
 1178              	.LCOLDB29:
 1179              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEPKciii,"axG",@progbits,_ZN35Fl_transl
 1180              	.LHOTB29:
 1181              		.align 2
 1182              		.p2align 4,,15
 1183              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEPKciii
 1185              	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEPKciii:
 1186              	.LFB533:
 304:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   95              		.loc 2 124 0
 1187              		.loc 3 304 0
 1188              		.cfi_startproc
 1189              	.LVL133:
 305:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   96 0000 488B0500 		movq	_ZN16Fl_Xlib_Surface_8class_idE(%rip), %rax
 1190              		.loc 3 305 0
 1191 0000 038FD006 		addl	1744(%rdi), %ecx
 1191      0000
 1192              	.LVL134:
 1193 0006 440387D4 		addl	1748(%rdi), %r8d
 1193      060000
 1194              	.LVL135:
 1195 000d E9000000 		jmp	_ZN23Fl_Xlib_Graphics_Driver4drawEPKciii
 1195      00
 1196              	.LVL136:
 1197              		.cfi_endproc
 1198              	.LFE533:
 1200              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEPKciii,"axG",@progbits,_ZN35
 1201              	.LCOLDE29:
 1202              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEPKciii,"axG",@progbits,_ZN35Fl_transl
 1203              	.LHOTE29:
 1204              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiiiii,"axG",@progbits,_ZN35
 1205              		.align 2
 1206              	.LCOLDB30:
 1207              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiiiii,"axG",@progbits,_ZN35Fl_transl
 1208              	.LHOTB30:
 1209              		.align 2
 1210              		.p2align 4,,15
 1211              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiiiii
 1213              	_ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiiiii:
 1214              	.LFB532:
 303:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   94              	.LVL3:
 1215              		.loc 3 303 0
 1216              		.cfi_startproc
 1217              	.LVL137:
 303:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   94              	.LVL3:
 1218              		.loc 3 303 0
 1219 0000 8B87D406 		movl	1748(%rdi), %eax
 1219      0000
 1220 0006 448B97D0 		movl	1744(%rdi), %r10d
 1220      060000
 1221 000d 01442408 		addl	%eax, 8(%rsp)
 1222              	.LVL138:
 1223 0011 4401D1   		addl	%r10d, %ecx
 1224              	.LVL139:
 1225 0014 01C2     		addl	%eax, %edx
 1226              	.LVL140:
 1227 0016 4401D6   		addl	%r10d, %esi
 1228              	.LVL141:
 1229 0019 4501D1   		addl	%r10d, %r9d
 1230              	.LVL142:
 1231 001c 4101C0   		addl	%eax, %r8d
 1232              	.LVL143:
 1233 001f E9000000 		jmp	_ZN18Fl_Graphics_Driver4lineEiiiiii
 1233      00
 1234              	.LVL144:
 1235              		.cfi_endproc
 1236              	.LFE532:
 1238              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiiiii,"axG",@progbits,_ZN35
 1239              	.LCOLDE30:
 1240              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiiiii,"axG",@progbits,_ZN35Fl_transl
 1241              	.LHOTE30:
 1242              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiii,"axG",@progbits,_ZN35Fl
 1243              		.align 2
 1244              	.LCOLDB31:
 1245              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiii,"axG",@progbits,_ZN35Fl_translat
 1246              	.LHOTB31:
 1247              		.align 2
 1248              		.p2align 4,,15
 1249              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiii
 1251              	_ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiii:
 1252              	.LFB531:
 302:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   93              		.cfi_startproc
 1253              		.loc 3 302 0
 1254              		.cfi_startproc
 1255              	.LVL145:
 302:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   93              		.cfi_startproc
 1256              		.loc 3 302 0
 1257 0000 8B87D406 		movl	1748(%rdi), %eax
 1257      0000
 1258 0006 448B8FD0 		movl	1744(%rdi), %r9d
 1258      060000
 1259 000d 01C2     		addl	%eax, %edx
 1260              	.LVL146:
 1261 000f 4401C9   		addl	%r9d, %ecx
 1262              	.LVL147:
 1263 0012 4401CE   		addl	%r9d, %esi
 1264              	.LVL148:
 1265 0015 4101C0   		addl	%eax, %r8d
 1266              	.LVL149:
 1267 0018 E9000000 		jmp	_ZN18Fl_Graphics_Driver4lineEiiii
 1267      00
 1268              	.LVL150:
 1269              		.cfi_endproc
 1270              	.LFE531:
 1272              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiii,"axG",@progbits,_ZN35Fl
 1273              	.LCOLDE31:
 1274              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiii,"axG",@progbits,_ZN35Fl_translat
 1275              	.LHOTE31:
 1276              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiiii,"axG",@progbits,_ZN3
 1277              		.align 2
 1278              	.LCOLDB32:
 1279              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiiii,"axG",@progbits,_ZN35Fl_trans
 1280              	.LHOTB32:
 1281              		.align 2
 1282              		.p2align 4,,15
 1283              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiiii
 1285              	_ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiiii:
 1286              	.LFB530:
 301:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   92              		.loc 2 124 0
 1287              		.loc 3 301 0
 1288              		.cfi_startproc
 1289              	.LVL151:
 301:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   92              		.loc 2 124 0
 1290              		.loc 3 301 0
 1291 0000 8B87D406 		movl	1748(%rdi), %eax
 1291      0000
 1292 0006 448B97D0 		movl	1744(%rdi), %r10d
 1292      060000
 1293 000d 01C1     		addl	%eax, %ecx
 1294              	.LVL152:
 1295 000f 01C2     		addl	%eax, %edx
 1296              	.LVL153:
 1297 0011 4401D6   		addl	%r10d, %esi
 1298              	.LVL154:
 1299 0014 4101C1   		addl	%eax, %r9d
 1300              	.LVL155:
 1301 0017 4501D0   		addl	%r10d, %r8d
 1302              	.LVL156:
 1303 001a E9000000 		jmp	_ZN18Fl_Graphics_Driver6yxlineEiiiii
 1303      00
 1304              	.LVL157:
 1305              		.cfi_endproc
 1306              	.LFE530:
 1308              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiiii,"axG",@progbits,_ZN3
 1309              	.LCOLDE32:
 1310              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiiii,"axG",@progbits,_ZN35Fl_trans
 1311              	.LHOTE32:
 1312              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiii,"axG",@progbits,_ZN35
 1313              		.align 2
 1314              	.LCOLDB33:
 1315              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiii,"axG",@progbits,_ZN35Fl_transl
 1316              	.LHOTB33:
 1317              		.align 2
 1318              		.p2align 4,,15
 1319              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiii
 1321              	_ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiii:
 1322              	.LFB529:
 300:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  124:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   const char *class_name() {return class_id;};
 1323              		.loc 3 300 0
 1324              		.cfi_startproc
 1325              	.LVL158:
 300:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  124:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   const char *class_name() {return class_id;};
 1326              		.loc 3 300 0
 1327 0000 8B87D006 		movl	1744(%rdi), %eax
 1327      0000
 1328 0006 448B8FD4 		movl	1748(%rdi), %r9d
 1328      060000
 1329 000d 01C6     		addl	%eax, %esi
 1330              	.LVL159:
 1331 000f 4401C9   		addl	%r9d, %ecx
 1332              	.LVL160:
 1333 0012 4401CA   		addl	%r9d, %edx
 1334              	.LVL161:
 1335 0015 4101C0   		addl	%eax, %r8d
 1336              	.LVL162:
 1337 0018 E9000000 		jmp	_ZN18Fl_Graphics_Driver6yxlineEiiii
 1337      00
 1338              	.LVL163:
 1339              		.cfi_endproc
 1340              	.LFE529:
 1342              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiii,"axG",@progbits,_ZN35
 1343              	.LCOLDE33:
 1344              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiii,"axG",@progbits,_ZN35Fl_transl
 1345              	.LHOTE33:
 1346              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiii,"axG",@progbits,_ZN35F
 1347              		.align 2
 1348              	.LCOLDB34:
 1349              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiii,"axG",@progbits,_ZN35Fl_transla
 1350              	.LHOTB34:
 1351              		.align 2
 1352              		.p2align 4,,15
 1353              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiii
 1355              	_ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiii:
 1356              	.LFB528:
 299:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  123:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 1357              		.loc 3 299 0
 1358              		.cfi_startproc
 1359              	.LVL164:
 299:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  123:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 1360              		.loc 3 299 0
 1361 0000 8B87D406 		movl	1748(%rdi), %eax
 1361      0000
 1362 0006 03B7D006 		addl	1744(%rdi), %esi
 1362      0000
 1363              	.LVL165:
 1364 000c 01C1     		addl	%eax, %ecx
 1365              	.LVL166:
 1366 000e 01C2     		addl	%eax, %edx
 1367              	.LVL167:
 1368 0010 E9000000 		jmp	_ZN18Fl_Graphics_Driver6yxlineEiii
 1368      00
 1369              	.LVL168:
 1370              		.cfi_endproc
 1371              	.LFE528:
 1373              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiii,"axG",@progbits,_ZN35F
 1374              	.LCOLDE34:
 1375              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiii,"axG",@progbits,_ZN35Fl_transla
 1376              	.LHOTE34:
 1377              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiiii,"axG",@progbits,_ZN3
 1378              		.align 2
 1379              	.LCOLDB35:
 1380              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiiii,"axG",@progbits,_ZN35Fl_trans
 1381              	.LHOTB35:
 1382              		.align 2
 1383              		.p2align 4,,15
 1384              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiiii
 1386              	_ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiiii:
 1387              	.LFB527:
 298:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  122:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 1388              		.loc 3 298 0
 1389              		.cfi_startproc
 1390              	.LVL169:
 298:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  122:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 1391              		.loc 3 298 0
 1392 0000 8B87D006 		movl	1744(%rdi), %eax
 1392      0000
 1393 0006 448B97D4 		movl	1748(%rdi), %r10d
 1393      060000
 1394 000d 01C1     		addl	%eax, %ecx
 1395              	.LVL170:
 1396 000f 4401D2   		addl	%r10d, %edx
 1397              	.LVL171:
 1398 0012 01C6     		addl	%eax, %esi
 1399              	.LVL172:
 1400 0014 4101C1   		addl	%eax, %r9d
 1401              	.LVL173:
 1402 0017 4501D0   		addl	%r10d, %r8d
 1403              	.LVL174:
 1404 001a E9000000 		jmp	_ZN18Fl_Graphics_Driver6xylineEiiiii
 1404      00
 1405              	.LVL175:
 1406              		.cfi_endproc
 1407              	.LFE527:
 1409              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiiii,"axG",@progbits,_ZN3
 1410              	.LCOLDE35:
 1411              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiiii,"axG",@progbits,_ZN35Fl_trans
 1412              	.LHOTE35:
 1413              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiii,"axG",@progbits,_ZN35
 1414              		.align 2
 1415              	.LCOLDB36:
 1416              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiii,"axG",@progbits,_ZN35Fl_transl
 1417              	.LHOTB36:
 1418              		.align 2
 1419              		.p2align 4,,15
 1420              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiii
 1422              	_ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiii:
 1423              	.LFB526:
 297:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  121:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_Xlib_Surface_ : public Fl_Paged_Devi
 1424              		.loc 3 297 0
 1425              		.cfi_startproc
 1426              	.LVL176:
 297:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  121:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_Xlib_Surface_ : public Fl_Paged_Devi
 1427              		.loc 3 297 0
 1428 0000 8B87D406 		movl	1748(%rdi), %eax
 1428      0000
 1429 0006 448B8FD0 		movl	1744(%rdi), %r9d
 1429      060000
 1430 000d 01C2     		addl	%eax, %edx
 1431              	.LVL177:
 1432 000f 4401C9   		addl	%r9d, %ecx
 1433              	.LVL178:
 1434 0012 4401CE   		addl	%r9d, %esi
 1435              	.LVL179:
 1436 0015 4101C0   		addl	%eax, %r8d
 1437              	.LVL180:
 1438 0018 E9000000 		jmp	_ZN18Fl_Graphics_Driver6xylineEiiii
 1438      00
 1439              	.LVL181:
 1440              		.cfi_endproc
 1441              	.LFE526:
 1443              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiii,"axG",@progbits,_ZN35
 1444              	.LCOLDE36:
 1445              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiii,"axG",@progbits,_ZN35Fl_transl
 1446              	.LHOTE36:
 1447              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiii,"axG",@progbits,_ZN35F
 1448              		.align 2
 1449              	.LCOLDB37:
 1450              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiii,"axG",@progbits,_ZN35Fl_transla
 1451              	.LHOTB37:
 1452              		.align 2
 1453              		.p2align 4,,15
 1454              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiii
 1456              	_ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiii:
 1457              	.LFB525:
 296:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  120:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Xlib class to implement translate()/untranslate() */
 1458              		.loc 3 296 0
 1459              		.cfi_startproc
 1460              	.LVL182:
 296:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  120:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Xlib class to implement translate()/untranslate() */
 1461              		.loc 3 296 0
 1462 0000 8B87D006 		movl	1744(%rdi), %eax
 1462      0000
 1463 0006 0397D406 		addl	1748(%rdi), %edx
 1463      0000
 1464              	.LVL183:
 1465 000c 01C1     		addl	%eax, %ecx
 1466              	.LVL184:
 1467 000e 01C6     		addl	%eax, %esi
 1468              	.LVL185:
 1469 0010 E9000000 		jmp	_ZN18Fl_Graphics_Driver6xylineEiii
 1469      00
 1470              	.LVL186:
 1471              		.cfi_endproc
 1472              	.LFE525:
 1474              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiii,"axG",@progbits,_ZN35F
 1475              	.LCOLDE37:
 1476              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiii,"axG",@progbits,_ZN35Fl_transla
 1477              	.LHOTE37:
 1478              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4rectEiiii,"axG",@progbits,_ZN35Fl
 1479              		.align 2
 1480              	.LCOLDB38:
 1481              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4rectEiiii,"axG",@progbits,_ZN35Fl_translat
 1482              	.LHOTB38:
 1483              		.align 2
 1484              		.p2align 4,,15
 1485              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_4rectEiiii
 1487              	_ZN35Fl_translated_Xlib_Graphics_Driver_4rectEiiii:
 1488              	.LFB523:
 294:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  118:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif !defined(FL_DOXYGEN)
 1489              		.loc 3 294 0
 1490              		.cfi_startproc
 1491              	.LVL187:
 294:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  118:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif !defined(FL_DOXYGEN)
 1492              		.loc 3 294 0
 1493 0000 0397D406 		addl	1748(%rdi), %edx
 1493      0000
 1494              	.LVL188:
 1495 0006 03B7D006 		addl	1744(%rdi), %esi
 1495      0000
 1496              	.LVL189:
 1497 000c E9000000 		jmp	_ZN18Fl_Graphics_Driver4rectEiiii
 1497      00
 1498              	.LVL190:
 1499              		.cfi_endproc
 1500              	.LFE523:
 1502              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4rectEiiii,"axG",@progbits,_ZN35Fl
 1503              	.LCOLDE38:
 1504              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4rectEiiii,"axG",@progbits,_ZN35Fl_translat
 1505              	.LHOTE38:
 1506              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_D2Ev,"axG",@progbits,_ZN35Fl_trans
 1507              		.align 2
 1508              	.LCOLDB39:
 1509              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_D2Ev,"axG",@progbits,_ZN35Fl_translated_Xli
 1510              	.LHOTB39:
 1511              		.align 2
 1512              		.p2align 4,,15
 1513              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_D2Ev
 1515              	_ZN35Fl_translated_Xlib_Graphics_Driver_D2Ev:
 1516              	.LFB518:
 277:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  101:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif defined(WIN32)
 1517              		.loc 3 277 0
 1518              		.cfi_startproc
 1519              	.LVL191:
 1520              	.LBB203:
 1521              	.LBB204:
 1522              	.LBB205:
 412:fltk-1.3.4-1/FL/Fl_Device.H **** };
 1523              		.loc 1 412 0
 1524 0000 48C70700 		movq	$_ZTV18Fl_Graphics_Driver+16, (%rdi)
 1524      000000
 1525 0007 488BBF58 		movq	1624(%rdi), %rdi
 1525      060000
 1526              	.LVL192:
 1527 000e 4885FF   		testq	%rdi, %rdi
 1528 0011 740D     		je	.L66
 1529 0013 E9000000 		jmp	free
 1529      00
 1530              	.LVL193:
 1531 0018 0F1F8400 		.p2align 4,,10
 1531      00000000 
 1532              		.p2align 3
 1533              	.L66:
 1534 0020 F3C3     		rep ret
 1535              	.LBE205:
 1536              	.LBE204:
 1537              	.LBE203:
 1538              		.cfi_endproc
 1539              	.LFE518:
 1541              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_D2Ev,"axG",@progbits,_ZN35Fl_trans
 1542              	.LCOLDE39:
 1543              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_D2Ev,"axG",@progbits,_ZN35Fl_translated_Xli
 1544              	.LHOTE39:
 1545              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_D1Ev
 1546              		.set	_ZN35Fl_translated_Xlib_Graphics_Driver_D1Ev,_ZN35Fl_translated_Xlib_Graphics_Driver_D2Ev
 1547              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_D0Ev,"axG",@progbits,_ZN35Fl_trans
 1548              		.align 2
 1549              	.LCOLDB40:
 1550              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_D0Ev,"axG",@progbits,_ZN35Fl_translated_Xli
 1551              	.LHOTB40:
 1552              		.align 2
 1553              		.p2align 4,,15
 1554              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_D0Ev
 1556              	_ZN35Fl_translated_Xlib_Graphics_Driver_D0Ev:
 1557              	.LFB520:
 277:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  101:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif defined(WIN32)
 1558              		.loc 3 277 0
 1559              		.cfi_startproc
 1560              	.LVL194:
 1561 0000 53       		pushq	%rbx
 1562              		.cfi_def_cfa_offset 16
 1563              		.cfi_offset 3, -16
 277:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  101:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif defined(WIN32)
 1564              		.loc 3 277 0
 1565 0001 4889FB   		movq	%rdi, %rbx
 1566              	.LBB206:
 1567              	.LBB207:
 1568              	.LBB208:
 1569              	.LBB209:
 412:fltk-1.3.4-1/FL/Fl_Device.H **** };
 1570              		.loc 1 412 0
 1571 0004 48C70700 		movq	$_ZTV18Fl_Graphics_Driver+16, (%rdi)
 1571      000000
 1572 000b 488BBF58 		movq	1624(%rdi), %rdi
 1572      060000
 1573              	.LVL195:
 1574 0012 4885FF   		testq	%rdi, %rdi
 1575 0015 7405     		je	.L69
 1576 0017 E8000000 		call	free
 1576      00
 1577              	.LVL196:
 1578              	.L69:
 1579              	.LBE209:
 1580              	.LBE208:
 1581              	.LBE207:
 1582              	.LBE206:
 277:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  101:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** #elif defined(WIN32)
 1583              		.loc 3 277 0
 1584 001c 4889DF   		movq	%rbx, %rdi
 1585 001f 5B       		popq	%rbx
 1586              		.cfi_def_cfa_offset 8
 1587              	.LVL197:
 1588 0020 E9000000 		jmp	_ZdlPv
 1588      00
 1589              	.LVL198:
 1590              		.cfi_endproc
 1591              	.LFE520:
 1593              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_D0Ev,"axG",@progbits,_ZN35Fl_trans
 1594              	.LCOLDE40:
 1595              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_D0Ev,"axG",@progbits,_ZN35Fl_translated_Xli
 1596              	.LHOTE40:
 1597              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_9translateEii,"ax",@progbits
 1598              		.align 2
 1599              	.LCOLDB41:
 1600              		.section	.text._ZN16Fl_Xlib_Surface_9translateEii,"ax",@progbits
 1601              	.LHOTB41:
 1602              		.align 2
 1603              		.p2align 4,,15
 1604              		.globl	_ZN16Fl_Xlib_Surface_9translateEii
 1606              	_ZN16Fl_Xlib_Surface_9translateEii:
 1607              	.LFB554:
 383:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   59:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of 
 1608              		.loc 3 383 0
 1609              		.cfi_startproc
 1610              	.LVL199:
 1611 0000 4154     		pushq	%r12
 1612              		.cfi_def_cfa_offset 16
 1613              		.cfi_offset 12, -16
 1614 0002 55       		pushq	%rbp
 1615              		.cfi_def_cfa_offset 24
 1616              		.cfi_offset 6, -24
 1617 0003 4189D4   		movl	%edx, %r12d
 1618 0006 53       		pushq	%rbx
 1619              		.cfi_def_cfa_offset 32
 1620              		.cfi_offset 3, -32
 1621 0007 488B5F08 		movq	8(%rdi), %rbx
 1622              	.LVL200:
 383:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   59:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of 
 1623              		.loc 3 383 0
 1624 000b 89F5     		movl	%esi, %ebp
 1625 000d 8B83D806 		movl	1752(%rbx), %eax
 1625      0000
 1626              	.LBB214:
 1627              	.LBB215:
 279:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 1628              		.loc 3 279 0
 1629 0013 8B8BD006 		movl	1744(%rbx), %ecx
 1629      0000
 283:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 1630              		.loc 3 283 0
 1631 0019 4889DF   		movq	%rbx, %rdi
 1632              	.LVL201:
 1633 001c 488D1483 		leaq	(%rbx,%rax,4), %rdx
 1634              	.LVL202:
 279:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 1635              		.loc 3 279 0
 1636 0020 898ADC06 		movl	%ecx, 1756(%rdx)
 1636      0000
 280:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Devic
 1637              		.loc 3 280 0
 1638 0026 8B83D406 		movl	1748(%rbx), %eax
 1638      0000
 281:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 1639              		.loc 3 281 0
 1640 002c 01F1     		addl	%esi, %ecx
 280:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Devic
 1641              		.loc 3 280 0
 1642 002e 89822C07 		movl	%eax, 1836(%rdx)
 1642      0000
 282:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 1643              		.loc 3 282 0
 1644 0034 4401E0   		addl	%r12d, %eax
 281:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 1645              		.loc 3 281 0
 1646 0037 898BD006 		movl	%ecx, 1744(%rbx)
 1646      0000
 282:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 1647              		.loc 3 282 0
 1648 003d 8983D406 		movl	%eax, 1748(%rbx)
 1648      0000
 283:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 1649              		.loc 3 283 0
 1650 0043 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 1650      00
 1651              	.LVL203:
 1652              	.LBB216:
 1653              	.LBB217:
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 1654              		.loc 1 331 0
 1655 0048 660FEFED 		pxor	%xmm5, %xmm5
 1656 004c 4889DF   		movq	%rbx, %rdi
 1657 004f 660FEFE4 		pxor	%xmm4, %xmm4
 1658 0053 660FEFD2 		pxor	%xmm2, %xmm2
 1659 0057 F2410F2A 		cvtsi2sd	%r12d, %xmm5
 1659      EC
 1660 005c F20F2AE5 		cvtsi2sd	%ebp, %xmm4
 1661 0060 F20F101D 		movsd	.LC13(%rip), %xmm3
 1661      00000000 
 1662 0068 660F28CA 		movapd	%xmm2, %xmm1
 1663 006c 660F28C3 		movapd	%xmm3, %xmm0
 1664 0070 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 1664      00
 1665              	.LVL204:
 1666              	.LBE217:
 1667              	.LBE216:
 285:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 1668              		.loc 3 285 0
 1669 0075 8B83D806 		movl	1752(%rbx), %eax
 1669      0000
 1670 007b 83F813   		cmpl	$19, %eax
 1671 007e 7710     		ja	.L75
 1672 0080 83C001   		addl	$1, %eax
 1673 0083 8983D806 		movl	%eax, 1752(%rbx)
 1673      0000
 1674              	.LBE215:
 1675              	.LBE214:
 385:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   61:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x
 1676              		.loc 3 385 0
 1677 0089 5B       		popq	%rbx
 1678              		.cfi_remember_state
 1679              		.cfi_def_cfa_offset 24
 1680              	.LVL205:
 1681 008a 5D       		popq	%rbp
 1682              		.cfi_def_cfa_offset 16
 1683              	.LVL206:
 1684 008b 415C     		popq	%r12
 1685              		.cfi_def_cfa_offset 8
 1686              	.LVL207:
 1687 008d C3       		ret
 1688              	.LVL208:
 1689 008e 6690     		.p2align 4,,10
 1690              		.p2align 3
 1691              	.L75:
 1692              		.cfi_restore_state
 1693 0090 5B       		popq	%rbx
 1694              		.cfi_def_cfa_offset 24
 1695              	.LVL209:
 1696 0091 5D       		popq	%rbp
 1697              		.cfi_def_cfa_offset 16
 1698              	.LVL210:
 1699 0092 415C     		popq	%r12
 1700              		.cfi_def_cfa_offset 8
 1701              	.LVL211:
 1702              	.LBB219:
 1703              	.LBB218:
 286:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 1704              		.loc 3 286 0
 1705 0094 488B3500 		movq	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE(%rip), %rsi
 1705      000000
 1706 009b BF000000 		movl	$.LC15, %edi
 1706      00
 1707 00a0 31C0     		xorl	%eax, %eax
 1708 00a2 FF250000 		jmp	*_ZN2Fl7warningE(%rip)
 1708      0000
 1709              	.LVL212:
 1710              	.LBE218:
 1711              	.LBE219:
 1712              		.cfi_endproc
 1713              	.LFE554:
 1715              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_9translateEii
 1716              	.LCOLDE41:
 1717              		.section	.text._ZN16Fl_Xlib_Surface_9translateEii
 1718              	.LHOTE41:
 1719              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Pixmapiiiiii,"axG",@pro
 1720              		.align 2
 1721              	.LCOLDB42:
 1722              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Pixmapiiiiii,"axG",@progbits,_ZN
 1723              	.LHOTB42:
 1724              		.align 2
 1725              		.p2align 4,,15
 1726              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Pixmapiiiiii
 1728              	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Pixmapiiiiii:
 1729              	.LFB536:
 313:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104              	.LHOTE3:
 1730              		.loc 3 313 0
 1731              		.cfi_startproc
 1732              	.LVL213:
 1733 0000 4157     		pushq	%r15
 1734              		.cfi_def_cfa_offset 16
 1735              		.cfi_offset 15, -16
 1736 0002 4156     		pushq	%r14
 1737              		.cfi_def_cfa_offset 24
 1738              		.cfi_offset 14, -24
 1739 0004 4155     		pushq	%r13
 1740              		.cfi_def_cfa_offset 32
 1741              		.cfi_offset 13, -32
 1742 0006 4154     		pushq	%r12
 1743              		.cfi_def_cfa_offset 40
 1744              		.cfi_offset 12, -40
 1745 0008 4589C5   		movl	%r8d, %r13d
 1746 000b 55       		pushq	%rbp
 1747              		.cfi_def_cfa_offset 48
 1748              		.cfi_offset 6, -48
 1749 000c 53       		pushq	%rbx
 1750              		.cfi_def_cfa_offset 56
 1751              		.cfi_offset 3, -56
 1752 000d 4889FB   		movq	%rdi, %rbx
 1753 0010 4883EC28 		subq	$40, %rsp
 1754              		.cfi_def_cfa_offset 96
 314:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv,
 1755              		.loc 3 314 0
 1756 0014 8BAFD006 		movl	1744(%rdi), %ebp
 1756      0000
 1757 001a 448BA7D4 		movl	1748(%rdi), %r12d
 1757      060000
 313:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104              	.LHOTE3:
 1758              		.loc 3 313 0
 1759 0021 44894C24 		movl	%r9d, 28(%rsp)
 1759      1C
 1760 0026 48897424 		movq	%rsi, 16(%rsp)
 1760      10
 1761 002b 448B7424 		movl	96(%rsp), %r14d
 1761      60
 1762 0030 448B7C24 		movl	104(%rsp), %r15d
 1762      68
 314:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv,
 1763              		.loc 3 314 0
 1764 0035 8D441500 		leal	0(%rbp,%rdx), %eax
 1765 0039 8944240C 		movl	%eax, 12(%rsp)
 1766              	.LVL214:
 1767 003d 418D040C 		leal	(%r12,%rcx), %eax
 1768              	.LVL215:
 1769 0041 8B8FD806 		movl	1752(%rdi), %ecx
 1769      0000
 1770              	.LVL216:
 1771 0047 89442418 		movl	%eax, 24(%rsp)
 1772              	.LVL217:
 1773 004b 488D0C8F 		leaq	(%rdi,%rcx,4), %rcx
 1774              	.LBB226:
 1775              	.LBB227:
 279:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 1776              		.loc 3 279 0
 1777 004f 89A9DC06 		movl	%ebp, 1756(%rcx)
 1777      0000
 280:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Devic
 1778              		.loc 3 280 0
 1779 0055 4489A12C 		movl	%r12d, 1836(%rcx)
 1779      070000
 281:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 1780              		.loc 3 281 0
 1781 005c C787D006 		movl	$0, 1744(%rdi)
 1781      00000000 
 1781      0000
 282:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 1782              		.loc 3 282 0
 1783 0066 C787D406 		movl	$0, 1748(%rdi)
 1783      00000000 
 1783      0000
 283:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 1784              		.loc 3 283 0
 1785 0070 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 1785      00
 1786              	.LVL218:
 1787              	.LBB228:
 1788              	.LBB229:
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 1789              		.loc 1 331 0
 1790 0075 660FEFED 		pxor	%xmm5, %xmm5
 1791 0079 4489E2   		movl	%r12d, %edx
 1792 007c 660FEFE4 		pxor	%xmm4, %xmm4
 1793 0080 89E8     		movl	%ebp, %eax
 1794 0082 F7D8     		negl	%eax
 1795              	.LVL219:
 1796 0084 F7DA     		negl	%edx
 1797              	.LVL220:
 1798 0086 4889DF   		movq	%rbx, %rdi
 1799 0089 F20F2AEA 		cvtsi2sd	%edx, %xmm5
 1800 008d F20F2AE0 		cvtsi2sd	%eax, %xmm4
 1801 0091 660FEFD2 		pxor	%xmm2, %xmm2
 1802 0095 F20F101D 		movsd	.LC13(%rip), %xmm3
 1802      00000000 
 1803 009d 660F28CA 		movapd	%xmm2, %xmm1
 1804 00a1 660F28C3 		movapd	%xmm3, %xmm0
 1805 00a5 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 1805      00
 1806              	.LVL221:
 1807              	.LBE229:
 1808              	.LBE228:
 285:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 1809              		.loc 3 285 0
 1810 00aa 8B83D806 		movl	1752(%rbx), %eax
 1810      0000
 1811 00b0 448B4C24 		movl	28(%rsp), %r9d
 1811      1C
 1812 00b5 83F813   		cmpl	$19, %eax
 1813 00b8 7776     		ja	.L80
 1814 00ba 83C001   		addl	$1, %eax
 1815 00bd 8983D806 		movl	%eax, 1752(%rbx)
 1815      0000
 1816              	.LVL222:
 1817              	.L81:
 1818              	.LBE227:
 1819              	.LBE226:
 316:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107              	.LCOLDB4:
 1820              		.loc 3 316 0
 1821 00c3 4157     		pushq	%r15
 1822              		.cfi_def_cfa_offset 104
 1823 00c5 4156     		pushq	%r14
 1824              		.cfi_def_cfa_offset 112
 1825 00c7 4589E8   		movl	%r13d, %r8d
 1826 00ca 8B4C2428 		movl	40(%rsp), %ecx
 1827 00ce 8B54241C 		movl	28(%rsp), %edx
 1828 00d2 4889DF   		movq	%rbx, %rdi
 1829 00d5 488B7424 		movq	32(%rsp), %rsi
 1829      20
 1830 00da E8000000 		call	_ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
 1830      00
 1831              	.LVL223:
 1832              	.LBB231:
 1833              	.LBB232:
 289:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  113:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void translate(int x, int y);
 1834              		.loc 3 289 0
 1835 00df 8B83D806 		movl	1752(%rbx), %eax
 1835      0000
 1836 00e5 5A       		popq	%rdx
 1837              		.cfi_def_cfa_offset 104
 1838 00e6 59       		popq	%rcx
 1839              		.cfi_def_cfa_offset 96
 1840 00e7 85C0     		testl	%eax, %eax
 1841 00e9 7409     		je	.L82
 1842 00eb 83E801   		subl	$1, %eax
 1843 00ee 8983D806 		movl	%eax, 1752(%rbx)
 1843      0000
 1844              	.L82:
 1845 00f4 488D0483 		leaq	(%rbx,%rax,4), %rax
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 1846              		.loc 3 292 0
 1847 00f8 4889DF   		movq	%rbx, %rdi
 290:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void untranslate();
 1848              		.loc 3 290 0
 1849 00fb 8B90DC06 		movl	1756(%rax), %edx
 1849      0000
 1850 0101 8993D006 		movl	%edx, 1744(%rbx)
 1850      0000
 291:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  115:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_GDI_Surface_();
 1851              		.loc 3 291 0
 1852 0107 8B802C07 		movl	1836(%rax), %eax
 1852      0000
 1853 010d 8983D406 		movl	%eax, 1748(%rbx)
 1853      0000
 1854              	.LBE232:
 1855              	.LBE231:
 318:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109              	.LHOTB4:
 1856              		.loc 3 318 0
 1857 0113 4883C428 		addq	$40, %rsp
 1858              		.cfi_remember_state
 1859              		.cfi_def_cfa_offset 56
 1860 0117 5B       		popq	%rbx
 1861              		.cfi_def_cfa_offset 48
 1862              	.LVL224:
 1863 0118 5D       		popq	%rbp
 1864              		.cfi_def_cfa_offset 40
 1865 0119 415C     		popq	%r12
 1866              		.cfi_def_cfa_offset 32
 1867 011b 415D     		popq	%r13
 1868              		.cfi_def_cfa_offset 24
 1869              	.LVL225:
 1870 011d 415E     		popq	%r14
 1871              		.cfi_def_cfa_offset 16
 1872 011f 415F     		popq	%r15
 1873              		.cfi_def_cfa_offset 8
 1874              	.LBB234:
 1875              	.LBB233:
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 1876              		.loc 3 292 0
 1877 0121 E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 1877      00
 1878              	.LVL226:
 1879 0126 662E0F1F 		.p2align 4,,10
 1879      84000000 
 1879      0000
 1880              		.p2align 3
 1881              	.L80:
 1882              		.cfi_restore_state
 1883 0130 44894C24 		movl	%r9d, 28(%rsp)
 1883      1C
 1884              	.LVL227:
 1885              	.LBE233:
 1886              	.LBE234:
 1887              	.LBB235:
 1888              	.LBB230:
 286:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 1889              		.loc 3 286 0
 1890 0135 488B3500 		movq	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE(%rip), %rsi
 1890      000000
 1891 013c BF000000 		movl	$.LC15, %edi
 1891      00
 1892 0141 31C0     		xorl	%eax, %eax
 1893 0143 FF150000 		call	*_ZN2Fl7warningE(%rip)
 1893      0000
 1894              	.LVL228:
 1895 0149 448B4C24 		movl	28(%rsp), %r9d
 1895      1C
 1896 014e E970FFFF 		jmp	.L81
 1896      FF
 1897              	.LBE230:
 1898              	.LBE235:
 1899              		.cfi_endproc
 1900              	.LFE536:
 1902              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Pixmapiiiiii,"axG",@pro
 1903              	.LCOLDE42:
 1904              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Pixmapiiiiii,"axG",@progbits,_ZN
 1905              	.LHOTE42:
 1906              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Bitmapiiiiii,"axG",@pro
 1907              		.align 2
 1908              	.LCOLDB43:
 1909              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Bitmapiiiiii,"axG",@progbits,_ZN
 1910              	.LHOTB43:
 1911              		.align 2
 1912              		.p2align 4,,15
 1913              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Bitmapiiiiii
 1915              	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Bitmapiiiiii:
 1916              	.LFB537:
 319:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110              		.align 2
 1917              		.loc 3 319 0
 1918              		.cfi_startproc
 1919              	.LVL229:
 1920 0000 4157     		pushq	%r15
 1921              		.cfi_def_cfa_offset 16
 1922              		.cfi_offset 15, -16
 1923 0002 4156     		pushq	%r14
 1924              		.cfi_def_cfa_offset 24
 1925              		.cfi_offset 14, -24
 1926 0004 4155     		pushq	%r13
 1927              		.cfi_def_cfa_offset 32
 1928              		.cfi_offset 13, -32
 1929 0006 4154     		pushq	%r12
 1930              		.cfi_def_cfa_offset 40
 1931              		.cfi_offset 12, -40
 1932 0008 4589C5   		movl	%r8d, %r13d
 1933 000b 55       		pushq	%rbp
 1934              		.cfi_def_cfa_offset 48
 1935              		.cfi_offset 6, -48
 1936 000c 53       		pushq	%rbx
 1937              		.cfi_def_cfa_offset 56
 1938              		.cfi_offset 3, -56
 1939 000d 4889FB   		movq	%rdi, %rbx
 1940 0010 4883EC28 		subq	$40, %rsp
 1941              		.cfi_def_cfa_offset 96
 320:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  111              		.p2align 4,,15
 1942              		.loc 3 320 0
 1943 0014 8BAFD006 		movl	1744(%rdi), %ebp
 1943      0000
 1944 001a 448BA7D4 		movl	1748(%rdi), %r12d
 1944      060000
 319:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110              		.align 2
 1945              		.loc 3 319 0
 1946 0021 44894C24 		movl	%r9d, 28(%rsp)
 1946      1C
 1947 0026 48897424 		movq	%rsi, 16(%rsp)
 1947      10
 1948 002b 448B7424 		movl	96(%rsp), %r14d
 1948      60
 1949 0030 448B7C24 		movl	104(%rsp), %r15d
 1949      68
 320:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  111              		.p2align 4,,15
 1950              		.loc 3 320 0
 1951 0035 8D441500 		leal	0(%rbp,%rdx), %eax
 1952 0039 8944240C 		movl	%eax, 12(%rsp)
 1953              	.LVL230:
 1954 003d 418D040C 		leal	(%r12,%rcx), %eax
 1955              	.LVL231:
 1956 0041 8B8FD806 		movl	1752(%rdi), %ecx
 1956      0000
 1957              	.LVL232:
 1958 0047 89442418 		movl	%eax, 24(%rsp)
 1959              	.LVL233:
 1960 004b 488D0C8F 		leaq	(%rdi,%rcx,4), %rcx
 1961              	.LBB242:
 1962              	.LBB243:
 279:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 1963              		.loc 3 279 0
 1964 004f 89A9DC06 		movl	%ebp, 1756(%rcx)
 1964      0000
 280:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Devic
 1965              		.loc 3 280 0
 1966 0055 4489A12C 		movl	%r12d, 1836(%rcx)
 1966      070000
 281:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 1967              		.loc 3 281 0
 1968 005c C787D006 		movl	$0, 1744(%rdi)
 1968      00000000 
 1968      0000
 282:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 1969              		.loc 3 282 0
 1970 0066 C787D406 		movl	$0, 1748(%rdi)
 1970      00000000 
 1970      0000
 283:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 1971              		.loc 3 283 0
 1972 0070 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 1972      00
 1973              	.LVL234:
 1974              	.LBB244:
 1975              	.LBB245:
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 1976              		.loc 1 331 0
 1977 0075 660FEFED 		pxor	%xmm5, %xmm5
 1978 0079 4489E2   		movl	%r12d, %edx
 1979 007c 660FEFE4 		pxor	%xmm4, %xmm4
 1980 0080 89E8     		movl	%ebp, %eax
 1981 0082 F7D8     		negl	%eax
 1982              	.LVL235:
 1983 0084 F7DA     		negl	%edx
 1984              	.LVL236:
 1985 0086 4889DF   		movq	%rbx, %rdi
 1986 0089 F20F2AEA 		cvtsi2sd	%edx, %xmm5
 1987 008d F20F2AE0 		cvtsi2sd	%eax, %xmm4
 1988 0091 660FEFD2 		pxor	%xmm2, %xmm2
 1989 0095 F20F101D 		movsd	.LC13(%rip), %xmm3
 1989      00000000 
 1990 009d 660F28CA 		movapd	%xmm2, %xmm1
 1991 00a1 660F28C3 		movapd	%xmm3, %xmm0
 1992 00a5 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 1992      00
 1993              	.LVL237:
 1994              	.LBE245:
 1995              	.LBE244:
 285:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 1996              		.loc 3 285 0
 1997 00aa 8B83D806 		movl	1752(%rbx), %eax
 1997      0000
 1998 00b0 448B4C24 		movl	28(%rsp), %r9d
 1998      1C
 1999 00b5 83F813   		cmpl	$19, %eax
 2000 00b8 7776     		ja	.L88
 2001 00ba 83C001   		addl	$1, %eax
 2002 00bd 8983D806 		movl	%eax, 1752(%rbx)
 2002      0000
 2003              	.LVL238:
 2004              	.L89:
 2005              	.LBE243:
 2006              	.LBE242:
 322:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114              	_ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv:
 2007              		.loc 3 322 0
 2008 00c3 4157     		pushq	%r15
 2009              		.cfi_def_cfa_offset 104
 2010 00c5 4156     		pushq	%r14
 2011              		.cfi_def_cfa_offset 112
 2012 00c7 4589E8   		movl	%r13d, %r8d
 2013 00ca 8B4C2428 		movl	40(%rsp), %ecx
 2014 00ce 8B54241C 		movl	28(%rsp), %edx
 2015 00d2 4889DF   		movq	%rbx, %rdi
 2016 00d5 488B7424 		movq	32(%rsp), %rsi
 2016      20
 2017 00da E8000000 		call	_ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 2017      00
 2018              	.LVL239:
 2019              	.LBB247:
 2020              	.LBB248:
 289:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  113:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void translate(int x, int y);
 2021              		.loc 3 289 0
 2022 00df 8B83D806 		movl	1752(%rbx), %eax
 2022      0000
 2023 00e5 5A       		popq	%rdx
 2024              		.cfi_def_cfa_offset 104
 2025 00e6 59       		popq	%rcx
 2026              		.cfi_def_cfa_offset 96
 2027 00e7 85C0     		testl	%eax, %eax
 2028 00e9 7409     		je	.L90
 2029 00eb 83E801   		subl	$1, %eax
 2030 00ee 8983D806 		movl	%eax, 1752(%rbx)
 2030      0000
 2031              	.L90:
 2032 00f4 488D0483 		leaq	(%rbx,%rax,4), %rax
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2033              		.loc 3 292 0
 2034 00f8 4889DF   		movq	%rbx, %rdi
 290:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void untranslate();
 2035              		.loc 3 290 0
 2036 00fb 8B90DC06 		movl	1756(%rax), %edx
 2036      0000
 2037 0101 8993D006 		movl	%edx, 1744(%rbx)
 2037      0000
 291:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  115:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_GDI_Surface_();
 2038              		.loc 3 291 0
 2039 0107 8B802C07 		movl	1836(%rax), %eax
 2039      0000
 2040 010d 8983D406 		movl	%eax, 1748(%rbx)
 2040      0000
 2041              	.LBE248:
 2042              	.LBE247:
 324:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116              		.file 3 "fltk-1.3.4-1/src/Fl_Copy_Surface.cxx"
 2043              		.loc 3 324 0
 2044 0113 4883C428 		addq	$40, %rsp
 2045              		.cfi_remember_state
 2046              		.cfi_def_cfa_offset 56
 2047 0117 5B       		popq	%rbx
 2048              		.cfi_def_cfa_offset 48
 2049              	.LVL240:
 2050 0118 5D       		popq	%rbp
 2051              		.cfi_def_cfa_offset 40
 2052 0119 415C     		popq	%r12
 2053              		.cfi_def_cfa_offset 32
 2054 011b 415D     		popq	%r13
 2055              		.cfi_def_cfa_offset 24
 2056              	.LVL241:
 2057 011d 415E     		popq	%r14
 2058              		.cfi_def_cfa_offset 16
 2059 011f 415F     		popq	%r15
 2060              		.cfi_def_cfa_offset 8
 2061              	.LBB250:
 2062              	.LBB249:
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2063              		.loc 3 292 0
 2064 0121 E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 2064      00
 2065              	.LVL242:
 2066 0126 662E0F1F 		.p2align 4,,10
 2066      84000000 
 2066      0000
 2067              		.p2align 3
 2068              	.L88:
 2069              		.cfi_restore_state
 2070 0130 44894C24 		movl	%r9d, 28(%rsp)
 2070      1C
 2071              	.LVL243:
 2072              	.LBE249:
 2073              	.LBE250:
 2074              	.LBB251:
 2075              	.LBB246:
 286:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 2076              		.loc 3 286 0
 2077 0135 488B3500 		movq	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE(%rip), %rsi
 2077      000000
 2078 013c BF000000 		movl	$.LC15, %edi
 2078      00
 2079 0141 31C0     		xorl	%eax, %eax
 2080 0143 FF150000 		call	*_ZN2Fl7warningE(%rip)
 2080      0000
 2081              	.LVL244:
 2082 0149 448B4C24 		movl	28(%rsp), %r9d
 2082      1C
 2083 014e E970FFFF 		jmp	.L89
 2083      FF
 2084              	.LBE246:
 2085              	.LBE251:
 2086              		.cfi_endproc
 2087              	.LFE537:
 2089              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Bitmapiiiiii,"axG",@pro
 2090              	.LCOLDE43:
 2091              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Bitmapiiiiii,"axG",@progbits,_ZN
 2092              	.LHOTE43:
 2093              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP12Fl_RGB_Imageiiiiii,"axG",
 2094              		.align 2
 2095              	.LCOLDB44:
 2096              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP12Fl_RGB_Imageiiiiii,"axG",@progbits
 2097              	.LHOTB44:
 2098              		.align 2
 2099              		.p2align 4,,15
 2100              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP12Fl_RGB_Imageiiiiii
 2102              	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP12Fl_RGB_Imageiiiiii:
 2103              	.LFB538:
 325:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1              		.file	"Fl_Copy_Surface.cxx"
 2104              		.loc 3 325 0
 2105              		.cfi_startproc
 2106              	.LVL245:
 2107 0000 4157     		pushq	%r15
 2108              		.cfi_def_cfa_offset 16
 2109              		.cfi_offset 15, -16
 2110 0002 4156     		pushq	%r14
 2111              		.cfi_def_cfa_offset 24
 2112              		.cfi_offset 14, -24
 2113 0004 4155     		pushq	%r13
 2114              		.cfi_def_cfa_offset 32
 2115              		.cfi_offset 13, -32
 2116 0006 4154     		pushq	%r12
 2117              		.cfi_def_cfa_offset 40
 2118              		.cfi_offset 12, -40
 2119 0008 4589C5   		movl	%r8d, %r13d
 2120 000b 55       		pushq	%rbp
 2121              		.cfi_def_cfa_offset 48
 2122              		.cfi_offset 6, -48
 2123 000c 53       		pushq	%rbx
 2124              		.cfi_def_cfa_offset 56
 2125              		.cfi_offset 3, -56
 2126 000d 4889FB   		movq	%rdi, %rbx
 2127 0010 4883EC28 		subq	$40, %rsp
 2128              		.cfi_def_cfa_offset 96
 326:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2              		.text
 2129              		.loc 3 326 0
 2130 0014 8BAFD006 		movl	1744(%rdi), %ebp
 2130      0000
 2131 001a 448BA7D4 		movl	1748(%rdi), %r12d
 2131      060000
 325:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1              		.file	"Fl_Copy_Surface.cxx"
 2132              		.loc 3 325 0
 2133 0021 44894C24 		movl	%r9d, 28(%rsp)
 2133      1C
 2134 0026 48897424 		movq	%rsi, 16(%rsp)
 2134      10
 2135 002b 448B7424 		movl	96(%rsp), %r14d
 2135      60
 2136 0030 448B7C24 		movl	104(%rsp), %r15d
 2136      68
 326:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2              		.text
 2137              		.loc 3 326 0
 2138 0035 8D441500 		leal	0(%rbp,%rdx), %eax
 2139 0039 8944240C 		movl	%eax, 12(%rsp)
 2140              	.LVL246:
 2141 003d 418D040C 		leal	(%r12,%rcx), %eax
 2142              	.LVL247:
 2143 0041 8B8FD806 		movl	1752(%rdi), %ecx
 2143      0000
 2144              	.LVL248:
 2145 0047 89442418 		movl	%eax, 24(%rsp)
 2146              	.LVL249:
 2147 004b 488D0C8F 		leaq	(%rdi,%rcx,4), %rcx
 2148              	.LBB258:
 2149              	.LBB259:
 279:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 2150              		.loc 3 279 0
 2151 004f 89A9DC06 		movl	%ebp, 1756(%rcx)
 2151      0000
 280:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Devic
 2152              		.loc 3 280 0
 2153 0055 4489A12C 		movl	%r12d, 1836(%rcx)
 2153      070000
 281:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 2154              		.loc 3 281 0
 2155 005c C787D006 		movl	$0, 1744(%rdi)
 2155      00000000 
 2155      0000
 282:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 2156              		.loc 3 282 0
 2157 0066 C787D406 		movl	$0, 1748(%rdi)
 2157      00000000 
 2157      0000
 283:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 2158              		.loc 3 283 0
 2159 0070 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 2159      00
 2160              	.LVL250:
 2161              	.LBB260:
 2162              	.LBB261:
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 2163              		.loc 1 331 0
 2164 0075 660FEFED 		pxor	%xmm5, %xmm5
 2165 0079 4489E2   		movl	%r12d, %edx
 2166 007c 660FEFE4 		pxor	%xmm4, %xmm4
 2167 0080 89E8     		movl	%ebp, %eax
 2168 0082 F7D8     		negl	%eax
 2169              	.LVL251:
 2170 0084 F7DA     		negl	%edx
 2171              	.LVL252:
 2172 0086 4889DF   		movq	%rbx, %rdi
 2173 0089 F20F2AEA 		cvtsi2sd	%edx, %xmm5
 2174 008d F20F2AE0 		cvtsi2sd	%eax, %xmm4
 2175 0091 660FEFD2 		pxor	%xmm2, %xmm2
 2176 0095 F20F101D 		movsd	.LC13(%rip), %xmm3
 2176      00000000 
 2177 009d 660F28CA 		movapd	%xmm2, %xmm1
 2178 00a1 660F28C3 		movapd	%xmm3, %xmm0
 2179 00a5 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 2179      00
 2180              	.LVL253:
 2181              	.LBE261:
 2182              	.LBE260:
 285:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 2183              		.loc 3 285 0
 2184 00aa 8B83D806 		movl	1752(%rbx), %eax
 2184      0000
 2185 00b0 448B4C24 		movl	28(%rsp), %r9d
 2185      1C
 2186 00b5 83F813   		cmpl	$19, %eax
 2187 00b8 7776     		ja	.L96
 2188 00ba 83C001   		addl	$1, %eax
 2189 00bd 8983D806 		movl	%eax, 1752(%rbx)
 2189      0000
 2190              	.LVL254:
 2191              	.L97:
 2192              	.LBE259:
 2193              	.LBE258:
 328:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    4:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    4              		.section	.text.unlikely._ZN9Fl_D
 2194              		.loc 3 328 0
 2195 00c3 4157     		pushq	%r15
 2196              		.cfi_def_cfa_offset 104
 2197 00c5 4156     		pushq	%r14
 2198              		.cfi_def_cfa_offset 112
 2199 00c7 4589E8   		movl	%r13d, %r8d
 2200 00ca 8B4C2428 		movl	40(%rsp), %ecx
 2201 00ce 8B54241C 		movl	28(%rsp), %edx
 2202 00d2 4889DF   		movq	%rbx, %rdi
 2203 00d5 488B7424 		movq	32(%rsp), %rsi
 2203      20
 2204 00da E8000000 		call	_ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 2204      00
 2205              	.LVL255:
 2206              	.LBB263:
 2207              	.LBB264:
 289:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  113:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void translate(int x, int y);
 2208              		.loc 3 289 0
 2209 00df 8B83D806 		movl	1752(%rbx), %eax
 2209      0000
 2210 00e5 5A       		popq	%rdx
 2211              		.cfi_def_cfa_offset 104
 2212 00e6 59       		popq	%rcx
 2213              		.cfi_def_cfa_offset 96
 2214 00e7 85C0     		testl	%eax, %eax
 2215 00e9 7409     		je	.L98
 2216 00eb 83E801   		subl	$1, %eax
 2217 00ee 8983D806 		movl	%eax, 1752(%rbx)
 2217      0000
 2218              	.L98:
 2219 00f4 488D0483 		leaq	(%rbx,%rax,4), %rax
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2220              		.loc 3 292 0
 2221 00f8 4889DF   		movq	%rbx, %rdi
 290:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void untranslate();
 2222              		.loc 3 290 0
 2223 00fb 8B90DC06 		movl	1756(%rax), %edx
 2223      0000
 2224 0101 8993D006 		movl	%edx, 1744(%rbx)
 2224      0000
 291:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  115:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_GDI_Surface_();
 2225              		.loc 3 291 0
 2226 0107 8B802C07 		movl	1836(%rax), %eax
 2226      0000
 2227 010d 8983D406 		movl	%eax, 1748(%rbx)
 2227      0000
 2228              	.LBE264:
 2229              	.LBE263:
 330:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    6:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    6              	.LCOLDB0:
 2230              		.loc 3 330 0
 2231 0113 4883C428 		addq	$40, %rsp
 2232              		.cfi_remember_state
 2233              		.cfi_def_cfa_offset 56
 2234 0117 5B       		popq	%rbx
 2235              		.cfi_def_cfa_offset 48
 2236              	.LVL256:
 2237 0118 5D       		popq	%rbp
 2238              		.cfi_def_cfa_offset 40
 2239 0119 415C     		popq	%r12
 2240              		.cfi_def_cfa_offset 32
 2241 011b 415D     		popq	%r13
 2242              		.cfi_def_cfa_offset 24
 2243              	.LVL257:
 2244 011d 415E     		popq	%r14
 2245              		.cfi_def_cfa_offset 16
 2246 011f 415F     		popq	%r15
 2247              		.cfi_def_cfa_offset 8
 2248              	.LBB266:
 2249              	.LBB265:
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2250              		.loc 3 292 0
 2251 0121 E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 2251      00
 2252              	.LVL258:
 2253 0126 662E0F1F 		.p2align 4,,10
 2253      84000000 
 2253      0000
 2254              		.p2align 3
 2255              	.L96:
 2256              		.cfi_restore_state
 2257 0130 44894C24 		movl	%r9d, 28(%rsp)
 2257      1C
 2258              	.LVL259:
 2259              	.LBE265:
 2260              	.LBE266:
 2261              	.LBB267:
 2262              	.LBB262:
 286:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 2263              		.loc 3 286 0
 2264 0135 488B3500 		movq	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE(%rip), %rsi
 2264      000000
 2265 013c BF000000 		movl	$.LC15, %edi
 2265      00
 2266 0141 31C0     		xorl	%eax, %eax
 2267 0143 FF150000 		call	*_ZN2Fl7warningE(%rip)
 2267      0000
 2268              	.LVL260:
 2269 0149 448B4C24 		movl	28(%rsp), %r9d
 2269      1C
 2270 014e E970FFFF 		jmp	.L97
 2270      FF
 2271              	.LBE262:
 2272              	.LBE267:
 2273              		.cfi_endproc
 2274              	.LFE538:
 2276              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP12Fl_RGB_Imageiiiiii,"axG",
 2277              	.LCOLDE44:
 2278              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP12Fl_RGB_Imageiiiiii,"axG",@progbits
 2279              	.LHOTE44:
 2280              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPKhiiiiii,"axG",@prog
 2281              		.align 2
 2282              	.LCOLDB45:
 2283              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPKhiiiiii,"axG",@progbits,_ZN3
 2284              	.LHOTB45:
 2285              		.align 2
 2286              		.p2align 4,,15
 2287              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPKhiiiiii
 2289              	_ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPKhiiiiii:
 2290              	.LFB539:
 331:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7              		.section	.text._ZN9Fl_Device10cl
 2291              		.loc 3 331 0
 2292              		.cfi_startproc
 2293              	.LVL261:
 2294 0000 4157     		pushq	%r15
 2295              		.cfi_def_cfa_offset 16
 2296              		.cfi_offset 15, -16
 2297 0002 4156     		pushq	%r14
 2298              		.cfi_def_cfa_offset 24
 2299              		.cfi_offset 14, -24
 2300 0004 4155     		pushq	%r13
 2301              		.cfi_def_cfa_offset 32
 2302              		.cfi_offset 13, -32
 2303 0006 4154     		pushq	%r12
 2304              		.cfi_def_cfa_offset 40
 2305              		.cfi_offset 12, -40
 2306 0008 4589C5   		movl	%r8d, %r13d
 2307 000b 55       		pushq	%rbp
 2308              		.cfi_def_cfa_offset 48
 2309              		.cfi_offset 6, -48
 2310 000c 53       		pushq	%rbx
 2311              		.cfi_def_cfa_offset 56
 2312              		.cfi_offset 3, -56
 2313 000d 4889FB   		movq	%rdi, %rbx
 2314 0010 4883EC28 		subq	$40, %rsp
 2315              		.cfi_def_cfa_offset 96
 332:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8              	.LHOTB0:
 2316              		.loc 3 332 0
 2317 0014 8BAFD006 		movl	1744(%rdi), %ebp
 2317      0000
 2318 001a 448BA7D4 		movl	1748(%rdi), %r12d
 2318      060000
 331:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7              		.section	.text._ZN9Fl_Device10cl
 2319              		.loc 3 331 0
 2320 0021 44894C24 		movl	%r9d, 28(%rsp)
 2320      1C
 2321 0026 48897424 		movq	%rsi, 16(%rsp)
 2321      10
 2322 002b 448B7424 		movl	96(%rsp), %r14d
 2322      60
 2323 0030 448B7C24 		movl	104(%rsp), %r15d
 2323      68
 332:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    8              	.LHOTB0:
 2324              		.loc 3 332 0
 2325 0035 8D441500 		leal	0(%rbp,%rdx), %eax
 2326 0039 8944240C 		movl	%eax, 12(%rsp)
 2327              	.LVL262:
 2328 003d 418D040C 		leal	(%r12,%rcx), %eax
 2329              	.LVL263:
 2330 0041 8B8FD806 		movl	1752(%rdi), %ecx
 2330      0000
 2331              	.LVL264:
 2332 0047 89442418 		movl	%eax, 24(%rsp)
 2333              	.LVL265:
 2334 004b 488D0C8F 		leaq	(%rdi,%rcx,4), %rcx
 2335              	.LBB274:
 2336              	.LBB275:
 279:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 2337              		.loc 3 279 0
 2338 004f 89A9DC06 		movl	%ebp, 1756(%rcx)
 2338      0000
 280:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Devic
 2339              		.loc 3 280 0
 2340 0055 4489A12C 		movl	%r12d, 1836(%rcx)
 2340      070000
 281:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 2341              		.loc 3 281 0
 2342 005c C787D006 		movl	$0, 1744(%rdi)
 2342      00000000 
 2342      0000
 282:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 2343              		.loc 3 282 0
 2344 0066 C787D406 		movl	$0, 1748(%rdi)
 2344      00000000 
 2344      0000
 283:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 2345              		.loc 3 283 0
 2346 0070 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 2346      00
 2347              	.LVL266:
 2348              	.LBB276:
 2349              	.LBB277:
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 2350              		.loc 1 331 0
 2351 0075 660FEFED 		pxor	%xmm5, %xmm5
 2352 0079 4489E2   		movl	%r12d, %edx
 2353 007c 660FEFE4 		pxor	%xmm4, %xmm4
 2354 0080 89E8     		movl	%ebp, %eax
 2355 0082 F7D8     		negl	%eax
 2356              	.LVL267:
 2357 0084 F7DA     		negl	%edx
 2358              	.LVL268:
 2359 0086 4889DF   		movq	%rbx, %rdi
 2360 0089 F20F2AEA 		cvtsi2sd	%edx, %xmm5
 2361 008d F20F2AE0 		cvtsi2sd	%eax, %xmm4
 2362 0091 660FEFD2 		pxor	%xmm2, %xmm2
 2363 0095 F20F101D 		movsd	.LC13(%rip), %xmm3
 2363      00000000 
 2364 009d 660F28CA 		movapd	%xmm2, %xmm1
 2365 00a1 660F28C3 		movapd	%xmm3, %xmm0
 2366 00a5 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 2366      00
 2367              	.LVL269:
 2368              	.LBE277:
 2369              	.LBE276:
 285:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 2370              		.loc 3 285 0
 2371 00aa 8B83D806 		movl	1752(%rbx), %eax
 2371      0000
 2372 00b0 448B4C24 		movl	28(%rsp), %r9d
 2372      1C
 2373 00b5 83F813   		cmpl	$19, %eax
 2374 00b8 7776     		ja	.L104
 2375 00ba 83C001   		addl	$1, %eax
 2376 00bd 8983D806 		movl	%eax, 1752(%rbx)
 2376      0000
 2377              	.LVL270:
 2378              	.L105:
 2379              	.LBE275:
 2380              	.LBE274:
 334:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   10:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   10              		.p2align 4,,15
 2381              		.loc 3 334 0
 2382 00c3 4157     		pushq	%r15
 2383              		.cfi_def_cfa_offset 104
 2384 00c5 4156     		pushq	%r14
 2385              		.cfi_def_cfa_offset 112
 2386 00c7 4589E8   		movl	%r13d, %r8d
 2387 00ca 8B4C2428 		movl	40(%rsp), %ecx
 2388 00ce 8B54241C 		movl	28(%rsp), %edx
 2389 00d2 4889DF   		movq	%rbx, %rdi
 2390 00d5 488B7424 		movq	32(%rsp), %rsi
 2390      20
 2391 00da E8000000 		call	_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii
 2391      00
 2392              	.LVL271:
 2393              	.LBB279:
 2394              	.LBB280:
 289:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  113:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void translate(int x, int y);
 2395              		.loc 3 289 0
 2396 00df 8B83D806 		movl	1752(%rbx), %eax
 2396      0000
 2397 00e5 5A       		popq	%rdx
 2398              		.cfi_def_cfa_offset 104
 2399 00e6 59       		popq	%rcx
 2400              		.cfi_def_cfa_offset 96
 2401 00e7 85C0     		testl	%eax, %eax
 2402 00e9 7409     		je	.L106
 2403 00eb 83E801   		subl	$1, %eax
 2404 00ee 8983D806 		movl	%eax, 1752(%rbx)
 2404      0000
 2405              	.L106:
 2406 00f4 488D0483 		leaq	(%rbx,%rax,4), %rax
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2407              		.loc 3 292 0
 2408 00f8 4889DF   		movq	%rbx, %rdi
 290:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void untranslate();
 2409              		.loc 3 290 0
 2410 00fb 8B90DC06 		movl	1756(%rax), %edx
 2410      0000
 2411 0101 8993D006 		movl	%edx, 1744(%rbx)
 2411      0000
 291:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  115:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_GDI_Surface_();
 2412              		.loc 3 291 0
 2413 0107 8B802C07 		movl	1836(%rax), %eax
 2413      0000
 2414 010d 8983D406 		movl	%eax, 1748(%rbx)
 2414      0000
 2415              	.LBE280:
 2416              	.LBE279:
 336:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   12:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   12              	.Ltext_cold0:
 2417              		.loc 3 336 0
 2418 0113 4883C428 		addq	$40, %rsp
 2419              		.cfi_remember_state
 2420              		.cfi_def_cfa_offset 56
 2421 0117 5B       		popq	%rbx
 2422              		.cfi_def_cfa_offset 48
 2423              	.LVL272:
 2424 0118 5D       		popq	%rbp
 2425              		.cfi_def_cfa_offset 40
 2426 0119 415C     		popq	%r12
 2427              		.cfi_def_cfa_offset 32
 2428 011b 415D     		popq	%r13
 2429              		.cfi_def_cfa_offset 24
 2430              	.LVL273:
 2431 011d 415E     		popq	%r14
 2432              		.cfi_def_cfa_offset 16
 2433 011f 415F     		popq	%r15
 2434              		.cfi_def_cfa_offset 8
 2435              	.LBB282:
 2436              	.LBB281:
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2437              		.loc 3 292 0
 2438 0121 E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 2438      00
 2439              	.LVL274:
 2440 0126 662E0F1F 		.p2align 4,,10
 2440      84000000 
 2440      0000
 2441              		.p2align 3
 2442              	.L104:
 2443              		.cfi_restore_state
 2444 0130 44894C24 		movl	%r9d, 28(%rsp)
 2444      1C
 2445              	.LVL275:
 2446              	.LBE281:
 2447              	.LBE282:
 2448              	.LBB283:
 2449              	.LBB278:
 286:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 2450              		.loc 3 286 0
 2451 0135 488B3500 		movq	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE(%rip), %rsi
 2451      000000
 2452 013c BF000000 		movl	$.LC15, %edi
 2452      00
 2453 0141 31C0     		xorl	%eax, %eax
 2454 0143 FF150000 		call	*_ZN2Fl7warningE(%rip)
 2454      0000
 2455              	.LVL276:
 2456 0149 448B4C24 		movl	28(%rsp), %r9d
 2456      1C
 2457 014e E970FFFF 		jmp	.L105
 2457      FF
 2458              	.LBE278:
 2459              	.LBE283:
 2460              		.cfi_endproc
 2461              	.LFE539:
 2463              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPKhiiiiii,"axG",@prog
 2464              	.LCOLDE45:
 2465              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPKhiiiiii,"axG",@progbits,_ZN3
 2466              	.LHOTE45:
 2467              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPFvPviiiPhES0_iiiii,"
 2468              		.align 2
 2469              	.LCOLDB46:
 2470              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPFvPviiiPhES0_iiiii,"axG",@pro
 2471              	.LHOTB46:
 2472              		.align 2
 2473              		.p2align 4,,15
 2474              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPFvPviiiPhES0_iiiii
 2476              	_ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPFvPviiiPhES0_iiiii:
 2477              	.LFB540:
 337:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13              		.section	.text._ZN9Fl_Device10cl
 2478              		.loc 3 337 0
 2479              		.cfi_startproc
 2480              	.LVL277:
 2481 0000 4157     		pushq	%r15
 2482              		.cfi_def_cfa_offset 16
 2483              		.cfi_offset 15, -16
 2484 0002 4156     		pushq	%r14
 2485              		.cfi_def_cfa_offset 24
 2486              		.cfi_offset 14, -24
 2487 0004 4155     		pushq	%r13
 2488              		.cfi_def_cfa_offset 32
 2489              		.cfi_offset 13, -32
 2490 0006 4154     		pushq	%r12
 2491              		.cfi_def_cfa_offset 40
 2492              		.cfi_offset 12, -40
 2493 0008 4989D5   		movq	%rdx, %r13
 2494 000b 55       		pushq	%rbp
 2495              		.cfi_def_cfa_offset 48
 2496              		.cfi_offset 6, -48
 2497 000c 53       		pushq	%rbx
 2498              		.cfi_def_cfa_offset 56
 2499              		.cfi_offset 3, -56
 2500 000d 4889FB   		movq	%rdi, %rbx
 2501 0010 4883EC28 		subq	$40, %rsp
 2502              		.cfi_def_cfa_offset 96
 338:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   14:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   14              		.weak	_ZN9Fl_Device10class_nameE
 2503              		.loc 3 338 0
 2504 0014 8BAFD006 		movl	1744(%rdi), %ebp
 2504      0000
 2505 001a 448BA7D4 		movl	1748(%rdi), %r12d
 2505      060000
 337:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   13              		.section	.text._ZN9Fl_Device10cl
 2506              		.loc 3 337 0
 2507 0021 44894C24 		movl	%r9d, 28(%rsp)
 2507      1C
 2508 0026 48897424 		movq	%rsi, 16(%rsp)
 2508      10
 2509 002b 448B7424 		movl	96(%rsp), %r14d
 2509      60
 2510 0030 448B7C24 		movl	104(%rsp), %r15d
 2510      68
 338:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   14:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   14              		.weak	_ZN9Fl_Device10class_nameE
 2511              		.loc 3 338 0
 2512 0035 8D440D00 		leal	0(%rbp,%rcx), %eax
 2513 0039 8B8FD806 		movl	1752(%rdi), %ecx
 2513      0000
 2514              	.LVL278:
 2515 003f 4501E0   		addl	%r12d, %r8d
 2516              	.LVL279:
 2517 0042 44894424 		movl	%r8d, 24(%rsp)
 2517      18
 2518 0047 8944240C 		movl	%eax, 12(%rsp)
 2519              	.LVL280:
 2520 004b 488D0C8F 		leaq	(%rdi,%rcx,4), %rcx
 2521              	.LBB290:
 2522              	.LBB291:
 279:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 2523              		.loc 3 279 0
 2524 004f 89A9DC06 		movl	%ebp, 1756(%rcx)
 2524      0000
 280:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Devic
 2525              		.loc 3 280 0
 2526 0055 4489A12C 		movl	%r12d, 1836(%rcx)
 2526      070000
 281:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 2527              		.loc 3 281 0
 2528 005c C787D006 		movl	$0, 1744(%rdi)
 2528      00000000 
 2528      0000
 282:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 2529              		.loc 3 282 0
 2530 0066 C787D406 		movl	$0, 1748(%rdi)
 2530      00000000 
 2530      0000
 283:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 2531              		.loc 3 283 0
 2532 0070 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 2532      00
 2533              	.LVL281:
 2534              	.LBB292:
 2535              	.LBB293:
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 2536              		.loc 1 331 0
 2537 0075 660FEFED 		pxor	%xmm5, %xmm5
 2538 0079 4489E2   		movl	%r12d, %edx
 2539 007c 660FEFE4 		pxor	%xmm4, %xmm4
 2540 0080 89E8     		movl	%ebp, %eax
 2541 0082 F7D8     		negl	%eax
 2542              	.LVL282:
 2543 0084 F7DA     		negl	%edx
 2544              	.LVL283:
 2545 0086 4889DF   		movq	%rbx, %rdi
 2546 0089 F20F2AEA 		cvtsi2sd	%edx, %xmm5
 2547 008d F20F2AE0 		cvtsi2sd	%eax, %xmm4
 2548 0091 660FEFD2 		pxor	%xmm2, %xmm2
 2549 0095 F20F101D 		movsd	.LC13(%rip), %xmm3
 2549      00000000 
 2550 009d 660F28CA 		movapd	%xmm2, %xmm1
 2551 00a1 660F28C3 		movapd	%xmm3, %xmm0
 2552 00a5 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 2552      00
 2553              	.LVL284:
 2554              	.LBE293:
 2555              	.LBE292:
 285:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 2556              		.loc 3 285 0
 2557 00aa 8B83D806 		movl	1752(%rbx), %eax
 2557      0000
 2558 00b0 448B4424 		movl	24(%rsp), %r8d
 2558      18
 2559 00b5 448B4C24 		movl	28(%rsp), %r9d
 2559      1C
 2560 00ba 83F813   		cmpl	$19, %eax
 2561 00bd 7771     		ja	.L112
 2562 00bf 83C001   		addl	$1, %eax
 2563 00c2 8983D806 		movl	%eax, 1752(%rbx)
 2563      0000
 2564              	.LVL285:
 2565              	.L113:
 2566              	.LBE291:
 2567              	.LBE290:
 340:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   16:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   17              	.LFB240:
 2568              		.loc 3 340 0
 2569 00c8 4157     		pushq	%r15
 2570              		.cfi_def_cfa_offset 104
 2571 00ca 4156     		pushq	%r14
 2572              		.cfi_def_cfa_offset 112
 2573 00cc 4C89EA   		movq	%r13, %rdx
 2574 00cf 8B4C241C 		movl	28(%rsp), %ecx
 2575 00d3 488B7424 		movq	32(%rsp), %rsi
 2575      20
 2576 00d8 4889DF   		movq	%rbx, %rdi
 2577 00db E8000000 		call	_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 2577      00
 2578              	.LVL286:
 2579              	.LBB295:
 2580              	.LBB296:
 289:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  113:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void translate(int x, int y);
 2581              		.loc 3 289 0
 2582 00e0 8B83D806 		movl	1752(%rbx), %eax
 2582      0000
 2583 00e6 5A       		popq	%rdx
 2584              		.cfi_def_cfa_offset 104
 2585 00e7 59       		popq	%rcx
 2586              		.cfi_def_cfa_offset 96
 2587 00e8 85C0     		testl	%eax, %eax
 2588 00ea 7409     		je	.L114
 2589 00ec 83E801   		subl	$1, %eax
 2590 00ef 8983D806 		movl	%eax, 1752(%rbx)
 2590      0000
 2591              	.L114:
 2592 00f5 488D0483 		leaq	(%rbx,%rax,4), %rax
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2593              		.loc 3 292 0
 2594 00f9 4889DF   		movq	%rbx, %rdi
 290:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void untranslate();
 2595              		.loc 3 290 0
 2596 00fc 8B90DC06 		movl	1756(%rax), %edx
 2596      0000
 2597 0102 8993D006 		movl	%edx, 1744(%rbx)
 2597      0000
 291:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  115:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_GDI_Surface_();
 2598              		.loc 3 291 0
 2599 0108 8B802C07 		movl	1836(%rax), %eax
 2599      0000
 2600 010e 8983D406 		movl	%eax, 1748(%rbx)
 2600      0000
 2601              	.LBE296:
 2602              	.LBE295:
 342:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   18:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    1:fltk-1.3.4-1/FL/Fl_Device.H **** //
 2603              		.loc 3 342 0
 2604 0114 4883C428 		addq	$40, %rsp
 2605              		.cfi_remember_state
 2606              		.cfi_def_cfa_offset 56
 2607 0118 5B       		popq	%rbx
 2608              		.cfi_def_cfa_offset 48
 2609              	.LVL287:
 2610 0119 5D       		popq	%rbp
 2611              		.cfi_def_cfa_offset 40
 2612 011a 415C     		popq	%r12
 2613              		.cfi_def_cfa_offset 32
 2614              	.LVL288:
 2615 011c 415D     		popq	%r13
 2616              		.cfi_def_cfa_offset 24
 2617              	.LVL289:
 2618 011e 415E     		popq	%r14
 2619              		.cfi_def_cfa_offset 16
 2620 0120 415F     		popq	%r15
 2621              		.cfi_def_cfa_offset 8
 2622              	.LBB298:
 2623              	.LBB297:
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2624              		.loc 3 292 0
 2625 0122 E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 2625      00
 2626              	.LVL290:
 2627 0127 660F1F84 		.p2align 4,,10
 2627      00000000 
 2627      00
 2628              		.p2align 3
 2629              	.L112:
 2630              		.cfi_restore_state
 2631 0130 44894C24 		movl	%r9d, 28(%rsp)
 2631      1C
 2632              	.LVL291:
 2633 0135 44894424 		movl	%r8d, 24(%rsp)
 2633      18
 2634              	.LVL292:
 2635              	.LBE297:
 2636              	.LBE298:
 2637              	.LBB299:
 2638              	.LBB294:
 286:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 2639              		.loc 3 286 0
 2640 013a BF000000 		movl	$.LC15, %edi
 2640      00
 2641 013f 488B3500 		movq	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE(%rip), %rsi
 2641      000000
 2642 0146 31C0     		xorl	%eax, %eax
 2643 0148 FF150000 		call	*_ZN2Fl7warningE(%rip)
 2643      0000
 2644              	.LVL293:
 2645 014e 448B4C24 		movl	28(%rsp), %r9d
 2645      1C
 2646 0153 448B4424 		movl	24(%rsp), %r8d
 2646      18
 2647 0158 E96BFFFF 		jmp	.L113
 2647      FF
 2648              	.LBE294:
 2649              	.LBE299:
 2650              		.cfi_endproc
 2651              	.LFE540:
 2653              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPFvPviiiPhES0_iiiii,"
 2654              	.LCOLDE46:
 2655              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPFvPviiiPhES0_iiiii,"axG",@pro
 2656              	.LHOTE46:
 2657              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPKhiiiiii,"axG",
 2658              		.align 2
 2659              	.LCOLDB47:
 2660              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPKhiiiiii,"axG",@progbits
 2661              	.LHOTB47:
 2662              		.align 2
 2663              		.p2align 4,,15
 2664              		.weak	_ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPKhiiiiii
 2666              	_ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPKhiiiiii:
 2667              	.LFB541:
 343:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   19:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_De
 2668              		.loc 3 343 0
 2669              		.cfi_startproc
 2670              	.LVL294:
 2671 0000 4157     		pushq	%r15
 2672              		.cfi_def_cfa_offset 16
 2673              		.cfi_offset 15, -16
 2674 0002 4156     		pushq	%r14
 2675              		.cfi_def_cfa_offset 24
 2676              		.cfi_offset 14, -24
 2677 0004 4155     		pushq	%r13
 2678              		.cfi_def_cfa_offset 32
 2679              		.cfi_offset 13, -32
 2680 0006 4154     		pushq	%r12
 2681              		.cfi_def_cfa_offset 40
 2682              		.cfi_offset 12, -40
 2683 0008 4589C5   		movl	%r8d, %r13d
 2684 000b 55       		pushq	%rbp
 2685              		.cfi_def_cfa_offset 48
 2686              		.cfi_offset 6, -48
 2687 000c 53       		pushq	%rbx
 2688              		.cfi_def_cfa_offset 56
 2689              		.cfi_offset 3, -56
 2690 000d 4889FB   		movq	%rdi, %rbx
 2691 0010 4883EC28 		subq	$40, %rsp
 2692              		.cfi_def_cfa_offset 96
 344:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   20:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    3:fltk-1.3.4-1/FL/Fl_Device.H **** //
 2693              		.loc 3 344 0
 2694 0014 8BAFD006 		movl	1744(%rdi), %ebp
 2694      0000
 2695 001a 448BA7D4 		movl	1748(%rdi), %r12d
 2695      060000
 343:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   19:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_De
 2696              		.loc 3 343 0
 2697 0021 44894C24 		movl	%r9d, 28(%rsp)
 2697      1C
 2698 0026 48897424 		movq	%rsi, 16(%rsp)
 2698      10
 2699 002b 448B7424 		movl	96(%rsp), %r14d
 2699      60
 2700 0030 448B7C24 		movl	104(%rsp), %r15d
 2700      68
 344:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   20:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    3:fltk-1.3.4-1/FL/Fl_Device.H **** //
 2701              		.loc 3 344 0
 2702 0035 8D441500 		leal	0(%rbp,%rdx), %eax
 2703 0039 8944240C 		movl	%eax, 12(%rsp)
 2704              	.LVL295:
 2705 003d 418D040C 		leal	(%r12,%rcx), %eax
 2706              	.LVL296:
 2707 0041 8B8FD806 		movl	1752(%rdi), %ecx
 2707      0000
 2708              	.LVL297:
 2709 0047 89442418 		movl	%eax, 24(%rsp)
 2710              	.LVL298:
 2711 004b 488D0C8F 		leaq	(%rdi,%rcx,4), %rcx
 2712              	.LBB306:
 2713              	.LBB307:
 279:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  103:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** /* Win class to implement translate()/untranslate() */
 2714              		.loc 3 279 0
 2715 004f 89A9DC06 		movl	%ebp, 1756(%rcx)
 2715      0000
 280:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  104:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** class FL_EXPORT Fl_GDI_Surface_ : public Fl_Paged_Devic
 2716              		.loc 3 280 0
 2717 0055 4489A12C 		movl	%r12d, 1836(%rcx)
 2717      070000
 281:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  105:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int width;
 2718              		.loc 3 281 0
 2719 005c C787D006 		movl	$0, 1744(%rdi)
 2719      00000000 
 2719      0000
 282:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  106:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int height;
 2720              		.loc 3 282 0
 2721 0066 C787D406 		movl	$0, 1748(%rdi)
 2721      00000000 
 2721      0000
 283:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  107:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   unsigned depth;
 2722              		.loc 3 283 0
 2723 0070 E8000000 		call	_ZN18Fl_Graphics_Driver11push_matrixEv
 2723      00
 2724              	.LVL299:
 2725              	.LBB308:
 2726              	.LBB309:
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 2727              		.loc 1 331 0
 2728 0075 660FEFED 		pxor	%xmm5, %xmm5
 2729 0079 4489E2   		movl	%r12d, %edx
 2730 007c 660FEFE4 		pxor	%xmm4, %xmm4
 2731 0080 89E8     		movl	%ebp, %eax
 2732 0082 F7D8     		negl	%eax
 2733              	.LVL300:
 2734 0084 F7DA     		negl	%edx
 2735              	.LVL301:
 2736 0086 4889DF   		movq	%rbx, %rdi
 2737 0089 F20F2AEA 		cvtsi2sd	%edx, %xmm5
 2738 008d F20F2AE0 		cvtsi2sd	%eax, %xmm4
 2739 0091 660FEFD2 		pxor	%xmm2, %xmm2
 2740 0095 F20F101D 		movsd	.LC13(%rip), %xmm3
 2740      00000000 
 2741 009d 660F28CA 		movapd	%xmm2, %xmm1
 2742 00a1 660F28C3 		movapd	%xmm3, %xmm0
 2743 00a5 E8000000 		call	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 2743      00
 2744              	.LVL302:
 2745              	.LBE309:
 2746              	.LBE308:
 285:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  109:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** public:
 2747              		.loc 3 285 0
 2748 00aa 8B83D806 		movl	1752(%rbx), %eax
 2748      0000
 2749 00b0 448B4C24 		movl	28(%rsp), %r9d
 2749      1C
 2750 00b5 83F813   		cmpl	$19, %eax
 2751 00b8 7776     		ja	.L120
 2752 00ba 83C001   		addl	$1, %eax
 2753 00bd 8983D806 		movl	%eax, 1752(%rbx)
 2753      0000
 2754              	.LVL303:
 2755              	.L121:
 2756              	.LBE307:
 2757              	.LBE306:
 346:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   22:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fas
 2758              		.loc 3 346 0
 2759 00c3 4157     		pushq	%r15
 2760              		.cfi_def_cfa_offset 104
 2761 00c5 4156     		pushq	%r14
 2762              		.cfi_def_cfa_offset 112
 2763 00c7 4589E8   		movl	%r13d, %r8d
 2764 00ca 8B4C2428 		movl	40(%rsp), %ecx
 2765 00ce 8B54241C 		movl	28(%rsp), %edx
 2766 00d2 4889DF   		movq	%rbx, %rdi
 2767 00d5 488B7424 		movq	32(%rsp), %rsi
 2767      20
 2768 00da E8000000 		call	_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii
 2768      00
 2769              	.LVL304:
 2770              	.LBB311:
 2771              	.LBB312:
 289:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  113:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void translate(int x, int y);
 2772              		.loc 3 289 0
 2773 00df 8B83D806 		movl	1752(%rbx), %eax
 2773      0000
 2774 00e5 5A       		popq	%rdx
 2775              		.cfi_def_cfa_offset 104
 2776 00e6 59       		popq	%rcx
 2777              		.cfi_def_cfa_offset 96
 2778 00e7 85C0     		testl	%eax, %eax
 2779 00e9 7409     		je	.L122
 2780 00eb 83E801   		subl	$1, %eax
 2781 00ee 8983D806 		movl	%eax, 1752(%rbx)
 2781      0000
 2782              	.L122:
 2783 00f4 488D0483 		leaq	(%rbx,%rax,4), %rax
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2784              		.loc 3 292 0
 2785 00f8 4889DF   		movq	%rbx, %rdi
 290:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  114:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual void untranslate();
 2786              		.loc 3 290 0
 2787 00fb 8B90DC06 		movl	1756(%rax), %edx
 2787      0000
 2788 0101 8993D006 		movl	%edx, 1744(%rbx)
 2788      0000
 291:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  115:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_GDI_Surface_();
 2789              		.loc 3 291 0
 2790 0107 8B802C07 		movl	1836(%rax), %eax
 2790      0000
 2791 010d 8983D406 		movl	%eax, 1748(%rbx)
 2791      0000
 2792              	.LBE312:
 2793              	.LBE311:
 348:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   24:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2
 2794              		.loc 3 348 0
 2795 0113 4883C428 		addq	$40, %rsp
 2796              		.cfi_remember_state
 2797              		.cfi_def_cfa_offset 56
 2798 0117 5B       		popq	%rbx
 2799              		.cfi_def_cfa_offset 48
 2800              	.LVL305:
 2801 0118 5D       		popq	%rbp
 2802              		.cfi_def_cfa_offset 40
 2803 0119 415C     		popq	%r12
 2804              		.cfi_def_cfa_offset 32
 2805 011b 415D     		popq	%r13
 2806              		.cfi_def_cfa_offset 24
 2807              	.LVL306:
 2808 011d 415E     		popq	%r14
 2809              		.cfi_def_cfa_offset 16
 2810 011f 415F     		popq	%r15
 2811              		.cfi_def_cfa_offset 8
 2812              	.LBB314:
 2813              	.LBB313:
 292:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  116:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2814              		.loc 3 292 0
 2815 0121 E9000000 		jmp	_ZN18Fl_Graphics_Driver10pop_matrixEv
 2815      00
 2816              	.LVL307:
 2817 0126 662E0F1F 		.p2align 4,,10
 2817      84000000 
 2817      0000
 2818              		.p2align 3
 2819              	.L120:
 2820              		.cfi_restore_state
 2821 0130 44894C24 		movl	%r9d, 28(%rsp)
 2821      1C
 2822              	.LVL308:
 2823              	.LBE313:
 2824              	.LBE314:
 2825              	.LBB315:
 2826              	.LBB310:
 286:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****  110:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   static const char *class_id;
 2827              		.loc 3 286 0
 2828 0135 488B3500 		movq	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE(%rip), %rsi
 2828      000000
 2829 013c BF000000 		movl	$.LC15, %edi
 2829      00
 2830 0141 31C0     		xorl	%eax, %eax
 2831 0143 FF150000 		call	*_ZN2Fl7warningE(%rip)
 2831      0000
 2832              	.LVL309:
 2833 0149 448B4C24 		movl	28(%rsp), %r9d
 2833      1C
 2834 014e E970FFFF 		jmp	.L121
 2834      FF
 2835              	.LBE310:
 2836              	.LBE315:
 2837              		.cfi_endproc
 2838              	.LFE541:
 2840              		.section	.text.unlikely._ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPKhiiiiii,"axG",
 2841              	.LCOLDE47:
 2842              		.section	.text._ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPKhiiiiii,"axG",@progbits
 2843              	.LHOTE47:
 2844              		.section	.text.unlikely._ZN15Fl_Copy_Surface4drawEP9Fl_Widgetii,"ax",@progbits
 2845              		.align 2
 2846              	.LCOLDB48:
 2847              		.section	.text._ZN15Fl_Copy_Surface4drawEP9Fl_Widgetii,"ax",@progbits
 2848              	.LHOTB48:
 2849              		.align 2
 2850              		.p2align 4,,15
 2851              		.globl	_ZN15Fl_Copy_Surface4drawEP9Fl_Widgetii
 2853              	_ZN15Fl_Copy_Surface4drawEP9Fl_Widgetii:
 2854              	.LFB503:
 158:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    5:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** //
 2855              		.loc 3 158 0
 2856              		.cfi_startproc
 2857              	.LVL310:
 159:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****    6:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** // Copyright 1998-2014 by Bill Spitzak and others.
 2858              		.loc 3 159 0
 2859 0000 488B7F18 		movq	24(%rdi), %rdi
 2860              	.LVL311:
 2861 0004 488B07   		movq	(%rdi), %rax
 2862 0007 FF6070   		jmp	*112(%rax)
 2863              	.LVL312:
 2864              		.cfi_endproc
 2865              	.LFE503:
 2867              		.section	.text.unlikely._ZN15Fl_Copy_Surface4drawEP9Fl_Widgetii
 2868              	.LCOLDE48:
 2869              		.section	.text._ZN15Fl_Copy_Surface4drawEP9Fl_Widgetii
 2870              	.LHOTE48:
 2871              		.section	.text.unlikely._ZN15Fl_Copy_Surface21draw_decorated_windowEP9Fl_Windowii,"ax",@progbits
 2872              		.align 2
 2873              	.LCOLDB49:
 2874              		.section	.text._ZN15Fl_Copy_Surface21draw_decorated_windowEP9Fl_Windowii,"ax",@progbits
 2875              	.LHOTB49:
 2876              		.align 2
 2877              		.p2align 4,,15
 2878              		.globl	_ZN15Fl_Copy_Surface21draw_decorated_windowEP9Fl_Windowii
 2880              	_ZN15Fl_Copy_Surface21draw_decorated_windowEP9Fl_Windowii:
 2881              	.LFB505:
 257:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   81:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int w() { return width; }
 2882              		.loc 3 257 0
 2883              		.cfi_startproc
 2884              	.LVL313:
 257:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   81:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   int w() { return width; }
 2885              		.loc 3 257 0
 2886 0000 4989F8   		movq	%rdi, %r8
 258:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   82:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   /** Returns the pixel height of the copy surface */
 2887              		.loc 3 258 0
 2888 0003 488B7F18 		movq	24(%rdi), %rdi
 2889              	.LVL314:
 2890 0007 E9000000 		jmp	_ZN15Fl_Paged_Device21draw_decorated_windowEP9Fl_WindowiiP17Fl_Surface_Device
 2890      00
 2891              	.LVL315:
 2892              		.cfi_endproc
 2893              	.LFE505:
 2895              		.section	.text.unlikely._ZN15Fl_Copy_Surface21draw_decorated_windowEP9Fl_Windowii
 2896              	.LCOLDE49:
 2897              		.section	.text._ZN15Fl_Copy_Surface21draw_decorated_windowEP9Fl_Windowii
 2898              	.LHOTE49:
 2899              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_C2Ev,"ax",@progbits
 2900              		.align 2
 2901              	.LCOLDB50:
 2902              		.section	.text._ZN16Fl_Xlib_Surface_C2Ev,"ax",@progbits
 2903              	.LHOTB50:
 2904              		.align 2
 2905              		.p2align 4,,15
 2906              		.globl	_ZN16Fl_Xlib_Surface_C2Ev
 2908              	_ZN16Fl_Xlib_Surface_C2Ev:
 2909              	.LFB557:
 390:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   66:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (
 2910              		.loc 3 390 0
 2911              		.cfi_startproc
 2912              	.LVL316:
 2913 0000 55       		pushq	%rbp
 2914              		.cfi_def_cfa_offset 16
 2915              		.cfi_offset 6, -16
 2916 0001 53       		pushq	%rbx
 2917              		.cfi_def_cfa_offset 24
 2918              		.cfi_offset 3, -24
 2919 0002 4889FD   		movq	%rdi, %rbp
 2920 0005 4883EC08 		subq	$8, %rsp
 2921              		.cfi_def_cfa_offset 32
 2922              	.LBB316:
 2923              	.LBB317:
 2924              	.LBB318:
 2925              	.LBB319:
 2926              	.LBB320:
 563:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 2927              		.loc 1 563 0
 2928 0009 48C74708 		movq	$0, 8(%rdi)
 2928      00000000 
 2929              	.LVL317:
 2930              	.LBE320:
 2931              	.LBE319:
 2932              		.file 5 "fltk-1.3.4-1/FL/Fl_Paged_Device.H"
   1:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
   2:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // "$Id: Fl_Paged_Device.H 11094 2016-01-31 02:49:56Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
   4:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // Printing support for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
   6:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // Copyright 2010-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
   8:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
  12:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
  14:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
  16:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** //
  18:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  19:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** /** \file Fl_Paged_Device.H 
  20:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  \brief declaration of class Fl_Paged_Device.
  21:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  */
  22:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  23:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #ifndef Fl_Paged_Device_H
  24:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #define Fl_Paged_Device_H
  25:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  26:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #include <FL/Fl_Device.H>
  27:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #include <FL/Fl_Window.H>
  28:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  29:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** /** \brief Number of elements in enum Page_Format */
  30:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #define NO_PAGE_FORMATS 30 /* MSVC6 compilation fix */
  31:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  32:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** /**
  33:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  \brief Represents page-structured drawing surfaces.
  34:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  *
  35:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  This class has no public constructor: don't instantiate it; use Fl_Printer 
  36:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  or Fl_PostScript_File_Device instead.
  37:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  */
  38:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** class FL_EXPORT Fl_Paged_Device : public Fl_Surface_Device {
  39:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #ifndef __APPLE__
  40:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   friend class Fl_Copy_Surface;
  41:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   friend class Fl_Image_Surface;
  42:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   void draw_decorated_window(Fl_Window *win, int x_offset, int y_offset, Fl_Surface_Device *toset);
  43:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** #endif
  44:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** public:
  45:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /**
  46:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    \brief Possible page formats.
  47:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    
  48:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    All paper formats with pre-defined width and height.
  49:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    */
  50:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   enum Page_Format {
  51:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A0 = 0, /**<  A0 format */
  52:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A1,
  53:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A2,
  54:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A3,
  55:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A4, /**<  A4 format */
  56:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A5,
  57:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A6,
  58:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A7,
  59:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A8,
  60:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     A9,
  61:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B0,
  62:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B1,
  63:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B2,
  64:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B3,
  65:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B4,
  66:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B5,
  67:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B6,
  68:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B7,
  69:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B8,
  70:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B9,
  71:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     B10,
  72:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     C5E,
  73:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     DLE,
  74:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     EXECUTIVE,
  75:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     FOLIO,
  76:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     LEDGER,
  77:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     LEGAL,
  78:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     LETTER, /**<  Letter format */
  79:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     TABLOID,
  80:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     ENVELOPE,
  81:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     MEDIA = 0x1000
  82:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   };
  83:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /**
  84:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    \brief Possible page layouts.
  85:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    */
  86:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   enum Page_Layout {
  87:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     PORTRAIT = 0,  /**< Portrait orientation */
  88:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     LANDSCAPE = 0x100,   /**< Landscape orientation */
  89:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     REVERSED = 0x200,  /**< Reversed orientation */
  90:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     ORIENTATION = 0x300 /**<  orientation */
  91:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   };
  92:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** 
  93:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief width, height and name of a page format
  94:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****  */
  95:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   typedef struct {
  96:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     /** \brief width in points */
  97:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     int width; 
  98:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     /** \brief height in points */
  99:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     int height; 
 100:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     /** \brief format name */
 101:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****     const char *name; 
 102:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   } page_format;
 103:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief width, height and name of all elements of the enum \ref Page_Format.
 104:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****    */
 105:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   static const page_format page_formats[NO_PAGE_FORMATS];  
 106:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** private:
 107:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   void traverse(Fl_Widget *widget); // finds subwindows of widget and prints them
 108:fltk-1.3.4-1/FL/Fl_Paged_Device.H **** protected:
 109:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief horizontal offset to the origin of graphics coordinates */
 110:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   int x_offset;
 111:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief vertical offset to the origin of graphics coordinates */
 112:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   int y_offset;
 113:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   /** \brief The constructor */
 114:fltk-1.3.4-1/FL/Fl_Paged_Device.H ****   Fl_Paged_Device() : Fl_Surface_Device(NULL), x_offset(0), y_offset(0) {};
 2933              		.loc 5 114 0
 2934 0011 C7471000 		movl	$0, 16(%rdi)
 2934      000000
 2935 0018 C7471400 		movl	$0, 20(%rdi)
 2935      000000
 2936              	.LVL318:
 2937              	.LBE318:
 2938              	.LBE317:
 390:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   66:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (
 2939              		.loc 3 390 0
 2940 001f 48C70700 		movq	$_ZTV16Fl_Xlib_Surface_+16, (%rdi)
 2940      000000
 391:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   67:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   50:fltk-1.3.4-1/FL/Fl_Device.H **** 
 2941              		.loc 3 391 0
 2942 0026 BF800700 		movl	$1920, %edi
 2942      00
 2943              	.LVL319:
 2944 002b E8000000 		call	_Znwm
 2944      00
 2945              	.LVL320:
 2946 0030 4889C3   		movq	%rax, %rbx
 2947              	.LVL321:
 2948              	.LBB321:
 2949              	.LBB322:
 2950              	.LBB323:
 2951              	.LBB324:
 507:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 2952              		.loc 1 507 0
 2953 0033 4889C7   		movq	%rax, %rdi
 2954 0036 E8000000 		call	_ZN18Fl_Graphics_DriverC2Ev
 2954      00
 2955              	.LVL322:
 2956              	.LBE324:
 2957              	.LBE323:
 2958              	.LBE322:
 2959              	.LBE321:
 2960              	.LBB326:
 2961              	.LBB327:
 569:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Returns the graphics driver of this drawing surface. */
 2962              		.loc 1 569 0
 2963 003b 48895D08 		movq	%rbx, 8(%rbp)
 2964              	.LBE327:
 2965              	.LBE326:
 2966              	.LBB328:
 2967              	.LBB325:
 273:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   97:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual int printable_rect(int *w, int *h);
 2968              		.loc 3 273 0
 2969 003f 48C70300 		movq	$_ZTV35Fl_translated_Xlib_Graphics_Driver_+16, (%rbx)
 2969      000000
 274:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   98:fltk-1.3.4-1/FL/Fl_Copy_Surface.H ****   virtual ~Fl_Quartz_Surface_() {};
 2970              		.loc 3 274 0
 2971 0046 C783D006 		movl	$0, 1744(%rbx)
 2971      00000000 
 2971      0000
 2972 0050 C783D406 		movl	$0, 1748(%rbx)
 2972      00000000 
 2972      0000
 275:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   99:fltk-1.3.4-1/FL/Fl_Copy_Surface.H **** };
 2973              		.loc 3 275 0
 2974 005a C783D806 		movl	$0, 1752(%rbx)
 2974      00000000 
 2974      0000
 2975              	.LVL323:
 2976              	.LBE325:
 2977              	.LBE328:
 2978              	.LBE316:
 392:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   68:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef wha
 2979              		.loc 3 392 0
 2980 0064 4883C408 		addq	$8, %rsp
 2981              		.cfi_def_cfa_offset 24
 2982 0068 5B       		popq	%rbx
 2983              		.cfi_def_cfa_offset 16
 2984 0069 5D       		popq	%rbp
 2985              		.cfi_def_cfa_offset 8
 2986              	.LVL324:
 2987 006a C3       		ret
 2988              		.cfi_endproc
 2989              	.LFE557:
 2991              		.section	.text.unlikely._ZN16Fl_Xlib_Surface_C2Ev
 2992              	.LCOLDE50:
 2993              		.section	.text._ZN16Fl_Xlib_Surface_C2Ev
 2994              	.LHOTE50:
 2995              		.globl	_ZN16Fl_Xlib_Surface_C1Ev
 2996              		.set	_ZN16Fl_Xlib_Surface_C1Ev,_ZN16Fl_Xlib_Surface_C2Ev
 2997              		.section	.text.unlikely._ZN15Fl_Copy_SurfaceC2Eii,"ax",@progbits
 2998              		.align 2
 2999              	.LCOLDB51:
 3000              		.section	.text._ZN15Fl_Copy_SurfaceC2Eii,"ax",@progbits
 3001              	.LHOTB51:
 3002              		.align 2
 3003              		.p2align 4,,15
 3004              		.globl	_ZN15Fl_Copy_SurfaceC2Eii
 3006              	_ZN15Fl_Copy_SurfaceC2Eii:
 3007              	.LFB497:
  71:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
 3008              		.loc 3 71 0
 3009              		.cfi_startproc
 3010              	.LVL325:
 3011 0000 4155     		pushq	%r13
 3012              		.cfi_def_cfa_offset 16
 3013              		.cfi_offset 13, -16
 3014 0002 4154     		pushq	%r12
 3015              		.cfi_def_cfa_offset 24
 3016              		.cfi_offset 12, -24
 3017 0004 4189D4   		movl	%edx, %r12d
 3018 0007 55       		pushq	%rbp
 3019              		.cfi_def_cfa_offset 32
 3020              		.cfi_offset 6, -32
 3021 0008 53       		pushq	%rbx
 3022              		.cfi_def_cfa_offset 40
 3023              		.cfi_offset 3, -40
 3024 0009 4889FB   		movq	%rdi, %rbx
 3025 000c 89F5     		movl	%esi, %ebp
 3026 000e 4883EC08 		subq	$8, %rsp
 3027              		.cfi_def_cfa_offset 48
 3028              	.LBB329:
 3029              	.LBB330:
  73:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
 3030              		.loc 3 73 0
 3031 0012 897710   		movl	%esi, 16(%rdi)
  74:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
 3032              		.loc 3 74 0
 3033 0015 895714   		movl	%edx, 20(%rdi)
 3034              	.LBE330:
 3035              	.LBB345:
 3036              	.LBB346:
 563:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 3037              		.loc 1 563 0
 3038 0018 48C74708 		movq	$0, 8(%rdi)
 3038      00000000 
 3039              	.LVL326:
 3040              	.LBE346:
 3041              	.LBE345:
  71:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
 3042              		.loc 3 71 0
 3043 0020 48C70700 		movq	$_ZTV15Fl_Copy_Surface+16, (%rdi)
 3043      000000
 3044              	.LBB347:
 104:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   22              		.loc 1 84 0
 3045              		.loc 3 104 0
 3046 0027 BF180000 		movl	$24, %edi
 3046      00
 3047              	.LVL327:
 3048 002c E8000000 		call	_Znwm
 3048      00
 3049              	.LVL328:
 3050 0031 4989C5   		movq	%rax, %r13
 3051 0034 4889C7   		movq	%rax, %rdi
 3052 0037 E8000000 		call	_ZN16Fl_Xlib_Surface_C1Ev
 3052      00
 3053              	.LVL329:
 3054              	.LBB331:
 3055              	.LBB332:
 569:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Returns the graphics driver of this drawing surface. */
 3056              		.loc 1 569 0
 3057 003c 498B4508 		movq	8(%r13), %rax
 3058              	.LBE332:
 3059              	.LBE331:
 104:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   22              		.loc 1 84 0
 3060              		.loc 3 104 0
 3061 0040 4C896B18 		movq	%r13, 24(%rbx)
 3062              	.LVL330:
 3063              	.LBB334:
 3064              	.LBB333:
 569:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Returns the graphics driver of this drawing surface. */
 3065              		.loc 1 569 0
 3066 0044 48894308 		movq	%rax, 8(%rbx)
 3067              	.LBE333:
 3068              	.LBE334:
 106:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   23      000000
 3069              		.loc 3 106 0
 3070 0048 E8000000 		call	_ZN2Fl12first_windowEv
 3070      00
 3071              	.LVL331:
 3072 004d 4889C7   		movq	%rax, %rdi
 3073 0050 E8000000 		call	_ZN9Fl_Window12make_currentEv
 3073      00
 3074              	.LVL332:
 107:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   24 0007 C3       		ret
 3075              		.loc 3 107 0
 3076 0055 E8000000 		call	_ZN2Fl12first_windowEv
 3076      00
 3077              	.LVL333:
 3078 005a 4889C7   		movq	%rax, %rdi
 3079 005d E8000000 		call	_Z7fl_xid_PK9Fl_Window
 3079      00
 3080              	.LVL334:
 3081 0062 48894328 		movq	%rax, 40(%rbx)
 108:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   25              		.cfi_endproc
 3082              		.loc 3 108 0
 3083 0066 48630500 		movslq	fl_screen(%rip), %rax
 3083      000000
 3084 006d 4489E1   		movl	%r12d, %ecx
 3085 0070 488B3D00 		movq	fl_display(%rip), %rdi
 3085      000000
 3086 0077 89EA     		movl	%ebp, %edx
 3087 0079 48C1E007 		salq	$7, %rax
 3088 007d 480387E8 		addq	232(%rdi), %rax
 3088      000000
 3089 0084 488B7010 		movq	16(%rax), %rsi
 3090 0088 488B0500 		movq	fl_visual(%rip), %rax
 3090      000000
 3091 008f 448B4014 		movl	20(%rax), %r8d
 3092 0093 E8000000 		call	XCreatePixmap
 3092      00
 3093              	.LVL335:
 3094              	.LBB335:
 3095              	.LBB336:
 3096              		.loc 1 575 0
 3097 0098 4C8B2D00 		movq	_ZN17Fl_Surface_Device8_surfaceE(%rip), %r13
 3097      000000
 3098              	.LVL336:
 3099              	.LBE336:
 3100              	.LBE335:
 108:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   25              		.cfi_endproc
 3101              		.loc 3 108 0
 3102 009f 48894320 		movq	%rax, 32(%rbx)
 3103              	.LBB339:
 3104              	.LBB337:
 3105              		.loc 1 575 0
 3106 00a3 4D85ED   		testq	%r13, %r13
 3107 00a6 7450     		je	.L134
 3108              	.L132:
 3109              	.LBE337:
 3110              	.LBE339:
 110:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   28              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
 3111              		.loc 3 110 0
 3112 00a8 4889DF   		movq	%rbx, %rdi
 3113 00ab E8000000 		call	_ZN15Fl_Copy_Surface11set_currentEv
 3113      00
 3114              	.LVL337:
 3115              	.LBB340:
 3116              	.LBB341:
  52:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
 3117              		.loc 4 52 0
 3118 00b0 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3118      000000
 3119 00b7 BEFF0000 		movl	$255, %esi
 3119      00
 3120 00bc 488B07   		movq	(%rdi), %rax
 3121 00bf FF908800 		call	*136(%rax)
 3121      0000
 3122              	.LVL338:
 3123              	.LBE341:
 3124              	.LBE340:
 3125              	.LBB342:
 3126              	.LBB343:
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
 3127              		.loc 4 206 0
 3128 00c5 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3128      000000
 3129 00cc 4589E0   		movl	%r12d, %r8d
 3130 00cf 89E9     		movl	%ebp, %ecx
 3131 00d1 31D2     		xorl	%edx, %edx
 3132 00d3 31F6     		xorl	%esi, %esi
 3133 00d5 488B07   		movq	(%rdi), %rax
 3134 00d8 FF5020   		call	*32(%rax)
 3135              	.LVL339:
 3136              	.LBE343:
 3137              	.LBE342:
 113:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   31              	.LHOTE0:
 3138              		.loc 3 113 0
 3139 00db 498B4500 		movq	0(%r13), %rax
 3140 00df 4C89EF   		movq	%r13, %rdi
 3141 00e2 488B4018 		movq	24(%rax), %rax
 3142              	.LBE347:
 3143              	.LBE329:
 115:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   33              		.align 2
 3144              		.loc 3 115 0
 3145 00e6 4883C408 		addq	$8, %rsp
 3146              		.cfi_remember_state
 3147              		.cfi_def_cfa_offset 40
 3148 00ea 5B       		popq	%rbx
 3149              		.cfi_def_cfa_offset 32
 3150              	.LVL340:
 3151 00eb 5D       		popq	%rbp
 3152              		.cfi_def_cfa_offset 24
 3153              	.LVL341:
 3154 00ec 415C     		popq	%r12
 3155              		.cfi_def_cfa_offset 16
 3156              	.LVL342:
 3157 00ee 415D     		popq	%r13
 3158              		.cfi_def_cfa_offset 8
 3159              	.LBB349:
 3160              	.LBB348:
 113:fltk-1.3.4-1/src/Fl_Copy_Surface.cxx ****   31              	.LHOTE0:
 3161              		.loc 3 113 0
 3162 00f0 FFE0     		jmp	*%rax
 3163              	.LVL343:
 3164              		.p2align 4,,10
 3165 00f2 660F1F44 		.p2align 3
 3165      0000
 3166              	.L134:
 3167              		.cfi_restore_state
 3168              	.LBB344:
 3169              	.LBB338:
 3170              		.loc 1 575 0
 3171 00f8 E8000000 		call	_ZN17Fl_Surface_Device15default_surfaceEv
 3171      00
 3172              	.LVL344:
 3173 00fd 4989C5   		movq	%rax, %r13
 3174 0100 EBA6     		jmp	.L132
 3175              	.LBE338:
 3176              	.LBE344:
 3177              	.LBE348:
 3178              	.LBE349:
 3179              		.cfi_endproc
 3180              	.LFE497:
 3182              		.section	.text.unlikely._ZN15Fl_Copy_SurfaceC2Eii
 3183              	.LCOLDE51:
 3184              		.section	.text._ZN15Fl_Copy_SurfaceC2Eii
 3185              	.LHOTE51:
 3186              		.globl	_ZN15Fl_Copy_SurfaceC1Eii
 3187              		.set	_ZN15Fl_Copy_SurfaceC1Eii,_ZN15Fl_Copy_SurfaceC2Eii
 3188              		.weak	_ZTS15Fl_Copy_Surface
 3189              		.section	.rodata._ZTS15Fl_Copy_Surface,"aG",@progbits,_ZTS15Fl_Copy_Surface,comdat
 3190              		.align 16
 3193              	_ZTS15Fl_Copy_Surface:
 3194 0000 3135466C 		.string	"15Fl_Copy_Surface"
 3194      5F436F70 
 3194      795F5375 
 3194      72666163 
 3194      6500
 3195              		.weak	_ZTI15Fl_Copy_Surface
 3196              		.section	.rodata._ZTI15Fl_Copy_Surface,"aG",@progbits,_ZTI15Fl_Copy_Surface,comdat
 3197              		.align 8
 3200              	_ZTI15Fl_Copy_Surface:
 3201 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3201      00000000 
 3202 0008 00000000 		.quad	_ZTS15Fl_Copy_Surface
 3202      00000000 
 3203 0010 00000000 		.quad	_ZTI17Fl_Surface_Device
 3203      00000000 
 3204              		.weak	_ZTS16Fl_Xlib_Surface_
 3205              		.section	.rodata._ZTS16Fl_Xlib_Surface_,"aG",@progbits,_ZTS16Fl_Xlib_Surface_,comdat
 3206              		.align 16
 3209              	_ZTS16Fl_Xlib_Surface_:
 3210 0000 3136466C 		.string	"16Fl_Xlib_Surface_"
 3210      5F586C69 
 3210      625F5375 
 3210      72666163 
 3210      655F00
 3211              		.weak	_ZTI16Fl_Xlib_Surface_
 3212              		.section	.rodata._ZTI16Fl_Xlib_Surface_,"aG",@progbits,_ZTI16Fl_Xlib_Surface_,comdat
 3213              		.align 8
 3216              	_ZTI16Fl_Xlib_Surface_:
 3217 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3217      00000000 
 3218 0008 00000000 		.quad	_ZTS16Fl_Xlib_Surface_
 3218      00000000 
 3219 0010 00000000 		.quad	_ZTI15Fl_Paged_Device
 3219      00000000 
 3220              		.weak	_ZTS35Fl_translated_Xlib_Graphics_Driver_
 3221              		.section	.rodata._ZTS35Fl_translated_Xlib_Graphics_Driver_,"aG",@progbits,_ZTS35Fl_translated_Xlib
 3222              		.align 32
 3225              	_ZTS35Fl_translated_Xlib_Graphics_Driver_:
 3226 0000 3335466C 		.string	"35Fl_translated_Xlib_Graphics_Driver_"
 3226      5F747261 
 3226      6E736C61 
 3226      7465645F 
 3226      586C6962 
 3227              		.weak	_ZTI35Fl_translated_Xlib_Graphics_Driver_
 3228              		.section	.rodata._ZTI35Fl_translated_Xlib_Graphics_Driver_,"aG",@progbits,_ZTI35Fl_translated_Xlib
 3229              		.align 8
 3232              	_ZTI35Fl_translated_Xlib_Graphics_Driver_:
 3233 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3233      00000000 
 3234 0008 00000000 		.quad	_ZTS35Fl_translated_Xlib_Graphics_Driver_
 3234      00000000 
 3235 0010 00000000 		.quad	_ZTI23Fl_Xlib_Graphics_Driver
 3235      00000000 
 3236              		.weak	_ZTV15Fl_Copy_Surface
 3237              		.section	.rodata._ZTV15Fl_Copy_Surface,"aG",@progbits,_ZTV15Fl_Copy_Surface,comdat
 3238              		.align 8
 3241              	_ZTV15Fl_Copy_Surface:
 3242 0000 00000000 		.quad	0
 3242      00000000 
 3243 0008 00000000 		.quad	_ZTI15Fl_Copy_Surface
 3243      00000000 
 3244 0010 00000000 		.quad	_ZN15Fl_Copy_Surface10class_nameEv
 3244      00000000 
 3245 0018 00000000 		.quad	_ZN15Fl_Copy_SurfaceD1Ev
 3245      00000000 
 3246 0020 00000000 		.quad	_ZN15Fl_Copy_SurfaceD0Ev
 3246      00000000 
 3247 0028 00000000 		.quad	_ZN15Fl_Copy_Surface11set_currentEv
 3247      00000000 
 3248              		.weak	_ZTV35Fl_translated_Xlib_Graphics_Driver_
 3249              		.section	.rodata._ZTV35Fl_translated_Xlib_Graphics_Driver_,"aG",@progbits,_ZTV35Fl_translated_Xlib
 3250              		.align 8
 3253              	_ZTV35Fl_translated_Xlib_Graphics_Driver_:
 3254 0000 00000000 		.quad	0
 3254      00000000 
 3255 0008 00000000 		.quad	_ZTI35Fl_translated_Xlib_Graphics_Driver_
 3255      00000000 
 3256 0010 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv
 3256      00000000 
 3257 0018 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_D1Ev
 3257      00000000 
 3258 0020 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_D0Ev
 3258      00000000 
 3259 0028 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_4rectEiiii
 3259      00000000 
 3260 0030 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_5rectfEiiii
 3260      00000000 
 3261 0038 00000000 		.quad	_ZN18Fl_Graphics_Driver10line_styleEiiPc
 3261      00000000 
 3262 0040 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiii
 3262      00000000 
 3263 0048 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiii
 3263      00000000 
 3264 0050 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiiii
 3264      00000000 
 3265 0058 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiii
 3265      00000000 
 3266 0060 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiii
 3266      00000000 
 3267 0068 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiiii
 3267      00000000 
 3268 0070 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiii
 3268      00000000 
 3269 0078 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiiiii
 3269      00000000 
 3270 0080 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEPKciii
 3270      00000000 
 3271 0088 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEiPKciii
 3271      00000000 
 3272 0090 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_8rtl_drawEPKciii
 3272      00000000 
 3273 0098 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver5colorEj
 3273      00000000 
 3274 00a0 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver5colorEhhh
 3274      00000000 
 3275 00a8 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_5pointEii
 3275      00000000 
 3276 00b0 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiii
 3276      00000000 
 3277 00b8 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiiiii
 3277      00000000 
 3278 00c0 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiii
 3278      00000000 
 3279 00c8 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiiiii
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
 3288 0110 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_3arcEiiiidd
 3288      00000000 
 3289 0118 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_3pieEiiiidd
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
 3298 0160 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_9push_clipEiiii
 3298      00000000 
 3299 0168 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_8clip_boxEiiiiRiS0_S0_S0_
 3299      00000000 
 3300 0170 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_11not_clippedEiiii
 3300      00000000 
 3301 0178 00000000 		.quad	_ZN18Fl_Graphics_Driver12push_no_clipEv
 3301      00000000 
 3302 0180 00000000 		.quad	_ZN18Fl_Graphics_Driver8pop_clipEv
 3302      00000000 
 3303 0188 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPKhiiiiii
 3303      00000000 
 3304 0190 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPKhiiiiii
 3304      00000000 
 3305 0198 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPFvPviiiPhES0_iiiii
 3305      00000000 
 3306 01a0 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPFvPviiiPhES0_iiiii
 3306      00000000 
 3307 01a8 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP12Fl_RGB_Imageiiiiii
 3307      00000000 
 3308 01b0 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Pixmapiiiiii
 3308      00000000 
 3309 01b8 00000000 		.quad	_ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Bitmapiiiiii
 3309      00000000 
 3310 01c0 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver4fontEii
 3310      00000000 
 3311 01c8 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver5widthEPKci
 3311      00000000 
 3312 01d0 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver5widthEj
 3312      00000000 
 3313 01d8 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_
 3313      00000000 
 3314 01e0 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver6heightEv
 3314      00000000 
 3315 01e8 00000000 		.quad	_ZN23Fl_Xlib_Graphics_Driver7descentEv
 3315      00000000 
 3316              		.weak	_ZTV16Fl_Xlib_Surface_
 3317              		.section	.rodata._ZTV16Fl_Xlib_Surface_,"aG",@progbits,_ZTV16Fl_Xlib_Surface_,comdat
 3318              		.align 8
 3321              	_ZTV16Fl_Xlib_Surface_:
 3322 0000 00000000 		.quad	0
 3322      00000000 
 3323 0008 00000000 		.quad	_ZTI16Fl_Xlib_Surface_
 3323      00000000 
 3324 0010 00000000 		.quad	_ZN16Fl_Xlib_Surface_10class_nameEv
 3324      00000000 
 3325 0018 00000000 		.quad	_ZN16Fl_Xlib_Surface_D1Ev
 3325      00000000 
 3326 0020 00000000 		.quad	_ZN16Fl_Xlib_Surface_D0Ev
 3326      00000000 
 3327 0028 00000000 		.quad	_ZN17Fl_Surface_Device11set_currentEv
 3327      00000000 
 3328 0030 00000000 		.quad	_ZN15Fl_Paged_Device9start_jobEiPiS0_
 3328      00000000 
 3329 0038 00000000 		.quad	_ZN15Fl_Paged_Device10start_pageEv
 3329      00000000 
 3330 0040 00000000 		.quad	_ZN15Fl_Paged_Device14printable_rectEPiS0_
 3330      00000000 
 3331 0048 00000000 		.quad	_ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_
 3331      00000000 
 3332 0050 00000000 		.quad	_ZN15Fl_Paged_Device6originEii
 3332      00000000 
 3333 0058 00000000 		.quad	_ZN15Fl_Paged_Device6originEPiS0_
 3333      00000000 
 3334 0060 00000000 		.quad	_ZN15Fl_Paged_Device5scaleEff
 3334      00000000 
 3335 0068 00000000 		.quad	_ZN15Fl_Paged_Device6rotateEf
 3335      00000000 
 3336 0070 00000000 		.quad	_ZN16Fl_Xlib_Surface_9translateEii
 3336      00000000 
 3337 0078 00000000 		.quad	_ZN16Fl_Xlib_Surface_11untranslateEv
 3337      00000000 
 3338 0080 00000000 		.quad	_ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii
 3338      00000000 
 3339 0088 00000000 		.quad	_ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii
 3339      00000000 
 3340 0090 00000000 		.quad	_ZN15Fl_Paged_Device8end_pageEv
 3340      00000000 
 3341 0098 00000000 		.quad	_ZN15Fl_Paged_Device7end_jobEv
 3341      00000000 
 3342              		.globl	_ZN16Fl_Xlib_Surface_8class_idE
 3343              		.section	.rodata.str1.1
 3344              	.LC52:
 3345 001e 466C5F58 		.string	"Fl_Xlib_Surface_"
 3345      6C69625F 
 3345      53757266 
 3345      6163655F 
 3345      00
 3346              		.section	.data._ZN16Fl_Xlib_Surface_8class_idE,"aw",@progbits
 3347              		.align 8
 3350              	_ZN16Fl_Xlib_Surface_8class_idE:
 3351 0000 00000000 		.quad	.LC52
 3351      00000000 
 3352              		.globl	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE
 3353              		.section	.rodata.str1.8,"aMS",@progbits,1
 3354              		.align 8
 3355              	.LC53:
 3356 0000 466C5F74 		.string	"Fl_translated_Xlib_Graphics_Driver_"
 3356      72616E73 
 3356      6C617465 
 3356      645F586C 
 3356      69625F47 
 3357              		.section	.data._ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE,"aw",@progbits
 3358              		.align 8
 3361              	_ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE:
 3362 0000 00000000 		.quad	.LC53
 3362      00000000 
 3363              		.globl	_ZN15Fl_Copy_Surface8class_idE
 3364              		.section	.rodata.str1.1
 3365              	.LC54:
 3366 002f 466C5F43 		.string	"Fl_Copy_Surface"
 3366      6F70795F 
 3366      53757266 
 3366      61636500 
 3367              		.section	.data._ZN15Fl_Copy_Surface8class_idE,"aw",@progbits
 3368              		.align 8
 3371              	_ZN15Fl_Copy_Surface8class_idE:
 3372 0000 00000000 		.quad	.LC54
 3372      00000000 
 3373              		.section	.rodata.cst8,"aM",@progbits,8
 3374              		.align 8
 3375              	.LC13:
 3376 0000 00000000 		.long	0
 3377 0004 0000F03F 		.long	1072693248
 3378              		.text
 3379              	.Letext0:
 3380              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
 3381              	.Letext_cold0:
 3382              		.file 6 "fltk-1.3.4-1/FL/fl_types.h"
 3383              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 3384              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3385              		.file 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3386              		.file 10 "/usr/include/X11/X.h"
 3387              		.file 11 "/usr/include/X11/Xlib.h"
 3388              		.file 12 "/usr/include/X11/Xutil.h"
 3389              		.file 13 "fltk-1.3.4-1/FL/Fl_Widget.H"
 3390              		.file 14 "fltk-1.3.4-1/FL/Fl_Image.H"
 3391              		.file 15 "fltk-1.3.4-1/FL/x.H"
 3392              		.file 16 "/usr/include/libio.h"
 3393              		.file 17 "fltk-1.3.4-1/FL/Fl_Window.H"
 3394              		.file 18 "fltk-1.3.4-1/FL/Fl.H"
 3395              		.file 19 "/usr/include/stdio.h"
 3396              		.file 20 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Copy_Surface.cxx
     /tmp/ccg47wF2.s:16     .text._ZN9Fl_Device10class_nameEv:0000000000000000 _ZN9Fl_Device10class_nameEv
     /tmp/ccg47wF2.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD2Ev
     /tmp/ccg47wF2.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD1Ev
     /tmp/ccg47wF2.s:65     .text._ZN15Fl_Copy_Surface10class_nameEv:0000000000000000 _ZN15Fl_Copy_Surface10class_nameEv
     /tmp/ccg47wF2.s:3371   .data._ZN15Fl_Copy_Surface8class_idE:0000000000000000 _ZN15Fl_Copy_Surface8class_idE
     /tmp/ccg47wF2.s:90     .text._ZN16Fl_Xlib_Surface_10class_nameEv:0000000000000000 _ZN16Fl_Xlib_Surface_10class_nameEv
     /tmp/ccg47wF2.s:3350   .data._ZN16Fl_Xlib_Surface_8class_idE:0000000000000000 _ZN16Fl_Xlib_Surface_8class_idE
     /tmp/ccg47wF2.s:114    .text._ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_10class_nameEv
     /tmp/ccg47wF2.s:3361   .data._ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_8class_idE
     /tmp/ccg47wF2.s:139    .text._ZN16Fl_Xlib_Surface_D2Ev:0000000000000000 _ZN16Fl_Xlib_Surface_D2Ev
     /tmp/ccg47wF2.s:3321   .rodata._ZTV16Fl_Xlib_Surface_:0000000000000000 _ZTV16Fl_Xlib_Surface_
     /tmp/ccg47wF2.s:139    .text._ZN16Fl_Xlib_Surface_D2Ev:0000000000000000 _ZN16Fl_Xlib_Surface_D1Ev
     /tmp/ccg47wF2.s:179    .text._ZN9Fl_DeviceD0Ev:0000000000000000 _ZN9Fl_DeviceD0Ev
     /tmp/ccg47wF2.s:203    .text._ZN16Fl_Xlib_Surface_D0Ev:0000000000000000 _ZN16Fl_Xlib_Surface_D0Ev
     /tmp/ccg47wF2.s:250    .text._ZN15Fl_Copy_Surface11set_currentEv:0000000000000000 _ZN15Fl_Copy_Surface11set_currentEv
     /tmp/ccg47wF2.s:325    .text._ZN35Fl_translated_Xlib_Graphics_Driver_5rectfEiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_5rectfEiiii
     /tmp/ccg47wF2.s:353    .text._ZN15Fl_Copy_SurfaceD2Ev:0000000000000000 _ZN15Fl_Copy_SurfaceD2Ev
     /tmp/ccg47wF2.s:3241   .rodata._ZTV15Fl_Copy_Surface:0000000000000000 _ZTV15Fl_Copy_Surface
     /tmp/ccg47wF2.s:353    .text._ZN15Fl_Copy_SurfaceD2Ev:0000000000000000 _ZN15Fl_Copy_SurfaceD1Ev
     /tmp/ccg47wF2.s:481    .text._ZN15Fl_Copy_SurfaceD0Ev:0000000000000000 _ZN15Fl_Copy_SurfaceD0Ev
     /tmp/ccg47wF2.s:516    .text._ZN16Fl_Xlib_Surface_11untranslateEv:0000000000000000 _ZN16Fl_Xlib_Surface_11untranslateEv
     /tmp/ccg47wF2.s:563    .text._ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPFvPviiiPhES0_iiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPFvPviiiPhES0_iiiii
     /tmp/ccg47wF2.s:753    .text._ZN35Fl_translated_Xlib_Graphics_Driver_11not_clippedEiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_11not_clippedEiiii
     /tmp/ccg47wF2.s:781    .text._ZN35Fl_translated_Xlib_Graphics_Driver_8clip_boxEiiiiRiS0_S0_S0_:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_8clip_boxEiiiiRiS0_S0_S0_
     /tmp/ccg47wF2.s:849    .text._ZN35Fl_translated_Xlib_Graphics_Driver_9push_clipEiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_9push_clipEiiii
     /tmp/ccg47wF2.s:877    .text._ZN35Fl_translated_Xlib_Graphics_Driver_3pieEiiiidd:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_3pieEiiiidd
     /tmp/ccg47wF2.s:905    .text._ZN35Fl_translated_Xlib_Graphics_Driver_3arcEiiiidd:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_3arcEiiiidd
     /tmp/ccg47wF2.s:933    .text._ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiiiii
     /tmp/ccg47wF2.s:979    .text._ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_7polygonEiiiiii
     /tmp/ccg47wF2.s:1017   .text._ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiiiii
     /tmp/ccg47wF2.s:1063   .text._ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_4loopEiiiiii
     /tmp/ccg47wF2.s:1101   .text._ZN35Fl_translated_Xlib_Graphics_Driver_5pointEii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_5pointEii
     /tmp/ccg47wF2.s:1129   .text._ZN35Fl_translated_Xlib_Graphics_Driver_8rtl_drawEPKciii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_8rtl_drawEPKciii
     /tmp/ccg47wF2.s:1157   .text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEiPKciii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_4drawEiPKciii
     /tmp/ccg47wF2.s:1185   .text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEPKciii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_4drawEPKciii
     /tmp/ccg47wF2.s:1213   .text._ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiiiii
     /tmp/ccg47wF2.s:1251   .text._ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_4lineEiiii
     /tmp/ccg47wF2.s:1285   .text._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiiii
     /tmp/ccg47wF2.s:1321   .text._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiiii
     /tmp/ccg47wF2.s:1355   .text._ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_6yxlineEiii
     /tmp/ccg47wF2.s:1386   .text._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiiii
     /tmp/ccg47wF2.s:1422   .text._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiiii
     /tmp/ccg47wF2.s:1456   .text._ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_6xylineEiii
     /tmp/ccg47wF2.s:1487   .text._ZN35Fl_translated_Xlib_Graphics_Driver_4rectEiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_4rectEiiii
     /tmp/ccg47wF2.s:1515   .text._ZN35Fl_translated_Xlib_Graphics_Driver_D2Ev:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_D2Ev
     /tmp/ccg47wF2.s:1515   .text._ZN35Fl_translated_Xlib_Graphics_Driver_D2Ev:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_D1Ev
     /tmp/ccg47wF2.s:1556   .text._ZN35Fl_translated_Xlib_Graphics_Driver_D0Ev:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_D0Ev
     /tmp/ccg47wF2.s:1606   .text._ZN16Fl_Xlib_Surface_9translateEii:0000000000000000 _ZN16Fl_Xlib_Surface_9translateEii
     /tmp/ccg47wF2.s:1728   .text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Pixmapiiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Pixmapiiiiii
     /tmp/ccg47wF2.s:1915   .text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Bitmapiiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP9Fl_Bitmapiiiiii
     /tmp/ccg47wF2.s:2102   .text._ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP12Fl_RGB_Imageiiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_4drawEP12Fl_RGB_Imageiiiiii
     /tmp/ccg47wF2.s:2289   .text._ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPKhiiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPKhiiiiii
     /tmp/ccg47wF2.s:2476   .text._ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPFvPviiiPhES0_iiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_10draw_imageEPFvPviiiPhES0_iiiii
     /tmp/ccg47wF2.s:2666   .text._ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPKhiiiiii:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_15draw_image_monoEPKhiiiiii
     /tmp/ccg47wF2.s:2853   .text._ZN15Fl_Copy_Surface4drawEP9Fl_Widgetii:0000000000000000 _ZN15Fl_Copy_Surface4drawEP9Fl_Widgetii
     /tmp/ccg47wF2.s:2880   .text._ZN15Fl_Copy_Surface21draw_decorated_windowEP9Fl_Windowii:0000000000000000 _ZN15Fl_Copy_Surface21draw_decorated_windowEP9Fl_Windowii
     /tmp/ccg47wF2.s:2908   .text._ZN16Fl_Xlib_Surface_C2Ev:0000000000000000 _ZN16Fl_Xlib_Surface_C2Ev
     /tmp/ccg47wF2.s:3253   .rodata._ZTV35Fl_translated_Xlib_Graphics_Driver_:0000000000000000 _ZTV35Fl_translated_Xlib_Graphics_Driver_
     /tmp/ccg47wF2.s:2908   .text._ZN16Fl_Xlib_Surface_C2Ev:0000000000000000 _ZN16Fl_Xlib_Surface_C1Ev
     /tmp/ccg47wF2.s:3006   .text._ZN15Fl_Copy_SurfaceC2Eii:0000000000000000 _ZN15Fl_Copy_SurfaceC2Eii
     /tmp/ccg47wF2.s:3006   .text._ZN15Fl_Copy_SurfaceC2Eii:0000000000000000 _ZN15Fl_Copy_SurfaceC1Eii
     /tmp/ccg47wF2.s:3193   .rodata._ZTS15Fl_Copy_Surface:0000000000000000 _ZTS15Fl_Copy_Surface
     /tmp/ccg47wF2.s:3200   .rodata._ZTI15Fl_Copy_Surface:0000000000000000 _ZTI15Fl_Copy_Surface
     /tmp/ccg47wF2.s:3209   .rodata._ZTS16Fl_Xlib_Surface_:0000000000000000 _ZTS16Fl_Xlib_Surface_
     /tmp/ccg47wF2.s:3216   .rodata._ZTI16Fl_Xlib_Surface_:0000000000000000 _ZTI16Fl_Xlib_Surface_
     /tmp/ccg47wF2.s:3225   .rodata._ZTS35Fl_translated_Xlib_Graphics_Driver_:0000000000000000 _ZTS35Fl_translated_Xlib_Graphics_Driver_
     /tmp/ccg47wF2.s:3232   .rodata._ZTI35Fl_translated_Xlib_Graphics_Driver_:0000000000000000 _ZTI35Fl_translated_Xlib_Graphics_Driver_
     /tmp/ccg47wF2.s:3375   .rodata.cst8:0000000000000000 .LC13
                           .group:0000000000000000 _ZN9Fl_DeviceD5Ev
                           .group:0000000000000000 _ZN35Fl_translated_Xlib_Graphics_Driver_D5Ev
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
fl_window
_ZN17Fl_Surface_Device8_surfaceE
_ZN17Fl_Surface_Device11set_currentEv
fl_graphics_driver
_ZN17Fl_Surface_Device15default_surfaceEv
_ZN18Fl_Graphics_Driver5rectfEiiii
_Z13fl_read_imagePhiiiii
_ZN2Fl10copy_imageEPKhiii
_ZdaPv
fl_display
XFreePixmap
_ZN18Fl_Graphics_Driver10pop_matrixEv
_ZN18Fl_Graphics_Driver11push_matrixEv
_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
_ZN2Fl7warningE
_ZN18Fl_Graphics_Driver11not_clippedEiiii
_ZN18Fl_Graphics_Driver8clip_boxEiiiiRiS0_S0_S0_
_ZN18Fl_Graphics_Driver9push_clipEiiii
_ZN18Fl_Graphics_Driver3pieEiiiidd
_ZN18Fl_Graphics_Driver3arcEiiiidd
_ZN18Fl_Graphics_Driver7polygonEiiiiiiii
_ZN18Fl_Graphics_Driver7polygonEiiiiii
_ZN18Fl_Graphics_Driver4loopEiiiiiiii
_ZN18Fl_Graphics_Driver4loopEiiiiii
_ZN18Fl_Graphics_Driver5pointEii
_ZN23Fl_Xlib_Graphics_Driver8rtl_drawEPKciii
_ZN23Fl_Xlib_Graphics_Driver4drawEiPKciii
_ZN23Fl_Xlib_Graphics_Driver4drawEPKciii
_ZN18Fl_Graphics_Driver4lineEiiiiii
_ZN18Fl_Graphics_Driver4lineEiiii
_ZN18Fl_Graphics_Driver6yxlineEiiiii
_ZN18Fl_Graphics_Driver6yxlineEiiii
_ZN18Fl_Graphics_Driver6yxlineEiii
_ZN18Fl_Graphics_Driver6xylineEiiiii
_ZN18Fl_Graphics_Driver6xylineEiiii
_ZN18Fl_Graphics_Driver6xylineEiii
_ZN18Fl_Graphics_Driver4rectEiiii
_ZTV18Fl_Graphics_Driver
free
_ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
_ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
_ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii
_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii
_ZN15Fl_Paged_Device21draw_decorated_windowEP9Fl_WindowiiP17Fl_Surface_Device
_Znwm
_ZN18Fl_Graphics_DriverC2Ev
_ZN2Fl12first_windowEv
_ZN9Fl_Window12make_currentEv
_Z7fl_xid_PK9Fl_Window
fl_screen
fl_visual
XCreatePixmap
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI17Fl_Surface_Device
_ZTI15Fl_Paged_Device
_ZTI23Fl_Xlib_Graphics_Driver
_ZN18Fl_Graphics_Driver10line_styleEiiPc
_ZN23Fl_Xlib_Graphics_Driver5colorEj
_ZN23Fl_Xlib_Graphics_Driver5colorEhhh
_ZN18Fl_Graphics_Driver12begin_pointsEv
_ZN18Fl_Graphics_Driver10begin_lineEv
_ZN18Fl_Graphics_Driver10begin_loopEv
_ZN18Fl_Graphics_Driver13begin_polygonEv
_ZN18Fl_Graphics_Driver6vertexEdd
_ZN18Fl_Graphics_Driver5curveEdddddddd
_ZN18Fl_Graphics_Driver6circleEddd
_ZN18Fl_Graphics_Driver3arcEddddd
_ZN18Fl_Graphics_Driver10end_pointsEv
_ZN18Fl_Graphics_Driver8end_lineEv
_ZN18Fl_Graphics_Driver8end_loopEv
_ZN18Fl_Graphics_Driver11end_polygonEv
_ZN18Fl_Graphics_Driver21begin_complex_polygonEv
_ZN18Fl_Graphics_Driver3gapEv
_ZN18Fl_Graphics_Driver19end_complex_polygonEv
_ZN18Fl_Graphics_Driver18transformed_vertexEdd
_ZN18Fl_Graphics_Driver12push_no_clipEv
_ZN18Fl_Graphics_Driver8pop_clipEv
_ZN23Fl_Xlib_Graphics_Driver4fontEii
_ZN23Fl_Xlib_Graphics_Driver5widthEPKci
_ZN23Fl_Xlib_Graphics_Driver5widthEj
_ZN23Fl_Xlib_Graphics_Driver12text_extentsEPKciRiS2_S2_S2_
_ZN23Fl_Xlib_Graphics_Driver6heightEv
_ZN23Fl_Xlib_Graphics_Driver7descentEv
_ZN15Fl_Paged_Device9start_jobEiPiS0_
_ZN15Fl_Paged_Device10start_pageEv
_ZN15Fl_Paged_Device14printable_rectEPiS0_
_ZN15Fl_Paged_Device7marginsEPiS0_S0_S0_
_ZN15Fl_Paged_Device6originEii
_ZN15Fl_Paged_Device6originEPiS0_
_ZN15Fl_Paged_Device5scaleEff
_ZN15Fl_Paged_Device6rotateEf
_ZN15Fl_Paged_Device12print_widgetEP9Fl_Widgetii
_ZN15Fl_Paged_Device17print_window_partEP9Fl_Windowiiiiii
_ZN15Fl_Paged_Device8end_pageEv
_ZN15Fl_Paged_Device7end_jobEv
