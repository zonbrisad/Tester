   1              		.file	"fl_file_dir.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL5popupP15Fl_File_Chooser,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL5popupP15Fl_File_Chooser,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL5popupP15Fl_File_Chooser
  10              	.Ltext_cold0:
  11              		.section	.text._ZL5popupP15Fl_File_Chooser
  13              	_ZL5popupP15Fl_File_Chooser:
  14              	.LFB552:
  15              		.file 1 "fltk-1.3.4-1/src/fl_file_dir.cxx"
   1:fltk-1.3.4-1/src/fl_file_dir.cxx **** ...
  16              		.loc 1 37 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 55       		pushq	%rbp
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 6, -16
  22 0001 53       		pushq	%rbx
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 3, -24
  25 0002 4889FB   		movq	%rdi, %rbx
  26 0005 4883EC08 		subq	$8, %rsp
  27              		.cfi_def_cfa_offset 32
  28              		.loc 1 38 0
  29 0009 E8000000 		call	_ZN15Fl_File_Chooser4showEv
  29      00
  30              	.LVL1:
  31              	.LBB15:
  32              	.LBB16:
  33              		.file 2 "fltk-1.3.4-1/FL/Fl.H"
   1:fltk-1.3.4-1/FL/Fl.H **** //
   2:fltk-1.3.4-1/FL/Fl.H **** // "$Id: Fl.H 11945 2016-09-16 09:11:48Z manolo $"
   3:fltk-1.3.4-1/FL/Fl.H **** //
   4:fltk-1.3.4-1/FL/Fl.H **** // Main header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl.H **** //
   6:fltk-1.3.4-1/FL/Fl.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl.H **** //
   8:fltk-1.3.4-1/FL/Fl.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl.H **** //
  12:fltk-1.3.4-1/FL/Fl.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl.H **** //
  14:fltk-1.3.4-1/FL/Fl.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl.H **** //
  16:fltk-1.3.4-1/FL/Fl.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl.H **** //
  18:fltk-1.3.4-1/FL/Fl.H **** 
  19:fltk-1.3.4-1/FL/Fl.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl.H ****     Fl static class.
  21:fltk-1.3.4-1/FL/Fl.H ****  */
  22:fltk-1.3.4-1/FL/Fl.H **** 
  23:fltk-1.3.4-1/FL/Fl.H **** #ifndef Fl_H
  24:fltk-1.3.4-1/FL/Fl.H **** #  define Fl_H
  25:fltk-1.3.4-1/FL/Fl.H **** 
  26:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl_Export.H>
  27:fltk-1.3.4-1/FL/Fl.H **** 
  28:fltk-1.3.4-1/FL/Fl.H **** #ifdef FLTK_HAVE_CAIRO
  29:fltk-1.3.4-1/FL/Fl.H **** # include <FL/Fl_Cairo.H>
  30:fltk-1.3.4-1/FL/Fl.H **** #endif
  31:fltk-1.3.4-1/FL/Fl.H **** 
  32:fltk-1.3.4-1/FL/Fl.H **** #  include "fl_utf8.h"
  33:fltk-1.3.4-1/FL/Fl.H **** #  include "Enumerations.H"
  34:fltk-1.3.4-1/FL/Fl.H **** #  ifndef Fl_Object
  35:fltk-1.3.4-1/FL/Fl.H **** #    define Fl_Object Fl_Widget	/**< for back compatibility - use Fl_Widget! */
  36:fltk-1.3.4-1/FL/Fl.H **** #  endif
  37:fltk-1.3.4-1/FL/Fl.H **** 
  38:fltk-1.3.4-1/FL/Fl.H **** #  ifdef check
  39:fltk-1.3.4-1/FL/Fl.H **** #    undef check
  40:fltk-1.3.4-1/FL/Fl.H **** #  endif
  41:fltk-1.3.4-1/FL/Fl.H **** 
  42:fltk-1.3.4-1/FL/Fl.H **** 
  43:fltk-1.3.4-1/FL/Fl.H **** class Fl_Widget;
  44:fltk-1.3.4-1/FL/Fl.H **** class Fl_Window;
  45:fltk-1.3.4-1/FL/Fl.H **** class Fl_Image;
  46:fltk-1.3.4-1/FL/Fl.H **** struct Fl_Label;
  47:fltk-1.3.4-1/FL/Fl.H **** 
  48:fltk-1.3.4-1/FL/Fl.H **** // Keep avoiding having the socket deps at that level but mke sure it will work in both 32 & 64 bit
  49:fltk-1.3.4-1/FL/Fl.H **** #if defined(WIN32) && !defined(__CYGWIN__)
  50:fltk-1.3.4-1/FL/Fl.H **** # if defined(_WIN64)
  51:fltk-1.3.4-1/FL/Fl.H **** #  define FL_SOCKET unsigned __int64
  52:fltk-1.3.4-1/FL/Fl.H **** # else
  53:fltk-1.3.4-1/FL/Fl.H **** #  define FL_SOCKET int
  54:fltk-1.3.4-1/FL/Fl.H **** # endif
  55:fltk-1.3.4-1/FL/Fl.H **** #else
  56:fltk-1.3.4-1/FL/Fl.H **** # define FL_SOCKET int
  57:fltk-1.3.4-1/FL/Fl.H **** #endif
  58:fltk-1.3.4-1/FL/Fl.H **** 
  59:fltk-1.3.4-1/FL/Fl.H **** 
  60:fltk-1.3.4-1/FL/Fl.H **** // Pointers you can use to change FLTK to a foreign language.
  61:fltk-1.3.4-1/FL/Fl.H **** // Note: Similar pointers are defined in FL/fl_ask.H and src/fl_ask.cxx
  62:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_ctrl;
  63:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_meta;
  64:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_alt;
  65:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_shift;
  66:fltk-1.3.4-1/FL/Fl.H **** 
  67:fltk-1.3.4-1/FL/Fl.H **** /** \defgroup  callback_functions Callback function typedefs
  68:fltk-1.3.4-1/FL/Fl.H ****  \brief Typedefs defined in <FL/Fl.H> for callback or handler functions passed as function paramete
  69:fltk-1.3.4-1/FL/Fl.H **** 
  70:fltk-1.3.4-1/FL/Fl.H ****     FLTK uses callback functions as parameters for some function calls, e.g. to
  71:fltk-1.3.4-1/FL/Fl.H ****     set up global event handlers (Fl::add_handler()), to add a timeout handler
  72:fltk-1.3.4-1/FL/Fl.H ****     (Fl::add_timeout()), and many more.
  73:fltk-1.3.4-1/FL/Fl.H **** 
  74:fltk-1.3.4-1/FL/Fl.H ****     The typedefs defined in this group describe the function parameters used to set
  75:fltk-1.3.4-1/FL/Fl.H ****     up or clear the callback functions and should also be referenced to define the
  76:fltk-1.3.4-1/FL/Fl.H ****     callback function to handle such events in the user's code.
  77:fltk-1.3.4-1/FL/Fl.H **** 
  78:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::add_handler(), Fl::add_timeout(), Fl::repeat_timeout(),
  79:fltk-1.3.4-1/FL/Fl.H **** 	 Fl::remove_timeout() and others
  80:fltk-1.3.4-1/FL/Fl.H ****   @{ */
  81:fltk-1.3.4-1/FL/Fl.H **** 
  82:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some label drawing functions passed as parameters */
  83:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Label_Draw_F)(const Fl_Label *label, int x, int y, int w, int h, Fl_Align align);
  84:fltk-1.3.4-1/FL/Fl.H **** 
  85:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some label measurement functions passed as parameters */
  86:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Label_Measure_F)(const Fl_Label *label, int &width, int &height);
  87:fltk-1.3.4-1/FL/Fl.H **** 
  88:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some box drawing functions passed as parameters */
  89:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Box_Draw_F)(int x, int y, int w, int h, Fl_Color color);
  90:fltk-1.3.4-1/FL/Fl.H **** 
  91:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some timeout callback functions passed as parameters */
  92:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Timeout_Handler)(void *data);
  93:fltk-1.3.4-1/FL/Fl.H **** 
  94:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some wakeup callback functions passed as parameters */
  95:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Awake_Handler)(void *data);
  96:fltk-1.3.4-1/FL/Fl.H **** 
  97:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_idle callback functions passed as parameters */
  98:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Idle_Handler)(void *data);
  99:fltk-1.3.4-1/FL/Fl.H **** 
 100:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_idle callback functions passed as parameters */
 101:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Old_Idle_Handler)();
 102:fltk-1.3.4-1/FL/Fl.H **** 
 103:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_fd functions passed as parameters */
 104:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_FD_Handler)(FL_SOCKET fd, void *data);
 105:fltk-1.3.4-1/FL/Fl.H **** 
 106:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_handler functions passed as parameters */
 107:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Event_Handler)(int event);
 108:fltk-1.3.4-1/FL/Fl.H **** 
 109:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_system_handler functions passed as parameters */
 110:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_System_Handler)(void *event, void *data);
 111:fltk-1.3.4-1/FL/Fl.H **** 
 112:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_abort functions passed as parameters */
 113:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Abort_Handler)(const char *format,...);
 114:fltk-1.3.4-1/FL/Fl.H **** 
 115:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_atclose functions passed as parameters */
 116:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Atclose_Handler)(Fl_Window *window, void *data);
 117:fltk-1.3.4-1/FL/Fl.H **** 
 118:fltk-1.3.4-1/FL/Fl.H **** /** Signature of args functions passed as parameters */
 119:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Args_Handler)(int argc, char **argv, int &i);
 120:fltk-1.3.4-1/FL/Fl.H **** 
 121:fltk-1.3.4-1/FL/Fl.H **** /** Signature of event_dispatch functions passed as parameters.
 122:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::event_dispatch(Fl_Event_Dispatch) */
 123:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Event_Dispatch)(int event, Fl_Window *w);
 124:fltk-1.3.4-1/FL/Fl.H **** 
 125:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_clipboard_notify functions passed as parameters */
 126:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Clipboard_Notify_Handler)(int source, void *data);
 127:fltk-1.3.4-1/FL/Fl.H **** 
 128:fltk-1.3.4-1/FL/Fl.H **** /** @} */ /* group callback_functions */
 129:fltk-1.3.4-1/FL/Fl.H **** 
 130:fltk-1.3.4-1/FL/Fl.H **** 
 131:fltk-1.3.4-1/FL/Fl.H **** /**
 132:fltk-1.3.4-1/FL/Fl.H ****   The Fl is the FLTK global (static) class containing
 133:fltk-1.3.4-1/FL/Fl.H ****   state information and global methods for the current application.
 134:fltk-1.3.4-1/FL/Fl.H **** */
 135:fltk-1.3.4-1/FL/Fl.H **** class FL_EXPORT Fl {
 136:fltk-1.3.4-1/FL/Fl.H ****   Fl() {}; // no constructor!
 137:fltk-1.3.4-1/FL/Fl.H ****   
 138:fltk-1.3.4-1/FL/Fl.H **** private:
 139:fltk-1.3.4-1/FL/Fl.H ****   static int use_high_res_GL_;
 140:fltk-1.3.4-1/FL/Fl.H ****   
 141:fltk-1.3.4-1/FL/Fl.H **** public: // should be private!
 142:fltk-1.3.4-1/FL/Fl.H **** #ifndef FL_DOXYGEN
 143:fltk-1.3.4-1/FL/Fl.H ****   static int e_number;
 144:fltk-1.3.4-1/FL/Fl.H ****   static int e_x;
 145:fltk-1.3.4-1/FL/Fl.H ****   static int e_y;
 146:fltk-1.3.4-1/FL/Fl.H ****   static int e_x_root;
 147:fltk-1.3.4-1/FL/Fl.H ****   static int e_y_root;
 148:fltk-1.3.4-1/FL/Fl.H ****   static int e_dx;
 149:fltk-1.3.4-1/FL/Fl.H ****   static int e_dy;
 150:fltk-1.3.4-1/FL/Fl.H ****   static int e_state;
 151:fltk-1.3.4-1/FL/Fl.H ****   static int e_clicks;
 152:fltk-1.3.4-1/FL/Fl.H ****   static int e_is_click;
 153:fltk-1.3.4-1/FL/Fl.H ****   static int e_keysym;
 154:fltk-1.3.4-1/FL/Fl.H ****   static char* e_text;
 155:fltk-1.3.4-1/FL/Fl.H ****   static int e_length;
 156:fltk-1.3.4-1/FL/Fl.H ****   static void *e_clipboard_data;
 157:fltk-1.3.4-1/FL/Fl.H ****   static const char *e_clipboard_type;
 158:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Event_Dispatch e_dispatch;
 159:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* belowmouse_;
 160:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* pushed_;
 161:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* focus_;
 162:fltk-1.3.4-1/FL/Fl.H ****   static int damage_;
 163:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* selection_owner_;
 164:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* modal_;
 165:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* grab_;
 166:fltk-1.3.4-1/FL/Fl.H ****   static int compose_state; // used for dead keys (WIN32) or marked text (MacOS)
 167:fltk-1.3.4-1/FL/Fl.H ****   static void call_screen_init(); // recompute screen number and dimensions
 168:fltk-1.3.4-1/FL/Fl.H **** #ifdef __APPLE__
 169:fltk-1.3.4-1/FL/Fl.H ****   static void reset_marked_text(); // resets marked text
 170:fltk-1.3.4-1/FL/Fl.H ****   static void insertion_point_location(int x, int y, int height); // sets window coordinates & heig
 171:fltk-1.3.4-1/FL/Fl.H **** #endif
 172:fltk-1.3.4-1/FL/Fl.H **** #endif // FL_DOXYGEN
 173:fltk-1.3.4-1/FL/Fl.H ****   
 174:fltk-1.3.4-1/FL/Fl.H ****   
 175:fltk-1.3.4-1/FL/Fl.H ****   /**
 176:fltk-1.3.4-1/FL/Fl.H ****     If true then flush() will do something.
 177:fltk-1.3.4-1/FL/Fl.H ****   */
 178:fltk-1.3.4-1/FL/Fl.H ****   static void damage(int d) {damage_ = d;}
 179:fltk-1.3.4-1/FL/Fl.H ****   
 180:fltk-1.3.4-1/FL/Fl.H **** public:
 181:fltk-1.3.4-1/FL/Fl.H ****   /** Enumerator for global FLTK options.
 182:fltk-1.3.4-1/FL/Fl.H ****       These options can be set system wide, per user, or for the running
 183:fltk-1.3.4-1/FL/Fl.H ****       application only.
 184:fltk-1.3.4-1/FL/Fl.H ****       \see Fl::option(Fl_Option, bool)
 185:fltk-1.3.4-1/FL/Fl.H ****       \see Fl::option(Fl_Option)
 186:fltk-1.3.4-1/FL/Fl.H ****   */
 187:fltk-1.3.4-1/FL/Fl.H ****   typedef enum {
 188:fltk-1.3.4-1/FL/Fl.H ****       /// When switched on, moving the text cursor beyond the start or end of
 189:fltk-1.3.4-1/FL/Fl.H ****       /// a text in a text widget will change focus to the next text widget.
 190:fltk-1.3.4-1/FL/Fl.H ****       /// (This is considered 'old' behavior)
 191:fltk-1.3.4-1/FL/Fl.H ****       ///
 192:fltk-1.3.4-1/FL/Fl.H ****       /// When switched off (default), the cursor will stop at the end of the text.
 193:fltk-1.3.4-1/FL/Fl.H ****       /// Pressing Tab or Ctrl-Tab will advance the keyboard focus.
 194:fltk-1.3.4-1/FL/Fl.H ****       ///
 195:fltk-1.3.4-1/FL/Fl.H ****       /// See also: Fl_Input_::tab_nav()
 196:fltk-1.3.4-1/FL/Fl.H ****       ///
 197:fltk-1.3.4-1/FL/Fl.H ****     OPTION_ARROW_FOCUS = 0,
 198:fltk-1.3.4-1/FL/Fl.H ****       // When switched on, FLTK will use the file chooser dialog that comes 
 199:fltk-1.3.4-1/FL/Fl.H ****       // with your operating system whenever possible. When switched off, FLTK
 200:fltk-1.3.4-1/FL/Fl.H ****       // will present its own file chooser.
 201:fltk-1.3.4-1/FL/Fl.H ****       // \todo implement me
 202:fltk-1.3.4-1/FL/Fl.H ****     // OPTION_NATIVE_FILECHOOSER,
 203:fltk-1.3.4-1/FL/Fl.H ****       // When Filechooser Preview is enabled, the FLTK or native file chooser
 204:fltk-1.3.4-1/FL/Fl.H ****       // will show a preview of a selected file (if possible) before the user
 205:fltk-1.3.4-1/FL/Fl.H ****       // decides to choose the file.
 206:fltk-1.3.4-1/FL/Fl.H ****       // \todo implement me
 207:fltk-1.3.4-1/FL/Fl.H ****     //OPTION_FILECHOOSER_PREVIEW,
 208:fltk-1.3.4-1/FL/Fl.H ****       /// If visible focus is switched on (default), FLTK will draw a dotted rectangle 
 209:fltk-1.3.4-1/FL/Fl.H ****       /// inside the widget that will receive the next keystroke. If switched
 210:fltk-1.3.4-1/FL/Fl.H ****       /// off, no such indicator will be drawn and keyboard navigation
 211:fltk-1.3.4-1/FL/Fl.H ****       /// is disabled.
 212:fltk-1.3.4-1/FL/Fl.H ****     OPTION_VISIBLE_FOCUS,
 213:fltk-1.3.4-1/FL/Fl.H ****       /// If text drag-and-drop is enabled (default), the user can select and drag text
 214:fltk-1.3.4-1/FL/Fl.H ****       /// from any text widget. If disabled, no dragging is possible, however
 215:fltk-1.3.4-1/FL/Fl.H ****       /// dropping text from other applications still works.
 216:fltk-1.3.4-1/FL/Fl.H ****     OPTION_DND_TEXT,
 217:fltk-1.3.4-1/FL/Fl.H ****       /// If tooltips are enabled (default), hovering the mouse over a widget with a 
 218:fltk-1.3.4-1/FL/Fl.H ****       /// tooltip text will open a little tooltip window until the mouse leaves
 219:fltk-1.3.4-1/FL/Fl.H ****       /// the widget. If disabled, no tooltip is shown.
 220:fltk-1.3.4-1/FL/Fl.H ****     OPTION_SHOW_TOOLTIPS,
 221:fltk-1.3.4-1/FL/Fl.H ****      /// When switched on (default), Fl_Native_File_Chooser runs GTK file dialogs
 222:fltk-1.3.4-1/FL/Fl.H ****      /// if the GTK library is available on the platform (linux/unix only).
 223:fltk-1.3.4-1/FL/Fl.H ****      /// When switched off, GTK file dialogs aren't used even if the GTK library is available.
 224:fltk-1.3.4-1/FL/Fl.H ****     OPTION_FNFC_USES_GTK,
 225:fltk-1.3.4-1/FL/Fl.H ****       // don't change this, leave it always as the last element
 226:fltk-1.3.4-1/FL/Fl.H ****       /// For internal use only.
 227:fltk-1.3.4-1/FL/Fl.H ****     OPTION_LAST
 228:fltk-1.3.4-1/FL/Fl.H ****   } Fl_Option;
 229:fltk-1.3.4-1/FL/Fl.H **** 
 230:fltk-1.3.4-1/FL/Fl.H **** private:  
 231:fltk-1.3.4-1/FL/Fl.H ****   static unsigned char options_[OPTION_LAST];
 232:fltk-1.3.4-1/FL/Fl.H ****   static unsigned char options_read_;
 233:fltk-1.3.4-1/FL/Fl.H ****   
 234:fltk-1.3.4-1/FL/Fl.H **** public:  
 235:fltk-1.3.4-1/FL/Fl.H ****   /*
 236:fltk-1.3.4-1/FL/Fl.H ****    Return a global setting for all FLTK applications, possibly overridden
 237:fltk-1.3.4-1/FL/Fl.H ****    by a setting specifically for this application.
 238:fltk-1.3.4-1/FL/Fl.H ****    */
 239:fltk-1.3.4-1/FL/Fl.H ****   static bool option(Fl_Option opt);
 240:fltk-1.3.4-1/FL/Fl.H ****   
 241:fltk-1.3.4-1/FL/Fl.H ****   /*
 242:fltk-1.3.4-1/FL/Fl.H ****    Override an option while the application is running.
 243:fltk-1.3.4-1/FL/Fl.H ****    */
 244:fltk-1.3.4-1/FL/Fl.H ****   static void option(Fl_Option opt, bool val);
 245:fltk-1.3.4-1/FL/Fl.H ****   
 246:fltk-1.3.4-1/FL/Fl.H ****   /**
 247:fltk-1.3.4-1/FL/Fl.H ****     The currently executing idle callback function: DO NOT USE THIS DIRECTLY!
 248:fltk-1.3.4-1/FL/Fl.H ****     
 249:fltk-1.3.4-1/FL/Fl.H ****     This is now used as part of a higher level system allowing multiple
 250:fltk-1.3.4-1/FL/Fl.H ****     idle callback functions to be called.
 251:fltk-1.3.4-1/FL/Fl.H ****     \see add_idle(), remove_idle()
 252:fltk-1.3.4-1/FL/Fl.H ****   */
 253:fltk-1.3.4-1/FL/Fl.H ****   static void (*idle)();
 254:fltk-1.3.4-1/FL/Fl.H **** 
 255:fltk-1.3.4-1/FL/Fl.H **** #ifndef FL_DOXYGEN
 256:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Awake_Handler *awake_ring_;
 257:fltk-1.3.4-1/FL/Fl.H ****   static void **awake_data_;
 258:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_size_;
 259:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_head_;
 260:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_tail_;
 261:fltk-1.3.4-1/FL/Fl.H ****   static const char* scheme_;
 262:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Image* scheme_bg_;
 263:fltk-1.3.4-1/FL/Fl.H **** 
 264:fltk-1.3.4-1/FL/Fl.H ****   static int e_original_keysym; // late addition
 265:fltk-1.3.4-1/FL/Fl.H ****   static int scrollbar_size_;
 266:fltk-1.3.4-1/FL/Fl.H **** #endif
 267:fltk-1.3.4-1/FL/Fl.H **** 
 268:fltk-1.3.4-1/FL/Fl.H **** 
 269:fltk-1.3.4-1/FL/Fl.H ****   static int add_awake_handler_(Fl_Awake_Handler, void*);
 270:fltk-1.3.4-1/FL/Fl.H ****   static int get_awake_handler_(Fl_Awake_Handler&, void*&);
 271:fltk-1.3.4-1/FL/Fl.H **** 
 272:fltk-1.3.4-1/FL/Fl.H **** public:
 273:fltk-1.3.4-1/FL/Fl.H **** 
 274:fltk-1.3.4-1/FL/Fl.H ****   // API version number
 275:fltk-1.3.4-1/FL/Fl.H ****   static double version();
 276:fltk-1.3.4-1/FL/Fl.H ****   static int api_version();
 277:fltk-1.3.4-1/FL/Fl.H **** 
 278:fltk-1.3.4-1/FL/Fl.H ****   // ABI version number
 279:fltk-1.3.4-1/FL/Fl.H ****   static int abi_version();
 280:fltk-1.3.4-1/FL/Fl.H **** 
 281:fltk-1.3.4-1/FL/Fl.H ****   /**
 282:fltk-1.3.4-1/FL/Fl.H ****     Returns whether the runtime library ABI version is correct.
 283:fltk-1.3.4-1/FL/Fl.H **** 
 284:fltk-1.3.4-1/FL/Fl.H ****     This enables you to check the ABI version of the linked FLTK
 285:fltk-1.3.4-1/FL/Fl.H ****     library at runtime.
 286:fltk-1.3.4-1/FL/Fl.H **** 
 287:fltk-1.3.4-1/FL/Fl.H ****     Returns 1 (true) if the compiled ABI version (in the header files)
 288:fltk-1.3.4-1/FL/Fl.H ****     and the linked library ABI version (used at runtime) are the same,
 289:fltk-1.3.4-1/FL/Fl.H ****     0 (false) otherwise.
 290:fltk-1.3.4-1/FL/Fl.H **** 
 291:fltk-1.3.4-1/FL/Fl.H ****     Argument \p val can be used to query a particular library ABI version.
 292:fltk-1.3.4-1/FL/Fl.H ****     Use for instance 10303 to query if the runtime library is compatible
 293:fltk-1.3.4-1/FL/Fl.H ****     with FLTK ABI version 1.3.3. This is rarely useful.
 294:fltk-1.3.4-1/FL/Fl.H **** 
 295:fltk-1.3.4-1/FL/Fl.H ****     The default \p val argument is FL_ABI_VERSION, which checks the version
 296:fltk-1.3.4-1/FL/Fl.H ****     defined at configure time (i.e. in the header files at program
 297:fltk-1.3.4-1/FL/Fl.H ****     compilation time) against the linked library version used at runtime.
 298:fltk-1.3.4-1/FL/Fl.H ****     This is particularly useful if you linked with a shared object library,
 299:fltk-1.3.4-1/FL/Fl.H ****     but it also concerns static linking.
 300:fltk-1.3.4-1/FL/Fl.H **** 
 301:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::abi_version()
 302:fltk-1.3.4-1/FL/Fl.H ****   */
 303:fltk-1.3.4-1/FL/Fl.H ****   static inline int abi_check(const int val = FL_ABI_VERSION) {
 304:fltk-1.3.4-1/FL/Fl.H ****     return val == abi_version();
 305:fltk-1.3.4-1/FL/Fl.H ****   }
 306:fltk-1.3.4-1/FL/Fl.H **** 
 307:fltk-1.3.4-1/FL/Fl.H ****   // argument parsers:
 308:fltk-1.3.4-1/FL/Fl.H ****   static int arg(int argc, char **argv, int& i);
 309:fltk-1.3.4-1/FL/Fl.H ****   static int args(int argc, char **argv, int& i, Fl_Args_Handler cb = 0);
 310:fltk-1.3.4-1/FL/Fl.H ****   static void args(int argc, char **argv);
 311:fltk-1.3.4-1/FL/Fl.H ****   /**
 312:fltk-1.3.4-1/FL/Fl.H ****     Usage string displayed if Fl::args() detects an invalid argument.
 313:fltk-1.3.4-1/FL/Fl.H ****     This may be changed to point to customized text at run-time.
 314:fltk-1.3.4-1/FL/Fl.H ****   */
 315:fltk-1.3.4-1/FL/Fl.H ****   static const char* const help;
 316:fltk-1.3.4-1/FL/Fl.H **** 
 317:fltk-1.3.4-1/FL/Fl.H ****   // things called by initialization:
 318:fltk-1.3.4-1/FL/Fl.H ****   static void display(const char*);
 319:fltk-1.3.4-1/FL/Fl.H ****   static int visual(int);
 320:fltk-1.3.4-1/FL/Fl.H ****   /**
 321:fltk-1.3.4-1/FL/Fl.H ****     This does the same thing as Fl::visual(int) but also requires OpenGL
 322:fltk-1.3.4-1/FL/Fl.H ****     drawing to work. This <I>must</I> be done if you want to draw in
 323:fltk-1.3.4-1/FL/Fl.H ****     normal windows with OpenGL with gl_start() and gl_end().
 324:fltk-1.3.4-1/FL/Fl.H ****     It may be useful to call this so your X windows use the same visual
 325:fltk-1.3.4-1/FL/Fl.H ****     as an Fl_Gl_Window, which on some servers will reduce colormap flashing.
 326:fltk-1.3.4-1/FL/Fl.H **** 
 327:fltk-1.3.4-1/FL/Fl.H ****     See Fl_Gl_Window for a list of additional values for the argument.
 328:fltk-1.3.4-1/FL/Fl.H ****   */
 329:fltk-1.3.4-1/FL/Fl.H ****   static int gl_visual(int, int *alist=0); // platform dependent
 330:fltk-1.3.4-1/FL/Fl.H ****   static void own_colormap();
 331:fltk-1.3.4-1/FL/Fl.H ****   static void get_system_colors();
 332:fltk-1.3.4-1/FL/Fl.H ****   static void foreground(uchar, uchar, uchar);
 333:fltk-1.3.4-1/FL/Fl.H ****   static void background(uchar, uchar, uchar);
 334:fltk-1.3.4-1/FL/Fl.H ****   static void background2(uchar, uchar, uchar);
 335:fltk-1.3.4-1/FL/Fl.H **** 
 336:fltk-1.3.4-1/FL/Fl.H ****   // schemes:
 337:fltk-1.3.4-1/FL/Fl.H ****   static int scheme(const char *name);
 338:fltk-1.3.4-1/FL/Fl.H ****   /** See void scheme(const char *name) */
 339:fltk-1.3.4-1/FL/Fl.H ****   static const char* scheme() {return scheme_;}
 340:fltk-1.3.4-1/FL/Fl.H **** 
 341:fltk-1.3.4-1/FL/Fl.H ****   /** Returns whether the current scheme is the given name.
 342:fltk-1.3.4-1/FL/Fl.H **** 
 343:fltk-1.3.4-1/FL/Fl.H ****     This is a fast inline convenience function to support scheme-specific
 344:fltk-1.3.4-1/FL/Fl.H ****     code in widgets, e.g. in their draw() methods, if required.
 345:fltk-1.3.4-1/FL/Fl.H **** 
 346:fltk-1.3.4-1/FL/Fl.H ****     Use a valid scheme name, not \p NULL (although \p NULL is allowed,
 347:fltk-1.3.4-1/FL/Fl.H ****     this is not a useful argument - see below).
 348:fltk-1.3.4-1/FL/Fl.H **** 
 349:fltk-1.3.4-1/FL/Fl.H ****     If Fl::scheme() has not been set or has been set to the default
 350:fltk-1.3.4-1/FL/Fl.H ****     scheme ("none" or "base"), then this will always return 0 regardless
 351:fltk-1.3.4-1/FL/Fl.H ****     of the argument, because Fl::scheme() is \p NULL in this case.
 352:fltk-1.3.4-1/FL/Fl.H **** 
 353:fltk-1.3.4-1/FL/Fl.H ****     \note The stored scheme name is always lowercase, and this method will
 354:fltk-1.3.4-1/FL/Fl.H ****     do a case-sensitive compare, so you \b must provide a lowercase string to
 355:fltk-1.3.4-1/FL/Fl.H ****     return the correct value. This is intentional for performance reasons.
 356:fltk-1.3.4-1/FL/Fl.H **** 
 357:fltk-1.3.4-1/FL/Fl.H ****     Example:
 358:fltk-1.3.4-1/FL/Fl.H ****     \code
 359:fltk-1.3.4-1/FL/Fl.H ****       if (Fl::is_scheme("gtk+")) { your_code_here(); }
 360:fltk-1.3.4-1/FL/Fl.H ****     \endcode
 361:fltk-1.3.4-1/FL/Fl.H **** 
 362:fltk-1.3.4-1/FL/Fl.H ****     \param[in] name \b lowercase string of requested scheme name.
 363:fltk-1.3.4-1/FL/Fl.H **** 
 364:fltk-1.3.4-1/FL/Fl.H ****     \return 1 if the given scheme is active, 0 otherwise.
 365:fltk-1.3.4-1/FL/Fl.H **** 
 366:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::scheme(const char *name)
 367:fltk-1.3.4-1/FL/Fl.H ****   */
 368:fltk-1.3.4-1/FL/Fl.H ****   static int is_scheme(const char *name) {
 369:fltk-1.3.4-1/FL/Fl.H ****     return (scheme_ && name && !strcmp(name,scheme_));
 370:fltk-1.3.4-1/FL/Fl.H ****   }
 371:fltk-1.3.4-1/FL/Fl.H ****   /**
 372:fltk-1.3.4-1/FL/Fl.H ****     Called by scheme according to scheme name. 
 373:fltk-1.3.4-1/FL/Fl.H ****     Loads or reloads the current scheme selection. 
 374:fltk-1.3.4-1/FL/Fl.H ****     See void scheme(const char *name) 
 375:fltk-1.3.4-1/FL/Fl.H ****   */
 376:fltk-1.3.4-1/FL/Fl.H ****   static int reload_scheme(); // platform dependent
 377:fltk-1.3.4-1/FL/Fl.H ****   static int scrollbar_size();
 378:fltk-1.3.4-1/FL/Fl.H ****   static void scrollbar_size(int W);
 379:fltk-1.3.4-1/FL/Fl.H **** 
 380:fltk-1.3.4-1/FL/Fl.H ****   // execution:
 381:fltk-1.3.4-1/FL/Fl.H ****   static int wait();
 382:fltk-1.3.4-1/FL/Fl.H ****   static double wait(double time);
 383:fltk-1.3.4-1/FL/Fl.H ****   static int check();
 384:fltk-1.3.4-1/FL/Fl.H ****   static int ready();
 385:fltk-1.3.4-1/FL/Fl.H ****   static int run();
 386:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* readqueue();
 387:fltk-1.3.4-1/FL/Fl.H ****   /**
 388:fltk-1.3.4-1/FL/Fl.H ****   Adds a one-shot timeout callback.  The function will be called by
 389:fltk-1.3.4-1/FL/Fl.H ****   Fl::wait() at <i>t</i> seconds after this function is called.
 390:fltk-1.3.4-1/FL/Fl.H ****   The optional void* argument is passed to the callback.
 391:fltk-1.3.4-1/FL/Fl.H ****   
 392:fltk-1.3.4-1/FL/Fl.H ****   You can have multiple timeout callbacks. To remove a timeout
 393:fltk-1.3.4-1/FL/Fl.H ****   callback use Fl::remove_timeout().
 394:fltk-1.3.4-1/FL/Fl.H ****   
 395:fltk-1.3.4-1/FL/Fl.H ****   If you need more accurate, repeated timeouts, use Fl::repeat_timeout() to
 396:fltk-1.3.4-1/FL/Fl.H ****   reschedule the subsequent timeouts.
 397:fltk-1.3.4-1/FL/Fl.H ****   
 398:fltk-1.3.4-1/FL/Fl.H ****   The following code will print "TICK" each second on
 399:fltk-1.3.4-1/FL/Fl.H ****   stdout with a fair degree of accuracy:
 400:fltk-1.3.4-1/FL/Fl.H ****   
 401:fltk-1.3.4-1/FL/Fl.H ****   \code
 402:fltk-1.3.4-1/FL/Fl.H **** #include <stdio.h>
 403:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl.H>
 404:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl_Window.H>
 405:fltk-1.3.4-1/FL/Fl.H **** void callback(void*) {
 406:fltk-1.3.4-1/FL/Fl.H ****   printf("TICK\n");
 407:fltk-1.3.4-1/FL/Fl.H ****   Fl::repeat_timeout(1.0, callback);    // retrigger timeout
 408:fltk-1.3.4-1/FL/Fl.H **** }
 409:fltk-1.3.4-1/FL/Fl.H **** int main() {
 410:fltk-1.3.4-1/FL/Fl.H ****   Fl_Window win(100,100);
 411:fltk-1.3.4-1/FL/Fl.H ****   win.show();
 412:fltk-1.3.4-1/FL/Fl.H ****   Fl::add_timeout(1.0, callback);       // set up first timeout
 413:fltk-1.3.4-1/FL/Fl.H ****   return Fl::run();
 414:fltk-1.3.4-1/FL/Fl.H **** }
 415:fltk-1.3.4-1/FL/Fl.H ****   \endcode
 416:fltk-1.3.4-1/FL/Fl.H ****   */
 417:fltk-1.3.4-1/FL/Fl.H ****   static void add_timeout(double t, Fl_Timeout_Handler,void* = 0); // platform dependent
 418:fltk-1.3.4-1/FL/Fl.H ****   /**
 419:fltk-1.3.4-1/FL/Fl.H ****   Repeats a timeout callback from the expiration of the
 420:fltk-1.3.4-1/FL/Fl.H ****   previous timeout, allowing for more accurate timing. You may only call
 421:fltk-1.3.4-1/FL/Fl.H ****   this method inside a timeout callback.
 422:fltk-1.3.4-1/FL/Fl.H ****   
 423:fltk-1.3.4-1/FL/Fl.H ****   The following code will print "TICK" each second on
 424:fltk-1.3.4-1/FL/Fl.H ****   stdout with a fair degree of accuracy:
 425:fltk-1.3.4-1/FL/Fl.H ****   
 426:fltk-1.3.4-1/FL/Fl.H ****   \code
 427:fltk-1.3.4-1/FL/Fl.H ****      void callback(void*) {
 428:fltk-1.3.4-1/FL/Fl.H ****        puts("TICK");
 429:fltk-1.3.4-1/FL/Fl.H ****        Fl::repeat_timeout(1.0, callback);
 430:fltk-1.3.4-1/FL/Fl.H ****      }
 431:fltk-1.3.4-1/FL/Fl.H ****   
 432:fltk-1.3.4-1/FL/Fl.H ****      int main() {
 433:fltk-1.3.4-1/FL/Fl.H ****        Fl::add_timeout(1.0, callback);
 434:fltk-1.3.4-1/FL/Fl.H ****        return Fl::run();
 435:fltk-1.3.4-1/FL/Fl.H ****      }
 436:fltk-1.3.4-1/FL/Fl.H ****   \endcode
 437:fltk-1.3.4-1/FL/Fl.H ****   */
 438:fltk-1.3.4-1/FL/Fl.H ****   static void repeat_timeout(double t, Fl_Timeout_Handler, void* = 0); // platform dependent
 439:fltk-1.3.4-1/FL/Fl.H ****   static int  has_timeout(Fl_Timeout_Handler, void* = 0);
 440:fltk-1.3.4-1/FL/Fl.H ****   static void remove_timeout(Fl_Timeout_Handler, void* = 0);
 441:fltk-1.3.4-1/FL/Fl.H ****   static void add_check(Fl_Timeout_Handler, void* = 0);
 442:fltk-1.3.4-1/FL/Fl.H ****   static int  has_check(Fl_Timeout_Handler, void* = 0);
 443:fltk-1.3.4-1/FL/Fl.H ****   static void remove_check(Fl_Timeout_Handler, void* = 0);
 444:fltk-1.3.4-1/FL/Fl.H ****   /**
 445:fltk-1.3.4-1/FL/Fl.H ****     Adds file descriptor fd to listen to.
 446:fltk-1.3.4-1/FL/Fl.H ****     
 447:fltk-1.3.4-1/FL/Fl.H ****     When the fd becomes ready for reading Fl::wait() will call the
 448:fltk-1.3.4-1/FL/Fl.H ****     callback and then return. The callback is passed the fd and the
 449:fltk-1.3.4-1/FL/Fl.H ****     arbitrary void* argument.
 450:fltk-1.3.4-1/FL/Fl.H ****     
 451:fltk-1.3.4-1/FL/Fl.H ****     The second version takes a when bitfield, with the bits
 452:fltk-1.3.4-1/FL/Fl.H ****     FL_READ, FL_WRITE, and FL_EXCEPT defined,
 453:fltk-1.3.4-1/FL/Fl.H ****     to indicate when the callback should be done.
 454:fltk-1.3.4-1/FL/Fl.H ****     
 455:fltk-1.3.4-1/FL/Fl.H ****     There can only be one callback of each type for a file descriptor. 
 456:fltk-1.3.4-1/FL/Fl.H ****     Fl::remove_fd() gets rid of <I>all</I> the callbacks for a given
 457:fltk-1.3.4-1/FL/Fl.H ****     file descriptor.
 458:fltk-1.3.4-1/FL/Fl.H ****     
 459:fltk-1.3.4-1/FL/Fl.H ****     Under UNIX <I>any</I> file descriptor can be monitored (files,
 460:fltk-1.3.4-1/FL/Fl.H ****     devices, pipes, sockets, etc.). Due to limitations in Microsoft Windows,
 461:fltk-1.3.4-1/FL/Fl.H ****     WIN32 applications can only monitor sockets.
 462:fltk-1.3.4-1/FL/Fl.H ****   */
 463:fltk-1.3.4-1/FL/Fl.H ****   static void add_fd(int fd, int when, Fl_FD_Handler cb, void* = 0); // platform dependent
 464:fltk-1.3.4-1/FL/Fl.H ****   /** See void add_fd(int fd, int when, Fl_FD_Handler cb, void* = 0) */
 465:fltk-1.3.4-1/FL/Fl.H ****   static void add_fd(int fd, Fl_FD_Handler cb, void* = 0); // platform dependent
 466:fltk-1.3.4-1/FL/Fl.H ****   /** Removes a file descriptor handler. */
 467:fltk-1.3.4-1/FL/Fl.H ****   static void remove_fd(int, int when); // platform dependent
 468:fltk-1.3.4-1/FL/Fl.H ****   /** Removes a file descriptor handler. */
 469:fltk-1.3.4-1/FL/Fl.H ****   static void remove_fd(int); // platform dependent
 470:fltk-1.3.4-1/FL/Fl.H **** 
 471:fltk-1.3.4-1/FL/Fl.H ****   static void add_idle(Fl_Idle_Handler cb, void* data = 0);
 472:fltk-1.3.4-1/FL/Fl.H ****   static int  has_idle(Fl_Idle_Handler cb, void* data = 0);
 473:fltk-1.3.4-1/FL/Fl.H ****   static void remove_idle(Fl_Idle_Handler cb, void* data = 0);
 474:fltk-1.3.4-1/FL/Fl.H ****   /** If true then flush() will do something. */
 475:fltk-1.3.4-1/FL/Fl.H ****   static int damage() {return damage_;}
 476:fltk-1.3.4-1/FL/Fl.H ****   static void redraw();
 477:fltk-1.3.4-1/FL/Fl.H ****   static void flush();
 478:fltk-1.3.4-1/FL/Fl.H ****   /** \addtogroup group_comdlg
 479:fltk-1.3.4-1/FL/Fl.H ****     @{ */
 480:fltk-1.3.4-1/FL/Fl.H ****   /**
 481:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::warning() to output a warning message.
 482:fltk-1.3.4-1/FL/Fl.H ****   
 483:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows returns \e without printing a warning
 484:fltk-1.3.4-1/FL/Fl.H ****   message, because Windows programs normally don't have stderr (a console
 485:fltk-1.3.4-1/FL/Fl.H ****   window) enabled.
 486:fltk-1.3.4-1/FL/Fl.H **** 
 487:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the warning message to stderr.
 488:fltk-1.3.4-1/FL/Fl.H **** 
 489:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 490:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 491:fltk-1.3.4-1/FL/Fl.H **** 
 492:fltk-1.3.4-1/FL/Fl.H ****   Fl::warning() means that there was a recoverable problem, the display may
 493:fltk-1.3.4-1/FL/Fl.H ****   be messed up, but the user can probably keep working - all X protocol
 494:fltk-1.3.4-1/FL/Fl.H ****   errors call this, for example. The default implementation returns after
 495:fltk-1.3.4-1/FL/Fl.H ****   displaying the message.
 496:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 497:fltk-1.3.4-1/FL/Fl.H ****   */
 498:fltk-1.3.4-1/FL/Fl.H ****   static void (*warning)(const char*, ...);
 499:fltk-1.3.4-1/FL/Fl.H ****   /**
 500:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::error() to output a normal error message.
 501:fltk-1.3.4-1/FL/Fl.H ****   
 502:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows displays the error message in a MessageBox window.
 503:fltk-1.3.4-1/FL/Fl.H **** 
 504:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the error message to stderr.
 505:fltk-1.3.4-1/FL/Fl.H **** 
 506:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 507:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 508:fltk-1.3.4-1/FL/Fl.H **** 
 509:fltk-1.3.4-1/FL/Fl.H ****   Fl::error() means there is a recoverable error such as the inability to read
 510:fltk-1.3.4-1/FL/Fl.H ****   an image file. The default implementation returns after displaying the message.
 511:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 512:fltk-1.3.4-1/FL/Fl.H ****   */
 513:fltk-1.3.4-1/FL/Fl.H ****   static void (*error)(const char*, ...);
 514:fltk-1.3.4-1/FL/Fl.H ****   /**
 515:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::fatal() to output a fatal error message.
 516:fltk-1.3.4-1/FL/Fl.H ****   
 517:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows displays the error message in a MessageBox window.
 518:fltk-1.3.4-1/FL/Fl.H **** 
 519:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the error message to stderr.
 520:fltk-1.3.4-1/FL/Fl.H ****   
 521:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 522:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 523:fltk-1.3.4-1/FL/Fl.H **** 
 524:fltk-1.3.4-1/FL/Fl.H ****   Fl::fatal() must not return, as FLTK is in an unusable state, however your
 525:fltk-1.3.4-1/FL/Fl.H ****   version may be able to use longjmp or an exception to continue, as long as
 526:fltk-1.3.4-1/FL/Fl.H ****   it does not call FLTK again. The default implementation exits with status 1
 527:fltk-1.3.4-1/FL/Fl.H ****   after displaying the message.
 528:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 529:fltk-1.3.4-1/FL/Fl.H ****   */
 530:fltk-1.3.4-1/FL/Fl.H ****   static void (*fatal)(const char*, ...);
 531:fltk-1.3.4-1/FL/Fl.H ****   /** @} */
 532:fltk-1.3.4-1/FL/Fl.H **** 
 533:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup  fl_windows Windows handling functions
 534:fltk-1.3.4-1/FL/Fl.H ****       \brief Windows and standard dialogs handling declared in <FL/Fl.H>
 535:fltk-1.3.4-1/FL/Fl.H ****     @{ */
 536:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* first_window();
 537:fltk-1.3.4-1/FL/Fl.H ****   static void first_window(Fl_Window*);
 538:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* next_window(const Fl_Window*);
 539:fltk-1.3.4-1/FL/Fl.H **** 
 540:fltk-1.3.4-1/FL/Fl.H ****   /**
 541:fltk-1.3.4-1/FL/Fl.H ****     Returns the top-most modal() window currently shown.
 542:fltk-1.3.4-1/FL/Fl.H **** 
 543:fltk-1.3.4-1/FL/Fl.H ****     This is the most recently shown() window with modal() true, or NULL
 544:fltk-1.3.4-1/FL/Fl.H ****     if there are no modal() windows shown().
 545:fltk-1.3.4-1/FL/Fl.H ****     The modal() window has its handle() method called
 546:fltk-1.3.4-1/FL/Fl.H ****     for all events, and no other windows will have handle()
 547:fltk-1.3.4-1/FL/Fl.H ****     called (grab() overrides this).
 548:fltk-1.3.4-1/FL/Fl.H ****   */
 549:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* modal() {return modal_;}
 550:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the window that currently receives all events.
 551:fltk-1.3.4-1/FL/Fl.H ****    
 552:fltk-1.3.4-1/FL/Fl.H ****    \return The window that currently receives all events,
 553:fltk-1.3.4-1/FL/Fl.H ****    or NULL if event grabbing is currently OFF.
 554:fltk-1.3.4-1/FL/Fl.H ****   */
 555:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* grab() {return grab_;}
  34              		.loc 2 555 0
  35 000e 488B2D00 		movq	_ZN2Fl5grab_E(%rip), %rbp
  35      000000
  36              	.LBE16:
  37              	.LBE15:
  38              		.loc 1 42 0
  39 0015 4885ED   		testq	%rbp, %rbp
  40 0018 7413     		je	.L4
  41              		.loc 1 42 0 is_stmt 0 discriminator 1
  42 001a 31FF     		xorl	%edi, %edi
  43 001c E8000000 		call	_ZN2Fl4grabEP9Fl_Window
  43      00
  44              	.LVL2:
  45 0021 EB0A     		jmp	.L4
  46              		.p2align 4,,10
  47 0023 0F1F4400 		.p2align 3
  47      00
  48              	.L11:
  49              		.loc 1 45 0 is_stmt 1
  50 0028 E8000000 		call	_ZN2Fl4waitEv
  50      00
  51              	.LVL3:
  52              	.L4:
  53              		.loc 1 44 0
  54 002d 4889DF   		movq	%rbx, %rdi
  55 0030 E8000000 		call	_ZN15Fl_File_Chooser5shownEv
  55      00
  56              	.LVL4:
  57 0035 85C0     		testl	%eax, %eax
  58 0037 75EF     		jne	.L11
  59              		.loc 1 47 0
  60 0039 4885ED   		testq	%rbp, %rbp
  61 003c 7412     		je	.L1
  62              		.loc 1 49 0
  63 003e 4883C408 		addq	$8, %rsp
  64              		.cfi_remember_state
  65              		.cfi_def_cfa_offset 24
  66              		.loc 1 48 0
  67 0042 4889EF   		movq	%rbp, %rdi
  68              		.loc 1 49 0
  69 0045 5B       		popq	%rbx
  70              		.cfi_def_cfa_offset 16
  71              	.LVL5:
  72 0046 5D       		popq	%rbp
  73              		.cfi_def_cfa_offset 8
  74              		.loc 1 48 0
  75 0047 E9000000 		jmp	_ZN2Fl4grabEP9Fl_Window
  75      00
  76              	.LVL6:
  77 004c 0F1F4000 		.p2align 4,,10
  78              		.p2align 3
  79              	.L1:
  80              		.cfi_restore_state
  81              		.loc 1 49 0
  82 0050 4883C408 		addq	$8, %rsp
  83              		.cfi_def_cfa_offset 24
  84 0054 5B       		popq	%rbx
  85              		.cfi_def_cfa_offset 16
  86              	.LVL7:
  87 0055 5D       		popq	%rbp
  88              		.cfi_def_cfa_offset 8
  89 0056 C3       		ret
  90              		.cfi_endproc
  91              	.LFE552:
  93              		.section	.text.unlikely._ZL5popupP15Fl_File_Chooser
  94              	.LCOLDE0:
  95              		.section	.text._ZL5popupP15Fl_File_Chooser
  96              	.LHOTE0:
  97              		.section	.text.unlikely._ZL8callbackP15Fl_File_ChooserPv,"ax",@progbits
  98              	.LCOLDB1:
  99              		.section	.text._ZL8callbackP15Fl_File_ChooserPv,"ax",@progbits
 100              	.LHOTB1:
 101              		.p2align 4,,15
 103              	_ZL8callbackP15Fl_File_ChooserPv:
 104              	.LFB551:
 105              		.loc 1 31 0
 106              		.cfi_startproc
 107              		.loc 1 32 0
 108 0000 48833D00 		cmpq	$0, _ZL16current_callback(%rip)
 108      00000000 
 109 0008 743F     		je	.L18
 110              		.loc 1 32 0 is_stmt 0 discriminator 1
 111 000a 488B3D00 		movq	_ZL2fc(%rip), %rdi
 111      000000
 112              		.loc 1 31 0 is_stmt 1 discriminator 1
 113 0011 53       		pushq	%rbx
 114              		.cfi_def_cfa_offset 16
 115              		.cfi_offset 3, -16
 116              		.loc 1 32 0 discriminator 1
 117 0012 BE010000 		movl	$1, %esi
 117      00
 118 0017 E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 118      00
 119              	.LVL8:
 120 001c 4885C0   		testq	%rax, %rax
 121 001f 7427     		je	.L12
 122              	.LVL9:
 123              	.LBB19:
 124              	.LBB20:
 125              		.loc 1 33 0
 126 0021 488B1D00 		movq	_ZL16current_callback(%rip), %rbx
 126      000000
 127 0028 488B3D00 		movq	_ZL2fc(%rip), %rdi
 127      000000
 128 002f BE010000 		movl	$1, %esi
 128      00
 129 0034 E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 129      00
 130              	.LVL10:
 131 0039 4889C7   		movq	%rax, %rdi
 132 003c 4889D8   		movq	%rbx, %rax
 133              	.LBE20:
 134              	.LBE19:
 135              		.loc 1 34 0
 136 003f 5B       		popq	%rbx
 137              		.cfi_remember_state
 138              		.cfi_restore 3
 139              		.cfi_def_cfa_offset 8
 140              	.LBB22:
 141              	.LBB21:
 142              		.loc 1 33 0
 143 0040 FFE0     		jmp	*%rax
 144              	.LVL11:
 145              		.p2align 4,,10
 146 0042 660F1F44 		.p2align 3
 146      0000
 147              	.L12:
 148              		.cfi_restore_state
 149              	.LBE21:
 150              	.LBE22:
 151              		.loc 1 34 0
 152 0048 5B       		popq	%rbx
 153              		.cfi_restore 3
 154              		.cfi_def_cfa_offset 8
 155              	.L18:
 156 0049 F3C3     		rep ret
 157              		.cfi_endproc
 158              	.LFE551:
 160              		.section	.text.unlikely._ZL8callbackP15Fl_File_ChooserPv
 161              	.LCOLDE1:
 162              		.section	.text._ZL8callbackP15Fl_File_ChooserPv
 163              	.LHOTE1:
 164              		.section	.text.unlikely._Z24fl_file_chooser_callbackPFvPKcE,"ax",@progbits
 165              	.LCOLDB2:
 166              		.section	.text._Z24fl_file_chooser_callbackPFvPKcE,"ax",@progbits
 167              	.LHOTB2:
 168              		.p2align 4,,15
 169              		.globl	_Z24fl_file_chooser_callbackPFvPKcE
 171              	_Z24fl_file_chooser_callbackPFvPKcE:
 172              	.LFB553:
 173              		.loc 1 60 0
 174              		.cfi_startproc
 175              	.LVL12:
 176              		.loc 1 61 0
 177 0000 48893D00 		movq	%rdi, _ZL16current_callback(%rip)
 177      000000
 178 0007 C3       		ret
 179              		.cfi_endproc
 180              	.LFE553:
 182              		.section	.text.unlikely._Z24fl_file_chooser_callbackPFvPKcE
 183              	.LCOLDE2:
 184              		.section	.text._Z24fl_file_chooser_callbackPFvPKcE
 185              	.LHOTE2:
 186              		.section	.text.unlikely._Z24fl_file_chooser_ok_labelPKc,"ax",@progbits
 187              	.LCOLDB3:
 188              		.section	.text._Z24fl_file_chooser_ok_labelPKc,"ax",@progbits
 189              	.LHOTB3:
 190              		.p2align 4,,15
 191              		.globl	_Z24fl_file_chooser_ok_labelPKc
 193              	_Z24fl_file_chooser_ok_labelPKc:
 194              	.LFB554:
 195              		.loc 1 70 0
 196              		.cfi_startproc
 197              	.LVL13:
 198              		.loc 1 71 0
 199 0000 4885FF   		testq	%rdi, %rdi
 200 0003 740B     		je	.L21
 201              		.loc 1 71 0 is_stmt 0 discriminator 1
 202 0005 48893D00 		movq	%rdi, _ZL13current_label(%rip)
 202      000000
 203 000c C3       		ret
 204 000d 0F1F00   		.p2align 4,,10
 205              		.p2align 3
 206              	.L21:
 207              		.loc 1 72 0 is_stmt 1
 208 0010 488B0500 		movq	fl_ok(%rip), %rax
 208      000000
 209 0017 48890500 		movq	%rax, _ZL13current_label(%rip)
 209      000000
 210 001e C3       		ret
 211              		.cfi_endproc
 212              	.LFE554:
 214              		.section	.text.unlikely._Z24fl_file_chooser_ok_labelPKc
 215              	.LCOLDE3:
 216              		.section	.text._Z24fl_file_chooser_ok_labelPKc
 217              	.LHOTE3:
 218              		.section	.rodata.str1.1,"aMS",@progbits,1
 219              	.LC4:
 220 0000 2E00     		.string	"."
 221              	.LC5:
 222 0002 00       		.string	""
 223              		.section	.text.unlikely._Z15fl_file_chooserPKcS0_S0_i,"ax",@progbits
 224              	.LCOLDB6:
 225              		.section	.text._Z15fl_file_chooserPKcS0_S0_i,"ax",@progbits
 226              	.LHOTB6:
 227              		.p2align 4,,15
 228              		.globl	_Z15fl_file_chooserPKcS0_S0_i
 230              	_Z15fl_file_chooserPKcS0_S0_i:
 231              	.LFB555:
 232              		.loc 1 92 0
 233              		.cfi_startproc
 234              	.LVL14:
 235 0000 4156     		pushq	%r14
 236              		.cfi_def_cfa_offset 16
 237              		.cfi_offset 14, -16
 238 0002 4989FE   		movq	%rdi, %r14
 239              	.LBB23:
 240              		.loc 1 95 0
 241 0005 488B3D00 		movq	_ZL2fc(%rip), %rdi
 241      000000
 242              	.LVL15:
 243              	.LBE23:
 244              		.loc 1 92 0
 245 000c 4155     		pushq	%r13
 246              		.cfi_def_cfa_offset 24
 247              		.cfi_offset 13, -24
 248 000e 4189CD   		movl	%ecx, %r13d
 249 0011 4154     		pushq	%r12
 250              		.cfi_def_cfa_offset 32
 251              		.cfi_offset 12, -32
 252 0013 55       		pushq	%rbp
 253              		.cfi_def_cfa_offset 40
 254              		.cfi_offset 6, -40
 255 0014 4889F5   		movq	%rsi, %rbp
 256 0017 53       		pushq	%rbx
 257              		.cfi_def_cfa_offset 48
 258              		.cfi_offset 3, -48
 259              	.LBB42:
 260              		.loc 1 95 0
 261 0018 4885FF   		testq	%rdi, %rdi
 262              	.LBE42:
 263              		.loc 1 92 0
 264 001b 4889D3   		movq	%rdx, %rbx
 265              	.LBB43:
 266              		.loc 1 95 0
 267 001e 0F844C02 		je	.L77
 267      0000
 268              	.LBB24:
 269              		.loc 1 101 0
 270 0024 BE020000 		movl	$2, %esi
 270      00
 271              	.LVL16:
 272 0029 E8000000 		call	_ZN15Fl_File_Chooser4typeEi
 272      00
 273              	.LVL17:
 274              		.loc 1 104 0
 275 002e 488B3D00 		movq	_ZL2fc(%rip), %rdi
 275      000000
 276 0035 E8000000 		call	_ZN15Fl_File_Chooser6filterEv
 276      00
 277              	.LVL18:
 278              		.loc 1 105 0
 279 003a 4885C0   		testq	%rax, %rax
 280              		.loc 1 104 0
 281 003d 4989C4   		movq	%rax, %r12
 282              	.LVL19:
 283              		.loc 1 105 0
 284 0040 0F843201 		je	.L27
 284      0000
 285 0046 4885ED   		testq	%rbp, %rbp
 286 0049 0F842901 		je	.L27
 286      0000
 287              		.loc 1 105 0 is_stmt 0 discriminator 1
 288 004f 4889EE   		movq	%rbp, %rsi
 289 0052 4889C7   		movq	%rax, %rdi
 290 0055 E8000000 		call	strcmp
 290      00
 291              	.LVL20:
 292 005a 85C0     		testl	%eax, %eax
 293 005c 0F851B01 		jne	.L29
 293      0000
 294              	.L28:
 295              	.LVL21:
 296              		.loc 1 110 0 is_stmt 1
 297 0062 488B3D00 		movq	_ZL2fc(%rip), %rdi
 297      000000
 298 0069 4889EE   		movq	%rbp, %rsi
 299 006c E8000000 		call	_ZN15Fl_File_Chooser6filterEPKc
 299      00
 300              	.LVL22:
 301              		.loc 1 111 0
 302 0071 488B3D00 		movq	_ZL2fc(%rip), %rdi
 302      000000
 303 0078 4C89F6   		movq	%r14, %rsi
 304 007b E8000000 		call	_ZN15Fl_File_Chooser5labelEPKc
 304      00
 305              	.LVL23:
 306              	.LBB25:
 307              		.loc 1 113 0
 308 0080 4885DB   		testq	%rbx, %rbx
 309 0083 747A     		je	.L26
 310              	.LVL24:
 311              	.L33:
 312              	.LBB26:
 313              		.loc 1 133 0
 314 0085 803B00   		cmpb	$0, (%rbx)
 315 0088 0F853202 		jne	.L37
 315      0000
 316              	.LBB27:
 317              		.loc 1 134 0
 318 008e 488B3D00 		movq	_ZL2fc(%rip), %rdi
 318      000000
 319 0095 BE010000 		movl	$1, %esi
 319      00
 320 009a E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 320      00
 321              	.LVL25:
 322              		.loc 1 135 0
 323 009f 4885C0   		testq	%rax, %rax
 324 00a2 0F843002 		je	.L38
 324      0000
 325              		.loc 1 136 0
 326 00a8 488B3D00 		movq	_ZL2fc(%rip), %rdi
 326      000000
 327 00af BE010000 		movl	$1, %esi
 327      00
 328 00b4 E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 328      00
 329              	.LVL26:
 330 00b9 BA000800 		movl	$2048, %edx
 330      00
 331 00be 4889C6   		movq	%rax, %rsi
 332 00c1 BF000000 		movl	$_ZZ15fl_file_chooserPKcS0_S0_iE7retname, %edi
 332      00
 333 00c6 E8000000 		call	fl_strlcpy
 333      00
 334              	.LVL27:
 335              	.L39:
 336              		.loc 1 139 0
 337 00cb BF000000 		movl	$_ZZ15fl_file_chooserPKcS0_S0_iE7retname, %edi
 337      00
 338 00d0 E8000000 		call	_Z16fl_filename_namePKc
 338      00
 339              	.LVL28:
 340              		.loc 1 140 0
 341 00d5 4885C0   		testq	%rax, %rax
 342 00d8 7403     		je	.L40
 343              		.loc 1 140 0 is_stmt 0 discriminator 1
 344 00da C60000   		movb	$0, (%rax)
 345              	.L40:
 346              		.loc 1 141 0 is_stmt 1
 347 00dd 488B3D00 		movq	_ZL2fc(%rip), %rdi
 347      000000
 348 00e4 BE000000 		movl	$.LC5, %esi
 348      00
 349 00e9 E8000000 		call	_ZN15Fl_File_Chooser5valueEPKc
 349      00
 350              	.LVL29:
 351              		.loc 1 142 0
 352 00ee 488B3D00 		movq	_ZL2fc(%rip), %rdi
 352      000000
 353 00f5 BE000000 		movl	$_ZZ15fl_file_chooserPKcS0_S0_iE7retname, %esi
 353      00
 354 00fa E8000000 		call	_ZN15Fl_File_Chooser9directoryEPKc
 354      00
 355              	.LVL30:
 356              	.L26:
 357              	.LBE27:
 358              	.LBE26:
 359              	.LBE25:
 360              	.LBE24:
 361              	.LBE43:
 362              		.loc 1 148 0
 363 00ff 488B3500 		movq	_ZL13current_label(%rip), %rsi
 363      000000
 364 0106 488B3D00 		movq	_ZL2fc(%rip), %rdi
 364      000000
 365 010d E8000000 		call	_ZN15Fl_File_Chooser8ok_labelEPKc
 365      00
 366              	.LVL31:
 367              		.loc 1 149 0
 368 0112 488B3D00 		movq	_ZL2fc(%rip), %rdi
 368      000000
 369 0119 E8000000 		call	_ZL5popupP15Fl_File_Chooser
 369      00
 370              	.LVL32:
 371              		.loc 1 150 0
 372 011e 488B3D00 		movq	_ZL2fc(%rip), %rdi
 372      000000
 373 0125 BE010000 		movl	$1, %esi
 373      00
 374 012a E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 374      00
 375              	.LVL33:
 376 012f 4585ED   		testl	%r13d, %r13d
 377 0132 0F840001 		je	.L43
 377      0000
 378 0138 4885C0   		testq	%rax, %rax
 379 013b 0F84F700 		je	.L43
 379      0000
 380              		.loc 1 151 0
 381 0141 488B3D00 		movq	_ZL2fc(%rip), %rdi
 381      000000
 382 0148 BE010000 		movl	$1, %esi
 382      00
 383 014d E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 383      00
 384              	.LVL34:
 385 0152 BE000800 		movl	$2048, %esi
 385      00
 386 0157 4889C2   		movq	%rax, %rdx
 387 015a BF000000 		movl	$_ZZ15fl_file_chooserPKcS0_S0_iE7retname, %edi
 387      00
 388 015f E8000000 		call	_Z20fl_filename_relativePciPKc
 388      00
 389              	.LVL35:
 390              		.loc 1 153 0
 391 0164 B8000000 		movl	$_ZZ15fl_file_chooserPKcS0_S0_iE7retname, %eax
 391      00
 392              	.L74:
 393              		.loc 1 156 0
 394 0169 5B       		popq	%rbx
 395              		.cfi_remember_state
 396              		.cfi_def_cfa_offset 40
 397              	.LVL36:
 398 016a 5D       		popq	%rbp
 399              		.cfi_def_cfa_offset 32
 400              	.LVL37:
 401 016b 415C     		popq	%r12
 402              		.cfi_def_cfa_offset 24
 403 016d 415D     		popq	%r13
 404              		.cfi_def_cfa_offset 16
 405              	.LVL38:
 406 016f 415E     		popq	%r14
 407              		.cfi_def_cfa_offset 8
 408              	.LVL39:
 409 0171 C3       		ret
 410              	.LVL40:
 411              		.p2align 4,,10
 412 0172 660F1F44 		.p2align 3
 412      0000
 413              	.L27:
 414              		.cfi_restore_state
 415              	.LBB44:
 416              	.LBB39:
 417              		.loc 1 107 0
 418 0178 4D85E4   		testq	%r12, %r12
 419 017b 7407     		je	.L30
 420              	.LVL41:
 421              	.L29:
 422              		.loc 1 107 0 is_stmt 0 discriminator 2
 423 017d 41803C24 		cmpb	$0, (%r12)
 423      00
 424 0182 7513     		jne	.L31
 425              	.L30:
 426              		.loc 1 107 0 discriminator 3
 427 0184 4885ED   		testq	%rbp, %rbp
 428 0187 0F84D5FE 		je	.L28
 428      FFFF
 429              		.loc 1 107 0 discriminator 4
 430 018d 807D0000 		cmpb	$0, 0(%rbp)
 431 0191 0F84CBFE 		je	.L28
 431      FFFF
 432              	.L31:
 433              		.loc 1 110 0 is_stmt 1
 434 0197 488B3D00 		movq	_ZL2fc(%rip), %rdi
 434      000000
 435 019e 4889EE   		movq	%rbp, %rsi
 436 01a1 E8000000 		call	_ZN15Fl_File_Chooser6filterEPKc
 436      00
 437              	.LVL42:
 438              		.loc 1 111 0
 439 01a6 488B3D00 		movq	_ZL2fc(%rip), %rdi
 439      000000
 440 01ad 4C89F6   		movq	%r14, %rsi
 441 01b0 E8000000 		call	_ZN15Fl_File_Chooser5labelEPKc
 441      00
 442              	.LVL43:
 443              	.LBB36:
 444              		.loc 1 113 0
 445 01b5 4885DB   		testq	%rbx, %rbx
 446 01b8 0F85C7FE 		jne	.L33
 446      FFFF
 447              	.LBB29:
 448              		.loc 1 114 0 discriminator 1
 449 01be 488B3D00 		movq	_ZL2fc(%rip), %rdi
 449      000000
 450 01c5 BE010000 		movl	$1, %esi
 450      00
 451 01ca E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 451      00
 452              	.LVL44:
 453 01cf 4885C0   		testq	%rax, %rax
 454 01d2 0F8427FF 		je	.L26
 454      FFFF
 455              	.LBB30:
 456              		.loc 1 116 0
 457 01d8 488B3D00 		movq	_ZL2fc(%rip), %rdi
 457      000000
 458 01df BE010000 		movl	$1, %esi
 458      00
 459 01e4 E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 459      00
 460              	.LVL45:
 461 01e9 BA000800 		movl	$2048, %edx
 461      00
 462 01ee 4889C6   		movq	%rax, %rsi
 463 01f1 BF000000 		movl	$_ZZ15fl_file_chooserPKcS0_S0_iE7retname, %edi
 463      00
 464 01f6 E8000000 		call	fl_strlcpy
 464      00
 465              	.LVL46:
 466              	.LBB31:
 467              	.LBB32:
 468              		.file 3 "/usr/include/string.h"
   1:/usr/include/string.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/string.h ****    This file is part of the GNU C Library.
   3:/usr/include/string.h **** 
   4:/usr/include/string.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/string.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/string.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/string.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/string.h **** 
   9:/usr/include/string.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/string.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/string.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/string.h ****    Lesser General Public License for more details.
  13:/usr/include/string.h **** 
  14:/usr/include/string.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/string.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/string.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/string.h **** 
  18:/usr/include/string.h **** /*
  19:/usr/include/string.h ****  *	ISO C99 Standard: 7.21 String handling	<string.h>
  20:/usr/include/string.h ****  */
  21:/usr/include/string.h **** 
  22:/usr/include/string.h **** #ifndef	_STRING_H
  23:/usr/include/string.h **** #define	_STRING_H	1
  24:/usr/include/string.h **** 
  25:/usr/include/string.h **** #include <features.h>
  26:/usr/include/string.h **** 
  27:/usr/include/string.h **** __BEGIN_DECLS
  28:/usr/include/string.h **** 
  29:/usr/include/string.h **** /* Get size_t and NULL from <stddef.h>.  */
  30:/usr/include/string.h **** #define	__need_size_t
  31:/usr/include/string.h **** #define	__need_NULL
  32:/usr/include/string.h **** #include <stddef.h>
  33:/usr/include/string.h **** 
  34:/usr/include/string.h **** /* Tell the caller that we provide correct C++ prototypes.  */
  35:/usr/include/string.h **** #if defined __cplusplus && __GNUC_PREREQ (4, 4)
  36:/usr/include/string.h **** # define __CORRECT_ISO_CPP_STRING_H_PROTO
  37:/usr/include/string.h **** #endif
  38:/usr/include/string.h **** 
  39:/usr/include/string.h **** 
  40:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
  41:/usr/include/string.h **** /* Copy N bytes of SRC to DEST.  */
  42:/usr/include/string.h **** extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
  43:/usr/include/string.h **** 		     size_t __n) __THROW __nonnull ((1, 2));
  44:/usr/include/string.h **** /* Copy N bytes of SRC to DEST, guaranteeing
  45:/usr/include/string.h ****    correct behavior for overlapping strings.  */
  46:/usr/include/string.h **** extern void *memmove (void *__dest, const void *__src, size_t __n)
  47:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
  48:/usr/include/string.h **** __END_NAMESPACE_STD
  49:/usr/include/string.h **** 
  50:/usr/include/string.h **** /* Copy no more than N bytes of SRC to DEST, stopping when C is found.
  51:/usr/include/string.h ****    Return the position in DEST one byte past where C was copied,
  52:/usr/include/string.h ****    or NULL if C was not found in the first N bytes of SRC.  */
  53:/usr/include/string.h **** #if defined __USE_MISC || defined __USE_XOPEN
  54:/usr/include/string.h **** extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
  55:/usr/include/string.h **** 		      int __c, size_t __n)
  56:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
  57:/usr/include/string.h **** #endif /* Misc || X/Open.  */
  58:/usr/include/string.h **** 
  59:/usr/include/string.h **** 
  60:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
  61:/usr/include/string.h **** /* Set N bytes of S to C.  */
  62:/usr/include/string.h **** extern void *memset (void *__s, int __c, size_t __n) __THROW __nonnull ((1));
  63:/usr/include/string.h **** 
  64:/usr/include/string.h **** /* Compare N bytes of S1 and S2.  */
  65:/usr/include/string.h **** extern int memcmp (const void *__s1, const void *__s2, size_t __n)
  66:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
  67:/usr/include/string.h **** 
  68:/usr/include/string.h **** /* Search N bytes of S for C.  */
  69:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
  70:/usr/include/string.h **** extern "C++"
  71:/usr/include/string.h **** {
  72:/usr/include/string.h **** extern void *memchr (void *__s, int __c, size_t __n)
  73:/usr/include/string.h ****       __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
  74:/usr/include/string.h **** extern const void *memchr (const void *__s, int __c, size_t __n)
  75:/usr/include/string.h ****       __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
  76:/usr/include/string.h **** 
  77:/usr/include/string.h **** # ifdef __OPTIMIZE__
  78:/usr/include/string.h **** __extern_always_inline void *
  79:/usr/include/string.h **** memchr (void *__s, int __c, size_t __n) __THROW
  80:/usr/include/string.h **** {
  81:/usr/include/string.h ****   return __builtin_memchr (__s, __c, __n);
  82:/usr/include/string.h **** }
  83:/usr/include/string.h **** 
  84:/usr/include/string.h **** __extern_always_inline const void *
  85:/usr/include/string.h **** memchr (const void *__s, int __c, size_t __n) __THROW
  86:/usr/include/string.h **** {
  87:/usr/include/string.h ****   return __builtin_memchr (__s, __c, __n);
  88:/usr/include/string.h **** }
  89:/usr/include/string.h **** # endif
  90:/usr/include/string.h **** }
  91:/usr/include/string.h **** #else
  92:/usr/include/string.h **** extern void *memchr (const void *__s, int __c, size_t __n)
  93:/usr/include/string.h ****       __THROW __attribute_pure__ __nonnull ((1));
  94:/usr/include/string.h **** #endif
  95:/usr/include/string.h **** __END_NAMESPACE_STD
  96:/usr/include/string.h **** 
  97:/usr/include/string.h **** #ifdef __USE_GNU
  98:/usr/include/string.h **** /* Search in S for C.  This is similar to `memchr' but there is no
  99:/usr/include/string.h ****    length limit.  */
 100:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 101:/usr/include/string.h **** extern "C++" void *rawmemchr (void *__s, int __c)
 102:/usr/include/string.h ****      __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
 103:/usr/include/string.h **** extern "C++" const void *rawmemchr (const void *__s, int __c)
 104:/usr/include/string.h ****      __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
 105:/usr/include/string.h **** # else
 106:/usr/include/string.h **** extern void *rawmemchr (const void *__s, int __c)
 107:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 108:/usr/include/string.h **** # endif
 109:/usr/include/string.h **** 
 110:/usr/include/string.h **** /* Search N bytes of S for the final occurrence of C.  */
 111:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 112:/usr/include/string.h **** extern "C++" void *memrchr (void *__s, int __c, size_t __n)
 113:/usr/include/string.h ****       __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
 114:/usr/include/string.h **** extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
 115:/usr/include/string.h ****       __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
 116:/usr/include/string.h **** # else
 117:/usr/include/string.h **** extern void *memrchr (const void *__s, int __c, size_t __n)
 118:/usr/include/string.h ****       __THROW __attribute_pure__ __nonnull ((1));
 119:/usr/include/string.h **** # endif
 120:/usr/include/string.h **** #endif
 121:/usr/include/string.h **** 
 122:/usr/include/string.h **** 
 123:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 124:/usr/include/string.h **** /* Copy SRC to DEST.  */
 125:/usr/include/string.h **** extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
 126:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 127:/usr/include/string.h **** /* Copy no more than N characters of SRC to DEST.  */
 128:/usr/include/string.h **** extern char *strncpy (char *__restrict __dest,
 129:/usr/include/string.h **** 		      const char *__restrict __src, size_t __n)
 130:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 131:/usr/include/string.h **** 
 132:/usr/include/string.h **** /* Append SRC onto DEST.  */
 133:/usr/include/string.h **** extern char *strcat (char *__restrict __dest, const char *__restrict __src)
 134:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 135:/usr/include/string.h **** /* Append no more than N characters from SRC onto DEST.  */
 136:/usr/include/string.h **** extern char *strncat (char *__restrict __dest, const char *__restrict __src,
 137:/usr/include/string.h **** 		      size_t __n) __THROW __nonnull ((1, 2));
 138:/usr/include/string.h **** 
 139:/usr/include/string.h **** /* Compare S1 and S2.  */
 140:/usr/include/string.h **** extern int strcmp (const char *__s1, const char *__s2)
 141:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 142:/usr/include/string.h **** /* Compare N characters of S1 and S2.  */
 143:/usr/include/string.h **** extern int strncmp (const char *__s1, const char *__s2, size_t __n)
 144:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 145:/usr/include/string.h **** 
 146:/usr/include/string.h **** /* Compare the collated forms of S1 and S2.  */
 147:/usr/include/string.h **** extern int strcoll (const char *__s1, const char *__s2)
 148:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 149:/usr/include/string.h **** /* Put a transformation of SRC into no more than N bytes of DEST.  */
 150:/usr/include/string.h **** extern size_t strxfrm (char *__restrict __dest,
 151:/usr/include/string.h **** 		       const char *__restrict __src, size_t __n)
 152:/usr/include/string.h ****      __THROW __nonnull ((2));
 153:/usr/include/string.h **** __END_NAMESPACE_STD
 154:/usr/include/string.h **** 
 155:/usr/include/string.h **** #ifdef __USE_XOPEN2K8
 156:/usr/include/string.h **** /* The following functions are equivalent to the both above but they
 157:/usr/include/string.h ****    take the locale they use for the collation as an extra argument.
 158:/usr/include/string.h ****    This is not standardsized but something like will come.  */
 159:/usr/include/string.h **** # include <xlocale.h>
 160:/usr/include/string.h **** 
 161:/usr/include/string.h **** /* Compare the collated forms of S1 and S2 using rules from L.  */
 162:/usr/include/string.h **** extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
 163:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2, 3));
 164:/usr/include/string.h **** /* Put a transformation of SRC into no more than N bytes of DEST.  */
 165:/usr/include/string.h **** extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
 166:/usr/include/string.h **** 			 __locale_t __l) __THROW __nonnull ((2, 4));
 167:/usr/include/string.h **** #endif
 168:/usr/include/string.h **** 
 169:/usr/include/string.h **** #if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
 170:/usr/include/string.h **** /* Duplicate S, returning an identical malloc'd string.  */
 171:/usr/include/string.h **** extern char *strdup (const char *__s)
 172:/usr/include/string.h ****      __THROW __attribute_malloc__ __nonnull ((1));
 173:/usr/include/string.h **** #endif
 174:/usr/include/string.h **** 
 175:/usr/include/string.h **** /* Return a malloc'd copy of at most N bytes of STRING.  The
 176:/usr/include/string.h ****    resultant string is terminated even if no null terminator
 177:/usr/include/string.h ****    appears before STRING[N].  */
 178:/usr/include/string.h **** #if defined __USE_XOPEN2K8
 179:/usr/include/string.h **** extern char *strndup (const char *__string, size_t __n)
 180:/usr/include/string.h ****      __THROW __attribute_malloc__ __nonnull ((1));
 181:/usr/include/string.h **** #endif
 182:/usr/include/string.h **** 
 183:/usr/include/string.h **** #if defined __USE_GNU && defined __GNUC__
 184:/usr/include/string.h **** /* Duplicate S, returning an identical alloca'd string.  */
 185:/usr/include/string.h **** # define strdupa(s)							      \
 186:/usr/include/string.h ****   (__extension__							      \
 187:/usr/include/string.h ****     ({									      \
 188:/usr/include/string.h ****       const char *__old = (s);						      \
 189:/usr/include/string.h ****       size_t __len = strlen (__old) + 1;				      \
 190:/usr/include/string.h ****       char *__new = (char *) __builtin_alloca (__len);			      \
 191:/usr/include/string.h ****       (char *) memcpy (__new, __old, __len);				      \
 192:/usr/include/string.h ****     }))
 193:/usr/include/string.h **** 
 194:/usr/include/string.h **** /* Return an alloca'd copy of at most N bytes of string.  */
 195:/usr/include/string.h **** # define strndupa(s, n)							      \
 196:/usr/include/string.h ****   (__extension__							      \
 197:/usr/include/string.h ****     ({									      \
 198:/usr/include/string.h ****       const char *__old = (s);						      \
 199:/usr/include/string.h ****       size_t __len = strnlen (__old, (n));				      \
 200:/usr/include/string.h ****       char *__new = (char *) __builtin_alloca (__len + 1);		      \
 201:/usr/include/string.h ****       __new[__len] = '\0';						      \
 202:/usr/include/string.h ****       (char *) memcpy (__new, __old, __len);				      \
 203:/usr/include/string.h ****     }))
 204:/usr/include/string.h **** #endif
 205:/usr/include/string.h **** 
 206:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 207:/usr/include/string.h **** /* Find the first occurrence of C in S.  */
 208:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 209:/usr/include/string.h **** extern "C++"
 210:/usr/include/string.h **** {
 211:/usr/include/string.h **** extern char *strchr (char *__s, int __c)
 212:/usr/include/string.h ****      __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
 213:/usr/include/string.h **** extern const char *strchr (const char *__s, int __c)
 214:/usr/include/string.h ****      __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
 215:/usr/include/string.h **** 
 216:/usr/include/string.h **** # ifdef __OPTIMIZE__
 217:/usr/include/string.h **** __extern_always_inline char *
 218:/usr/include/string.h **** strchr (char *__s, int __c) __THROW
 219:/usr/include/string.h **** {
 220:/usr/include/string.h ****   return __builtin_strchr (__s, __c);
 221:/usr/include/string.h **** }
 222:/usr/include/string.h **** 
 223:/usr/include/string.h **** __extern_always_inline const char *
 224:/usr/include/string.h **** strchr (const char *__s, int __c) __THROW
 225:/usr/include/string.h **** {
 226:/usr/include/string.h ****   return __builtin_strchr (__s, __c);
 227:/usr/include/string.h **** }
 228:/usr/include/string.h **** # endif
 229:/usr/include/string.h **** }
 230:/usr/include/string.h **** #else
 231:/usr/include/string.h **** extern char *strchr (const char *__s, int __c)
 232:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 233:/usr/include/string.h **** #endif
 234:/usr/include/string.h **** /* Find the last occurrence of C in S.  */
 235:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 236:/usr/include/string.h **** extern "C++"
 237:/usr/include/string.h **** {
 238:/usr/include/string.h **** extern char *strrchr (char *__s, int __c)
 239:/usr/include/string.h ****      __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
 240:/usr/include/string.h **** extern const char *strrchr (const char *__s, int __c)
 241:/usr/include/string.h ****      __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
 242:/usr/include/string.h **** 
 243:/usr/include/string.h **** # ifdef __OPTIMIZE__
 244:/usr/include/string.h **** __extern_always_inline char *
 245:/usr/include/string.h **** strrchr (char *__s, int __c) __THROW
 246:/usr/include/string.h **** {
 247:/usr/include/string.h ****   return __builtin_strrchr (__s, __c);
 469              		.loc 3 247 0
 470 01fb BE2F0000 		movl	$47, %esi
 470      00
 471 0200 BF000000 		movl	$_ZZ15fl_file_chooserPKcS0_S0_iE7retname, %edi
 471      00
 472 0205 E8000000 		call	strrchr
 472      00
 473              	.LVL47:
 474              	.LBE32:
 475              	.LBE31:
 476              		.loc 1 120 0
 477 020a 4885C0   		testq	%rax, %rax
 478 020d 740F     		je	.L36
 479              		.loc 1 123 0
 480 020f 483D0000 		cmpq	$_ZZ15fl_file_chooserPKcS0_S0_iE7retname, %rax
 480      0000
 481 0215 0F84D400 		je	.L78
 481      0000
 482              		.loc 1 126 0
 483 021b C60000   		movb	$0, (%rax)
 484              	.L36:
 485              		.loc 1 129 0
 486 021e 488B3D00 		movq	_ZL2fc(%rip), %rdi
 486      000000
 487 0225 BE000000 		movl	$_ZZ15fl_file_chooserPKcS0_S0_iE7retname, %esi
 487      00
 488 022a E8000000 		call	_ZN15Fl_File_Chooser5valueEPKc
 488      00
 489              	.LVL48:
 490              	.LBE30:
 491 022f E9CBFEFF 		jmp	.L26
 491      FF
 492              	.LVL49:
 493              		.p2align 4,,10
 494 0234 0F1F4000 		.p2align 3
 495              	.L43:
 496              	.LBE29:
 497              	.LBE36:
 498              	.LBE39:
 499              	.LBE44:
 500              		.loc 1 154 0
 501 0238 488B3D00 		movq	_ZL2fc(%rip), %rdi
 501      000000
 502 023f BE010000 		movl	$1, %esi
 502      00
 503 0244 E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 503      00
 504              	.LVL50:
 505 0249 4885C0   		testq	%rax, %rax
 506 024c 0F8417FF 		je	.L74
 506      FFFF
 507              		.loc 1 156 0 discriminator 1
 508 0252 5B       		popq	%rbx
 509              		.cfi_remember_state
 510              		.cfi_def_cfa_offset 40
 511              	.LVL51:
 512 0253 5D       		popq	%rbp
 513              		.cfi_def_cfa_offset 32
 514              	.LVL52:
 515 0254 415C     		popq	%r12
 516              		.cfi_def_cfa_offset 24
 517 0256 415D     		popq	%r13
 518              		.cfi_def_cfa_offset 16
 519              	.LVL53:
 520 0258 415E     		popq	%r14
 521              		.cfi_def_cfa_offset 8
 522              	.LVL54:
 523              		.loc 1 154 0 discriminator 1
 524 025a 488B3D00 		movq	_ZL2fc(%rip), %rdi
 524      000000
 525 0261 BE010000 		movl	$1, %esi
 525      00
 526 0266 E9000000 		jmp	_ZN15Fl_File_Chooser5valueEi
 526      00
 527              	.LVL55:
 528 026b 0F1F4400 		.p2align 4,,10
 528      00
 529              		.p2align 3
 530              	.L77:
 531              		.cfi_restore_state
 532              	.LBB45:
 533              		.loc 1 96 0
 534 0270 4885D2   		testq	%rdx, %rdx
 535 0273 7473     		je	.L48
 536              		.loc 1 96 0 is_stmt 0 discriminator 2
 537 0275 803A00   		cmpb	$0, (%rdx)
 538 0278 B8000000 		movl	$.LC4, %eax
 538      00
 539 027d 480F44D8 		cmove	%rax, %rbx
 540              	.L25:
 541              	.LVL56:
 542              		.loc 1 98 0 is_stmt 1
 543 0281 BFB01800 		movl	$6320, %edi
 543      00
 544 0286 E8000000 		call	_Znwm
 544      00
 545              	.LVL57:
 546 028b 4889EA   		movq	%rbp, %rdx
 547 028e 4989C4   		movq	%rax, %r12
 548 0291 4889DE   		movq	%rbx, %rsi
 549 0294 4889C7   		movq	%rax, %rdi
 550 0297 4D89F0   		movq	%r14, %r8
 551 029a B9020000 		movl	$2, %ecx
 551      00
 552 029f E8000000 		call	_ZN15Fl_File_ChooserC1EPKcS1_iS1_
 552      00
 553              	.LVL58:
 554              		.loc 1 99 0
 555 02a4 31D2     		xorl	%edx, %edx
 556 02a6 BE000000 		movl	$_ZL8callbackP15Fl_File_ChooserPv, %esi
 556      00
 557 02ab 4C89E7   		movq	%r12, %rdi
 558              		.loc 1 98 0
 559 02ae 4C892500 		movq	%r12, _ZL2fc(%rip)
 559      000000
 560              		.loc 1 99 0
 561 02b5 E8000000 		call	_ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_
 561      00
 562              	.LVL59:
 563 02ba E940FEFF 		jmp	.L26
 563      FF
 564              	.LVL60:
 565 02bf 90       		.p2align 4,,10
 566              		.p2align 3
 567              	.L37:
 568              	.LBB40:
 569              	.LBB37:
 570              	.LBB34:
 571              		.loc 1 144 0
 572 02c0 488B3D00 		movq	_ZL2fc(%rip), %rdi
 572      000000
 573 02c7 4889DE   		movq	%rbx, %rsi
 574 02ca E8000000 		call	_ZN15Fl_File_Chooser5valueEPKc
 574      00
 575              	.LVL61:
 576 02cf E92BFEFF 		jmp	.L26
 576      FF
 577              	.LVL62:
 578              		.p2align 4,,10
 579 02d4 0F1F4000 		.p2align 3
 580              	.L38:
 581              	.LBB28:
 582              		.loc 1 138 0
 583 02d8 C6050000 		movb	$0, _ZZ15fl_file_chooserPKcS0_S0_iE7retname(%rip)
 583      000000
 584 02df E9E7FDFF 		jmp	.L39
 584      FF
 585              	.LVL63:
 586              		.p2align 4,,10
 587 02e4 0F1F4000 		.p2align 3
 588              	.L48:
 589              	.LBE28:
 590              	.LBE34:
 591              	.LBE37:
 592              	.LBE40:
 593              		.loc 1 96 0
 594 02e8 BB000000 		movl	$.LC4, %ebx
 594      00
 595 02ed EB92     		jmp	.L25
 596              	.LVL64:
 597              	.L78:
 598              	.LBB41:
 599              	.LBB38:
 600              	.LBB35:
 601              	.LBB33:
 602              		.loc 1 124 0
 603 02ef C6050000 		movb	$0, _ZZ15fl_file_chooserPKcS0_S0_iE7retname+1(%rip)
 603      000000
 604 02f6 E923FFFF 		jmp	.L36
 604      FF
 605              	.LBE33:
 606              	.LBE35:
 607              	.LBE38:
 608              	.LBE41:
 609              	.LBE45:
 610              		.cfi_endproc
 611              	.LFE555:
 613              		.section	.text.unlikely._Z15fl_file_chooserPKcS0_S0_i
 614              	.LCOLDE6:
 615              		.section	.text._Z15fl_file_chooserPKcS0_S0_i
 616              	.LHOTE6:
 617              		.section	.rodata.str1.1
 618              	.LC7:
 619 0003 2A00     		.string	"*"
 620              		.section	.text.unlikely._Z14fl_dir_chooserPKcS0_i,"ax",@progbits
 621              	.LCOLDB8:
 622              		.section	.text._Z14fl_dir_chooserPKcS0_i,"ax",@progbits
 623              	.LHOTB8:
 624              		.p2align 4,,15
 625              		.globl	_Z14fl_dir_chooserPKcS0_i
 627              	_Z14fl_dir_chooserPKcS0_i:
 628              	.LFB556:
 629              		.loc 1 170 0
 630              		.cfi_startproc
 631              	.LVL65:
 632 0000 4155     		pushq	%r13
 633              		.cfi_def_cfa_offset 16
 634              		.cfi_offset 13, -16
 635 0002 4154     		pushq	%r12
 636              		.cfi_def_cfa_offset 24
 637              		.cfi_offset 12, -24
 638 0004 4989FC   		movq	%rdi, %r12
 639 0007 55       		pushq	%rbp
 640              		.cfi_def_cfa_offset 32
 641              		.cfi_offset 6, -32
 642 0008 53       		pushq	%rbx
 643              		.cfi_def_cfa_offset 40
 644              		.cfi_offset 3, -40
 645 0009 89D5     		movl	%edx, %ebp
 646 000b 4889F3   		movq	%rsi, %rbx
 647 000e 4883EC08 		subq	$8, %rsp
 648              		.cfi_def_cfa_offset 48
 649              		.loc 1 173 0
 650 0012 488B3D00 		movq	_ZL2fc(%rip), %rdi
 650      000000
 651              	.LVL66:
 652 0019 4885FF   		testq	%rdi, %rdi
 653 001c 0F84CE00 		je	.L99
 653      0000
 654              		.loc 1 180 0
 655 0022 BE060000 		movl	$6, %esi
 655      00
 656              	.LVL67:
 657 0027 E8000000 		call	_ZN15Fl_File_Chooser4typeEi
 657      00
 658              	.LVL68:
 659              		.loc 1 181 0
 660 002c 488B3D00 		movq	_ZL2fc(%rip), %rdi
 660      000000
 661 0033 BE000000 		movl	$.LC7, %esi
 661      00
 662 0038 E8000000 		call	_ZN15Fl_File_Chooser6filterEPKc
 662      00
 663              	.LVL69:
 664              		.loc 1 182 0
 665 003d 4885DB   		testq	%rbx, %rbx
 666 0040 7409     		je	.L83
 667              		.loc 1 182 0 is_stmt 0 discriminator 1
 668 0042 803B00   		cmpb	$0, (%rbx)
 669 0045 0F85FD00 		jne	.L100
 669      0000
 670              	.L83:
 671              		.loc 1 183 0 is_stmt 1
 672 004b 488B3D00 		movq	_ZL2fc(%rip), %rdi
 672      000000
 673 0052 4C89E6   		movq	%r12, %rsi
 674 0055 E8000000 		call	_ZN15Fl_File_Chooser5labelEPKc
 674      00
 675              	.LVL70:
 676              	.L82:
 677              		.loc 1 186 0
 678 005a 488B3D00 		movq	_ZL2fc(%rip), %rdi
 678      000000
 679 0061 E8000000 		call	_ZL5popupP15Fl_File_Chooser
 679      00
 680              	.LVL71:
 681              		.loc 1 188 0
 682 0066 488B3D00 		movq	_ZL2fc(%rip), %rdi
 682      000000
 683 006d BE010000 		movl	$1, %esi
 683      00
 684 0072 E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 684      00
 685              	.LVL72:
 686 0077 85ED     		testl	%ebp, %ebp
 687 0079 743D     		je	.L86
 688 007b 4885C0   		testq	%rax, %rax
 689 007e 7438     		je	.L86
 690              		.loc 1 189 0
 691 0080 488B3D00 		movq	_ZL2fc(%rip), %rdi
 691      000000
 692 0087 BE010000 		movl	$1, %esi
 692      00
 693 008c E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 693      00
 694              	.LVL73:
 695 0091 BE000800 		movl	$2048, %esi
 695      00
 696 0096 4889C2   		movq	%rax, %rdx
 697 0099 BF000000 		movl	$_ZZ14fl_dir_chooserPKcS0_iE7retname, %edi
 697      00
 698 009e E8000000 		call	_Z20fl_filename_relativePciPKc
 698      00
 699              	.LVL74:
 700              		.loc 1 191 0
 701 00a3 B8000000 		movl	$_ZZ14fl_dir_chooserPKcS0_iE7retname, %eax
 701      00
 702              	.L97:
 703              		.loc 1 194 0
 704 00a8 4883C408 		addq	$8, %rsp
 705              		.cfi_remember_state
 706              		.cfi_def_cfa_offset 40
 707 00ac 5B       		popq	%rbx
 708              		.cfi_def_cfa_offset 32
 709              	.LVL75:
 710 00ad 5D       		popq	%rbp
 711              		.cfi_def_cfa_offset 24
 712              	.LVL76:
 713 00ae 415C     		popq	%r12
 714              		.cfi_def_cfa_offset 16
 715              	.LVL77:
 716 00b0 415D     		popq	%r13
 717              		.cfi_def_cfa_offset 8
 718 00b2 C3       		ret
 719              	.LVL78:
 720              		.p2align 4,,10
 721 00b3 0F1F4400 		.p2align 3
 721      00
 722              	.L86:
 723              		.cfi_restore_state
 724              		.loc 1 192 0
 725 00b8 488B3D00 		movq	_ZL2fc(%rip), %rdi
 725      000000
 726 00bf BE010000 		movl	$1, %esi
 726      00
 727 00c4 E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 727      00
 728              	.LVL79:
 729 00c9 4885C0   		testq	%rax, %rax
 730 00cc 74DA     		je	.L97
 731              		.loc 1 192 0 is_stmt 0 discriminator 1
 732 00ce 488B3D00 		movq	_ZL2fc(%rip), %rdi
 732      000000
 733              		.loc 1 194 0 is_stmt 1 discriminator 1
 734 00d5 4883C408 		addq	$8, %rsp
 735              		.cfi_remember_state
 736              		.cfi_def_cfa_offset 40
 737              		.loc 1 192 0 discriminator 1
 738 00d9 BE010000 		movl	$1, %esi
 738      00
 739              		.loc 1 194 0 discriminator 1
 740 00de 5B       		popq	%rbx
 741              		.cfi_def_cfa_offset 32
 742              	.LVL80:
 743 00df 5D       		popq	%rbp
 744              		.cfi_def_cfa_offset 24
 745              	.LVL81:
 746 00e0 415C     		popq	%r12
 747              		.cfi_def_cfa_offset 16
 748              	.LVL82:
 749 00e2 415D     		popq	%r13
 750              		.cfi_def_cfa_offset 8
 751              		.loc 1 192 0 discriminator 1
 752 00e4 E9000000 		jmp	_ZN15Fl_File_Chooser5valueEi
 752      00
 753              	.LVL83:
 754 00e9 0F1F8000 		.p2align 4,,10
 754      000000
 755              		.p2align 3
 756              	.L99:
 757              		.cfi_restore_state
 758              		.loc 1 174 0
 759 00f0 4885F6   		testq	%rsi, %rsi
 760 00f3 746B     		je	.L89
 761              		.loc 1 174 0 is_stmt 0 discriminator 2
 762 00f5 803E00   		cmpb	$0, (%rsi)
 763 00f8 B8000000 		movl	$.LC4, %eax
 763      00
 764 00fd 480F44D8 		cmove	%rax, %rbx
 765              	.LVL84:
 766              	.L81:
 767              		.loc 1 177 0 is_stmt 1
 768 0101 BFB01800 		movl	$6320, %edi
 768      00
 769 0106 E8000000 		call	_Znwm
 769      00
 770              	.LVL85:
 771 010b 4889DE   		movq	%rbx, %rsi
 772 010e 4989C5   		movq	%rax, %r13
 773 0111 4889C7   		movq	%rax, %rdi
 774 0114 4D89E0   		movq	%r12, %r8
 775 0117 B9060000 		movl	$6, %ecx
 775      00
 776 011c BA000000 		movl	$.LC7, %edx
 776      00
 777 0121 E8000000 		call	_ZN15Fl_File_ChooserC1EPKcS1_iS1_
 777      00
 778              	.LVL86:
 779              		.loc 1 178 0
 780 0126 31D2     		xorl	%edx, %edx
 781 0128 BE000000 		movl	$_ZL8callbackP15Fl_File_ChooserPv, %esi
 781      00
 782 012d 4C89EF   		movq	%r13, %rdi
 783              		.loc 1 177 0
 784 0130 4C892D00 		movq	%r13, _ZL2fc(%rip)
 784      000000
 785              		.loc 1 178 0
 786 0137 E8000000 		call	_ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_
 786      00
 787              	.LVL87:
 788 013c E919FFFF 		jmp	.L82
 788      FF
 789              		.p2align 4,,10
 790 0141 0F1F8000 		.p2align 3
 790      000000
 791              	.L100:
 792              		.loc 1 182 0 discriminator 2
 793 0148 488B3D00 		movq	_ZL2fc(%rip), %rdi
 793      000000
 794 014f 4889DE   		movq	%rbx, %rsi
 795 0152 E8000000 		call	_ZN15Fl_File_Chooser5valueEPKc
 795      00
 796              	.LVL88:
 797 0157 E9EFFEFF 		jmp	.L83
 797      FF
 798              	.LVL89:
 799 015c 0F1F4000 		.p2align 4,,10
 800              		.p2align 3
 801              	.L89:
 802              		.loc 1 174 0
 803 0160 BB000000 		movl	$.LC4, %ebx
 803      00
 804              	.LVL90:
 805 0165 EB9A     		jmp	.L81
 806              		.cfi_endproc
 807              	.LFE556:
 809              		.section	.text.unlikely._Z14fl_dir_chooserPKcS0_i
 810              	.LCOLDE8:
 811              		.section	.text._Z14fl_dir_chooserPKcS0_i
 812              	.LHOTE8:
 813              		.section	.text.unlikely._GLOBAL__sub_I__Z24fl_file_chooser_callbackPFvPKcE,"ax",@progbits
 814              	.LCOLDB9:
 815              		.section	.text.startup._GLOBAL__sub_I__Z24fl_file_chooser_callbackPFvPKcE,"ax",@progbits
 816              	.LHOTB9:
 817              		.p2align 4,,15
 819              	_GLOBAL__sub_I__Z24fl_file_chooser_callbackPFvPKcE:
 820              	.LFB558:
 821              		.loc 1 194 0
 822              		.cfi_startproc
 823              	.LVL91:
 824              	.LBB46:
 825              	.LBB47:
 826              		.loc 1 27 0
 827 0000 488B0500 		movq	fl_ok(%rip), %rax
 827      000000
 828 0007 48890500 		movq	%rax, _ZL13current_label(%rip)
 828      000000
 829              	.LVL92:
 830 000e C3       		ret
 831              	.LBE47:
 832              	.LBE46:
 833              		.cfi_endproc
 834              	.LFE558:
 836              		.section	.text.unlikely._GLOBAL__sub_I__Z24fl_file_chooser_callbackPFvPKcE
 837              	.LCOLDE9:
 838              		.section	.text.startup._GLOBAL__sub_I__Z24fl_file_chooser_callbackPFvPKcE
 839              	.LHOTE9:
 840              		.section	.init_array,"aw"
 841              		.align 8
 842 0000 00000000 		.quad	_GLOBAL__sub_I__Z24fl_file_chooser_callbackPFvPKcE
 842      00000000 
 843              		.section	.bss._ZZ14fl_dir_chooserPKcS0_iE7retname,"aw",@nobits
 844              		.align 32
 847              	_ZZ14fl_dir_chooserPKcS0_iE7retname:
 848 0000 00000000 		.zero	2048
 848      00000000 
 848      00000000 
 848      00000000 
 848      00000000 
 849              		.section	.bss._ZZ15fl_file_chooserPKcS0_S0_iE7retname,"aw",@nobits
 850              		.align 32
 853              	_ZZ15fl_file_chooserPKcS0_S0_iE7retname:
 854 0000 00000000 		.zero	2048
 854      00000000 
 854      00000000 
 854      00000000 
 854      00000000 
 855              		.section	.bss._ZL13current_label,"aw",@nobits
 856              		.align 8
 859              	_ZL13current_label:
 860 0000 00000000 		.zero	8
 860      00000000 
 861              		.section	.bss._ZL16current_callback,"aw",@nobits
 862              		.align 8
 865              	_ZL16current_callback:
 866 0000 00000000 		.zero	8
 866      00000000 
 867              		.section	.bss._ZL2fc,"aw",@nobits
 868              		.align 8
 871              	_ZL2fc:
 872 0000 00000000 		.zero	8
 872      00000000 
 873              		.text
 874              	.Letext0:
 875              		.section	.text.unlikely._ZL5popupP15Fl_File_Chooser
 876              	.Letext_cold0:
 877              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 878              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 879              		.file 6 "/usr/include/libio.h"
 880              		.file 7 "/usr/include/x86_64-linux-gnu/bits/dirent.h"
 881              		.file 8 "fltk-1.3.4-1/FL/filename.H"
 882              		.file 9 "fltk-1.3.4-1/FL/fl_types.h"
 883              		.file 10 "fltk-1.3.4-1/FL/Enumerations.H"
 884              		.file 11 "fltk-1.3.4-1/FL/Fl_Widget.H"
 885              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 886              		.file 13 "fltk-1.3.4-1/FL/Fl_File_Chooser.H"
 887              		.file 14 "/usr/include/stdio.h"
 888              		.file 15 "fltk-1.3.4-1/FL/fl_ask.H"
 889              		.file 16 "fltk-1.3.4-1/src/flstring.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_file_dir.cxx
     /tmp/cc8zzAlg.s:13     .text._ZL5popupP15Fl_File_Chooser:0000000000000000 _ZL5popupP15Fl_File_Chooser
     /tmp/cc8zzAlg.s:103    .text._ZL8callbackP15Fl_File_ChooserPv:0000000000000000 _ZL8callbackP15Fl_File_ChooserPv
     /tmp/cc8zzAlg.s:865    .bss._ZL16current_callback:0000000000000000 _ZL16current_callback
     /tmp/cc8zzAlg.s:871    .bss._ZL2fc:0000000000000000 _ZL2fc
     /tmp/cc8zzAlg.s:171    .text._Z24fl_file_chooser_callbackPFvPKcE:0000000000000000 _Z24fl_file_chooser_callbackPFvPKcE
     /tmp/cc8zzAlg.s:193    .text._Z24fl_file_chooser_ok_labelPKc:0000000000000000 _Z24fl_file_chooser_ok_labelPKc
     /tmp/cc8zzAlg.s:859    .bss._ZL13current_label:0000000000000000 _ZL13current_label
     /tmp/cc8zzAlg.s:230    .text._Z15fl_file_chooserPKcS0_S0_i:0000000000000000 _Z15fl_file_chooserPKcS0_S0_i
     /tmp/cc8zzAlg.s:853    .bss._ZZ15fl_file_chooserPKcS0_S0_iE7retname:0000000000000000 _ZZ15fl_file_chooserPKcS0_S0_iE7retname
     /tmp/cc8zzAlg.s:627    .text._Z14fl_dir_chooserPKcS0_i:0000000000000000 _Z14fl_dir_chooserPKcS0_i
     /tmp/cc8zzAlg.s:847    .bss._ZZ14fl_dir_chooserPKcS0_iE7retname:0000000000000000 _ZZ14fl_dir_chooserPKcS0_iE7retname
     /tmp/cc8zzAlg.s:819    .text.startup._GLOBAL__sub_I__Z24fl_file_chooser_callbackPFvPKcE:0000000000000000 _GLOBAL__sub_I__Z24fl_file_chooser_callbackPFvPKcE
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
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
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.185.629aca749f254f2bc1fdc00bb73e17c4
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
                           .group:0000000000000000 wm4.ctype.h.43.d895d3ca09b51f800847b104b2ad2e41
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
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
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.238.95ea4ce844d9fee903b0cacc7c1e4931
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.bfbb5b0b23fee1f35dc97a46ddeb7e8b
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
                           .group:0000000000000000 wm4.Fl_Button.H.23.dd2f7f39568a498db4235a51d94ff020
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d
                           .group:0000000000000000 wm4.Fl_Browser_.H.33.3c969d598ffa0d0ae61e0a4412aa05a2
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea
                           .group:0000000000000000 wm4.fl_ask.H.24.be48b4476a0524cdb7b19216c6f73157

UNDEFINED SYMBOLS
_ZN15Fl_File_Chooser4showEv
_ZN2Fl5grab_E
_ZN2Fl4grabEP9Fl_Window
_ZN2Fl4waitEv
_ZN15Fl_File_Chooser5shownEv
_ZN15Fl_File_Chooser5valueEi
fl_ok
_ZN15Fl_File_Chooser4typeEi
_ZN15Fl_File_Chooser6filterEv
strcmp
_ZN15Fl_File_Chooser6filterEPKc
_ZN15Fl_File_Chooser5labelEPKc
fl_strlcpy
_Z16fl_filename_namePKc
_ZN15Fl_File_Chooser5valueEPKc
_ZN15Fl_File_Chooser9directoryEPKc
_ZN15Fl_File_Chooser8ok_labelEPKc
_Z20fl_filename_relativePciPKc
strrchr
_Znwm
_ZN15Fl_File_ChooserC1EPKcS1_iS1_
_ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_
