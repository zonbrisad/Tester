/**
 * -----------------------------------------------------------------
 * @file  def.h
 * @brief Makeplate common definitions file.
 *
 *
 * @author Peter Malmberg <peter.malmberg@gmail.com>
 *
 * License MIT
 * -----------------------------------------------------------------
 */

// Settings  ---------------------------------------------------------------

// Enable all debugmessages
//#define DEBUGALL

// Enable debug messsage printouts
//#define DEBUGPRINT

// Enable warning messsage printouts
//#define WARNINGPRINT

// Enable error messsage printouts
//#define ERRORPRINT

// Enable info messsage printouts
//#define INFOPRINT

// Enable fatal messsage printouts
//#define FATALPRINT

// uncomment to remove color printout on debug messages
//#define NO_DEBUG_COLOR

// Platform detection ------------------------------------------------------

#if defined(unix) || defined(__unix__) || defined(__unix)
#define DEF_PLATFORM_UNIX
#endif

#if defined(__AVR__) 
#define DEF_PLATFORM_AVR
#endif


#if defined(__GNUC__)
# if defined(__GNUC_PATCHLEVEL__)
#  define __GNUC_VERSION__ STRINGIZE(__GNUC__)"."STRINGIZE(__GNUC_MINOR__)"."STRINGIZE(__GNUC_PATCHLEVEL__)
# else
#  define __GNUC_VERSION__ STRINGIZE(__GNUC__)"."STRINGIZE(__GNUC_MINOR__)
# endif
#endif


// Includes ---------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


#ifdef DEF_PLATFORM_UNIX
#include <unistd.h>
#include <sys/types.h>
#endif

#ifdef DEF_PLATFORM_AVR
#include "def_avr.h"
#endif


#ifndef DEF_H_
#define DEF_H_

// Types ------------------------------------------------------------------

typedef int8_t                  S8 ;  //!< 8-bit signed integer.
typedef uint8_t                 U8 ;  //!< 8-bit unsigned integer.
typedef int16_t                 S16;  //!< 16-bit signed integer.
typedef uint16_t                U16;  //!< 16-bit unsigned integer.
typedef uint16_t                le16_t;
typedef uint16_t                be16_t;
typedef int32_t                 S32;  //!< 32-bit signed integer.
typedef uint32_t                U32;  //!< 32-bit unsigned integer.
typedef uint32_t                le32_t;
typedef uint32_t                be32_t;
typedef int64_t                 S64;  //!< 64-bit signed integer.
typedef uint64_t                U64;  //!< 64-bit unsigned integer.
typedef float                   F32;  //!< 32-bit floating-point number.
typedef double                  F64;  //!< 64-bit floating-point number.
typedef uint32_t                iram_size_t;


/*! \name Aliasing Aggregate Types
 */
//! @{

//! 16-bit union.
typedef union
{
  S16 s16   ;
  U16 u16   ;
  S8  s8 [2];
  U8  u8 [2];
} Union16;

//! 32-bit union.
typedef union
{
  S32 s32   ;
  U32 u32   ;
  S16 s16[2];
  U16 u16[2];
  S8  s8 [4];
  U8  u8 [4];
} Union32;

//! 64-bit union.
typedef union
{
  S64 s64   ;
  U64 u64   ;
  S32 s32[2];
  U32 u32[2];
  S16 s16[4];
  U16 u16[4];
  S8  s8 [8];
  U8  u8 [8];
} Union64;

//! Union of pointers to 64-, 32-, 16- and 8-bit unsigned integers.
typedef union
{
  S64 *s64ptr;
  U64 *u64ptr;
  S32 *s32ptr;
  U32 *u32ptr;
  S16 *s16ptr;
  U16 *u16ptr;
  S8  *s8ptr ;
  U8  *u8ptr ;
} UnionPtr;

//! Union of pointers to volatile 64-, 32-, 16- and 8-bit unsigned integers.
typedef union
{
  volatile S64 *s64ptr;
  volatile U64 *u64ptr;
  volatile S32 *s32ptr;
  volatile U32 *u32ptr;
  volatile S16 *s16ptr;
  volatile U16 *u16ptr;
  volatile S8  *s8ptr ;
  volatile U8  *u8ptr ;
} UnionVPtr;

//! Union of pointers to constant 64-, 32-, 16- and 8-bit unsigned integers.
typedef union
{
  const S64 *s64ptr;
  const U64 *u64ptr;
  const S32 *s32ptr;
  const U32 *u32ptr;
  const S16 *s16ptr;
  const U16 *u16ptr;
  const S8  *s8ptr ;
  const U8  *u8ptr ;
} UnionCPtr;

