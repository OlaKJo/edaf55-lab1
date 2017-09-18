#ifndef __CLASS_JAVA_LANG_SYSTEM_HEADER
#define __CLASS_JAVA_LANG_SYSTEM_HEADER

struct java_lang_System_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_System_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[0];
};

typedef GC_STRUCT_BEGIN(java_lang_System_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_REF(java_lang_PhonyWriter,_java_lang_System_out);
  volatile GC_STRUCT_REF(java_lang_PhonyReader,_java_lang_System_in);
  volatile GC_STRUCT_REF(java_lang_ErrWriter,_java_lang_System_err);
GC_STRUCT_END(java_lang_System_ClassStatic) java_lang_System_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_System)
  GC_STRUCT_VAR(struct java_lang_System_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
GC_STRUCT_END(java_lang_System) java_lang_System;

struct java_lang_System_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*arraycopy_java_lang_Object_int_java_lang_Object_int_int)(GC_PARAM(java_lang_Object,src),JInt srcOffset,GC_PARAM(java_lang_Object,dst),JInt dstOffset,JInt count);
  JLong (*currentTimeMillis)();
  void (*exit_int)(JInt status);
  GC___REF(struct java_lang_String) (*getProperty_java_lang_String)(GC_PARAM(java_lang_String,property));
  GC___REF(struct java_lang_String) (*getProperty_java_lang_String_java_lang_String)(GC_PARAM(java_lang_String,property),GC_PARAM(java_lang_String,defval));
  JInt (*identityHashCode_java_lang_Object)(GC_PARAM(java_lang_Object,obj));
  void (*loadLibrary_java_lang_String)(GC_PARAM(java_lang_String,libname));
};
extern struct java_lang_System_MethodTblStruct java_lang_System_MethodTbl ;

#endif
