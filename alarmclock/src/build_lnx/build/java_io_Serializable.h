#ifndef __CLASS_JAVA_IO_SERIALIZABLE_HEADER
#define __CLASS_JAVA_IO_SERIALIZABLE_HEADER

struct java_io_Serializable_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_io_Serializable_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
};
typedef GC_STRUCT_BEGIN(java_io_Serializable_ClassStatic)
  /*  interface attributes go here, from this interface */
GC_STRUCT_END(java_io_Serializable_ClassStatic) java_io_Serializable_ClassStatic;


typedef GC_STRUCT_BEGIN(java_io_Serializable)
  GC_STRUCT_VAR(struct java_io_Serializable_ClassStruct *,class);
GC_STRUCT_END(java_io_Serializable) java_io_Serializable;

struct java_io_Serializable_MethodTblStruct {
  /* Method pointers */
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
};
extern struct java_io_Serializable_MethodTblStruct java_io_Serializable_MethodTbl ;

#endif
