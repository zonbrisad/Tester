   1              		.file	"fl_set_fonts.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5              	.LC0:
   6 0000 6E6F726D 		.string	"normal"
   6      616C00
   7              	.LC1:
   8 0007 6C696768 		.string	"light"
   8      7400
   9              	.LC2:
  10 000d 6D656469 		.string	"medium"
  10      756D00
  11              	.LC3:
  12 0014 626F6F6B 		.string	"book"
  12      00
  13              	.LC4:
  14 0019 626F6C64 		.string	"bold"
  14      00
  15              	.LC5:
  16 001e 64656D69 		.string	"demi"
  16      00
  17              		.section	.text.unlikely._ZL9attributeiPKc,"ax",@progbits
  18              	.LCOLDB6:
  19              		.section	.text._ZL9attributeiPKc,"ax",@progbits
  20              	.LHOTB6:
  21              		.p2align 4,,15
  22              		.section	.text.unlikely._ZL9attributeiPKc
  23              	.Ltext_cold0:
  24              		.section	.text._ZL9attributeiPKc
  26              	_ZL9attributeiPKc:
  27              	.LFB321:
  28              		.file 1 "fltk-1.3.4-1/src/fl_set_fonts_x.cxx"
   1:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** //
   2:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // "$Id: fl_set_fonts_x.cxx 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** //
   4:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // X11 font utilities for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** //
   6:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** //
   8:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** //
  12:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** //
  14:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** //
  16:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** //
  18:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  19:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // This function fills in the fltk font table with all the fonts that
  20:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // are found on the X server.  It tries to place the fonts into families
  21:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // and to sort them so the first 4 in a family are normal, bold, italic,
  22:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // and bold italic.
  23:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  24:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // Standard X fonts are matched by a pattern that is always of
  25:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // this form, and this pattern is put in the table:
  26:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // "-*-family-weight-slant-width1-style-*-registry-encoding"
  27:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  28:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // Non-standard font names (those not starting with '-') are matched
  29:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // by a pattern of the form "prefix*suffix", where the '*' is where
  30:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // fltk thinks the point size is, or by the actual font name if no
  31:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // point size is found.
  32:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  33:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // Fltk knows how to pull an "attribute" out of a font name, such as
  34:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // bold or italic, by matching known x font field values.  All words
  35:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // that don't match a known attribute are combined into the "name"
  36:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // of the font.  Names are compared before attributes for sorting, this
  37:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // makes the bold and plain version of a font come out next to each
  38:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // other despite the poor X font naming scheme.
  39:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  40:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // By default fl_set_fonts() only does iso8859-1 encoded fonts.  You can
  41:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // do all normal X fonts by passing "-*" or every possible font with "*".
  42:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  43:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // Fl::set_font will take strings other than the ones this stores
  44:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // and can identify any font on X that way.  You may want to write your
  45:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // own system of font management and not use this code.
  46:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  47:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // turn word N of a X font name into either some attribute bits
  48:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // (right now 0, FL_BOLD, or FL_ITALIC), or into -1 indicating that
  49:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // the word should be put into the name:
  50:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  51:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** static int attribute(int n, const char *p) {
  29              		.loc 1 51 0
  30              		.cfi_startproc
  31              	.LVL0:
  52:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   // don't put blank things into name:
  53:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!*p || *p=='-' || *p=='*') return 0;
  32              		.loc 1 53 0
  33 0000 0FB616   		movzbl	(%rsi), %edx
  51:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   // don't put blank things into name:
  34              		.loc 1 51 0
  35 0003 4989F0   		movq	%rsi, %r8
  36              		.loc 1 53 0
  37 0006 80FA2D   		cmpb	$45, %dl
  38 0009 7635     		jbe	.L29
  39              	.L2:
  54:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (n == 3) { // weight
  40              		.loc 1 54 0
  41 000b 83FF03   		cmpl	$3, %edi
  42 000e 7448     		je	.L30
  55:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!strncmp(p,"normal",6) ||
  56:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	!strncmp(p,"light",5) ||
  57:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	!strncmp(p,"medium",6) ||
  58:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	!strncmp(p,"book",4)) return 0;
  59:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!strncmp(p,"bold",4) || !strncmp(p,"demi",4)) return FL_BOLD;
  60:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   } else if (n == 4) { // slant
  43              		.loc 1 60 0
  44 0010 83FF04   		cmpl	$4, %edi
  45 0013 0F840701 		je	.L31
  45      0000
  61:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (*p == 'r') return 0;
  62:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (*p == 'i' || *p == 'o') return FL_ITALIC;
  63:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   } else if (n == 5) { // sWidth
  46              		.loc 1 63 0
  47 0019 83FF05   		cmpl	$5, %edi
  64:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!strncmp(p,"normal",6)) return 0;
  65:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
  66:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return -1;
  48              		.loc 1 66 0
  49 001c B8FFFFFF 		movl	$-1, %eax
  49      FF
  63:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!strncmp(p,"normal",6)) return 0;
  50              		.loc 1 63 0
  51 0021 752F     		jne	.L3
  64:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!strncmp(p,"normal",6)) return 0;
  52              		.loc 1 64 0
  53 0023 BF000000 		movl	$.LC0, %edi
  53      00
  54              	.LVL1:
  55 0028 B9060000 		movl	$6, %ecx
  55      00
  56 002d 4C89C6   		movq	%r8, %rsi
  57              	.LVL2:
  58 0030 F3A6     		repz cmpsb
  59              	.LVL3:
  60 0032 0F95C0   		setne	%al
  61 0035 0FB6C0   		movzbl	%al, %eax
  62 0038 F7D8     		negl	%eax
  63 003a C3       		ret
  64              	.LVL4:
  65 003b 0F1F4400 		.p2align 4,,10
  65      00
  66              		.p2align 3
  67              	.L29:
  53:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (n == 3) { // weight
  68              		.loc 1 53 0
  69 0040 48B90100 		movabsq	$39582418599937, %rcx
  69      00000024 
  69      0000
  70 004a 31C0     		xorl	%eax, %eax
  71 004c 480FA3D1 		btq	%rdx, %rcx
  72 0050 73B9     		jnc	.L2
  73              	.LVL5:
  74              	.L3:
  67:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
  75              		.loc 1 67 0
  76 0052 F3C3     		rep ret
  77              	.LVL6:
  78              		.p2align 4,,10
  79 0054 0F1F4000 		.p2align 3
  80              	.L30:
  55:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	!strncmp(p,"light",5) ||
  81              		.loc 1 55 0
  82 0058 BF000000 		movl	$.LC0, %edi
  82      00
  83              	.LVL7:
  84 005d B9060000 		movl	$6, %ecx
  84      00
  85 0062 4C89C6   		movq	%r8, %rsi
  86              	.LVL8:
  87 0065 F3A6     		repz cmpsb
  88              	.LVL9:
  89 0067 0F97C0   		seta	%al
  90 006a 0F92C2   		setb	%dl
  91 006d 29D0     		subl	%edx, %eax
  92 006f 0FBEC0   		movsbl	%al, %eax
  93 0072 85C0     		testl	%eax, %eax
  94 0074 74DC     		je	.L3
  56:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	!strncmp(p,"medium",6) ||
  95              		.loc 1 56 0 discriminator 1
  96 0076 BF000000 		movl	$.LC1, %edi
  96      00
  97 007b B9050000 		movl	$5, %ecx
  97      00
  98 0080 4C89C6   		movq	%r8, %rsi
  99 0083 F3A6     		repz cmpsb
 100 0085 0F97C0   		seta	%al
 101 0088 0F92C2   		setb	%dl
 102 008b 29D0     		subl	%edx, %eax
 103 008d 0FBEC0   		movsbl	%al, %eax
  55:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	!strncmp(p,"light",5) ||
 104              		.loc 1 55 0 discriminator 1
 105 0090 85C0     		testl	%eax, %eax
 106 0092 74BE     		je	.L3
  57:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	!strncmp(p,"book",4)) return 0;
 107              		.loc 1 57 0
 108 0094 BF000000 		movl	$.LC2, %edi
 108      00
 109 0099 B9060000 		movl	$6, %ecx
 109      00
 110 009e 4C89C6   		movq	%r8, %rsi
 111 00a1 F3A6     		repz cmpsb
 112 00a3 0F97C0   		seta	%al
 113 00a6 0F92C2   		setb	%dl
 114 00a9 29D0     		subl	%edx, %eax
 115 00ab 0FBEC0   		movsbl	%al, %eax
  56:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	!strncmp(p,"medium",6) ||
 116              		.loc 1 56 0
 117 00ae 85C0     		testl	%eax, %eax
 118 00b0 74A0     		je	.L3
  58:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!strncmp(p,"bold",4) || !strncmp(p,"demi",4)) return FL_BOLD;
 119              		.loc 1 58 0
 120 00b2 BF000000 		movl	$.LC3, %edi
 120      00
 121 00b7 B9040000 		movl	$4, %ecx
 121      00
 122 00bc 4C89C6   		movq	%r8, %rsi
 123 00bf F3A6     		repz cmpsb
 124 00c1 0F97C0   		seta	%al
 125 00c4 0F92C2   		setb	%dl
 126 00c7 29D0     		subl	%edx, %eax
 127 00c9 0FBEC0   		movsbl	%al, %eax
  57:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	!strncmp(p,"book",4)) return 0;
 128              		.loc 1 57 0
 129 00cc 85C0     		testl	%eax, %eax
 130 00ce 7482     		je	.L3
  59:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   } else if (n == 4) { // slant
 131              		.loc 1 59 0
 132 00d0 B9040000 		movl	$4, %ecx
 132      00
 133 00d5 BF000000 		movl	$.LC4, %edi
 133      00
 134 00da 4C89C6   		movq	%r8, %rsi
 135 00dd F3A6     		repz cmpsb
 136 00df B8010000 		movl	$1, %eax
 136      00
 137 00e4 0F97C1   		seta	%cl
 138 00e7 0F92C2   		setb	%dl
 139 00ea 38D1     		cmpb	%dl, %cl
 140 00ec 0F8460FF 		je	.L3
 140      FFFF
  59:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   } else if (n == 4) { // slant
 141              		.loc 1 59 0 is_stmt 0 discriminator 2
 142 00f2 BF000000 		movl	$.LC5, %edi
 142      00
 143 00f7 B9040000 		movl	$4, %ecx
 143      00
 144 00fc 4C89C6   		movq	%r8, %rsi
 145 00ff F3A6     		repz cmpsb
 146 0101 0F92C2   		setb	%dl
 147 0104 0F97C0   		seta	%al
 148 0107 29D0     		subl	%edx, %eax
 149 0109 0FBEC0   		movsbl	%al, %eax
 150 010c 83F801   		cmpl	$1, %eax
 151 010f 19C0     		sbbl	%eax, %eax
 152 0111 83E002   		andl	$2, %eax
 153 0114 83E801   		subl	$1, %eax
 154 0117 C3       		ret
 155              	.LVL10:
 156 0118 0F1F8400 		.p2align 4,,10
 156      00000000 
 157              		.p2align 3
 158              	.L31:
  61:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (*p == 'i' || *p == 'o') return FL_ITALIC;
 159              		.loc 1 61 0 is_stmt 1
 160 0120 80FA72   		cmpb	$114, %dl
 161 0123 741B     		je	.L10
  62:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   } else if (n == 5) { // sWidth
 162              		.loc 1 62 0
 163 0125 80FA69   		cmpb	$105, %dl
 164 0128 740E     		je	.L13
 165 012a 80FA6F   		cmpb	$111, %dl
 166 012d 7409     		je	.L13
  66:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
 167              		.loc 1 66 0
 168 012f B8FFFFFF 		movl	$-1, %eax
 168      FF
 169              		.loc 1 67 0
 170 0134 C3       		ret
 171              		.p2align 4,,10
 172 0135 0F1F00   		.p2align 3
 173              	.L13:
  62:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   } else if (n == 5) { // sWidth
 174              		.loc 1 62 0
 175 0138 B8020000 		movl	$2, %eax
 175      00
 176 013d C3       		ret
 177 013e 6690     		.p2align 4,,10
 178              		.p2align 3
 179              	.L10:
  53:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (n == 3) { // weight
 180              		.loc 1 53 0
 181 0140 31C0     		xorl	%eax, %eax
 182 0142 C3       		ret
 183              		.cfi_endproc
 184              	.LFE321:
 186              		.section	.text.unlikely._ZL9attributeiPKc
 187              	.LCOLDE6:
 188              		.section	.text._ZL9attributeiPKc
 189              	.LHOTE6:
 190              		.section	.text.unlikely._ZL12use_registryPKc,"ax",@progbits
 191              	.LCOLDB7:
 192              		.section	.text._ZL12use_registryPKc,"ax",@progbits
 193              	.LHOTB7:
 194              		.p2align 4,,15
 196              	_ZL12use_registryPKc:
 197              	.LFB322:
  68:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  69:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // return non-zero if the registry-encoding should be used:
  70:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** extern const char* fl_encoding;
  71:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** static int use_registry(const char *p) {
 198              		.loc 1 71 0
 199              		.cfi_startproc
 200              	.LVL11:
  72:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return *p && *p!='*' && strcmp(p,fl_encoding);
 201              		.loc 1 72 0
 202 0000 0FB607   		movzbl	(%rdi), %eax
 203 0003 84C0     		testb	%al, %al
 204 0005 7429     		je	.L34
 205 0007 3C2A     		cmpb	$42, %al
 206 0009 7425     		je	.L34
  71:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return *p && *p!='*' && strcmp(p,fl_encoding);
 207              		.loc 1 71 0 discriminator 1
 208 000b 4883EC08 		subq	$8, %rsp
 209              		.cfi_def_cfa_offset 16
 210              		.loc 1 72 0 discriminator 1
 211 000f 488B3500 		movq	fl_encoding(%rip), %rsi
 211      000000
 212 0016 E8000000 		call	strcmp
 212      00
 213              	.LVL12:
 214 001b 85C0     		testl	%eax, %eax
 215 001d 0F95C0   		setne	%al
  73:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
 216              		.loc 1 73 0 discriminator 1
 217 0020 4883C408 		addq	$8, %rsp
 218              		.cfi_def_cfa_offset 8
 219 0024 0FB6C0   		movzbl	%al, %eax
 220 0027 C3       		ret
 221              	.LVL13:
 222 0028 0F1F8400 		.p2align 4,,10
 222      00000000 
 223              		.p2align 3
 224              	.L34:
 225 0030 31C0     		xorl	%eax, %eax
 226 0032 C3       		ret
 227              		.cfi_endproc
 228              	.LFE322:
 230              		.section	.text.unlikely._ZL12use_registryPKc
 231              	.LCOLDE7:
 232              		.section	.text._ZL12use_registryPKc
 233              	.LHOTE7:
 234              		.section	.text.unlikely.ultrasort,"ax",@progbits
 235              	.LCOLDB8:
 236              		.section	.text.ultrasort,"ax",@progbits
 237              	.LHOTB8:
 238              		.p2align 4,,15
 240              	ultrasort:
 241              	.LFB324:
  74:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  75:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // Bug: older versions calculated the value for *ap as a side effect of
  76:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // making the name, and then forgot about it. To avoid having to change
  77:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // the header files I decided to store this value in the last character
  78:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // of the font name array.
  79:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** #define ENDOFBUFFER 127 // sizeof(Fl_Font.fontname)-1
  80:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  81:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // turn a stored (with *'s) X font name into a pretty name:
  82:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** const char* Fl::get_font_name(Fl_Font fnum, int* ap) {
  83:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   Fl_Fontdesc *f = fl_fonts + fnum;
  84:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!f->fontname[0]) {
  85:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int type = 0;
  86:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     const char* p = f->name;
  87:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!p) {
  88:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (ap) *ap = 0;
  89:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       return "";
  90:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
  91:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     char *o = f->fontname;
  92:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
  93:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (*p != '-') { // non-standard font, just replace * with spaces:
  94:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (strstr(p,"bold")) type = FL_BOLD;
  95:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (strstr(p,"ital")) type |= FL_ITALIC;
  96:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       for (;*p; p++) {
  97:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (*p == '*' || *p == ' ' || *p == '-') {
  98:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  do p++; while (*p == '*' || *p == ' ' || *p == '-');
  99:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if (!*p) break;
 100:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if (o < (f->fontname + ENDOFBUFFER - 1)) *o++ = ' ';
 101:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	}
 102:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (o < (f->fontname + ENDOFBUFFER - 1)) *o++ = *p;
 103:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 104:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       *o = 0;
 105:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 106:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     } else { // standard dash-separated font:
 107:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 108:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       // get the family:
 109:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       const char *x = fl_font_word(p,2); if (*x) x++; if (*x=='*') x++;
 110:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (!*x) {
 111:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (ap) *ap = 0;
 112:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	return p;
 113:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 114:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       const char *e = fl_font_word(x,1);
 115:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if ((e - x) < (int)(ENDOFBUFFER - 1)) {
 116:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	// MRS: we want strncpy here, not strlcpy...
 117:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	strncpy(o,x,e-x);
 118:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	o += e-x;
 119:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       } else {
 120:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	strlcpy(f->fontname, x, ENDOFBUFFER);
 121:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	o = f->fontname+ENDOFBUFFER-1;
 122:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 123:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 124:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       // collect all the attribute words:
 125:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       for (int n = 3; n <= 6; n++) {
 126:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	// get the next word:
 127:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (*e) e++; x = e; e = fl_font_word(x,1);
 128:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	int t = attribute(n,x);
 129:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (t < 0) {
 130:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if (o < (f->fontname + ENDOFBUFFER - 1)) *o++ = ' ';
 131:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if ((e - x) < (int)(ENDOFBUFFER - (o - f->fontname) - 1)) {
 132:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	    // MRS: we want strncpy here, not strlcpy...
 133:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	    strncpy(o,x,e-x);
 134:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	    o += e-x;
 135:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  } else {
 136:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	    strlcpy(o,x, ENDOFBUFFER - (o - f->fontname) - 1);
 137:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	    o = f->fontname+ENDOFBUFFER-1;
 138:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  }
 139:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	} else type |= t;
 140:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 141:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 142:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       // skip over the '*' for the size and get the registry-encoding:
 143:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       x = fl_font_word(e,2);
 144:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (*x) {x++; *o++ = '('; while (*x) *o++ = *x++; *o++ = ')';}
 145:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 146:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       *o = 0;
 147:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (type & FL_BOLD) strlcat(f->fontname, " bold", ENDOFBUFFER);
 148:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (type & FL_ITALIC) strlcat(f->fontname, " italic", ENDOFBUFFER);
 149:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 150:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     f->fontname[ENDOFBUFFER] = (char)type;
 151:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 152:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (ap) *ap = f->fontname[ENDOFBUFFER];
 153:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return f->fontname;
 154:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
 155:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 156:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** extern "C" {
 157:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // sort raw (non-'*') X font names into perfect order:
 158:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 159:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** static int ultrasort(const void *aa, const void *bb) {
 242              		.loc 1 159 0
 243              		.cfi_startproc
 244              	.LVL14:
 245 0000 4157     		pushq	%r15
 246              		.cfi_def_cfa_offset 16
 247              		.cfi_offset 15, -16
 248 0002 4156     		pushq	%r14
 249              		.cfi_def_cfa_offset 24
 250              		.cfi_offset 14, -24
 251 0004 4155     		pushq	%r13
 252              		.cfi_def_cfa_offset 32
 253              		.cfi_offset 13, -32
 254 0006 4154     		pushq	%r12
 255              		.cfi_def_cfa_offset 40
 256              		.cfi_offset 12, -40
 257 0008 4989FD   		movq	%rdi, %r13
 258 000b 55       		pushq	%rbp
 259              		.cfi_def_cfa_offset 48
 260              		.cfi_offset 6, -48
 261 000c 53       		pushq	%rbx
 262              		.cfi_def_cfa_offset 56
 263              		.cfi_offset 3, -56
 264 000d 4883EC38 		subq	$56, %rsp
 265              		.cfi_def_cfa_offset 112
 160:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   const char *a = *(char **)aa;
 266              		.loc 1 160 0
 267 0011 488B3F   		movq	(%rdi), %rdi
 268              	.LVL15:
 161:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   const char *b = *(char **)bb;
 269              		.loc 1 161 0
 270 0014 488B16   		movq	(%rsi), %rdx
 159:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   const char *a = *(char **)aa;
 271              		.loc 1 159 0
 272 0017 64488B04 		movq	%fs:40, %rax
 272      25280000 
 272      00
 273 0020 48894424 		movq	%rax, 40(%rsp)
 273      28
 274 0025 31C0     		xorl	%eax, %eax
 160:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   const char *a = *(char **)aa;
 275              		.loc 1 160 0
 276 0027 48897C24 		movq	%rdi, 24(%rsp)
 276      18
 277              		.loc 1 161 0
 278 002c 48895424 		movq	%rdx, 32(%rsp)
 278      20
 279              	.LBB42:
 162:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 163:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   // sort all non x-fonts at the end:
 164:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (*a != '-') {
 280              		.loc 1 164 0
 281 0031 0FB60F   		movzbl	(%rdi), %ecx
 282 0034 80F92D   		cmpb	$45, %cl
 283 0037 0F84D300 		je	.L44
 283      0000
 284              	.LBB43:
 165:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (*b == '-') return 1;
 285              		.loc 1 165 0
 286 003d 0FBE32   		movsbl	(%rdx), %esi
 287              	.LVL16:
 288 0040 4080FE2D 		cmpb	$45, %sil
 289 0044 0F849602 		je	.L45
 289      0000
 290 004a 31DB     		xorl	%ebx, %ebx
 291 004c EB2B     		jmp	.L46
 292              	.LVL17:
 293 004e 6690     		.p2align 4,,10
 294              		.p2align 3
 295              	.L48:
 296              	.LBB44:
 166:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     // 2 non-x fonts are matched by "numeric sort"
 167:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int ret = 0;
 168:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     for (;;) {
 169:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (isdigit(*a) && isdigit(*b)) {
 170:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	int na = strtol(a, (char **)&a, 10);
 171:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	int nb = strtol(b, (char **)&b, 10);
 172:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (!ret) ret = na-nb;
 173:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       } else if (*a != *b) {
 297              		.loc 1 173 0
 298 0050 4038F1   		cmpb	%sil, %cl
 299 0053 0F858700 		jne	.L87
 299      0000
 174:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	return (*a-*b);
 175:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       } else if (!*a) {
 300              		.loc 1 175 0
 301 0059 84C9     		testb	%cl, %cl
 302 005b 0F84A700 		je	.L74
 302      0000
 176:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	return ret;
 177:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       } else {
 178:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	a++; b++;
 303              		.loc 1 178 0
 304 0061 4883C701 		addq	$1, %rdi
 305 0065 4883C201 		addq	$1, %rdx
 306 0069 48897C24 		movq	%rdi, 24(%rsp)
 306      18
 307 006e 48895424 		movq	%rdx, 32(%rsp)
 307      20
 308              	.L50:
 309 0073 0FB60F   		movzbl	(%rdi), %ecx
 310 0076 0FBE32   		movsbl	(%rdx), %esi
 311              	.LVL18:
 312              	.L46:
 169:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	int na = strtol(a, (char **)&a, 10);
 313              		.loc 1 169 0
 314 0079 0FBEC1   		movsbl	%cl, %eax
 315 007c 448D40D0 		leal	-48(%rax), %r8d
 316 0080 4183F809 		cmpl	$9, %r8d
 317 0084 77CA     		ja	.L48
 169:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	int na = strtol(a, (char **)&a, 10);
 318              		.loc 1 169 0 is_stmt 0 discriminator 1
 319 0086 440FBEC6 		movsbl	%sil, %r8d
 320 008a 4183E830 		subl	$48, %r8d
 321 008e 4183F809 		cmpl	$9, %r8d
 322 0092 77BC     		ja	.L48
 323              	.LBB45:
 170:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	int nb = strtol(b, (char **)&b, 10);
 324              		.loc 1 170 0 is_stmt 1
 325 0094 488D7424 		leaq	24(%rsp), %rsi
 325      18
 326 0099 BA0A0000 		movl	$10, %edx
 326      00
 327 009e E8000000 		call	strtol
 327      00
 328              	.LVL19:
 171:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (!ret) ret = na-nb;
 329              		.loc 1 171 0
 330 00a3 488B7C24 		movq	32(%rsp), %rdi
 330      20
 331 00a8 488D7424 		leaq	32(%rsp), %rsi
 331      20
 332 00ad BA0A0000 		movl	$10, %edx
 332      00
 170:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	int nb = strtol(b, (char **)&b, 10);
 333              		.loc 1 170 0
 334 00b2 4889C5   		movq	%rax, %rbp
 335              	.LVL20:
 171:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (!ret) ret = na-nb;
 336              		.loc 1 171 0
 337 00b5 E8000000 		call	strtol
 337      00
 338              	.LVL21:
 172:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       } else if (*a != *b) {
 339              		.loc 1 172 0
 340 00ba 85DB     		testl	%ebx, %ebx
 341 00bc 7512     		jne	.L49
 172:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       } else if (*a != *b) {
 342              		.loc 1 172 0 is_stmt 0 discriminator 1
 343 00be 89EB     		movl	%ebp, %ebx
 344              	.LVL22:
 345 00c0 488B7C24 		movq	24(%rsp), %rdi
 345      18
 346 00c5 488B5424 		movq	32(%rsp), %rdx
 346      20
 347 00ca 29C3     		subl	%eax, %ebx
 348              	.LVL23:
 349 00cc EBA5     		jmp	.L50
 350 00ce 6690     		.p2align 4,,10
 351              		.p2align 3
 352              	.L49:
 353 00d0 488B7C24 		movq	24(%rsp), %rdi
 353      18
 354 00d5 488B5424 		movq	32(%rsp), %rdx
 354      20
 355 00da EB97     		jmp	.L50
 356              	.LVL24:
 357 00dc 0F1F4000 		.p2align 4,,10
 358              		.p2align 3
 359              	.L87:
 360              	.LBE45:
 174:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       } else if (!*a) {
 361              		.loc 1 174 0 is_stmt 1
 362 00e0 29F0     		subl	%esi, %eax
 363              	.LVL25:
 364              	.L47:
 365              	.LBE44:
 366              	.LBE43:
 367              	.LBE42:
 179:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 180:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 181:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   } else {
 182:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (*b != '-') return -1;
 183:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 184:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 185:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   // skip the foundry (assume equal):
 186:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   for (a++; *a && *a++!='-';);
 187:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   for (b++; *b && *b++!='-';);
 188:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 189:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   // compare the family and all the attribute words:
 190:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int atype = 0;
 191:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int btype = 0;
 192:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   for (int n = 2; n <= 6; n++) {
 193:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int at = attribute(n,a);
 194:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int bt = attribute(n,b);
 195:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (at < 0) {
 196:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (bt >= 0) return 1;
 197:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       for (;;) {if (*a!=*b) return *a-*b; b++; if (!*a || *a++=='-') break;}
 198:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     } else {
 199:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (bt < 0) return -1;
 200:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       a = fl_font_word(a,1); if (*a) a++;
 201:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       b = fl_font_word(b,1); if (*b) b++;
 202:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       atype |= at; btype |= bt;
 203:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 204:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 205:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 206:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   // remember the pixel size:
 207:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int asize = atoi(a);
 208:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int bsize = atoi(b);
 209:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 210:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   // compare the registry/encoding:
 211:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   a = fl_font_word(a,6); if (*a) a++;
 212:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   b = fl_font_word(b,6); if (*b) b++;
 213:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (use_registry(a)) {
 214:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!use_registry(b)) return 1;
 215:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int r = strcmp(a,b); if (r) return r;
 216:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   } else {
 217:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (use_registry(b)) return -1;
 218:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 219:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 220:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (atype != btype) return atype-btype;
 221:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (asize != bsize) return asize-bsize;
 222:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 223:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   // something wrong, just do a string compare...
 224:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return strcmp(*(char**)aa, *(char**)bb);
 225:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
 368              		.loc 1 225 0
 369 00e2 488B5C24 		movq	40(%rsp), %rbx
 369      28
 370 00e7 6448331C 		xorq	%fs:40, %rbx
 370      25280000 
 370      00
 371 00f0 0F854802 		jne	.L88
 371      0000
 372 00f6 4883C438 		addq	$56, %rsp
 373              		.cfi_remember_state
 374              		.cfi_def_cfa_offset 56
 375 00fa 5B       		popq	%rbx
 376              		.cfi_def_cfa_offset 48
 377 00fb 5D       		popq	%rbp
 378              		.cfi_def_cfa_offset 40
 379 00fc 415C     		popq	%r12
 380              		.cfi_def_cfa_offset 32
 381 00fe 415D     		popq	%r13
 382              		.cfi_def_cfa_offset 24
 383              	.LVL26:
 384 0100 415E     		popq	%r14
 385              		.cfi_def_cfa_offset 16
 386 0102 415F     		popq	%r15
 387              		.cfi_def_cfa_offset 8
 388 0104 C3       		ret
 389              	.LVL27:
 390              		.p2align 4,,10
 391 0105 0F1F00   		.p2align 3
 392              	.L74:
 393              		.cfi_restore_state
 394              	.LBB50:
 395              	.LBB47:
 396              	.LBB46:
 397 0108 89D8     		movl	%ebx, %eax
 398 010a EBD6     		jmp	.L47
 399              	.LVL28:
 400 010c 0F1F4000 		.p2align 4,,10
 401              		.p2align 3
 402              	.L44:
 403              	.LBE46:
 404              	.LBE47:
 182:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 405              		.loc 1 182 0
 406 0110 803A2D   		cmpb	$45, (%rdx)
 407 0113 0F85F601 		jne	.L61
 407      0000
 408              	.LBE50:
 186:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   for (b++; *b && *b++!='-';);
 409              		.loc 1 186 0
 410 0119 4883C701 		addq	$1, %rdi
 411 011d 4989F6   		movq	%rsi, %r14
 412 0120 48897C24 		movq	%rdi, 24(%rsp)
 412      18
 413              	.L54:
 186:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   for (b++; *b && *b++!='-';);
 414              		.loc 1 186 0 is_stmt 0 discriminator 1
 415 0125 803F00   		cmpb	$0, (%rdi)
 416 0128 740F     		je	.L53
 186:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   for (b++; *b && *b++!='-';);
 417              		.loc 1 186 0 discriminator 2
 418 012a 4883C701 		addq	$1, %rdi
 419 012e 48897C24 		movq	%rdi, 24(%rsp)
 419      18
 420 0133 807FFF2D 		cmpb	$45, -1(%rdi)
 421 0137 75EC     		jne	.L54
 422              	.L53:
 187:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 423              		.loc 1 187 0 is_stmt 1
 424 0139 4C8D4A01 		leaq	1(%rdx), %r9
 425 013d 4C894C24 		movq	%r9, 32(%rsp)
 425      20
 426              	.L56:
 187:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 427              		.loc 1 187 0 is_stmt 0 discriminator 1
 428 0142 41803900 		cmpb	$0, (%r9)
 429 0146 7410     		je	.L55
 187:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 430              		.loc 1 187 0 discriminator 2
 431 0148 4983C101 		addq	$1, %r9
 432 014c 4C894C24 		movq	%r9, 32(%rsp)
 432      20
 433 0151 418079FF 		cmpb	$45, -1(%r9)
 433      2D
 434 0156 75EA     		jne	.L56
 435              	.L55:
 436              	.LVL29:
 437 0158 4C8B5424 		movq	24(%rsp), %r10
 437      18
 438              	.LBB51:
 439              	.LBB48:
 440 015d BB020000 		movl	$2, %ebx
 440      00
 441 0162 4531E4   		xorl	%r12d, %r12d
 442 0165 31ED     		xorl	%ebp, %ebp
 443              	.LVL30:
 444              	.L71:
 445              	.LBE48:
 446              	.LBE51:
 447              	.LBB52:
 448              	.LBB53:
 193:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int bt = attribute(n,b);
 449              		.loc 1 193 0 is_stmt 1
 450 0167 4C89D6   		movq	%r10, %rsi
 451 016a 89DF     		movl	%ebx, %edi
 452 016c E8000000 		call	_ZL9attributeiPKc
 452      00
 453              	.LVL31:
 194:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (at < 0) {
 454              		.loc 1 194 0
 455 0171 89DF     		movl	%ebx, %edi
 193:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int bt = attribute(n,b);
 456              		.loc 1 193 0
 457 0173 4189C7   		movl	%eax, %r15d
 458              	.LVL32:
 194:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (at < 0) {
 459              		.loc 1 194 0
 460 0176 4C89CE   		movq	%r9, %rsi
 461 0179 E8000000 		call	_ZL9attributeiPKc
 461      00
 462              	.LVL33:
 195:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (bt >= 0) return 1;
 463              		.loc 1 195 0
 464 017e 4585FF   		testl	%r15d, %r15d
 194:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (at < 0) {
 465              		.loc 1 194 0
 466 0181 890424   		movl	%eax, (%rsp)
 467              	.LVL34:
 195:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (bt >= 0) return 1;
 468              		.loc 1 195 0
 469 0184 7872     		js	.L89
 199:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       a = fl_font_word(a,1); if (*a) a++;
 470              		.loc 1 199 0
 471 0186 8B0424   		movl	(%rsp), %eax
 472 0189 85C0     		testl	%eax, %eax
 473 018b 0F887E01 		js	.L61
 473      0000
 200:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       b = fl_font_word(b,1); if (*b) b++;
 474              		.loc 1 200 0
 475 0191 BE010000 		movl	$1, %esi
 475      00
 476 0196 4C89D7   		movq	%r10, %rdi
 477 0199 E8000000 		call	_Z12fl_font_wordPKci
 477      00
 478              	.LVL35:
 479 019e 48894424 		movq	%rax, 24(%rsp)
 479      18
 480 01a3 803800   		cmpb	$0, (%rax)
 481 01a6 7409     		je	.L62
 200:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       b = fl_font_word(b,1); if (*b) b++;
 482              		.loc 1 200 0 is_stmt 0 discriminator 1
 483 01a8 4883C001 		addq	$1, %rax
 484 01ac 48894424 		movq	%rax, 24(%rsp)
 484      18
 485              	.L62:
 201:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       atype |= at; btype |= bt;
 486              		.loc 1 201 0 is_stmt 1
 487 01b1 488B7C24 		movq	32(%rsp), %rdi
 487      20
 488 01b6 BE010000 		movl	$1, %esi
 488      00
 489 01bb E8000000 		call	_Z12fl_font_wordPKci
 489      00
 490              	.LVL36:
 491 01c0 48894424 		movq	%rax, 32(%rsp)
 491      20
 492 01c5 803800   		cmpb	$0, (%rax)
 493 01c8 7409     		je	.L63
 201:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       atype |= at; btype |= bt;
 494              		.loc 1 201 0 is_stmt 0 discriminator 1
 495 01ca 4883C001 		addq	$1, %rax
 496 01ce 48894424 		movq	%rax, 32(%rsp)
 496      20
 497              	.L63:
 202:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 498              		.loc 1 202 0 is_stmt 1
 499 01d3 440B2424 		orl	(%rsp), %r12d
 500              	.LVL37:
 501 01d7 4C8B5424 		movq	24(%rsp), %r10
 501      18
 502 01dc 4409FD   		orl	%r15d, %ebp
 503              	.LVL38:
 504              	.L72:
 505              	.LBE53:
 192:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int at = attribute(n,a);
 506              		.loc 1 192 0 discriminator 2
 507 01df 83C301   		addl	$1, %ebx
 508              	.LVL39:
 509 01e2 83FB07   		cmpl	$7, %ebx
 510 01e5 7450     		je	.L90
 511              	.L64:
 512 01e7 4C8B4C24 		movq	32(%rsp), %r9
 512      20
 513 01ec E976FFFF 		jmp	.L71
 513      FF
 514              	.LVL40:
 515              		.p2align 4,,10
 516 01f1 0F1F8000 		.p2align 3
 516      000000
 517              	.L89:
 518              	.LBB54:
 196:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       for (;;) {if (*a!=*b) return *a-*b; b++; if (!*a || *a++=='-') break;}
 519              		.loc 1 196 0
 520 01f8 85C0     		testl	%eax, %eax
 521 01fa 0F89E000 		jns	.L45
 521      0000
 522              	.LVL41:
 523              	.L60:
 197:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     } else {
 524              		.loc 1 197 0
 525 0200 410FBE02 		movsbl	(%r10), %eax
 526 0204 410FBE11 		movsbl	(%r9), %edx
 527 0208 38D0     		cmpb	%dl, %al
 528 020a 0F85E000 		jne	.L91
 528      0000
 197:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     } else {
 529              		.loc 1 197 0 is_stmt 0 discriminator 2
 530 0210 4983C101 		addq	$1, %r9
 531 0214 4C894C24 		movq	%r9, 32(%rsp)
 531      20
 532 0219 41803A00 		cmpb	$0, (%r10)
 533 021d 74C0     		je	.L72
 197:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     } else {
 534              		.loc 1 197 0 discriminator 4
 535 021f 4983C201 		addq	$1, %r10
 536 0223 4C895424 		movq	%r10, 24(%rsp)
 536      18
 537 0228 41807AFF 		cmpb	$45, -1(%r10)
 537      2D
 538 022d 75D1     		jne	.L60
 539              	.LBE54:
 192:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int at = attribute(n,a);
 540              		.loc 1 192 0 is_stmt 1
 541 022f 83C301   		addl	$1, %ebx
 542              	.LVL42:
 543 0232 83FB07   		cmpl	$7, %ebx
 544 0235 75B0     		jne	.L64
 545              	.L90:
 546              	.LVL43:
 547              	.LBE52:
 548              	.LBB56:
 549              	.LBB57:
 550              		.file 2 "/usr/include/stdlib.h"
   1:/usr/include/stdlib.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/stdlib.h ****    This file is part of the GNU C Library.
   3:/usr/include/stdlib.h **** 
   4:/usr/include/stdlib.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/stdlib.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/stdlib.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/stdlib.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/stdlib.h **** 
   9:/usr/include/stdlib.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/stdlib.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/stdlib.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/stdlib.h ****    Lesser General Public License for more details.
  13:/usr/include/stdlib.h **** 
  14:/usr/include/stdlib.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/stdlib.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/stdlib.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/stdlib.h **** 
  18:/usr/include/stdlib.h **** /*
  19:/usr/include/stdlib.h ****  *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
  20:/usr/include/stdlib.h ****  */
  21:/usr/include/stdlib.h **** 
  22:/usr/include/stdlib.h **** #ifndef	_STDLIB_H
  23:/usr/include/stdlib.h **** 
  24:/usr/include/stdlib.h **** #include <features.h>
  25:/usr/include/stdlib.h **** 
  26:/usr/include/stdlib.h **** /* Get size_t, wchar_t and NULL from <stddef.h>.  */
  27:/usr/include/stdlib.h **** #define		__need_size_t
  28:/usr/include/stdlib.h **** #ifndef __need_malloc_and_calloc
  29:/usr/include/stdlib.h **** # define	__need_wchar_t
  30:/usr/include/stdlib.h **** # define	__need_NULL
  31:/usr/include/stdlib.h **** #endif
  32:/usr/include/stdlib.h **** #include <stddef.h>
  33:/usr/include/stdlib.h **** 
  34:/usr/include/stdlib.h **** __BEGIN_DECLS
  35:/usr/include/stdlib.h **** 
  36:/usr/include/stdlib.h **** #ifndef __need_malloc_and_calloc
  37:/usr/include/stdlib.h **** #define	_STDLIB_H	1
  38:/usr/include/stdlib.h **** 
  39:/usr/include/stdlib.h **** #if (defined __USE_XOPEN || defined __USE_XOPEN2K8) && !defined _SYS_WAIT_H
  40:/usr/include/stdlib.h **** /* XPG requires a few symbols from <sys/wait.h> being defined.  */
  41:/usr/include/stdlib.h **** # include <bits/waitflags.h>
  42:/usr/include/stdlib.h **** # include <bits/waitstatus.h>
  43:/usr/include/stdlib.h **** 
  44:/usr/include/stdlib.h **** # ifdef __USE_MISC
  45:/usr/include/stdlib.h **** 
  46:/usr/include/stdlib.h **** /* Lots of hair to allow traditional BSD use of `union wait'
  47:/usr/include/stdlib.h ****    as well as POSIX.1 use of `int' for the status word.  */
  48:/usr/include/stdlib.h **** 
  49:/usr/include/stdlib.h **** #  if defined __GNUC__ && !defined __cplusplus
  50:/usr/include/stdlib.h **** #   define __WAIT_INT(status) \
  51:/usr/include/stdlib.h ****   (__extension__ (((union { __typeof(status) __in; int __i; }) \
  52:/usr/include/stdlib.h **** 		   { .__in = (status) }).__i))
  53:/usr/include/stdlib.h **** #  else
  54:/usr/include/stdlib.h **** #   define __WAIT_INT(status)	(*(int *) &(status))
  55:/usr/include/stdlib.h **** #  endif
  56:/usr/include/stdlib.h **** 
  57:/usr/include/stdlib.h **** /* This is the type of the argument to `wait'.  The funky union
  58:/usr/include/stdlib.h ****    causes redeclarations with either `int *' or `union wait *' to be
  59:/usr/include/stdlib.h ****    allowed without complaint.  __WAIT_STATUS_DEFN is the type used in
  60:/usr/include/stdlib.h ****    the actual function definitions.  */
  61:/usr/include/stdlib.h **** 
  62:/usr/include/stdlib.h **** #  if !defined __GNUC__ || __GNUC__ < 2 || defined __cplusplus
  63:/usr/include/stdlib.h **** #   define __WAIT_STATUS	void *
  64:/usr/include/stdlib.h **** #   define __WAIT_STATUS_DEFN	void *
  65:/usr/include/stdlib.h **** #  else
  66:/usr/include/stdlib.h **** /* This works in GCC 2.6.1 and later.  */
  67:/usr/include/stdlib.h **** typedef union
  68:/usr/include/stdlib.h ****   {
  69:/usr/include/stdlib.h ****     union wait *__uptr;
  70:/usr/include/stdlib.h ****     int *__iptr;
  71:/usr/include/stdlib.h ****   } __WAIT_STATUS __attribute__ ((__transparent_union__));
  72:/usr/include/stdlib.h **** #   define __WAIT_STATUS_DEFN	int *
  73:/usr/include/stdlib.h **** #  endif
  74:/usr/include/stdlib.h **** 
  75:/usr/include/stdlib.h **** # else /* Don't use misc.  */
  76:/usr/include/stdlib.h **** 
  77:/usr/include/stdlib.h **** #  define __WAIT_INT(status)	(status)
  78:/usr/include/stdlib.h **** #  define __WAIT_STATUS		int *
  79:/usr/include/stdlib.h **** #  define __WAIT_STATUS_DEFN	int *
  80:/usr/include/stdlib.h **** 
  81:/usr/include/stdlib.h **** # endif /* Use misc.  */
  82:/usr/include/stdlib.h **** 
  83:/usr/include/stdlib.h **** /* Define the macros <sys/wait.h> also would define this way.  */
  84:/usr/include/stdlib.h **** # define WEXITSTATUS(status)	__WEXITSTATUS (__WAIT_INT (status))
  85:/usr/include/stdlib.h **** # define WTERMSIG(status)	__WTERMSIG (__WAIT_INT (status))
  86:/usr/include/stdlib.h **** # define WSTOPSIG(status)	__WSTOPSIG (__WAIT_INT (status))
  87:/usr/include/stdlib.h **** # define WIFEXITED(status)	__WIFEXITED (__WAIT_INT (status))
  88:/usr/include/stdlib.h **** # define WIFSIGNALED(status)	__WIFSIGNALED (__WAIT_INT (status))
  89:/usr/include/stdlib.h **** # define WIFSTOPPED(status)	__WIFSTOPPED (__WAIT_INT (status))
  90:/usr/include/stdlib.h **** # ifdef __WIFCONTINUED
  91:/usr/include/stdlib.h **** #  define WIFCONTINUED(status)	__WIFCONTINUED (__WAIT_INT (status))
  92:/usr/include/stdlib.h **** # endif
  93:/usr/include/stdlib.h **** #endif	/* X/Open or XPG7 and <sys/wait.h> not included.  */
  94:/usr/include/stdlib.h **** 
  95:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_STD
  96:/usr/include/stdlib.h **** /* Returned by `div'.  */
  97:/usr/include/stdlib.h **** typedef struct
  98:/usr/include/stdlib.h ****   {
  99:/usr/include/stdlib.h ****     int quot;			/* Quotient.  */
 100:/usr/include/stdlib.h ****     int rem;			/* Remainder.  */
 101:/usr/include/stdlib.h ****   } div_t;
 102:/usr/include/stdlib.h **** 
 103:/usr/include/stdlib.h **** /* Returned by `ldiv'.  */
 104:/usr/include/stdlib.h **** #ifndef __ldiv_t_defined
 105:/usr/include/stdlib.h **** typedef struct
 106:/usr/include/stdlib.h ****   {
 107:/usr/include/stdlib.h ****     long int quot;		/* Quotient.  */
 108:/usr/include/stdlib.h ****     long int rem;		/* Remainder.  */
 109:/usr/include/stdlib.h ****   } ldiv_t;
 110:/usr/include/stdlib.h **** # define __ldiv_t_defined	1
 111:/usr/include/stdlib.h **** #endif
 112:/usr/include/stdlib.h **** __END_NAMESPACE_STD
 113:/usr/include/stdlib.h **** 
 114:/usr/include/stdlib.h **** #if defined __USE_ISOC99 && !defined __lldiv_t_defined
 115:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_C99
 116:/usr/include/stdlib.h **** /* Returned by `lldiv'.  */
 117:/usr/include/stdlib.h **** __extension__ typedef struct
 118:/usr/include/stdlib.h ****   {
 119:/usr/include/stdlib.h ****     long long int quot;		/* Quotient.  */
 120:/usr/include/stdlib.h ****     long long int rem;		/* Remainder.  */
 121:/usr/include/stdlib.h ****   } lldiv_t;
 122:/usr/include/stdlib.h **** # define __lldiv_t_defined	1
 123:/usr/include/stdlib.h **** __END_NAMESPACE_C99
 124:/usr/include/stdlib.h **** #endif
 125:/usr/include/stdlib.h **** 
 126:/usr/include/stdlib.h **** 
 127:/usr/include/stdlib.h **** /* The largest number rand will return (same as INT_MAX).  */
 128:/usr/include/stdlib.h **** #define	RAND_MAX	2147483647
 129:/usr/include/stdlib.h **** 
 130:/usr/include/stdlib.h **** 
 131:/usr/include/stdlib.h **** /* We define these the same for all machines.
 132:/usr/include/stdlib.h ****    Changes from this to the outside world should be done in `_exit'.  */
 133:/usr/include/stdlib.h **** #define	EXIT_FAILURE	1	/* Failing exit status.  */
 134:/usr/include/stdlib.h **** #define	EXIT_SUCCESS	0	/* Successful exit status.  */
 135:/usr/include/stdlib.h **** 
 136:/usr/include/stdlib.h **** 
 137:/usr/include/stdlib.h **** /* Maximum length of a multibyte character in the current locale.  */
 138:/usr/include/stdlib.h **** #define	MB_CUR_MAX	(__ctype_get_mb_cur_max ())
 139:/usr/include/stdlib.h **** extern size_t __ctype_get_mb_cur_max (void) __THROW __wur;
 140:/usr/include/stdlib.h **** 
 141:/usr/include/stdlib.h **** 
 142:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_STD
 143:/usr/include/stdlib.h **** /* Convert a string to a floating-point number.  */
 144:/usr/include/stdlib.h **** extern double atof (const char *__nptr)
 145:/usr/include/stdlib.h ****      __THROW __attribute_pure__ __nonnull ((1)) __wur;
 146:/usr/include/stdlib.h **** /* Convert a string to an integer.  */
 147:/usr/include/stdlib.h **** extern int atoi (const char *__nptr)
 148:/usr/include/stdlib.h ****      __THROW __attribute_pure__ __nonnull ((1)) __wur;
 149:/usr/include/stdlib.h **** /* Convert a string to a long integer.  */
 150:/usr/include/stdlib.h **** extern long int atol (const char *__nptr)
 151:/usr/include/stdlib.h ****      __THROW __attribute_pure__ __nonnull ((1)) __wur;
 152:/usr/include/stdlib.h **** __END_NAMESPACE_STD
 153:/usr/include/stdlib.h **** 
 154:/usr/include/stdlib.h **** #ifdef __USE_ISOC99
 155:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_C99
 156:/usr/include/stdlib.h **** /* Convert a string to a long long integer.  */
 157:/usr/include/stdlib.h **** __extension__ extern long long int atoll (const char *__nptr)
 158:/usr/include/stdlib.h ****      __THROW __attribute_pure__ __nonnull ((1)) __wur;
 159:/usr/include/stdlib.h **** __END_NAMESPACE_C99
 160:/usr/include/stdlib.h **** #endif
 161:/usr/include/stdlib.h **** 
 162:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_STD
 163:/usr/include/stdlib.h **** /* Convert a string to a floating-point number.  */
 164:/usr/include/stdlib.h **** extern double strtod (const char *__restrict __nptr,
 165:/usr/include/stdlib.h **** 		      char **__restrict __endptr)
 166:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 167:/usr/include/stdlib.h **** __END_NAMESPACE_STD
 168:/usr/include/stdlib.h **** 
 169:/usr/include/stdlib.h **** #ifdef	__USE_ISOC99
 170:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_C99
 171:/usr/include/stdlib.h **** /* Likewise for `float' and `long double' sizes of floating-point numbers.  */
 172:/usr/include/stdlib.h **** extern float strtof (const char *__restrict __nptr,
 173:/usr/include/stdlib.h **** 		     char **__restrict __endptr) __THROW __nonnull ((1));
 174:/usr/include/stdlib.h **** 
 175:/usr/include/stdlib.h **** extern long double strtold (const char *__restrict __nptr,
 176:/usr/include/stdlib.h **** 			    char **__restrict __endptr)
 177:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 178:/usr/include/stdlib.h **** __END_NAMESPACE_C99
 179:/usr/include/stdlib.h **** #endif
 180:/usr/include/stdlib.h **** 
 181:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_STD
 182:/usr/include/stdlib.h **** /* Convert a string to a long integer.  */
 183:/usr/include/stdlib.h **** extern long int strtol (const char *__restrict __nptr,
 184:/usr/include/stdlib.h **** 			char **__restrict __endptr, int __base)
 185:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 186:/usr/include/stdlib.h **** /* Convert a string to an unsigned long integer.  */
 187:/usr/include/stdlib.h **** extern unsigned long int strtoul (const char *__restrict __nptr,
 188:/usr/include/stdlib.h **** 				  char **__restrict __endptr, int __base)
 189:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 190:/usr/include/stdlib.h **** __END_NAMESPACE_STD
 191:/usr/include/stdlib.h **** 
 192:/usr/include/stdlib.h **** #ifdef __USE_MISC
 193:/usr/include/stdlib.h **** /* Convert a string to a quadword integer.  */
 194:/usr/include/stdlib.h **** __extension__
 195:/usr/include/stdlib.h **** extern long long int strtoq (const char *__restrict __nptr,
 196:/usr/include/stdlib.h **** 			     char **__restrict __endptr, int __base)
 197:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 198:/usr/include/stdlib.h **** /* Convert a string to an unsigned quadword integer.  */
 199:/usr/include/stdlib.h **** __extension__
 200:/usr/include/stdlib.h **** extern unsigned long long int strtouq (const char *__restrict __nptr,
 201:/usr/include/stdlib.h **** 				       char **__restrict __endptr, int __base)
 202:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 203:/usr/include/stdlib.h **** #endif /* Use misc.  */
 204:/usr/include/stdlib.h **** 
 205:/usr/include/stdlib.h **** #ifdef __USE_ISOC99
 206:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_C99
 207:/usr/include/stdlib.h **** /* Convert a string to a quadword integer.  */
 208:/usr/include/stdlib.h **** __extension__
 209:/usr/include/stdlib.h **** extern long long int strtoll (const char *__restrict __nptr,
 210:/usr/include/stdlib.h **** 			      char **__restrict __endptr, int __base)
 211:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 212:/usr/include/stdlib.h **** /* Convert a string to an unsigned quadword integer.  */
 213:/usr/include/stdlib.h **** __extension__
 214:/usr/include/stdlib.h **** extern unsigned long long int strtoull (const char *__restrict __nptr,
 215:/usr/include/stdlib.h **** 					char **__restrict __endptr, int __base)
 216:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 217:/usr/include/stdlib.h **** __END_NAMESPACE_C99
 218:/usr/include/stdlib.h **** #endif /* ISO C99 or use MISC.  */
 219:/usr/include/stdlib.h **** 
 220:/usr/include/stdlib.h **** 
 221:/usr/include/stdlib.h **** #ifdef __USE_GNU
 222:/usr/include/stdlib.h **** /* The concept of one static locale per category is not very well
 223:/usr/include/stdlib.h ****    thought out.  Many applications will need to process its data using
 224:/usr/include/stdlib.h ****    information from several different locales.  Another problem is
 225:/usr/include/stdlib.h ****    the implementation of the internationalization handling in the
 226:/usr/include/stdlib.h ****    ISO C++ standard library.  To support this another set of
 227:/usr/include/stdlib.h ****    the functions using locale data exist which take an additional
 228:/usr/include/stdlib.h ****    argument.
 229:/usr/include/stdlib.h **** 
 230:/usr/include/stdlib.h ****    Attention: even though several *_l interfaces are part of POSIX:2008,
 231:/usr/include/stdlib.h ****    these are not.  */
 232:/usr/include/stdlib.h **** 
 233:/usr/include/stdlib.h **** /* Structure for reentrant locale using functions.  This is an
 234:/usr/include/stdlib.h ****    (almost) opaque type for the user level programs.  */
 235:/usr/include/stdlib.h **** # include <xlocale.h>
 236:/usr/include/stdlib.h **** 
 237:/usr/include/stdlib.h **** /* Special versions of the functions above which take the locale to
 238:/usr/include/stdlib.h ****    use as an additional parameter.  */
 239:/usr/include/stdlib.h **** extern long int strtol_l (const char *__restrict __nptr,
 240:/usr/include/stdlib.h **** 			  char **__restrict __endptr, int __base,
 241:/usr/include/stdlib.h **** 			  __locale_t __loc) __THROW __nonnull ((1, 4));
 242:/usr/include/stdlib.h **** 
 243:/usr/include/stdlib.h **** extern unsigned long int strtoul_l (const char *__restrict __nptr,
 244:/usr/include/stdlib.h **** 				    char **__restrict __endptr,
 245:/usr/include/stdlib.h **** 				    int __base, __locale_t __loc)
 246:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 4));
 247:/usr/include/stdlib.h **** 
 248:/usr/include/stdlib.h **** __extension__
 249:/usr/include/stdlib.h **** extern long long int strtoll_l (const char *__restrict __nptr,
 250:/usr/include/stdlib.h **** 				char **__restrict __endptr, int __base,
 251:/usr/include/stdlib.h **** 				__locale_t __loc)
 252:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 4));
 253:/usr/include/stdlib.h **** 
 254:/usr/include/stdlib.h **** __extension__
 255:/usr/include/stdlib.h **** extern unsigned long long int strtoull_l (const char *__restrict __nptr,
 256:/usr/include/stdlib.h **** 					  char **__restrict __endptr,
 257:/usr/include/stdlib.h **** 					  int __base, __locale_t __loc)
 258:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 4));
 259:/usr/include/stdlib.h **** 
 260:/usr/include/stdlib.h **** extern double strtod_l (const char *__restrict __nptr,
 261:/usr/include/stdlib.h **** 			char **__restrict __endptr, __locale_t __loc)
 262:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 3));
 263:/usr/include/stdlib.h **** 
 264:/usr/include/stdlib.h **** extern float strtof_l (const char *__restrict __nptr,
 265:/usr/include/stdlib.h **** 		       char **__restrict __endptr, __locale_t __loc)
 266:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 3));
 267:/usr/include/stdlib.h **** 
 268:/usr/include/stdlib.h **** extern long double strtold_l (const char *__restrict __nptr,
 269:/usr/include/stdlib.h **** 			      char **__restrict __endptr,
 270:/usr/include/stdlib.h **** 			      __locale_t __loc)
 271:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 3));
 272:/usr/include/stdlib.h **** #endif /* GNU */
 273:/usr/include/stdlib.h **** 
 274:/usr/include/stdlib.h **** 
 275:/usr/include/stdlib.h **** #ifdef __USE_EXTERN_INLINES
 276:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_STD
 277:/usr/include/stdlib.h **** __extern_inline int
 278:/usr/include/stdlib.h **** __NTH (atoi (const char *__nptr))
 279:/usr/include/stdlib.h **** {
 280:/usr/include/stdlib.h ****   return (int) strtol (__nptr, (char **) NULL, 10);
 551              		.loc 2 280 0
 552 0237 4C89D7   		movq	%r10, %rdi
 553 023a 31F6     		xorl	%esi, %esi
 554 023c BA0A0000 		movl	$10, %edx
 554      00
 555 0241 E8000000 		call	strtol
 555      00
 556              	.LVL44:
 557              	.LBE57:
 558              	.LBE56:
 559              	.LBB59:
 560              	.LBB60:
 561 0246 488B7C24 		movq	32(%rsp), %rdi
 561      20
 562 024b 31F6     		xorl	%esi, %esi
 563 024d BA0A0000 		movl	$10, %edx
 563      00
 564              	.LBE60:
 565              	.LBE59:
 566              	.LBB63:
 567              	.LBB58:
 568 0252 48890424 		movq	%rax, (%rsp)
 569              	.LVL45:
 570              	.LBE58:
 571              	.LBE63:
 572              	.LBB64:
 573              	.LBB61:
 574 0256 E8000000 		call	strtol
 574      00
 575              	.LVL46:
 576              	.LBE61:
 577              	.LBE64:
 211:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   b = fl_font_word(b,6); if (*b) b++;
 578              		.loc 1 211 0
 579 025b 488B7C24 		movq	24(%rsp), %rdi
 579      18
 580 0260 BE060000 		movl	$6, %esi
 580      00
 581              	.LBB65:
 582              	.LBB62:
 583              		.loc 2 280 0
 584 0265 48894424 		movq	%rax, 8(%rsp)
 584      08
 585              	.LBE62:
 586              	.LBE65:
 211:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   b = fl_font_word(b,6); if (*b) b++;
 587              		.loc 1 211 0
 588 026a E8000000 		call	_Z12fl_font_wordPKci
 588      00
 589              	.LVL47:
 590 026f 48894424 		movq	%rax, 24(%rsp)
 590      18
 591 0274 803800   		cmpb	$0, (%rax)
 592 0277 7409     		je	.L65
 211:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   b = fl_font_word(b,6); if (*b) b++;
 593              		.loc 1 211 0 is_stmt 0 discriminator 1
 594 0279 4883C001 		addq	$1, %rax
 595 027d 48894424 		movq	%rax, 24(%rsp)
 595      18
 596              	.L65:
 212:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (use_registry(a)) {
 597              		.loc 1 212 0 is_stmt 1
 598 0282 488B7C24 		movq	32(%rsp), %rdi
 598      20
 599 0287 BE060000 		movl	$6, %esi
 599      00
 600 028c E8000000 		call	_Z12fl_font_wordPKci
 600      00
 601              	.LVL48:
 602 0291 48894424 		movq	%rax, 32(%rsp)
 602      20
 603 0296 803800   		cmpb	$0, (%rax)
 604 0299 4989C7   		movq	%rax, %r15
 605              	.LVL49:
 606 029c 7409     		je	.L66
 212:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (use_registry(a)) {
 607              		.loc 1 212 0 is_stmt 0 discriminator 1
 608 029e 4983C701 		addq	$1, %r15
 609 02a2 4C897C24 		movq	%r15, 32(%rsp)
 609      20
 610              	.L66:
 611              	.LBB66:
 213:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!use_registry(b)) return 1;
 612              		.loc 1 213 0 is_stmt 1
 613 02a7 488B5C24 		movq	24(%rsp), %rbx
 613      18
 614              	.LVL50:
 615 02ac 4889DF   		movq	%rbx, %rdi
 616 02af E8000000 		call	_ZL12use_registryPKc
 616      00
 617              	.LVL51:
 618 02b4 85C0     		testl	%eax, %eax
 619              	.LBB67:
 214:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int r = strcmp(a,b); if (r) return r;
 620              		.loc 1 214 0
 621 02b6 4C89FF   		movq	%r15, %rdi
 622              	.LBE67:
 213:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!use_registry(b)) return 1;
 623              		.loc 1 213 0
 624 02b9 743C     		je	.L67
 625              	.LBB68:
 214:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int r = strcmp(a,b); if (r) return r;
 626              		.loc 1 214 0
 627 02bb E8000000 		call	_ZL12use_registryPKc
 627      00
 628              	.LVL52:
 629 02c0 85C0     		testl	%eax, %eax
 630 02c2 741C     		je	.L45
 215:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   } else {
 631              		.loc 1 215 0
 632 02c4 4C89FE   		movq	%r15, %rsi
 633 02c7 4889DF   		movq	%rbx, %rdi
 634 02ca E8000000 		call	strcmp
 634      00
 635              	.LVL53:
 636 02cf 85C0     		testl	%eax, %eax
 637 02d1 742D     		je	.L68
 638 02d3 E90AFEFF 		jmp	.L47
 638      FF
 639              	.LVL54:
 640 02d8 0F1F8400 		.p2align 4,,10
 640      00000000 
 641              		.p2align 3
 642              	.L45:
 643              	.LBE68:
 644              	.LBE66:
 645              	.LBB69:
 646              	.LBB49:
 165:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     // 2 non-x fonts are matched by "numeric sort"
 647              		.loc 1 165 0
 648 02e0 B8010000 		movl	$1, %eax
 648      00
 649 02e5 E9F8FDFF 		jmp	.L47
 649      FF
 650              	.LVL55:
 651 02ea 660F1F44 		.p2align 4,,10
 651      0000
 652              		.p2align 3
 653              	.L91:
 654              	.LBE49:
 655              	.LBE69:
 656              	.LBB70:
 657              	.LBB55:
 197:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     } else {
 658              		.loc 1 197 0 discriminator 1
 659 02f0 29D0     		subl	%edx, %eax
 660 02f2 E9EBFDFF 		jmp	.L47
 660      FF
 661              	.LVL56:
 662              	.L67:
 663              	.LBE55:
 664              	.LBE70:
 665              	.LBB71:
 217:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 666              		.loc 1 217 0
 667 02f7 E8000000 		call	_ZL12use_registryPKc
 667      00
 668              	.LVL57:
 669 02fc 85C0     		testl	%eax, %eax
 670 02fe 750F     		jne	.L61
 671              	.L68:
 672              	.LBE71:
 220:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (asize != bsize) return asize-bsize;
 673              		.loc 1 220 0
 674 0300 4439E5   		cmpl	%r12d, %ebp
 675 0303 7414     		je	.L69
 220:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (asize != bsize) return asize-bsize;
 676              		.loc 1 220 0 is_stmt 0 discriminator 1
 677 0305 89E8     		movl	%ebp, %eax
 678 0307 4429E0   		subl	%r12d, %eax
 679 030a E9D3FDFF 		jmp	.L47
 679      FF
 680              	.LVL58:
 681              	.L61:
 682              	.LBB72:
 182:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 683              		.loc 1 182 0 is_stmt 1
 684 030f B8FFFFFF 		movl	$-1, %eax
 684      FF
 685 0314 E9C9FDFF 		jmp	.L47
 685      FF
 686              	.LVL59:
 687              	.L69:
 688              	.LBE72:
 221:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 689              		.loc 1 221 0
 690 0319 488B5C24 		movq	8(%rsp), %rbx
 690      08
 691 031e 488B0424 		movq	(%rsp), %rax
 692 0322 39D8     		cmpl	%ebx, %eax
 693 0324 7407     		je	.L70
 221:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 694              		.loc 1 221 0 is_stmt 0 discriminator 1
 695 0326 29D8     		subl	%ebx, %eax
 696 0328 E9B5FDFF 		jmp	.L47
 696      FF
 697              	.L70:
 224:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
 698              		.loc 1 224 0 is_stmt 1
 699 032d 498B36   		movq	(%r14), %rsi
 700 0330 498B7D00 		movq	0(%r13), %rdi
 701 0334 E8000000 		call	strcmp
 701      00
 702              	.LVL60:
 703 0339 E9A4FDFF 		jmp	.L47
 703      FF
 704              	.LVL61:
 705              	.L88:
 706              		.loc 1 225 0
 707 033e E8000000 		call	__stack_chk_fail
 707      00
 708              	.LVL62:
 709              		.cfi_endproc
 710              	.LFE324:
 712              		.section	.text.unlikely.ultrasort
 713              	.LCOLDE8:
 714              		.section	.text.ultrasort
 715              	.LHOTE8:
 716              		.section	.rodata.str1.1
 717              	.LC9:
 718 0023 00       		.string	""
 719              		.section	.text.unlikely._ZL12to_canonicalPcPKcm.constprop.0,"ax",@progbits
 720              	.LCOLDB10:
 721              		.section	.text._ZL12to_canonicalPcPKcm.constprop.0,"ax",@progbits
 722              	.LHOTB10:
 723              		.p2align 4,,15
 725              	_ZL12to_canonicalPcPKcm.constprop.0:
 726              	.LFB328:
 226:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
 227:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 228:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** // converts a X font name to a standard starname, returns point size:
 229:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** static int to_canonical(char *to, const char *from, size_t tolen) {
 727              		.loc 1 229 0
 728              		.cfi_startproc
 729              	.LVL63:
 730 0000 4156     		pushq	%r14
 731              		.cfi_def_cfa_offset 16
 732              		.cfi_offset 14, -16
 733 0002 4155     		pushq	%r13
 734              		.cfi_def_cfa_offset 24
 735              		.cfi_offset 13, -24
 736 0004 4989FD   		movq	%rdi, %r13
 737 0007 4154     		pushq	%r12
 738              		.cfi_def_cfa_offset 32
 739              		.cfi_offset 12, -32
 740 0009 55       		pushq	%rbp
 741              		.cfi_def_cfa_offset 40
 742              		.cfi_offset 6, -40
 230:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   char* c = fl_find_fontsize((char*)from);
 743              		.loc 1 230 0
 744 000a 4889F7   		movq	%rsi, %rdi
 745              	.LVL64:
 229:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   char* c = fl_find_fontsize((char*)from);
 746              		.loc 1 229 0
 747 000d 53       		pushq	%rbx
 748              		.cfi_def_cfa_offset 48
 749              		.cfi_offset 3, -48
 750 000e 4889F3   		movq	%rsi, %rbx
 751 0011 4883EC10 		subq	$16, %rsp
 752              		.cfi_def_cfa_offset 64
 229:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   char* c = fl_find_fontsize((char*)from);
 753              		.loc 1 229 0
 754 0015 64488B04 		movq	%fs:40, %rax
 754      25280000 
 754      00
 755 001e 48894424 		movq	%rax, 8(%rsp)
 755      08
 756 0023 31C0     		xorl	%eax, %eax
 757              	.LVL65:
 758              		.loc 1 230 0
 759 0025 E8000000 		call	_Z16fl_find_fontsizePc
 759      00
 760              	.LVL66:
 231:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!c) return -1; // no point size found...
 761              		.loc 1 231 0
 762 002a 4885C0   		testq	%rax, %rax
 763 002d 0F84FD00 		je	.L100
 763      0000
 232:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   const char* endptr;
 233:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int size = strtol(c,(char**)&endptr,10);
 764              		.loc 1 233 0
 765 0033 BA0A0000 		movl	$10, %edx
 765      00
 766 0038 4889E6   		movq	%rsp, %rsi
 767 003b 4889C7   		movq	%rax, %rdi
 768 003e 4889C5   		movq	%rax, %rbp
 769 0041 E8000000 		call	strtol
 769      00
 770              	.LVL67:
 234:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (from[0] == '-') {
 771              		.loc 1 234 0
 772 0046 803B2D   		cmpb	$45, (%rbx)
 233:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (from[0] == '-') {
 773              		.loc 1 233 0
 774 0049 4989C4   		movq	%rax, %r12
 775              	.LVL68:
 776              		.loc 1 234 0
 777 004c 746A     		je	.L109
 778              	.L95:
 235:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     // replace the "foundry" with -*-:
 236:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     *to++ = '-'; *to++ = '*';
 237:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     for (from++; *from && *from != '-'; from++);
 238:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     // skip to the registry-encoding:
 239:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     endptr = (char*)fl_font_word(endptr,6);
 240:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (*endptr && !use_registry(endptr+1)) endptr = "";
 241:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 242:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int n = c-from;
 779              		.loc 1 242 0
 780 004e 4829DD   		subq	%rbx, %rbp
 781              	.LVL69:
 243:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   // MRS: we want strncpy here, not strlcpy...
 244:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (n > (int)(tolen - 1)) return -1;
 782              		.loc 1 244 0
 783 0051 81FDFF03 		cmpl	$1023, %ebp
 783      0000
 784 0057 0F8FD300 		jg	.L100
 784      0000
 245:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   strncpy(to,from,n);
 785              		.loc 1 245 0
 786 005d 4C63F5   		movslq	%ebp, %r14
 787              	.LVL70:
 788              	.LBB73:
 789              	.LBB74:
 790              		.file 3 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 111:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 112:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 113:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_GNU
 114:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 115:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (stpcpy (char *__restrict __dest, const char *__restrict __src))
 116:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 117:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___stpcpy_chk (__dest, __src, __bos (__dest));
 118:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 119:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
 120:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 121:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 122:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 123:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (strncpy (char *__restrict __dest, const char *__restrict __src,
 124:/usr/include/x86_64-linux-gnu/bits/string3.h **** 		size_t __len))
 125:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 126:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___strncpy_chk (__dest, __src, __len, __bos (__dest));
 791              		.loc 3 126 0
 792 0060 4889DE   		movq	%rbx, %rsi
 793 0063 4C89EF   		movq	%r13, %rdi
 794 0066 4C89F2   		movq	%r14, %rdx
 795              	.LBE74:
 796              	.LBE73:
 246:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   to[n++] = '*';
 247:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   strlcpy(to+n,endptr, tolen - n);
 797              		.loc 1 247 0
 798 0069 83C501   		addl	$1, %ebp
 799              	.LVL71:
 800              	.LBB76:
 801              	.LBB75:
 802              		.loc 3 126 0
 803 006c E8000000 		call	strncpy
 803      00
 804              	.LVL72:
 805              	.LBE75:
 806              	.LBE76:
 807              		.loc 1 247 0
 808 0071 4863ED   		movslq	%ebp, %rbp
 809 0074 488B3424 		movq	(%rsp), %rsi
 810 0078 BA000400 		movl	$1024, %edx
 810      00
 811 007d 498D7C2D 		leaq	0(%r13,%rbp), %rdi
 811      00
 246:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   to[n++] = '*';
 812              		.loc 1 246 0
 813 0082 43C64435 		movb	$42, 0(%r13,%r14)
 813      002A
 814              		.loc 1 247 0
 815 0088 4829EA   		subq	%rbp, %rdx
 816 008b E8000000 		call	fl_strlcpy
 816      00
 817              	.LVL73:
 248:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return size;
 818              		.loc 1 248 0
 819 0090 4489E0   		movl	%r12d, %eax
 820              	.LVL74:
 821              	.L94:
 249:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
 822              		.loc 1 249 0
 823 0093 488B4C24 		movq	8(%rsp), %rcx
 823      08
 824 0098 6448330C 		xorq	%fs:40, %rcx
 824      25280000 
 824      00
 825 00a1 0F859300 		jne	.L110
 825      0000
 826 00a7 4883C410 		addq	$16, %rsp
 827              		.cfi_remember_state
 828              		.cfi_def_cfa_offset 48
 829 00ab 5B       		popq	%rbx
 830              		.cfi_def_cfa_offset 40
 831              	.LVL75:
 832 00ac 5D       		popq	%rbp
 833              		.cfi_def_cfa_offset 32
 834 00ad 415C     		popq	%r12
 835              		.cfi_def_cfa_offset 24
 836 00af 415D     		popq	%r13
 837              		.cfi_def_cfa_offset 16
 838              	.LVL76:
 839 00b1 415E     		popq	%r14
 840              		.cfi_def_cfa_offset 8
 841 00b3 C3       		ret
 842              	.LVL77:
 843              		.p2align 4,,10
 844 00b4 0F1F4000 		.p2align 3
 845              	.L109:
 846              		.cfi_restore_state
 236:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     for (from++; *from && *from != '-'; from++);
 847              		.loc 1 236 0
 848 00b8 41C64500 		movb	$45, 0(%r13)
 848      2D
 849 00bd 41C64501 		movb	$42, 1(%r13)
 849      2A
 237:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     // skip to the registry-encoding:
 850              		.loc 1 237 0
 851 00c2 488D5301 		leaq	1(%rbx), %rdx
 852 00c6 0FB64301 		movzbl	1(%rbx), %eax
 236:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     for (from++; *from && *from != '-'; from++);
 853              		.loc 1 236 0
 854 00ca 4D8D7502 		leaq	2(%r13), %r14
 855              	.LVL78:
 237:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     // skip to the registry-encoding:
 856              		.loc 1 237 0
 857 00ce 4889D3   		movq	%rdx, %rbx
 858 00d1 3C2D     		cmpb	$45, %al
 859 00d3 741A     		je	.L96
 860 00d5 84C0     		testb	%al, %al
 861 00d7 750B     		jne	.L97
 862 00d9 EB14     		jmp	.L96
 863              	.LVL79:
 864 00db 0F1F4400 		.p2align 4,,10
 864      00
 865              		.p2align 3
 866              	.L111:
 867 00e0 3C2D     		cmpb	$45, %al
 868 00e2 740B     		je	.L96
 869              	.L97:
 870 00e4 4883C301 		addq	$1, %rbx
 871              	.LVL80:
 872 00e8 0FB603   		movzbl	(%rbx), %eax
 873 00eb 84C0     		testb	%al, %al
 874 00ed 75F1     		jne	.L111
 875              	.L96:
 239:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (*endptr && !use_registry(endptr+1)) endptr = "";
 876              		.loc 1 239 0
 877 00ef 488B3C24 		movq	(%rsp), %rdi
 878 00f3 BE060000 		movl	$6, %esi
 878      00
 236:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     for (from++; *from && *from != '-'; from++);
 879              		.loc 1 236 0
 880 00f8 4D89F5   		movq	%r14, %r13
 239:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (*endptr && !use_registry(endptr+1)) endptr = "";
 881              		.loc 1 239 0
 882 00fb E8000000 		call	_Z12fl_font_wordPKci
 882      00
 883              	.LVL81:
 884 0100 48890424 		movq	%rax, (%rsp)
 240:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 885              		.loc 1 240 0
 886 0104 803800   		cmpb	$0, (%rax)
 887 0107 0F8441FF 		je	.L95
 887      FFFF
 888              	.LVL82:
 889 010d 488D7801 		leaq	1(%rax), %rdi
 890 0111 E8000000 		call	_ZL12use_registryPKc
 890      00
 891              	.LVL83:
 892 0116 85C0     		testl	%eax, %eax
 893 0118 0F8530FF 		jne	.L95
 893      FFFF
 894 011e 48C70424 		movq	$.LC9, (%rsp)
 894      00000000 
 895 0126 E923FFFF 		jmp	.L95
 895      FF
 896              	.LVL84:
 897 012b 0F1F4400 		.p2align 4,,10
 897      00
 898              		.p2align 3
 899              	.L100:
 231:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   const char* endptr;
 900              		.loc 1 231 0
 901 0130 B8FFFFFF 		movl	$-1, %eax
 901      FF
 902 0135 E959FFFF 		jmp	.L94
 902      FF
 903              	.L110:
 904              		.loc 1 249 0
 905 013a E8000000 		call	__stack_chk_fail
 905      00
 906              	.LVL85:
 907              		.cfi_endproc
 908              	.LFE328:
 910              		.section	.text.unlikely._ZL12to_canonicalPcPKcm.constprop.0
 911              	.LCOLDE10:
 912              		.section	.text._ZL12to_canonicalPcPKcm.constprop.0
 913              	.LHOTE10:
 914              		.section	.rodata.str1.1
 915              	.LC11:
 916 0024 6974616C 		.string	"ital"
 916      00
 917              	.LC12:
 918 0029 20626F6C 		.string	" bold"
 918      6400
 919              	.LC13:
 920 002f 20697461 		.string	" italic"
 920      6C696300 
 921              		.section	.text.unlikely._ZN2Fl13get_font_nameEiPi,"ax",@progbits
 922              		.align 2
 923              	.LCOLDB14:
 924              		.section	.text._ZN2Fl13get_font_nameEiPi,"ax",@progbits
 925              	.LHOTB14:
 926              		.align 2
 927              		.p2align 4,,15
 928              		.globl	_ZN2Fl13get_font_nameEiPi
 930              	_ZN2Fl13get_font_nameEiPi:
 931              	.LFB323:
  82:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   Fl_Fontdesc *f = fl_fonts + fnum;
 932              		.loc 1 82 0
 933              		.cfi_startproc
 934              	.LVL86:
  83:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!f->fontname[0]) {
 935              		.loc 1 83 0
 936 0000 4863C7   		movslq	%edi, %rax
  82:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   Fl_Fontdesc *f = fl_fonts + fnum;
 937              		.loc 1 82 0
 938 0003 4157     		pushq	%r15
 939              		.cfi_def_cfa_offset 16
 940              		.cfi_offset 15, -16
 941 0005 4156     		pushq	%r14
 942              		.cfi_def_cfa_offset 24
 943              		.cfi_offset 14, -24
 944 0007 4155     		pushq	%r13
 945              		.cfi_def_cfa_offset 32
 946              		.cfi_offset 13, -32
 947 0009 4154     		pushq	%r12
 948              		.cfi_def_cfa_offset 40
 949              		.cfi_offset 12, -40
 950 000b 4989F5   		movq	%rsi, %r13
 951 000e 55       		pushq	%rbp
 952              		.cfi_def_cfa_offset 48
 953              		.cfi_offset 6, -48
  83:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!f->fontname[0]) {
 954              		.loc 1 83 0
 955 000f 488D2C80 		leaq	(%rax,%rax,4), %rbp
  82:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   Fl_Fontdesc *f = fl_fonts + fnum;
 956              		.loc 1 82 0
 957 0013 53       		pushq	%rbx
 958              		.cfi_def_cfa_offset 56
 959              		.cfi_offset 3, -56
  83:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!f->fontname[0]) {
 960              		.loc 1 83 0
 961 0014 48C1E505 		salq	$5, %rbp
  82:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   Fl_Fontdesc *f = fl_fonts + fnum;
 962              		.loc 1 82 0
 963 0018 4883EC28 		subq	$40, %rsp
 964              		.cfi_def_cfa_offset 96
  83:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!f->fontname[0]) {
 965              		.loc 1 83 0
 966 001c 48032D00 		addq	fl_fonts(%rip), %rbp
 966      000000
 967              	.LVL87:
 968              	.LBB77:
  84:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int type = 0;
 969              		.loc 1 84 0
 970 0023 807D0800 		cmpb	$0, 8(%rbp)
 971 0027 4C8D7508 		leaq	8(%rbp), %r14
 972 002b 0F85DE00 		jne	.L114
 972      0000
 973              	.LVL88:
 974              	.LBB78:
  86:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!p) {
 975              		.loc 1 86 0
 976 0031 4C8B7500 		movq	0(%rbp), %r14
 977              	.LVL89:
  87:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (ap) *ap = 0;
 978              		.loc 1 87 0
 979 0035 4D85F6   		testq	%r14, %r14
 980 0038 0F84F300 		je	.L173
 980      0000
 981              	.LBB79:
  93:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (strstr(p,"bold")) type = FL_BOLD;
 982              		.loc 1 93 0
 983 003e 410FB61E 		movzbl	(%r14), %ebx
 984              	.LBE79:
  91:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 985              		.loc 1 91 0
 986 0042 4C8D6508 		leaq	8(%rbp), %r12
 987              	.LVL90:
 988              	.LBB106:
  93:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (strstr(p,"bold")) type = FL_BOLD;
 989              		.loc 1 93 0
 990 0046 80FB2D   		cmpb	$45, %bl
 991 0049 0F84F800 		je	.L117
 991      0000
 992              	.LVL91:
 993              	.LBB80:
 994              	.LBB81:
 995              		.file 4 "/usr/include/string.h"
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
 248:/usr/include/string.h **** }
 249:/usr/include/string.h **** 
 250:/usr/include/string.h **** __extern_always_inline const char *
 251:/usr/include/string.h **** strrchr (const char *__s, int __c) __THROW
 252:/usr/include/string.h **** {
 253:/usr/include/string.h ****   return __builtin_strrchr (__s, __c);
 254:/usr/include/string.h **** }
 255:/usr/include/string.h **** # endif
 256:/usr/include/string.h **** }
 257:/usr/include/string.h **** #else
 258:/usr/include/string.h **** extern char *strrchr (const char *__s, int __c)
 259:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 260:/usr/include/string.h **** #endif
 261:/usr/include/string.h **** __END_NAMESPACE_STD
 262:/usr/include/string.h **** 
 263:/usr/include/string.h **** #ifdef __USE_GNU
 264:/usr/include/string.h **** /* This function is similar to `strchr'.  But it returns a pointer to
 265:/usr/include/string.h ****    the closing NUL byte in case C is not found in S.  */
 266:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 267:/usr/include/string.h **** extern "C++" char *strchrnul (char *__s, int __c)
 268:/usr/include/string.h ****      __THROW __asm ("strchrnul") __attribute_pure__ __nonnull ((1));
 269:/usr/include/string.h **** extern "C++" const char *strchrnul (const char *__s, int __c)
 270:/usr/include/string.h ****      __THROW __asm ("strchrnul") __attribute_pure__ __nonnull ((1));
 271:/usr/include/string.h **** # else
 272:/usr/include/string.h **** extern char *strchrnul (const char *__s, int __c)
 273:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 274:/usr/include/string.h **** # endif
 275:/usr/include/string.h **** #endif
 276:/usr/include/string.h **** 
 277:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 278:/usr/include/string.h **** /* Return the length of the initial segment of S which
 279:/usr/include/string.h ****    consists entirely of characters not in REJECT.  */
 280:/usr/include/string.h **** extern size_t strcspn (const char *__s, const char *__reject)
 281:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 282:/usr/include/string.h **** /* Return the length of the initial segment of S which
 283:/usr/include/string.h ****    consists entirely of characters in ACCEPT.  */
 284:/usr/include/string.h **** extern size_t strspn (const char *__s, const char *__accept)
 285:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 286:/usr/include/string.h **** /* Find the first occurrence in S of any character in ACCEPT.  */
 287:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 288:/usr/include/string.h **** extern "C++"
 289:/usr/include/string.h **** {
 290:/usr/include/string.h **** extern char *strpbrk (char *__s, const char *__accept)
 291:/usr/include/string.h ****      __THROW __asm ("strpbrk") __attribute_pure__ __nonnull ((1, 2));
 292:/usr/include/string.h **** extern const char *strpbrk (const char *__s, const char *__accept)
 293:/usr/include/string.h ****      __THROW __asm ("strpbrk") __attribute_pure__ __nonnull ((1, 2));
 294:/usr/include/string.h **** 
 295:/usr/include/string.h **** # ifdef __OPTIMIZE__
 296:/usr/include/string.h **** __extern_always_inline char *
 297:/usr/include/string.h **** strpbrk (char *__s, const char *__accept) __THROW
 298:/usr/include/string.h **** {
 299:/usr/include/string.h ****   return __builtin_strpbrk (__s, __accept);
 300:/usr/include/string.h **** }
 301:/usr/include/string.h **** 
 302:/usr/include/string.h **** __extern_always_inline const char *
 303:/usr/include/string.h **** strpbrk (const char *__s, const char *__accept) __THROW
 304:/usr/include/string.h **** {
 305:/usr/include/string.h ****   return __builtin_strpbrk (__s, __accept);
 306:/usr/include/string.h **** }
 307:/usr/include/string.h **** # endif
 308:/usr/include/string.h **** }
 309:/usr/include/string.h **** #else
 310:/usr/include/string.h **** extern char *strpbrk (const char *__s, const char *__accept)
 311:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 312:/usr/include/string.h **** #endif
 313:/usr/include/string.h **** /* Find the first occurrence of NEEDLE in HAYSTACK.  */
 314:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 315:/usr/include/string.h **** extern "C++"
 316:/usr/include/string.h **** {
 317:/usr/include/string.h **** extern char *strstr (char *__haystack, const char *__needle)
 318:/usr/include/string.h ****      __THROW __asm ("strstr") __attribute_pure__ __nonnull ((1, 2));
 319:/usr/include/string.h **** extern const char *strstr (const char *__haystack, const char *__needle)
 320:/usr/include/string.h ****      __THROW __asm ("strstr") __attribute_pure__ __nonnull ((1, 2));
 321:/usr/include/string.h **** 
 322:/usr/include/string.h **** # ifdef __OPTIMIZE__
 323:/usr/include/string.h **** __extern_always_inline char *
 324:/usr/include/string.h **** strstr (char *__haystack, const char *__needle) __THROW
 325:/usr/include/string.h **** {
 326:/usr/include/string.h ****   return __builtin_strstr (__haystack, __needle);
 327:/usr/include/string.h **** }
 328:/usr/include/string.h **** 
 329:/usr/include/string.h **** __extern_always_inline const char *
 330:/usr/include/string.h **** strstr (const char *__haystack, const char *__needle) __THROW
 331:/usr/include/string.h **** {
 332:/usr/include/string.h ****   return __builtin_strstr (__haystack, __needle);
 996              		.loc 4 332 0
 997 004f BE000000 		movl	$.LC4, %esi
 997      00
 998              	.LVL92:
 999 0054 4C89F7   		movq	%r14, %rdi
 1000              	.LVL93:
 1001              	.LBE81:
 1002              	.LBE80:
 1003              	.LBE106:
  85:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     const char* p = f->name;
 1004              		.loc 1 85 0
 1005 0057 4531FF   		xorl	%r15d, %r15d
 1006              	.LBB107:
 1007              	.LBB83:
 1008              	.LBB82:
 1009              		.loc 4 332 0
 1010 005a E8000000 		call	strstr
 1010      00
 1011              	.LVL94:
 1012              	.LBE82:
 1013              	.LBE83:
 1014              	.LBE107:
  85:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     const char* p = f->name;
 1015              		.loc 1 85 0
 1016 005f 4885C0   		testq	%rax, %rax
 1017              	.LBB108:
 1018              	.LBB84:
 1019              	.LBB85:
 1020              		.loc 4 332 0
 1021 0062 BE000000 		movl	$.LC11, %esi
 1021      00
 1022 0067 4C89F7   		movq	%r14, %rdi
 1023              	.LBE85:
 1024              	.LBE84:
 1025              	.LBE108:
  85:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     const char* p = f->name;
 1026              		.loc 1 85 0
 1027 006a 410F95C7 		setne	%r15b
 1028              	.LVL95:
 1029              	.LBB109:
 1030              	.LBB87:
 1031              	.LBB86:
 1032              		.loc 4 332 0
 1033 006e E8000000 		call	strstr
 1033      00
 1034              	.LVL96:
 1035              	.LBE86:
 1036              	.LBE87:
  95:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       for (;*p; p++) {
 1037              		.loc 1 95 0
 1038 0073 4489FA   		movl	%r15d, %edx
 1039              	.LBE109:
  91:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 1040              		.loc 1 91 0
 1041 0076 4C89E6   		movq	%r12, %rsi
 1042              	.LBB110:
  95:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       for (;*p; p++) {
 1043              		.loc 1 95 0
 1044 0079 83CA02   		orl	$2, %edx
 1045 007c 4885C0   		testq	%rax, %rax
 1046 007f 440F45FA 		cmovne	%edx, %r15d
 1047              	.LVL97:
  96:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (*p == '*' || *p == ' ' || *p == '-') {
 1048              		.loc 1 96 0
 1049 0083 84DB     		testb	%bl, %bl
 1050 0085 747B     		je	.L119
  97:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  do p++; while (*p == '*' || *p == ' ' || *p == '-');
 1051              		.loc 1 97 0
 1052 0087 48B90000 		movabsq	$39586713567232, %rcx
 1052      00000124 
 1052      0000
 1053 0091 EB2A     		jmp	.L126
 1054              	.LVL98:
 1055              		.p2align 4,,10
 1056 0093 0F1F4400 		.p2align 3
 1056      00
 1057              	.L120:
 1058 0098 488D9586 		leaq	134(%rbp), %rdx
 1058      000000
 1059 009f 4C89F0   		movq	%r14, %rax
 1060              	.LVL99:
 1061              	.L122:
 102:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 1062              		.loc 1 102 0
 1063 00a2 4839D6   		cmpq	%rdx, %rsi
 1064 00a5 730A     		jnb	.L125
 1065              	.LVL100:
 102:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 1066              		.loc 1 102 0 is_stmt 0 discriminator 1
 1067 00a7 0FB610   		movzbl	(%rax), %edx
 1068 00aa 4883C601 		addq	$1, %rsi
 1069              	.LVL101:
 1070 00ae 8856FF   		movb	%dl, -1(%rsi)
 1071              	.L125:
  96:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (*p == '*' || *p == ' ' || *p == '-') {
 1072              		.loc 1 96 0 is_stmt 1
 1073 00b1 0FB65801 		movzbl	1(%rax), %ebx
 1074 00b5 4C8D7001 		leaq	1(%rax), %r14
 1075              	.LVL102:
 1076 00b9 84DB     		testb	%bl, %bl
 1077 00bb 7445     		je	.L119
 1078              	.L126:
  97:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  do p++; while (*p == '*' || *p == ' ' || *p == '-');
 1079              		.loc 1 97 0
 1080 00bd 80FB2D   		cmpb	$45, %bl
 1081 00c0 77D6     		ja	.L120
 1082 00c2 480FA3D9 		btq	%rbx, %rcx
 1083 00c6 4C89F0   		movq	%r14, %rax
 1084 00c9 73CD     		jnc	.L120
 1085              	.LVL103:
 1086 00cb 0F1F4400 		.p2align 4,,10
 1086      00
 1087              		.p2align 3
 1088              	.L165:
  98:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if (!*p) break;
 1089              		.loc 1 98 0
 1090 00d0 4883C001 		addq	$1, %rax
 1091              	.LVL104:
 1092 00d4 0FB610   		movzbl	(%rax), %edx
 1093 00d7 80FA2D   		cmpb	$45, %dl
 1094 00da 761C     		jbe	.L174
 1095              	.L123:
 100:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	}
 1096              		.loc 1 100 0
 1097 00dc 488D9586 		leaq	134(%rbp), %rdx
 1097      000000
 1098 00e3 4839F2   		cmpq	%rsi, %rdx
 1099 00e6 76C9     		jbe	.L125
 1100              	.LVL105:
 100:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	}
 1101              		.loc 1 100 0 is_stmt 0 discriminator 1
 1102 00e8 C60620   		movb	$32, (%rsi)
 1103 00eb 4883C601 		addq	$1, %rsi
 1104              	.LVL106:
 1105 00ef EBB1     		jmp	.L122
 1106              		.p2align 4,,10
 1107 00f1 0F1F8000 		.p2align 3
 1107      000000
 1108              	.L174:
  98:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if (!*p) break;
 1109              		.loc 1 98 0 is_stmt 1
 1110 00f8 480FA3D1 		btq	%rdx, %rcx
 1111 00fc 72D2     		jc	.L165
  99:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if (o < (f->fontname + ENDOFBUFFER - 1)) *o++ = ' ';
 1112              		.loc 1 99 0
 1113 00fe 84D2     		testb	%dl, %dl
 1114 0100 75DA     		jne	.L123
 1115              	.LVL107:
 1116              	.L119:
 104:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 1117              		.loc 1 104 0
 1118 0102 C60600   		movb	$0, (%rsi)
 1119              	.LVL108:
 1120              	.L127:
 1121              	.LBE110:
 150:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 1122              		.loc 1 150 0
 1123 0105 4488BD87 		movb	%r15b, 135(%rbp)
 1123      000000
  91:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 1124              		.loc 1 91 0
 1125 010c 4D89E6   		movq	%r12, %r14
 1126              	.LVL109:
 1127              	.L114:
 1128              	.LBE78:
 1129              	.LBE77:
 152:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return f->fontname;
 1130              		.loc 1 152 0
 1131 010f 4D85ED   		testq	%r13, %r13
 1132 0112 740B     		je	.L147
 152:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return f->fontname;
 1133              		.loc 1 152 0 is_stmt 0 discriminator 1
 1134 0114 0FBE8587 		movsbl	135(%rbp), %eax
 1134      000000
 1135 011b 41894500 		movl	%eax, 0(%r13)
 1136              	.L147:
 1137              	.LBB117:
 1138              	.LBB115:
 1139              	.LBB111:
 1140              	.LBB88:
 1141 011f 4C89F0   		movq	%r14, %rax
 1142              	.L116:
 1143              	.LBE88:
 1144              	.LBE111:
 1145              	.LBE115:
 1146              	.LBE117:
 154:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 1147              		.loc 1 154 0 is_stmt 1
 1148 0122 4883C428 		addq	$40, %rsp
 1149              		.cfi_remember_state
 1150              		.cfi_def_cfa_offset 56
 1151 0126 5B       		popq	%rbx
 1152              		.cfi_def_cfa_offset 48
 1153 0127 5D       		popq	%rbp
 1154              		.cfi_def_cfa_offset 40
 1155              	.LVL110:
 1156 0128 415C     		popq	%r12
 1157              		.cfi_def_cfa_offset 32
 1158 012a 415D     		popq	%r13
 1159              		.cfi_def_cfa_offset 24
 1160              	.LVL111:
 1161 012c 415E     		popq	%r14
 1162              		.cfi_def_cfa_offset 16
 1163 012e 415F     		popq	%r15
 1164              		.cfi_def_cfa_offset 8
 1165 0130 C3       		ret
 1166              	.LVL112:
 1167              	.L173:
 1168              		.cfi_restore_state
 1169              	.LBB118:
 1170              	.LBB116:
  88:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       return "";
 1171              		.loc 1 88 0
 1172 0131 4885F6   		testq	%rsi, %rsi
 1173 0134 0F84B601 		je	.L145
 1173      0000
  88:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       return "";
 1174              		.loc 1 88 0 is_stmt 0 discriminator 1
 1175 013a C7060000 		movl	$0, (%rsi)
 1175      0000
  89:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 1176              		.loc 1 89 0 is_stmt 1 discriminator 1
 1177 0140 B8000000 		movl	$.LC9, %eax
 1177      00
 1178 0145 EBDB     		jmp	.L116
 1179              	.LVL113:
 1180              	.L117:
 1181              	.LBB112:
 1182              	.LBB103:
 109:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (!*x) {
 1183              		.loc 1 109 0
 1184 0147 BE020000 		movl	$2, %esi
 1184      00
 1185              	.LVL114:
 1186 014c 4C89F7   		movq	%r14, %rdi
 1187              	.LVL115:
 1188 014f E8000000 		call	_Z12fl_font_wordPKci
 1188      00
 1189              	.LVL116:
 1190 0154 803800   		cmpb	$0, (%rax)
 1191 0157 0F843101 		je	.L128
 1191      0000
 1192              	.LVL117:
 109:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (!*x) {
 1193              		.loc 1 109 0 is_stmt 0 discriminator 1
 1194 015d 0FB65001 		movzbl	1(%rax), %edx
 1195 0161 4C8D7801 		leaq	1(%rax), %r15
 1196              	.LVL118:
 1197 0165 80FA2A   		cmpb	$42, %dl
 1198 0168 7508     		jne	.L130
 1199 016a 0FB65002 		movzbl	2(%rax), %edx
 109:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (!*x) {
 1200              		.loc 1 109 0 discriminator 4
 1201 016e 4C8D7802 		leaq	2(%rax), %r15
 1202              	.LVL119:
 1203              	.L130:
 110:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (ap) *ap = 0;
 1204              		.loc 1 110 0 is_stmt 1
 1205 0172 84D2     		testb	%dl, %dl
 1206 0174 0F841401 		je	.L128
 1206      0000
 114:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if ((e - x) < (int)(ENDOFBUFFER - 1)) {
 1207              		.loc 1 114 0
 1208 017a BE010000 		movl	$1, %esi
 1208      00
 1209 017f 4C89FF   		movq	%r15, %rdi
 1210 0182 E8000000 		call	_Z12fl_font_wordPKci
 1210      00
 1211              	.LVL120:
 115:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	// MRS: we want strncpy here, not strlcpy...
 1212              		.loc 1 115 0
 1213 0187 4989C6   		movq	%rax, %r14
 1214              	.LVL121:
 114:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if ((e - x) < (int)(ENDOFBUFFER - 1)) {
 1215              		.loc 1 114 0
 1216 018a 4889C3   		movq	%rax, %rbx
 1217              	.LVL122:
 115:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	// MRS: we want strncpy here, not strlcpy...
 1218              		.loc 1 115 0
 1219 018d 4D29FE   		subq	%r15, %r14
 1220 0190 4983FE7D 		cmpq	$125, %r14
 1221 0194 0F8F6001 		jg	.L132
 1221      0000
 1222              	.LVL123:
 1223              	.LBB89:
 1224              	.LBB90:
 1225              		.loc 3 126 0
 1226 019a 4C89F2   		movq	%r14, %rdx
 1227 019d B9800000 		movl	$128, %ecx
 1227      00
 1228 01a2 4C89FE   		movq	%r15, %rsi
 1229 01a5 4C89E7   		movq	%r12, %rdi
 1230              	.LBE90:
 1231              	.LBE89:
 118:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       } else {
 1232              		.loc 1 118 0
 1233 01a8 4D01E6   		addq	%r12, %r14
 1234              	.LVL124:
 1235              	.LBB92:
 1236              	.LBB91:
 1237              		.loc 3 126 0
 1238 01ab E8000000 		call	__strncpy_chk
 1238      00
 1239              	.LVL125:
 1240              	.L133:
 1241              	.LBE91:
 1242              	.LBE92:
 1243              	.LBB93:
 1244              	.LBB94:
 130:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if ((e - x) < (int)(ENDOFBUFFER - (o - f->fontname) - 1)) {
 1245              		.loc 1 130 0 discriminator 1
 1246 01b0 488D8586 		leaq	134(%rbp), %rax
 1246      000000
 1247              	.LBE94:
 1248              	.LBE93:
 1249              	.LBE103:
 1250              	.LBE112:
  91:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 1251              		.loc 1 91 0 discriminator 1
 1252 01b7 C744240C 		movl	$3, 12(%rsp)
 1252      03000000 
 1253 01bf 4531FF   		xorl	%r15d, %r15d
 1254              	.LVL126:
 1255              	.LBB113:
 1256              	.LBB104:
 1257              	.LBB100:
 1258              	.LBB97:
 130:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if ((e - x) < (int)(ENDOFBUFFER - (o - f->fontname) - 1)) {
 1259              		.loc 1 130 0 discriminator 1
 1260 01c2 48894424 		movq	%rax, 16(%rsp)
 1260      10
 1261              	.LVL127:
 1262              	.L139:
 127:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	int t = attribute(n,x);
 1263              		.loc 1 127 0
 1264 01c7 803B01   		cmpb	$1, (%rbx)
 1265 01ca BE010000 		movl	$1, %esi
 1265      00
 1266 01cf 4883DBFF 		sbbq	$-1, %rbx
 1267              	.LVL128:
 1268 01d3 4889DF   		movq	%rbx, %rdi
 1269 01d6 48895C24 		movq	%rbx, 24(%rsp)
 1269      18
 1270 01db E8000000 		call	_Z12fl_font_wordPKci
 1270      00
 1271              	.LVL129:
 128:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (t < 0) {
 1272              		.loc 1 128 0
 1273 01e0 4C8B4C24 		movq	24(%rsp), %r9
 1273      18
 1274 01e5 8B7C240C 		movl	12(%rsp), %edi
 127:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	int t = attribute(n,x);
 1275              		.loc 1 127 0
 1276 01e9 4889C3   		movq	%rax, %rbx
 1277              	.LVL130:
 128:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (t < 0) {
 1278              		.loc 1 128 0
 1279 01ec 4C89CE   		movq	%r9, %rsi
 1280 01ef E8000000 		call	_ZL9attributeiPKc
 1280      00
 1281              	.LVL131:
 129:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if (o < (f->fontname + ENDOFBUFFER - 1)) *o++ = ' ';
 1282              		.loc 1 129 0
 1283 01f4 85C0     		testl	%eax, %eax
 1284 01f6 4C8B4C24 		movq	24(%rsp), %r9
 1284      18
 1285 01fb 0F88A600 		js	.L175
 1285      0000
 139:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 1286              		.loc 1 139 0
 1287 0201 4109C7   		orl	%eax, %r15d
 1288              	.LVL132:
 1289              	.L138:
 1290              	.LBE97:
 125:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	// get the next word:
 1291              		.loc 1 125 0 discriminator 2
 1292 0204 8344240C 		addl	$1, 12(%rsp)
 1292      01
 1293              	.LVL133:
 1294 0209 8B44240C 		movl	12(%rsp), %eax
 1295              	.LVL134:
 1296 020d 83F807   		cmpl	$7, %eax
 1297 0210 75B5     		jne	.L139
 1298              	.LBE100:
 143:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (*x) {x++; *o++ = '('; while (*x) *o++ = *x++; *o++ = ')';}
 1299              		.loc 1 143 0
 1300 0212 BE020000 		movl	$2, %esi
 1300      00
 1301 0217 4889DF   		movq	%rbx, %rdi
 1302 021a E8000000 		call	_Z12fl_font_wordPKci
 1302      00
 1303              	.LVL135:
 144:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 1304              		.loc 1 144 0
 1305 021f 803800   		cmpb	$0, (%rax)
 1306 0222 742D     		je	.L140
 144:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 1307              		.loc 1 144 0 is_stmt 0 discriminator 1
 1308 0224 488D7001 		leaq	1(%rax), %rsi
 1309              	.LVL136:
 1310 0228 41C60628 		movb	$40, (%r14)
 1311 022c 0FB64001 		movzbl	1(%rax), %eax
 1312 0230 498D5601 		leaq	1(%r14), %rdx
 1313              	.LVL137:
 1314 0234 84C0     		testb	%al, %al
 1315 0236 7412     		je	.L141
 1316              	.L142:
 144:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 1317              		.loc 1 144 0 discriminator 4
 1318 0238 4883C201 		addq	$1, %rdx
 1319              	.LVL138:
 1320 023c 4883C601 		addq	$1, %rsi
 1321              	.LVL139:
 1322 0240 8842FF   		movb	%al, -1(%rdx)
 1323 0243 0FB606   		movzbl	(%rsi), %eax
 1324 0246 84C0     		testb	%al, %al
 1325 0248 75EE     		jne	.L142
 1326              	.L141:
 144:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 1327              		.loc 1 144 0 discriminator 3
 1328 024a 4C8D7201 		leaq	1(%rdx), %r14
 1329              	.LVL140:
 1330 024e C60229   		movb	$41, (%rdx)
 1331              	.LVL141:
 1332              	.L140:
 147:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (type & FL_ITALIC) strlcat(f->fontname, " italic", ENDOFBUFFER);
 1333              		.loc 1 147 0 is_stmt 1
 1334 0251 41F6C701 		testb	$1, %r15b
 146:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (type & FL_BOLD) strlcat(f->fontname, " bold", ENDOFBUFFER);
 1335              		.loc 1 146 0
 1336 0255 41C60600 		movb	$0, (%r14)
 147:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (type & FL_ITALIC) strlcat(f->fontname, " italic", ENDOFBUFFER);
 1337              		.loc 1 147 0
 1338 0259 7412     		je	.L143
 147:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (type & FL_ITALIC) strlcat(f->fontname, " italic", ENDOFBUFFER);
 1339              		.loc 1 147 0 is_stmt 0 discriminator 1
 1340 025b BA7F0000 		movl	$127, %edx
 1340      00
 1341 0260 BE000000 		movl	$.LC12, %esi
 1341      00
 1342 0265 4C89E7   		movq	%r12, %rdi
 1343 0268 E8000000 		call	fl_strlcat
 1343      00
 1344              	.LVL142:
 1345              	.L143:
 148:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 1346              		.loc 1 148 0 is_stmt 1
 1347 026d 41F6C702 		testb	$2, %r15b
 1348 0271 0F848EFE 		je	.L127
 1348      FFFF
 148:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 1349              		.loc 1 148 0 is_stmt 0 discriminator 1
 1350 0277 BA7F0000 		movl	$127, %edx
 1350      00
 1351 027c BE000000 		movl	$.LC13, %esi
 1351      00
 1352 0281 4C89E7   		movq	%r12, %rdi
 1353 0284 E8000000 		call	fl_strlcat
 1353      00
 1354              	.LVL143:
 1355 0289 E977FEFF 		jmp	.L127
 1355      FF
 1356              	.LVL144:
 1357              	.L128:
 111:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	return p;
 1358              		.loc 1 111 0 is_stmt 1
 1359 028e 4D85ED   		testq	%r13, %r13
 1360 0291 0F8488FE 		je	.L147
 1360      FFFF
 111:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	return p;
 1361              		.loc 1 111 0 is_stmt 0 discriminator 1
 1362 0297 41C74500 		movl	$0, 0(%r13)
 1362      00000000 
 1363 029f 4C89F0   		movq	%r14, %rax
 1364 02a2 E97BFEFF 		jmp	.L116
 1364      FF
 1365              	.LVL145:
 1366              	.L175:
 1367              	.LBB101:
 1368              	.LBB98:
 130:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if ((e - x) < (int)(ENDOFBUFFER - (o - f->fontname) - 1)) {
 1369              		.loc 1 130 0 is_stmt 1
 1370 02a7 4C397424 		cmpq	%r14, 16(%rsp)
 1370      10
 1371 02ac 7608     		jbe	.L136
 1372              	.LVL146:
 130:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if ((e - x) < (int)(ENDOFBUFFER - (o - f->fontname) - 1)) {
 1373              		.loc 1 130 0 is_stmt 0 discriminator 1
 1374 02ae 41C60620 		movb	$32, (%r14)
 1375 02b2 4983C601 		addq	$1, %r14
 1376              	.LVL147:
 1377              	.L136:
 131:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	    // MRS: we want strncpy here, not strlcpy...
 1378              		.loc 1 131 0 is_stmt 1
 1379 02b6 4C89F6   		movq	%r14, %rsi
 1380 02b9 B87E0000 		movl	$126, %eax
 1380      00
 1381              	.LVL148:
 1382 02be 4989DA   		movq	%rbx, %r10
 1383 02c1 4C29E6   		subq	%r12, %rsi
 1384 02c4 4D29CA   		subq	%r9, %r10
 1385 02c7 29F0     		subl	%esi, %eax
 1386 02c9 4898     		cltq
 1387 02cb 4939C2   		cmpq	%rax, %r10
 1388 02ce 7D46     		jge	.L137
 1389              	.LVL149:
 1390              	.LBB95:
 1391              	.LBB96:
 1392              		.loc 3 126 0
 1393 02d0 4C89D2   		movq	%r10, %rdx
 1394 02d3 4C89F7   		movq	%r14, %rdi
 1395 02d6 4C89CE   		movq	%r9, %rsi
 1396 02d9 4C895424 		movq	%r10, 24(%rsp)
 1396      18
 1397              	.LVL150:
 1398 02de E8000000 		call	strncpy
 1398      00
 1399              	.LVL151:
 1400              	.LBE96:
 1401              	.LBE95:
 134:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  } else {
 1402              		.loc 1 134 0
 1403 02e3 4C8B5424 		movq	24(%rsp), %r10
 1403      18
 1404 02e8 4D01D6   		addq	%r10, %r14
 1405              	.LVL152:
 1406 02eb E914FFFF 		jmp	.L138
 1406      FF
 1407              	.LVL153:
 1408              	.L145:
 1409              	.LBE98:
 1410              	.LBE101:
 1411              	.LBE104:
 1412              	.LBE113:
  89:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 1413              		.loc 1 89 0
 1414 02f0 B8000000 		movl	$.LC9, %eax
 1414      00
 1415 02f5 E928FEFF 		jmp	.L116
 1415      FF
 1416              	.LVL154:
 1417              	.L132:
 1418              	.LBB114:
 1419              	.LBB105:
 120:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	o = f->fontname+ENDOFBUFFER-1;
 1420              		.loc 1 120 0
 1421 02fa BA7F0000 		movl	$127, %edx
 1421      00
 1422 02ff 4C89FE   		movq	%r15, %rsi
 1423 0302 4C89E7   		movq	%r12, %rdi
 1424 0305 E8000000 		call	fl_strlcpy
 1424      00
 1425              	.LVL155:
 121:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 1426              		.loc 1 121 0
 1427 030a 4C8DB586 		leaq	134(%rbp), %r14
 1427      000000
 1428              	.LVL156:
 1429 0311 E99AFEFF 		jmp	.L133
 1429      FF
 1430              	.LVL157:
 1431              	.L137:
 1432              	.LBB102:
 1433              	.LBB99:
 136:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	    o = f->fontname+ENDOFBUFFER-1;
 1434              		.loc 1 136 0
 1435 0316 BA7E0000 		movl	$126, %edx
 1435      00
 1436 031b 4C89F7   		movq	%r14, %rdi
 1437 031e 4829F2   		subq	%rsi, %rdx
 1438 0321 4C89CE   		movq	%r9, %rsi
 1439 0324 E8000000 		call	fl_strlcpy
 1439      00
 1440              	.LVL158:
 130:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	  if ((e - x) < (int)(ENDOFBUFFER - (o - f->fontname) - 1)) {
 1441              		.loc 1 130 0
 1442 0329 4C8B7424 		movq	16(%rsp), %r14
 1442      10
 1443 032e E9D1FEFF 		jmp	.L138
 1443      FF
 1444              	.LBE99:
 1445              	.LBE102:
 1446              	.LBE105:
 1447              	.LBE114:
 1448              	.LBE116:
 1449              	.LBE118:
 1450              		.cfi_endproc
 1451              	.LFE323:
 1453              		.section	.text.unlikely._ZN2Fl13get_font_nameEiPi
 1454              	.LCOLDE14:
 1455              		.section	.text._ZN2Fl13get_font_nameEiPi
 1456              	.LHOTE14:
 1457              		.section	.text.unlikely._ZN2Fl9set_fontsEPKc,"ax",@progbits
 1458              		.align 2
 1459              	.LCOLDB15:
 1460              		.section	.text._ZN2Fl9set_fontsEPKc,"ax",@progbits
 1461              	.LHOTB15:
 1462              		.align 2
 1463              		.p2align 4,,15
 1464              		.globl	_ZN2Fl9set_fontsEPKc
 1466              	_ZN2Fl9set_fontsEPKc:
 1467              	.LFB326:
 250:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 251:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** static unsigned int fl_free_font = FL_FREE_FONT;
 252:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 253:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** Fl_Font Fl::set_fonts(const char* xstarname) {
 1468              		.loc 1 253 0
 1469              		.cfi_startproc
 1470              	.LVL159:
 1471 0000 4157     		pushq	%r15
 1472              		.cfi_def_cfa_offset 16
 1473              		.cfi_offset 15, -16
 1474 0002 4156     		pushq	%r14
 1475              		.cfi_def_cfa_offset 24
 1476              		.cfi_offset 14, -24
 1477 0004 4155     		pushq	%r13
 1478              		.cfi_def_cfa_offset 32
 1479              		.cfi_offset 13, -32
 1480 0006 4154     		pushq	%r12
 1481              		.cfi_def_cfa_offset 40
 1482              		.cfi_offset 12, -40
 1483 0008 55       		pushq	%rbp
 1484              		.cfi_def_cfa_offset 48
 1485              		.cfi_offset 6, -48
 1486 0009 53       		pushq	%rbx
 1487              		.cfi_def_cfa_offset 56
 1488              		.cfi_offset 3, -56
 1489 000a 4881EC58 		subq	$2136, %rsp
 1489      080000
 1490              		.cfi_def_cfa_offset 2192
 1491              		.loc 1 253 0
 1492 0011 64488B04 		movq	%fs:40, %rax
 1492      25280000 
 1492      00
 1493 001a 48898424 		movq	%rax, 2120(%rsp)
 1493      48080000 
 1494 0022 31C0     		xorl	%eax, %eax
 254:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (fl_free_font > (unsigned)FL_FREE_FONT) // already been here
 1495              		.loc 1 254 0
 1496 0024 8B050000 		movl	_ZL12fl_free_font(%rip), %eax
 1496      0000
 1497 002a 83F810   		cmpl	$16, %eax
 1498 002d 7631     		jbe	.L199
 1499              	.LVL160:
 1500              	.L178:
 255:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     return (Fl_Font)fl_free_font;
 256:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   fl_open_display();
 257:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int xlistsize;
 258:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   char buf[20];
 259:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!xstarname) {
 260:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     strcpy(buf,"-*-"); strcpy(buf+3,fl_encoding);
 261:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     xstarname = buf;
 262:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 263:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   char **xlist = XListFonts(fl_display, xstarname, 10000, &xlistsize);
 264:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!xlist) return (Fl_Font)fl_free_font;
 265:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   qsort(xlist, xlistsize, sizeof(*xlist), ultrasort);
 266:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int used_xlist = 0;
 267:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   for (int i=0; i<xlistsize;) {
 268:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int first_xlist = i;
 269:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     const char *p = xlist[i++];
 270:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     char canon[1024];
 271:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int size = to_canonical(canon, p, sizeof(canon));
 272:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (size >= 0) {
 273:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       for (;;) { // find all matching fonts:
 274:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (i >= xlistsize) break;
 275:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	const char *q = xlist[i];
 276:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	char this_canon[1024];
 277:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (to_canonical(this_canon, q, sizeof(this_canon)) < 0) break;
 278:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (strcmp(canon, this_canon)) break;
 279:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	i++;
 280:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 281:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       /*if (*p=='-' || i > first_xlist+1)*/ p = canon;
 282:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 283:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     unsigned int j;
 284:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     for (j = 0;; j++) {
 285:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       /*if (j < FL_FREE_FONT) {
 286:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	// see if it is one of our built-in fonts:
 287:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	// if so, set the list of x fonts, since we have it anyway
 288:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (fl_fonts[j].name && !strcmp(fl_fonts[j].name, p)) break;
 289:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       } else */{
 290:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	j = fl_free_font++;
 291:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (p == canon) p = strdup(p); else used_xlist = 1;
 292:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	Fl::set_font((Fl_Font)j, p);
 293:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	break;
 294:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 295:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 296:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!fl_fonts[j].xlist) {
 297:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       fl_fonts[j].xlist = xlist+first_xlist;
 298:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       fl_fonts[j].n = -(i-first_xlist);
 299:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       used_xlist = 1;
 300:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 301:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 302:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!used_xlist) XFreeFontNames(xlist);
 303:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return (Fl_Font)fl_free_font;
 304:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
 1501              		.loc 1 304 0
 1502 002f 488B8C24 		movq	2120(%rsp), %rcx
 1502      48080000 
 1503 0037 6448330C 		xorq	%fs:40, %rcx
 1503      25280000 
 1503      00
 1504 0040 0F85DF01 		jne	.L200
 1504      0000
 1505 0046 4881C458 		addq	$2136, %rsp
 1505      080000
 1506              		.cfi_remember_state
 1507              		.cfi_def_cfa_offset 56
 1508 004d 5B       		popq	%rbx
 1509              		.cfi_def_cfa_offset 48
 1510 004e 5D       		popq	%rbp
 1511              		.cfi_def_cfa_offset 40
 1512 004f 415C     		popq	%r12
 1513              		.cfi_def_cfa_offset 32
 1514 0051 415D     		popq	%r13
 1515              		.cfi_def_cfa_offset 24
 1516 0053 415E     		popq	%r14
 1517              		.cfi_def_cfa_offset 16
 1518 0055 415F     		popq	%r15
 1519              		.cfi_def_cfa_offset 8
 1520 0057 C3       		ret
 1521              	.LVL161:
 1522 0058 0F1F8400 		.p2align 4,,10
 1522      00000000 
 1523              		.p2align 3
 1524              	.L199:
 1525              		.cfi_restore_state
 1526 0060 4889FB   		movq	%rdi, %rbx
 256:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int xlistsize;
 1527              		.loc 1 256 0
 1528 0063 E8000000 		call	_Z15fl_open_displayv
 1528      00
 1529              	.LVL162:
 259:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     strcpy(buf,"-*-"); strcpy(buf+3,fl_encoding);
 1530              		.loc 1 259 0
 1531 0068 4885DB   		testq	%rbx, %rbx
 1532 006b 0F848C01 		je	.L201
 1532      0000
 1533              	.L179:
 263:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!xlist) return (Fl_Font)fl_free_font;
 1534              		.loc 1 263 0
 1535 0071 488B3D00 		movq	fl_display(%rip), %rdi
 1535      000000
 1536 0078 488D4C24 		leaq	28(%rsp), %rcx
 1536      1C
 1537 007d BA102700 		movl	$10000, %edx
 1537      00
 1538 0082 4889DE   		movq	%rbx, %rsi
 1539 0085 E8000000 		call	XListFonts
 1539      00
 1540              	.LVL163:
 264:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   qsort(xlist, xlistsize, sizeof(*xlist), ultrasort);
 1541              		.loc 1 264 0
 1542 008a 4885C0   		testq	%rax, %rax
 263:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!xlist) return (Fl_Font)fl_free_font;
 1543              		.loc 1 263 0
 1544 008d 4989C7   		movq	%rax, %r15
 1545              	.LVL164:
 264:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   qsort(xlist, xlistsize, sizeof(*xlist), ultrasort);
 1546              		.loc 1 264 0
 1547 0090 0F845201 		je	.L182
 1547      0000
 265:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int used_xlist = 0;
 1548              		.loc 1 265 0
 1549 0096 48637424 		movslq	28(%rsp), %rsi
 1549      1C
 1550 009b BA080000 		movl	$8, %edx
 1550      00
 1551 00a0 B9000000 		movl	$ultrasort, %ecx
 1551      00
 1552 00a5 4889C7   		movq	%rax, %rdi
 1553 00a8 E8000000 		call	qsort
 1553      00
 1554              	.LVL165:
 1555              	.LBB119:
 267:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int first_xlist = i;
 1556              		.loc 1 267 0
 1557 00ad 8B54241C 		movl	28(%rsp), %edx
 1558 00b1 85D2     		testl	%edx, %edx
 1559 00b3 0F8E3A01 		jle	.L190
 1559      0000
 1560 00b9 4C8D6424 		leaq	64(%rsp), %r12
 1560      40
 1561 00be 4531ED   		xorl	%r13d, %r13d
 1562 00c1 C744240C 		movl	$0, 12(%rsp)
 1562      00000000 
 1563              	.LVL166:
 1564 00c9 0F1F8000 		.p2align 4,,10
 1564      000000
 1565              		.p2align 3
 1566              	.L189:
 1567              	.LBB120:
 269:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     char canon[1024];
 1568              		.loc 1 269 0
 1569 00d0 4963ED   		movslq	%r13d, %rbp
 271:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (size >= 0) {
 1570              		.loc 1 271 0
 1571 00d3 4C89E7   		movq	%r12, %rdi
 269:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     char canon[1024];
 1572              		.loc 1 269 0
 1573 00d6 418D5D01 		leal	1(%r13), %ebx
 1574              	.LVL167:
 1575 00da 48C1E503 		salq	$3, %rbp
 1576 00de 4D8D342F 		leaq	(%r15,%rbp), %r14
 1577 00e2 498B16   		movq	(%r14), %rdx
 1578              	.LVL168:
 271:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (size >= 0) {
 1579              		.loc 1 271 0
 1580 00e5 4889D6   		movq	%rdx, %rsi
 1581 00e8 48891424 		movq	%rdx, (%rsp)
 1582 00ec E8000000 		call	_ZL12to_canonicalPcPKcm.constprop.0
 1582      00
 1583              	.LVL169:
 1584              	.LBB121:
 272:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       for (;;) { // find all matching fonts:
 1585              		.loc 1 272 0
 1586 00f1 85C0     		testl	%eax, %eax
 1587 00f3 488B1424 		movq	(%rsp), %rdx
 1588 00f7 0F889B00 		js	.L183
 1588      0000
 1589              	.LBB122:
 274:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	const char *q = xlist[i];
 1590              		.loc 1 274 0
 1591 00fd 3B5C241C 		cmpl	28(%rsp), %ebx
 1592 0101 7D43     		jge	.L184
 1593 0103 498D6C2F 		leaq	8(%r15,%rbp), %rbp
 1593      08
 1594 0108 EB27     		jmp	.L185
 1595              	.LVL170:
 1596 010a 660F1F44 		.p2align 4,,10
 1596      0000
 1597              		.p2align 3
 1598              	.L202:
 278:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	i++;
 1599              		.loc 1 278 0
 1600 0110 488DB424 		leaq	1088(%rsp), %rsi
 1600      40040000 
 1601 0118 4C89E7   		movq	%r12, %rdi
 1602 011b E8000000 		call	strcmp
 1602      00
 1603              	.LVL171:
 1604 0120 85C0     		testl	%eax, %eax
 1605 0122 7522     		jne	.L184
 279:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 1606              		.loc 1 279 0
 1607 0124 83C301   		addl	$1, %ebx
 1608              	.LVL172:
 1609 0127 4883C508 		addq	$8, %rbp
 274:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	const char *q = xlist[i];
 1610              		.loc 1 274 0
 1611 012b 395C241C 		cmpl	%ebx, 28(%rsp)
 1612 012f 7E15     		jle	.L184
 1613              	.L185:
 1614              	.LVL173:
 277:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (strcmp(canon, this_canon)) break;
 1615              		.loc 1 277 0
 1616 0131 488B7500 		movq	0(%rbp), %rsi
 1617 0135 488DBC24 		leaq	1088(%rsp), %rdi
 1617      40040000 
 1618 013d E8000000 		call	_ZL12to_canonicalPcPKcm.constprop.0
 1618      00
 1619              	.LVL174:
 1620 0142 85C0     		testl	%eax, %eax
 1621 0144 79CA     		jns	.L202
 1622              	.L184:
 1623              	.LVL175:
 1624              	.LBE122:
 1625              	.LBE121:
 290:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (p == canon) p = strdup(p); else used_xlist = 1;
 1626              		.loc 1 290 0
 1627 0146 8B2D0000 		movl	_ZL12fl_free_font(%rip), %ebp
 1627      0000
 1628 014c 8D4501   		leal	1(%rbp), %eax
 1629 014f 89050000 		movl	%eax, _ZL12fl_free_font(%rip)
 1629      0000
 1630              	.LVL176:
 1631              	.L186:
 291:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	Fl::set_font((Fl_Font)j, p);
 1632              		.loc 1 291 0 discriminator 1
 1633 0155 4C89E7   		movq	%r12, %rdi
 1634 0158 E8000000 		call	strdup
 1634      00
 1635              	.LVL177:
 1636 015d 4889C2   		movq	%rax, %rdx
 1637              	.LVL178:
 1638              		.p2align 4,,10
 1639              		.p2align 3
 1640              	.L187:
 292:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	break;
 1641              		.loc 1 292 0
 1642 0160 4889D6   		movq	%rdx, %rsi
 1643 0163 89EF     		movl	%ebp, %edi
 1644 0165 E8000000 		call	_ZN2Fl8set_fontEiPKc
 1644      00
 1645              	.LVL179:
 296:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       fl_fonts[j].xlist = xlist+first_xlist;
 1646              		.loc 1 296 0
 1647 016a 488D44AD 		leaq	0(%rbp,%rbp,4), %rax
 1647      00
 1648 016f 48C1E005 		salq	$5, %rax
 1649 0173 48030500 		addq	fl_fonts(%rip), %rax
 1649      000000
 1650 017a 4883B890 		cmpq	$0, 144(%rax)
 1650      00000000 
 1651 0182 743C     		je	.L203
 1652              	.LBE120:
 267:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int first_xlist = i;
 1653              		.loc 1 267 0
 1654 0184 395C241C 		cmpl	%ebx, 28(%rsp)
 1655 0188 7E56     		jle	.L204
 1656              	.LVL180:
 1657              	.L193:
 1658 018a 4189DD   		movl	%ebx, %r13d
 1659 018d E93EFFFF 		jmp	.L189
 1659      FF
 1660              	.LVL181:
 1661              		.p2align 4,,10
 1662 0192 660F1F44 		.p2align 3
 1662      0000
 1663              	.L183:
 1664              	.LBB123:
 290:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (p == canon) p = strdup(p); else used_xlist = 1;
 1665              		.loc 1 290 0
 1666 0198 8B2D0000 		movl	_ZL12fl_free_font(%rip), %ebp
 1666      0000
 291:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	Fl::set_font((Fl_Font)j, p);
 1667              		.loc 1 291 0
 1668 019e 4C39E2   		cmpq	%r12, %rdx
 290:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	if (p == canon) p = strdup(p); else used_xlist = 1;
 1669              		.loc 1 290 0
 1670 01a1 8D4501   		leal	1(%rbp), %eax
 1671              	.LVL182:
 1672 01a4 89050000 		movl	%eax, _ZL12fl_free_font(%rip)
 1672      0000
 1673              	.LVL183:
 291:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	Fl::set_font((Fl_Font)j, p);
 1674              		.loc 1 291 0
 1675 01aa 74A9     		je	.L186
 1676 01ac C744240C 		movl	$1, 12(%rsp)
 1676      01000000 
 1677              	.LVL184:
 1678 01b4 EBAA     		jmp	.L187
 1679              	.LVL185:
 1680 01b6 662E0F1F 		.p2align 4,,10
 1680      84000000 
 1680      0000
 1681              		.p2align 3
 1682              	.L203:
 298:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       used_xlist = 1;
 1683              		.loc 1 298 0
 1684 01c0 4129DD   		subl	%ebx, %r13d
 1685              	.LVL186:
 1686              	.LBE123:
 267:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int first_xlist = i;
 1687              		.loc 1 267 0
 1688 01c3 395C241C 		cmpl	%ebx, 28(%rsp)
 1689              	.LBB124:
 297:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       fl_fonts[j].n = -(i-first_xlist);
 1690              		.loc 1 297 0
 1691 01c7 4C89B090 		movq	%r14, 144(%rax)
 1691      000000
 298:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       used_xlist = 1;
 1692              		.loc 1 298 0
 1693 01ce 4489A898 		movl	%r13d, 152(%rax)
 1693      000000
 1694              	.LVL187:
 299:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 1695              		.loc 1 299 0
 1696 01d5 C744240C 		movl	$1, 12(%rsp)
 1696      01000000 
 1697              	.LVL188:
 1698              	.LBE124:
 267:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int first_xlist = i;
 1699              		.loc 1 267 0
 1700 01dd 7FAB     		jg	.L193
 1701 01df 90       		.p2align 4,,10
 1702              		.p2align 3
 1703              	.L204:
 1704              	.LBE119:
 302:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return (Fl_Font)fl_free_font;
 1705              		.loc 1 302 0
 1706 01e0 8B44240C 		movl	12(%rsp), %eax
 1707 01e4 85C0     		testl	%eax, %eax
 1708 01e6 740B     		je	.L190
 1709              	.LVL189:
 1710              	.L182:
 303:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
 1711              		.loc 1 303 0
 1712 01e8 8B050000 		movl	_ZL12fl_free_font(%rip), %eax
 1712      0000
 1713 01ee E93CFEFF 		jmp	.L178
 1713      FF
 1714              	.L190:
 302:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return (Fl_Font)fl_free_font;
 1715              		.loc 1 302 0
 1716 01f3 4C89FF   		movq	%r15, %rdi
 1717 01f6 E8000000 		call	XFreeFontNames
 1717      00
 1718              	.LVL190:
 1719 01fb EBEB     		jmp	.L182
 1720              	.LVL191:
 1721              	.L201:
 1722              	.LBB125:
 1723              	.LBB126:
 110:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 1724              		.loc 3 110 0
 1725 01fd 488B3500 		movq	fl_encoding(%rip), %rsi
 1725      000000
 1726 0204 488D7C24 		leaq	35(%rsp), %rdi
 1726      23
 1727 0209 BA110000 		movl	$17, %edx
 1727      00
 1728              	.LBE126:
 1729              	.LBE125:
 1730              	.LBB128:
 1731              	.LBB129:
 1732 020e C7442420 		movl	$2959917, 32(%rsp)
 1732      2D2A2D00 
 1733              	.LVL192:
 1734              	.LBE129:
 1735              	.LBE128:
 261:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 1736              		.loc 1 261 0
 1737 0216 488D5C24 		leaq	32(%rsp), %rbx
 1737      20
 1738              	.LVL193:
 1739              	.LBB130:
 1740              	.LBB127:
 110:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 1741              		.loc 3 110 0
 1742 021b E8000000 		call	__strcpy_chk
 1742      00
 1743              	.LVL194:
 1744              	.LBE127:
 1745              	.LBE130:
 1746 0220 E94CFEFF 		jmp	.L179
 1746      FF
 1747              	.LVL195:
 1748              	.L200:
 1749              		.loc 1 304 0
 1750 0225 E8000000 		call	__stack_chk_fail
 1750      00
 1751              	.LVL196:
 1752              		.cfi_endproc
 1753              	.LFE326:
 1755              		.section	.text.unlikely._ZN2Fl9set_fontsEPKc
 1756              	.LCOLDE15:
 1757              		.section	.text._ZN2Fl9set_fontsEPKc
 1758              	.LHOTE15:
 1759              		.section	.text.unlikely._ZN2Fl14get_font_sizesEiRPi,"ax",@progbits
 1760              		.align 2
 1761              	.LCOLDB16:
 1762              		.section	.text._ZN2Fl14get_font_sizesEiRPi,"ax",@progbits
 1763              	.LHOTB16:
 1764              		.align 2
 1765              		.p2align 4,,15
 1766              		.globl	_ZN2Fl14get_font_sizesEiRPi
 1768              	_ZN2Fl14get_font_sizesEiRPi:
 1769              	.LFB327:
 305:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 
 306:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** int Fl::get_font_sizes(Fl_Font fnum, int*& sizep) {
 1770              		.loc 1 306 0
 1771              		.cfi_startproc
 1772              	.LVL197:
 307:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   Fl_Fontdesc *s = fl_fonts+fnum;
 1773              		.loc 1 307 0
 1774 0000 4863C7   		movslq	%edi, %rax
 306:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   Fl_Fontdesc *s = fl_fonts+fnum;
 1775              		.loc 1 306 0
 1776 0003 4156     		pushq	%r14
 1777              		.cfi_def_cfa_offset 16
 1778              		.cfi_offset 14, -16
 1779              		.loc 1 307 0
 1780 0005 488B1500 		movq	fl_fonts(%rip), %rdx
 1780      000000
 306:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   Fl_Fontdesc *s = fl_fonts+fnum;
 1781              		.loc 1 306 0
 1782 000c 4155     		pushq	%r13
 1783              		.cfi_def_cfa_offset 24
 1784              		.cfi_offset 13, -24
 1785 000e 4154     		pushq	%r12
 1786              		.cfi_def_cfa_offset 32
 1787              		.cfi_offset 12, -32
 1788              		.loc 1 307 0
 1789 0010 4C8D2480 		leaq	(%rax,%rax,4), %r12
 306:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   Fl_Fontdesc *s = fl_fonts+fnum;
 1790              		.loc 1 306 0
 1791 0014 55       		pushq	%rbp
 1792              		.cfi_def_cfa_offset 40
 1793              		.cfi_offset 6, -40
 1794 0015 53       		pushq	%rbx
 1795              		.cfi_def_cfa_offset 48
 1796              		.cfi_offset 3, -48
 306:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   Fl_Fontdesc *s = fl_fonts+fnum;
 1797              		.loc 1 306 0
 1798 0016 4989F6   		movq	%rsi, %r14
 1799              		.loc 1 307 0
 1800 0019 49C1E405 		salq	$5, %r12
 1801 001d 4901D4   		addq	%rdx, %r12
 1802              	.LVL198:
 308:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!s->name) s = fl_fonts; // empty slot in table, use entry 0
 1803              		.loc 1 308 0
 1804 0020 49833C24 		cmpq	$0, (%r12)
 1804      00
 1805 0025 4C0F44E2 		cmove	%rdx, %r12
 1806              	.LVL199:
 309:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   if (!s->xlist) {
 1807              		.loc 1 309 0
 1808 0029 4983BC24 		cmpq	$0, 144(%r12)
 1808      90000000 
 1808      00
 1809 0032 0F843701 		je	.L207
 1809      0000
 1810              	.LVL200:
 1811              	.L211:
 310:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     fl_open_display();
 311:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     s->xlist = XListFonts(fl_display, s->name, 100, &(s->n));
 312:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!s->xlist) return 0;
 313:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 314:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int listsize = s->n; if (listsize<0) listsize = -listsize;
 1812              		.loc 1 314 0
 1813 0038 418B8424 		movl	152(%r12), %eax
 1813      98000000 
 1814              	.LVL201:
 1815 0040 99       		cltd
 1816 0041 31D0     		xorl	%edx, %eax
 1817              	.LVL202:
 1818              	.LBB131:
 315:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   static int sizes[128];
 316:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   int numsizes = 0;
 317:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   for (int i = 0; i < listsize; i++) {
 1819              		.loc 1 317 0
 1820 0043 29D0     		subl	%edx, %eax
 1821              	.LVL203:
 1822 0045 0F841901 		je	.L247
 1822      0000
 1823 004b 83E801   		subl	$1, %eax
 1824              	.LVL204:
 1825 004e 31DB     		xorl	%ebx, %ebx
 1826 0050 31ED     		xorl	%ebp, %ebp
 1827 0052 4C8D2CC5 		leaq	8(,%rax,8), %r13
 1827      08000000 
 1828              	.LVL205:
 1829 005a 660F1F44 		.p2align 4,,10
 1829      0000
 1830              		.p2align 3
 1831              	.L224:
 1832              	.LBB132:
 318:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     char *q = s->xlist[i];
 1833              		.loc 1 318 0
 1834 0060 498B8424 		movq	144(%r12), %rax
 1834      90000000 
 319:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     char *d = fl_find_fontsize(q);
 1835              		.loc 1 319 0
 1836 0068 488B3C18 		movq	(%rax,%rbx), %rdi
 1837 006c E8000000 		call	_Z16fl_find_fontsizePc
 1837      00
 1838              	.LVL206:
 320:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!d) continue;
 1839              		.loc 1 320 0
 1840 0071 4885C0   		testq	%rax, %rax
 1841 0074 0F84A600 		je	.L212
 1841      0000
 321:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int s = strtol(d,0,10);
 1842              		.loc 1 321 0
 1843 007a 31F6     		xorl	%esi, %esi
 1844 007c 4889C7   		movq	%rax, %rdi
 1845 007f BA0A0000 		movl	$10, %edx
 1845      00
 1846 0084 E8000000 		call	strtol
 1846      00
 1847              	.LVL207:
 1848              	.LBB133:
 322:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!numsizes || sizes[numsizes-1] < s) {
 1849              		.loc 1 322 0
 1850 0089 85ED     		testl	%ebp, %ebp
 1851              	.LBE133:
 321:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     int s = strtol(d,0,10);
 1852              		.loc 1 321 0
 1853 008b 89C7     		movl	%eax, %edi
 1854              	.LVL208:
 1855              	.LBB143:
 1856              		.loc 1 322 0
 1857 008d 0F84AD00 		je	.L213
 1857      0000
 1858              		.loc 1 322 0 is_stmt 0 discriminator 1
 1859 0093 8D55FF   		leal	-1(%rbp), %edx
 1860 0096 4863CA   		movslq	%edx, %rcx
 1861 0099 8B348D00 		movl	_ZZN2Fl14get_font_sizesEiRPiE5sizes(,%rcx,4), %esi
 1861      000000
 1862 00a0 39F0     		cmpl	%esi, %eax
 1863 00a2 0F8F9800 		jg	.L213
 1863      0000
 1864              	.LVL209:
 1865              	.LBB134:
 323:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       sizes[numsizes++] = s;
 324:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     } else {
 325:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       // insert-sort the new size into list:
 326:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       int n;
 327:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       for (n = numsizes-1; n > 0; n--) if (sizes[n-1] < s) break;
 1866              		.loc 1 327 0 is_stmt 1 discriminator 4
 1867 00a8 85D2     		testl	%edx, %edx
 1868 00aa 7434     		je	.L220
 1869              		.loc 1 327 0 is_stmt 0
 1870 00ac 448D45FE 		leal	-2(%rbp), %r8d
 1871 00b0 4963C8   		movslq	%r8d, %rcx
 1872 00b3 3B048D00 		cmpl	_ZZN2Fl14get_font_sizesEiRPiE5sizes(,%rcx,4), %eax
 1872      000000
 1873 00ba 7E1F     		jle	.L219
 1874 00bc E9A70000 		jmp	.L248
 1874      00
 1875              	.LVL210:
 1876              		.p2align 4,,10
 1877 00c1 0F1F8000 		.p2align 3
 1877      000000
 1878              	.L242:
 1879              		.loc 1 327 0 discriminator 2
 1880 00c8 418D50FF 		leal	-1(%r8), %edx
 1881 00cc 4863CA   		movslq	%edx, %rcx
 1882 00cf 3B3C8D00 		cmpl	_ZZN2Fl14get_font_sizesEiRPiE5sizes(,%rcx,4), %edi
 1882      000000
 1883 00d6 7F77     		jg	.L249
 1884              		.loc 1 327 0
 1885 00d8 4189D0   		movl	%edx, %r8d
 1886              	.LVL211:
 1887              	.L219:
 1888 00db 4585C0   		testl	%r8d, %r8d
 1889 00de 75E8     		jne	.L242
 1890              	.LVL212:
 1891              	.L220:
 1892              	.LBB135:
 328:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (sizes[n] != s) {
 1893              		.loc 1 328 0 is_stmt 1
 1894 00e0 4531C0   		xorl	%r8d, %r8d
 1895 00e3 3B050000 		cmpl	_ZZN2Fl14get_font_sizesEiRPiE5sizes(%rip), %eax
 1895      0000
 1896 00e9 7435     		je	.L212
 1897              	.L216:
 1898              	.LVL213:
 1899              		.loc 1 328 0 is_stmt 0 discriminator 2
 1900 00eb 89EA     		movl	%ebp, %edx
 1901 00ed EB10     		jmp	.L223
 1902              	.LVL214:
 1903 00ef 90       		.p2align 4,,10
 1904              		.p2align 3
 1905              	.L250:
 1906 00f0 83EA02   		subl	$2, %edx
 1907 00f3 4863D2   		movslq	%edx, %rdx
 1908 00f6 8B349500 		movl	_ZZN2Fl14get_font_sizesEiRPiE5sizes(,%rdx,4), %esi
 1908      000000
 1909              	.LBB136:
 1910              	.LBB137:
 329:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	for (int m = numsizes; m > n; m--) sizes[m] = sizes[m-1];
 1911              		.loc 1 329 0 is_stmt 1
 1912 00fd 89CA     		movl	%ecx, %edx
 1913              	.LVL215:
 1914              	.L223:
 1915              		.loc 1 329 0 is_stmt 0 discriminator 2
 1916 00ff 8D4AFF   		leal	-1(%rdx), %ecx
 1917 0102 4863FA   		movslq	%edx, %rdi
 1918 0105 8934BD00 		movl	%esi, _ZZN2Fl14get_font_sizesEiRPiE5sizes(,%rdi,4)
 1918      000000
 1919              	.LVL216:
 1920 010c 4439C1   		cmpl	%r8d, %ecx
 1921 010f 75DF     		jne	.L250
 1922              	.LVL217:
 1923              	.L222:
 1924              	.LBE137:
 330:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	sizes[n] = s;
 1925              		.loc 1 330 0 is_stmt 1
 1926 0111 4D63C0   		movslq	%r8d, %r8
 331:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	numsizes++;
 1927              		.loc 1 331 0
 1928 0114 83C501   		addl	$1, %ebp
 1929              	.LVL218:
 330:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	sizes[n] = s;
 1930              		.loc 1 330 0
 1931 0117 42890485 		movl	%eax, _ZZN2Fl14get_font_sizesEiRPiE5sizes(,%r8,4)
 1931      00000000 
 1932              	.LVL219:
 1933 011f 90       		.p2align 4,,10
 1934              		.p2align 3
 1935              	.L212:
 1936 0120 4883C308 		addq	$8, %rbx
 1937              	.LBE136:
 1938              	.LBE135:
 1939              	.LBE134:
 1940              	.LBE143:
 1941              	.LBE132:
 317:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     char *q = s->xlist[i];
 1942              		.loc 1 317 0 discriminator 2
 1943 0124 4C39EB   		cmpq	%r13, %rbx
 1944 0127 0F8533FF 		jne	.L224
 1944      FFFF
 1945              	.LVL220:
 1946              	.L208:
 1947              	.LBE131:
 332:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       }
 333:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     }
 334:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 335:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   sizep = sizes;
 1948              		.loc 1 335 0
 1949 012d 49C70600 		movq	$_ZZN2Fl14get_font_sizesEiRPiE5sizes, (%r14)
 1949      000000
 336:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   return numsizes;
 1950              		.loc 1 336 0
 1951 0134 89E8     		movl	%ebp, %eax
 1952              	.L210:
 337:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** }
 1953              		.loc 1 337 0
 1954 0136 5B       		popq	%rbx
 1955              		.cfi_remember_state
 1956              		.cfi_def_cfa_offset 40
 1957 0137 5D       		popq	%rbp
 1958              		.cfi_def_cfa_offset 32
 1959 0138 415C     		popq	%r12
 1960              		.cfi_def_cfa_offset 24
 1961              	.LVL221:
 1962 013a 415D     		popq	%r13
 1963              		.cfi_def_cfa_offset 16
 1964 013c 415E     		popq	%r14
 1965              		.cfi_def_cfa_offset 8
 1966              	.LVL222:
 1967 013e C3       		ret
 1968              	.LVL223:
 1969 013f 90       		.p2align 4,,10
 1970              		.p2align 3
 1971              	.L213:
 1972              		.cfi_restore_state
 1973              	.LBB148:
 1974              	.LBB146:
 1975              	.LBB144:
 323:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     } else {
 1976              		.loc 1 323 0
 1977 0140 4863D5   		movslq	%ebp, %rdx
 1978 0143 83C501   		addl	$1, %ebp
 1979              	.LVL224:
 1980 0146 89049500 		movl	%eax, _ZZN2Fl14get_font_sizesEiRPiE5sizes(,%rdx,4)
 1980      000000
 1981 014d EBD1     		jmp	.L212
 1982              	.LVL225:
 1983              	.L249:
 1984 014f 4963D0   		movslq	%r8d, %rdx
 1985 0152 8B0C9500 		movl	_ZZN2Fl14get_font_sizesEiRPiE5sizes(,%rdx,4), %ecx
 1985      000000
 1986              	.L217:
 1987              	.LBB141:
 1988              	.LBB140:
 328:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	for (int m = numsizes; m > n; m--) sizes[m] = sizes[m-1];
 1989              		.loc 1 328 0
 1990 0159 39C8     		cmpl	%ecx, %eax
 1991 015b 74C3     		je	.L212
 1992              	.LVL226:
 1993              	.LBB139:
 1994              	.LBB138:
 329:fltk-1.3.4-1/src/fl_set_fonts_x.cxx **** 	sizes[n] = s;
 1995              		.loc 1 329 0 discriminator 3
 1996 015d 4139E8   		cmpl	%ebp, %r8d
 1997 0160 7C89     		jl	.L216
 1998 0162 EBAD     		jmp	.L222
 1999              	.LVL227:
 2000              	.L247:
 2001              	.LBE138:
 2002              	.LBE139:
 2003              	.LBE140:
 2004              	.LBE141:
 2005              	.LBE144:
 2006              	.LBE146:
 2007              	.LBE148:
 316:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   for (int i = 0; i < listsize; i++) {
 2008              		.loc 1 316 0
 2009 0164 31ED     		xorl	%ebp, %ebp
 2010 0166 EBC5     		jmp	.L208
 2011              	.LVL228:
 2012              	.L248:
 2013              	.LBB149:
 2014              	.LBB147:
 2015              	.LBB145:
 2016              	.LBB142:
 327:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****       if (sizes[n] != s) {
 2017              		.loc 1 327 0
 2018 0168 89F1     		movl	%esi, %ecx
 2019 016a 4189D0   		movl	%edx, %r8d
 2020 016d EBEA     		jmp	.L217
 2021              	.LVL229:
 2022              	.L207:
 2023              	.LBE142:
 2024              	.LBE145:
 2025              	.LBE147:
 2026              	.LBE149:
 310:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     s->xlist = XListFonts(fl_display, s->name, 100, &(s->n));
 2027              		.loc 1 310 0
 2028 016f E8000000 		call	_Z15fl_open_displayv
 2028      00
 2029              	.LVL230:
 311:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!s->xlist) return 0;
 2030              		.loc 1 311 0
 2031 0174 498B3424 		movq	(%r12), %rsi
 2032 0178 488B3D00 		movq	fl_display(%rip), %rdi
 2032      000000
 2033 017f 498D8C24 		leaq	152(%r12), %rcx
 2033      98000000 
 2034 0187 BA640000 		movl	$100, %edx
 2034      00
 2035 018c E8000000 		call	XListFonts
 2035      00
 2036              	.LVL231:
 312:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 2037              		.loc 1 312 0
 2038 0191 4885C0   		testq	%rax, %rax
 311:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****     if (!s->xlist) return 0;
 2039              		.loc 1 311 0
 2040 0194 49898424 		movq	%rax, 144(%r12)
 2040      90000000 
 312:fltk-1.3.4-1/src/fl_set_fonts_x.cxx ****   }
 2041              		.loc 1 312 0
 2042 019c 0F8596FE 		jne	.L211
 2042      FFFF
 2043 01a2 31C0     		xorl	%eax, %eax
 2044 01a4 EB90     		jmp	.L210
 2045              		.cfi_endproc
 2046              	.LFE327:
 2048              		.section	.text.unlikely._ZN2Fl14get_font_sizesEiRPi
 2049              	.LCOLDE16:
 2050              		.section	.text._ZN2Fl14get_font_sizesEiRPi
 2051              	.LHOTE16:
 2052              		.section	.bss._ZZN2Fl14get_font_sizesEiRPiE5sizes,"aw",@nobits
 2053              		.align 32
 2056              	_ZZN2Fl14get_font_sizesEiRPiE5sizes:
 2057 0000 00000000 		.zero	512
 2057      00000000 
 2057      00000000 
 2057      00000000 
 2057      00000000 
 2058              		.section	.data._ZL12fl_free_font,"aw",@progbits
 2059              		.align 4
 2062              	_ZL12fl_free_font:
 2063 0000 10000000 		.long	16
 2064              		.text
 2065              	.Letext0:
 2066              		.section	.text.unlikely._ZL9attributeiPKc
 2067              	.Letext_cold0:
 2068              		.file 5 "fltk-1.3.4-1/FL/fl_types.h"
 2069              		.file 6 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2070              		.file 7 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2071              		.file 8 "/usr/include/libio.h"
 2072              		.file 9 "fltk-1.3.4-1/FL/Enumerations.H"
 2073              		.file 10 "fltk-1.3.4-1/FL/Fl.H"
 2074              		.file 11 "fltk-1.3.4-1/FL/Fl_Widget.H"
 2075              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 2076              		.file 13 "/usr/include/X11/X.h"
 2077              		.file 14 "/usr/include/X11/Xlib.h"
 2078              		.file 15 "fltk-1.3.4-1/src/Xutf8.h"
 2079              		.file 16 "fltk-1.3.4-1/src/Fl_Font.H"
 2080              		.file 17 "/usr/include/stdio.h"
 2081              		.file 18 "fltk-1.3.4-1/FL/x.H"
 2082              		.file 19 "fltk-1.3.4-1/src/flstring.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_set_fonts.cxx
     /tmp/ccKvt8vB.s:26     .text._ZL9attributeiPKc:0000000000000000 _ZL9attributeiPKc
     /tmp/ccKvt8vB.s:196    .text._ZL12use_registryPKc:0000000000000000 _ZL12use_registryPKc
     /tmp/ccKvt8vB.s:240    .text.ultrasort:0000000000000000 ultrasort
     /tmp/ccKvt8vB.s:725    .text._ZL12to_canonicalPcPKcm.constprop.0:0000000000000000 _ZL12to_canonicalPcPKcm.constprop.0
     /tmp/ccKvt8vB.s:930    .text._ZN2Fl13get_font_nameEiPi:0000000000000000 _ZN2Fl13get_font_nameEiPi
     /tmp/ccKvt8vB.s:1466   .text._ZN2Fl9set_fontsEPKc:0000000000000000 _ZN2Fl9set_fontsEPKc
     /tmp/ccKvt8vB.s:2062   .data._ZL12fl_free_font:0000000000000000 _ZL12fl_free_font
     /tmp/ccKvt8vB.s:1768   .text._ZN2Fl14get_font_sizesEiRPi:0000000000000000 _ZN2Fl14get_font_sizesEiRPi
     /tmp/ccKvt8vB.s:2056   .bss._ZZN2Fl14get_font_sizesEiRPiE5sizes:0000000000000000 _ZZN2Fl14get_font_sizesEiRPiE5sizes
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
fl_encoding
strcmp
strtol
_Z12fl_font_wordPKci
__stack_chk_fail
_Z16fl_find_fontsizePc
strncpy
fl_strlcpy
fl_fonts
strstr
__strncpy_chk
fl_strlcat
_Z15fl_open_displayv
fl_display
XListFonts
qsort
strdup
_ZN2Fl8set_fontEiPKc
XFreeFontNames
__strcpy_chk
