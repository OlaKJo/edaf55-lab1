#ifndef __CLASS_JAVA_LANG_RUNTIMEEXCEPTION_HEADER
#define __CLASS_JAVA_LANG_RUNTIMEEXCEPTION_HEADER

struct java_lang_RuntimeException_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_RuntimeException_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[1];
};

typedef GC_STRUCT_BEGIN(java_lang_RuntimeException_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_RuntimeException_serialVersionUID);
GC_STRUCT_END(java_lang_RuntimeException_ClassStatic) java_lang_RuntimeException_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_RuntimeException)
  GC_STRUCT_VAR(struct java_lang_RuntimeException_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_REF(java_lang_String,_java_lang_Throwable_detailMessage);
  volatile GC_STRUCT_REF(java_lang_Throwable,_java_lang_Throwable_cause);
  volatile GC_STRUCT_REF(RefArray,_java_lang_Throwable_stackTrace);
GC_STRUCT_END(java_lang_RuntimeException) java_lang_RuntimeException;

struct java_lang_RuntimeException_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  GC___REF(struct java_lang_String) (*getMessage)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));
  GC___REF(struct java_lang_String) (*getLocalizedMessage)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));
  GC___REF(struct java_lang_Throwable) (*getCause)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));
  GC___REF(struct java_lang_Throwable) (*initCause_java_lang_Throwable)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this),GC_PARAM(java_lang_Throwable,cause));
  void (*printStackTrace)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));
  void (*printStackTrace_java_io_PrintStream)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this),GC_PARAM(java_io_PrintStream,s));
  GC___REF(struct java_lang_String) (*stackTraceString)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));
  void (*stackTraceStringBuffer_java_lang_StringBuffer_java_lang_String_java_lang_StackTraceElementA_int)(GC_PARAM(java_lang_StringBuffer,sb),GC_PARAM(java_lang_String,name),GC_PARAM(RefArray,stack),JInt equal);
  GC___REF(struct java_lang_Throwable) (*fillInStackTrace)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));
  GC___REF(struct RefArray) (*getStackTrace)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));
  void (*setStackTrace_java_lang_StackTraceElementA)(void **__eFlag__, GC_PARAM(java_lang_Throwable,this),GC_PARAM(RefArray,stackTrace));
};
extern struct java_lang_RuntimeException_MethodTblStruct java_lang_RuntimeException_MethodTbl ;

#endif