//! Union of pointers to constant volatile 64-, 32-, 16- and 8-bit unsigned integers.
typedef union
{
  const volatile S64 *s64ptr;
  const volatile U64 *u64ptr;
  const volatile S32 *s32ptr;
  const volatile U32 *u32ptr;
  const volatile S16 *s16ptr;
  const volatile U16 *u16ptr;
  const volatile S8  *s8ptr ;
  const volatile U8  *u8ptr ;
} UnionCVPtr;

//! Structure of pointers to 64-, 32-, 16- and 8-bit unsigned integers.
typedef struct
{
  S64 *s64ptr;
  U64 *u64ptr;
  S32 *s32ptr;
  U32 *u32ptr;
  S16 *s16ptr;
  U16 *u16ptr;
  S8  *s8ptr ;
  U8  *u8ptr ;
} StructPtr;

//! Structure of pointers to volatile 64-, 32-, 16- and 8-bit unsigned integers.
typedef struct
{
  volatile S64 *s64ptr;
  volatile U64 *u64ptr;
  volatile S32 *s32ptr;
  volatile U32 *u32ptr;
  volatile S16 *s16ptr;
  volatile U16 *u16ptr;
  volatile S8  *s8ptr ;
  volatile U8  *u8ptr ;
} StructVPtr;

//! Structure of pointers to constant 64-, 32-, 16- and 8-bit unsigned integers.
typedef struct
{
  const S64 *s64ptr;
  const U64 *u64ptr;
  const S32 *s32ptr;
  const U32 *u32ptr;
  const S16 *s16ptr;
  const U16 *u16ptr;
  const S8  *s8ptr ;
  const U8  *u8ptr ;
} StructCPtr;

//! Structure of pointers to constant volatile 64-, 32-, 16- and 8-bit unsigned integers.
typedef struct
{
  const volatile S64 *s64ptr;
  const volatile U64 *u64ptr;
  const volatile S32 *s32ptr;
  const volatile U32 *u32ptr;
  const volatile S16 *s16ptr;
  const volatile U16 *u16ptr;
  const volatile S8  *s8ptr ;
  const volatile U8  *u8ptr ;
} StructCVPtr;

//! @}

//#endif  // #ifndef __ASSEMBLY__

/*! \name Usual Constants
 */
//! @{
#define DISABLE   0
#define ENABLE    1
#ifndef __cplusplus
#if !defined(__bool_true_false_are_defined)
#define false     0
#define true      1
#endif
#endif
#define PASS      0
#define FAIL      1
#define LOW       0
#define HIGH      1
//! @}


#ifndef bool
typedef uint8_t bool;
#endif

typedef signed char         schar;
typedef unsigned char       uchar;
typedef unsigned int        uint;
typedef unsigned short      ushort;
typedef unsigned long       ulong;


#ifndef false
#define false 0
#endif

#ifndef true
#define true 1
#endif


#ifndef ulong
#define ulong uint32_t
#endif
 

// Type min/max -------------------------------------------------------------

#ifndef MINSCHAR
#define MINSCHAR       ((schar)(-MAXSCHAR - 1))   ///< Signed character min value.
#endif
#ifndef MAXSCHAR
#define MAXSCHAR       ((schar)127)               ///< Signed character max value.
#endif

#ifndef MINUCHAR
#define MINUCHAR       ((uchar)0)                 ///< Unsigned character min value.
#endif
#ifndef MAXUCHAR
#define MAXUCHAR       ((uchar)255)               ///< Unsigned character max value.
#endif

#ifndef MINCHAR
#define MINCHAR        ((char)0)                  ///< Character min value (assuming unsigned).
#endif
#ifndef MAXCHAR
#define MAXCHAR        ((char)255)                ///< Character max value (assuming unsigned).
#endif

#ifndef MINSSHORT
#define MINSSHORT      ((short)(-MAXSSHORT - 1))  ///< Signed short integer min value.
#endif
#ifndef MAXSSHORT
#define MAXSSHORT      ((short)32767)             ///< Signed short integer max value.
#endif

#ifndef MINUSHORT
#define MINUSHORT      ((ushort)0)                ///< Unsigned short integer min value.
#endif
#ifndef MAXUSHORT
#define MAXUSHORT      ((ushort)65535)            ///< Unsigned short integer max value.
#endif

#ifndef MINSHORT
#define MINSHORT       ((short)(-MAXSHORT - 1))   ///< Short integer min value.
#endif
#ifndef MAXSHORT
#define MAXSHORT       ((short)32767)             ///< Short integer max value.
#endif

