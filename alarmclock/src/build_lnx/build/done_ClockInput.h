#ifndef __CLASS_DONE_CLOCKINPUT_HEADER
#define __CLASS_DONE_CLOCKINPUT_HEADER

struct done_ClockInput_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct done_ClockInput_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[0];
};

typedef GC_STRUCT_BEGIN(done_ClockInput_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_REF(se_lth_cs_realtime_semaphore_CountingSem,_done_ClockInput_anyButtonChanged);
  volatile GC_STRUCT_VAR(JInt,_done_ClockInput_SHOW_TIME);
  volatile GC_STRUCT_VAR(JInt,_done_ClockInput_SET_ALARM);
  volatile GC_STRUCT_VAR(JInt,_done_ClockInput_SET_TIME);
GC_STRUCT_END(done_ClockInput_ClassStatic) done_ClockInput_ClassStatic;

typedef GC_STRUCT_BEGIN(done_ClockInput)
  GC_STRUCT_VAR(struct done_ClockInput_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
GC_STRUCT_END(done_ClockInput) done_ClockInput;

struct done_ClockInput_MethodTblStruct {
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
  GC___REF(struct se_lth_cs_realtime_semaphore_CountingSem) (*getSemaphoreInstance)();
  void (*giveInput)();
  JBoolean (*getAlarmFlag)();
  JInt (*getChoice)();
  JInt (*getValue)();
};
extern struct done_ClockInput_MethodTblStruct done_ClockInput_MethodTbl ;

#endif
