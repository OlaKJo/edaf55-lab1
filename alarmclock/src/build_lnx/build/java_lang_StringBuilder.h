#ifndef __CLASS_JAVA_LANG_STRINGBUILDER_HEADER
#define __CLASS_JAVA_LANG_STRINGBUILDER_HEADER

struct java_lang_StringBuilder_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_StringBuilder_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[2];
};

typedef GC_STRUCT_BEGIN(java_lang_StringBuilder_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_StringBuilder_serialVersionUID);
  volatile GC_STRUCT_VAR(JInt,_java_lang_StringBuilder_DEFAULT_CAPACITY);
GC_STRUCT_END(java_lang_StringBuilder_ClassStatic) java_lang_StringBuilder_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_StringBuilder)
  GC_STRUCT_VAR(struct java_lang_StringBuilder_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_VAR(JInt,_java_lang_StringBuilder_count);
  volatile GC_STRUCT_REF(JCharArray,_java_lang_StringBuilder_value);
GC_STRUCT_END(java_lang_StringBuilder) java_lang_StringBuilder;

struct java_lang_StringBuilder_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*length)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this));
  JInt (*capacity)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this));
  void (*ensureCapacity_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt minimumCapacity);
  void (*setLength_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt newLength);
  JChar (*charAt_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt index);
  void (*getChars_int_int_charA_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt srcOffset,JInt srcEnd,GC_PARAM(JCharArray,dst),JInt dstOffset);
  void (*setCharAt_int_char)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt index,JChar ch);
  GC___REF(struct java_lang_StringBuilder) (*append_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_StringBuilder) (*append_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(java_lang_String,str));
  GC___REF(struct java_lang_StringBuilder) (*append_java_lang_StringBuffer)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(java_lang_StringBuffer,stringBuffer));
  GC___REF(struct java_lang_StringBuilder) (*append_charA)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(JCharArray,data));
  GC___REF(struct java_lang_StringBuilder) (*append_charA_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(JCharArray,data),JInt offset,JInt count);
  GC___REF(struct java_lang_StringBuilder) (*append_boolean)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JBoolean bool);
  GC___REF(struct java_lang_StringBuilder) (*append_char)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JChar ch);
  GC___REF(struct java_lang_StringBuilder) (*append_java_lang_CharSequence)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(java_lang_CharSequence,seq));
  GC___REF(struct java_lang_StringBuilder) (*append_java_lang_CharSequence_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(java_lang_CharSequence,seq),JInt start,JInt end);
  GC___REF(struct java_lang_StringBuilder) (*append_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt inum);
  GC___REF(struct java_lang_StringBuilder) (*append_long)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JLong lnum);
  GC___REF(struct java_lang_StringBuilder) (*append_float)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JFloat fnum);
  GC___REF(struct java_lang_StringBuilder) (*append_double)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JDouble dnum);
  GC___REF(struct java_lang_StringBuilder) (*delete_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt start,JInt end);
  GC___REF(struct java_lang_StringBuilder) (*deleteCharAt_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt index);
  GC___REF(struct java_lang_StringBuilder) (*replace_int_int_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt start,JInt end,GC_PARAM(java_lang_String,str));
  GC___REF(struct java_lang_String) (*substring_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt beginIndex);
  GC___REF(struct java_lang_CharSequence) (*subSequence_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt beginIndex,JInt endIndex);
  GC___REF(struct java_lang_String) (*substring_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt beginIndex,JInt endIndex);
  GC___REF(struct java_lang_StringBuilder) (*insert_int_charA_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt offset,GC_PARAM(JCharArray,str),JInt str_offset,JInt len);
  GC___REF(struct java_lang_StringBuilder) (*insert_int_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt offset,GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_StringBuilder) (*insert_int_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt offset,GC_PARAM(java_lang_String,str));
  GC___REF(struct java_lang_StringBuilder) (*insert_int_charA)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt offset,GC_PARAM(JCharArray,data));
  GC___REF(struct java_lang_StringBuilder) (*insert_int_boolean)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt offset,JBoolean bool);
  GC___REF(struct java_lang_StringBuilder) (*insert_int_char)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt offset,JChar ch);
  GC___REF(struct java_lang_StringBuilder) (*insert_int_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt offset,JInt inum);
  GC___REF(struct java_lang_StringBuilder) (*insert_int_long)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt offset,JLong lnum);
  GC___REF(struct java_lang_StringBuilder) (*insert_int_float)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt offset,JFloat fnum);
  GC___REF(struct java_lang_StringBuilder) (*insert_int_double)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt offset,JDouble dnum);
  JInt (*indexOf_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(java_lang_String,str));
  JInt (*indexOf_java_lang_String_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(java_lang_String,str),JInt fromIndex);
  JInt (*lastIndexOf_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(java_lang_String,str));
  JInt (*lastIndexOf_java_lang_String_int)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),GC_PARAM(java_lang_String,str),JInt fromIndex);
  GC___REF(struct java_lang_StringBuilder) (*reverse)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this));
  JBoolean (*regionMatches_int_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this),JInt toffset,GC_PARAM(java_lang_String,other));
};
extern struct java_lang_StringBuilder_MethodTblStruct java_lang_StringBuilder_MethodTbl ;

#endif