#ifndef MINSINT
#define MINSINT        ((int)(-MAXSINT - 1))      ///< Signed integer min value.
#endif
#ifndef MAXSINT
#define MAXSINT        ((int)2147483647)          ///< Signed integer max value.
#endif

#ifndef MINUINT
#define MINUINT        ((uint)0)                  ///< Unsigned integer min value.
#endif
#ifndef MAXUINT
#define MAXUINT        ((uint)4294967295)         ///< Unsigned integer max value.
#endif

#ifndef MININT
#define MININT         ((int)(-MAXINT - 1))       ///< Integer min value.
#endif
#ifndef MAXINT
#define MAXINT         ((int)2147483647)          ///< Integer max value.
#endif

#ifndef MINSLONG
#define MINSLONG       ((long)(-MAXSLONG - 1L))   ///< Signed long integer min value.
#endif
#ifndef MAXSLONG
#define MAXSLONG       ((long)2147483647)         ///< Signed long integer max value.
#endif

#ifndef MINULONG
#define MINULONG       ((ulong)0)                 ///< Unsigned long integer min value.
#endif
#ifndef MAXULONG
#define MAXULONG       ((ulong)4294967295)        ///< Unsigned long integer max value.
#endif

#ifndef MINLONG
#define MINLONG        ((long)(-MAXLONG - 1L))    ///< Long integer min value.
#endif
#ifndef MAXLONG
#define MAXLONG        ((long)2147483647)         ///< Long integer max value.
#endif


#ifndef FALSE
#define FALSE   (0)
#endif

#ifndef TRUE
#define TRUE    (1)
#endif

/*! \name Mathematics
 *
 * The same considerations as for clz and ctz apply here but GCC does not
 * provide built-in functions to access the assembly instructions abs, min and
 * max and it does not produce them by itself in most cases, so two sets of
 * macros are defined here:
 *   - Abs, Min and Max to apply to constant expressions (values known at
 *     compile time);
 *   - abs, min and max to apply to non-constant expressions (values unknown at
 *     compile time), abs is found in stdlib.h.
 */
//! @{

/*! \brief Takes the absolute value of \a a.
 *
 * \param a Input value.
 *
 * \return Absolute value of \a a.
 *
 * \note More optimized if only used with values known at compile time.
 */
#define Abs(a)              (((a) <  0 ) ? -(a) : (a))

/*! \brief Takes the minimal value of \a a and \a b.
 *
 * \param a Input value.
 * \param b Input value.
 *
 * \return Minimal value of \a a and \a b.
 *
 * \note More optimized if only used with values known at compile time.
 */
#define Min(a, b)           (((a) < (b)) ?  (a) : (b))

/*! \brief Takes the maximal value of \a a and \a b.
 *
 * \param a Input value.
 * \param b Input value.
 *
 * \return Maximal value of \a a and \a b.
 *
 * \note More optimized if only used with values known at compile time.
 */
#define Max(a, b)           (((a) > (b)) ?  (a) : (b))

// abs() is already defined by stdlib.h

/*! \brief Takes the minimal value of \a a and \a b.
 *
 * \param a Input value.
 * \param b Input value.
 *
 * \return Minimal value of \a a and \a b.
 *
 * \note More optimized if only used with values unknown at compile time.
 */
#define min(a, b)   Min(a, b)

/*! \brief Takes the maximal value of \a a and \a b.
 *
 * \param a Input value.
 * \param b Input value.
 *
 * \return Maximal value of \a a and \a b.
 *
 * \note More optimized if only used with values unknown at compile time.
 */
#define max(a, b)   Max(a, b)

//! @}


#undef  Clamp
#define Clamp(x, low, high)  (((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))



/*! \name Endianism Conversion
 *
 * The same considerations as for clz and ctz apply here but GCC's
 * __builtin_bswap_32 and __builtin_bswap_64 do not behave like macros when
 * applied to constant expressions, so two sets of macros are defined here:
 *   - Swap16, Swap32 and Swap64 to apply to constant expressions (values known
 *     at compile time);
 *   - swap16, swap32 and swap64 to apply to non-constant expressions (values
 *     unknown at compile time).
 */
//! @{

/*! \brief Toggles the endianism of \a u16 (by swapping its bytes).
 *
 * \param u16 U16 of which to toggle the endianism.
 *
 * \return Value resulting from \a u16 with toggled endianism.
 *
 * \note More optimized if only used with values known at compile time.
 */
#define Swap16(u16) ((U16)(((U16)(u16) >> 8) |\
                           ((U16)(u16) << 8)))

/*! \brief Toggles the endianism of \a u32 (by swapping its bytes).
 *
 * \param u32 U32 of which to toggle the endianism.
 *
 * \return Value resulting from \a u32 with toggled endianism.
 *
 * \note More optimized if only used with values known at compile time.
 */
