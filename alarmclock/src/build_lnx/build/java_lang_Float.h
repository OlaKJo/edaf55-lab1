#ifndef __CLASS_JAVA_LANG_FLOAT_HEADER
#define __CLASS_JAVA_LANG_FLOAT_HEADER

struct java_lang_Float_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Float_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[2];
};

typedef GC_STRUCT_BEGIN(java_lang_Float_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_Float_serialVersionUID);
  volatile GC_STRUCT_VAR(JFloat,_java_lang_Float_MAX_VALUE);
  volatile GC_STRUCT_VAR(JFloat,_java_lang_Float_MIN_VALUE);
  volatile GC_STRUCT_VAR(JFloat,_java_lang_Float_NEGATIVE_INFINITY);
  volatile GC_STRUCT_VAR(JFloat,_java_lang_Float_POSITIVE_INFINITY);
  volatile GC_STRUCT_VAR(JFloat,_java_lang_Float_NaN);
GC_STRUCT_END(java_lang_Float_ClassStatic) java_lang_Float_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_Float)
  GC_STRUCT_VAR(struct java_lang_Float_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_VAR(JFloat,_java_lang_Float_value);
GC_STRUCT_END(java_lang_Float) java_lang_Float;

struct java_lang_Float_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Float,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Float,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Float,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*intValue)(void **__eFlag__, GC_PARAM(java_lang_Float,this));
  JLong (*longValue)(void **__eFlag__, GC_PARAM(java_lang_Float,this));
  JFloat (*floatValue)(void **__eFlag__, GC_PARAM(java_lang_Float,this));
  JDouble (*doubleValue)(void **__eFlag__, GC_PARAM(java_lang_Float,this));
  JByte (*byteValue)(void **__eFlag__, GC_PARAM(java_lang_Float,this));
  JShort (*shortValue)(void **__eFlag__, GC_PARAM(java_lang_Float,this));
  GC___REF(struct java_lang_String) (*toString_float)(JFloat f);
  GC___REF(struct java_lang_Float) (*valueOf_java_lang_String)(GC_PARAM(java_lang_String,s));
  JFloat (*parseFloat_java_lang_String)(GC_PARAM(java_lang_String,str));
  JBoolean (*isNaN_float)(JFloat v);
  JBoolean (*isInfinite_float)(JFloat v);
  JBoolean (*isNaN)(void **__eFlag__, GC_PARAM(java_lang_Float,this));
  JBoolean (*isInfinite)(void **__eFlag__, GC_PARAM(java_lang_Float,this));
  JInt (*floatToIntBits_float)(JFloat value);
  JInt (*floatToRawIntBits_float)(JFloat value);
  JFloat (*intBitsToFloat_int)(JInt bits);
  JInt (*compareTo_java_lang_Float)(void **__eFlag__, GC_PARAM(java_lang_Float,this),GC_PARAM(java_lang_Float,f));
  JInt (*compareTo_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Float,this),GC_PARAM(java_lang_Object,o));
  JInt (*compare_float_float)(JFloat x,JFloat y);
};
extern struct java_lang_Float_MethodTblStruct java_lang_Float_MethodTbl ;

#endif
