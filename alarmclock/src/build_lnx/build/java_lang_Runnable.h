#ifndef __CLASS_JAVA_LANG_RUNNABLE_HEADER
#define __CLASS_JAVA_LANG_RUNNABLE_HEADER

struct java_lang_Runnable_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Runnable_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
};
typedef GC_STRUCT_BEGIN(java_lang_Runnable_ClassStatic)
  /*  interface attributes go here, from this interface */
GC_STRUCT_END(java_lang_Runnable_ClassStatic) java_lang_Runnable_ClassStatic;


typedef GC_STRUCT_BEGIN(java_lang_Runnable)
  GC_STRUCT_VAR(struct java_lang_Runnable_ClassStruct *,class);
GC_STRUCT_END(java_lang_Runnable) java_lang_Runnable;

struct java_lang_Runnable_MethodTblStruct {
  /* Method pointers */
  void (*run)(void **__eFlag__, GC_PARAM(java_lang_Runnable,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
};
extern struct java_lang_Runnable_MethodTblStruct java_lang_Runnable_MethodTbl ;

#endif
