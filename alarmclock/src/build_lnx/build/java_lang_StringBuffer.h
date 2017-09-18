#ifndef __CLASS_JAVA_LANG_STRINGBUFFER_HEADER
#define __CLASS_JAVA_LANG_STRINGBUFFER_HEADER

struct java_lang_StringBuffer_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_StringBuffer_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[2];
};

typedef GC_STRUCT_BEGIN(java_lang_StringBuffer_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_StringBuffer_serialVersionUID);
  volatile GC_STRUCT_VAR(JInt,_java_lang_StringBuffer_DEFAULT_CAPACITY);
GC_STRUCT_END(java_lang_StringBuffer_ClassStatic) java_lang_StringBuffer_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_StringBuffer)
  GC_STRUCT_VAR(struct java_lang_StringBuffer_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_VAR(JInt,_java_lang_StringBuffer_count);
  volatile GC_STRUCT_REF(JCharArray,_java_lang_StringBuffer_value);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_StringBuffer_shared);
GC_STRUCT_END(java_lang_StringBuffer) java_lang_StringBuffer;

struct java_lang_StringBuffer_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*length)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this));
  JInt (*capacity)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this));
  void (*ensureCapacity_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt minimumCapacity);
  void (*setLength_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt newLength);
  JChar (*charAt_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt index);
  void (*getChars_int_int_charA_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt srcOffset,JInt srcEnd,GC_PARAM(JCharArray,dst),JInt dstOffset);
  void (*setCharAt_int_char)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt index,JChar ch);
  GC___REF(struct java_lang_StringBuffer) (*append_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_StringBuffer) (*append_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),GC_PARAM(java_lang_String,str));
  GC___REF(struct java_lang_StringBuffer) (*append_java_lang_StringBuffer)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),GC_PARAM(java_lang_StringBuffer,stringBuffer));
  GC___REF(struct java_lang_StringBuffer) (*append_charA)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),GC_PARAM(JCharArray,data));
  GC___REF(struct java_lang_StringBuffer) (*append_charA_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),GC_PARAM(JCharArray,data),JInt offset,JInt count);
  GC___REF(struct java_lang_StringBuffer) (*append_boolean)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JBoolean bool);
  GC___REF(struct java_lang_StringBuffer) (*append_char)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JChar ch);
  GC___REF(struct java_lang_StringBuffer) (*append_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt inum);
  GC___REF(struct java_lang_StringBuffer) (*append_long)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JLong lnum);
  GC___REF(struct java_lang_StringBuffer) (*append_float)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JFloat fnum);
  GC___REF(struct java_lang_StringBuffer) (*append_double)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JDouble dnum);
  GC___REF(struct java_lang_StringBuffer) (*delete_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt start,JInt end);
  GC___REF(struct java_lang_StringBuffer) (*deleteCharAt_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt index);
  GC___REF(struct java_lang_StringBuffer) (*replace_int_int_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt start,JInt end,GC_PARAM(java_lang_String,str));
  GC___REF(struct java_lang_String) (*substring_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt beginIndex);
  GC___REF(struct java_lang_CharSequence) (*subSequence_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt beginIndex,JInt endIndex);
  GC___REF(struct java_lang_String) (*substring_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt beginIndex,JInt endIndex);
  GC___REF(struct java_lang_StringBuffer) (*insert_int_charA_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt offset,GC_PARAM(JCharArray,str),JInt str_offset,JInt len);
  GC___REF(struct java_lang_StringBuffer) (*insert_int_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt offset,GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_StringBuffer) (*insert_int_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt offset,GC_PARAM(java_lang_String,str));
  GC___REF(struct java_lang_StringBuffer) (*insert_int_charA)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt offset,GC_PARAM(JCharArray,data));
  GC___REF(struct java_lang_StringBuffer) (*insert_int_boolean)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt offset,JBoolean bool);
  GC___REF(struct java_lang_StringBuffer) (*insert_int_char)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt offset,JChar ch);
  GC___REF(struct java_lang_StringBuffer) (*insert_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt offset,JInt inum);
  GC___REF(struct java_lang_StringBuffer) (*insert_int_long)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt offset,JLong lnum);
  GC___REF(struct java_lang_StringBuffer) (*insert_int_float)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt offset,JFloat fnum);
  GC___REF(struct java_lang_StringBuffer) (*insert_int_double)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt offset,JDouble dnum);
  JInt (*indexOf_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),GC_PARAM(java_lang_String,str));
  JInt (*indexOf_java_lang_String_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),GC_PARAM(java_lang_String,str),JInt fromIndex);
  JInt (*lastIndexOf_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),GC_PARAM(java_lang_String,str));
  JInt (*lastIndexOf_java_lang_String_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),GC_PARAM(java_lang_String,str),JInt fromIndex);
  GC___REF(struct java_lang_StringBuffer) (*reverse)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this));
  void (*ensureCapacity_unsynchronized_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt minimumCapacity);
  JBoolean (*regionMatches_int_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt toffset,GC_PARAM(java_lang_String,other));
};
extern struct java_lang_StringBuffer_MethodTblStruct java_lang_StringBuffer_MethodTbl ;

#endif
