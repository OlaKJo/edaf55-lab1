#ifndef __CLASS_JAVA_LANG_NUMBER_HEADER
#define __CLASS_JAVA_LANG_NUMBER_HEADER

struct java_lang_Number_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Number_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[1];
};

typedef GC_STRUCT_BEGIN(java_lang_Number_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_Number_serialVersionUID);
  volatile GC_STRUCT_REF(JCharArray,_java_lang_Number_digits);
GC_STRUCT_END(java_lang_Number_ClassStatic) java_lang_Number_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_Number)
  GC_STRUCT_VAR(struct java_lang_Number_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
GC_STRUCT_END(java_lang_Number) java_lang_Number;

struct java_lang_Number_MethodTblStruct {
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
  JInt (*intValue)(void **__eFlag__, GC_PARAM(java_lang_Number,this));
  JLong (*longValue)(void **__eFlag__, GC_PARAM(java_lang_Number,this));
  JFloat (*floatValue)(void **__eFlag__, GC_PARAM(java_lang_Number,this));
  JDouble (*doubleValue)(void **__eFlag__, GC_PARAM(java_lang_Number,this));
  JByte (*byteValue)(void **__eFlag__, GC_PARAM(java_lang_Number,this));
  JShort (*shortValue)(void **__eFlag__, GC_PARAM(java_lang_Number,this));
};
extern struct java_lang_Number_MethodTblStruct java_lang_Number_MethodTbl ;

#endif
