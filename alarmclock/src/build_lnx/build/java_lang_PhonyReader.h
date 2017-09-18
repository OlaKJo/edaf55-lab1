#ifndef __CLASS_JAVA_LANG_PHONYREADER_HEADER
#define __CLASS_JAVA_LANG_PHONYREADER_HEADER

struct java_lang_PhonyReader_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_PhonyReader_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[0];
};

typedef GC_STRUCT_BEGIN(java_lang_PhonyReader_ClassStatic)
  /* static fields go here, from this class and its ancestors */
GC_STRUCT_END(java_lang_PhonyReader_ClassStatic) java_lang_PhonyReader_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_PhonyReader)
  GC_STRUCT_VAR(struct java_lang_PhonyReader_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
GC_STRUCT_END(java_lang_PhonyReader) java_lang_PhonyReader;

struct java_lang_PhonyReader_MethodTblStruct {
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
  JInt (*available)(void **__eFlag__, GC_PARAM(java_io_InputStream,this));
  void (*close)(void **__eFlag__, GC_PARAM(java_io_InputStream,this));
  void (*mark_int)(void **__eFlag__, GC_PARAM(java_io_InputStream,this),JInt readLimit);
  JBoolean (*markSupported)(void **__eFlag__, GC_PARAM(java_io_InputStream,this));
  JInt (*read)(void **__eFlag__, GC_PARAM(java_lang_PhonyReader,this));
  JInt (*read_byteA)(void **__eFlag__, GC_PARAM(java_io_InputStream,this),GC_PARAM(JByteArray,b));
  JInt (*read_byteA_int_int)(void **__eFlag__, GC_PARAM(java_io_InputStream,this),GC_PARAM(JByteArray,b),JInt off,JInt len);
  void (*reset)(void **__eFlag__, GC_PARAM(java_io_InputStream,this));
  JLong (*skip_long)(void **__eFlag__, GC_PARAM(java_io_InputStream,this),JLong n);
};
extern struct java_lang_PhonyReader_MethodTblStruct java_lang_PhonyReader_MethodTbl ;

#endif
