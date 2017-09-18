#ifndef __CLASS_JAVA_LANG_LONG_HEADER
#define __CLASS_JAVA_LANG_LONG_HEADER

struct java_lang_Long_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Long_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[2];
};

typedef GC_STRUCT_BEGIN(java_lang_Long_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_Long_serialVersionUID);
  volatile GC_STRUCT_VAR(JLong,_java_lang_Long_MIN_VALUE);
  volatile GC_STRUCT_VAR(JLong,_java_lang_Long_MAX_VALUE);
GC_STRUCT_END(java_lang_Long_ClassStatic) java_lang_Long_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_Long)
  GC_STRUCT_VAR(struct java_lang_Long_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_VAR(JLong,_java_lang_Long_value);
GC_STRUCT_END(java_lang_Long) java_lang_Long;

struct java_lang_Long_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Long,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Long,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Long,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*intValue)(void **__eFlag__, GC_PARAM(java_lang_Long,this));
  JLong (*longValue)(void **__eFlag__, GC_PARAM(java_lang_Long,this));
  JFloat (*floatValue)(void **__eFlag__, GC_PARAM(java_lang_Long,this));
  JDouble (*doubleValue)(void **__eFlag__, GC_PARAM(java_lang_Long,this));
  JByte (*byteValue)(void **__eFlag__, GC_PARAM(java_lang_Long,this));
  JShort (*shortValue)(void **__eFlag__, GC_PARAM(java_lang_Long,this));
  GC___REF(struct java_lang_String) (*toString_long_int)(JLong num,JInt radix);
  GC___REF(struct java_lang_String) (*toHexString_long)(JLong l);
  GC___REF(struct java_lang_String) (*toOctalString_long)(JLong l);
  GC___REF(struct java_lang_String) (*toBinaryString_long)(JLong l);
  GC___REF(struct java_lang_String) (*toString_long)(JLong num);
  JLong (*parseLong_java_lang_String_int)(GC_PARAM(java_lang_String,str),JInt radix);
  JLong (*parseLong_java_lang_String)(GC_PARAM(java_lang_String,s));
  GC___REF(struct java_lang_Long) (*valueOf_java_lang_String_int)(GC_PARAM(java_lang_String,s),JInt radix);
  GC___REF(struct java_lang_Long) (*valueOf_java_lang_String)(GC_PARAM(java_lang_String,s));
  GC___REF(struct java_lang_Long) (*decode_java_lang_String)(GC_PARAM(java_lang_String,str));
  GC___REF(struct java_lang_Long) (*getLong_java_lang_String)(GC_PARAM(java_lang_String,nm));
  GC___REF(struct java_lang_Long) (*getLong_java_lang_String_long)(GC_PARAM(java_lang_String,nm),JLong val);
  GC___REF(struct java_lang_Long) (*getLong_java_lang_String_java_lang_Long)(GC_PARAM(java_lang_String,nm),GC_PARAM(java_lang_Long,def));
  JInt (*compareTo_java_lang_Long)(void **__eFlag__, GC_PARAM(java_lang_Long,this),GC_PARAM(java_lang_Long,l));
  JInt (*compareTo_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Long,this),GC_PARAM(java_lang_Object,o));
  GC___REF(struct java_lang_String) (*toUnsignedString_long_int)(JLong num,JInt exp);
  JLong (*parseLong_java_lang_String_int_boolean)(GC_PARAM(java_lang_String,str),JInt radix,JBoolean decode);
};
extern struct java_lang_Long_MethodTblStruct java_lang_Long_MethodTbl ;

#endif
