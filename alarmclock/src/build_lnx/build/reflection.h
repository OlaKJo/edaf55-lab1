#ifndef REFLECTION
#define REFLECTION

#if HAS_REFLECTION == 1

#include <gc.h>

#define NBR_LIVE_TYPES 46

struct clazz_info {
  char *name;
  GC__IMPL_REF(java_lang_Class,clazz);
};

struct clazz_info clazzes[NBR_LIVE_TYPES];
#endif
#endif