#define Swap32(u32) ((U32)(((U32)Swap16((U32)(u32) >> 16)) |\
                           ((U32)Swap16((U32)(u32)) << 16)))

/*! \brief Toggles the endianism of \a u64 (by swapping its bytes).
 *
 * \param u64 U64 of which to toggle the endianism.
 *
 * \return Value resulting from \a u64 with toggled endianism.
 *
 * \note More optimized if only used with values known at compile time.
 */
#define Swap64(u64) ((U64)(((U64)Swap32((U64)(u64) >> 32)) |\
                           ((U64)Swap32((U64)(u64)) << 32)))

/*! \brief Toggles the endianism of \a u16 (by swapping its bytes).
 *
 * \param u16 U16 of which to toggle the endianism.
 *
 * \return Value resulting from \a u16 with toggled endianism.
 *
 * \note More optimized if only used with values unknown at compile time.
 */
#define swap16(u16) Swap16(u16)

/*! \brief Toggles the endianism of \a u32 (by swapping its bytes).
 *
 * \param u32 U32 of which to toggle the endianism.
 *
 * \return Value resulting from \a u32 with toggled endianism.
 *
 * \note More optimized if only used with values unknown at compile time.
 */
#if (defined __GNUC__)
#   define swap32(u32) ((U32)__builtin_bswap32((U32)(u32)))
#else
#   define swap32(u32) Swap32(u32)
#endif


#undef  isWithin
#define isWithin(val, min, max) ((val>=min) && (val<=max))

#undef  isOutside
#define isOutside(val, min, max) (!isWithin(val, min, max))


#ifndef NULL
#define NULL            (void)0
#endif

// Bit manipulation ---------------------------------------------------------

/*! \name Bit-Field Handling
 */
//! @{

/*! \brief Reads the bits of a value specified by a given bit-mask.
 *
 * \param value Value to read bits from.
 * \param mask  Bit-mask indicating bits to read.
 *
 * \return Read bits.
 */
#define Rd_bits( value, mask)        ((value) & (mask))

/*! \brief Writes the bits of a C lvalue specified by a given bit-mask.
 *
 * \param lvalue  C lvalue to write bits to.
 * \param mask    Bit-mask indicating bits to write.
 * \param bits    Bits to write.
 *
 * \return Resulting value with written bits.
 */
#define Wr_bits(lvalue, mask, bits)  ((lvalue) = ((lvalue) & ~(mask)) |\
                                                 ((bits  ) &  (mask)))

/*! \brief Tests the bits of a value specified by a given bit-mask.
 *
 * \param value Value of which to test bits.
 * \param mask  Bit-mask indicating bits to test.
 *
 * \return \c 1 if at least one of the tested bits is set, else \c 0.
 */
#define Tst_bits( value, mask)  (Rd_bits(value, mask) != 0)

/*! \brief Clears the bits of a C lvalue specified by a given bit-mask.
 *
 * \param lvalue  C lvalue of which to clear bits.
 * \param mask    Bit-mask indicating bits to clear.
 *
 * \return Resulting value with cleared bits.
 */
#define Clr_bits(lvalue, mask)  ((lvalue) &= ~(mask))

/*! \brief Sets the bits of a C lvalue specified by a given bit-mask.
 *
 * \param lvalue  C lvalue of which to set bits.
 * \param mask    Bit-mask indicating bits to set.
 *
 * \return Resulting value with set bits.
 */
#define Set_bits(lvalue, mask)  ((lvalue) |=  (mask))

/*! \brief Toggles the bits of a C lvalue specified by a given bit-mask.
 *
 * \param lvalue  C lvalue of which to toggle bits.
 * \param mask    Bit-mask indicating bits to toggle.
 *
 * \return Resulting value with toggled bits.
 */
#define Tgl_bits(lvalue, mask)  ((lvalue) ^=  (mask))

/*! \brief Reads the bit-field of a value specified by a given bit-mask.
 *
 * \param value Value to read a bit-field from.
 * \param mask  Bit-mask indicating the bit-field to read.
 *
 * \return Read bit-field.
 */
#define Rd_bitfield( value, mask)           (Rd_bits( value, mask) >> ctz(mask))

/*! \brief Writes the bit-field of a C lvalue specified by a given bit-mask.
 *
 * \param lvalue    C lvalue to write a bit-field to.
 * \param mask      Bit-mask indicating the bit-field to write.
 * \param bitfield  Bit-field to write.
 *
 * \return Resulting value with written bit-field.
 */
