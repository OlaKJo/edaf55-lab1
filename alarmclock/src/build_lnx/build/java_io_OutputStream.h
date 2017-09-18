#ifndef __CLASS_JAVA_IO_OUTPUTSTREAM_HEADER
#define __CLASS_JAVA_IO_OUTPUTSTREAM_HEADER

struct java_io_OutputStream_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_io_OutputStream_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[0];
};

typedef GC_STRUCT_BEGIN(java_io_OutputStream_ClassStatic)
  /* static fields go here, from this class and its ancestors */
GC_STRUCT_END(java_io_OutputStream_ClassStatic) java_io_OutputStream_ClassStatic;

typedef GC_STRUCT_BEGIN(java_io_OutputStream)
  GC_STRUCT_VAR(struct java_io_OutputStream_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
GC_STRUCT_END(java_io_OutputStream) java_io_OutputStream;

struct java_io_OutputStream_MethodTblStruct {
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
  void (*write_int)(void **__eFlag__, GC_PARAM(java_io_OutputStream,this),JInt b);
  void (*write_byteA)(void **__eFlag__, GC_PARAM(java_io_OutputStream,this),GC_PARAM(JByteArray,b));
  void (*write_byteA_int_int)(void **__eFlag__, GC_PARAM(java_io_OutputStream,this),GC_PARAM(JByteArray,b),JInt off,JInt len);
  void (*flush)(void **__eFlag__, GC_PARAM(java_io_OutputStream,this));
  void (*close)(void **__eFlag__, GC_PARAM(java_io_OutputStream,this));
};
extern struct java_io_OutputStream_MethodTblStruct java_io_OutputStream_MethodTbl ;

#endif
