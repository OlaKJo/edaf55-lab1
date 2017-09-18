#ifndef __CLASS_JAVA_LANG_COMPARABLE_HEADER
#define __CLASS_JAVA_LANG_COMPARABLE_HEADER

struct java_lang_Comparable_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Comparable_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
};
typedef GC_STRUCT_BEGIN(java_lang_Comparable_ClassStatic)
  /*  interface attributes go here, from this interface */
GC_STRUCT_END(java_lang_Comparable_ClassStatic) java_lang_Comparable_ClassStatic;


typedef GC_STRUCT_BEGIN(java_lang_Comparable)
  GC_STRUCT_VAR(struct java_lang_Comparable_ClassStruct *,class);
GC_STRUCT_END(java_lang_Comparable) java_lang_Comparable;

struct java_lang_Comparable_MethodTblStruct {
  /* Method pointers */
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  JInt (*compareTo_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Comparable,this),GC_PARAM(java_lang_Object,o));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
};
extern struct java_lang_Comparable_MethodTblStruct java_lang_Comparable_MethodTbl ;

#endif
