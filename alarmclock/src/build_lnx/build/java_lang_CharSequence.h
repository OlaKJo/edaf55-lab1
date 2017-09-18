#ifndef __CLASS_JAVA_LANG_CHARSEQUENCE_HEADER
#define __CLASS_JAVA_LANG_CHARSEQUENCE_HEADER

struct java_lang_CharSequence_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_CharSequence_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
};
typedef GC_STRUCT_BEGIN(java_lang_CharSequence_ClassStatic)
  /*  interface attributes go here, from this interface */
GC_STRUCT_END(java_lang_CharSequence_ClassStatic) java_lang_CharSequence_ClassStatic;


typedef GC_STRUCT_BEGIN(java_lang_CharSequence)
  GC_STRUCT_VAR(struct java_lang_CharSequence_ClassStruct *,class);
GC_STRUCT_END(java_lang_CharSequence) java_lang_CharSequence;

struct java_lang_CharSequence_MethodTblStruct {
  /* Method pointers */
  GC___REF(struct java_lang_CharSequence) (*subSequence_int_int)(void **__eFlag__, GC_PARAM(java_lang_CharSequence,this),JInt begin,JInt end);
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_CharSequence,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  JInt (*length)(void **__eFlag__, GC_PARAM(java_lang_CharSequence,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  JChar (*charAt_int)(void **__eFlag__, GC_PARAM(java_lang_CharSequence,this),JInt i);
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
};
extern struct java_lang_CharSequence_MethodTblStruct java_lang_CharSequence_MethodTbl ;

#endif