#define Wr_bitfield(lvalue, mask, bitfield) (Wr_bits(lvalue, mask, (U32)(bitfield) << ctz(mask)))

//! @}


/*! \name Zero-Bit Counting
 *
 * Under GCC, __builtin_clz and __builtin_ctz behave like macros when
 * applied to constant expressions (values known at compile time), so they are
 * more optimized than the use of the corresponding assembly instructions and
 * they can be used as constant expressions e.g. to initialize objects having
 * static storage duration, and like the corresponding assembly instructions
 * when applied to non-constant expressions (values unknown at compile time), so
 * they are more optimized than an assembly periphrasis. Hence, clz and ctz
 * ensure a possible and optimized behavior for both constant and non-constant
 * expressions.
 */
//! @{

/*! \brief Counts the leading zero bits of the given value considered as a 32-bit integer.
 *
 * \param u Value of which to count the leading zero bits.
 *
 * \return The count of leading zero bits in \a u.
 */
#if (defined __GNUC__) || (defined __CC_ARM)
#   define clz(u)              __builtin_clz(u)
#elif (defined __ICCARM__)
#   define clz(u)              __CLZ(u)
#else
#   define clz(u)              (((u) == 0)          ? 32 : \
                                ((u) & (1ul << 31)) ?  0 : \
                                ((u) & (1ul << 30)) ?  1 : \

                                ((u) & (1ul << 29)) ?  2 : \
                                ((u) & (1ul << 28)) ?  3 : \
                                ((u) & (1ul << 27)) ?  4 : \
                                ((u) & (1ul << 26)) ?  5 : \
                                ((u) & (1ul << 25)) ?  6 : \
                                ((u) & (1ul << 24)) ?  7 : \
                                ((u) & (1ul << 23)) ?  8 : \
                                ((u) & (1ul << 22)) ?  9 : \
                                ((u) & (1ul << 21)) ? 10 : \
                                ((u) & (1ul << 20)) ? 11 : \
                                ((u) & (1ul << 19)) ? 12 : \
                                ((u) & (1ul << 18)) ? 13 : \
                                ((u) & (1ul << 17)) ? 14 : \
                                ((u) & (1ul << 16)) ? 15 : \
                                ((u) & (1ul << 15)) ? 16 : \
                                ((u) & (1ul << 14)) ? 17 : \
                                ((u) & (1ul << 13)) ? 18 : \
                                ((u) & (1ul << 12)) ? 19 : \
                                ((u) & (1ul << 11)) ? 20 : \
                                ((u) & (1ul << 10)) ? 21 : \
                                ((u) & (1ul <<  9)) ? 22 : \
                                ((u) & (1ul <<  8)) ? 23 : \
                                ((u) & (1ul <<  7)) ? 24 : \
                                ((u) & (1ul <<  6)) ? 25 : \
                                ((u) & (1ul <<  5)) ? 26 : \
                                ((u) & (1ul <<  4)) ? 27 : \
                                ((u) & (1ul <<  3)) ? 28 : \
                                ((u) & (1ul <<  2)) ? 29 : \
                                ((u) & (1ul <<  1)) ? 30 : \
                                31)
#endif

/*! \brief Counts the trailing zero bits of the given value considered as a 32-bit integer.
 *
 * \param u Value of which to count the trailing zero bits.
 *
 * \return The count of trailing zero bits in \a u.
 */
#if (defined __GNUC__) || (defined __CC_ARM)
#   define ctz(u)              __builtin_ctz(u)
#else
#   define ctz(u)              ((u) & (1ul <<  0) ?  0 : \
                                (u) & (1ul <<  1) ?  1 : \
                                (u) & (1ul <<  2) ?  2 : \
                                (u) & (1ul <<  3) ?  3 : \
                                (u) & (1ul <<  4) ?  4 : \
                                (u) & (1ul <<  5) ?  5 : \
                                (u) & (1ul <<  6) ?  6 : \
                                (u) & (1ul <<  7) ?  7 : \
                                (u) & (1ul <<  8) ?  8 : \
                                (u) & (1ul <<  9) ?  9 : \
                                (u) & (1ul << 10) ? 10 : \
                                (u) & (1ul << 11) ? 11 : \
                                (u) & (1ul << 12) ? 12 : \
                                (u) & (1ul << 13) ? 13 : \
                                (u) & (1ul << 14) ? 14 : \
                                (u) & (1ul << 15) ? 15 : \
                                (u) & (1ul << 16) ? 16 : \
                                (u) & (1ul << 17) ? 17 : \
                                (u) & (1ul << 18) ? 18 : \
                                (u) & (1ul << 19) ? 19 : \
                                (u) & (1ul << 20) ? 20 : \
                                (u) & (1ul << 21) ? 21 : \
                                (u) & (1ul << 22) ? 22 : \
                                (u) & (1ul << 23) ? 23 : \
                                (u) & (1ul << 24) ? 24 : \
                                (u) & (1ul << 25) ? 25 : \
                                (u) & (1ul << 26) ? 26 : \
                                (u) & (1ul << 27) ? 27 : \
                                (u) & (1ul << 28) ? 28 : \
                                (u) & (1ul << 29) ? 29 : \
                                (u) & (1ul << 30) ? 30 : \
                                (u) & (1ul << 31) ? 31 : \
                                32)
