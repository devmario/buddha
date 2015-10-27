// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Source/Uno/_config.h'.
// WARNING: Changes might be lost if you edit this file directly.

#include <cstddef>
#include <Xli/Config.h>

// Debugging
//#define U_DEBUG_MEM 3 // 1..3
//#define U_DEBUG_UNSAFE

#ifdef XLI_DEBUG
# define U_DEBUG_UNSAFE
#endif

// Workarounds
#define __value ___value
#define register ___register
#undef __callback

/**
    \addtogroup ObjectModel
    @{
*/
// Floats
#ifndef DBL_MAX
# define DBL_MAX 1.7976931348623157E+308
#endif

const double DBL_INF = DBL_MAX + DBL_MAX;
const double DBL_NAN = DBL_INF - DBL_INF;
const float FLT_INF = (float)DBL_INF;
const float FLT_NAN = (float)DBL_NAN;

// Integers
typedef unsigned char uByte;
typedef signed char uSByte;
typedef short uShort;
typedef unsigned short uUShort;
typedef unsigned int uUInt;
typedef long long uLong;
typedef unsigned long long uULong;

// Strings
#ifdef WIN32
typedef wchar_t uChar;
#else
typedef uUShort uChar;
#endif
/** @} */
