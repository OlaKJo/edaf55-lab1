#ifndef __CLASS_JAVA_LANG_ERRWRITER_HEADER
#define __CLASS_JAVA_LANG_ERRWRITER_HEADER

struct java_lang_ErrWriter_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_ErrWriter_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[0];
};

typedef GC_STRUCT_BEGIN(java_lang_ErrWriter_ClassStatic)
  /* static fields go here, from this class and its ancestors */
GC_STRUCT_END(java_lang_ErrWriter_ClassStatic) java_lang_ErrWriter_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_ErrWriter)
  GC_STRUCT_VAR(struct java_lang_ErrWriter_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_REF(java_io_OutputStream,_java_io_FilterOutputStream_out);
  volatile GC_STRUCT_REF(java_lang_String,_java_io_PrintStream_encoding);
  volatile GC_STRUCT_VAR(JBoolean,_java_io_PrintStream_error_occurred);
  volatile GC_STRUCT_VAR(JBoolean,_java_io_PrintStream_auto_flush);
GC_STRUCT_END(java_lang_ErrWriter) java_lang_ErrWriter;

struct java_lang_ErrWriter_MethodTblStruct {
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
  void (*write_int)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),JInt oneByte);
  void (*write_byteA)(void **__eFlag__, GC_PARAM(java_io_FilterOutputStream,this),GC_PARAM(JByteArray,buf));
  void (*write_byteA_int_int)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(JByteArray,buffer),JInt offset,JInt len);
  void (*flush)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this));
  void (*close)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this));
  JBoolean (*checkError)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this));
  void (*setError)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this));
  void (*print_java_lang_String_boolean)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(java_lang_String,str),JBoolean println);
  void (*print_charA_int_int_boolean)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(JCharArray,chars),JInt pos,JInt len,JBoolean println);
  void (*writeChars_charA_int_int)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(JCharArray,buf),JInt offset,JInt count);
  void (*writeChars_java_lang_String_int_int)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(java_lang_String,str),JInt offset,JInt count);
  void (*print_boolean)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JBoolean i);
  void (*print_int)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JInt i);
  void (*print_long)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JLong i);
  void (*print_float)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JFloat i);
  void (*print_double)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JDouble i);
  void (*print_java_lang_Object)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(java_lang_Object,obj));
  void (*print_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),GC_PARAM(java_lang_String,s));
  void (*print_char)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JChar i);
  void (*print_charA)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(JCharArray,charArray));
  void (*println)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this));
  void (*println_boolean)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JBoolean i);
  void (*println_int)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JInt i);
  void (*println_long)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JLong i);
  void (*println_float)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JFloat i);
  void (*println_double)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JDouble i);
  void (*println_java_lang_Object)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(java_lang_Object,obj));
  void (*println_java_lang_String)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),GC_PARAM(java_lang_String,s));
  void (*println_char)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JChar i);
  void (*println_charA)(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(JCharArray,charArray));
  void (*print)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this));
  void (*print_short)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JShort i);
  void (*println_short)(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this),JShort i);
};
extern struct java_lang_ErrWriter_MethodTblStruct java_lang_ErrWriter_MethodTbl ;

#endif