#endif

//! @}


/*! \name Bit Reversing
 */
//! @{

/*! \brief Reverses the bits of \a u8.
 *
 * \param u8  U8 of which to reverse the bits.
 *
 * \return Value resulting from \a u8 with reversed bits.
 */
#define bit_reverse8(u8)    ((U8)(bit_reverse32((U8)(u8)) >> 24))

/*! \brief Reverses the bits of \a u16.
 *
 * \param u16 U16 of which to reverse the bits.
 *
 * \return Value resulting from \a u16 with reversed bits.
 */
#define bit_reverse16(u16)  ((U16)(bit_reverse32((U16)(u16)) >> 16))

/*! \brief Reverses the bits of \a u32.
 *
 * \param u32 U32 of which to reverse the bits.
 *
 * \return Value resulting from \a u32 with reversed bits.
 */
#define bit_reverse32(u32)   __RBIT(u32)

/*! \brief Reverses the bits of \a u64.
 *
 * \param u64 U64 of which to reverse the bits.
 *
 * \return Value resulting from \a u64 with reversed bits.
 */
#define bit_reverse64(u64)  ((U64)(((U64)bit_reverse32((U64)(u64) >> 32)) |\
                                   ((U64)bit_reverse32((U64)(u64)) << 32)))

//! @}



//#define BIT_IS_SET(v, bit)   ((v) & (bit))
//#define BIT_IS_CLEAR(v, bit) !(BIT_IS_SET(v, bit))

//#define BIT_SET(v, bit)      ((v) |= (bit))
//#define BIT_CLEAR(v, bit)    ((v) &= ~(bit))

// Special character definitions --------------------------------------------

#define NUL             0
#define SOH             1
#define STX             2
#define ETX             3
#define EOT             4
#define ENQ             5
#define ACK             6
#define BEL             7
#define BS              8
#define HT              9
#define LF              10
#define VT              11
#define FF              12
#define CR              13
#define SO              14
#define SI              15
#define DLE             16
#define DC1             17
#define DC2             18
#define DC3             19
#define DC4             20
#define NAK             21
#define SYN             22
#define ETB             23
#define CAN             24
#define EM              25
#define SUB             26
#define ESC             27
#define FS              28
#define GS              29
//#define RS            30
//#define US              31


//  Unix Signal signals -------------------------------------------------

#define SIGHUP          1       // Hangup
#define SIGINT          2       // Interrupt
#define SIGQUIT         3       // Quit and dump core
#define SIGILL          4       // Illegal instruction
#define SIGTRAP         5       // Trace/breakpoint trap
#define SIGABRT         6       // Process aborted
#define SIGBUS          7       // Bus error: "access to undefined portion of memory object"
#define SIGFPE          8       // Floating point exception: "erroneous arithmetic operation"
#define SIGKILL         9       // Kill (terminate immediately)
#define SIGUSR1         10      // User-defined 1
#define SIGSEGV         11      // Segmentation violation
#define SIGUSR2         12      // User-defined 2
#define SIGPIPE         13      // Write to pipe with no one reading
#define SIGALRM         14      // Signal raised by alarm
#define SIGTERM         15      // Termination (request to terminate)
#define SIGCHLD         17      // Child process terminated, stopped (or continued*)
#define SIGCONT         18      // Continue if stopped
#define SIGSTOP         19      // Stop executing temporarily
#define SIGTSTP         20      // Terminal stop signal
#define SIGTTIN         21      // Background process attempting to read from tty ("in")
#define SIGTTOU         22      // Background process attempting to write to tty ("out")
#define SIGURG          23      // Urgent data available on socket
#define SIGXCPU         24      // CPU time limit exceeded
#define SIGXFSZ         25      // File size limit exceeded
#define SIGVTALRM       26      // Signal raised by timer counting virtual time: "virtual timer expired"
#define SIGPROF         27      // Profiling timer expired
//#define SIGPOLL         29      // Pollable event
#define SIGSYS          31      // Bad syscall


