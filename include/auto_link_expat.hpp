#pragma once
#define GIFLIB_LIB_NAME "giflib-5.0.4"

#  define GIFLIB_LIB_PREFIX "lib"

#  define GIFLIB_LIB_PLATFORM "-x86"

#ifdef _DLL
#  if defined(_DEBUG)
// MDd
#    define GIFLIB_LIB_RT_OPT "-gd"
#  else
// MD
#    define GIFLIB_LIB_RT_OPT
#  endif
#else
#  if defined(_DEBUG)
// MTd
#    define GIFLIB_LIB_RT_OPT "-sgd"
#  else
// MT
#    define GIFLIB_LIB_RT_OPT "-s"
#  endif
#endif

#  pragma comment(lib, GIFLIB_LIB_PREFIX GIFLIB_LIB_NAME  GIFLIB_LIB_RT_OPT GIFLIB_LIB_PLATFORM ".lib")

// static MDd x86 : libgiflib-gd-x86.lib
// static MD x86 :  libgiflib-x86.lib
// static MTd x86 : libgiflib-sgd-x86.lib
// static MT x86 :  libgiflib-s-x86.lib

// dynamic MDd x86 : giflib-gd-x86.lib
// dynamic MD x86 :  giflib-x86.lib
// dynamic MTd x86 : giflib-sgd-x86.lib
// dynamic MT x86 :  giflib-s-x86.lib
