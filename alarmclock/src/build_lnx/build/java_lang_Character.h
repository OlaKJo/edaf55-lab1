#ifndef __CLASS_JAVA_LANG_CHARACTER_HEADER
#define __CLASS_JAVA_LANG_CHARACTER_HEADER

struct java_lang_Character_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Character_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[2];
};

typedef GC_STRUCT_BEGIN(java_lang_Character_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JLong,_java_lang_Character_serialVersionUID);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Character_MIN_RADIX);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Character_MAX_RADIX);
  volatile GC_STRUCT_VAR(JChar,_java_lang_Character_MIN_VALUE);
  volatile GC_STRUCT_VAR(JChar,_java_lang_Character_MAX_VALUE);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_UPPERCASE_LETTER);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_LOWERCASE_LETTER);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_TITLECASE_LETTER);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_NON_SPACING_MARK);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_COMBINING_SPACING_MARK);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_ENCLOSING_MARK);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DECIMAL_DIGIT_NUMBER);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_LETTER_NUMBER);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_OTHER_NUMBER);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_SPACE_SEPARATOR);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_LINE_SEPARATOR);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_PARAGRAPH_SEPARATOR);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_CONTROL);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_FORMAT);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_SURROGATE);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_PRIVATE_USE);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_UNASSIGNED);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_MODIFIER_LETTER);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_OTHER_LETTER);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_CONNECTOR_PUNCTUATION);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DASH_PUNCTUATION);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_START_PUNCTUATION);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_END_PUNCTUATION);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_INITIAL_QUOTE_PUNCTUATION);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_FINAL_QUOTE_PUNCTUATION);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_OTHER_PUNCTUATION);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_MATH_SYMBOL);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_CURRENCY_SYMBOL);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_MODIFIER_SYMBOL);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_OTHER_SYMBOL);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_UNDEFINED);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_ARABIC_NUMBER);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_NONSPACING_MARK);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_BOUNDARY_NEUTRAL);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_PARAGRAPH_SEPARATOR);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_SEGMENT_SEPARATOR);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_WHITESPACE);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_OTHER_NEUTRALS);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE);
  volatile GC_STRUCT_VAR(JByte,_java_lang_Character_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT);
  volatile GC_STRUCT_REF(java_lang_String,_java_lang_Character_NUM_VALUE);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Character_TYPE_MASK);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Character_NO_BREAK_MASK);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Character_MIRROR_MASK);
GC_STRUCT_END(java_lang_Character_ClassStatic) java_lang_Character_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_Character)
  GC_STRUCT_VAR(struct java_lang_Character_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_VAR(JChar,_java_lang_Character_value);
GC_STRUCT_END(java_lang_Character) java_lang_Character;

struct java_lang_Character_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Character,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Character,this),GC_PARAM(java_lang_Object,o));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Character,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JChar (*readChar_char)(JChar ch);
  JChar (*charValue)(void **__eFlag__, GC_PARAM(java_lang_Character,this));
  GC___REF(struct java_lang_String) (*toString_char)(JChar ch);
  JBoolean (*isLowerCase_char)(JChar ch);
  JBoolean (*isUpperCase_char)(JChar ch);
  JBoolean (*isTitleCase_char)(JChar ch);
  JBoolean (*isDigit_char)(JChar ch);
  JBoolean (*isDefined_char)(JChar ch);
  JBoolean (*isLetter_char)(JChar ch);
  JBoolean (*isLetterOrDigit_char)(JChar ch);
  JBoolean (*isJavaLetter_char)(JChar ch);
  JBoolean (*isJavaLetterOrDigit_char)(JChar ch);
  JBoolean (*isJavaIdentifierStart_char)(JChar ch);
  JBoolean (*isJavaIdentifierPart_char)(JChar ch);
  JBoolean (*isUnicodeIdentifierStart_char)(JChar ch);
  JBoolean (*isUnicodeIdentifierPart_char)(JChar ch);
  JBoolean (*isIdentifierIgnorable_char)(JChar ch);
  JChar (*toLowerCase_char)(JChar ch);
  JChar (*toUpperCase_char)(JChar ch);
  JChar (*toTitleCase_char)(JChar ch);
  JInt (*digit_char_int)(JChar ch,JInt radix);
  JInt (*getNumericValue_char)(JChar ch);
  JBoolean (*isSpace_char)(JChar ch);
  JBoolean (*isSpaceChar_char)(JChar ch);
  JBoolean (*isWhitespace_char)(JChar ch);
  JBoolean (*isISOControl_char)(JChar ch);
  JInt (*getType_char)(JChar ch);
  JChar (*forDigit_int_int)(JInt digit,JInt radix);
  JByte (*getDirectionality_char)(JChar ch);
  JBoolean (*isMirrored_char)(JChar ch);
  JInt (*compareTo_java_lang_Character)(void **__eFlag__, GC_PARAM(java_lang_Character,this),GC_PARAM(java_lang_Character,anotherCharacter));
  JInt (*compareTo_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Character,this),GC_PARAM(java_lang_Object,o));
};
extern struct java_lang_Character_MethodTblStruct java_lang_Character_MethodTbl ;

#endif
