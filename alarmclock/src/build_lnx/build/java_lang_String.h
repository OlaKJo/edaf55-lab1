#ifndef __CLASS_JAVA_LANG_STRING_HEADER
#define __CLASS_JAVA_LANG_STRING_HEADER

struct java_lang_String_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_String_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[3];
};

typedef GC_STRUCT_BEGIN(java_lang_String_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_String_serialVersionUID);
GC_STRUCT_END(java_lang_String_ClassStatic) java_lang_String_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_String)
  GC_STRUCT_VAR(struct java_lang_String_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_REF(JCharArray,_java_lang_String_value);
  volatile GC_STRUCT_VAR(JInt,_java_lang_String_count);
  volatile GC_STRUCT_VAR(JInt,_java_lang_String_cachedHashCode);
  volatile GC_STRUCT_VAR(JInt,_java_lang_String_offset);
GC_STRUCT_END(java_lang_String) java_lang_String;

struct java_lang_String_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_String,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_Object,anObject));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_String,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*length)(void **__eFlag__, GC_PARAM(java_lang_String,this));
  JChar (*charAt_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt index);
  void (*getChars_int_int_charA_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt srcBegin,JInt srcEnd,GC_PARAM(JCharArray,dst),JInt dstBegin);
  void (*getBytes_int_int_byteA_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt srcBegin,JInt srcEnd,GC_PARAM(JByteArray,dst),JInt dstBegin);
  GC___REF(struct JByteArray) (*getBytes_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,enc));
  GC___REF(struct JByteArray) (*getBytes)(void **__eFlag__, GC_PARAM(java_lang_String,this));
  JBoolean (*contentEquals_java_lang_StringBuffer)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_StringBuffer,buffer));
  JBoolean (*equalsIgnoreCase_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,anotherString));
  JInt (*compareTo_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,anotherString));
  JInt (*compareTo_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_Object,o));
  JInt (*compareToIgnoreCase_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,str));
  JBoolean (*regionMatches_int_java_lang_String_int_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt toffset,GC_PARAM(java_lang_String,other),JInt ooffset,JInt len);
  JBoolean (*regionMatches_boolean_int_java_lang_String_int_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JBoolean ignoreCase,JInt toffset,GC_PARAM(java_lang_String,other),JInt ooffset,JInt len);
  JBoolean (*startsWith_java_lang_String_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,prefix),JInt toffset);
  JBoolean (*startsWith_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,prefix));
  JBoolean (*endsWith_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,suffix));
  JInt (*indexOf_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt ch);
  JInt (*indexOf_int_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt ch,JInt fromIndex);
  JInt (*lastIndexOf_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt ch);
  JInt (*lastIndexOf_int_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt ch,JInt fromIndex);
  JInt (*indexOf_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,str));
  JInt (*indexOf_java_lang_String_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,str),JInt fromIndex);
  JInt (*lastIndexOf_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,str));
  JInt (*lastIndexOf_java_lang_String_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,str),JInt fromIndex);
  GC___REF(struct java_lang_String) (*substring_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt begin);
  GC___REF(struct java_lang_String) (*substring_int_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt beginIndex,JInt endIndex);
  GC___REF(struct java_lang_CharSequence) (*subSequence_int_int)(void **__eFlag__, GC_PARAM(java_lang_String,this),JInt begin,JInt end);
  GC___REF(struct java_lang_String) (*concat_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,str));
  GC___REF(struct java_lang_String) (*replace_char_char)(void **__eFlag__, GC_PARAM(java_lang_String,this),JChar oldChar,JChar newChar);
  GC___REF(struct java_lang_String) (*trim)(void **__eFlag__, GC_PARAM(java_lang_String,this));
  GC___REF(struct JCharArray) (*toCharArray)(void **__eFlag__, GC_PARAM(java_lang_String,this));
  GC___REF(struct java_lang_String) (*valueOf_java_lang_Object)(GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*valueOf_charA)(GC_PARAM(JCharArray,data));
  GC___REF(struct java_lang_String) (*valueOf_charA_int_int)(GC_PARAM(JCharArray,data),JInt offset,JInt count);
  GC___REF(struct java_lang_String) (*copyValueOf_charA_int_int)(GC_PARAM(JCharArray,data),JInt offset,JInt count);
  GC___REF(struct java_lang_String) (*copyValueOf_charA)(GC_PARAM(JCharArray,data));
  GC___REF(struct java_lang_String) (*valueOf_boolean)(JBoolean b);
  GC___REF(struct java_lang_String) (*valueOf_char)(JChar c);
  GC___REF(struct java_lang_String) (*valueOf_int)(JInt i);
  GC___REF(struct java_lang_String) (*valueOf_long)(JLong l);
  GC___REF(struct java_lang_String) (*valueOf_float)(JFloat f);
  GC___REF(struct java_lang_String) (*valueOf_double)(JDouble d);
  GC___REF(struct JCharArray) (*zeroBasedStringValue_java_lang_String)(GC_PARAM(java_lang_String,s));
};
extern struct java_lang_String_MethodTblStruct java_lang_String_MethodTbl ;

#endif
