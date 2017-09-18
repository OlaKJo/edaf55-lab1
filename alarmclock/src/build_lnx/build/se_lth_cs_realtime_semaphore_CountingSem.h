#ifndef __CLASS_SE_LTH_CS_REALTIME_SEMAPHORE_COUNTINGSEM_HEADER
#define __CLASS_SE_LTH_CS_REALTIME_SEMAPHORE_COUNTINGSEM_HEADER

struct se_lth_cs_realtime_semaphore_CountingSem_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct se_lth_cs_realtime_semaphore_CountingSem_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[1];
};

typedef GC_STRUCT_BEGIN(se_lth_cs_realtime_semaphore_CountingSem_ClassStatic)
  /* static fields go here, from this class and its ancestors */
GC_STRUCT_END(se_lth_cs_realtime_semaphore_CountingSem_ClassStatic) se_lth_cs_realtime_semaphore_CountingSem_ClassStatic;

typedef GC_STRUCT_BEGIN(se_lth_cs_realtime_semaphore_CountingSem)
  GC_STRUCT_VAR(struct se_lth_cs_realtime_semaphore_CountingSem_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_VAR(JLong,_se_lth_cs_realtime_semaphore_CountingSem_target);
GC_STRUCT_END(se_lth_cs_realtime_semaphore_CountingSem) se_lth_cs_realtime_semaphore_CountingSem;

struct se_lth_cs_realtime_semaphore_CountingSem_MethodTblStruct {
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
  void (*give)(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this));
  void (*take)(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this));
  JBoolean (*tryTake_long)(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this),JLong timeout);
  JLong (*createCountingSem_int)(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this),JInt iValue);
  void (*giveCountingSem_long)(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this),JLong target);
  void (*takeCountingSem_long)(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this),JLong target);
  JBoolean (*takeCountingSem_long_long)(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this),JLong target,JLong timeout);
};
extern struct se_lth_cs_realtime_semaphore_CountingSem_MethodTblStruct se_lth_cs_realtime_semaphore_CountingSem_MethodTbl ;

#endif
