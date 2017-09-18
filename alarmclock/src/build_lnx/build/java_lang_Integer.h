#ifndef __CLASS_JAVA_LANG_INTEGER_HEADER
#define __CLASS_JAVA_LANG_INTEGER_HEADER

struct java_lang_Integer_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Integer_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[2];
};

typedef GC_STRUCT_BEGIN(java_lang_Integer_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_Integer_serialVersionUID);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Integer_MIN_VALUE);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Integer_MAX_VALUE);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Integer_SIZE);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Integer_MIN_CACHE);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Integer_MAX_CACHE);
  volatile GC_STRUCT_REF(RefArray,_java_lang_Integer_intCache);
GC_STRUCT_END(java_lang_Integer_ClassStatic) java_lang_Integer_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_Integer)
  GC_STRUCT_VAR(struct java_lang_Integer_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Integer_value);
GC_STRUCT_END(java_lang_Integer) java_lang_Integer;

struct java_lang_Integer_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Integer,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Integer,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Integer,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*intValue)(void **__eFlag__, GC_PARAM(java_lang_Integer,this));
  JLong (*longValue)(void **__eFlag__, GC_PARAM(java_lang_Integer,this));
  JFloat (*floatValue)(void **__eFlag__, GC_PARAM(java_lang_Integer,this));
  JDouble (*doubleValue)(void **__eFlag__, GC_PARAM(java_lang_Integer,this));
  JByte (*byteValue)(void **__eFlag__, GC_PARAM(java_lang_Integer,this));
  JShort (*shortValue)(void **__eFlag__, GC_PARAM(java_lang_Integer,this));
  GC___REF(struct java_lang_String) (*toString_int_int)(JInt num,JInt radix);
  GC___REF(struct java_lang_String) (*toHexString_int)(JInt i);
  GC___REF(struct java_lang_String) (*toOctalString_int)(JInt i);
  GC___REF(struct java_lang_String) (*toBinaryString_int)(JInt i);
  GC___REF(struct java_lang_String) (*toString_int)(JInt i);
  JInt (*parseInt_java_lang_String_int)(GC_PARAM(java_lang_String,str),JInt radix);
  JInt (*parseInt_java_lang_String)(GC_PARAM(java_lang_String,s));
  GC___REF(struct java_lang_Integer) (*valueOf_java_lang_String_int)(GC_PARAM(java_lang_String,s),JInt radix);
  GC___REF(struct java_lang_Integer) (*valueOf_java_lang_String)(GC_PARAM(java_lang_String,s));
  GC___REF(struct java_lang_Integer) (*valueOf_int)(JInt val);
  GC___REF(struct java_lang_Integer) (*getInteger_java_lang_String)(GC_PARAM(java_lang_String,nm));
  GC___REF(struct java_lang_Integer) (*getInteger_java_lang_String_int)(GC_PARAM(java_lang_String,nm),JInt val);
  GC___REF(struct java_lang_Integer) (*getInteger_java_lang_String_java_lang_Integer)(GC_PARAM(java_lang_String,nm),GC_PARAM(java_lang_Integer,def));
  GC___REF(struct java_lang_Integer) (*decode_java_lang_String)(GC_PARAM(java_lang_String,str));
  JInt (*compareTo_java_lang_Integer)(void **__eFlag__, GC_PARAM(java_lang_Integer,this),GC_PARAM(java_lang_Integer,i));
  JInt (*compareTo_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Integer,this),GC_PARAM(java_lang_Object,o));
  JInt (*bitCount_int)(JInt x);
  JInt (*rotateLeft_int_int)(JInt x,JInt distance);
  JInt (*rotateRight_int_int)(JInt x,JInt distance);
  JInt (*highestOneBit_int)(JInt value);
  JInt (*numberOfLeadingZeros_int)(JInt value);
  JInt (*lowestOneBit_int)(JInt value);
  JInt (*numberOfTrailingZeros_int)(JInt value);
  JInt (*signum_int)(JInt x);
  JInt (*reverseBytes_int)(JInt val);
  JInt (*reverse_int)(JInt val);
  GC___REF(struct java_lang_String) (*toUnsignedString_int_int)(JInt num,JInt exp);
  JInt (*parseInt_java_lang_String_int_boolean)(GC_PARAM(java_lang_String,str),JInt radix,JBoolean decode);
};
extern struct java_lang_Integer_MethodTblStruct java_lang_Integer_MethodTbl ;

#endif
