   1              		.file	"Fl_Printer.cxx"
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
  56              		.section	.text.unlikely._ZN10Fl_Printer10class_nameEv,"axG",@progbits,_ZN10Fl_Printer10class_nameE
  57              		.align 2
  58              	.LCOLDB2:
  59              		.section	.text._ZN10Fl_Printer10class_nameEv,"axG",@progbits,_ZN10Fl_Printer10class_nameEv,comdat
  60              	.LHOTB2:
  61              		.align 2
  62              		.p2align 4,,15
  63              		.weak	_ZN10Fl_Printer10class_nameEv
  65              	_ZN10Fl_Printer10class_nameEv:
  66              	.LFB396:
  67              		.file 2 "fltk-1.3.4-1/FL/Fl_Printer.H"
   1:fltk-1.3.4-1/FL/Fl_Printer.H **** //
   2:fltk-1.3.4-1/FL/Fl_Printer.H **** // "$Id: Fl_Printer.H 10592 2015-02-26 15:38:54Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Printer.H **** //
   4:fltk-1.3.4-1/FL/Fl_Printer.H **** // Printing support for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Printer.H **** //
   6:fltk-1.3.4-1/FL/Fl_Printer.H **** // Copyright 2010-2014 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Printer.H **** //
   8:fltk-1.3.4-1/FL/Fl_Printer.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Printer.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Printer.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Printer.H **** //
  12:fltk-1.3.4-1/FL/Fl_Printer.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Printer.H **** //
  14:fltk-1.3.4-1/FL/Fl_Printer.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Printer.H **** //
  16:fltk-1.3.4-1/FL/Fl_Printer.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Printer.H **** //
  18:fltk-1.3.4-1/FL/Fl_Printer.H **** 
  19:fltk-1.3.4-1/FL/Fl_Printer.H **** /** \file Fl_Printer.H 
  20:fltk-1.3.4-1/FL/Fl_Printer.H ****  \brief declaration of classes Fl_Printer, Fl_System_Printer and Fl_PostScript_Printer.
  21:fltk-1.3.4-1/FL/Fl_Printer.H ****  */
  22:fltk-1.3.4-1/FL/Fl_Printer.H **** 
  23:fltk-1.3.4-1/FL/Fl_Printer.H **** #ifndef Fl_Printer_H
  24:fltk-1.3.4-1/FL/Fl_Printer.H **** #define Fl_Printer_H
  25:fltk-1.3.4-1/FL/Fl_Printer.H **** 
  26:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/x.H>
  27:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/Fl_Paged_Device.H>
  28:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/fl_draw.H>
  29:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/Fl_Pixmap.H>
  30:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/Fl_RGB_Image.H>
  31:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/Fl_Bitmap.H>
  32:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <stdio.h>
  33:fltk-1.3.4-1/FL/Fl_Printer.H **** #if !(defined(__APPLE__) || defined(WIN32))
  34:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/Fl_PostScript.H>
  35:fltk-1.3.4-1/FL/Fl_Printer.H **** #elif defined(WIN32)
  36:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <commdlg.h>
  37:fltk-1.3.4-1/FL/Fl_Printer.H **** #endif
  38:fltk-1.3.4-1/FL/Fl_Printer.H **** 
  39:fltk-1.3.4-1/FL/Fl_Printer.H **** #if defined(__APPLE__) || defined(WIN32) || defined(FL_DOXYGEN)
  40:fltk-1.3.4-1/FL/Fl_Printer.H **** /**
  41:fltk-1.3.4-1/FL/Fl_Printer.H ****  Print support under MSWindows and Mac OS.
  42:fltk-1.3.4-1/FL/Fl_Printer.H **** 
  43:fltk-1.3.4-1/FL/Fl_Printer.H ****  Class Fl_System_Printer is implemented only on the MSWindows and Mac OS platforms.
  44:fltk-1.3.4-1/FL/Fl_Printer.H ****  It has no public constructor.
  45:fltk-1.3.4-1/FL/Fl_Printer.H ****  Use Fl_Printer instead that is cross-platform and has the same API.
  46:fltk-1.3.4-1/FL/Fl_Printer.H ****  */
  47:fltk-1.3.4-1/FL/Fl_Printer.H **** class Fl_System_Printer : public Fl_Paged_Device {
  48:fltk-1.3.4-1/FL/Fl_Printer.H ****   friend class Fl_Printer;
  49:fltk-1.3.4-1/FL/Fl_Printer.H **** private:
  50:fltk-1.3.4-1/FL/Fl_Printer.H ****   /** \brief the printer's graphics context, if there's one, NULL otherwise */
  51:fltk-1.3.4-1/FL/Fl_Printer.H ****   void *gc; 
  52:fltk-1.3.4-1/FL/Fl_Printer.H ****   void set_current(void);
  53:fltk-1.3.4-1/FL/Fl_Printer.H **** #ifdef __APPLE__
  54:fltk-1.3.4-1/FL/Fl_Printer.H ****   float scale_x;
  55:fltk-1.3.4-1/FL/Fl_Printer.H ****   float scale_y;
  56:fltk-1.3.4-1/FL/Fl_Printer.H ****   float angle; // rotation angle in radians
  57:fltk-1.3.4-1/FL/Fl_Printer.H ****   PMPrintSession  printSession;
  58:fltk-1.3.4-1/FL/Fl_Printer.H ****   PMPageFormat    pageFormat;
  59:fltk-1.3.4-1/FL/Fl_Printer.H ****   PMPrintSettings printSettings;
  60:fltk-1.3.4-1/FL/Fl_Printer.H **** #elif defined(WIN32)
  61:fltk-1.3.4-1/FL/Fl_Printer.H ****   int   abortPrint;
  62:fltk-1.3.4-1/FL/Fl_Printer.H ****   PRINTDLG      pd;
  63:fltk-1.3.4-1/FL/Fl_Printer.H ****   HDC           hPr;
  64:fltk-1.3.4-1/FL/Fl_Printer.H ****   int           prerr;
  65:fltk-1.3.4-1/FL/Fl_Printer.H ****   int left_margin;
  66:fltk-1.3.4-1/FL/Fl_Printer.H ****   int top_margin;
  67:fltk-1.3.4-1/FL/Fl_Printer.H ****   void absolute_printable_rect(int *x, int *y, int *w, int *h);
  68:fltk-1.3.4-1/FL/Fl_Printer.H **** #endif
  69:fltk-1.3.4-1/FL/Fl_Printer.H **** protected:
  70:fltk-1.3.4-1/FL/Fl_Printer.H ****   /** \brief The constructor */
  71:fltk-1.3.4-1/FL/Fl_Printer.H ****   Fl_System_Printer(void);
  72:fltk-1.3.4-1/FL/Fl_Printer.H **** public:
  73:fltk-1.3.4-1/FL/Fl_Printer.H ****   static const char *class_id;
  74:fltk-1.3.4-1/FL/Fl_Printer.H ****   const char *class_name() {return class_id;};
  75:fltk-1.3.4-1/FL/Fl_Printer.H ****   int start_job(int pagecount, int *frompage = NULL, int *topage = NULL);
  76:fltk-1.3.4-1/FL/Fl_Printer.H ****   int start_page (void);
  77:fltk-1.3.4-1/FL/Fl_Printer.H ****   int printable_rect(int *w, int *h);
  78:fltk-1.3.4-1/FL/Fl_Printer.H ****   void margins(int *left, int *top, int *right, int *bottom);
  79:fltk-1.3.4-1/FL/Fl_Printer.H ****   void origin(int *x, int *y);
  80:fltk-1.3.4-1/FL/Fl_Printer.H ****   void origin(int x, int y);
  81:fltk-1.3.4-1/FL/Fl_Printer.H ****   void scale (float scale_x, float scale_y = 0.);
  82:fltk-1.3.4-1/FL/Fl_Printer.H ****   void rotate(float angle);
  83:fltk-1.3.4-1/FL/Fl_Printer.H ****   void translate(int x, int y);
  84:fltk-1.3.4-1/FL/Fl_Printer.H ****   void untranslate(void);
  85:fltk-1.3.4-1/FL/Fl_Printer.H ****   int end_page (void);
  86:fltk-1.3.4-1/FL/Fl_Printer.H ****   void end_job (void);
  87:fltk-1.3.4-1/FL/Fl_Printer.H **** #ifdef __APPLE__
  88:fltk-1.3.4-1/FL/Fl_Printer.H ****   void print_window_part(Fl_Window *win, int x, int y, int w, int h, int delta_x, int delta_y);
  89:fltk-1.3.4-1/FL/Fl_Printer.H **** #endif
  90:fltk-1.3.4-1/FL/Fl_Printer.H ****   /** \brief The destructor */
  91:fltk-1.3.4-1/FL/Fl_Printer.H ****   ~Fl_System_Printer(void);
  92:fltk-1.3.4-1/FL/Fl_Printer.H **** }; // class Fl_System_Printer
  93:fltk-1.3.4-1/FL/Fl_Printer.H **** 
  94:fltk-1.3.4-1/FL/Fl_Printer.H **** #endif
  95:fltk-1.3.4-1/FL/Fl_Printer.H ****   
  96:fltk-1.3.4-1/FL/Fl_Printer.H **** #if !(defined(__APPLE__) || defined(WIN32) )
  97:fltk-1.3.4-1/FL/Fl_Printer.H **** /**
  98:fltk-1.3.4-1/FL/Fl_Printer.H ****  Print support under Unix/Linux.
  99:fltk-1.3.4-1/FL/Fl_Printer.H ****  
 100:fltk-1.3.4-1/FL/Fl_Printer.H ****  Class Fl_PostScript_Printer is implemented only on the Unix/Linux platform.
 101:fltk-1.3.4-1/FL/Fl_Printer.H ****  It has no public constructor.
 102:fltk-1.3.4-1/FL/Fl_Printer.H ****  Use Fl_Printer instead that is cross-platform and has the same API.
 103:fltk-1.3.4-1/FL/Fl_Printer.H ****  */
 104:fltk-1.3.4-1/FL/Fl_Printer.H **** class Fl_PostScript_Printer : public Fl_PostScript_File_Device {
 105:fltk-1.3.4-1/FL/Fl_Printer.H ****   friend class Fl_Printer;
 106:fltk-1.3.4-1/FL/Fl_Printer.H **** protected:
 107:fltk-1.3.4-1/FL/Fl_Printer.H ****   /** The constructor */
 108:fltk-1.3.4-1/FL/Fl_Printer.H ****   Fl_PostScript_Printer(void) {};
 109:fltk-1.3.4-1/FL/Fl_Printer.H **** public:
 110:fltk-1.3.4-1/FL/Fl_Printer.H ****   static const char *class_id;
 111:fltk-1.3.4-1/FL/Fl_Printer.H ****   const char *class_name() {return class_id;};
 112:fltk-1.3.4-1/FL/Fl_Printer.H ****   int start_job(int pages, int *firstpage = NULL, int *lastpage = NULL);
 113:fltk-1.3.4-1/FL/Fl_Printer.H **** };
 114:fltk-1.3.4-1/FL/Fl_Printer.H **** 
 115:fltk-1.3.4-1/FL/Fl_Printer.H **** #endif
 116:fltk-1.3.4-1/FL/Fl_Printer.H **** 
 117:fltk-1.3.4-1/FL/Fl_Printer.H **** /**
 118:fltk-1.3.4-1/FL/Fl_Printer.H ****  * \brief OS-independent print support.
 119:fltk-1.3.4-1/FL/Fl_Printer.H ****  *
 120:fltk-1.3.4-1/FL/Fl_Printer.H ****  Fl_Printer allows to use all drawing, color, text, image, and clip FLTK functions, and to have the
 121:fltk-1.3.4-1/FL/Fl_Printer.H ****  on printed page(s). There are two main, non exclusive, ways to use it.
 122:fltk-1.3.4-1/FL/Fl_Printer.H ****  <ul><li>Print any widget (standard, custom, Fl_Window, Fl_Gl_Window) as it appears 
 123:fltk-1.3.4-1/FL/Fl_Printer.H ****  on screen, with optional translation, scaling and rotation. This is done by calling print_widget()
 124:fltk-1.3.4-1/FL/Fl_Printer.H ****  print_window() or print_window_part().
 125:fltk-1.3.4-1/FL/Fl_Printer.H ****  <li>Use a series of FLTK graphics commands (e.g., font, text, lines, colors, clip, image) to
 126:fltk-1.3.4-1/FL/Fl_Printer.H ****  compose a page appropriately shaped for printing. 
 127:fltk-1.3.4-1/FL/Fl_Printer.H ****  </ul>
 128:fltk-1.3.4-1/FL/Fl_Printer.H ****  In both cases, begin by start_job(), start_page(), printable_rect() and origin() calls
 129:fltk-1.3.4-1/FL/Fl_Printer.H ****  and finish by end_page() and end_job() calls.
 130:fltk-1.3.4-1/FL/Fl_Printer.H ****  <p>Example of use: print a widget centered in a page
 131:fltk-1.3.4-1/FL/Fl_Printer.H ****  \code
 132:fltk-1.3.4-1/FL/Fl_Printer.H ****  #include <FL/Fl_Printer.H>
 133:fltk-1.3.4-1/FL/Fl_Printer.H ****  #include <FL/fl_draw.H>
 134:fltk-1.3.4-1/FL/Fl_Printer.H ****  int width, height;
 135:fltk-1.3.4-1/FL/Fl_Printer.H ****  Fl_Widget *widget = ...  // a widget we want printed
 136:fltk-1.3.4-1/FL/Fl_Printer.H ****  Fl_Printer *printer = new Fl_Printer();
 137:fltk-1.3.4-1/FL/Fl_Printer.H ****  if (printer->start_job(1) == 0) {
 138:fltk-1.3.4-1/FL/Fl_Printer.H ****   printer->start_page();
 139:fltk-1.3.4-1/FL/Fl_Printer.H ****   printer->printable_rect(&width, &height);
 140:fltk-1.3.4-1/FL/Fl_Printer.H ****   fl_color(FL_BLACK);
 141:fltk-1.3.4-1/FL/Fl_Printer.H ****   fl_line_style(FL_SOLID, 2);
 142:fltk-1.3.4-1/FL/Fl_Printer.H ****   fl_rect(0, 0, width, height);
 143:fltk-1.3.4-1/FL/Fl_Printer.H ****   fl_font(FL_COURIER, 12);
 144:fltk-1.3.4-1/FL/Fl_Printer.H ****   time_t now; time(&now); fl_draw(ctime(&now), 0, fl_height());
 145:fltk-1.3.4-1/FL/Fl_Printer.H ****   printer->origin(width/2, height/2);
 146:fltk-1.3.4-1/FL/Fl_Printer.H ****   printer->print_widget(widget, -widget->w()/2, -widget->h()/2);
 147:fltk-1.3.4-1/FL/Fl_Printer.H ****   printer->end_page();
 148:fltk-1.3.4-1/FL/Fl_Printer.H ****   printer->end_job();
 149:fltk-1.3.4-1/FL/Fl_Printer.H ****  }
 150:fltk-1.3.4-1/FL/Fl_Printer.H ****  delete printer;
 151:fltk-1.3.4-1/FL/Fl_Printer.H ****  \endcode
 152:fltk-1.3.4-1/FL/Fl_Printer.H ****  <b>Platform specifics</b>
 153:fltk-1.3.4-1/FL/Fl_Printer.H ****  <ul>
 154:fltk-1.3.4-1/FL/Fl_Printer.H ****  <li>Unix/Linux platforms:
 155:fltk-1.3.4-1/FL/Fl_Printer.H ****  Unless it has been previously changed, the default paper size is A4.
 156:fltk-1.3.4-1/FL/Fl_Printer.H ****  To change that, press the "Properties" button of the "Print" dialog window
 157:fltk-1.3.4-1/FL/Fl_Printer.H ****  opened by an Fl_Printer::start_job() call. This opens a "Printer Properties" window where it's
 158:fltk-1.3.4-1/FL/Fl_Printer.H ****  possible to select the adequate paper size. Finally press the "Save" button therein to assign
 159:fltk-1.3.4-1/FL/Fl_Printer.H ****  the chosen paper size to the chosen printer for this and all further print operations.
 160:fltk-1.3.4-1/FL/Fl_Printer.H ****  <br>Class Fl_RGB_Image prints but loses its transparency if it has one.
 161:fltk-1.3.4-1/FL/Fl_Printer.H ****  See class Fl_PostScript_Graphics_Driver for a description of how UTF-8 strings appear in print.
 162:fltk-1.3.4-1/FL/Fl_Printer.H ****  Use the static public attributes of this class to set the print dialog to other languages 
 163:fltk-1.3.4-1/FL/Fl_Printer.H ****  than English. For example, the "Printer:" dialog item Fl_Printer::dialog_printer can be set to Fre
 164:fltk-1.3.4-1/FL/Fl_Printer.H ****  \code
 165:fltk-1.3.4-1/FL/Fl_Printer.H ****  Fl_Printer::dialog_printer = "Imprimante:";
 166:fltk-1.3.4-1/FL/Fl_Printer.H ****  \endcode
 167:fltk-1.3.4-1/FL/Fl_Printer.H ****  before creation of the Fl_Printer object.
 168:fltk-1.3.4-1/FL/Fl_Printer.H ****  Use Fl_PostScript_File_Device::file_chooser_title to customize the title of the file chooser dialo
 169:fltk-1.3.4-1/FL/Fl_Printer.H ****  when using the "Print To File" option of the print dialog. 
 170:fltk-1.3.4-1/FL/Fl_Printer.H ****  <li>MSWindows platform: Transparent Fl_RGB_Image 's don't print with exact transparency on most pr
 171:fltk-1.3.4-1/FL/Fl_Printer.H ****  Fl_RGB_Image 's don't rotate() well.
 172:fltk-1.3.4-1/FL/Fl_Printer.H ****  A workaround is to use the print_window_part() call. 
 173:fltk-1.3.4-1/FL/Fl_Printer.H ****  <li>Mac OS X platform: all graphics requests print as on display.
 174:fltk-1.3.4-1/FL/Fl_Printer.H ****  </ul>
 175:fltk-1.3.4-1/FL/Fl_Printer.H ****  */
 176:fltk-1.3.4-1/FL/Fl_Printer.H **** class FL_EXPORT Fl_Printer : public Fl_Paged_Device {
 177:fltk-1.3.4-1/FL/Fl_Printer.H **** public:
 178:fltk-1.3.4-1/FL/Fl_Printer.H ****   static const char *class_id;
 179:fltk-1.3.4-1/FL/Fl_Printer.H ****   const char *class_name() {return class_id;};
  68              		.loc 2 179 0
  69              		.cfi_startproc
  70              	.LVL2:
  71              		.loc 2 179 0
  72 0000 488B0500 		movq	_ZN10Fl_Printer8class_idE(%rip), %rax
  72      000000
  73 0007 C3       		ret
  74              		.cfi_endproc
  75              	.LFE396:
  77              		.section	.text.unlikely._ZN10Fl_Printer10class_nameEv,"axG",@progbits,_ZN10Fl_Printer10class_nameE
  78              	.LCOLDE2:
  79              		.section	.text._ZN10Fl_Printer10class_nameEv,"axG",@progbits,_ZN10Fl_Printer10class_nameEv,comdat
  80              	.LHOTE2:
  81              		.section	.text.unlikely._ZN10Fl_Printer9start_jobEiPiS0_,"ax",@progbits
  82              		.align 2
  83              	.LCOLDB3:
  84              		.section	.text._ZN10Fl_Printer9start_jobEiPiS0_,"ax",@progbits
  85              	.LHOTB3:
  86              		.align 2
  87              		.p2align 4,,15
  88              		.globl	_ZN10Fl_Printer9start_jobEiPiS0_
  90              	_ZN10Fl_Printer9start_jobEiPiS0_:
  91              	.LFB400:
  92              		.file 3 "fltk-1.3.4-1/src/Fl_Printer.cxx"
   1:fltk-1.3.4-1/src/Fl_Printer.cxx ****    1              		.file	"Fl_Printer.cxx"
   2:fltk-1.3.4-1/src/Fl_Printer.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Printer.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Printer.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
   5:fltk-1.3.4-1/src/Fl_Printer.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Printer.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Printer.cxx ****    7              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
   8:fltk-1.3.4-1/src/Fl_Printer.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Printer.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Printer.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Printer.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
  12:fltk-1.3.4-1/src/Fl_Printer.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Printer.cxx ****   13              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
  14:fltk-1.3.4-1/src/Fl_Printer.cxx ****   14              		.weak	_ZN9Fl_Device10class_nameEv
  15:fltk-1.3.4-1/src/Fl_Printer.cxx ****   16              	_ZN9Fl_Device10class_nameEv:
  16:fltk-1.3.4-1/src/Fl_Printer.cxx ****   17              	.LFB240:
  17:fltk-1.3.4-1/src/Fl_Printer.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Device.H"
  18:fltk-1.3.4-1/src/Fl_Printer.cxx ****    1:fltk-1.3.4-1/FL/Fl_Device.H **** //
  19:fltk-1.3.4-1/src/Fl_Printer.cxx ****    2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
  20:fltk-1.3.4-1/src/Fl_Printer.cxx ****    3:fltk-1.3.4-1/FL/Fl_Device.H **** //
  21:fltk-1.3.4-1/src/Fl_Printer.cxx ****    4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Su
  22:fltk-1.3.4-1/src/Fl_Printer.cxx ****    5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
  23:fltk-1.3.4-1/src/Fl_Printer.cxx ****    6:fltk-1.3.4-1/FL/Fl_Device.H **** //
  24:fltk-1.3.4-1/src/Fl_Printer.cxx ****    7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
  25:fltk-1.3.4-1/src/Fl_Printer.cxx ****    8:fltk-1.3.4-1/FL/Fl_Device.H **** //
  26:fltk-1.3.4-1/src/Fl_Printer.cxx ****    9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights
  27:fltk-1.3.4-1/src/Fl_Printer.cxx ****   10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with th
  28:fltk-1.3.4-1/src/Fl_Printer.cxx ****   11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  29:fltk-1.3.4-1/src/Fl_Printer.cxx ****   12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  30:fltk-1.3.4-1/src/Fl_Printer.cxx ****   13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  31:fltk-1.3.4-1/src/Fl_Printer.cxx ****   14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  32:fltk-1.3.4-1/src/Fl_Printer.cxx ****   15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  33:fltk-1.3.4-1/src/Fl_Printer.cxx ****   16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  34:fltk-1.3.4-1/src/Fl_Printer.cxx ****   17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  35:fltk-1.3.4-1/src/Fl_Printer.cxx ****   18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  36:fltk-1.3.4-1/src/Fl_Printer.cxx ****   19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  37:fltk-1.3.4-1/src/Fl_Printer.cxx ****   20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  38:fltk-1.3.4-1/src/Fl_Printer.cxx ****   21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver,
  39:fltk-1.3.4-1/src/Fl_Printer.cxx ****   22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  40:fltk-1.3.4-1/src/Fl_Printer.cxx ****   23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  41:fltk-1.3.4-1/src/Fl_Printer.cxx ****   24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  42:fltk-1.3.4-1/src/Fl_Printer.cxx ****   25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  43:fltk-1.3.4-1/src/Fl_Printer.cxx ****   26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  44:fltk-1.3.4-1/src/Fl_Printer.cxx ****   27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  45:fltk-1.3.4-1/src/Fl_Printer.cxx ****   28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
  46:fltk-1.3.4-1/src/Fl_Printer.cxx ****   29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
  47:fltk-1.3.4-1/src/Fl_Printer.cxx ****   30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
  48:fltk-1.3.4-1/src/Fl_Printer.cxx ****   31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  49:fltk-1.3.4-1/src/Fl_Printer.cxx ****   32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  50:fltk-1.3.4-1/src/Fl_Printer.cxx ****   33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  51:fltk-1.3.4-1/src/Fl_Printer.cxx ****   34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  52:fltk-1.3.4-1/src/Fl_Printer.cxx ****   35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  53:fltk-1.3.4-1/src/Fl_Printer.cxx ****   36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  54:fltk-1.3.4-1/src/Fl_Printer.cxx ****   37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  55:fltk-1.3.4-1/src/Fl_Printer.cxx ****   38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all g
  56:fltk-1.3.4-1/src/Fl_Printer.cxx ****   39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  57:fltk-1.3.4-1/src/Fl_Printer.cxx ****   40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  58:fltk-1.3.4-1/src/Fl_Printer.cxx ****   41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  59:fltk-1.3.4-1/src/Fl_Printer.cxx ****   42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  60:fltk-1.3.4-1/src/Fl_Printer.cxx ****   43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  61:fltk-1.3.4-1/src/Fl_Printer.cxx ****   44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
  62:fltk-1.3.4-1/src/Fl_Printer.cxx ****   45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must 
  63:fltk-1.3.4-1/src/Fl_Printer.cxx ****   46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
  64:fltk-1.3.4-1/src/Fl_Printer.cxx ****   47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
  65:fltk-1.3.4-1/src/Fl_Printer.cxx ****   48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  66:fltk-1.3.4-1/src/Fl_Printer.cxx ****   49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w
  67:fltk-1.3.4-1/src/Fl_Printer.cxx ****   50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  68:fltk-1.3.4-1/src/Fl_Printer.cxx ****   51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  69:fltk-1.3.4-1/src/Fl_Printer.cxx ****   52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
  70:fltk-1.3.4-1/src/Fl_Printer.cxx ****   53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
  71:fltk-1.3.4-1/src/Fl_Printer.cxx ****   54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  72:fltk-1.3.4-1/src/Fl_Printer.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  73:fltk-1.3.4-1/src/Fl_Printer.cxx ****   56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
  74:fltk-1.3.4-1/src/Fl_Printer.cxx ****   57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
  75:fltk-1.3.4-1/src/Fl_Printer.cxx ****   58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
  76:fltk-1.3.4-1/src/Fl_Printer.cxx ****   59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
  77:fltk-1.3.4-1/src/Fl_Printer.cxx ****   60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
  78:fltk-1.3.4-1/src/Fl_Printer.cxx ****   61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
  79:fltk-1.3.4-1/src/Fl_Printer.cxx ****   62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  80:fltk-1.3.4-1/src/Fl_Printer.cxx ****   63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
  81:fltk-1.3.4-1/src/Fl_Printer.cxx ****   64:fltk-1.3.4-1/FL/Fl_Device.H **** 
  82:fltk-1.3.4-1/src/Fl_Printer.cxx ****   65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  83:fltk-1.3.4-1/src/Fl_Printer.cxx ****   66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
  84:fltk-1.3.4-1/src/Fl_Printer.cxx ****   67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type in
  85:fltk-1.3.4-1/src/Fl_Printer.cxx ****   68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  86:fltk-1.3.4-1/src/Fl_Printer.cxx ****   69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
  87:fltk-1.3.4-1/src/Fl_Printer.cxx ****   70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  88:fltk-1.3.4-1/src/Fl_Printer.cxx ****   71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  89:fltk-1.3.4-1/src/Fl_Printer.cxx ****   72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class 
  90:fltk-1.3.4-1/src/Fl_Printer.cxx ****   73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/src/Fl_Printer.cxx ****   74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
  92:fltk-1.3.4-1/src/Fl_Printer.cxx ****   75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  93:fltk-1.3.4-1/src/Fl_Printer.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
  94:fltk-1.3.4-1/src/Fl_Printer.cxx ****   77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it
  95:fltk-1.3.4-1/src/Fl_Printer.cxx ****   78:fltk-1.3.4-1/FL/Fl_Device.H ****    
  96:fltk-1.3.4-1/src/Fl_Printer.cxx ****   79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be c
  97:fltk-1.3.4-1/src/Fl_Printer.cxx ****   80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
  98:fltk-1.3.4-1/src/Fl_Printer.cxx ****   81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ..
  99:fltk-1.3.4-1/src/Fl_Printer.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 100:fltk-1.3.4-1/src/Fl_Printer.cxx ****   83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 101:fltk-1.3.4-1/src/Fl_Printer.cxx ****   84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 102:fltk-1.3.4-1/src/Fl_Printer.cxx ****   19              		.loc 1 84 0
 103:fltk-1.3.4-1/src/Fl_Printer.cxx ****   20              		.cfi_startproc
 104:fltk-1.3.4-1/src/Fl_Printer.cxx ****   21              	.LVL0:
 105:fltk-1.3.4-1/src/Fl_Printer.cxx ****   22              		.loc 1 84 0
 106:fltk-1.3.4-1/src/Fl_Printer.cxx ****   23 0000 488B0500 		movq	_ZN9Fl_Device8class_idE(%rip), %rax
 107:fltk-1.3.4-1/src/Fl_Printer.cxx ****   23      000000
 108:fltk-1.3.4-1/src/Fl_Printer.cxx ****   24 0007 C3       		ret
 109:fltk-1.3.4-1/src/Fl_Printer.cxx ****   25              		.cfi_endproc
 110:fltk-1.3.4-1/src/Fl_Printer.cxx ****   26              	.LFE240:
 111:fltk-1.3.4-1/src/Fl_Printer.cxx ****   28              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Devi
 112:fltk-1.3.4-1/src/Fl_Printer.cxx ****   29              	.LCOLDE0:
 113:fltk-1.3.4-1/src/Fl_Printer.cxx ****   30              		.section	.text._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class
 114:fltk-1.3.4-1/src/Fl_Printer.cxx ****   31              	.LHOTE0:
  93              		.loc 3 114 0
  94              		.cfi_startproc
  95              	.LVL3:
 115:fltk-1.3.4-1/src/Fl_Printer.cxx ****   32              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
  96              		.loc 3 115 0
  97 0000 488B7F18 		movq	24(%rdi), %rdi
  98              	.LVL4:
  99 0004 488B07   		movq	(%rdi), %rax
 100 0007 488B4020 		movq	32(%rax), %rax
 101 000b FFE0     		jmp	*%rax
 102              	.LVL5:
 103              		.cfi_endproc
 104              	.LFE400:
 106              		.section	.text.unlikely._ZN10Fl_Printer9start_jobEiPiS0_
 107              	.LCOLDE3:
 108              		.section	.text._ZN10Fl_Printer9start_jobEiPiS0_
 109              	.LHOTE3:
 110              		.section	.text.unlikely._ZN10Fl_Printer10start_pageEv,"ax",@progbits
 111              		.align 2
 112              	.LCOLDB4:
 113              		.section	.text._ZN10Fl_Printer10start_pageEv,"ax",@progbits
 114              	.LHOTB4:
 115              		.align 2
 116              		.p2align 4,,15
 117              		.globl	_ZN10Fl_Printer10start_pageEv
 119              	_ZN10Fl_Printer10start_pageEv:
 120              	.LFB401:
 116:fltk-1.3.4-1/src/Fl_Printer.cxx ****   33              		.align 2
 117:fltk-1.3.4-1/src/Fl_Printer.cxx ****   34              	.LCOLDB1:
 118:fltk-1.3.4-1/src/Fl_Printer.cxx ****   35              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 119:fltk-1.3.4-1/src/Fl_Printer.cxx ****   36              	.LHOTB1:
 121              		.loc 3 119 0
 122              		.cfi_startproc
 123              	.LVL6:
 120:fltk-1.3.4-1/src/Fl_Printer.cxx ****   37              		.align 2
 124              		.loc 3 120 0
 125 0000 488B7F18 		movq	24(%rdi), %rdi
 126              	.LVL7:
 127 0004 488B07   		movq	(%rdi), %rax
 128 0007 488B4028 		movq	40(%rax), %rax
 129 000b FFE0     		jmp	*%rax
 130              	.LVL8:
 131              		.cfi_endproc
 132              	.LFE401:
 134              		.section	.text.unlikely._ZN10Fl_Printer10start_pageEv
 135              	.LCOLDE4:
 136              		.section	.text._ZN10Fl_Printer10start_pageEv
 137              	.LHOTE4:
 138              		.section	.text.unlikely._ZN10Fl_Printer14printable_rectEPiS0_,"ax",@progbits
 139              		.align 2
 140              	.LCOLDB5:
 141              		.section	.text._ZN10Fl_Printer14printable_rectEPiS0_,"ax",@progbits
 142              	.LHOTB5:
 143              		.align 2
 144              		.p2align 4,,15
 145              		.globl	_ZN10Fl_Printer14printable_rectEPiS0_
 147              	_ZN10Fl_Printer14printable_rectEPiS0_:
 148              	.LFB402:
 121:fltk-1.3.4-1/src/Fl_Printer.cxx ****   38              		.p2align 4,,15
 122:fltk-1.3.4-1/src/Fl_Printer.cxx ****   39              		.weak	_ZN9Fl_DeviceD2Ev
 123:fltk-1.3.4-1/src/Fl_Printer.cxx ****   41              	_ZN9Fl_DeviceD2Ev:
 124:fltk-1.3.4-1/src/Fl_Printer.cxx ****   42              	.LFB242:
 149              		.loc 3 124 0
 150              		.cfi_startproc
 151              	.LVL9:
 125:fltk-1.3.4-1/src/Fl_Printer.cxx ****   85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
 152              		.loc 3 125 0
 153 0000 488B7F18 		movq	24(%rdi), %rdi
 154              	.LVL10:
 155 0004 488B07   		movq	(%rdi), %rax
 156 0007 488B4030 		movq	48(%rax), %rax
 157 000b FFE0     		jmp	*%rax
 158              	.LVL11:
 159              		.cfi_endproc
 160              	.LFE402:
 162              		.section	.text.unlikely._ZN10Fl_Printer14printable_rectEPiS0_
 163              	.LCOLDE5:
 164              		.section	.text._ZN10Fl_Printer14printable_rectEPiS0_
 165              	.LHOTE5:
 166              		.section	.text.unlikely._ZN10Fl_Printer7marginsEPiS0_S0_S0_,"ax",@progbits
 167              		.align 2
 168              	.LCOLDB6:
 169              		.section	.text._ZN10Fl_Printer7marginsEPiS0_S0_S0_,"ax",@progbits
 170              	.LHOTB6:
 171              		.align 2
 172              		.p2align 4,,15
 173              		.globl	_ZN10Fl_Printer7marginsEPiS0_S0_S0_
 175              	_ZN10Fl_Printer7marginsEPiS0_S0_S0_:
 176              	.LFB403:
 126:fltk-1.3.4-1/src/Fl_Printer.cxx ****   86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
 127:fltk-1.3.4-1/src/Fl_Printer.cxx ****   87:fltk-1.3.4-1/FL/Fl_Device.H ****    
 128:fltk-1.3.4-1/src/Fl_Printer.cxx ****   88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the de
 129:fltk-1.3.4-1/src/Fl_Printer.cxx ****   89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
 177              		.loc 3 129 0
 178              		.cfi_startproc
 179              	.LVL12:
 130:fltk-1.3.4-1/src/Fl_Printer.cxx ****   90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 180              		.loc 3 130 0
 181 0000 488B7F18 		movq	24(%rdi), %rdi
 182              	.LVL13:
 183 0004 488B07   		movq	(%rdi), %rax
 184 0007 FF6038   		jmp	*56(%rax)
 185              	.LVL14:
 186              		.cfi_endproc
 187              	.LFE403:
 189              		.section	.text.unlikely._ZN10Fl_Printer7marginsEPiS0_S0_S0_
 190              	.LCOLDE6:
 191              		.section	.text._ZN10Fl_Printer7marginsEPiS0_S0_S0_
 192              	.LHOTE6:
 193              		.section	.text.unlikely._ZN10Fl_Printer6originEPiS0_,"ax",@progbits
 194              		.align 2
 195              	.LCOLDB7:
 196              		.section	.text._ZN10Fl_Printer6originEPiS0_,"ax",@progbits
 197              	.LHOTB7:
 198              		.align 2
 199              		.p2align 4,,15
 200              		.globl	_ZN10Fl_Printer6originEPiS0_
 202              	_ZN10Fl_Printer6originEPiS0_:
 203              	.LFB404:
 131:fltk-1.3.4-1/src/Fl_Printer.cxx ****   91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
 132:fltk-1.3.4-1/src/Fl_Printer.cxx ****   43              		.loc 1 91 0
 133:fltk-1.3.4-1/src/Fl_Printer.cxx ****   44              		.cfi_startproc
 134:fltk-1.3.4-1/src/Fl_Printer.cxx ****   45              	.LVL1:
 204              		.loc 3 134 0
 205              		.cfi_startproc
 206              	.LVL15:
 135:fltk-1.3.4-1/src/Fl_Printer.cxx ****   46 0000 F3C3     		rep ret
 207              		.loc 3 135 0
 208 0000 488B7F18 		movq	24(%rdi), %rdi
 209              	.LVL16:
 210 0004 488B07   		movq	(%rdi), %rax
 211 0007 FF6048   		jmp	*72(%rax)
 212              	.LVL17:
 213              		.cfi_endproc
 214              	.LFE404:
 216              		.section	.text.unlikely._ZN10Fl_Printer6originEPiS0_
 217              	.LCOLDE7:
 218              		.section	.text._ZN10Fl_Printer6originEPiS0_
 219              	.LHOTE7:
 220              		.section	.text.unlikely._ZN10Fl_Printer6originEii,"ax",@progbits
 221              		.align 2
 222              	.LCOLDB8:
 223              		.section	.text._ZN10Fl_Printer6originEii,"ax",@progbits
 224              	.LHOTB8:
 225              		.align 2
 226              		.p2align 4,,15
 227              		.globl	_ZN10Fl_Printer6originEii
 229              	_ZN10Fl_Printer6originEii:
 230              	.LFB405:
 136:fltk-1.3.4-1/src/Fl_Printer.cxx ****   47              		.cfi_endproc
 137:fltk-1.3.4-1/src/Fl_Printer.cxx ****   48              	.LFE242:
 138:fltk-1.3.4-1/src/Fl_Printer.cxx ****   50              		.section	.text.unlikely._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,com
 139:fltk-1.3.4-1/src/Fl_Printer.cxx ****   51              	.LCOLDE1:
 231              		.loc 3 139 0
 232              		.cfi_startproc
 233              	.LVL18:
 140:fltk-1.3.4-1/src/Fl_Printer.cxx ****   52              		.section	.text._ZN9Fl_DeviceD2Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 234              		.loc 3 140 0
 235 0000 488B7F18 		movq	24(%rdi), %rdi
 236              	.LVL19:
 237 0004 488B07   		movq	(%rdi), %rax
 238 0007 FF6040   		jmp	*64(%rax)
 239              	.LVL20:
 240              		.cfi_endproc
 241              	.LFE405:
 243              		.section	.text.unlikely._ZN10Fl_Printer6originEii
 244              	.LCOLDE8:
 245              		.section	.text._ZN10Fl_Printer6originEii
 246              	.LHOTE8:
 247              		.section	.text.unlikely._ZN10Fl_Printer5scaleEff,"ax",@progbits
 248              		.align 2
 249              	.LCOLDB9:
 250              		.section	.text._ZN10Fl_Printer5scaleEff,"ax",@progbits
 251              	.LHOTB9:
 252              		.align 2
 253              		.p2align 4,,15
 254              		.globl	_ZN10Fl_Printer5scaleEff
 256              	_ZN10Fl_Printer5scaleEff:
 257              	.LFB406:
 141:fltk-1.3.4-1/src/Fl_Printer.cxx ****   53              	.LHOTE1:
 142:fltk-1.3.4-1/src/Fl_Printer.cxx ****   54              		.weak	_ZN9Fl_DeviceD1Ev
 143:fltk-1.3.4-1/src/Fl_Printer.cxx ****   55              		.set	_ZN9Fl_DeviceD1Ev,_ZN9Fl_DeviceD2Ev
 144:fltk-1.3.4-1/src/Fl_Printer.cxx ****   56              		.section	.text.unlikely._ZN10Fl_Printer10class_nameEv,"axG",@progbits,_ZN10Fl_P
 258              		.loc 3 144 0
 259              		.cfi_startproc
 260              	.LVL21:
 145:fltk-1.3.4-1/src/Fl_Printer.cxx ****   57              		.align 2
 261              		.loc 3 145 0
 262 0000 488B7F18 		movq	24(%rdi), %rdi
 263              	.LVL22:
 264 0004 488B07   		movq	(%rdi), %rax
 265 0007 FF6050   		jmp	*80(%rax)
 266              	.LVL23:
 267              		.cfi_endproc
 268              	.LFE406:
 270              		.section	.text.unlikely._ZN10Fl_Printer5scaleEff
 271              	.LCOLDE9:
 272              		.section	.text._ZN10Fl_Printer5scaleEff
 273              	.LHOTE9:
 274              		.section	.text.unlikely._ZN10Fl_Printer6rotateEf,"ax",@progbits
 275              		.align 2
 276              	.LCOLDB10:
 277              		.section	.text._ZN10Fl_Printer6rotateEf,"ax",@progbits
 278              	.LHOTB10:
 279              		.align 2
 280              		.p2align 4,,15
 281              		.globl	_ZN10Fl_Printer6rotateEf
 283              	_ZN10Fl_Printer6rotateEf:
 284              	.LFB407:
 146:fltk-1.3.4-1/src/Fl_Printer.cxx ****   58              	.LCOLDB2:
 147:fltk-1.3.4-1/src/Fl_Printer.cxx ****   59              		.section	.text._ZN10Fl_Printer10class_nameEv,"axG",@progbits,_ZN10Fl_Printer10c
 148:fltk-1.3.4-1/src/Fl_Printer.cxx ****   60              	.LHOTB2:
 149:fltk-1.3.4-1/src/Fl_Printer.cxx ****   61              		.align 2
 285              		.loc 3 149 0
 286              		.cfi_startproc
 287              	.LVL24:
 150:fltk-1.3.4-1/src/Fl_Printer.cxx ****   62              		.p2align 4,,15
 288              		.loc 3 150 0
 289 0000 488B7F18 		movq	24(%rdi), %rdi
 290              	.LVL25:
 291 0004 488B07   		movq	(%rdi), %rax
 292 0007 FF6058   		jmp	*88(%rax)
 293              	.LVL26:
 294              		.cfi_endproc
 295              	.LFE407:
 297              		.section	.text.unlikely._ZN10Fl_Printer6rotateEf
 298              	.LCOLDE10:
 299              		.section	.text._ZN10Fl_Printer6rotateEf
 300              	.LHOTE10:
 301              		.section	.text.unlikely._ZN10Fl_Printer9translateEii,"ax",@progbits
 302              		.align 2
 303              	.LCOLDB11:
 304              		.section	.text._ZN10Fl_Printer9translateEii,"ax",@progbits
 305              	.LHOTB11:
 306              		.align 2
 307              		.p2align 4,,15
 308              		.globl	_ZN10Fl_Printer9translateEii
 310              	_ZN10Fl_Printer9translateEii:
 311              	.LFB408:
 151:fltk-1.3.4-1/src/Fl_Printer.cxx ****   63              		.weak	_ZN10Fl_Printer10class_nameEv
 152:fltk-1.3.4-1/src/Fl_Printer.cxx ****   65              	_ZN10Fl_Printer10class_nameEv:
 153:fltk-1.3.4-1/src/Fl_Printer.cxx ****   66              	.LFB396:
 154:fltk-1.3.4-1/src/Fl_Printer.cxx ****   67              		.file 2 "fltk-1.3.4-1/FL/Fl_Printer.H"
 312              		.loc 3 154 0
 313              		.cfi_startproc
 314              	.LVL27:
 155:fltk-1.3.4-1/src/Fl_Printer.cxx ****    1:fltk-1.3.4-1/FL/Fl_Printer.H **** //
 315              		.loc 3 155 0
 316 0000 488B7F18 		movq	24(%rdi), %rdi
 317              	.LVL28:
 318 0004 488B07   		movq	(%rdi), %rax
 319 0007 FF6060   		jmp	*96(%rax)
 320              	.LVL29:
 321              		.cfi_endproc
 322              	.LFE408:
 324              		.section	.text.unlikely._ZN10Fl_Printer9translateEii
 325              	.LCOLDE11:
 326              		.section	.text._ZN10Fl_Printer9translateEii
 327              	.LHOTE11:
 328              		.section	.text.unlikely._ZN10Fl_Printer11untranslateEv,"ax",@progbits
 329              		.align 2
 330              	.LCOLDB12:
 331              		.section	.text._ZN10Fl_Printer11untranslateEv,"ax",@progbits
 332              	.LHOTB12:
 333              		.align 2
 334              		.p2align 4,,15
 335              		.globl	_ZN10Fl_Printer11untranslateEv
 337              	_ZN10Fl_Printer11untranslateEv:
 338              	.LFB409:
 156:fltk-1.3.4-1/src/Fl_Printer.cxx ****    2:fltk-1.3.4-1/FL/Fl_Printer.H **** // "$Id: Fl_Printer.H 10592 2015-02-26 15:38:54Z manolo $"
 157:fltk-1.3.4-1/src/Fl_Printer.cxx ****    3:fltk-1.3.4-1/FL/Fl_Printer.H **** //
 158:fltk-1.3.4-1/src/Fl_Printer.cxx ****    4:fltk-1.3.4-1/FL/Fl_Printer.H **** // Printing support for the Fast Light Tool Kit (FLTK).
 159:fltk-1.3.4-1/src/Fl_Printer.cxx ****    5:fltk-1.3.4-1/FL/Fl_Printer.H **** //
 339              		.loc 3 159 0
 340              		.cfi_startproc
 341              	.LVL30:
 160:fltk-1.3.4-1/src/Fl_Printer.cxx ****    6:fltk-1.3.4-1/FL/Fl_Printer.H **** // Copyright 2010-2014 by Bill Spitzak and others.
 342              		.loc 3 160 0
 343 0000 488B7F18 		movq	24(%rdi), %rdi
 344              	.LVL31:
 345 0004 488B07   		movq	(%rdi), %rax
 346 0007 FF6068   		jmp	*104(%rax)
 347              	.LVL32:
 348              		.cfi_endproc
 349              	.LFE409:
 351              		.section	.text.unlikely._ZN10Fl_Printer11untranslateEv
 352              	.LCOLDE12:
 353              		.section	.text._ZN10Fl_Printer11untranslateEv
 354              	.LHOTE12:
 355              		.section	.text.unlikely._ZN10Fl_Printer8end_pageEv,"ax",@progbits
 356              		.align 2
 357              	.LCOLDB13:
 358              		.section	.text._ZN10Fl_Printer8end_pageEv,"ax",@progbits
 359              	.LHOTB13:
 360              		.align 2
 361              		.p2align 4,,15
 362              		.globl	_ZN10Fl_Printer8end_pageEv
 364              	_ZN10Fl_Printer8end_pageEv:
 365              	.LFB410:
 161:fltk-1.3.4-1/src/Fl_Printer.cxx ****    7:fltk-1.3.4-1/FL/Fl_Printer.H **** //
 162:fltk-1.3.4-1/src/Fl_Printer.cxx ****    8:fltk-1.3.4-1/FL/Fl_Printer.H **** // This library is free software. Distribution and use right
 163:fltk-1.3.4-1/src/Fl_Printer.cxx ****    9:fltk-1.3.4-1/FL/Fl_Printer.H **** // the file "COPYING" which should have been included with t
 164:fltk-1.3.4-1/src/Fl_Printer.cxx ****   10:fltk-1.3.4-1/FL/Fl_Printer.H **** // file is missing or damaged, see the license at:
 366              		.loc 3 164 0
 367              		.cfi_startproc
 368              	.LVL33:
 165:fltk-1.3.4-1/src/Fl_Printer.cxx ****   11:fltk-1.3.4-1/FL/Fl_Printer.H **** //
 369              		.loc 3 165 0
 370 0000 488B7F18 		movq	24(%rdi), %rdi
 371              	.LVL34:
 372 0004 488B07   		movq	(%rdi), %rax
 373 0007 488B8080 		movq	128(%rax), %rax
 373      000000
 374 000e FFE0     		jmp	*%rax
 375              	.LVL35:
 376              		.cfi_endproc
 377              	.LFE410:
 379              		.section	.text.unlikely._ZN10Fl_Printer8end_pageEv
 380              	.LCOLDE13:
 381              		.section	.text._ZN10Fl_Printer8end_pageEv
 382              	.LHOTE13:
 383              		.section	.text.unlikely._ZN10Fl_Printer7end_jobEv,"ax",@progbits
 384              		.align 2
 385              	.LCOLDB14:
 386              		.section	.text._ZN10Fl_Printer7end_jobEv,"ax",@progbits
 387              	.LHOTB14:
 388              		.align 2
 389              		.p2align 4,,15
 390              		.globl	_ZN10Fl_Printer7end_jobEv
 392              	_ZN10Fl_Printer7end_jobEv:
 393              	.LFB411:
 166:fltk-1.3.4-1/src/Fl_Printer.cxx ****   12:fltk-1.3.4-1/FL/Fl_Printer.H **** //     http://www.fltk.org/COPYING.php
 167:fltk-1.3.4-1/src/Fl_Printer.cxx ****   13:fltk-1.3.4-1/FL/Fl_Printer.H **** //
 168:fltk-1.3.4-1/src/Fl_Printer.cxx ****   14:fltk-1.3.4-1/FL/Fl_Printer.H **** // Please report all bugs and problems on the following page
 169:fltk-1.3.4-1/src/Fl_Printer.cxx ****   15:fltk-1.3.4-1/FL/Fl_Printer.H **** //
 394              		.loc 3 169 0
 395              		.cfi_startproc
 396              	.LVL36:
 170:fltk-1.3.4-1/src/Fl_Printer.cxx ****   16:fltk-1.3.4-1/FL/Fl_Printer.H **** //     http://www.fltk.org/str.php
 397              		.loc 3 170 0
 398 0000 488B7F18 		movq	24(%rdi), %rdi
 399              	.LVL37:
 400 0004 488B07   		movq	(%rdi), %rax
 401 0007 FFA08800 		jmp	*136(%rax)
 401      0000
 402              	.LVL38:
 403              		.cfi_endproc
 404              	.LFE411:
 406              		.section	.text.unlikely._ZN10Fl_Printer7end_jobEv
 407              	.LCOLDE14:
 408              		.section	.text._ZN10Fl_Printer7end_jobEv
 409              	.LHOTE14:
 410              		.section	.text.unlikely._ZN10Fl_Printer12print_widgetEP9Fl_Widgetii,"ax",@progbits
 411              		.align 2
 412              	.LCOLDB15:
 413              		.section	.text._ZN10Fl_Printer12print_widgetEP9Fl_Widgetii,"ax",@progbits
 414              	.LHOTB15:
 415              		.align 2
 416              		.p2align 4,,15
 417              		.globl	_ZN10Fl_Printer12print_widgetEP9Fl_Widgetii
 419              	_ZN10Fl_Printer12print_widgetEP9Fl_Widgetii:
 420              	.LFB412:
 171:fltk-1.3.4-1/src/Fl_Printer.cxx ****   17:fltk-1.3.4-1/FL/Fl_Printer.H **** //
 172:fltk-1.3.4-1/src/Fl_Printer.cxx ****   18:fltk-1.3.4-1/FL/Fl_Printer.H **** 
 173:fltk-1.3.4-1/src/Fl_Printer.cxx ****   19:fltk-1.3.4-1/FL/Fl_Printer.H **** /** \file Fl_Printer.H 
 174:fltk-1.3.4-1/src/Fl_Printer.cxx ****   20:fltk-1.3.4-1/FL/Fl_Printer.H ****  \brief declaration of classes Fl_Printer, Fl_System_Printer
 421              		.loc 3 174 0
 422              		.cfi_startproc
 423              	.LVL39:
 175:fltk-1.3.4-1/src/Fl_Printer.cxx ****   21:fltk-1.3.4-1/FL/Fl_Printer.H ****  */
 424              		.loc 3 175 0
 425 0000 488B7F18 		movq	24(%rdi), %rdi
 426              	.LVL40:
 427 0004 488B07   		movq	(%rdi), %rax
 428 0007 FF6070   		jmp	*112(%rax)
 429              	.LVL41:
 430              		.cfi_endproc
 431              	.LFE412:
 433              		.section	.text.unlikely._ZN10Fl_Printer12print_widgetEP9Fl_Widgetii
 434              	.LCOLDE15:
 435              		.section	.text._ZN10Fl_Printer12print_widgetEP9Fl_Widgetii
 436              	.LHOTE15:
 437              		.section	.text.unlikely._ZN10Fl_Printer17print_window_partEP9Fl_Windowiiiiii,"ax",@progbits
 438              		.align 2
 439              	.LCOLDB16:
 440              		.section	.text._ZN10Fl_Printer17print_window_partEP9Fl_Windowiiiiii,"ax",@progbits
 441              	.LHOTB16:
 442              		.align 2
 443              		.p2align 4,,15
 444              		.globl	_ZN10Fl_Printer17print_window_partEP9Fl_Windowiiiiii
 446              	_ZN10Fl_Printer17print_window_partEP9Fl_Windowiiiiii:
 447              	.LFB413:
 176:fltk-1.3.4-1/src/Fl_Printer.cxx ****   22:fltk-1.3.4-1/FL/Fl_Printer.H **** 
 177:fltk-1.3.4-1/src/Fl_Printer.cxx ****   23:fltk-1.3.4-1/FL/Fl_Printer.H **** #ifndef Fl_Printer_H
 178:fltk-1.3.4-1/src/Fl_Printer.cxx ****   24:fltk-1.3.4-1/FL/Fl_Printer.H **** #define Fl_Printer_H
 179:fltk-1.3.4-1/src/Fl_Printer.cxx ****   25:fltk-1.3.4-1/FL/Fl_Printer.H **** 
 448              		.loc 3 179 0
 449              		.cfi_startproc
 450              	.LVL42:
 180:fltk-1.3.4-1/src/Fl_Printer.cxx ****   26:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/x.H>
 451              		.loc 3 180 0
 452 0000 488B7F18 		movq	24(%rdi), %rdi
 453              	.LVL43:
 454 0004 488B07   		movq	(%rdi), %rax
 455 0007 FF6078   		jmp	*120(%rax)
 456              	.LVL44:
 457              		.cfi_endproc
 458              	.LFE413:
 460              		.section	.text.unlikely._ZN10Fl_Printer17print_window_partEP9Fl_Windowiiiiii
 461              	.LCOLDE16:
 462              		.section	.text._ZN10Fl_Printer17print_window_partEP9Fl_Windowiiiiii
 463              	.LHOTE16:
 464              		.section	.text.unlikely._ZN10Fl_Printer11set_currentEv,"ax",@progbits
 465              		.align 2
 466              	.LCOLDB17:
 467              		.section	.text._ZN10Fl_Printer11set_currentEv,"ax",@progbits
 468              	.LHOTB17:
 469              		.align 2
 470              		.p2align 4,,15
 471              		.globl	_ZN10Fl_Printer11set_currentEv
 473              	_ZN10Fl_Printer11set_currentEv:
 474              	.LFB414:
 181:fltk-1.3.4-1/src/Fl_Printer.cxx ****   27:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/Fl_Paged_Device.H>
 182:fltk-1.3.4-1/src/Fl_Printer.cxx ****   28:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/fl_draw.H>
 183:fltk-1.3.4-1/src/Fl_Printer.cxx ****   29:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/Fl_Pixmap.H>
 184:fltk-1.3.4-1/src/Fl_Printer.cxx ****   30:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/Fl_RGB_Image.H>
 475              		.loc 3 184 0
 476              		.cfi_startproc
 477              	.LVL45:
 185:fltk-1.3.4-1/src/Fl_Printer.cxx ****   31:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/Fl_Bitmap.H>
 478              		.loc 3 185 0
 479 0000 488B7F18 		movq	24(%rdi), %rdi
 480              	.LVL46:
 481 0004 488B07   		movq	(%rdi), %rax
 482 0007 FF6018   		jmp	*24(%rax)
 483              	.LVL47:
 484              		.cfi_endproc
 485              	.LFE414:
 487              		.section	.text.unlikely._ZN10Fl_Printer11set_currentEv
 488              	.LCOLDE17:
 489              		.section	.text._ZN10Fl_Printer11set_currentEv
 490              	.LHOTE17:
 491              		.section	.text.unlikely._ZN10Fl_PrinterD2Ev,"ax",@progbits
 492              		.align 2
 493              	.LCOLDB18:
 494              		.section	.text._ZN10Fl_PrinterD2Ev,"ax",@progbits
 495              	.LHOTB18:
 496              		.align 2
 497              		.p2align 4,,15
 498              		.globl	_ZN10Fl_PrinterD2Ev
 500              	_ZN10Fl_PrinterD2Ev:
 501              	.LFB417:
 186:fltk-1.3.4-1/src/Fl_Printer.cxx ****   32:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <stdio.h>
 187:fltk-1.3.4-1/src/Fl_Printer.cxx ****   33:fltk-1.3.4-1/FL/Fl_Printer.H **** #if !(defined(__APPLE__) || defined(WIN32))
 188:fltk-1.3.4-1/src/Fl_Printer.cxx ****   34:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <FL/Fl_PostScript.H>
 189:fltk-1.3.4-1/src/Fl_Printer.cxx ****   35:fltk-1.3.4-1/FL/Fl_Printer.H **** #elif defined(WIN32)
 190:fltk-1.3.4-1/src/Fl_Printer.cxx ****   36:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <commdlg.h>
 191:fltk-1.3.4-1/src/Fl_Printer.cxx ****   37:fltk-1.3.4-1/FL/Fl_Printer.H **** #endif
 192:fltk-1.3.4-1/src/Fl_Printer.cxx ****   38:fltk-1.3.4-1/FL/Fl_Printer.H **** 
 193:fltk-1.3.4-1/src/Fl_Printer.cxx ****   39:fltk-1.3.4-1/FL/Fl_Printer.H **** #if defined(__APPLE__) || defined(WIN32) || defined(FL_DOXYG
 502              		.loc 3 193 0
 503              		.cfi_startproc
 504              	.LVL48:
 505              	.LBB72:
 506              		.loc 3 193 0
 507 0000 48C70700 		movq	$_ZTV10Fl_Printer+16, (%rdi)
 507      000000
 194:fltk-1.3.4-1/src/Fl_Printer.cxx ****   40:fltk-1.3.4-1/FL/Fl_Printer.H **** /**
 195:fltk-1.3.4-1/src/Fl_Printer.cxx ****   41:fltk-1.3.4-1/FL/Fl_Printer.H ****  Print support under MSWindows and Mac OS.
 508              		.loc 3 195 0
 509 0007 488B7F18 		movq	24(%rdi), %rdi
 510              	.LVL49:
 511 000b 4885FF   		testq	%rdi, %rdi
 512 000e 7410     		je	.L19
 513              		.loc 3 195 0 is_stmt 0 discriminator 1
 514 0010 488B07   		movq	(%rdi), %rax
 515 0013 FF6010   		jmp	*16(%rax)
 516              	.LVL50:
 517 0016 662E0F1F 		.p2align 4,,10
 517      84000000 
 517      0000
 518              		.p2align 3
 519              	.L19:
 520 0020 F3C3     		rep ret
 521              	.LBE72:
 522              		.cfi_endproc
 523              	.LFE417:
 525              		.section	.text.unlikely._ZN10Fl_PrinterD2Ev
 526              	.LCOLDE18:
 527              		.section	.text._ZN10Fl_PrinterD2Ev
 528              	.LHOTE18:
 529              		.globl	_ZN10Fl_PrinterD1Ev
 530              		.set	_ZN10Fl_PrinterD1Ev,_ZN10Fl_PrinterD2Ev
 531              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 532              		.align 2
 533              	.LCOLDB19:
 534              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 535              	.LHOTB19:
 536              		.align 2
 537              		.p2align 4,,15
 538              		.weak	_ZN9Fl_DeviceD0Ev
 540              	_ZN9Fl_DeviceD0Ev:
 541              	.LFB244:
 542              		.loc 1 91 0 is_stmt 1
 543              		.cfi_startproc
 544              	.LVL51:
 545              		.loc 1 91 0
 546 0000 E9000000 		jmp	_ZdlPv
 546      00
 547              	.LVL52:
 548              		.cfi_endproc
 549              	.LFE244:
 551              		.section	.text.unlikely._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 552              	.LCOLDE19:
 553              		.section	.text._ZN9Fl_DeviceD0Ev,"axG",@progbits,_ZN9Fl_DeviceD5Ev,comdat
 554              	.LHOTE19:
 555              		.section	.text.unlikely._ZN10Fl_PrinterD0Ev,"ax",@progbits
 556              		.align 2
 557              	.LCOLDB20:
 558              		.section	.text._ZN10Fl_PrinterD0Ev,"ax",@progbits
 559              	.LHOTB20:
 560              		.align 2
 561              		.p2align 4,,15
 562              		.globl	_ZN10Fl_PrinterD0Ev
 564              	_ZN10Fl_PrinterD0Ev:
 565              	.LFB419:
 193:fltk-1.3.4-1/src/Fl_Printer.cxx ****   40:fltk-1.3.4-1/FL/Fl_Printer.H **** /**
 566              		.loc 3 193 0
 567              		.cfi_startproc
 568              	.LVL53:
 569 0000 53       		pushq	%rbx
 570              		.cfi_def_cfa_offset 16
 571              		.cfi_offset 3, -16
 193:fltk-1.3.4-1/src/Fl_Printer.cxx ****   40:fltk-1.3.4-1/FL/Fl_Printer.H **** /**
 572              		.loc 3 193 0
 573 0001 4889FB   		movq	%rdi, %rbx
 574              	.LBB73:
 575              	.LBB74:
 576 0004 48C70700 		movq	$_ZTV10Fl_Printer+16, (%rdi)
 576      000000
 577              		.loc 3 195 0
 578 000b 488B7F18 		movq	24(%rdi), %rdi
 579              	.LVL54:
 580 000f 4885FF   		testq	%rdi, %rdi
 581 0012 7406     		je	.L24
 582 0014 488B07   		movq	(%rdi), %rax
 583 0017 FF5010   		call	*16(%rax)
 584              	.LVL55:
 585              	.L24:
 586              	.LBE74:
 587              	.LBE73:
 196:fltk-1.3.4-1/src/Fl_Printer.cxx ****   42:fltk-1.3.4-1/FL/Fl_Printer.H **** 
 588              		.loc 3 196 0
 589 001a 4889DF   		movq	%rbx, %rdi
 590 001d 5B       		popq	%rbx
 591              		.cfi_def_cfa_offset 8
 592              	.LVL56:
 593 001e E9000000 		jmp	_ZdlPv
 593      00
 594              	.LVL57:
 595              		.cfi_endproc
 596              	.LFE419:
 598              		.section	.text.unlikely._ZN10Fl_PrinterD0Ev
 599              	.LCOLDE20:
 600              		.section	.text._ZN10Fl_PrinterD0Ev
 601              	.LHOTE20:
 602              		.section	.text.unlikely._ZN10Fl_PrinterC2Ev,"ax",@progbits
 603              		.align 2
 604              	.LCOLDB21:
 605              		.section	.text._ZN10Fl_PrinterC2Ev,"ax",@progbits
 606              	.LHOTB21:
 607              		.align 2
 608              		.p2align 4,,15
 609              		.globl	_ZN10Fl_PrinterC2Ev
 611              	_ZN10Fl_PrinterC2Ev:
 612              	.LFB398:
  92:fltk-1.3.4-1/src/Fl_Printer.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 613              		.loc 3 92 0
 614              		.cfi_startproc
 615              	.LVL58:
 616 0000 55       		pushq	%rbp
 617              		.cfi_def_cfa_offset 16
 618              		.cfi_offset 6, -16
 619 0001 53       		pushq	%rbx
 620              		.cfi_def_cfa_offset 24
 621              		.cfi_offset 3, -24
 622 0002 4889FB   		movq	%rdi, %rbx
 623 0005 4883EC08 		subq	$8, %rsp
 624              		.cfi_def_cfa_offset 32
 625              	.LBB75:
 626              	.LBB76:
 627              	.LBB77:
 628              	.LBB78:
 629              	.LBB79:
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
 630              		.loc 1 563 0
 631 0009 48C74708 		movq	$0, 8(%rdi)
 631      00000000 
 632              	.LVL59:
 633              	.LBE79:
 634              	.LBE78:
 635              		.file 4 "fltk-1.3.4-1/FL/Fl_Paged_Device.H"
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
 636              		.loc 4 114 0
 637 0011 C7471000 		movl	$0, 16(%rdi)
 637      000000
 638 0018 C7471400 		movl	$0, 20(%rdi)
 638      000000
 639              	.LVL60:
 640              	.LBE77:
 641              	.LBE76:
  92:fltk-1.3.4-1/src/Fl_Printer.cxx ****   76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
 642              		.loc 3 92 0
 643 001f 48C70700 		movq	$_ZTV10Fl_Printer+16, (%rdi)
 643      000000
  96:fltk-1.3.4-1/src/Fl_Printer.cxx ****   80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
 644              		.loc 3 96 0
 645 0026 BF180000 		movl	$24, %edi
 645      00
 646              	.LVL61:
 647 002b E8000000 		call	_Znwm
 647      00
 648              	.LVL62:
 649 0030 4889C5   		movq	%rax, %rbp
 650              	.LVL63:
 651              	.LBB80:
 652              	.LBB81:
 108:fltk-1.3.4-1/FL/Fl_Printer.H **** public:
 653              		.loc 2 108 0
 654 0033 4889C7   		movq	%rax, %rdi
 655 0036 E8000000 		call	_ZN25Fl_PostScript_File_DeviceC2Ev
 655      00
 656              	.LVL64:
 657              	.LBE81:
 658              	.LBE80:
  96:fltk-1.3.4-1/src/Fl_Printer.cxx ****   80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
 659              		.loc 3 96 0
 660 003b 48896B18 		movq	%rbp, 24(%rbx)
 661              	.LBB83:
 662              	.LBB82:
 108:fltk-1.3.4-1/FL/Fl_Printer.H **** public:
 663              		.loc 2 108 0
 664 003f 48C74500 		movq	$_ZTV21Fl_PostScript_Printer+16, 0(%rbp)
 664      00000000 
 665              	.LVL65:
 666              	.LBE82:
 667              	.LBE83:
  98:fltk-1.3.4-1/src/Fl_Printer.cxx ****   82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
 668              		.loc 3 98 0
 669 0047 4889EF   		movq	%rbp, %rdi
 670 004a E8000000 		call	_ZN25Fl_PostScript_File_Device6driverEv
 670      00
 671              	.LVL66:
 672              	.LBB84:
 673              	.LBB85:
 564:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 565:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 566:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 567:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void set_current(void);
 568:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Sets the graphics driver of this drawing surface. */
 569:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void driver(Fl_Graphics_Driver *graphics_driver) {_driver = graphics_driver;};
 674              		.loc 1 569 0
 675 004f 48894308 		movq	%rax, 8(%rbx)
 676              	.LVL67:
 677              	.LBE85:
 678              	.LBE84:
 679              	.LBE75:
  99:fltk-1.3.4-1/src/Fl_Printer.cxx ****   83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 680              		.loc 3 99 0
 681 0053 4883C408 		addq	$8, %rsp
 682              		.cfi_def_cfa_offset 24
 683 0057 5B       		popq	%rbx
 684              		.cfi_def_cfa_offset 16
 685              	.LVL68:
 686 0058 5D       		popq	%rbp
 687              		.cfi_def_cfa_offset 8
 688 0059 C3       		ret
 689              		.cfi_endproc
 690              	.LFE398:
 692              		.section	.text.unlikely._ZN10Fl_PrinterC2Ev
 693              	.LCOLDE21:
 694              		.section	.text._ZN10Fl_PrinterC2Ev
 695              	.LHOTE21:
 696              		.globl	_ZN10Fl_PrinterC1Ev
 697              		.set	_ZN10Fl_PrinterC1Ev,_ZN10Fl_PrinterC2Ev
 698              		.section	.text.unlikely._ZN10Fl_Printer6driverEv,"ax",@progbits
 699              		.align 2
 700              	.LCOLDB22:
 701              		.section	.text._ZN10Fl_Printer6driverEv,"ax",@progbits
 702              	.LHOTB22:
 703              		.align 2
 704              		.p2align 4,,15
 705              		.globl	_ZN10Fl_Printer6driverEv
 707              	_ZN10Fl_Printer6driverEv:
 708              	.LFB415:
 189:fltk-1.3.4-1/src/Fl_Printer.cxx ****   36:fltk-1.3.4-1/FL/Fl_Printer.H **** #include <commdlg.h>
 709              		.loc 3 189 0
 710              		.cfi_startproc
 711              	.LVL69:
 190:fltk-1.3.4-1/src/Fl_Printer.cxx ****   37:fltk-1.3.4-1/FL/Fl_Printer.H **** #endif
 712              		.loc 3 190 0
 713 0000 488B7F18 		movq	24(%rdi), %rdi
 714              	.LVL70:
 715 0004 E9000000 		jmp	_ZN25Fl_PostScript_File_Device6driverEv
 715      00
 716              	.LVL71:
 717              		.cfi_endproc
 718              	.LFE415:
 720              		.section	.text.unlikely._ZN10Fl_Printer6driverEv
 721              	.LCOLDE22:
 722              		.section	.text._ZN10Fl_Printer6driverEv
 723              	.LHOTE22:
 724              		.section	.text.unlikely._GLOBAL__sub_I__ZN10Fl_Printer12dialog_titleE,"ax",@progbits
 725              	.LCOLDB23:
 726              		.section	.text.startup._GLOBAL__sub_I__ZN10Fl_Printer12dialog_titleE,"ax",@progbits
 727              	.LHOTB23:
 728              		.p2align 4,,15
 730              	_GLOBAL__sub_I__ZN10Fl_Printer12dialog_titleE:
 731              	.LFB425:
 732              		.loc 3 196 0
 733              		.cfi_startproc
 734              	.LVL72:
 735              	.LBB86:
 736              	.LBB87:
  71:fltk-1.3.4-1/src/Fl_Printer.cxx ****   55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
 737              		.loc 3 71 0
 738 0000 488B0500 		movq	_ZN10Fl_Printer8class_idE(%rip), %rax
 738      000000
 739 0007 48890500 		movq	%rax, _ZN21Fl_PostScript_Printer8class_idE(%rip)
 739      000000
 740              	.LVL73:
 741 000e C3       		ret
 742              	.LBE87:
 743              	.LBE86:
 744              		.cfi_endproc
 745              	.LFE425:
 747              		.section	.text.unlikely._GLOBAL__sub_I__ZN10Fl_Printer12dialog_titleE
 748              	.LCOLDE23:
 749              		.section	.text.startup._GLOBAL__sub_I__ZN10Fl_Printer12dialog_titleE
 750              	.LHOTE23:
 751              		.section	.init_array,"aw"
 752              		.align 8
 753 0000 00000000 		.quad	_GLOBAL__sub_I__ZN10Fl_Printer12dialog_titleE
 753      00000000 
 754              		.weak	_ZTS10Fl_Printer
 755              		.section	.rodata._ZTS10Fl_Printer,"aG",@progbits,_ZTS10Fl_Printer,comdat
 756              		.align 8
 759              	_ZTS10Fl_Printer:
 760 0000 3130466C 		.string	"10Fl_Printer"
 760      5F507269 
 760      6E746572 
 760      00
 761              		.weak	_ZTI10Fl_Printer
 762              		.section	.rodata._ZTI10Fl_Printer,"aG",@progbits,_ZTI10Fl_Printer,comdat
 763              		.align 8
 766              	_ZTI10Fl_Printer:
 767 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 767      00000000 
 768 0008 00000000 		.quad	_ZTS10Fl_Printer
 768      00000000 
 769 0010 00000000 		.quad	_ZTI15Fl_Paged_Device
 769      00000000 
 770              		.weak	_ZTV10Fl_Printer
 771              		.section	.rodata._ZTV10Fl_Printer,"aG",@progbits,_ZTV10Fl_Printer,comdat
 772              		.align 8
 775              	_ZTV10Fl_Printer:
 776 0000 00000000 		.quad	0
 776      00000000 
 777 0008 00000000 		.quad	_ZTI10Fl_Printer
 777      00000000 
 778 0010 00000000 		.quad	_ZN10Fl_Printer10class_nameEv
 778      00000000 
 779 0018 00000000 		.quad	_ZN10Fl_PrinterD1Ev
 779      00000000 
 780 0020 00000000 		.quad	_ZN10Fl_PrinterD0Ev
 780      00000000 
 781 0028 00000000 		.quad	_ZN10Fl_Printer11set_currentEv
 781      00000000 
 782 0030 00000000 		.quad	_ZN10Fl_Printer9start_jobEiPiS0_
 782      00000000 
 783 0038 00000000 		.quad	_ZN10Fl_Printer10start_pageEv
 783      00000000 
 784 0040 00000000 		.quad	_ZN10Fl_Printer14printable_rectEPiS0_
 784      00000000 
 785 0048 00000000 		.quad	_ZN10Fl_Printer7marginsEPiS0_S0_S0_
 785      00000000 
 786 0050 00000000 		.quad	_ZN10Fl_Printer6originEii
 786      00000000 
 787 0058 00000000 		.quad	_ZN10Fl_Printer6originEPiS0_
 787      00000000 
 788 0060 00000000 		.quad	_ZN10Fl_Printer5scaleEff
 788      00000000 
 789 0068 00000000 		.quad	_ZN10Fl_Printer6rotateEf
 789      00000000 
 790 0070 00000000 		.quad	_ZN10Fl_Printer9translateEii
 790      00000000 
 791 0078 00000000 		.quad	_ZN10Fl_Printer11untranslateEv
 791      00000000 
 792 0080 00000000 		.quad	_ZN10Fl_Printer12print_widgetEP9Fl_Widgetii
 792      00000000 
 793 0088 00000000 		.quad	_ZN10Fl_Printer17print_window_partEP9Fl_Windowiiiiii
 793      00000000 
 794 0090 00000000 		.quad	_ZN10Fl_Printer8end_pageEv
 794      00000000 
 795 0098 00000000 		.quad	_ZN10Fl_Printer7end_jobEv
 795      00000000 
 796              		.globl	_ZN21Fl_PostScript_Printer8class_idE
 797              		.section	.bss._ZN21Fl_PostScript_Printer8class_idE,"aw",@nobits
 798              		.align 8
 801              	_ZN21Fl_PostScript_Printer8class_idE:
 802 0000 00000000 		.zero	8
 802      00000000 
 803              		.globl	_ZN10Fl_Printer8class_idE
 804              		.section	.rodata.str1.1,"aMS",@progbits,1
 805              	.LC24:
 806 0000 466C5F50 		.string	"Fl_Printer"
 806      72696E74 
 806      657200
 807              		.section	.data._ZN10Fl_Printer8class_idE,"aw",@progbits
 808              		.align 8
 811              	_ZN10Fl_Printer8class_idE:
 812 0000 00000000 		.quad	.LC24
 812      00000000 
 813              		.globl	_ZN10Fl_Printer15property_cancelE
 814              		.section	.rodata.str1.1
 815              	.LC25:
 816 000b 43616E63 		.string	"Cancel"
 816      656C00
 817              		.section	.data._ZN10Fl_Printer15property_cancelE,"aw",@progbits
 818              		.align 8
 821              	_ZN10Fl_Printer15property_cancelE:
 822 0000 00000000 		.quad	.LC25
 822      00000000 
 823              		.globl	_ZN10Fl_Printer13property_saveE
 824              		.section	.rodata.str1.1
 825              	.LC26:
 826 0012 53617665 		.string	"Save"
 826      00
 827              		.section	.data._ZN10Fl_Printer13property_saveE,"aw",@progbits
 828              		.align 8
 831              	_ZN10Fl_Printer13property_saveE:
 832 0000 00000000 		.quad	.LC26
 832      00000000 
 833              		.globl	_ZN10Fl_Printer12property_useE
 834              		.section	.rodata.str1.1
 835              	.LC27:
 836 0017 55736500 		.string	"Use"
 837              		.section	.data._ZN10Fl_Printer12property_useE,"aw",@progbits
 838              		.align 8
 841              	_ZN10Fl_Printer12property_useE:
 842 0000 00000000 		.quad	.LC27
 842      00000000 
 843              		.globl	_ZN10Fl_Printer13property_modeE
 844              		.section	.rodata.str1.1
 845              	.LC28:
 846 001b 4F757470 		.string	"Output Mode:"
 846      7574204D 
 846      6F64653A 
 846      00
 847              		.section	.data._ZN10Fl_Printer13property_modeE,"aw",@progbits
 848              		.align 8
 851              	_ZN10Fl_Printer13property_modeE:
 852 0000 00000000 		.quad	.LC28
 852      00000000 
 853              		.globl	_ZN10Fl_Printer17property_pagesizeE
 854              		.section	.rodata.str1.1
 855              	.LC29:
 856 0028 50616765 		.string	"Page Size:"
 856      2053697A 
 856      653A00
 857              		.section	.data._ZN10Fl_Printer17property_pagesizeE,"aw",@progbits
 858              		.align 8
 861              	_ZN10Fl_Printer17property_pagesizeE:
 862 0000 00000000 		.quad	.LC29
 862      00000000 
 863              		.globl	_ZN10Fl_Printer14property_titleE
 864              		.section	.rodata.str1.1
 865              	.LC30:
 866 0033 5072696E 		.string	"Printer Properties"
 866      74657220 
 866      50726F70 
 866      65727469 
 866      657300
 867              		.section	.data._ZN10Fl_Printer14property_titleE,"aw",@progbits
 868              		.align 8
 871              	_ZN10Fl_Printer14property_titleE:
 872 0000 00000000 		.quad	.LC30
 872      00000000 
 873              		.globl	_ZN10Fl_Printer20dialog_print_to_fileE
 874              		.section	.rodata.str1.1
 875              	.LC31:
 876 0046 5072696E 		.string	"Print To File"
 876      7420546F 
 876      2046696C 
 876      6500
 877              		.section	.data._ZN10Fl_Printer20dialog_print_to_fileE,"aw",@progbits
 878              		.align 8
 881              	_ZN10Fl_Printer20dialog_print_to_fileE:
 882 0000 00000000 		.quad	.LC31
 882      00000000 
 883              		.globl	_ZN10Fl_Printer20dialog_cancel_buttonE
 884              		.section	.data._ZN10Fl_Printer20dialog_cancel_buttonE,"aw",@progbits
 885              		.align 8
 888              	_ZN10Fl_Printer20dialog_cancel_buttonE:
 889 0000 00000000 		.quad	.LC25
 889      00000000 
 890              		.globl	_ZN10Fl_Printer19dialog_print_buttonE
 891              		.section	.rodata.str1.1
 892              	.LC32:
 893 0054 5072696E 		.string	"Print"
 893      7400
 894              		.section	.data._ZN10Fl_Printer19dialog_print_buttonE,"aw",@progbits
 895              		.align 8
 898              	_ZN10Fl_Printer19dialog_print_buttonE:
 899 0000 00000000 		.quad	.LC32
 899      00000000 
 900              		.globl	_ZN10Fl_Printer13dialog_copyNoE
 901              		.section	.rodata.str1.1
 902              	.LC33:
 903 005a 2320436F 		.string	"# Copies:"
 903      70696573 
 903      3A00
 904              		.section	.data._ZN10Fl_Printer13dialog_copyNoE,"aw",@progbits
 905              		.align 8
 908              	_ZN10Fl_Printer13dialog_copyNoE:
 909 0000 00000000 		.quad	.LC33
 909      00000000 
 910              		.globl	_ZN10Fl_Printer17dialog_propertiesE
 911              		.section	.rodata.str1.1
 912              	.LC34:
 913 0064 50726F70 		.string	"Properties..."
 913      65727469 
 913      65732E2E 
 913      2E00
 914              		.section	.data._ZN10Fl_Printer17dialog_propertiesE,"aw",@progbits
 915              		.align 8
 918              	_ZN10Fl_Printer17dialog_propertiesE:
 919 0000 00000000 		.quad	.LC34
 919      00000000 
 920              		.globl	_ZN10Fl_Printer9dialog_toE
 921              		.section	.rodata.str1.1
 922              	.LC35:
 923 0072 546F3A00 		.string	"To:"
 924              		.section	.data._ZN10Fl_Printer9dialog_toE,"aw",@progbits
 925              		.align 8
 928              	_ZN10Fl_Printer9dialog_toE:
 929 0000 00000000 		.quad	.LC35
 929      00000000 
 930              		.globl	_ZN10Fl_Printer11dialog_fromE
 931              		.section	.rodata.str1.1
 932              	.LC36:
 933 0076 46726F6D 		.string	"From:"
 933      3A00
 934              		.section	.data._ZN10Fl_Printer11dialog_fromE,"aw",@progbits
 935              		.align 8
 938              	_ZN10Fl_Printer11dialog_fromE:
 939 0000 00000000 		.quad	.LC36
 939      00000000 
 940              		.globl	_ZN10Fl_Printer12dialog_pagesE
 941              		.section	.rodata.str1.1
 942              	.LC37:
 943 007c 50616765 		.string	"Pages"
 943      7300
 944              		.section	.data._ZN10Fl_Printer12dialog_pagesE,"aw",@progbits
 945              		.align 8
 948              	_ZN10Fl_Printer12dialog_pagesE:
 949 0000 00000000 		.quad	.LC37
 949      00000000 
 950              		.globl	_ZN10Fl_Printer10dialog_allE
 951              		.section	.rodata.str1.1
 952              	.LC38:
 953 0082 416C6C00 		.string	"All"
 954              		.section	.data._ZN10Fl_Printer10dialog_allE,"aw",@progbits
 955              		.align 8
 958              	_ZN10Fl_Printer10dialog_allE:
 959 0000 00000000 		.quad	.LC38
 959      00000000 
 960              		.globl	_ZN10Fl_Printer13dialog_copiesE
 961              		.section	.rodata.str1.1
 962              	.LC39:
 963 0086 436F7069 		.string	"Copies"
 963      657300
 964              		.section	.data._ZN10Fl_Printer13dialog_copiesE,"aw",@progbits
 965              		.align 8
 968              	_ZN10Fl_Printer13dialog_copiesE:
 969 0000 00000000 		.quad	.LC39
 969      00000000 
 970              		.globl	_ZN10Fl_Printer12dialog_rangeE
 971              		.section	.rodata.str1.1
 972              	.LC40:
 973 008d 5072696E 		.string	"Print Range"
 973      74205261 
 973      6E676500 
 974              		.section	.data._ZN10Fl_Printer12dialog_rangeE,"aw",@progbits
 975              		.align 8
 978              	_ZN10Fl_Printer12dialog_rangeE:
 979 0000 00000000 		.quad	.LC40
 979      00000000 
 980              		.globl	_ZN10Fl_Printer14dialog_printerE
 981              		.section	.rodata.str1.1
 982              	.LC41:
 983 0099 5072696E 		.string	"Printer:"
 983      7465723A 
 983      00
 984              		.section	.data._ZN10Fl_Printer14dialog_printerE,"aw",@progbits
 985              		.align 8
 988              	_ZN10Fl_Printer14dialog_printerE:
 989 0000 00000000 		.quad	.LC41
 989      00000000 
 990              		.globl	_ZN10Fl_Printer12dialog_titleE
 991              		.section	.data._ZN10Fl_Printer12dialog_titleE,"aw",@progbits
 992              		.align 8
 995              	_ZN10Fl_Printer12dialog_titleE:
 996 0000 00000000 		.quad	.LC32
 996      00000000 
 997              		.text
 998              	.Letext0:
 999              		.section	.text.unlikely._ZN9Fl_Device10class_nameEv,"axG",@progbits,_ZN9Fl_Device10class_nameEv,co
 1000              	.Letext_cold0:
 1001              		.file 5 "fltk-1.3.4-1/FL/Enumerations.H"
 1002              		.file 6 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1003              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1004              		.file 8 "/usr/include/libio.h"
 1005              		.file 9 "/usr/include/stdio.h"
 1006              		.file 10 "fltk-1.3.4-1/FL/Fl_PostScript.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Printer.cxx
     /tmp/ccdurcQk.s:16     .text._ZN9Fl_Device10class_nameEv:0000000000000000 _ZN9Fl_Device10class_nameEv
     /tmp/ccdurcQk.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD2Ev
     /tmp/ccdurcQk.s:41     .text._ZN9Fl_DeviceD2Ev:0000000000000000 _ZN9Fl_DeviceD1Ev
     /tmp/ccdurcQk.s:65     .text._ZN10Fl_Printer10class_nameEv:0000000000000000 _ZN10Fl_Printer10class_nameEv
     /tmp/ccdurcQk.s:811    .data._ZN10Fl_Printer8class_idE:0000000000000000 _ZN10Fl_Printer8class_idE
     /tmp/ccdurcQk.s:90     .text._ZN10Fl_Printer9start_jobEiPiS0_:0000000000000000 _ZN10Fl_Printer9start_jobEiPiS0_
     /tmp/ccdurcQk.s:119    .text._ZN10Fl_Printer10start_pageEv:0000000000000000 _ZN10Fl_Printer10start_pageEv
     /tmp/ccdurcQk.s:147    .text._ZN10Fl_Printer14printable_rectEPiS0_:0000000000000000 _ZN10Fl_Printer14printable_rectEPiS0_
     /tmp/ccdurcQk.s:175    .text._ZN10Fl_Printer7marginsEPiS0_S0_S0_:0000000000000000 _ZN10Fl_Printer7marginsEPiS0_S0_S0_
     /tmp/ccdurcQk.s:202    .text._ZN10Fl_Printer6originEPiS0_:0000000000000000 _ZN10Fl_Printer6originEPiS0_
     /tmp/ccdurcQk.s:229    .text._ZN10Fl_Printer6originEii:0000000000000000 _ZN10Fl_Printer6originEii
     /tmp/ccdurcQk.s:256    .text._ZN10Fl_Printer5scaleEff:0000000000000000 _ZN10Fl_Printer5scaleEff
     /tmp/ccdurcQk.s:283    .text._ZN10Fl_Printer6rotateEf:0000000000000000 _ZN10Fl_Printer6rotateEf
     /tmp/ccdurcQk.s:310    .text._ZN10Fl_Printer9translateEii:0000000000000000 _ZN10Fl_Printer9translateEii
     /tmp/ccdurcQk.s:337    .text._ZN10Fl_Printer11untranslateEv:0000000000000000 _ZN10Fl_Printer11untranslateEv
     /tmp/ccdurcQk.s:364    .text._ZN10Fl_Printer8end_pageEv:0000000000000000 _ZN10Fl_Printer8end_pageEv
     /tmp/ccdurcQk.s:392    .text._ZN10Fl_Printer7end_jobEv:0000000000000000 _ZN10Fl_Printer7end_jobEv
     /tmp/ccdurcQk.s:419    .text._ZN10Fl_Printer12print_widgetEP9Fl_Widgetii:0000000000000000 _ZN10Fl_Printer12print_widgetEP9Fl_Widgetii
     /tmp/ccdurcQk.s:446    .text._ZN10Fl_Printer17print_window_partEP9Fl_Windowiiiiii:0000000000000000 _ZN10Fl_Printer17print_window_partEP9Fl_Windowiiiiii
     /tmp/ccdurcQk.s:473    .text._ZN10Fl_Printer11set_currentEv:0000000000000000 _ZN10Fl_Printer11set_currentEv
     /tmp/ccdurcQk.s:500    .text._ZN10Fl_PrinterD2Ev:0000000000000000 _ZN10Fl_PrinterD2Ev
     /tmp/ccdurcQk.s:775    .rodata._ZTV10Fl_Printer:0000000000000000 _ZTV10Fl_Printer
     /tmp/ccdurcQk.s:500    .text._ZN10Fl_PrinterD2Ev:0000000000000000 _ZN10Fl_PrinterD1Ev
     /tmp/ccdurcQk.s:540    .text._ZN9Fl_DeviceD0Ev:0000000000000000 _ZN9Fl_DeviceD0Ev
     /tmp/ccdurcQk.s:564    .text._ZN10Fl_PrinterD0Ev:0000000000000000 _ZN10Fl_PrinterD0Ev
     /tmp/ccdurcQk.s:611    .text._ZN10Fl_PrinterC2Ev:0000000000000000 _ZN10Fl_PrinterC2Ev
     /tmp/ccdurcQk.s:611    .text._ZN10Fl_PrinterC2Ev:0000000000000000 _ZN10Fl_PrinterC1Ev
     /tmp/ccdurcQk.s:707    .text._ZN10Fl_Printer6driverEv:0000000000000000 _ZN10Fl_Printer6driverEv
     /tmp/ccdurcQk.s:730    .text.startup._GLOBAL__sub_I__ZN10Fl_Printer12dialog_titleE:0000000000000000 _GLOBAL__sub_I__ZN10Fl_Printer12dialog_titleE
     /tmp/ccdurcQk.s:801    .bss._ZN21Fl_PostScript_Printer8class_idE:0000000000000000 _ZN21Fl_PostScript_Printer8class_idE
     /tmp/ccdurcQk.s:759    .rodata._ZTS10Fl_Printer:0000000000000000 _ZTS10Fl_Printer
     /tmp/ccdurcQk.s:766    .rodata._ZTI10Fl_Printer:0000000000000000 _ZTI10Fl_Printer
     /tmp/ccdurcQk.s:821    .data._ZN10Fl_Printer15property_cancelE:0000000000000000 _ZN10Fl_Printer15property_cancelE
     /tmp/ccdurcQk.s:831    .data._ZN10Fl_Printer13property_saveE:0000000000000000 _ZN10Fl_Printer13property_saveE
     /tmp/ccdurcQk.s:841    .data._ZN10Fl_Printer12property_useE:0000000000000000 _ZN10Fl_Printer12property_useE
     /tmp/ccdurcQk.s:851    .data._ZN10Fl_Printer13property_modeE:0000000000000000 _ZN10Fl_Printer13property_modeE
     /tmp/ccdurcQk.s:861    .data._ZN10Fl_Printer17property_pagesizeE:0000000000000000 _ZN10Fl_Printer17property_pagesizeE
     /tmp/ccdurcQk.s:871    .data._ZN10Fl_Printer14property_titleE:0000000000000000 _ZN10Fl_Printer14property_titleE
     /tmp/ccdurcQk.s:881    .data._ZN10Fl_Printer20dialog_print_to_fileE:0000000000000000 _ZN10Fl_Printer20dialog_print_to_fileE
     /tmp/ccdurcQk.s:888    .data._ZN10Fl_Printer20dialog_cancel_buttonE:0000000000000000 _ZN10Fl_Printer20dialog_cancel_buttonE
     /tmp/ccdurcQk.s:898    .data._ZN10Fl_Printer19dialog_print_buttonE:0000000000000000 _ZN10Fl_Printer19dialog_print_buttonE
     /tmp/ccdurcQk.s:908    .data._ZN10Fl_Printer13dialog_copyNoE:0000000000000000 _ZN10Fl_Printer13dialog_copyNoE
     /tmp/ccdurcQk.s:918    .data._ZN10Fl_Printer17dialog_propertiesE:0000000000000000 _ZN10Fl_Printer17dialog_propertiesE
     /tmp/ccdurcQk.s:928    .data._ZN10Fl_Printer9dialog_toE:0000000000000000 _ZN10Fl_Printer9dialog_toE
     /tmp/ccdurcQk.s:938    .data._ZN10Fl_Printer11dialog_fromE:0000000000000000 _ZN10Fl_Printer11dialog_fromE
     /tmp/ccdurcQk.s:948    .data._ZN10Fl_Printer12dialog_pagesE:0000000000000000 _ZN10Fl_Printer12dialog_pagesE
     /tmp/ccdurcQk.s:958    .data._ZN10Fl_Printer10dialog_allE:0000000000000000 _ZN10Fl_Printer10dialog_allE
     /tmp/ccdurcQk.s:968    .data._ZN10Fl_Printer13dialog_copiesE:0000000000000000 _ZN10Fl_Printer13dialog_copiesE
     /tmp/ccdurcQk.s:978    .data._ZN10Fl_Printer12dialog_rangeE:0000000000000000 _ZN10Fl_Printer12dialog_rangeE
     /tmp/ccdurcQk.s:988    .data._ZN10Fl_Printer14dialog_printerE:0000000000000000 _ZN10Fl_Printer14dialog_printerE
     /tmp/ccdurcQk.s:995    .data._ZN10Fl_Printer12dialog_titleE:0000000000000000 _ZN10Fl_Printer12dialog_titleE
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

UNDEFINED SYMBOLS
_ZN9Fl_Device8class_idE
_ZdlPv
_Znwm
_ZN25Fl_PostScript_File_DeviceC2Ev
_ZTV21Fl_PostScript_Printer
_ZN25Fl_PostScript_File_Device6driverEv
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI15Fl_Paged_Device
