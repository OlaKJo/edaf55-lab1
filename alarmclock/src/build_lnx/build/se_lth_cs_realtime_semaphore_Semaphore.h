#ifndef __CLASS_SE_LTH_CS_REALTIME_SEMAPHORE_SEMAPHORE_HEADER
#define __CLASS_SE_LTH_CS_REALTIME_SEMAPHORE_SEMAPHORE_HEADER

struct se_lth_cs_realtime_semaphore_Semaphore_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct se_lth_cs_realtime_semaphore_Semaphore_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
};
typedef GC_STRUCT_BEGIN(se_lth_cs_realtime_semaphore_Semaphore_ClassStatic)
  /*  interface attributes go here, from this interface */
GC_STRUCT_END(se_lth_cs_realtime_semaphore_Semaphore_ClassStatic) se_lth_cs_realtime_semaphore_Semaphore_ClassStatic;


typedef GC_STRUCT_BEGIN(se_lth_cs_realtime_semaphore_Semaphore)
  GC_STRUCT_VAR(struct se_lth_cs_realtime_semaphore_Semaphore_ClassStruct *,class);
GC_STRUCT_END(se_lth_cs_realtime_semaphore_Semaphore) se_lth_cs_realtime_semaphore_Semaphore;

struct se_lth_cs_realtime_semaphore_Semaphore_MethodTblStruct {
  /* Method pointers */
  JBoolean (*tryTake_long)(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_Semaphore,this),JLong timeout);
  void (*give)(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_Semaphore,this));
  void (*take)(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_Semaphore,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
};
extern struct se_lth_cs_realtime_semaphore_Semaphore_MethodTblStruct se_lth_cs_realtime_semaphore_Semaphore_MethodTbl ;

#endif
