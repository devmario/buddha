// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Source/Uno/_gc.h'.
// WARNING: Changes might be lost if you edit this file directly.




























#ifndef U_MALLOC_TYPE
# define U_MALLOC_TYPE(size) calloc(1, size)
# define U_FREE_TYPE(obj) free(obj)
#endif

#ifndef U_MALLOC_OBJECT
# define U_MALLOC_OBJECT(size, type) calloc(1, size)
# define U_FREE_OBJECT(obj) free(obj)
#endif

#ifndef U_MALLOC_STRING
# define U_MALLOC_STRING(size) calloc(1, size)
# define U_FREE_STRING(obj) free(obj)
#endif

#ifndef U_MALLOC_WEAKREF
# define U_MALLOC_WEAKREF(size) calloc(1, size)
# define U_FREE_WEAKREF(weak) free(weak)
#endif

#ifndef U_MALLOC_CSTR
# define U_MALLOC_CSTR(size) malloc(size)
# define U_FREE_CSTR(obj) free(obj)
#endif

#ifndef U_MALLOC_ARPVECTOR
# define U_MALLOC_ARPVECTOR(size) malloc(size)
# define U_REALLOC_ARPVECTOR(ptr, size) realloc(ptr, size)
# define U_FREE_ARPVECTOR(ptr) free(ptr)
#endif
