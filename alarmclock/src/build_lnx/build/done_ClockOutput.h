#ifndef __CLASS_DONE_CLOCKOUTPUT_HEADER
#define __CLASS_DONE_CLOCKOUTPUT_HEADER

struct done_ClockOutput_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct done_ClockOutput_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[0];
};

typedef GC_STRUCT_BEGIN(done_ClockOutput_ClassStatic)
  /* static fields go here, from this class and its ancestors */
GC_STRUCT_END(done_ClockOutput_ClassStatic) done_ClockOutput_ClassStatic;

typedef GC_STRUCT_BEGIN(done_ClockOutput)
  GC_STRUCT_VAR(struct done_ClockOutput_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
GC_STRUCT_END(done_ClockOutput) done_ClockOutput;

struct done_ClockOutput_MethodTblStruct {
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
  void (*setupWindow)();
  void (*setupAlarm)();
  void (*doAlarm)();
  void (*showTime_int)(JInt hhmmss);
  void (*diagnostics)();
};
extern struct done_ClockOutput_MethodTblStruct done_ClockOutput_MethodTbl ;

#endif