// ANSI color codes ---------------------------------------------------------

#define E_OK            "\033[0;32m"
#define E_WARN          "\033[33;01m"
#define E_ERROR         "\033[31;01m"

#define E_BLACK         "\033[0;300m"
#define E_RED           "\033[0;31m"
#define E_GREEN         "\033[0;32m"
#define E_YELLOW        "\033[0;33m"
#define E_BLUE          "\033[0;34m"
#define E_MAGENTA       "\033[0;35m"
#define E_CYAN          "\033[0;36m"
#define E_GRAY          "\033[0;37m"
#define E_DARKGRAY      "\033[1;30m"
#define E_BR_RED        "\033[1;31m"
#define E_BR_GREEN      "\033[1;32m"
#define E_BR_YELLOW     "\033[1;33m"
#define E_BR_BLUE       "\033[1;34m"
#define E_BR_MAGENTA    "\033[1;35m"
#define E_BR_CYAN       "\033[1;36m"
#define E_WHITE         "\033[1;37m"

#define E_ON_BLACK      "\033[40m"
#define E_ON_RED        "\033[41m"
#define E_ON_GREEN      "\033[42m"
#define E_ON_YELLOW     "\033[43m"
#define E_ON_BLUE       "\033[44m"
#define E_ON_MAGENTA    "\033[45m"
#define E_ON_CYAN       "\033[46m"
#define E_ON_WHITE      "\033[1;47m"

// ANSI Text attributes
#define E_ATTR_BOLD      "\e[1m"
#define E_ATTR_LOWI      "\e[2m"
#define E_ATTR_UNDERLINE "\e[4m"
#define E_ATTR_BLINK     "\e[5m"
#define E_ATTR_REVERSE   "\e[7m"


#define E_END           "\033[0m"
#define E_CLEAR         "\033[2J"
#define E_RESET         "\033c"

#define E_WONR "\33[1;47\033[1;31m"

// ANSI movement codes ------------------------------------------------------

#define E_CUR_RETURN  "\033[;0F"      // cursor return
#define E_CUR_UP      "\033[;0A"      // cursor up
#define E_CUR_DOWN    "\033[;0B"      // cursor down
#define E_CUR_FORWARD "\033[;0C"      // cursor forward
#define E_CUR_BACK    "\033[;0D"      // cursor back

#define E_HIDE_CURSOR "\033[?25l"     // hide cursor
#define E_SHOW_CURSOR "\033[?25h"     // show cursor


// Debugging ----------------------------------------------------------------

#if defined(NO_DEBUG_COLOR) 
#define DEBUG_COLOR   
#define ERROR_COLOR   
#define WARNING_COLOR 
#define INFO_COLOR    
#define FATAL_COLOR   
#define ROWNR_COLOR   
#define FUNC_COLOR    
#define DEBUG_CEND    

#else

#define DEBUG_COLOR   E_BR_GREEN
#define ERROR_COLOR   E_BR_RED
#define WARNING_COLOR E_BR_YELLOW
#define INFO_COLOR    E_BR_BLUE
#define FATAL_COLOR   E_BR_RED
#define ROWNR_COLOR   E_WHITE
#define FUNC_COLOR    E_BR_CYAN
#define DEBUG_CEND    E_END
#endif

// default defprintf 
#define defprintf(...)  printf( __VA_ARGS__)

#ifdef DEF_PLATFORM_AVR   // if avr GCC use printf_P to store format strings in flash instead of RAM
#undef defprintf
#define defprintf(fmt, ...)  printf_P(PSTR(fmt), ##__VA_ARGS__)
#endif

#ifdef DEF_PLATFORM_UNIX
#undef defprintf
#define defprintf(...)       fprintf(stderr, __VA_ARGS__)
#endif

#define WHEREARG  __LINE__, __FUNCTION__

#define DEBUGSTR  DEBUG_COLOR   "DBG  " ROWNR_COLOR "%4d" FUNC_COLOR " %-25s" DEBUG_CEND": "
#define ERRORSTR  ERROR_COLOR   "ERR  " ROWNR_COLOR "%4d" FUNC_COLOR " %-25s" DEBUG_CEND": "
#define WARNSTR   WARNING_COLOR "WARN " ROWNR_COLOR "%4d" FUNC_COLOR " %-25s" DEBUG_CEND": "
#define INFOSTR   INFO_COLOR    "INFO " ROWNR_COLOR "%4d" FUNC_COLOR " %-25s" DEBUG_CEND": "
#define FATALSTR   "\n\n\n"FATAL_COLOR"############### FATAL ERROR ###############\n"ROWNR_COLOR"     %4d"FUNC_COLOR" %-25s"DEBUG_CEND": "
#define FATALSTRE  FATAL_COLOR"##############################\n"DEBUG_CEND

