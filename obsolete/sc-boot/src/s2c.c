#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_PointerOf_1;
Symbol sym_Pointer_2;
Symbol sym_ParamListVarArgs_1;
Symbol sym_ParamList_1;
Symbol sym_ArrayDecl_2;
Symbol sym_DeclBracket_1;
Symbol sym_DeclBracket1_1;
Symbol sym_DeclBracket2_1;
Symbol sym_FunType_2;
Symbol sym_ParamDecl_2;
Symbol sym_ParamDecl2_2;
Symbol sym_TypeName_2;
Symbol sym_Enum_2;
Symbol sym_EnumId_1;
Symbol sym_Enumerator_2;
Symbol sym_EnumVal_1;
Symbol sym_Struct_2;
Symbol sym_StructId_1;
Symbol sym_Union_2;
Symbol sym_UnionId_1;
Symbol sym_MemDecl_2;
Symbol sym_MemDecl1_2;
Symbol sym_BitFieldSize_2;
Symbol sym_IntConst_1;
Symbol sym_FloatConst_1;
Symbol sym_OctConst_1;
Symbol sym_HexConst_1;
Symbol sym_CharConst_1;
Symbol sym_StringLit_1;
Symbol sym_ArrayIndex_2;
Symbol sym_FunCall_2;
Symbol sym_Field_2;
Symbol sym_DerefMember_2;
Symbol sym_PostIncr_1;
Symbol sym_PostDecr_1;
Symbol sym_PreIncr_1;
Symbol sym_PreDecr_1;
Symbol sym_SizeofExp_1;
Symbol sym_SizeofType_1;
Symbol sym_Address_1;
Symbol sym_Deref_1;
Symbol sym_Positive_1;
Symbol sym_Negative_1;
Symbol sym_Tilde_1;
Symbol sym_Negation_1;
Symbol sym_TypeCast_2;
Symbol sym_Mul_2;
Symbol sym_Div_2;
Symbol sym_Mod_2;
Symbol sym_Add_2;
Symbol sym_Subt_2;
Symbol sym_ShiftLeft_2;
Symbol sym_ShiftRight_2;
Symbol sym_Lt_2;
Symbol sym_Gt_2;
Symbol sym_Le_2;
Symbol sym_Ge_2;
Symbol sym_Equal_2;
Symbol sym_NotEqual_2;
Symbol sym_And_2;
Symbol sym_ExOr_2;
Symbol sym_IncOr_2;
Symbol sym_LAnd_2;
Symbol sym_LOr_2;
Symbol sym_IfExp_3;
Symbol sym_Assign_3;
Symbol sym_AssignEq_0;
Symbol sym_AssignMul_0;
Symbol sym_AssignDiv_0;
Symbol sym_AssignMod_0;
Symbol sym_AssignPlus_0;
Symbol sym_AssignMin_0;
Symbol sym_AssignSL_0;
Symbol sym_AssignSR_0;
Symbol sym_AssignAnd_0;
Symbol sym_AssignExp_0;
Symbol sym_AssignOr_0;
Symbol sym_Comma_2;
Symbol sym_EmptyExp_0;
Symbol sym_Typedef_0;
Symbol sym_Extern_0;
Symbol sym_Static_0;
Symbol sym_Auto_0;
Symbol sym_Register_0;
Symbol sym_Int_0;
Symbol sym_Char_0;
Symbol sym_Short_0;
Symbol sym_Long_0;
Symbol sym_Float_0;
Symbol sym_Double_0;
Symbol sym_Signed_0;
Symbol sym_Unsigned_0;
Symbol sym_Void_0;
Symbol sym_Const_0;
Symbol sym_Volatile_0;
Symbol sym_Declaration_2;
Symbol sym_Declaration2_2;
Symbol sym_IdDeclInit_2;
Symbol sym_DeclInit_2;
Symbol sym_ArrayInit_1;
Symbol sym_ArrayInitIncomplete_1;
Symbol sym_AssignInit_1;
Symbol sym_TypeSpec_3;
Symbol sym_DQualifiers_3;
Symbol sym_DeclSpec_5;
Symbol sym_Id_1;
Symbol sym_TypeId_1;
Symbol sym_Label_2;
Symbol sym_Case_2;
Symbol sym_Default_1;
Symbol sym_Compound_2;
Symbol sym_Stat_1;
Symbol sym_If_2;
Symbol sym_IfElse_3;
Symbol sym_Switch_2;
Symbol sym_While_2;
Symbol sym_DoWhile_2;
Symbol sym_For_4;
Symbol sym_Goto_1;
Symbol sym_Continue_0;
Symbol sym_Break_0;
Symbol sym_Return_1;
Symbol sym_Exit_1;
Symbol sym_FunDef_3;
Symbol sym_NoTypeSpecifier_0;
Symbol sym_TranslationUnit_1;
Symbol sym_Include_1;
Symbol sym_IdDecl_3;
Symbol sym_FunDecl_3;
Symbol sym_TypedefDeclarator1_3;
Symbol sym_TypedefDeclarator2_3;
Symbol sym_OldFunction1_3;
Symbol sym_OldFunction2_3;
Symbol sym_PpIf_4;
Symbol sym_return_0;
Symbol sym_exit_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Mod_2;
Symbol sym_Overlay_3;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_Bagof_1;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_TraceAll_0;
Symbol sym_Trace_1;
Symbol sym_InitCachedTerms_0;
Symbol sym_Match_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_PointerOf_1 = ATmakeSymbol("PointerOf", 1, ATfalse);
  ATprotectSymbol(sym_PointerOf_1);
  sym_Pointer_2 = ATmakeSymbol("Pointer", 2, ATfalse);
  ATprotectSymbol(sym_Pointer_2);
  sym_ParamListVarArgs_1 = ATmakeSymbol("ParamListVarArgs", 1, ATfalse);
  ATprotectSymbol(sym_ParamListVarArgs_1);
  sym_ParamList_1 = ATmakeSymbol("ParamList", 1, ATfalse);
  ATprotectSymbol(sym_ParamList_1);
  sym_ArrayDecl_2 = ATmakeSymbol("ArrayDecl", 2, ATfalse);
  ATprotectSymbol(sym_ArrayDecl_2);
  sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket_1);
  sym_DeclBracket1_1 = ATmakeSymbol("DeclBracket1", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket1_1);
  sym_DeclBracket2_1 = ATmakeSymbol("DeclBracket2", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket2_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl_2);
  sym_ParamDecl2_2 = ATmakeSymbol("ParamDecl2", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl2_2);
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_Enum_2 = ATmakeSymbol("Enum", 2, ATfalse);
  ATprotectSymbol(sym_Enum_2);
  sym_EnumId_1 = ATmakeSymbol("EnumId", 1, ATfalse);
  ATprotectSymbol(sym_EnumId_1);
  sym_Enumerator_2 = ATmakeSymbol("Enumerator", 2, ATfalse);
  ATprotectSymbol(sym_Enumerator_2);
  sym_EnumVal_1 = ATmakeSymbol("EnumVal", 1, ATfalse);
  ATprotectSymbol(sym_EnumVal_1);
  sym_Struct_2 = ATmakeSymbol("Struct", 2, ATfalse);
  ATprotectSymbol(sym_Struct_2);
  sym_StructId_1 = ATmakeSymbol("StructId", 1, ATfalse);
  ATprotectSymbol(sym_StructId_1);
  sym_Union_2 = ATmakeSymbol("Union", 2, ATfalse);
  ATprotectSymbol(sym_Union_2);
  sym_UnionId_1 = ATmakeSymbol("UnionId", 1, ATfalse);
  ATprotectSymbol(sym_UnionId_1);
  sym_MemDecl_2 = ATmakeSymbol("MemDecl", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl_2);
  sym_MemDecl1_2 = ATmakeSymbol("MemDecl1", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl1_2);
  sym_BitFieldSize_2 = ATmakeSymbol("BitFieldSize", 2, ATfalse);
  ATprotectSymbol(sym_BitFieldSize_2);
  sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
  ATprotectSymbol(sym_IntConst_1);
  sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
  ATprotectSymbol(sym_FloatConst_1);
  sym_OctConst_1 = ATmakeSymbol("OctConst", 1, ATfalse);
  ATprotectSymbol(sym_OctConst_1);
  sym_HexConst_1 = ATmakeSymbol("HexConst", 1, ATfalse);
  ATprotectSymbol(sym_HexConst_1);
  sym_CharConst_1 = ATmakeSymbol("CharConst", 1, ATfalse);
  ATprotectSymbol(sym_CharConst_1);
  sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
  ATprotectSymbol(sym_StringLit_1);
  sym_ArrayIndex_2 = ATmakeSymbol("ArrayIndex", 2, ATfalse);
  ATprotectSymbol(sym_ArrayIndex_2);
  sym_FunCall_2 = ATmakeSymbol("FunCall", 2, ATfalse);
  ATprotectSymbol(sym_FunCall_2);
  sym_Field_2 = ATmakeSymbol("Field", 2, ATfalse);
  ATprotectSymbol(sym_Field_2);
  sym_DerefMember_2 = ATmakeSymbol("DerefMember", 2, ATfalse);
  ATprotectSymbol(sym_DerefMember_2);
  sym_PostIncr_1 = ATmakeSymbol("PostIncr", 1, ATfalse);
  ATprotectSymbol(sym_PostIncr_1);
  sym_PostDecr_1 = ATmakeSymbol("PostDecr", 1, ATfalse);
  ATprotectSymbol(sym_PostDecr_1);
  sym_PreIncr_1 = ATmakeSymbol("PreIncr", 1, ATfalse);
  ATprotectSymbol(sym_PreIncr_1);
  sym_PreDecr_1 = ATmakeSymbol("PreDecr", 1, ATfalse);
  ATprotectSymbol(sym_PreDecr_1);
  sym_SizeofExp_1 = ATmakeSymbol("SizeofExp", 1, ATfalse);
  ATprotectSymbol(sym_SizeofExp_1);
  sym_SizeofType_1 = ATmakeSymbol("SizeofType", 1, ATfalse);
  ATprotectSymbol(sym_SizeofType_1);
  sym_Address_1 = ATmakeSymbol("Address", 1, ATfalse);
  ATprotectSymbol(sym_Address_1);
  sym_Deref_1 = ATmakeSymbol("Deref", 1, ATfalse);
  ATprotectSymbol(sym_Deref_1);
  sym_Positive_1 = ATmakeSymbol("Positive", 1, ATfalse);
  ATprotectSymbol(sym_Positive_1);
  sym_Negative_1 = ATmakeSymbol("Negative", 1, ATfalse);
  ATprotectSymbol(sym_Negative_1);
  sym_Tilde_1 = ATmakeSymbol("Tilde", 1, ATfalse);
  ATprotectSymbol(sym_Tilde_1);
  sym_Negation_1 = ATmakeSymbol("Negation", 1, ATfalse);
  ATprotectSymbol(sym_Negation_1);
  sym_TypeCast_2 = ATmakeSymbol("TypeCast", 2, ATfalse);
  ATprotectSymbol(sym_TypeCast_2);
  sym_Mul_2 = ATmakeSymbol("Mul", 2, ATfalse);
  ATprotectSymbol(sym_Mul_2);
  sym_Div_2 = ATmakeSymbol("Div", 2, ATfalse);
  ATprotectSymbol(sym_Div_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Add_2 = ATmakeSymbol("Add", 2, ATfalse);
  ATprotectSymbol(sym_Add_2);
  sym_Subt_2 = ATmakeSymbol("Subt", 2, ATfalse);
  ATprotectSymbol(sym_Subt_2);
  sym_ShiftLeft_2 = ATmakeSymbol("ShiftLeft", 2, ATfalse);
  ATprotectSymbol(sym_ShiftLeft_2);
  sym_ShiftRight_2 = ATmakeSymbol("ShiftRight", 2, ATfalse);
  ATprotectSymbol(sym_ShiftRight_2);
  sym_Lt_2 = ATmakeSymbol("Lt", 2, ATfalse);
  ATprotectSymbol(sym_Lt_2);
  sym_Gt_2 = ATmakeSymbol("Gt", 2, ATfalse);
  ATprotectSymbol(sym_Gt_2);
  sym_Le_2 = ATmakeSymbol("Le", 2, ATfalse);
  ATprotectSymbol(sym_Le_2);
  sym_Ge_2 = ATmakeSymbol("Ge", 2, ATfalse);
  ATprotectSymbol(sym_Ge_2);
  sym_Equal_2 = ATmakeSymbol("Equal", 2, ATfalse);
  ATprotectSymbol(sym_Equal_2);
  sym_NotEqual_2 = ATmakeSymbol("NotEqual", 2, ATfalse);
  ATprotectSymbol(sym_NotEqual_2);
  sym_And_2 = ATmakeSymbol("And", 2, ATfalse);
  ATprotectSymbol(sym_And_2);
  sym_ExOr_2 = ATmakeSymbol("ExOr", 2, ATfalse);
  ATprotectSymbol(sym_ExOr_2);
  sym_IncOr_2 = ATmakeSymbol("IncOr", 2, ATfalse);
  ATprotectSymbol(sym_IncOr_2);
  sym_LAnd_2 = ATmakeSymbol("LAnd", 2, ATfalse);
  ATprotectSymbol(sym_LAnd_2);
  sym_LOr_2 = ATmakeSymbol("LOr", 2, ATfalse);
  ATprotectSymbol(sym_LOr_2);
  sym_IfExp_3 = ATmakeSymbol("IfExp", 3, ATfalse);
  ATprotectSymbol(sym_IfExp_3);
  sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
  ATprotectSymbol(sym_Assign_3);
  sym_AssignEq_0 = ATmakeSymbol("AssignEq", 0, ATfalse);
  ATprotectSymbol(sym_AssignEq_0);
  sym_AssignMul_0 = ATmakeSymbol("AssignMul", 0, ATfalse);
  ATprotectSymbol(sym_AssignMul_0);
  sym_AssignDiv_0 = ATmakeSymbol("AssignDiv", 0, ATfalse);
  ATprotectSymbol(sym_AssignDiv_0);
  sym_AssignMod_0 = ATmakeSymbol("AssignMod", 0, ATfalse);
  ATprotectSymbol(sym_AssignMod_0);
  sym_AssignPlus_0 = ATmakeSymbol("AssignPlus", 0, ATfalse);
  ATprotectSymbol(sym_AssignPlus_0);
  sym_AssignMin_0 = ATmakeSymbol("AssignMin", 0, ATfalse);
  ATprotectSymbol(sym_AssignMin_0);
  sym_AssignSL_0 = ATmakeSymbol("AssignSL", 0, ATfalse);
  ATprotectSymbol(sym_AssignSL_0);
  sym_AssignSR_0 = ATmakeSymbol("AssignSR", 0, ATfalse);
  ATprotectSymbol(sym_AssignSR_0);
  sym_AssignAnd_0 = ATmakeSymbol("AssignAnd", 0, ATfalse);
  ATprotectSymbol(sym_AssignAnd_0);
  sym_AssignExp_0 = ATmakeSymbol("AssignExp", 0, ATfalse);
  ATprotectSymbol(sym_AssignExp_0);
  sym_AssignOr_0 = ATmakeSymbol("AssignOr", 0, ATfalse);
  ATprotectSymbol(sym_AssignOr_0);
  sym_Comma_2 = ATmakeSymbol("Comma", 2, ATfalse);
  ATprotectSymbol(sym_Comma_2);
  sym_EmptyExp_0 = ATmakeSymbol("EmptyExp", 0, ATfalse);
  ATprotectSymbol(sym_EmptyExp_0);
  sym_Typedef_0 = ATmakeSymbol("Typedef", 0, ATfalse);
  ATprotectSymbol(sym_Typedef_0);
  sym_Extern_0 = ATmakeSymbol("Extern", 0, ATfalse);
  ATprotectSymbol(sym_Extern_0);
  sym_Static_0 = ATmakeSymbol("Static", 0, ATfalse);
  ATprotectSymbol(sym_Static_0);
  sym_Auto_0 = ATmakeSymbol("Auto", 0, ATfalse);
  ATprotectSymbol(sym_Auto_0);
  sym_Register_0 = ATmakeSymbol("Register", 0, ATfalse);
  ATprotectSymbol(sym_Register_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Char_0 = ATmakeSymbol("Char", 0, ATfalse);
  ATprotectSymbol(sym_Char_0);
  sym_Short_0 = ATmakeSymbol("Short", 0, ATfalse);
  ATprotectSymbol(sym_Short_0);
  sym_Long_0 = ATmakeSymbol("Long", 0, ATfalse);
  ATprotectSymbol(sym_Long_0);
  sym_Float_0 = ATmakeSymbol("Float", 0, ATfalse);
  ATprotectSymbol(sym_Float_0);
  sym_Double_0 = ATmakeSymbol("Double", 0, ATfalse);
  ATprotectSymbol(sym_Double_0);
  sym_Signed_0 = ATmakeSymbol("Signed", 0, ATfalse);
  ATprotectSymbol(sym_Signed_0);
  sym_Unsigned_0 = ATmakeSymbol("Unsigned", 0, ATfalse);
  ATprotectSymbol(sym_Unsigned_0);
  sym_Void_0 = ATmakeSymbol("Void", 0, ATfalse);
  ATprotectSymbol(sym_Void_0);
  sym_Const_0 = ATmakeSymbol("Const", 0, ATfalse);
  ATprotectSymbol(sym_Const_0);
  sym_Volatile_0 = ATmakeSymbol("Volatile", 0, ATfalse);
  ATprotectSymbol(sym_Volatile_0);
  sym_Declaration_2 = ATmakeSymbol("Declaration", 2, ATfalse);
  ATprotectSymbol(sym_Declaration_2);
  sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
  ATprotectSymbol(sym_Declaration2_2);
  sym_IdDeclInit_2 = ATmakeSymbol("IdDeclInit", 2, ATfalse);
  ATprotectSymbol(sym_IdDeclInit_2);
  sym_DeclInit_2 = ATmakeSymbol("DeclInit", 2, ATfalse);
  ATprotectSymbol(sym_DeclInit_2);
  sym_ArrayInit_1 = ATmakeSymbol("ArrayInit", 1, ATfalse);
  ATprotectSymbol(sym_ArrayInit_1);
  sym_ArrayInitIncomplete_1 = ATmakeSymbol("ArrayInitIncomplete", 1, ATfalse);
  ATprotectSymbol(sym_ArrayInitIncomplete_1);
  sym_AssignInit_1 = ATmakeSymbol("AssignInit", 1, ATfalse);
  ATprotectSymbol(sym_AssignInit_1);
  sym_TypeSpec_3 = ATmakeSymbol("TypeSpec", 3, ATfalse);
  ATprotectSymbol(sym_TypeSpec_3);
  sym_DQualifiers_3 = ATmakeSymbol("DQualifiers", 3, ATfalse);
  ATprotectSymbol(sym_DQualifiers_3);
  sym_DeclSpec_5 = ATmakeSymbol("DeclSpec", 5, ATfalse);
  ATprotectSymbol(sym_DeclSpec_5);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
  ATprotectSymbol(sym_TypeId_1);
  sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
  ATprotectSymbol(sym_Label_2);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Default_1 = ATmakeSymbol("Default", 1, ATfalse);
  ATprotectSymbol(sym_Default_1);
  sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
  ATprotectSymbol(sym_Compound_2);
  sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
  ATprotectSymbol(sym_Stat_1);
  sym_If_2 = ATmakeSymbol("If", 2, ATfalse);
  ATprotectSymbol(sym_If_2);
  sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
  ATprotectSymbol(sym_IfElse_3);
  sym_Switch_2 = ATmakeSymbol("Switch", 2, ATfalse);
  ATprotectSymbol(sym_Switch_2);
  sym_While_2 = ATmakeSymbol("While", 2, ATfalse);
  ATprotectSymbol(sym_While_2);
  sym_DoWhile_2 = ATmakeSymbol("DoWhile", 2, ATfalse);
  ATprotectSymbol(sym_DoWhile_2);
  sym_For_4 = ATmakeSymbol("For", 4, ATfalse);
  ATprotectSymbol(sym_For_4);
  sym_Goto_1 = ATmakeSymbol("Goto", 1, ATfalse);
  ATprotectSymbol(sym_Goto_1);
  sym_Continue_0 = ATmakeSymbol("Continue", 0, ATfalse);
  ATprotectSymbol(sym_Continue_0);
  sym_Break_0 = ATmakeSymbol("Break", 0, ATfalse);
  ATprotectSymbol(sym_Break_0);
  sym_Return_1 = ATmakeSymbol("Return", 1, ATfalse);
  ATprotectSymbol(sym_Return_1);
  sym_Exit_1 = ATmakeSymbol("Exit", 1, ATfalse);
  ATprotectSymbol(sym_Exit_1);
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_NoTypeSpecifier_0 = ATmakeSymbol("NoTypeSpecifier", 0, ATfalse);
  ATprotectSymbol(sym_NoTypeSpecifier_0);
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
  ATprotectSymbol(sym_IdDecl_3);
  sym_FunDecl_3 = ATmakeSymbol("FunDecl", 3, ATfalse);
  ATprotectSymbol(sym_FunDecl_3);
  sym_TypedefDeclarator1_3 = ATmakeSymbol("TypedefDeclarator1", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator1_3);
  sym_TypedefDeclarator2_3 = ATmakeSymbol("TypedefDeclarator2", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator2_3);
  sym_OldFunction1_3 = ATmakeSymbol("OldFunction1", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction1_3);
  sym_OldFunction2_3 = ATmakeSymbol("OldFunction2", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction2_3);
  sym_PpIf_4 = ATmakeSymbol("PpIf", 4, ATfalse);
  ATprotectSymbol(sym_PpIf_4);
  sym_return_0 = ATmakeSymbol("return", 0, ATfalse);
  ATprotectSymbol(sym_return_0);
  sym_exit_0 = ATmakeSymbol("exit", 0, ATfalse);
  ATprotectSymbol(sym_exit_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
  ATprotectSymbol(sym_Final_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_TraceAll_0 = ATmakeSymbol("TraceAll", 0, ATfalse);
  ATprotectSymbol(sym_TraceAll_0);
  sym_Trace_1 = ATmakeSymbol("Trace", 1, ATfalse);
  ATprotectSymbol(sym_Trace_1);
  sym_InitCachedTerms_0 = ATmakeSymbol("InitCachedTerms", 0, ATfalse);
  ATprotectSymbol(sym_InitCachedTerms_0);
  sym_Match_2 = ATmakeSymbol("Match", 2, ATfalse);
  ATprotectSymbol(sym_Match_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_x_37;
ATerm term_p_37;
ATerm term_m_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_y_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_l_30;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_b_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_b_25;
ATerm term_w_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_q_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_j_15;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_l_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_p_9;
ATerm term_b_9;
void init_constant_terms (void)
{
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_f_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Id_1, term_s_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_11, (ATerm) ATempty);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Id_1, term_e_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATinsert(ATempty, term_d_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_ParamList_1, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Some_1, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_k_11, term_n_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_11, (ATerm) ATempty);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_TypeName_2, term_a_12, term_l_12);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Id_1, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Id_1, term_z_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Id_1, term_e_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_IntConst_1, term_h_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Id_1, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATinsert(ATempty, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATinsert(CheckATermList(term_m_16), term_j_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Id_1, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Id_1, term_q_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Id_1, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Id_1, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Id_1, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, term_h_17);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Id_1, term_l_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Id_1, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Id_1, term_q_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Id_1, term_w_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Id_1, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Id_1, term_m_14);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Id_1, term_f_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Id_1, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Id_1, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_m_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_19, (ATerm) ATempty);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_q_19, term_l_12);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Id_1, term_s_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Id_1, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Id_1, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATinsert(ATempty, term_j_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Stat_1, term_b_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_1, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Id_1, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_m_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_20, (ATerm) ATempty);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_s_20, term_l_12);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Id_1, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Id_1, term_w_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_20, (ATerm) ATempty);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_a_21, term_l_12);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Id_1, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_e_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_21, (ATerm) ATempty);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_21, term_l_12);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_j_19);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Id_1, term_o_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_21, (ATerm) ATempty);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_u_21, term_j_16);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Id_1, term_x_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_21, (ATerm) ATempty);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_19, term_j_19);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_c_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATinsert(ATempty, term_d_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATinsert(CheckATermList(term_e_22), term_b_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Id_1, term_q_22);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_23, (ATerm) ATempty);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Equal_2, term_f_23, term_j_16);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_23, (ATerm) ATempty);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Id_1, term_k_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_l_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Id_1, term_w_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_e_19);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Return_1, term_j_19);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATinsert(ATempty, term_w_24);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATinsert(ATempty, term_o_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATinsert(ATempty, term_q_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Id_1, term_t_25);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_j_19, term_l_12);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, term_d_26);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Id_1, term_j_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATinsert(ATempty, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Id_1, term_m_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_11, (ATerm) ATempty);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_o_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATinsert(ATempty, term_p_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Id_1, term_r_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_26, term_n_11);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_27);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_27, (ATerm) ATempty);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_Include_1, term_p_27);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <ssl/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Include_1, term_r_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_t_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_u_27, (ATerm) ATempty);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Some_1, term_w_27);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_k_11, term_x_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATinsert(ATempty, term_y_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_27, term_z_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Op_2, term_x_28, (ATerm) ATempty);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATinsert(ATempty, term_m_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATinsert(ATempty, term_o_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_s_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATinsert(ATempty, term_w_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATinsert(ATempty, term_o_35);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_p_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_u_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__3, term_t_35, term_u_35, (ATerm) ATempty);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ArgOption_2 (ATerm, ATerm g_73 (ATerm), ATerm h_73 (ATerm));
ATerm debug_1 (ATerm, ATerm t_74 (ATerm));
ATerm Option_2 (ATerm, ATerm v_72 (ATerm), ATerm w_72 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm p_87 (ATerm));
ATerm Stat_1 (ATerm, ATerm r_60 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm g_89 (ATerm), ATerm h_89 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_89 (ATerm));
ATerm new_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm z_85 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm x_85 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm x_0 (ATerm), ATerm a_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm r_78 (ATerm));
ATerm Var_1 (ATerm, ATerm a_66 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm y_63 (ATerm));
ATerm Real_1 (ATerm, ATerm t_0 (ATerm));
ATerm Str_1 (ATerm, ATerm s_0 (ATerm));
ATerm Int_1 (ATerm, ATerm r_0 (ATerm));
ATerm Op_2 (ATerm, ATerm e_66 (ATerm), ATerm f_66 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm i_60 (ATerm));
ATerm FunCall_2 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm TranslateStrat_0 (ATerm);
ATerm PlainBody_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm TracedBody_0 (ATerm);
ATerm TraceAllFuns_0 (ATerm);
ATerm TraceFun_0 (ATerm);
ATerm TranslateDef_0 (ATerm);
ATerm quote_1 (ATerm, ATerm b_76 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm e_69 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm q_0 (ATerm));
ATerm escape_1 (ATerm, ATerm o_75 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm));
ATerm length_0 (ATerm);
ATerm Arity_0 (ATerm);
ATerm DeclareConstructor_0 (ATerm);
ATerm TranslateSig_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm TranslateType_0 (ATerm);
ATerm TranslateVarDec_0 (ATerm);
ATerm SDefToDeclaration_0 (ATerm);
ATerm TranslateSpec_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm z_68 (ATerm));
ATerm restore_always_2 (ATerm, ATerm q_90 (ATerm), ATerm r_90 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm y_68 (ATerm));
ATerm scope_2 (ATerm, ATerm a_69 (ATerm), ATerm b_69 (ATerm));
ATerm assert_1 (ATerm, ATerm c_69 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm t_49 (ATerm), ATerm u_49 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_74 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_83 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_72 (ATerm));
ATerm map_1 (ATerm, ATerm e_83 (ATerm));
ATerm reverse_1 (ATerm, ATerm m_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_72 (ATerm));
ATerm Program_1 (ATerm, ATerm l_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_83 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_73 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_90 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_72 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm g_0 (ATerm), ATerm l_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_68 (ATerm), ATerm k_68 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_72 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_72 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm x_73 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_73 (ATerm), ATerm r_73 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_2 (ATerm t, ATerm g_73 (ATerm), ATerm h_73 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = term_b_9;
    return(t);
  }
  t = ArgOption_3(t, g_73, h_73, b_0);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm g_9;
  g_9 = t;
  {
    ATerm s_2 = NULL,u_2 = NULL;
    ATerm o_9;
    o_9 = t;
    {
      ATerm t_2 = NULL;
      t = t_74(t);
      {
        t_2 = t;
        if(((s_2 != NULL) && (s_2 != t_2)))
          _fail(t_2);
        else
          s_2 = t_2;
      }
    }
    t = o_9;
    {
      ATerm v_2 = NULL;
      v_2 = t;
      if(((u_2 != NULL) && (u_2 != v_2)))
        _fail(v_2);
      else
        u_2 = v_2;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_2)), not_null(s_2)));
        t = printnl_0(t);
      }
    }
  }
  t = g_9;
  return(t);
}
ATerm Option_2 (ATerm t, ATerm v_72 (ATerm), ATerm w_72 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = term_b_9;
    return(t);
  }
  t = Option_3(t, v_72, w_72, c_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm q_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm b_3 = NULL;
        b_3 = t;
        y_2 :
        if(!(match_string(b_3, "--trace-all")))
          _fail(t);
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        t = term_w_9;
        {
          ATerm w_0 (ATerm t)
          {
            t = term_x_9;
            return(t);
          }
          t = debug_1(t, w_0);
          {
            ATerm y_9;
            y_9 = t;
            {
              t = term_i_10;
              {
                ATerm y_0 (ATerm t)
                {
                  t = term_j_10;
                  return(t);
                }
                t = assert_1(t, y_0);
              }
            }
            t = y_9;
          }
        }
        return(t);
      }
      t = Option_2(t, u_0, v_0);
      LocalPopChoice(u_9);
    }
  else
    {
      t = q_9;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm c_3 = NULL;
          c_3 = t;
          z_2 :
          if(!(match_string(c_3, "-t")))
            _fail(t);
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          ATerm d_3 = NULL;
          d_3 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_3)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_10, not_null(d_3)));
            {
              ATerm c_1 (ATerm t)
              {
                t = term_o_10;
                return(t);
              }
              t = assert_1(t, c_1);
            }
            t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(d_3));
          }
          return(t);
        }
        t = ArgOption_2(t, z_0, b_1);
      }
    }
  return(t);
}
ATerm InitTermId_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  i_3 = t;
  h_3 :
  if(match_cons(i_3, sym__3))
    {
      j_3 = ATgetArgument(i_3, 0);
      k_3 = ATgetArgument(i_3, 1);
      l_3 = ATgetArgument(i_3, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_3))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_3)), term_r_10, not_null(l_3))));
    }
  else
    _fail(t);
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm s_3 = NULL;
  ATerm u_3 = NULL;
  s_3 = t;
  {
    ATerm v_3 = NULL;
    t = not_null(s_3);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          t = reverse_0(t);
          {
            v_3 = t;
            if(((u_3 != NULL) && (u_3 != v_3)))
              _fail(v_3);
            else
              u_3 = v_3;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_d_11, term_o_11, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(u_3)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
  a_4 = t;
  z_3 :
  if(match_cons(a_4, sym__3))
    {
      b_4 = ATgetArgument(a_4, 0);
      c_4 = ATgetArgument(a_4, 1);
      d_4 = ATgetArgument(a_4, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_4)), term_l_12)));
    }
  else
    _fail(t);
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm l_4 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      t = (ATerm) ATempty;
    }
  {
    ATerm m_4 = NULL,o_4 = NULL,q_4 = NULL;
    ATerm p_12;
    p_12 = t;
    {
      ATerm n_4 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        n_4 = t;
        if(((m_4 != NULL) && (m_4 != n_4)))
          _fail(n_4);
        else
          m_4 = n_4;
      }
    }
    t = p_12;
    {
      ATerm p_4 = NULL;
      t = InitTermIds_0(t);
      {
        p_4 = t;
        if(((o_4 != NULL) && (o_4 != p_4)))
          _fail(p_4);
        else
          o_4 = p_4;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), (ATerm) ATinsert(ATempty, not_null(o_4)));
        {
          t = conc_0(t);
          {
            q_4 = t;
            if(((l_4 != NULL) && (l_4 != q_4)))
              _fail(q_4);
            else
              l_4 = q_4;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(l_4));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm q_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_87(t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = q_12;
        t = _one(t, u_4);
      }
    return(t);
  }
  t = u_4(t);
  return(t);
}
ATerm Stat_1 (ATerm t, ATerm r_60 (ATerm))
{
  ATerm y_4 = NULL,z_4 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym_Stat_1))
    {
      z_4 = ATgetArgument(y_4, 0);
      {
        ATerm b_5 = NULL;
        t = not_null(z_4);
        {
          t = r_60(t);
          {
            b_5 = t;
            t = (ATerm) ATmakeAppl(sym_Stat_1, not_null(b_5));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Csimplify_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  ATerm h_9 (ATerm t)
  {
    t = not_null(p_7);
    t = Stat_1(t, _id);
    t = (ATerm) ATmakeAppl(sym_IfElse_3, not_null(z_7), not_null(p_7), not_null(t_7));
    return(t);
  }
  ATerm i_9 (ATerm t)
  {
    t = not_null(r_7);
    t = Stat_1(t, _id);
    t = (ATerm) ATmakeAppl(sym_IfElse_3, not_null(z_7), not_null(a_8), not_null(r_7));
    return(t);
  }
  ATerm j_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(z_7)), not_null(t_7));
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(z_7), not_null(a_8));
    return(t);
  }
  ATerm l_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_7), not_null(a_8));
    t = conc_0(t);
    return(t);
  }
  ATerm m_9 (ATerm t)
  {
    ATerm w_8 = NULL;
    ATerm x_8 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), not_null(c_8));
    {
      t = conc_0(t);
      {
        x_8 = t;
        if(((w_8 != NULL) && (w_8 != x_8)))
          _fail(x_8);
        else
          w_8 = x_8;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(w_8), not_null(d_8));
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    ATerm c_9 = NULL,e_9 = NULL;
    ATerm w_12;
    w_12 = t;
    {
      ATerm d_9 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), not_null(c_8));
      {
        t = conc_0(t);
        {
          d_9 = t;
          if(((c_9 != NULL) && (c_9 != d_9)))
            _fail(d_9);
          else
            c_9 = d_9;
        }
      }
    }
    t = w_12;
    {
      ATerm f_9 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), not_null(e_8));
      {
        t = conc_0(t);
        {
          f_9 = t;
          if(((e_9 != NULL) && (e_9 != f_9)))
            _fail(f_9);
          else
            e_9 = f_9;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(c_9), not_null(e_9));
    }
    return(t);
  }
  y_7 = t;
  q_5 :
  if(match_cons(y_7, sym_If_2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      r_5 :
      if(match_cons(a_8, sym_Compound_2))
        {
          b_8 = ATgetArgument(a_8, 0);
          e_8 = ATgetArgument(a_8, 1);
          s_5 :
          if(((ATermList) b_8 == ATempty))
            {
              t_5 :
              if(((ATgetType(e_8) == AT_LIST) && ((ATermList) e_8 != ATempty)))
                {
                  p_7 = ATgetFirst((ATermList) e_8);
                  q_7 = (ATerm) ATgetNext((ATermList) e_8);
                  u_5 :
                  if(((ATermList) q_7 == ATempty))
                    {
                      {
                        t = not_null(p_7);
                        t = Stat_1(t, _id);
                        t = (ATerm) ATmakeAppl(sym_If_2, not_null(z_7), not_null(p_7));
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(y_7, sym_IfElse_3))
        {
          z_7 = ATgetArgument(y_7, 0);
          a_8 = ATgetArgument(y_7, 1);
          t_7 = ATgetArgument(y_7, 2);
          v_5 :
          if(match_cons(t_7, sym_Compound_2))
            {
              u_7 = ATgetArgument(t_7, 0);
              v_7 = ATgetArgument(t_7, 1);
              w_5 :
              if(((ATgetType(v_7) == AT_LIST) && ((ATermList) v_7 != ATempty)))
                {
                  r_7 = ATgetFirst((ATermList) v_7);
                  s_7 = (ATerm) ATgetNext((ATermList) v_7);
                  x_5 :
                  if(((ATermList) s_7 == ATempty))
                    {
                      y_5 :
                      if(((ATermList) u_7 == ATempty))
                        {
                          z_5 :
                          if(match_cons(a_8, sym_Compound_2))
                            {
                              b_8 = ATgetArgument(a_8, 0);
                              e_8 = ATgetArgument(a_8, 1);
                              a_6 :
                              if(((ATgetType(e_8) == AT_LIST) && ((ATermList) e_8 != ATempty)))
                                {
                                  p_7 = ATgetFirst((ATermList) e_8);
                                  q_7 = (ATerm) ATgetNext((ATermList) e_8);
                                  b_6 :
                                  if(((ATermList) q_7 == ATempty))
                                    {
                                      c_6 :
                                      if(((ATermList) b_8 == ATempty))
                                        {
                                          {
                                            ATerm x_12 = t;
                                            int y_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = h_9(t);
                                                LocalPopChoice(y_12);
                                              }
                                            else
                                              {
                                                t = x_12;
                                                t = i_9(t);
                                              }
                                          }
                                        }
                                      else
                                        t = i_9(t);
                                    }
                                  else
                                    {
                                      d_6 :
                                      t = i_9(t);
                                    }
                                }
                              else
                                {
                                  if(((ATermList) e_8 == ATempty))
                                    {
                                      e_6 :
                                      if(((ATermList) b_8 == ATempty))
                                        {
                                          {
                                            ATerm z_12 = t;
                                            int a_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = i_9(t);
                                                LocalPopChoice(a_13);
                                              }
                                            else
                                              {
                                                t = z_12;
                                                t = j_9(t);
                                              }
                                          }
                                        }
                                      else
                                        t = i_9(t);
                                    }
                                  else
                                    {
                                      f_6 :
                                      t = i_9(t);
                                    }
                                }
                            }
                          else
                            t = i_9(t);
                        }
                      else
                        {
                          g_6 :
                          if(match_cons(a_8, sym_Compound_2))
                            {
                              b_8 = ATgetArgument(a_8, 0);
                              e_8 = ATgetArgument(a_8, 1);
                              h_6 :
                              if(((ATermList) b_8 == ATempty))
                                {
                                  i_6 :
                                  if(((ATgetType(e_8) == AT_LIST) && ((ATermList) e_8 != ATempty)))
                                    {
                                      p_7 = ATgetFirst((ATermList) e_8);
                                      q_7 = (ATerm) ATgetNext((ATermList) e_8);
                                      j_6 :
                                      if(((ATermList) q_7 == ATempty))
                                        {
                                          t = h_9(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(((ATermList) e_8 == ATempty))
                                        {
                                          t = j_9(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                    }
                  else
                    {
                      k_6 :
                      l_6 :
                      if(match_cons(a_8, sym_Compound_2))
                        {
                          b_8 = ATgetArgument(a_8, 0);
                          e_8 = ATgetArgument(a_8, 1);
                          m_6 :
                          if(((ATermList) b_8 == ATempty))
                            {
                              n_6 :
                              if(((ATgetType(e_8) == AT_LIST) && ((ATermList) e_8 != ATempty)))
                                {
                                  p_7 = ATgetFirst((ATermList) e_8);
                                  q_7 = (ATerm) ATgetNext((ATermList) e_8);
                                  o_6 :
                                  if(((ATermList) q_7 == ATempty))
                                    {
                                      t = h_9(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(((ATermList) e_8 == ATempty))
                                    {
                                      t = j_9(t);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                }
              else
                {
                  if(((ATermList) v_7 == ATempty))
                    {
                      p_6 :
                      if(((ATermList) u_7 == ATempty))
                        {
                          q_6 :
                          if(match_cons(a_8, sym_Compound_2))
                            {
                              b_8 = ATgetArgument(a_8, 0);
                              e_8 = ATgetArgument(a_8, 1);
                              r_6 :
                              if(((ATgetType(e_8) == AT_LIST) && ((ATermList) e_8 != ATempty)))
                                {
                                  p_7 = ATgetFirst((ATermList) e_8);
                                  q_7 = (ATerm) ATgetNext((ATermList) e_8);
                                  s_6 :
                                  if(((ATermList) q_7 == ATempty))
                                    {
                                      t_6 :
                                      if(((ATermList) b_8 == ATempty))
                                        {
                                          {
                                            ATerm b_13 = t;
                                            int h_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = h_9(t);
                                                LocalPopChoice(h_13);
                                              }
                                            else
                                              {
                                                t = b_13;
                                                t = k_9(t);
                                              }
                                          }
                                        }
                                      else
                                        t = k_9(t);
                                    }
                                  else
                                    {
                                      u_6 :
                                      t = k_9(t);
                                    }
                                }
                              else
                                {
                                  if(((ATermList) e_8 == ATempty))
                                    {
                                      v_6 :
                                      if(((ATermList) b_8 == ATempty))
                                        {
                                          {
                                            ATerm m_13 = t;
                                            int u_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = j_9(t);
                                                LocalPopChoice(u_13);
                                              }
                                            else
                                              {
                                                t = m_13;
                                                t = k_9(t);
                                              }
                                          }
                                        }
                                      else
                                        t = k_9(t);
                                    }
                                  else
                                    {
                                      w_6 :
                                      t = k_9(t);
                                    }
                                }
                            }
                          else
                            t = k_9(t);
                        }
                      else
                        {
                          x_6 :
                          if(match_cons(a_8, sym_Compound_2))
                            {
                              b_8 = ATgetArgument(a_8, 0);
                              e_8 = ATgetArgument(a_8, 1);
                              y_6 :
                              if(((ATermList) b_8 == ATempty))
                                {
                                  z_6 :
                                  if(((ATgetType(e_8) == AT_LIST) && ((ATermList) e_8 != ATempty)))
                                    {
                                      p_7 = ATgetFirst((ATermList) e_8);
                                      q_7 = (ATerm) ATgetNext((ATermList) e_8);
                                      a_7 :
                                      if(((ATermList) q_7 == ATempty))
                                        {
                                          t = h_9(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(((ATermList) e_8 == ATempty))
                                        {
                                          t = j_9(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                    }
                  else
                    {
                      b_7 :
                      c_7 :
                      if(match_cons(a_8, sym_Compound_2))
                        {
                          b_8 = ATgetArgument(a_8, 0);
                          e_8 = ATgetArgument(a_8, 1);
                          d_7 :
                          if(((ATermList) b_8 == ATempty))
                            {
                              e_7 :
                              if(((ATgetType(e_8) == AT_LIST) && ((ATermList) e_8 != ATempty)))
                                {
                                  p_7 = ATgetFirst((ATermList) e_8);
                                  q_7 = (ATerm) ATgetNext((ATermList) e_8);
                                  f_7 :
                                  if(((ATermList) q_7 == ATempty))
                                    {
                                      t = h_9(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(((ATermList) e_8 == ATempty))
                                    {
                                      t = j_9(t);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                }
            }
          else
            {
              g_7 :
              if(match_cons(a_8, sym_Compound_2))
                {
                  b_8 = ATgetArgument(a_8, 0);
                  e_8 = ATgetArgument(a_8, 1);
                  h_7 :
                  if(((ATermList) b_8 == ATempty))
                    {
                      i_7 :
                      if(((ATgetType(e_8) == AT_LIST) && ((ATermList) e_8 != ATempty)))
                        {
                          p_7 = ATgetFirst((ATermList) e_8);
                          q_7 = (ATerm) ATgetNext((ATermList) e_8);
                          j_7 :
                          if(((ATermList) q_7 == ATempty))
                            {
                              t = h_9(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(((ATermList) e_8 == ATempty))
                            {
                              t = j_9(t);
                            }
                          else
                            _fail(t);
                        }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
        }
      else
        {
          if(((ATgetType(y_7) == AT_LIST) && ((ATermList) y_7 != ATempty)))
            {
              z_7 = ATgetFirst((ATermList) y_7);
              a_8 = (ATerm) ATgetNext((ATermList) y_7);
              k_7 :
              if(match_cons(z_7, sym_Compound_2))
                {
                  w_7 = ATgetArgument(z_7, 0);
                  x_7 = ATgetArgument(z_7, 1);
                  l_7 :
                  if(((ATermList) w_7 == ATempty))
                    {
                      t = l_9(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(y_7, sym_Compound_2))
                {
                  z_7 = ATgetArgument(y_7, 0);
                  a_8 = ATgetArgument(y_7, 1);
                  m_7 :
                  if(((ATgetType(a_8) == AT_LIST) && ((ATermList) a_8 != ATempty)))
                    {
                      b_8 = ATgetFirst((ATermList) a_8);
                      e_8 = (ATerm) ATgetNext((ATermList) a_8);
                      n_7 :
                      if(match_cons(b_8, sym_Compound_2))
                        {
                          c_8 = ATgetArgument(b_8, 0);
                          d_8 = ATgetArgument(b_8, 1);
                          o_7 :
                          if(((ATermList) e_8 == ATempty))
                            {
                              {
                                ATerm v_13 = t;
                                int w_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_9(t);
                                    LocalPopChoice(w_13);
                                  }
                                else
                                  {
                                    t = v_13;
                                    t = n_9(t);
                                  }
                              }
                            }
                          else
                            t = n_9(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm g_89 (ATerm), ATerm h_89 (ATerm))
{
  ATerm r_9 (ATerm t)
  {
    ATerm x_13 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_89(t);
        t = r_9(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = x_13;
        t = h_89(t);
      }
    return(t);
  }
  t = r_9(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_89 (ATerm))
{
  t = repeat_2(t, j_89, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm s_9 (ATerm t)
  {
    t = _all(t, s_9);
    t = z_85(t);
    return(t);
  }
  t = s_9(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          LocalPopChoice(g_14);
        }
      else
        {
          t = f_14;
          t = ConstructTerm_0(t);
        }
      return(t);
    }
    t = try_1(t, e_1);
    return(t);
  }
  t = bottomup_1(t, d_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm t_9 (ATerm t)
  {
    t = x_85(t);
    t = _all(t, t_9);
    return(t);
  }
  t = t_9(t);
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  t = SSL_real_to_string(not_null(v_9));
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
  b_10 = t;
  a_10 :
  if(match_cons(b_10, sym__2))
    {
      c_10 = ATgetArgument(b_10, 0);
      d_10 = ATgetArgument(b_10, 1);
      {
        ATerm g_10 = NULL;
        ATerm h_10 = NULL;
        t = new_0(t);
        {
          h_10 = t;
          if(((g_10 != NULL) && (g_10 != h_10)))
            _fail(h_10);
          else
            g_10 = h_10;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_10)), term_l_12), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(d_10))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(c_10), (ATerm) ATmakeAppl(sym_Id_1, not_null(g_10)))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Initialized_0 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  {
    ATerm p_10 = NULL,q_10 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(n_10));
    {
      ATerm f_1 (ATerm t)
      {
        t = term_k_14;
        return(t);
      }
      t = rewrite_1(t, f_1);
      {
        p_10 = t;
        l_10 :
        if(match_cons(p_10, sym_Defined_1))
          {
            q_10 = ATgetArgument(p_10, 0);
            m_10 :
            if(!(match_string(q_10, "h_0")))
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = term_m_14;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  w_10 = t;
  u_10 :
  if(match_cons(w_10, sym__2))
    {
      x_10 = ATgetArgument(w_10, 0);
      z_10 = ATgetArgument(w_10, 1);
      v_10 :
      if(match_cons(x_10, sym_Var_1))
        {
          y_10 = ATgetArgument(x_10, 0);
          {
            ATerm c_11 = NULL;
            t = not_null(y_10);
            {
              t = Initialized_0(t);
              {
                c_11 = t;
                t_10 :
                if(!(match_string(c_11, "NULL")))
                  _fail(t);
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_10)), not_null(z_10));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  f_11 :
  if(match_cons(h_11, sym__2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      g_11 :
      if(((ATermList) i_11 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_11));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm x_0 (ATerm), ATerm a_1 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  t_11 = t;
  r_11 :
  if(match_cons(t_11, sym__2))
    {
      u_11 = ATgetArgument(t_11, 0);
      x_11 = ATgetArgument(t_11, 1);
      s_11 :
      if(((ATgetType(u_11) == AT_LIST) && ((ATermList) u_11 != ATempty)))
        {
          v_11 = ATgetFirst((ATermList) u_11);
          w_11 = (ATerm) ATgetNext((ATermList) u_11);
          {
            ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
            ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(x_11));
            {
              t = x_0(t);
              {
                f_12 = t;
                q_11 :
                if(match_cons(f_12, sym__2))
                  {
                    g_12 = ATgetArgument(f_12, 0);
                    h_12 = ATgetArgument(f_12, 1);
                    {
                      ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
                      if(((d_12 != NULL) && (d_12 != g_12)))
                        _fail(g_12);
                      else
                        d_12 = g_12;
                      {
                        if(((b_12 != NULL) && (b_12 != h_12)))
                          _fail(h_12);
                        else
                          b_12 = h_12;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(b_12));
                          {
                            t = a_1(t);
                            {
                              i_12 = t;
                              p_11 :
                              if(match_cons(i_12, sym__2))
                                {
                                  j_12 = ATgetArgument(i_12, 0);
                                  k_12 = ATgetArgument(i_12, 1);
                                  {
                                    if(((e_12 != NULL) && (e_12 != j_12)))
                                      _fail(j_12);
                                    else
                                      e_12 = j_12;
                                    if(((c_12 != NULL) && (c_12 != k_12)))
                                      _fail(k_12);
                                    else
                                      c_12 = k_12;
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        }
                      }
                    }
                  }
                else
                  _fail(t);
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_12)), not_null(d_12)), not_null(c_12));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm thread_map_1 (ATerm t, ATerm r_78 (ATerm))
{
  ATerm o_12 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, r_78, o_12);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = o_12(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm a_66 (ATerm))
{
  ATerm s_12 = NULL,t_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym_Var_1))
    {
      t_12 = ATgetArgument(s_12, 0);
      {
        ATerm v_12 = NULL;
        t = not_null(t_12);
        {
          t = a_66(t);
          {
            v_12 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_12));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm g_13 = NULL;
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  g_13 = t;
  {
    ATerm l_13 = NULL;
    ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
    t = not_null(g_13);
    {
      l_13 = t;
      {
        t = SSL_explode_term(not_null(l_13));
        {
          n_13 = t;
          c_13 :
          if(match_cons(n_13, sym__2))
            {
              o_13 = ATgetArgument(n_13, 0);
              p_13 = ATgetArgument(n_13, 1);
              d_13 :
              if(match_string(o_13, ""))
                {
                  e_13 :
                  if(((ATgetType(p_13) == AT_LIST) && ((ATermList) p_13 != ATempty)))
                    {
                      q_13 = ATgetFirst((ATermList) p_13);
                      r_13 = (ATerm) ATgetNext((ATermList) p_13);
                      f_13 :
                      if(((ATgetType(r_13) == AT_LIST) && ((ATermList) r_13 != ATempty)))
                        {
                          s_13 = ATgetFirst((ATermList) r_13);
                          t_13 = (ATerm) ATgetNext((ATermList) r_13);
                          {
                            if(((i_13 != NULL) && (i_13 != q_13)))
                              _fail(q_13);
                            else
                              i_13 = q_13;
                            {
                              if(((k_13 != NULL) && (k_13 != s_13)))
                                _fail(s_13);
                              else
                                k_13 = s_13;
                              if(((j_13 != NULL) && (j_13 != t_13)))
                                _fail(t_13);
                              else
                                j_13 = t_13;
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      }
    }
    t = not_null(k_13);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm a_14 = NULL;
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  t = term_z_9;
  {
    ATerm g_1 (ATerm t)
    {
      t = term_p_14;
      return(t);
    }
    t = rewrite_1(t, g_1);
    {
      b_14 = t;
      y_13 :
      if(match_cons(b_14, sym_Defined_2))
        {
          c_14 = ATgetArgument(b_14, 0);
          d_14 = ATgetArgument(b_14, 1);
          z_13 :
          if(match_string(c_14, "k_0"))
            {
              if(((a_14 != NULL) && (a_14 != d_14)))
                _fail(d_14);
              else
                a_14 = d_14;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  }
  t = not_null(a_14);
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_BuildDefault_1))
    {
      j_14 = ATgetArgument(i_14, 0);
      {
        ATerm l_14 = NULL;
        t = not_null(j_14);
        {
          t = y_63(t);
          {
            l_14 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(l_14));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Real_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm u_14 = NULL,v_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym_Real_1))
    {
      v_14 = ATgetArgument(u_14, 0);
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_14 = NULL;
            t = not_null(v_14);
            {
              t = t_0(t);
              {
                x_14 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(x_14));
              }
            }
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm a_15 = NULL;
              t = not_null(v_14);
              {
                t = t_0(t);
                {
                  a_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(a_15));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm l_15 = NULL,m_15 = NULL;
  l_15 = t;
  k_15 :
  if(match_cons(l_15, sym_Str_1))
    {
      m_15 = ATgetArgument(l_15, 0);
      {
        ATerm s_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_15 = NULL;
            t = not_null(m_15);
            {
              t = s_0(t);
              {
                o_15 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(o_15));
              }
            }
            LocalPopChoice(w_14);
          }
        else
          {
            t = s_14;
            {
              ATerm r_15 = NULL;
              t = not_null(m_15);
              {
                t = s_0(t);
                {
                  r_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(r_15));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm c_16 = NULL,d_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym_Int_1))
    {
      d_16 = ATgetArgument(c_16, 0);
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_16 = NULL;
            t = not_null(d_16);
            {
              t = r_0(t);
              {
                f_16 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(f_16));
              }
            }
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            {
              ATerm i_16 = NULL;
              t = not_null(d_16);
              {
                t = r_0(t);
                {
                  i_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(i_16));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm e_66 (ATerm), ATerm f_66 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_Op_2))
    {
      t_16 = ATgetArgument(s_16, 0);
      u_16 = ATgetArgument(s_16, 1);
      {
        ATerm x_16 = NULL;
        t = not_null(t_16);
        {
          ATerm z_16 = NULL;
          t = e_66(t);
          {
            x_16 = t;
            {
              t = not_null(u_16);
              {
                t = f_66(t);
                {
                  z_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(x_16), not_null(z_16));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CacheConstant_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym__2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      {
        ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
        ATerm t_17 = NULL;
        t = not_null(m_17);
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_1 (ATerm t)
              {
                t = map_1(t, Cache_0);
                return(t);
              }
              t = Op_2(t, _id, h_1);
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              {
                ATerm d_15 = t;
                int e_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Int_1(t, _id);
                    LocalPopChoice(e_15);
                  }
                else
                  {
                    t = d_15;
                    {
                      ATerm f_15 = t;
                      int g_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Str_1(t, _id);
                          LocalPopChoice(g_15);
                        }
                      else
                        {
                          t = f_15;
                          {
                            ATerm h_15 = t;
                            int i_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Real_1(t, _id);
                                LocalPopChoice(i_15);
                              }
                            else
                              {
                                t = h_15;
                                t = BuildDefault_1(t, _id);
                              }
                          }
                        }
                    }
                  }
              }
            }
          {
            ATerm u_17 = NULL,w_17 = NULL;
            t = new_0(t);
            {
              t_17 = t;
              {
                if(((q_17 != NULL) && (q_17 != t_17)))
                  _fail(t_17);
                else
                  q_17 = t_17;
                {
                  ATerm v_17 = NULL;
                  v_17 = t;
                  if(((u_17 != NULL) && (u_17 != v_17)))
                    _fail(v_17);
                  else
                    u_17 = v_17;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_j_15, not_null(u_17));
                    {
                      ATerm x_17 = NULL,z_17 = NULL;
                      t = conc_strings_0(t);
                      {
                        w_17 = t;
                        {
                          if(((r_17 != NULL) && (r_17 != w_17)))
                            _fail(w_17);
                          else
                            r_17 = w_17;
                          {
                            ATerm n_15;
                            n_15 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(m_17)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_15, not_null(r_17)));
                              {
                                ATerm i_1 (ATerm t)
                                {
                                  t = term_q_15;
                                  return(t);
                                }
                                t = assert_1(t, i_1);
                              }
                            }
                            t = n_15;
                            {
                              ATerm y_17 = NULL;
                              ATerm s_15 = t;
                              int t_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  LocalPopChoice(t_15);
                                }
                              else
                                {
                                  t = s_15;
                                  t = (ATerm) ATempty;
                                }
                              {
                                y_17 = t;
                                if(((x_17 != NULL) && (x_17 != y_17)))
                                  _fail(y_17);
                                else
                                  x_17 = y_17;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(x_17)), (ATerm) ATmakeAppl(sym__3, not_null(q_17), not_null(r_17), not_null(n_17)));
                                {
                                  z_17 = t;
                                  {
                                    if(((s_17 != NULL) && (s_17 != z_17)))
                                      _fail(z_17);
                                    else
                                      s_17 = z_17;
                                    {
                                      ATerm u_15;
                                      u_15 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATmakeAppl(sym_Defined_2, term_v_15, not_null(s_17)));
                                        {
                                          ATerm j_1 (ATerm t)
                                          {
                                            t = term_p_14;
                                            return(t);
                                          }
                                          t = assert_1(t, j_1);
                                        }
                                      }
                                      t = u_15;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(r_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ConstructTerm_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  t_18 = t;
  r_18 :
  if(match_cons(t_18, sym_Op_2))
    {
      u_18 = ATgetArgument(t_18, 0);
      s_18 = ATgetArgument(t_18, 1);
      {
        ATerm x_18 = NULL;
        ATerm y_18 = NULL,a_19 = NULL;
        ATerm z_18 = NULL;
        t = not_null(s_18);
        {
          t = length_0(t);
          {
            z_18 = t;
            if(((y_18 != NULL) && (y_18 != z_18)))
              _fail(z_18);
            else
              y_18 = z_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), not_null(y_18));
          {
            t = ConstructorName_0(t);
            {
              a_19 = t;
              if(((x_18 != NULL) && (x_18 != a_19)))
                _fail(a_19);
              else
                x_18 = a_19;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_15, (ATerm) ATinsert(CheckATermList(not_null(s_18)), (ATerm) ATmakeAppl(sym_Id_1, not_null(x_18)))));
      }
    }
  else
    {
      if(match_cons(t_18, sym_BuildDefault_1))
        {
          u_18 = ATgetArgument(t_18, 0);
          t = not_null(u_18);
        }
      else
        {
          if(match_cons(t_18, sym_Var_1))
            {
              u_18 = ATgetArgument(t_18, 0);
              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_a_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(u_18))));
            }
          else
            {
              if(match_cons(t_18, sym_Str_1))
                {
                  u_18 = ATgetArgument(t_18, 0);
                  {
                    ATerm o_19 = NULL;
                    ATerm p_19 = NULL;
                    t = not_null(u_18);
                    {
                      t = escape_0(t);
                      {
                        t = double_quote_0(t);
                        {
                          p_19 = t;
                          if(((o_19 != NULL) && (o_19 != p_19)))
                            _fail(p_19);
                          else
                            o_19 = p_19;
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(CheckATermList(term_n_16), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(o_19))))))));
                  }
                }
              else
                {
                  if(match_cons(t_18, sym_Real_1))
                    {
                      u_18 = ATgetArgument(t_18, 0);
                      {
                        ATerm n_20 = NULL;
                        ATerm o_20 = NULL;
                        t = not_null(u_18);
                        {
                          t = real_to_string_0(t);
                          {
                            o_20 = t;
                            if(((n_20 != NULL) && (n_20 != o_20)))
                              _fail(o_20);
                            else
                              n_20 = o_20;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(n_20)))));
                      }
                    }
                  else
                    {
                      if(match_cons(t_18, sym_Int_1))
                        {
                          u_18 = ATgetArgument(t_18, 0);
                          {
                            ATerm q_20 = NULL;
                            ATerm r_20 = NULL;
                            t = not_null(u_18);
                            {
                              t = int_to_string_0(t);
                              {
                                r_20 = t;
                                if(((q_20 != NULL) && (q_20 != r_20)))
                                  _fail(r_20);
                                else
                                  q_20 = r_20;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(q_20)))));
                          }
                        }
                      else
                        _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Id_1 (ATerm t, ATerm i_60 (ATerm))
{
  ATerm g_21 = NULL,h_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym_Id_1))
    {
      h_21 = ATgetArgument(g_21, 0);
      {
        ATerm j_21 = NULL;
        t = not_null(h_21);
        {
          t = i_60(t);
          {
            j_21 = t;
            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(j_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm FunCall_2 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm))
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym_FunCall_2))
    {
      s_21 = ATgetArgument(r_21, 0);
      t_21 = ATgetArgument(r_21, 1);
      {
        ATerm w_21 = NULL;
        t = not_null(s_21);
        {
          ATerm y_21 = NULL;
          t = a_57(t);
          {
            w_21 = t;
            {
              t = not_null(t_21);
              {
                t = b_57(t);
                {
                  y_21 = t;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, not_null(w_21), not_null(y_21));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ConstructList_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  r_22 :
  if(match_cons(b_23, sym_Op_2))
    {
      c_23 = ATgetArgument(b_23, 0);
      d_23 = ATgetArgument(b_23, 1);
      s_22 :
      if(match_string(c_23, "Cons"))
        {
          t_22 :
          if(((ATgetType(d_23) == AT_LIST) && ((ATermList) d_23 != ATempty)))
            {
              x_22 = ATgetFirst((ATermList) d_23);
              y_22 = (ATerm) ATgetNext((ATermList) d_23);
              u_22 :
              if(((ATgetType(y_22) == AT_LIST) && ((ATermList) y_22 != ATempty)))
                {
                  z_22 = ATgetFirst((ATermList) y_22);
                  a_23 = (ATerm) ATgetNext((ATermList) y_22);
                  v_22 :
                  if(((ATermList) a_23 == ATempty))
                    {
                      {
                        ATerm n_23 = NULL;
                        ATerm h_24 = NULL;
                        t = not_null(z_22);
                        {
                          ATerm w_16 = t;
                          int y_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,b_24 = NULL;
                              o_23 = t;
                              i_22 :
                              if(match_cons(o_23, sym_TypeCast_2))
                                {
                                  p_23 = ATgetArgument(o_23, 0);
                                  b_24 = ATgetArgument(o_23, 1);
                                  j_22 :
                                  if(match_cons(p_23, sym_TypeName_2))
                                    {
                                      q_23 = ATgetArgument(p_23, 0);
                                      v_23 = ATgetArgument(p_23, 1);
                                      k_22 :
                                      if(match_cons(q_23, sym_TypeSpec_3))
                                        {
                                          r_23 = ATgetArgument(q_23, 0);
                                          s_23 = ATgetArgument(q_23, 1);
                                          u_23 = ATgetArgument(q_23, 2);
                                          l_22 :
                                          if(((ATermList) r_23 == ATempty))
                                            {
                                              m_22 :
                                              if(match_cons(s_23, sym_TypeId_1))
                                                {
                                                  t_23 = ATgetArgument(s_23, 0);
                                                  n_22 :
                                                  if(match_string(t_23, "ATerm"))
                                                    {
                                                      o_22 :
                                                      if(((ATermList) u_23 == ATempty))
                                                        {
                                                          p_22 :
                                                          if(match_cons(v_23, sym_None_0))
                                                            {
                                                              t = not_null(b_24);
                                                              {
                                                                ATerm a_17 = t;
                                                                int b_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm k_1 (ATerm t)
                                                                    {
                                                                      ATerm d_24 = NULL;
                                                                      d_24 = t;
                                                                      g_22 :
                                                                      if(!(match_string(d_24, "ATempty")))
                                                                        _fail(t);
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, k_1);
                                                                    LocalPopChoice(b_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = a_17;
                                                                    {
                                                                      ATerm l_1 (ATerm t)
                                                                      {
                                                                        ATerm n_1 (ATerm t)
                                                                        {
                                                                          ATerm e_24 = NULL;
                                                                          e_24 = t;
                                                                          h_22 :
                                                                          if(!(match_string(e_24, "ATinsert")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        t = Id_1(t, n_1);
                                                                        return(t);
                                                                      }
                                                                      ATerm m_1 (ATerm t)
                                                                      {
                                                                        ATerm o_1 (ATerm t)
                                                                        {
                                                                          t = Cons_2(t, _id, Nil_0);
                                                                          return(t);
                                                                        }
                                                                        t = Cons_2(t, _id, o_1);
                                                                        return(t);
                                                                      }
                                                                      t = FunCall_2(t, l_1, m_1);
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(y_16);
                            }
                          else
                            {
                              t = w_16;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, not_null(z_22)));
                            }
                          {
                            h_24 = t;
                            if(((n_23 != NULL) && (n_23 != h_24)))
                              _fail(h_24);
                            else
                              n_23 = h_24;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_22)), not_null(n_23))));
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_string(c_23, "Nil"))
            {
              w_22 :
              if(((ATermList) d_23 == ATempty))
                {
                  t = term_i_17;
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cache_0 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  {
    ATerm j_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_24 = NULL;
        ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(v_24));
        {
          ATerm p_1 (ATerm t)
          {
            t = term_q_15;
            return(t);
          }
          t = rewrite_1(t, p_1);
          {
            y_24 = t;
            p_24 :
            if(match_cons(y_24, sym_Defined_2))
              {
                z_24 = ATgetArgument(y_24, 0);
                a_25 = ATgetArgument(y_24, 1);
                q_24 :
                if(match_string(z_24, "j_0"))
                  {
                    if(((x_24 != NULL) && (x_24 != a_25)))
                      _fail(a_25);
                    else
                      x_24 = a_25;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(x_24));
        LocalPopChoice(o_17);
      }
    else
      {
        t = j_17;
        {
          ATerm c_25 = NULL;
          ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(v_24));
          {
            ATerm q_1 (ATerm t)
            {
              t = term_q_15;
              return(t);
            }
            t = rewrite_1(t, q_1);
            {
              d_25 = t;
              t_24 :
              if(match_cons(d_25, sym_Defined_2))
                {
                  e_25 = ATgetArgument(d_25, 0);
                  f_25 = ATgetArgument(d_25, 1);
                  u_24 :
                  if(match_string(e_25, "i_0"))
                    {
                      if(((c_25 != NULL) && (c_25 != f_25)))
                        _fail(f_25);
                      else
                        c_25 = f_25;
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
          t = not_null(c_25);
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0 (ATerm t)
{
  ATerm p_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = p_17;
      {
        ATerm v_25 = NULL,a_26 = NULL;
        ATerm b_18;
        b_18 = t;
        {
          ATerm w_25 = NULL;
          w_25 = t;
          if(((v_25 != NULL) && (v_25 != w_25)))
            _fail(w_25);
          else
            v_25 = w_25;
        }
        t = b_18;
        {
          ATerm b_26 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm r_1 (ATerm t)
            {
              ATerm c_18 = t;
              int d_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  LocalPopChoice(d_18);
                }
              else
                {
                  t = c_18;
                  t = ConstructTerm_0(t);
                }
              return(t);
            }
            t = try_1(t, r_1);
            {
              b_26 = t;
              if(((a_26 != NULL) && (a_26 != b_26)))
                _fail(b_26);
              else
                a_26 = b_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_25), not_null(a_26));
            {
              ATerm e_18 = t;
              int f_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  LocalPopChoice(f_18);
                }
              else
                {
                  t = e_18;
                  t = Snd_0(t);
                }
            }
          }
        }
      }
    }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL;
  ATerm g_40 (ATerm t)
  {
    ATerm z_33 = NULL,o_34 = NULL,q_34 = NULL;
    ATerm g_18;
    g_18 = t;
    {
      ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
      t = not_null(m_32);
      {
        ATerm h_18 = t;
        if((PushChoice() == 0))
          {
            ATerm a_34 = NULL;
            a_34 = t;
            l_28 :
            if(!(match_string(a_34, "Nil")))
              {
                if(!(match_string(a_34, "Cons")))
                  _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          t = h_18;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_32), term_i_18);
          {
            ATerm s_1 (ATerm t)
            {
              ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
              b_34 = t;
              p_28 :
              if(match_cons(b_34, sym__2))
                {
                  c_34 = ATgetArgument(b_34, 0);
                  e_34 = ATgetArgument(b_34, 1);
                  q_28 :
                  if(match_cons(c_34, sym_Var_1))
                    {
                      d_34 = ATgetArgument(c_34, 0);
                      {
                        ATerm h_34 = NULL,j_34 = NULL;
                        ATerm j_18;
                        j_18 = t;
                        {
                          ATerm i_34 = NULL;
                          t = not_null(e_34);
                          {
                            t = int_to_string_0(t);
                            {
                              i_34 = t;
                              if(((h_34 != NULL) && (h_34 != i_34)))
                                _fail(i_34);
                              else
                                h_34 = i_34;
                            }
                          }
                        }
                        t = j_18;
                        {
                          ATerm k_34 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_34), term_k_18);
                          {
                            t = add_0(t);
                            {
                              k_34 = t;
                              if(((j_34 != NULL) && (j_34 != k_34)))
                                _fail(k_34);
                              else
                                j_34 = k_34;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_34)), term_r_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(h_34))), (ATerm) ATmakeAppl(sym_Id_1, not_null(x_32)))))), not_null(j_34));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              return(t);
            }
            t = thread_map_1(t, s_1);
            {
              l_34 = t;
              s_28 :
              if(match_cons(l_34, sym__2))
                {
                  m_34 = ATgetArgument(l_34, 0);
                  n_34 = ATgetArgument(l_34, 1);
                  if(((z_33 != NULL) && (z_33 != m_34)))
                    _fail(m_34);
                  else
                    z_33 = m_34;
                }
              else
                _fail(t);
            }
          }
        }
      }
    }
    t = g_18;
    {
      ATerm n_18;
      n_18 = t;
      {
        ATerm p_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_32), not_null(k_32));
        {
          t = ConstructorName_0(t);
          {
            p_34 = t;
            if(((o_34 != NULL) && (o_34 != p_34)))
              _fail(p_34);
            else
              o_34 = p_34;
          }
        }
      }
      t = n_18;
      {
        ATerm r_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_33), (ATerm) ATinsert(ATempty, not_null(o_32)));
        {
          t = conc_0(t);
          {
            r_34 = t;
            if(((q_34 != NULL) && (q_34 != r_34)))
              _fail(r_34);
            else
              q_34 = r_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_34))), (ATerm) ATmakeAppl(sym_Id_1, not_null(x_32)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(q_34)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_32)), not_null(p_32), not_null(y_32)))));
      }
    }
    return(t);
  }
  ATerm h_40 (ATerm t)
  {
    ATerm y_34 = NULL;
    ATerm b_35 = NULL;
    t = not_null(m_32);
    {
      t = real_to_string_0(t);
      {
        b_35 = t;
        if(((y_34 != NULL) && (y_34 != b_35)))
          _fail(b_35);
        else
          y_34 = b_35;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(y_34))), (ATerm) ATmakeAppl(sym_Id_1, not_null(x_32)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(o_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_32)), not_null(p_32), not_null(y_32)))));
    return(t);
  }
  ATerm i_40 (ATerm t)
  {
    ATerm i_35 = NULL;
    ATerm j_35 = NULL;
    t = not_null(m_32);
    {
      t = int_to_string_0(t);
      {
        j_35 = t;
        if(((i_35 != NULL) && (i_35 != j_35)))
          _fail(j_35);
        else
          i_35 = j_35;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(i_35))), (ATerm) ATmakeAppl(sym_Id_1, not_null(x_32)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(o_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_32)), not_null(p_32), not_null(y_32)))));
    return(t);
  }
  ATerm j_40 (ATerm t)
  {
    ATerm q_35 = NULL;
    ATerm r_35 = NULL;
    t = not_null(m_32);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          r_35 = t;
          if(((q_35 != NULL) && (q_35 != r_35)))
            _fail(r_35);
          else
            q_35 = r_35;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(q_35)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(x_32)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(o_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_32)), not_null(p_32), not_null(y_32)))));
    return(t);
  }
  ATerm k_40 (ATerm t)
  {
    t = not_null(y_32);
    return(t);
  }
  ATerm l_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_32)), (ATerm) ATmakeAppl(sym_Case_3, not_null(a_33), not_null(y_32), not_null(q_32)));
    return(t);
  }
  ATerm m_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_32)));
    return(t);
  }
  ATerm n_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_32)), term_e_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_32)), (ATerm) ATmakeAppl(sym_Id_1, not_null(r_32)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_32))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_32)), term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_32)))));
    return(t);
  }
  ATerm o_40 (ATerm t)
  {
    t = not_null(a_33);
    {
      ATerm h_19 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        t = h_19;
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_33)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_32))));
    return(t);
  }
  ATerm p_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_32)), term_r_10, term_j_19));
    return(t);
  }
  ATerm u_40 (ATerm t)
  {
    ATerm h_36 = NULL;
    ATerm i_36 = NULL;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(u_32), (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_19, not_null(a_33))))))), (ATerm) ATmakeAppl(sym__2, not_null(s_32), (ATerm) ATmakeAppl(sym_FunCall_2, term_l_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_19, not_null(a_33))))));
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MatchArg1_0(t);
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = MatchArg2_0(t);
          }
        return(t);
      }
      t = map_1(t, t_1);
      {
        i_36 = t;
        if(((h_36 != NULL) && (h_36 != i_36)))
          _fail(i_36);
        else
          h_36 = i_36;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATempty, not_null(a_33))), term_z_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_r_19, not_null(a_33)), term_h_17)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(h_36)), term_c_20);
    return(t);
  }
  ATerm v_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_r_19, not_null(a_33)), term_h_17), term_c_20);
    return(t);
  }
  ATerm w_40 (ATerm t)
  {
    ATerm n_36 = NULL,d_37 = NULL;
    ATerm d_20;
    d_20 = t;
    {
      ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
      t = not_null(x_32);
      {
        ATerm e_20 = t;
        if((PushChoice() == 0))
          {
            ATerm o_36 = NULL;
            o_36 = t;
            z_28 :
            if(!(match_string(o_36, "Nil")))
              {
                if(!(match_string(o_36, "Cons")))
                  _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          t = e_20;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_32), term_i_18);
          {
            ATerm u_1 (ATerm t)
            {
              ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
              p_36 = t;
              f_29 :
              if(match_cons(p_36, sym__2))
                {
                  q_36 = ATgetArgument(p_36, 0);
                  r_36 = ATgetArgument(p_36, 1);
                  {
                    ATerm u_36 = NULL,y_36 = NULL;
                    ATerm f_20;
                    f_20 = t;
                    {
                      ATerm v_36 = NULL,x_36 = NULL;
                      ATerm w_36 = NULL;
                      t = not_null(r_36);
                      {
                        t = int_to_string_0(t);
                        {
                          w_36 = t;
                          if(((v_36 != NULL) && (v_36 != w_36)))
                            _fail(w_36);
                          else
                            v_36 = w_36;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_36), (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(v_36))), not_null(a_33))));
                        {
                          ATerm g_20 = t;
                          int h_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              LocalPopChoice(h_20);
                            }
                          else
                            {
                              t = g_20;
                              t = MatchArg2_0(t);
                            }
                          {
                            x_36 = t;
                            if(((u_36 != NULL) && (u_36 != x_36)))
                              _fail(x_36);
                            else
                              u_36 = x_36;
                          }
                        }
                      }
                    }
                    t = f_20;
                    {
                      ATerm z_36 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_36), term_k_18);
                      {
                        t = add_0(t);
                        {
                          z_36 = t;
                          if(((y_36 != NULL) && (y_36 != z_36)))
                            _fail(z_36);
                          else
                            y_36 = z_36;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_36), not_null(y_36));
                    }
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = thread_map_1(t, u_1);
            {
              a_37 = t;
              h_29 :
              if(match_cons(a_37, sym__2))
                {
                  b_37 = ATgetArgument(a_37, 0);
                  c_37 = ATgetArgument(a_37, 1);
                  if(((n_36 != NULL) && (n_36 != b_37)))
                    _fail(b_37);
                  else
                    n_36 = b_37;
                }
              else
                _fail(t);
            }
          }
        }
      }
    }
    t = d_20;
    {
      ATerm e_37 = NULL,g_37 = NULL;
      ATerm f_37 = NULL;
      t = not_null(w_32);
      {
        t = length_0(t);
        {
          f_37 = t;
          if(((e_37 != NULL) && (e_37 != f_37)))
            _fail(f_37);
          else
            e_37 = f_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_32), not_null(e_37));
        {
          t = ConstructorName_0(t);
          {
            g_37 = t;
            if(((d_37 != NULL) && (d_37 != g_37)))
              _fail(g_37);
            else
              d_37 = g_37;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_37))), not_null(a_33))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(n_36)), term_c_20);
    }
    return(t);
  }
  ATerm x_40 (ATerm t)
  {
    ATerm j_37 = NULL;
    ATerm k_37 = NULL;
    t = not_null(x_32);
    {
      t = real_to_string_0(t);
      {
        k_37 = t;
        if(((j_37 != NULL) && (j_37 != k_37)))
          _fail(k_37);
        else
          j_37 = k_37;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATempty, not_null(a_33))), term_j_20), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_20, not_null(a_33)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(j_37)))), term_c_20);
    return(t);
  }
  ATerm y_40 (ATerm t)
  {
    ATerm n_37 = NULL;
    ATerm o_37 = NULL;
    t = not_null(x_32);
    {
      t = int_to_string_0(t);
      {
        o_37 = t;
        if(((n_37 != NULL) && (n_37 != o_37)))
          _fail(o_37);
        else
          n_37 = o_37;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATempty, not_null(a_33))), term_v_20), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_21, not_null(a_33)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(n_37)))), term_c_20);
    return(t);
  }
  ATerm z_40 (ATerm t)
  {
    ATerm r_37 = NULL;
    ATerm s_37 = NULL;
    t = not_null(x_32);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          s_37 = t;
          if(((r_37 != NULL) && (r_37 != s_37)))
            _fail(s_37);
          else
            r_37 = s_37;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_21, not_null(a_33)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(CheckATermList(term_n_16), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(r_37)))))), term_c_20);
    return(t);
  }
  ATerm a_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_32)), term_e_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_32)), not_null(a_33))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_19, (ATerm) ATinsert(ATempty, not_null(a_33)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_32)), term_r_10, not_null(a_33))));
    return(t);
  }
  ATerm b_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(w_32), not_null(a_33))), (ATerm) ATmakeAppl(sym_Match_2, not_null(x_32), not_null(a_33))));
    return(t);
  }
  ATerm c_41 (ATerm t)
  {
    t = term_m_21;
    return(t);
  }
  ATerm d_41 (ATerm t)
  {
    t = term_m_21;
    return(t);
  }
  ATerm g_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(z_32), term_j_19);
    return(t);
  }
  ATerm h_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(z_32), (ATerm) ATinsert(ATempty, not_null(a_33)));
    return(t);
  }
  ATerm i_41 (ATerm t)
  {
    ATerm f_38 = NULL;
    ATerm g_38 = NULL;
    t = new_0(t);
    {
      g_38 = t;
      if(((f_38 != NULL) && (f_38 != g_38)))
        _fail(g_38);
      else
        f_38 = g_38;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_38)), term_l_12))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_38))))), not_null(z_32)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_38)), term_r_10, term_j_19))));
    return(t);
  }
  ATerm j_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(z_32));
    return(t);
  }
  ATerm k_41 (ATerm t)
  {
    ATerm k_38 = NULL;
    ATerm q_38 = NULL;
    t = not_null(a_33);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
        l_38 = t;
        p_29 :
        if(match_cons(l_38, sym_Call_2))
          {
            m_38 = ATgetArgument(l_38, 0);
            o_38 = ATgetArgument(l_38, 1);
            q_29 :
            if(match_cons(m_38, sym_SVar_1))
              {
                n_38 = ATgetArgument(m_38, 0);
                r_29 :
                if(((ATermList) o_38 == ATempty))
                  {
                    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(n_38));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        return(t);
      }
      t = map_1(t, v_1);
      {
        q_38 = t;
        if(((k_38 != NULL) && (k_38 != q_38)))
          _fail(q_38);
        else
          k_38 = q_38;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_32)), (ATerm) ATinsert(CheckATermList(not_null(k_38)), term_j_19))));
    return(t);
  }
  ATerm p_41 (ATerm t)
  {
    ATerm t_38 = NULL;
    ATerm u_38 = NULL;
    t = not_null(a_33);
    {
      ATerm w_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          t = try_1(t, construct_term_0);
          return(t);
        }
        t = topdown_1(t, x_1);
        return(t);
      }
      t = map_1(t, w_1);
      {
        u_38 = t;
        if(((t_38 != NULL) && (t_38 != u_38)))
          _fail(u_38);
        else
          t_38 = u_38;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_32)), not_null(t_38))));
    return(t);
  }
  ATerm q_41 (ATerm t)
  {
    ATerm w_38 = NULL;
    ATerm x_38 = NULL;
    t = new_0(t);
    {
      x_38 = t;
      if(((w_38 != NULL) && (w_38 != x_38)))
        _fail(x_38);
      else
        w_38 = x_38;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_38)), term_l_12), term_n_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_v_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(CheckATermList(term_f_22), not_null(z_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_38)))))))));
    return(t);
  }
  ATerm r_41 (ATerm t)
  {
    ATerm a_39 = NULL;
    ATerm b_39 = NULL;
    t = new_0(t);
    {
      b_39 = t;
      if(((a_39 != NULL) && (a_39 != b_39)))
        _fail(b_39);
      else
        a_39 = b_39;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_39)), term_l_12), term_n_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_g_23, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_33)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_39)))))))));
    return(t);
  }
  ATerm s_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(z_32), not_null(a_33));
    return(t);
  }
  ATerm t_41 (ATerm t)
  {
    ATerm h_39 = NULL,i_39 = NULL;
    ATerm j_39 = NULL;
    ATerm k_39 = NULL;
    t = new_0(t);
    {
      j_39 = t;
      {
        if(((h_39 != NULL) && (h_39 != j_39)))
          _fail(j_39);
        else
          h_39 = j_39;
        {
          t = new_0(t);
          {
            k_39 = t;
            if(((i_39 != NULL) && (i_39 != k_39)))
              _fail(k_39);
            else
              i_39 = k_39;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_j_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_39)), term_l_12), term_m_23)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_39)), term_l_12), term_n_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_v_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_33)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_39)))))), not_null(z_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_32)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_39)))))))));
    return(t);
  }
  ATerm u_41 (ATerm t)
  {
    ATerm n_39 = NULL,o_39 = NULL;
    ATerm p_39 = NULL;
    ATerm q_39 = NULL;
    t = new_0(t);
    {
      p_39 = t;
      {
        if(((n_39 != NULL) && (n_39 != p_39)))
          _fail(p_39);
        else
          n_39 = p_39;
        {
          t = new_0(t);
          {
            q_39 = t;
            if(((o_39 != NULL) && (o_39 != q_39)))
              _fail(q_39);
            else
              o_39 = q_39;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_j_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_39)), term_l_12), term_m_23)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_39)), term_l_12), term_n_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_v_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_39)))))), not_null(z_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_33)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_39)))))))));
    return(t);
  }
  ATerm v_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_32), not_null(a_33));
    return(t);
  }
  ATerm w_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_33)), not_null(z_32)));
    return(t);
  }
  ATerm x_41 (ATerm t)
  {
    ATerm z_39 = NULL;
    ATerm y_23;
    y_23 = t;
    {
      t = not_null(z_32);
      {
        ATerm y_1 (ATerm t)
        {
          ATerm x_39 = NULL;
          x_39 = t;
          {
            ATerm z_23;
            z_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(x_39)), term_c_24);
              {
                ATerm z_1 (ATerm t)
                {
                  t = term_k_14;
                  return(t);
                }
                t = assert_1(t, z_1);
              }
            }
            t = z_23;
          }
          return(t);
        }
        t = map_1(t, y_1);
      }
    }
    t = y_23;
    {
      ATerm c_40 = NULL;
      t = not_null(z_32);
      {
        ATerm a_2 (ATerm t)
        {
          ATerm a_40 = NULL;
          a_40 = t;
          t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_40)), term_l_12), term_f_24);
          return(t);
        }
        t = map_1(t, a_2);
        {
          c_40 = t;
          if(((z_39 != NULL) && (z_39 != c_40)))
            _fail(c_40);
          else
            z_39 = c_40;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, not_null(z_39))), (ATerm) ATinsert(ATempty, not_null(a_33)));
    }
    return(t);
  }
  ATerm y_41 (ATerm t)
  {
    t = term_c_20;
    return(t);
  }
  ATerm z_41 (ATerm t)
  {
    t = term_m_21;
    return(t);
  }
  b_33 = t;
  f_30 :
  if(match_cons(b_33, sym_Build_1))
    {
      z_32 = ATgetArgument(b_33, 0);
      {
        ATerm d_33 = NULL;
        ATerm e_33 = NULL;
        t = not_null(z_32);
        {
          t = construct_term_caching_0(t);
          {
            e_33 = t;
            if(((d_33 != NULL) && (d_33 != e_33)))
              _fail(e_33);
            else
              d_33 = e_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, not_null(d_33)));
      }
    }
  else
    {
      if(match_cons(b_33, sym_Case_3))
        {
          z_32 = ATgetArgument(b_33, 0);
          a_33 = ATgetArgument(b_33, 1);
          y_32 = ATgetArgument(b_33, 2);
          m_30 :
          if(match_cons(z_32, sym_Var_1))
            {
              x_32 = ATgetArgument(z_32, 0);
              n_30 :
              if(((ATgetType(a_33) == AT_LIST) && ((ATermList) a_33 != ATempty)))
                {
                  r_32 = ATgetFirst((ATermList) a_33);
                  p_32 = (ATerm) ATgetNext((ATermList) a_33);
                  o_30 :
                  if(match_cons(r_32, sym_Alt_3))
                    {
                      l_32 = ATgetArgument(r_32, 0);
                      n_32 = ATgetArgument(r_32, 1);
                      o_32 = ATgetArgument(r_32, 2);
                      p_30 :
                      if(match_cons(l_32, sym_Fun_2))
                        {
                          m_32 = ATgetArgument(l_32, 0);
                          k_32 = ATgetArgument(l_32, 1);
                          q_30 :
                          if(((ATgetType(n_32) == AT_LIST) && ((ATermList) n_32 != ATempty)))
                            {
                              e_32 = ATgetFirst((ATermList) n_32);
                              g_32 = (ATerm) ATgetNext((ATermList) n_32);
                              r_30 :
                              if(((ATgetType(g_32) == AT_LIST) && ((ATermList) g_32 != ATempty)))
                                {
                                  h_32 = ATgetFirst((ATermList) g_32);
                                  j_32 = (ATerm) ATgetNext((ATermList) g_32);
                                  s_30 :
                                  if(((ATermList) j_32 == ATempty))
                                    {
                                      t_30 :
                                      if(match_cons(h_32, sym_Var_1))
                                        {
                                          i_32 = ATgetArgument(h_32, 0);
                                          u_30 :
                                          if(match_cons(e_32, sym_Var_1))
                                            {
                                              f_32 = ATgetArgument(e_32, 0);
                                              v_30 :
                                              if(match_int(k_32, 2))
                                                {
                                                  w_30 :
                                                  if(match_string(m_32, "Cons"))
                                                    {
                                                      ATerm g_24 = t;
                                                      int i_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_32)))), term_z_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_r_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_32))), term_h_17)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_32)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_32)), term_r_10, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_32))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_32)), term_r_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_32))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_32)), not_null(p_32), not_null(y_32)))));
                                                          LocalPopChoice(i_24);
                                                        }
                                                      else
                                                        {
                                                          t = g_24;
                                                          t = g_40(t);
                                                        }
                                                    }
                                                  else
                                                    t = g_40(t);
                                                }
                                              else
                                                {
                                                  x_30 :
                                                  t = g_40(t);
                                                }
                                            }
                                          else
                                            {
                                              y_30 :
                                              z_30 :
                                              t = g_40(t);
                                            }
                                        }
                                      else
                                        {
                                          a_31 :
                                          b_31 :
                                          c_31 :
                                          t = g_40(t);
                                        }
                                    }
                                  else
                                    {
                                      d_31 :
                                      e_31 :
                                      f_31 :
                                      g_31 :
                                      t = g_40(t);
                                    }
                                }
                              else
                                {
                                  h_31 :
                                  i_31 :
                                  j_31 :
                                  t = g_40(t);
                                }
                            }
                          else
                            {
                              if(((ATermList) n_32 == ATempty))
                                {
                                  k_31 :
                                  if(match_int(k_32, 0))
                                    {
                                      l_31 :
                                      if(match_string(m_32, "Nil"))
                                        {
                                          ATerm j_24 = t;
                                          int k_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_r_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_32))), term_h_17), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(o_32)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_32)), not_null(p_32), not_null(y_32)))));
                                              LocalPopChoice(k_24);
                                            }
                                          else
                                            {
                                              t = j_24;
                                              t = g_40(t);
                                            }
                                        }
                                      else
                                        t = g_40(t);
                                    }
                                  else
                                    {
                                      m_31 :
                                      t = g_40(t);
                                    }
                                }
                              else
                                {
                                  n_31 :
                                  q_31 :
                                  t = g_40(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(l_32, sym_Real_1))
                            {
                              m_32 = ATgetArgument(l_32, 0);
                              t = h_40(t);
                            }
                          else
                            {
                              if(match_cons(l_32, sym_Int_1))
                                {
                                  m_32 = ATgetArgument(l_32, 0);
                                  t = i_40(t);
                                }
                              else
                                {
                                  if(match_cons(l_32, sym_Str_1))
                                    {
                                      m_32 = ATgetArgument(l_32, 0);
                                      t = j_40(t);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                        }
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(((ATermList) a_33 == ATempty))
                    {
                      t = k_40(t);
                    }
                  else
                    _fail(t);
                }
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(b_33, sym_Case_4))
            {
              z_32 = ATgetArgument(b_33, 0);
              a_33 = ATgetArgument(b_33, 1);
              y_32 = ATgetArgument(b_33, 2);
              q_32 = ATgetArgument(b_33, 3);
              t = l_40(t);
            }
          else
            {
              if(match_cons(b_33, sym_Continue_1))
                {
                  z_32 = ATgetArgument(b_33, 0);
                  t = m_40(t);
                }
              else
                {
                  if(match_cons(b_33, sym_Assign_2))
                    {
                      z_32 = ATgetArgument(b_33, 0);
                      a_33 = ATgetArgument(b_33, 1);
                      r_31 :
                      if(match_cons(z_32, sym_Var_1))
                        {
                          x_32 = ATgetArgument(z_32, 0);
                          s_31 :
                          if(match_cons(a_33, sym_Var_1))
                            {
                              r_32 = ATgetArgument(a_33, 0);
                              {
                                ATerm l_24 = t;
                                int m_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_40(t);
                                    LocalPopChoice(m_24);
                                  }
                                else
                                  {
                                    t = l_24;
                                    t = o_40(t);
                                  }
                              }
                            }
                          else
                            t = o_40(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(b_33, sym_Assign_1))
                        {
                          z_32 = ATgetArgument(b_33, 0);
                          t_31 :
                          if(match_cons(z_32, sym_Var_1))
                            {
                              x_32 = ATgetArgument(z_32, 0);
                              t = p_40(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(b_33, sym_Match_2))
                            {
                              z_32 = ATgetArgument(b_33, 0);
                              a_33 = ATgetArgument(b_33, 1);
                              u_31 :
                              if(match_cons(z_32, sym_Op_2))
                                {
                                  x_32 = ATgetArgument(z_32, 0);
                                  w_32 = ATgetArgument(z_32, 1);
                                  v_31 :
                                  if(((ATgetType(w_32) == AT_LIST) && ((ATermList) w_32 != ATempty)))
                                    {
                                      s_32 = ATgetFirst((ATermList) w_32);
                                      t_32 = (ATerm) ATgetNext((ATermList) w_32);
                                      w_31 :
                                      if(((ATgetType(t_32) == AT_LIST) && ((ATermList) t_32 != ATempty)))
                                        {
                                          u_32 = ATgetFirst((ATermList) t_32);
                                          v_32 = (ATerm) ATgetNext((ATermList) t_32);
                                          x_31 :
                                          if(((ATermList) v_32 == ATempty))
                                            {
                                              y_31 :
                                              if(match_string(x_32, "Cons"))
                                                {
                                                  ATerm n_24 = t;
                                                  int o_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = u_40(t);
                                                      LocalPopChoice(o_24);
                                                    }
                                                  else
                                                    {
                                                      t = n_24;
                                                      t = w_40(t);
                                                    }
                                                }
                                              else
                                                t = w_40(t);
                                            }
                                          else
                                            {
                                              z_31 :
                                              t = w_40(t);
                                            }
                                        }
                                      else
                                        {
                                          a_32 :
                                          t = w_40(t);
                                        }
                                    }
                                  else
                                    {
                                      if(((ATermList) w_32 == ATempty))
                                        {
                                          b_32 :
                                          if(match_string(x_32, "Nil"))
                                            {
                                              ATerm r_24 = t;
                                              int s_24 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = v_40(t);
                                                  LocalPopChoice(s_24);
                                                }
                                              else
                                                {
                                                  t = r_24;
                                                  t = w_40(t);
                                                }
                                            }
                                          else
                                            t = w_40(t);
                                        }
                                      else
                                        {
                                          c_32 :
                                          t = w_40(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(z_32, sym_Real_1))
                                    {
                                      x_32 = ATgetArgument(z_32, 0);
                                      t = x_40(t);
                                    }
                                  else
                                    {
                                      if(match_cons(z_32, sym_Int_1))
                                        {
                                          x_32 = ATgetArgument(z_32, 0);
                                          t = y_40(t);
                                        }
                                      else
                                        {
                                          if(match_cons(z_32, sym_Str_1))
                                            {
                                              x_32 = ATgetArgument(z_32, 0);
                                              t = z_40(t);
                                            }
                                          else
                                            {
                                              if(match_cons(z_32, sym_Var_1))
                                                {
                                                  x_32 = ATgetArgument(z_32, 0);
                                                  t = a_41(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(z_32, sym_As_2))
                                                    {
                                                      x_32 = ATgetArgument(z_32, 0);
                                                      w_32 = ATgetArgument(z_32, 1);
                                                      t = b_41(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(z_32, sym_BuildDefault_1))
                                                        {
                                                          x_32 = ATgetArgument(z_32, 0);
                                                          t = c_41(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(z_32, sym_Wld_0))
                                                            t = d_41(t);
                                                          else
                                                            _fail(t);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(b_33, sym_Match_1))
                                {
                                  z_32 = ATgetArgument(b_33, 0);
                                  t = g_41(t);
                                }
                              else
                                {
                                  if(match_cons(b_33, sym_Let_2))
                                    {
                                      z_32 = ATgetArgument(b_33, 0);
                                      a_33 = ATgetArgument(b_33, 1);
                                      t = h_41(t);
                                    }
                                  else
                                    {
                                      if(match_cons(b_33, sym_Where_1))
                                        {
                                          z_32 = ATgetArgument(b_33, 0);
                                          t = i_41(t);
                                        }
                                      else
                                        {
                                          if(match_cons(b_33, sym_Test_1))
                                            {
                                              z_32 = ATgetArgument(b_33, 0);
                                              t = j_41(t);
                                            }
                                          else
                                            {
                                              if(match_cons(b_33, sym_Call_2))
                                                {
                                                  z_32 = ATgetArgument(b_33, 0);
                                                  a_33 = ATgetArgument(b_33, 1);
                                                  d_32 :
                                                  if(match_cons(z_32, sym_SVar_1))
                                                    {
                                                      x_32 = ATgetArgument(z_32, 0);
                                                      t = k_41(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(b_33, sym_Prim_2))
                                                    {
                                                      z_32 = ATgetArgument(b_33, 0);
                                                      a_33 = ATgetArgument(b_33, 1);
                                                      t = p_41(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(b_33, sym_Not_1))
                                                        {
                                                          z_32 = ATgetArgument(b_33, 0);
                                                          t = q_41(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(b_33, sym_LGChoice_2))
                                                            {
                                                              z_32 = ATgetArgument(b_33, 0);
                                                              a_33 = ATgetArgument(b_33, 1);
                                                              t = r_41(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(b_33, sym_GChoice_2))
                                                                {
                                                                  z_32 = ATgetArgument(b_33, 0);
                                                                  a_33 = ATgetArgument(b_33, 1);
                                                                  t = s_41(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(b_33, sym_GuardedLChoice_3))
                                                                    {
                                                                      z_32 = ATgetArgument(b_33, 0);
                                                                      a_33 = ATgetArgument(b_33, 1);
                                                                      y_32 = ATgetArgument(b_33, 2);
                                                                      t = t_41(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(b_33, sym_LChoice_2))
                                                                        {
                                                                          z_32 = ATgetArgument(b_33, 0);
                                                                          a_33 = ATgetArgument(b_33, 1);
                                                                          t = u_41(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(b_33, sym_Choice_2))
                                                                            {
                                                                              z_32 = ATgetArgument(b_33, 0);
                                                                              a_33 = ATgetArgument(b_33, 1);
                                                                              t = v_41(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(b_33, sym_Seq_2))
                                                                                {
                                                                                  z_32 = ATgetArgument(b_33, 0);
                                                                                  a_33 = ATgetArgument(b_33, 1);
                                                                                  t = w_41(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(b_33, sym_Scope_2))
                                                                                    {
                                                                                      z_32 = ATgetArgument(b_33, 0);
                                                                                      a_33 = ATgetArgument(b_33, 1);
                                                                                      t = x_41(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(b_33, sym_Fail_0))
                                                                                        t = y_41(t);
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(b_33, sym_Id_0))
                                                                                            t = z_41(t);
                                                                                          else
                                                                                            _fail(t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm PlainBody_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  u_50 = t;
  t_50 :
  if(match_cons(u_50, sym__2))
    {
      v_50 = ATgetArgument(u_50, 0);
      w_50 = ATgetArgument(u_50, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(CheckATermList(term_b_25), not_null(w_50)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
  f_51 = t;
  d_51 :
  if(((ATgetType(f_51) == AT_LIST) && ((ATermList) f_51 != ATempty)))
    {
      g_51 = ATgetFirst((ATermList) f_51);
      h_51 = (ATerm) ATgetNext((ATermList) f_51);
      e_51 :
      if(match_int(g_51, 10))
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_51)), term_h_25), term_g_25);
      else
        {
          if(match_int(g_51, 92))
            t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_51)), term_g_25), term_g_25);
          else
            {
              if(match_int(g_51, 34))
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_51)), term_i_25), term_g_25);
              else
                _fail(t);
            }
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm escape_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm o_51 (ATerm t)
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Escape_0(t);
          {
            ATerm b_2 (ATerm t)
            {
              t = Cons_2(t, _id, o_51);
              return(t);
            }
            t = Cons_2(t, _id, b_2);
          }
          LocalPopChoice(k_25);
        }
      else
        {
          t = j_25;
          {
            ATerm l_25 = t;
            int m_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, o_51);
                LocalPopChoice(m_25);
              }
            else
              {
                t = l_25;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = o_51(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  s_51 :
  if(match_cons(t_51, sym__2))
    {
      u_51 = ATgetArgument(t_51, 0);
      v_51 = ATgetArgument(t_51, 1);
      {
        ATerm y_51 = NULL,a_52 = NULL;
        ATerm n_25;
        n_25 = t;
        {
          ATerm z_51 = NULL;
          t = (ATerm) ATinsert(CheckATermList(term_p_25), not_null(u_51));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  z_51 = t;
                  if(((y_51 != NULL) && (y_51 != z_51)))
                    _fail(z_51);
                  else
                    y_51 = z_51;
                }
              }
            }
          }
        }
        t = n_25;
        {
          ATerm b_52 = NULL;
          t = (ATerm) ATinsert(CheckATermList(term_r_25), not_null(u_51));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  b_52 = t;
                  if(((a_52 != NULL) && (a_52 != b_52)))
                    _fail(b_52);
                  else
                    a_52 = b_52;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_b_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_25, (ATerm) ATinsert(ATinsert(CheckATermList(term_a_20), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(a_52))), term_u_25)))), not_null(v_51)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_25, (ATerm) ATinsert(ATinsert(CheckATermList(term_a_20), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(y_51))), term_u_25)))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm i_52 = NULL;
  i_52 = t;
  {
    ATerm k_52 = NULL,l_52 = NULL;
    t = term_z_9;
    {
      ATerm c_2 (ATerm t)
      {
        t = term_j_10;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        k_52 = t;
        g_52 :
        if(match_cons(k_52, sym_Defined_1))
          {
            l_52 = ATgetArgument(k_52, 0);
            h_52 :
            if(!(match_string(l_52, "d_0")))
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(i_52);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm r_52 = NULL;
  r_52 = t;
  {
    ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_52));
    {
      ATerm d_2 (ATerm t)
      {
        t = term_o_10;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        t_52 = t;
        p_52 :
        if(match_cons(t_52, sym_Defined_2))
          {
            u_52 = ATgetArgument(t_52, 0);
            v_52 = ATgetArgument(t_52, 1);
            q_52 :
            if(match_string(u_52, "e_0"))
              {
                if(((r_52 != NULL) && (r_52 != v_52)))
                  _fail(v_52);
                else
                  r_52 = v_52;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(r_52);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL;
  c_53 = t;
  b_53 :
  if(match_cons(c_53, sym_SDef_3))
    {
      d_53 = ATgetArgument(c_53, 0);
      e_53 = ATgetArgument(c_53, 1);
      f_53 = ATgetArgument(c_53, 2);
      {
        ATerm j_53 = NULL,k_53 = NULL;
        ATerm l_53 = NULL;
        t = not_null(e_53);
        {
          ATerm m_53 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            l_53 = t;
            {
              if(((j_53 != NULL) && (j_53 != l_53)))
                _fail(l_53);
              else
                j_53 = l_53;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_53), not_null(f_53));
                {
                  ATerm x_25 = t;
                  int y_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_2 (ATerm t)
                      {
                        ATerm z_25 = t;
                        int c_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            LocalPopChoice(c_26);
                          }
                        else
                          {
                            t = z_25;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, e_2, _id);
                      t = TracedBody_0(t);
                      LocalPopChoice(y_25);
                    }
                  else
                    {
                      t = x_25;
                      t = PlainBody_0(t);
                    }
                  {
                    m_53 = t;
                    if(((k_53 != NULL) && (k_53 != m_53)))
                      _fail(m_53);
                    else
                      k_53 = m_53;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_a_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_53)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(j_53)), term_e_26)))), not_null(k_53));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm quote_1 (ATerm t, ATerm b_76 (ATerm))
{
  ATerm t_53 = NULL;
  ATerm v_53 = NULL,x_53 = NULL;
  t_53 = t;
  {
    ATerm f_26;
    f_26 = t;
    {
      ATerm w_53 = NULL;
      t = b_76(t);
      {
        w_53 = t;
        if(((v_53 != NULL) && (v_53 != w_53)))
          _fail(w_53);
        else
          v_53 = w_53;
      }
    }
    t = f_26;
    {
      ATerm y_53 = NULL;
      t = not_null(t_53);
      {
        t = explode_string_0(t);
        {
          y_53 = t;
          if(((x_53 != NULL) && (x_53 != y_53)))
            _fail(y_53);
          else
            x_53 = y_53;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, not_null(v_53))), not_null(x_53)), (ATerm) ATinsert(ATempty, not_null(v_53)));
        {
          t = concat_0(t);
          t = implode_string_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = term_i_25;
    return(t);
  }
  t = quote_1(t, f_2);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
  e_54 = t;
  d_54 :
  if(((ATgetType(e_54) == AT_LIST) && ((ATermList) e_54 != ATempty)))
    {
      f_54 = ATgetFirst((ATermList) e_54);
      g_54 = (ATerm) ATgetNext((ATermList) e_54);
      t = not_null(f_54);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL;
  m_54 = t;
  l_54 :
  if(match_cons(m_54, sym__2))
    {
      n_54 = ATgetArgument(m_54, 0);
      o_54 = ATgetArgument(m_54, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_54), not_null(o_54));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm e_69 (ATerm))
{
  ATerm u_54 = NULL;
  ATerm w_54 = NULL;
  u_54 = t;
  {
    ATerm x_54 = NULL;
    t = term_g_26;
    {
      t = e_69(t);
      {
        x_54 = t;
        if(((w_54 != NULL) && (w_54 != x_54)))
          _fail(x_54);
        else
          w_54 = x_54;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_54), not_null(u_54));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  e_55 :
  if(match_cons(f_55, sym__2))
    {
      g_55 = ATgetArgument(f_55, 0);
      h_55 = ATgetArgument(f_55, 1);
      {
        ATerm k_55 = NULL;
        ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(g_55), not_null(h_55));
        {
          ATerm g_2 (ATerm t)
          {
            t = term_h_26;
            return(t);
          }
          t = rewrite_1(t, g_2);
          {
            l_55 = t;
            c_55 :
            if(match_cons(l_55, sym_Defined_2))
              {
                m_55 = ATgetArgument(l_55, 0);
                n_55 = ATgetArgument(l_55, 1);
                d_55 :
                if(match_string(m_55, "f_0"))
                  {
                    if(((k_55 != NULL) && (k_55 != n_55)))
                      _fail(n_55);
                    else
                      k_55 = n_55;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = not_null(k_55);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InitConstructor_0 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  v_55 :
  if(match_cons(w_55, sym_OpDecl_2))
    {
      x_55 = ATgetArgument(w_55, 0);
      y_55 = ATgetArgument(w_55, 1);
      {
        ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,h_56 = NULL;
        ATerm i_26;
        i_26 = t;
        {
          ATerm e_56 = NULL;
          t = not_null(y_55);
          {
            ATerm f_56 = NULL;
            t = Arity_0(t);
            {
              e_56 = t;
              {
                if(((c_56 != NULL) && (c_56 != e_56)))
                  _fail(e_56);
                else
                  c_56 = e_56;
                {
                  ATerm g_56 = NULL;
                  t = int_to_string_0(t);
                  {
                    f_56 = t;
                    {
                      if(((b_56 != NULL) && (b_56 != f_56)))
                        _fail(f_56);
                      else
                        b_56 = f_56;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), not_null(c_56));
                        {
                          t = ConstructorName_0(t);
                          {
                            g_56 = t;
                            if(((d_56 != NULL) && (d_56 != g_56)))
                              _fail(g_56);
                            else
                              d_56 = g_56;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = i_26;
        {
          ATerm i_56 = NULL;
          t = not_null(x_55);
          {
            t = double_quote_0(t);
            {
              i_56 = t;
              if(((h_56 != NULL) && (h_56 != i_56)))
                _fail(i_56);
              else
                h_56 = i_56;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_56)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_56)), term_r_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(ATinsert(CheckATermList(term_l_26), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(b_56))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(h_56))))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InitConstructors_0 (ATerm t)
{
  ATerm r_56 = NULL;
  ATerm t_56 = NULL;
  r_56 = t;
  {
    ATerm u_56 = NULL,w_56 = NULL;
    ATerm v_56 = NULL;
    t = not_null(r_56);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          v_56 = t;
          if(((u_56 != NULL) && (u_56 != v_56)))
            _fail(v_56);
          else
            u_56 = v_56;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_56), term_q_26);
      {
        t = conc_0(t);
        {
          w_56 = t;
          if(((t_56 != NULL) && (t_56 != w_56)))
            _fail(w_56);
          else
            t_56 = w_56;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_d_11, term_t_26, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(t_56)));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm d_57 = NULL;
  d_57 = t;
  t = SSL_int_to_string(not_null(d_57));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
  o_57 = t;
  m_57 :
  if(((ATgetType(o_57) == AT_LIST) && ((ATermList) o_57 != ATempty)))
    {
      p_57 = ATgetFirst((ATermList) o_57);
      q_57 = (ATerm) ATgetNext((ATermList) o_57);
      n_57 :
      if(match_int(p_57, 95))
        {
          ATerm s_57 = NULL;
          ATerm t_57 = NULL;
          t = not_null(q_57);
          {
            t = q_0(t);
            {
              t_57 = t;
              if(((s_57 != NULL) && (s_57 != t_57)))
                _fail(t_57);
              else
                s_57 = t_57;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(s_57)), term_u_26), term_u_26);
        }
      else
        {
          if(match_int(p_57, 45))
            {
              ATerm v_57 = NULL;
              ATerm w_57 = NULL;
              t = not_null(q_57);
              {
                t = q_0(t);
                {
                  w_57 = t;
                  if(((v_57 != NULL) && (v_57 != w_57)))
                    _fail(w_57);
                  else
                    v_57 = w_57;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_57)), term_u_26);
            }
          else
            {
              if(match_int(p_57, 39))
                {
                  ATerm y_57 = NULL;
                  ATerm z_57 = NULL;
                  t = not_null(q_57);
                  {
                    t = q_0(t);
                    {
                      z_57 = t;
                      if(((y_57 != NULL) && (y_57 != z_57)))
                        _fail(z_57);
                      else
                        y_57 = z_57;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(y_57)), term_u_26), term_v_26), term_u_26);
                }
              else
                _fail(t);
            }
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm escape_1 (ATerm t, ATerm o_75 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm g_58 (ATerm t)
    {
      ATerm w_26 = t;
      int x_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_75(t, g_58);
          LocalPopChoice(x_26);
        }
      else
        {
          t = w_26;
          {
            ATerm y_26 = t;
            int z_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, g_58);
                LocalPopChoice(z_26);
              }
            else
              {
                t = y_26;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = g_58(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  i_58 :
  if(match_cons(j_58, sym__2))
    {
      k_58 = ATgetArgument(j_58, 0);
      l_58 = ATgetArgument(j_58, 1);
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_58), not_null(l_58));
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            t = SSL_addr(not_null(k_58), not_null(l_58));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm))
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_78(t);
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      {
        ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
        t_58 = t;
        s_58 :
        if(((ATgetType(t_58) == AT_LIST) && ((ATermList) t_58 != ATempty)))
          {
            u_58 = ATgetFirst((ATermList) t_58);
            v_58 = (ATerm) ATgetNext((ATermList) t_58);
            {
              ATerm y_58 = NULL,a_59 = NULL;
              ATerm e_27;
              e_27 = t;
              {
                ATerm z_58 = NULL;
                t = not_null(u_58);
                {
                  t = f_78(t);
                  {
                    z_58 = t;
                    if(((y_58 != NULL) && (y_58 != z_58)))
                      _fail(z_58);
                    else
                      y_58 = z_58;
                  }
                }
              }
              t = e_27;
              {
                ATerm b_59 = NULL;
                t = not_null(v_58);
                {
                  t = foldr_3(t, d_78, e_78, f_78);
                  {
                    b_59 = t;
                    if(((a_59 != NULL) && (a_59 != b_59)))
                      _fail(b_59);
                    else
                      a_59 = b_59;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_58), not_null(a_59));
                  t = e_78(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_i_18;
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_k_18;
    return(t);
  }
  t = foldr_3(t, h_2, add_0, i_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
  j_59 = t;
  h_59 :
  if(match_cons(j_59, sym_FunType_2))
    {
      k_59 = ATgetArgument(j_59, 0);
      i_59 = ATgetArgument(j_59, 1);
      {
        t = not_null(k_59);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(j_59, sym_ConstType_1))
        {
          k_59 = ATgetArgument(j_59, 0);
          t = term_i_18;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm DeclareConstructor_0 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
  w_59 = t;
  v_59 :
  if(match_cons(w_59, sym_OpDecl_2))
    {
      x_59 = ATgetArgument(w_59, 0);
      y_59 = ATgetArgument(w_59, 1);
      {
        ATerm b_60 = NULL,c_60 = NULL;
        ATerm d_60 = NULL;
        t = not_null(y_59);
        {
          ATerm e_60 = NULL,g_60 = NULL,j_60 = NULL;
          t = Arity_0(t);
          {
            d_60 = t;
            {
              if(((b_60 != NULL) && (b_60 != d_60)))
                _fail(d_60);
              else
                b_60 = d_60;
              {
                ATerm f_27;
                f_27 = t;
                {
                  ATerm f_60 = NULL;
                  t = not_null(x_59);
                  {
                    t = cify_0(t);
                    {
                      f_60 = t;
                      if(((e_60 != NULL) && (e_60 != f_60)))
                        _fail(f_60);
                      else
                        e_60 = f_60;
                    }
                  }
                }
                t = f_27;
                {
                  ATerm h_60 = NULL;
                  t = not_null(b_60);
                  {
                    t = int_to_string_0(t);
                    {
                      h_60 = t;
                      if(((g_60 != NULL) && (g_60 != h_60)))
                        _fail(h_60);
                      else
                        g_60 = h_60;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_60)), term_h_27), not_null(e_60)), term_g_27);
                    {
                      t = concat_strings_0(t);
                      {
                        j_60 = t;
                        {
                          if(((c_60 != NULL) && (c_60 != j_60)))
                            _fail(j_60);
                          else
                            c_60 = j_60;
                          {
                            ATerm i_27;
                            i_27 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(x_59), not_null(b_60)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_27, not_null(c_60)));
                              {
                                ATerm j_2 (ATerm t)
                                {
                                  t = term_h_26;
                                  return(t);
                                }
                                t = assert_1(t, j_2);
                              }
                            }
                            t = i_27;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_60)), term_l_12)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateSig_0 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  y_60 = t;
  u_60 :
  if(match_cons(y_60, sym_Signature_1))
    {
      z_60 = ATgetArgument(y_60, 0);
      v_60 :
      if(((ATgetType(z_60) == AT_LIST) && ((ATermList) z_60 != ATempty)))
        {
          a_61 = ATgetFirst((ATermList) z_60);
          c_61 = (ATerm) ATgetNext((ATermList) z_60);
          w_60 :
          if(match_cons(a_61, sym_Constructors_1))
            {
              b_61 = ATgetArgument(a_61, 0);
              x_60 :
              if(((ATermList) c_61 == ATempty))
                {
                  {
                    ATerm e_61 = NULL,f_61 = NULL,i_61 = NULL;
                    ATerm n_27;
                    n_27 = t;
                    {
                      ATerm g_61 = NULL;
                      t = not_null(b_61);
                      {
                        ATerm h_61 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          g_61 = t;
                          {
                            if(((e_61 != NULL) && (e_61 != g_61)))
                              _fail(g_61);
                            else
                              e_61 = g_61;
                            {
                              t = not_null(b_61);
                              {
                                t = InitConstructors_0(t);
                                {
                                  h_61 = t;
                                  if(((f_61 != NULL) && (f_61 != h_61)))
                                    _fail(h_61);
                                  else
                                    f_61 = h_61;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = n_27;
                    {
                      ATerm j_61 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_61), (ATerm) ATinsert(ATempty, not_null(f_61)));
                      {
                        t = conc_0(t);
                        {
                          j_61 = t;
                          if(((i_61 != NULL) && (i_61 != j_61)))
                            _fail(j_61);
                          else
                            i_61 = j_61;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(i_61));
                    }
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL;
  q_61 = t;
  p_61 :
  if(match_cons(q_61, sym__2))
    {
      r_61 = ATgetArgument(q_61, 0);
      s_61 = ATgetArgument(q_61, 1);
      {
        t = not_null(r_61);
        {
          ATerm k_2 (ATerm t)
          {
            t = not_null(s_61);
            return(t);
          }
          t = at_end_1(t, k_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateType_0 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL;
  b_62 = t;
  z_61 :
  if(match_cons(b_62, sym_FunType_2))
    {
      c_62 = ATgetArgument(b_62, 0);
      a_62 = ATgetArgument(b_62, 1);
      {
        ATerm e_62 = NULL;
        ATerm f_62 = NULL;
        t = not_null(c_62);
        {
          t = map_1(t, TranslateType_0);
          {
            f_62 = t;
            if(((e_62 != NULL) && (e_62 != f_62)))
              _fail(f_62);
            else
              e_62 = f_62;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(e_62)));
      }
    }
  else
    {
      if(match_cons(b_62, sym_ConstType_1))
        {
          c_62 = ATgetArgument(b_62, 0);
          t = term_a_12;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm TranslateVarDec_0 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
  r_62 = t;
  o_62 :
  if(match_cons(r_62, sym_VarDec_2))
    {
      s_62 = ATgetArgument(r_62, 0);
      t_62 = ATgetArgument(r_62, 1);
      p_62 :
      if(match_cons(t_62, sym_FunType_2))
        {
          u_62 = ATgetArgument(t_62, 0);
          q_62 = ATgetArgument(t_62, 1);
          {
            ATerm x_62 = NULL;
            ATerm y_62 = NULL;
            t = not_null(u_62);
            {
              t = map_1(t, TranslateType_0);
              {
                y_62 = t;
                if(((x_62 != NULL) && (x_62 != y_62)))
                  _fail(y_62);
                else
                  x_62 = y_62;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_62)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(x_62)))));
          }
        }
      else
        {
          if(match_cons(t_62, sym_ConstType_1))
            {
              u_62 = ATgetArgument(t_62, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_62)), term_l_12));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDefToDeclaration_0 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL;
  g_63 = t;
  f_63 :
  if(match_cons(g_63, sym_SDef_3))
    {
      h_63 = ATgetArgument(g_63, 0);
      i_63 = ATgetArgument(g_63, 1);
      j_63 = ATgetArgument(g_63, 2);
      {
        ATerm n_63 = NULL;
        ATerm o_63 = NULL;
        t = not_null(i_63);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            o_63 = t;
            if(((n_63 != NULL) && (n_63 != o_63)))
              _fail(o_63);
            else
              n_63 = o_63;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_63)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(n_63)), term_a_12))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateSpec_0 (ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL;
  b_64 = t;
  u_63 :
  if(match_cons(b_64, sym_Specification_1))
    {
      c_64 = ATgetArgument(b_64, 0);
      v_63 :
      if(((ATgetType(c_64) == AT_LIST) && ((ATermList) c_64 != ATempty)))
        {
          d_64 = ATgetFirst((ATermList) c_64);
          f_64 = (ATerm) ATgetNext((ATermList) c_64);
          w_63 :
          if(match_cons(d_64, sym_Signature_1))
            {
              e_64 = ATgetArgument(d_64, 0);
              x_63 :
              if(((ATgetType(f_64) == AT_LIST) && ((ATermList) f_64 != ATempty)))
                {
                  g_64 = ATgetFirst((ATermList) f_64);
                  i_64 = (ATerm) ATgetNext((ATermList) f_64);
                  z_63 :
                  if(match_cons(g_64, sym_Strategies_1))
                    {
                      h_64 = ATgetArgument(g_64, 0);
                      a_64 :
                      if(((ATermList) i_64 == ATempty))
                        {
                          {
                            ATerm l_64 = NULL,n_64 = NULL;
                            ATerm o_27;
                            o_27 = t;
                            {
                              ATerm m_64 = NULL;
                              t = not_null(h_64);
                              {
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  m_64 = t;
                                  if(((l_64 != NULL) && (l_64 != m_64)))
                                    _fail(m_64);
                                  else
                                    l_64 = m_64;
                                }
                              }
                            }
                            t = o_27;
                            {
                              ATerm o_64 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(l_64), not_null(h_64));
                              {
                                t = conc_0(t);
                                {
                                  o_64 = t;
                                  if(((n_64 != NULL) && (n_64 != o_64)))
                                    _fail(o_64);
                                  else
                                    n_64 = o_64;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(n_64)), term_b_28), (ATerm) ATmakeAppl(sym_Signature_1, not_null(e_64))), term_a_28), term_s_27), term_q_27));
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
  u_64 = t;
  t_64 :
  if(((ATgetType(u_64) == AT_LIST) && ((ATermList) u_64 != ATempty)))
    {
      v_64 = ATgetFirst((ATermList) u_64);
      w_64 = (ATerm) ATgetNext((ATermList) u_64);
      t = not_null(w_64);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
  d_65 = t;
  c_65 :
  if(match_cons(d_65, sym__2))
    {
      e_65 = ATgetArgument(d_65, 0);
      f_65 = ATgetArgument(d_65, 1);
      {
        ATerm c_28;
        c_28 = t;
        {
          ATerm i_65 = NULL;
          ATerm j_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_65), not_null(f_65));
          {
            ATerm d_28 = t;
            int e_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(e_28);
              }
            else
              {
                t = d_28;
                t = (ATerm) ATempty;
              }
            {
              j_65 = t;
              if(((i_65 != NULL) && (i_65 != j_65)))
                _fail(j_65);
              else
                i_65 = j_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_65), not_null(f_65), not_null(i_65));
            t = table_put_0(t);
          }
        }
        t = c_28;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm z_68 (ATerm))
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL;
  ATerm f_28;
  f_28 = t;
  {
    ATerm t_65 = NULL;
    ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
    t = z_68(t);
    {
      t_65 = t;
      {
        if(((r_65 != NULL) && (r_65 != t_65)))
          _fail(t_65);
        else
          r_65 = t_65;
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_65), term_i_28);
              t = table_get_0(t);
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              t = term_j_28;
            }
          {
            u_65 = t;
            p_65 :
            if(((ATgetType(u_65) == AT_LIST) && ((ATermList) u_65 != ATempty)))
              {
                v_65 = ATgetFirst((ATermList) u_65);
                w_65 = (ATerm) ATgetNext((ATermList) u_65);
                {
                  if(((s_65 != NULL) && (s_65 != v_65)))
                    _fail(v_65);
                  else
                    s_65 = v_65;
                  {
                    if(((q_65 != NULL) && (q_65 != w_65)))
                      _fail(w_65);
                    else
                      q_65 = w_65;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(r_65), term_i_28, not_null(q_65));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_65);
                          {
                            ATerm l_2 (ATerm t)
                            {
                              ATerm x_65 = NULL;
                              x_65 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_65), not_null(x_65));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, l_2);
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              _fail(t);
          }
        }
      }
    }
  }
  t = f_28;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm q_90 (ATerm), ATerm r_90 (ATerm))
{
  ATerm k_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_90(t);
      t = r_90(t);
      LocalPopChoice(m_28);
    }
  else
    {
      t = k_28;
      {
        t = r_90(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm y_68 (ATerm))
{
  ATerm h_66 = NULL;
  ATerm n_28;
  n_28 = t;
  {
    ATerm i_66 = NULL;
    ATerm j_66 = NULL;
    t = y_68(t);
    {
      i_66 = t;
      {
        if(((h_66 != NULL) && (h_66 != i_66)))
          _fail(i_66);
        else
          h_66 = i_66;
        {
          ATerm k_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_66), term_i_28);
          {
            ATerm o_28 = t;
            int r_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_28);
              }
            else
              {
                t = o_28;
                t = (ATerm) ATempty;
              }
            {
              k_66 = t;
              if(((j_66 != NULL) && (j_66 != k_66)))
                _fail(k_66);
              else
                j_66 = k_66;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_66), term_i_28, (ATerm) ATinsert(CheckATermList(not_null(j_66)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_28;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm a_69 (ATerm), ATerm b_69 (ATerm))
{
  t = begin_scope_1(t, a_69);
  {
    ATerm m_2 (ATerm t)
    {
      t = end_scope_1(t, a_69);
      return(t);
    }
    t = restore_always_2(t, b_69, m_2);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_69 (ATerm))
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
  s_66 = t;
  r_66 :
  if(match_cons(s_66, sym__2))
    {
      t_66 = ATgetArgument(s_66, 0);
      u_66 = ATgetArgument(s_66, 1);
      {
        ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
        ATerm t_28;
        t_28 = t;
        {
          ATerm a_67 = NULL;
          ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
          t = c_69(t);
          {
            a_67 = t;
            {
              if(((x_66 != NULL) && (x_66 != a_67)))
                _fail(a_67);
              else
                x_66 = a_67;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_66), not_null(t_66), not_null(u_66));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_28 = t;
                    int v_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_66), term_i_28);
                        t = table_get_0(t);
                        LocalPopChoice(v_28);
                      }
                    else
                      {
                        t = u_28;
                        t = term_j_28;
                      }
                    {
                      b_67 = t;
                      q_66 :
                      if(((ATgetType(b_67) == AT_LIST) && ((ATermList) b_67 != ATempty)))
                        {
                          c_67 = ATgetFirst((ATermList) b_67);
                          d_67 = (ATerm) ATgetNext((ATermList) b_67);
                          {
                            if(((y_66 != NULL) && (y_66 != c_67)))
                              _fail(c_67);
                            else
                              y_66 = c_67;
                            {
                              if(((z_66 != NULL) && (z_66 != d_67)))
                                _fail(d_67);
                              else
                                z_66 = d_67;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_66), term_i_28, (ATerm) ATinsert(CheckATermList(not_null(z_66)), (ATerm) ATinsert(CheckATermList(not_null(y_66)), not_null(t_66))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
            }
          }
        }
        t = t_28;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm init_term_caching_0 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL;
  ATerm w_28;
  w_28 = t;
  {
    ATerm l_67 = NULL;
    ATerm m_67 = NULL;
    t = term_y_28;
    {
      l_67 = t;
      {
        if(((j_67 != NULL) && (j_67 != l_67)))
          _fail(l_67);
        else
          j_67 = l_67;
        {
          t = term_i_17;
          {
            m_67 = t;
            if(((k_67 != NULL) && (k_67 != m_67)))
              _fail(m_67);
            else
              k_67 = m_67;
          }
        }
      }
    }
  }
  t = w_28;
  {
    ATerm a_29;
    a_29 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(j_67)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_29, not_null(k_67)));
      {
        ATerm n_2 (ATerm t)
        {
          t = term_q_15;
          return(t);
        }
        t = assert_1(t, n_2);
      }
    }
    t = a_29;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm s_67 (ATerm t)
    {
      ATerm o_2 (ATerm t)
      {
        t = term_k_14;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        ATerm q_2 (ATerm t)
        {
          ATerm c_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              LocalPopChoice(d_29);
            }
          else
            {
              t = c_29;
              {
                ATerm e_29 = t;
                int g_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    LocalPopChoice(g_29);
                  }
                else
                  {
                    t = e_29;
                    {
                      ATerm i_29 = t;
                      int j_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          LocalPopChoice(j_29);
                        }
                      else
                        {
                          t = i_29;
                          t = TranslateStrat_0(t);
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_1(t, q_2);
        {
          t = _all(t, s_67);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, o_2, p_2);
      return(t);
    }
    t = s_67(t);
    {
      ATerm r_2 (ATerm t)
      {
        ATerm w_2 (ATerm t)
        {
          ATerm r_67 = NULL;
          r_67 = t;
          q_67 :
          if(match_cons(r_67, sym_InitCachedTerms_0))
            t = init_cached_terms_0(t);
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1(t, w_2);
        return(t);
      }
      t = try_1(t, r_2);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm w_67 = NULL;
  ATerm k_29;
  k_29 = t;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm x_67 = NULL,y_67 = NULL;
      x_67 = t;
      v_67 :
      if(match_cons(x_67, sym_Program_1))
        {
          y_67 = ATgetArgument(x_67, 0);
          if(((w_67 != NULL) && (w_67 != y_67)))
            _fail(y_67);
          else
            w_67 = y_67;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, x_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(CheckATermList(term_n_29), not_null(w_67)), term_l_29));
      {
        t = printnl_0(t);
        {
          t = term_k_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_29;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_t_29;
  {
    t = printnl_0(t);
    {
      t = term_k_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm e_3 (ATerm t)
    {
      ATerm u_29 = t;
      if((PushChoice() == 0))
        {
          ATerm f_3 (ATerm t)
          {
            ATerm h_68 = NULL;
            h_68 = t;
            a_68 :
            if(!(match_cons(h_68, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, f_3);
          PopChoice();
          _fail(t);
        }
      else
        t = u_29;
      return(t);
    }
    t = _2(t, e_3, _id);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm m_3 (ATerm t)
        {
          ATerm i_68 = NULL,l_68 = NULL;
          i_68 = t;
          c_68 :
          if(match_cons(i_68, sym_Runtime_1))
            {
              l_68 = ATgetArgument(i_68, 0);
              if(((g_68 != NULL) && (g_68 != l_68)))
                _fail(l_68);
              else
                g_68 = l_68;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, m_3);
        return(t);
      }
      t = _2(t, g_3, _id);
      {
        ATerm n_3 (ATerm t)
        {
          ATerm o_3 (ATerm t)
          {
            ATerm m_68 = NULL,n_68 = NULL;
            m_68 = t;
            e_68 :
            if(match_cons(m_68, sym_Program_1))
              {
                n_68 = ATgetArgument(m_68, 0);
                if(((f_68 != NULL) && (f_68 != n_68)))
                  _fail(n_68);
                else
                  f_68 = n_68;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_3);
          return(t);
        }
        t = _2(t, n_3, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_x_29), not_null(g_68)), term_v_29), not_null(f_68)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_3);
  {
    t = term_i_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL;
  s_68 = t;
  r_68 :
  if(match_cons(s_68, sym__2))
    {
      t_68 = ATgetArgument(s_68, 0);
      u_68 = ATgetArgument(s_68, 1);
      t = SSL_WriteToTextFile(not_null(t_68), not_null(u_68));
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm t_49 (ATerm), ATerm u_49 (ATerm))
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
  i_69 = t;
  h_69 :
  if(match_cons(i_69, sym__2))
    {
      j_69 = ATgetArgument(i_69, 0);
      k_69 = ATgetArgument(i_69, 1);
      {
        ATerm n_69 = NULL;
        t = not_null(j_69);
        {
          ATerm p_69 = NULL;
          t = t_49(t);
          {
            n_69 = t;
            {
              t = not_null(k_69);
              {
                t = u_49(t);
                {
                  p_69 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_69), not_null(p_69));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  w_69 = t;
  v_69 :
  if(match_cons(w_69, sym__2))
    {
      x_69 = ATgetArgument(w_69, 0);
      y_69 = ATgetArgument(w_69, 1);
      t = SSL_WriteToBinaryFile(not_null(x_69), not_null(y_69));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_70 = NULL;
  ATerm y_29;
  y_29 = t;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm z_29 = t;
      int a_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_3 (ATerm t)
          {
            ATerm h_70 = NULL,i_70 = NULL;
            h_70 = t;
            d_70 :
            if(match_cons(h_70, sym_Output_1))
              {
                i_70 = ATgetArgument(h_70, 0);
                if(((g_70 != NULL) && (g_70 != i_70)))
                  _fail(i_70);
                else
                  g_70 = i_70;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_3);
          LocalPopChoice(a_30);
        }
      else
        {
          t = z_29;
          {
            ATerm j_70 = NULL;
            t = term_b_30;
            {
              j_70 = t;
              if(((g_70 != NULL) && (g_70 != j_70)))
                _fail(j_70);
              else
                g_70 = j_70;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_3, _id);
  }
  t = y_29;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(g_70);
        return(t);
      }
      t = split_2(t, t_3, _id);
      return(t);
    }
    t = _2(t, _id, r_3);
    {
      ATerm c_30 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_3 (ATerm t)
          {
            ATerm x_3 (ATerm t)
            {
              ATerm k_70 = NULL;
              k_70 = t;
              f_70 :
              if(!(match_cons(k_70, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, x_3);
            return(t);
          }
          t = _2(t, w_3, WriteToBinaryFile_0);
          LocalPopChoice(d_30);
        }
      else
        {
          t = c_30;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm q_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
  ATerm e_30;
  e_30 = t;
  t = dtime_0(t);
  t = e_30;
  {
    t = h_74(t);
    {
      ATerm g_30;
      g_30 = t;
      {
        ATerm r_70 = NULL;
        t = dtime_0(t);
        {
          r_70 = t;
          if(((q_70 != NULL) && (q_70 != r_70)))
            _fail(r_70);
          else
            q_70 = r_70;
        }
      }
      t = g_30;
      {
        s_70 = t;
        p_70 :
        if(match_cons(s_70, sym__2))
          {
            t_70 = ATgetArgument(s_70, 0);
            u_70 = ATgetArgument(s_70, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_70)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_70))), not_null(u_70));
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm a_71 = NULL;
  a_71 = t;
  t = SSL_ReadFromFile(not_null(a_71));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm f_71 = NULL,h_71 = NULL;
  ATerm h_30;
  h_30 = t;
  {
    ATerm g_71 = NULL;
    t = p_76(t);
    {
      g_71 = t;
      if(((f_71 != NULL) && (f_71 != g_71)))
        _fail(g_71);
      else
        f_71 = g_71;
    }
  }
  t = h_30;
  {
    ATerm i_71 = NULL;
    t = q_76(t);
    {
      i_71 = t;
      if(((h_71 != NULL) && (h_71 != i_71)))
        _fail(i_71);
      else
        h_71 = i_71;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_71), not_null(h_71));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_71 = NULL;
  ATerm i_30;
  i_30 = t;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          ATerm p_71 = NULL,q_71 = NULL;
          p_71 = t;
          m_71 :
          if(match_cons(p_71, sym_Input_1))
            {
              q_71 = ATgetArgument(p_71, 0);
              if(((o_71 != NULL) && (o_71 != q_71)))
                _fail(q_71);
              else
                o_71 = q_71;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, y_3);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        {
          ATerm r_71 = NULL;
          t = term_l_30;
          {
            r_71 = t;
            if(((o_71 != NULL) && (o_71 != r_71)))
              _fail(r_71);
            else
              o_71 = r_71;
          }
        }
      }
  }
  t = i_30;
  {
    ATerm e_4 (ATerm t)
    {
      t = not_null(o_71);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_71 = NULL;
  v_71 = t;
  u_71 :
  if(!(match_cons(v_71, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_74 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        {
          ATerm c_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(f_33);
            }
          else
            {
              t = c_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, f_4);
  t = g_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_71 = NULL;
  x_71 = t;
  t = SSL_table_create(not_null(x_71));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_72 = NULL;
  b_72 = t;
  {
    ATerm g_33;
    g_33 = t;
    {
      t = term_h_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_33, term_i_33, not_null(b_72));
          t = table_put_0(t);
        }
      }
    }
    t = g_33;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL,s_72 = NULL,t_72 = NULL;
  j_72 = t;
  h_72 :
  if(match_string(j_72, "register-usage-info"))
    t = register_usage_1(t, p_0);
  else
    {
      if(((ATgetType(j_72) == AT_LIST) && ((ATermList) j_72 != ATempty)))
        {
          k_72 = ATgetFirst((ATermList) j_72);
          l_72 = (ATerm) ATgetNext((ATermList) j_72);
          i_72 :
          if(((ATgetType(l_72) == AT_LIST) && ((ATermList) l_72 != ATempty)))
            {
              s_72 = ATgetFirst((ATermList) l_72);
              t_72 = (ATerm) ATgetNext((ATermList) l_72);
              {
                ATerm z_72 = NULL;
                ATerm j_33;
                j_33 = t;
                {
                  t = not_null(k_72);
                  t = n_0(t);
                }
                t = j_33;
                {
                  ATerm a_73 = NULL;
                  t = not_null(s_72);
                  {
                    t = o_0(t);
                    {
                      a_73 = t;
                      if(((z_72 != NULL) && (z_72 != a_73)))
                        _fail(a_73);
                      else
                        z_72 = a_73;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_72)), not_null(z_72));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        ATerm u_73 = NULL;
        u_73 = t;
        e_73 :
        if(!(match_string(u_73, "-S")))
          {
            if(!(match_string(u_73, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = term_m_33;
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        t = term_n_33;
        return(t);
      }
      t = Option_3(t, g_4, h_4, i_4);
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              ATerm y_73 = NULL;
              y_73 = t;
              f_73 :
              if(!(match_string(y_73, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm k_4 (ATerm t)
            {
              t = term_q_33;
              return(t);
            }
            ATerm r_4 (ATerm t)
            {
              t = term_r_33;
              return(t);
            }
            t = Option_3(t, j_4, k_4, r_4);
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            {
              ATerm s_33 = t;
              int t_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm z_73 = NULL;
                    z_73 = t;
                    i_73 :
                    if(!(match_string(z_73, "-v")))
                      {
                        if(!(match_string(z_73, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm t_4 (ATerm t)
                  {
                    t = term_u_33;
                    return(t);
                  }
                  ATerm v_4 (ATerm t)
                  {
                    t = term_v_33;
                    return(t);
                  }
                  t = Option_3(t, s_4, t_4, v_4);
                  LocalPopChoice(t_33);
                }
              else
                {
                  t = s_33;
                  {
                    ATerm w_33 = t;
                    int x_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_4 (ATerm t)
                        {
                          ATerm a_74 = NULL;
                          a_74 = t;
                          j_73 :
                          if(!(match_string(a_74, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm a_5 (ATerm t)
                        {
                          ATerm b_74 = NULL;
                          ATerm c_74 = NULL;
                          c_74 = t;
                          if(((b_74 != NULL) && (b_74 != c_74)))
                            _fail(c_74);
                          else
                            b_74 = c_74;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(b_74));
                          return(t);
                        }
                        ATerm c_5 (ATerm t)
                        {
                          t = term_y_33;
                          return(t);
                        }
                        t = ArgOption_3(t, w_4, a_5, c_5);
                        LocalPopChoice(x_33);
                      }
                    else
                      {
                        t = w_33;
                        {
                          ATerm f_34 = t;
                          int g_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_5 (ATerm t)
                              {
                                ATerm d_74 = NULL;
                                d_74 = t;
                                m_73 :
                                if(!(match_string(d_74, "-i")))
                                  {
                                    if(!(match_string(d_74, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm e_5 (ATerm t)
                              {
                                ATerm e_74 = NULL;
                                ATerm f_74 = NULL;
                                f_74 = t;
                                if(((e_74 != NULL) && (e_74 != f_74)))
                                  _fail(f_74);
                                else
                                  e_74 = f_74;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_74));
                                return(t);
                              }
                              ATerm f_5 (ATerm t)
                              {
                                t = term_s_34;
                                return(t);
                              }
                              t = ArgOption_3(t, d_5, e_5, f_5);
                              LocalPopChoice(g_34);
                            }
                          else
                            {
                              t = f_34;
                              {
                                ATerm t_34 = t;
                                int u_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_5 (ATerm t)
                                    {
                                      ATerm i_74 = NULL;
                                      i_74 = t;
                                      o_73 :
                                      if(!(match_string(i_74, "-o")))
                                        {
                                          if(!(match_string(i_74, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm h_5 (ATerm t)
                                    {
                                      ATerm j_74 = NULL;
                                      ATerm k_74 = NULL;
                                      k_74 = t;
                                      if(((j_74 != NULL) && (j_74 != k_74)))
                                        _fail(k_74);
                                      else
                                        j_74 = k_74;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_74));
                                      return(t);
                                    }
                                    ATerm i_5 (ATerm t)
                                    {
                                      t = term_v_34;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, g_5, h_5, i_5);
                                    LocalPopChoice(u_34);
                                  }
                                else
                                  {
                                    t = t_34;
                                    {
                                      ATerm w_34 = t;
                                      int x_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_5 (ATerm t)
                                          {
                                            ATerm l_74 = NULL;
                                            l_74 = t;
                                            s_73 :
                                            if(!(match_string(l_74, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_5 (ATerm t)
                                          {
                                            t = term_z_34;
                                            return(t);
                                          }
                                          ATerm l_5 (ATerm t)
                                          {
                                            t = term_a_35;
                                            return(t);
                                          }
                                          t = Option_3(t, j_5, k_5, l_5);
                                          LocalPopChoice(x_34);
                                        }
                                      else
                                        {
                                          t = w_34;
                                          {
                                            ATerm m_5 (ATerm t)
                                            {
                                              ATerm m_74 = NULL;
                                              m_74 = t;
                                              t_73 :
                                              if(!(match_string(m_74, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm n_5 (ATerm t)
                                            {
                                              t = term_c_35;
                                              return(t);
                                            }
                                            ATerm o_5 (ATerm t)
                                            {
                                              t = term_d_35;
                                              return(t);
                                            }
                                            t = Option_3(t, m_5, n_5, o_5);
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_74 = NULL;
  r_74 = t;
  t = SSL_table_destroy(not_null(r_74));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_74 = NULL;
  ATerm z_74 (ATerm t)
  {
    t = SSL_exit(not_null(x_74));
    return(t);
  }
  x_74 = t;
  w_74 :
  if(match_cons(x_74, sym_exit_0))
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_74(t);
          LocalPopChoice(f_35);
        }
      else
        {
          t = e_35;
          {
          }
        }
    }
  else
    t = z_74(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_75 = NULL;
  b_75 = t;
  t = SSL_implode_string(not_null(b_75));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm e_75 (ATerm t)
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_75);
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        {
          t = Nil_0(t);
          t = s_83(t);
        }
      }
    return(t);
  }
  t = e_75(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      {
        ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
        h_75 = t;
        g_75 :
        if(((ATgetType(h_75) == AT_LIST) && ((ATermList) h_75 != ATempty)))
          {
            i_75 = ATgetFirst((ATermList) h_75);
            j_75 = (ATerm) ATgetNext((ATermList) h_75);
            {
              t = not_null(i_75);
              {
                ATerm p_5 (ATerm t)
                {
                  t = not_null(j_75);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_5);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_75 = NULL;
  s_75 = t;
  t = SSL_explode_string(not_null(s_75));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_72 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm v_75 (ATerm t)
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        t = Cons_2(t, e_83, v_75);
      }
    return(t);
  }
  t = v_75(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm a_76 = NULL,c_76 = NULL,d_76 = NULL;
  d_76 = t;
  z_75 :
  if(((ATgetType(d_76) == AT_LIST) && ((ATermList) d_76 != ATempty)))
    {
      a_76 = ATgetFirst((ATermList) d_76);
      c_76 = (ATerm) ATgetNext((ATermList) d_76);
      {
        t = not_null(c_76);
        {
          ATerm f_8 (ATerm t)
          {
            ATerm g_76 = NULL;
            ATerm h_76 = NULL;
            t = m_0(t);
            {
              h_76 = t;
              if(((g_76 != NULL) && (g_76 != h_76)))
                _fail(h_76);
              else
                g_76 = h_76;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(g_76)), not_null(a_76));
            return(t);
          }
          t = reverse_1(t, f_8);
        }
      }
    }
  else
    {
      if(((ATermList) d_76 == ATempty))
        {
          {
            t = term_g_26;
            t = m_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, g_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_72 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm o_76 = NULL,r_76 = NULL;
  o_76 = t;
  n_76 :
  if(match_cons(o_76, sym_Program_1))
    {
      r_76 = ATgetArgument(o_76, 0);
      {
        ATerm t_76 = NULL;
        t = not_null(r_76);
        {
          t = l_62(t);
          {
            t_76 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_76));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm b_77 = NULL;
  ATerm h_8 (ATerm t)
  {
    ATerm i_8 (ATerm t)
    {
      ATerm c_77 = NULL;
      c_77 = t;
      if(((b_77 != NULL) && (b_77 != c_77)))
        _fail(c_77);
      else
        b_77 = c_77;
      return(t);
    }
    t = Program_1(t, i_8);
    return(t);
  }
  t = option_defined_1(t, h_8);
  {
    ATerm j_8 (ATerm t)
    {
      ATerm d_77 = NULL;
      ATerm e_77 = NULL;
      t = term_g_26;
      {
        ATerm k_8 (ATerm t)
        {
          t = not_null(b_77);
          return(t);
        }
        t = short_description_1(t, k_8);
        {
          t = concat_strings_0(t);
          {
            e_77 = t;
            if(((d_77 != NULL) && (d_77 != e_77)))
              _fail(e_77);
            else
              d_77 = e_77;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATempty, not_null(d_77)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, j_8);
    {
      t = term_s_35;
      {
        t = printnl_0(t);
        {
          t = term_v_35;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_8 (ATerm t)
                {
                  ATerm f_77 = NULL;
                  f_77 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_77)), term_w_35));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_8);
                {
                  ATerm m_8 (ATerm t)
                  {
                    ATerm h_77 = NULL;
                    ATerm i_77 = NULL;
                    t = term_g_26;
                    {
                      ATerm n_8 (ATerm t)
                      {
                        t = not_null(b_77);
                        return(t);
                      }
                      t = long_description_1(t, n_8);
                      {
                        t = concat_strings_0(t);
                        {
                          i_77 = t;
                          if(((h_77 != NULL) && (h_77 != i_77)))
                            _fail(i_77);
                          else
                            h_77 = i_77;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_77)), term_x_35));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_8);
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
  p_77 = t;
  o_77 :
  if(match_cons(p_77, sym__2))
    {
      q_77 = ATgetArgument(p_77, 0);
      r_77 = ATgetArgument(p_77, 1);
      {
        ATerm y_35;
        y_35 = t;
        t = SSL_printnl(not_null(q_77), not_null(r_77));
        t = y_35;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm y_77 = NULL,z_77 = NULL;
  y_77 = t;
  x_77 :
  if(match_cons(y_77, sym_Undefined_1))
    {
      z_77 = ATgetArgument(y_77, 0);
      {
        ATerm b_78 = NULL;
        t = not_null(z_77);
        {
          t = m_62(t);
          {
            b_78 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_78));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm m_83 (ATerm))
{
  ATerm i_78 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_83, _id);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = Cons_2(t, _id, i_78);
      }
    return(t);
  }
  t = i_78(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_73 (ATerm))
{
  t = fetch_1(t, l_73);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_78 = NULL;
  k_78 = t;
  j_78 :
  if(!(match_cons(k_78, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_90(t);
      LocalPopChoice(c_36);
    }
  else
    {
      t = b_36;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL;
  n_78 = t;
  m_78 :
  if(match_cons(n_78, sym__2))
    {
      o_78 = ATgetArgument(n_78, 0);
      p_78 = ATgetArgument(n_78, 1);
      t = SSL_table_get(not_null(o_78), not_null(p_78));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL;
  y_78 = t;
  x_78 :
  if(match_cons(y_78, sym__3))
    {
      z_78 = ATgetArgument(y_78, 0);
      a_79 = ATgetArgument(y_78, 1);
      b_79 = ATgetArgument(y_78, 2);
      {
        ATerm d_36;
        d_36 = t;
        {
          ATerm f_79 = NULL;
          ATerm g_79 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_78), not_null(a_79));
          {
            ATerm e_36 = t;
            int f_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_36);
              }
            else
              {
                t = e_36;
                t = (ATerm) ATempty;
              }
            {
              g_79 = t;
              if(((f_79 != NULL) && (f_79 != g_79)))
                _fail(g_79);
              else
                f_79 = g_79;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_78), not_null(a_79), (ATerm) ATinsert(CheckATermList(not_null(f_79)), not_null(b_79)));
            t = table_put_0(t);
          }
        }
        t = d_36;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm k_79 = NULL;
  ATerm l_79 = NULL;
  t = term_g_26;
  {
    t = r_72(t);
    {
      l_79 = t;
      if(((k_79 != NULL) && (k_79 != l_79)))
        _fail(l_79);
      else
        k_79 = l_79;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_35, term_u_35, not_null(k_79));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm g_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
  r_79 = t;
  q_79 :
  if(match_string(r_79, "register-usage-info"))
    t = register_usage_1(t, l_0);
  else
    {
      if(((ATgetType(r_79) == AT_LIST) && ((ATermList) r_79 != ATempty)))
        {
          s_79 = ATgetFirst((ATermList) r_79);
          t_79 = (ATerm) ATgetNext((ATermList) r_79);
          {
            ATerm w_79 = NULL;
            ATerm g_36;
            g_36 = t;
            {
              t = not_null(s_79);
              t = a_0(t);
            }
            t = g_36;
            {
              ATerm x_79 = NULL;
              t = term_g_26;
              {
                t = g_0(t);
                {
                  x_79 = t;
                  if(((w_79 != NULL) && (w_79 != x_79)))
                    _fail(x_79);
                  else
                    w_79 = x_79;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_79)), not_null(w_79));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    ATerm c_80 = NULL;
    c_80 = t;
    b_80 :
    if(!(match_string(c_80, "--help")))
      {
        if(!(match_string(c_80, "-h")))
          {
            if(!(match_string(c_80, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = term_j_36;
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    t = term_k_36;
    return(t);
  }
  t = Option_3(t, o_8, p_8, q_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
  f_80 = t;
  e_80 :
  if(((ATgetType(f_80) == AT_LIST) && ((ATermList) f_80 != ATempty)))
    {
      g_80 = ATgetFirst((ATermList) f_80);
      h_80 = (ATerm) ATgetNext((ATermList) f_80);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_80)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_80)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_68 (ATerm), ATerm k_68 (ATerm))
{
  ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL;
  p_80 = t;
  o_80 :
  if(((ATgetType(p_80) == AT_LIST) && ((ATermList) p_80 != ATempty)))
    {
      q_80 = ATgetFirst((ATermList) p_80);
      r_80 = (ATerm) ATgetNext((ATermList) p_80);
      {
        ATerm u_80 = NULL;
        t = not_null(q_80);
        {
          ATerm w_80 = NULL;
          t = j_68(t);
          {
            u_80 = t;
            {
              t = not_null(r_80);
              {
                t = k_68(t);
                {
                  w_80 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_80)), not_null(u_80));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm c_81 = NULL;
  c_81 = t;
  b_81 :
  if(((ATermList) c_81 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_72 (ATerm))
{
  ATerm l_36;
  l_36 = t;
  {
    ATerm r_8 (ATerm t)
    {
      t = term_m_36;
      t = p_72(t);
      return(t);
    }
    t = try_1(t, r_8);
  }
  t = l_36;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm e_81 = NULL;
      e_81 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_81));
      return(t);
    }
    ATerm t_8 (ATerm t)
    {
      ATerm s_36 = t;
      int t_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_37 = t;
          int i_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_37);
            }
          else
            {
              t = h_37;
              {
                t = p_72(t);
                t = Cons_2(t, _id, t_8);
              }
            }
          LocalPopChoice(t_36);
        }
      else
        {
          t = s_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_8, t_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL;
  ATerm l_37;
  l_37 = t;
  {
    ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL;
    n_81 = t;
    j_81 :
    if(match_cons(n_81, sym__3))
      {
        o_81 = ATgetArgument(n_81, 0);
        p_81 = ATgetArgument(n_81, 1);
        q_81 = ATgetArgument(n_81, 2);
        {
          if(((k_81 != NULL) && (k_81 != o_81)))
            _fail(o_81);
          else
            k_81 = o_81;
          {
            if(((l_81 != NULL) && (l_81 != p_81)))
              _fail(p_81);
            else
              l_81 = p_81;
            {
              if(((m_81 != NULL) && (m_81 != q_81)))
                _fail(q_81);
              else
                m_81 = q_81;
              t = SSL_table_put(not_null(k_81), not_null(l_81), not_null(m_81));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = l_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_72 (ATerm))
{
  ATerm t_81 = NULL;
  ATerm m_37;
  m_37 = t;
  {
    t = term_p_37;
    t = table_put_0(t);
  }
  t = m_37;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm q_37 = t;
      int t_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_72(t);
          LocalPopChoice(t_37);
        }
      else
        {
          t = q_37;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_8);
    {
      ATerm v_8 (ATerm t)
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_i_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            {
              ATerm y_8 (ATerm t)
              {
                ATerm z_8 (ATerm t)
                {
                  ATerm u_81 = NULL;
                  u_81 = t;
                  if(((t_81 != NULL) && (t_81 != u_81)))
                    _fail(u_81);
                  else
                    t_81 = u_81;
                  return(t);
                }
                t = Undefined_1(t, z_8);
                return(t);
              }
              t = option_defined_1(t, y_8);
              {
                ATerm w_37;
                w_37 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_81)), term_x_37));
                  t = printnl_0(t);
                }
                t = w_37;
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_8);
      {
        ATerm y_37;
        y_37 = t;
        {
          t = term_t_35;
          t = table_destroy_0(t);
        }
        t = y_37;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm x_73 (ATerm))
{
  ATerm a_9 (ATerm t)
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_73(t);
        LocalPopChoice(a_38);
      }
    else
      {
        t = z_37;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, a_9);
  {
    t = store_options_0(t);
    {
      ATerm b_38 = t;
      int c_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, x_73);
          LocalPopChoice(c_38);
        }
      else
        {
          t = b_38;
          {
            ATerm d_38 = t;
            int e_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, v_73);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(e_38);
              }
            else
              {
                t = d_38;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  t = iowrap_3(t, q_73, r_73, default_usage_0);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  t = iowrap_2(t, compile_0, s2c_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = s2c_0(t);
  return(t);
}
