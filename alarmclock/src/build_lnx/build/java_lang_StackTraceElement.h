#ifndef __CLASS_JAVA_LANG_STACKTRACEELEMENT_HEADER
#define __CLASS_JAVA_LANG_STACKTRACEELEMENT_HEADER

struct java_lang_StackTraceElement_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_StackTraceElement_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[1];
};

typedef GC_STRUCT_BEGIN(java_lang_StackTraceElement_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_StackTraceElement_serialVersionUID);
GC_STRUCT_END(java_lang_StackTraceElement_ClassStatic) java_lang_StackTraceElement_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_StackTraceElement)
  GC_STRUCT_VAR(struct java_lang_StackTraceElement_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_REF(java_lang_String,_java_lang_StackTraceElement_fileName);
  volatile GC_STRUCT_VAR(JInt,_java_lang_StackTraceElement_lineNumber);
  volatile GC_STRUCT_REF(java_lang_String,_java_lang_StackTraceElement_declaringClass);
  volatile GC_STRUCT_REF(java_lang_String,_java_lang_StackTraceElement_methodName);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_StackTraceElement_isNative);
GC_STRUCT_END(java_lang_StackTraceElement) java_lang_StackTraceElement;

struct java_lang_StackTraceElement_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_StackTraceElement,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_StackTraceElement,this),GC_PARAM(java_lang_Object,o));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_StackTraceElement,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  GC___REF(struct java_lang_String) (*getFileName)(void **__eFlag__, GC_PARAM(java_lang_StackTraceElement,this));
  JInt (*getLineNumber)(void **__eFlag__, GC_PARAM(java_lang_StackTraceElement,this));
  GC___REF(struct java_lang_String) (*getClassName)(void **__eFlag__, GC_PARAM(java_lang_StackTraceElement,this));
  GC___REF(struct java_lang_String) (*getMethodName)(void **__eFlag__, GC_PARAM(java_lang_StackTraceElement,this));
  JBoolean (*isNativeMethod)(void **__eFlag__, GC_PARAM(java_lang_StackTraceElement,this));
  JBoolean (*equals_java_lang_Object_java_lang_Object)(GC_PARAM(java_lang_Object,o1),GC_PARAM(java_lang_Object,o2));
  JInt (*hashCode_java_lang_Object)(GC_PARAM(java_lang_Object,o));
};
extern struct java_lang_StackTraceElement_MethodTblStruct java_lang_StackTraceElement_MethodTbl ;

#endif