//#ifdef DEBUGPRINT
#if defined(DEBUGPRINT) || defined(DEBUGALL)
#undef DEBUGPRINT
#define DEBUGPRINT(_fmt, ...)  defprintf(DEBUGSTR _fmt, WHEREARG, ##__VA_ARGS__)
#define DEBUGPRINTC(cond, _fmt, ...) if (cond) defprintf(DEBUGSTR _fmt, WHEREARG, ##__VA_ARGS__)
#define DEBUGDO(f) f
#else
#define DEBUGPRINT(_fmt, ...)
#define DEBUGPRINTC(cond, _fmt, ...)
#define DEBUGDO(f)
#endif

//#ifdef ERRORPRINT
#if defined(ERRORPRINT) || defined(DEBUGALL)
#undef ERRORPRINT
#define ERRORPRINT(_fmt, ...)  defprintf(ERRORSTR _fmt, WHEREARG, ##__VA_ARGS__)
#define ERRORPRINTC(cond, _fmt, ...)  if (cond) defprintf(ERRORSTR _fmt, WHEREARG, ##__VA_ARGS__)
#define ERRORDO(f) f
#else
#define ERRORPRINT(_fmt, ...)
#define ERRORPRINTC(cond, _fmt, ...)
#define ERRORDO(f)
#endif

//#ifdef WARNINGPRIN
#if defined(WARNINGPRINT) || defined(DEBUGALL)
#undef WARNINGPRINT
#define WARNINGPRINT(_fmt, ...)  defprintf(WARNSTR _fmt, WHEREARG, ##__VA_ARGS__)
#define WARNINGPRINTC(cond, _fmt, ...) if (cond) defprintf(WARNSTR _fmt, WHEREARG, ##__VA_ARGS__)
#define WARNINGDO(f) f
#else
#define WARNINGPRINT(_fmt, ...)
#define WARNINGPRINTC(cond, _fmt, ...)
#define WARNINGDO(f)
#endif

//#ifdef INFOPRINT
#if defined(INFOPRINT) || defined(DEBUGALL)
#undef INFOPRINT
#define INFOPRINT(_fmt, ...) defprintf(INFOSTR _fmt, WHEREARG, ##__VA_ARGS__)
#define INFOPRINTC(cond, _fmt, ...) if (cond) defprintf(INFOSTR _fmt, WHEREARG, ##__VA_ARGS__)
#define INFODO(f) f
#else
#define INFOPRINT(_fmt, ...)
#define INFOPRINTC(cond, _fmt, ...)
#define INFODO(f)
#endif

//#ifdef FATALPRINT
#if defined(FATALPRINT) || defined(DEBUGALL)
#undef FATALPRINT
#define FATALPRINT(_fmt, ...) defprintf(FATALSTR _fmt, WHEREARG, ##__VA_ARGS__)
#define FATALPRINTC(cond, _fmt, ...) if (cond) { defprintf(FATALSTR _fmt, WHEREARG, ##__VA_ARGS__); defprintf(FATALSTRE) }
#define FATALDO(f) f
#else
#
#define FATALPRINT(_fmt, ...)
#define FATALPRINTC(cond, _fmt, ...)
#define FATALDO(f)
#endif


// some legacy macros, DO NOT USE IN NEW CODE
#define DEBUGPRINT_COND(cond, _fmt, ...)   DEBUGPRINTC(cond, _fmt, ...)
#define ERRORPRINT_COND(cond, _fmt, ...)   ERRORPRINTC(cond, _fmt, ...)
#define WARNINGPRINT_COND(cond, _fmt, ...) WARNINGPRINTC(cond, _fmt, ...)
#define INFOPRINT_COND(cond, _fmt, ...)    INFOPRINTC(cond, _fmt, ...)
#define FATALPRINT_COND(cond, _fmt, ...)   FATALPRINTC(cond, _fmt, ...)

#define DEBUG_DO(f) DEBUGDO(f)
#define FATAL_DO(f) FATALDO(f) 
#define ERROR_DO(f) ERRORDO(f)
#define WARNING_DO(f) WARNINGDO(f) 
#define FATAL_DO(f) FATALDO(f)


// Misc ---------------------------------------------------------------------

// For removing unused variable/parameter warning from compiler output
#define UNUSED_PARAM(p)		(void)p
#define UNUSED(p)         UNUSED_PARAM(p)


// Create a string from a definition
#define STRINGIZE2(s) #s
#define STRINGIZE(s) STRINGIZE2(s)


#endif	/* DEF_H */

