#ifndef __CLASS_JAVA_LANG_MATH_HEADER
#define __CLASS_JAVA_LANG_MATH_HEADER

struct java_lang_Math_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Math_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[0];
};

typedef GC_STRUCT_BEGIN(java_lang_Math_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_REF(java_util_Random,_java_lang_Math_rand);
  volatile GC_STRUCT_VAR(JDouble,_java_lang_Math_E);
  volatile GC_STRUCT_VAR(JDouble,_java_lang_Math_PI);
GC_STRUCT_END(java_lang_Math_ClassStatic) java_lang_Math_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_Math)
  GC_STRUCT_VAR(struct java_lang_Math_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
GC_STRUCT_END(java_lang_Math) java_lang_Math;

struct java_lang_Math_MethodTblStruct {
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
  JInt (*abs_int)(JInt i);
  JLong (*abs_long)(JLong l);
  JFloat (*abs_float)(JFloat f);
  JDouble (*abs_double)(JDouble d);
  JInt (*min_int_int)(JInt a,JInt b);
  JLong (*min_long_long)(JLong a,JLong b);
  JFloat (*min_float_float)(JFloat a,JFloat b);
  JDouble (*min_double_double)(JDouble a,JDouble b);
  JInt (*max_int_int)(JInt a,JInt b);
  JLong (*max_long_long)(JLong a,JLong b);
  JFloat (*max_float_float)(JFloat a,JFloat b);
  JDouble (*max_double_double)(JDouble a,JDouble b);
  JDouble (*sin_double)(JDouble a);
  JDouble (*cos_double)(JDouble a);
  JDouble (*tan_double)(JDouble a);
  JDouble (*asin_double)(JDouble a);
  JDouble (*acos_double)(JDouble a);
  JDouble (*atan_double)(JDouble a);
  JDouble (*atan2_double_double)(JDouble y,JDouble x);
  JDouble (*exp_double)(JDouble a);
  JDouble (*log_double)(JDouble a);
  JDouble (*sqrt_double)(JDouble a);
  JDouble (*pow_double_double)(JDouble a,JDouble b);
  JDouble (*IEEEremainder_double_double)(JDouble x,JDouble y);
  JDouble (*ceil_double)(JDouble a);
  JDouble (*floor_double)(JDouble a);
  JDouble (*rint_double)(JDouble a);
  JInt (*round_float)(JFloat a);
  JLong (*round_double)(JDouble a);
  JDouble (*random)();
  JDouble (*toRadians_double)(JDouble degrees);
  JDouble (*toDegrees_double)(JDouble rads);
};
extern struct java_lang_Math_MethodTblStruct java_lang_Math_MethodTbl ;

#endif
