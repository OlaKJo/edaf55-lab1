#ifndef __CLASS_JAVA_LANG_DOUBLE_HEADER
#define __CLASS_JAVA_LANG_DOUBLE_HEADER

struct java_lang_Double_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Double_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[2];
};

typedef GC_STRUCT_BEGIN(java_lang_Double_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_Double_serialVersionUID);
  volatile GC_STRUCT_VAR(JDouble,_java_lang_Double_MAX_VALUE);
  volatile GC_STRUCT_VAR(JDouble,_java_lang_Double_MIN_VALUE);
  volatile GC_STRUCT_VAR(JDouble,_java_lang_Double_NEGATIVE_INFINITY);
  volatile GC_STRUCT_VAR(JDouble,_java_lang_Double_POSITIVE_INFINITY);
  volatile GC_STRUCT_VAR(JDouble,_java_lang_Double_NaN);
GC_STRUCT_END(java_lang_Double_ClassStatic) java_lang_Double_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_Double)
  GC_STRUCT_VAR(struct java_lang_Double_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_VAR(JDouble,_java_lang_Double_value);
GC_STRUCT_END(java_lang_Double) java_lang_Double;

struct java_lang_Double_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Double,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Double,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Double,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*intValue)(void **__eFlag__, GC_PARAM(java_lang_Double,this));
  JLong (*longValue)(void **__eFlag__, GC_PARAM(java_lang_Double,this));
  JFloat (*floatValue)(void **__eFlag__, GC_PARAM(java_lang_Double,this));
  JDouble (*doubleValue)(void **__eFlag__, GC_PARAM(java_lang_Double,this));
  JByte (*byteValue)(void **__eFlag__, GC_PARAM(java_lang_Double,this));
  JShort (*shortValue)(void **__eFlag__, GC_PARAM(java_lang_Double,this));
  GC___REF(struct java_lang_String) (*toString_double)(JDouble d);
  GC___REF(struct java_lang_Double) (*valueOf_java_lang_String)(GC_PARAM(java_lang_String,s));
  JDouble (*parseDouble_java_lang_String)(GC_PARAM(java_lang_String,str));
  JBoolean (*isNaN_double)(JDouble v);
  JBoolean (*isInfinite_double)(JDouble v);
  JBoolean (*isNaN)(void **__eFlag__, GC_PARAM(java_lang_Double,this));
  JBoolean (*isInfinite)(void **__eFlag__, GC_PARAM(java_lang_Double,this));
  JLong (*doubleToLongBits_double)(JDouble value);
  JLong (*doubleToRawLongBits_double)(JDouble value);
  JDouble (*longBitsToDouble_long)(JLong bits);
  JInt (*compareTo_java_lang_Double)(void **__eFlag__, GC_PARAM(java_lang_Double,this),GC_PARAM(java_lang_Double,d));
  JInt (*compareTo_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Double,this),GC_PARAM(java_lang_Object,o));
  JInt (*compare_double_double)(JDouble x,JDouble y);
};
extern struct java_lang_Double_MethodTblStruct java_lang_Double_MethodTbl ;

#endif
