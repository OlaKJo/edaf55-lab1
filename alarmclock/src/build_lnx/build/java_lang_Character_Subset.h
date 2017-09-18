#ifndef __CLASS_JAVA_LANG_CHARACTER_SUBSET_HEADER
#define __CLASS_JAVA_LANG_CHARACTER_SUBSET_HEADER

struct java_lang_Character_Subset_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Character_Subset_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[0];
};

typedef GC_STRUCT_BEGIN(java_lang_Character_Subset_ClassStatic)
  /* static fields go here, from this class and its ancestors */
GC_STRUCT_END(java_lang_Character_Subset_ClassStatic) java_lang_Character_Subset_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_Character_Subset)
  GC_STRUCT_VAR(struct java_lang_Character_Subset_ClassStruct *,class);
  volatile GC_STRUCT_VAR(struct java_lang_Character_ClassStruct *,_that_);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_REF(java_lang_String,_java_lang_Character_Subset_name);
GC_STRUCT_END(java_lang_Character_Subset) java_lang_Character_Subset;

struct java_lang_Character_Subset_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Character_Subset,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Character_Subset,this),GC_PARAM(java_lang_Object,o));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Character_Subset,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
};
extern struct java_lang_Character_Subset_MethodTblStruct java_lang_Character_Subset_MethodTbl ;

#endif
