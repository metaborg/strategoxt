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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Anno_2;
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
Symbol sym_Anno_2;
Symbol sym_ListVar_1;
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
Symbol sym_Include_1;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
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
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
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
ATerm term_z_38;
ATerm term_t_38;
ATerm term_v_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_s_31;
ATerm term_g_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_k_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_x_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_o_28;
ATerm term_f_28;
ATerm term_b_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_e_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_f_17;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_h_15;
ATerm term_c_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_w_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_w_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_t_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_y_6;
ATerm term_v_6;
void init_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_l_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Id_1, term_e_8);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_9, (ATerm) ATempty);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Id_1, term_r_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_t_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_u_9, (ATerm) ATempty);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_v_9, term_w_9);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Id_1, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Id_1, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Id_1, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Id_1, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_IntConst_1, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Id_1, term_w_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Id_1, term_h_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Id_1, term_q_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Id_1, term_c_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Id_1, term_h_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Id_1, term_m_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, term_p_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Id_1, term_n_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Id_1, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Id_1, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Id_1, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Id_1, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Id_1, term_f_11);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Id_1, term_e_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_1, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Id_1, term_j_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_s_18, (ATerm) ATempty);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_v_18, term_w_9);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Id_1, term_a_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Id_1, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Id_1, term_i_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Id_1, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Id_1, term_r_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_w_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_x_19, (ATerm) ATempty);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_b_20, term_w_9);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_1, term_f_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Id_1, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_20, (ATerm) ATempty);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_q_20, term_w_9);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Id_1, term_s_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_21);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_21, (ATerm) ATempty);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_21, term_w_9);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_i_18);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Id_1, term_k_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_21, (ATerm) ATempty);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_p_21, term_v_14);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Id_1, term_u_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_21, (ATerm) ATempty);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, term_i_18);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_y_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Id_1, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_22, (ATerm) ATempty);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Equal_2, term_c_22, term_v_14);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_e_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_22, (ATerm) ATempty);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Id_1, term_v_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_w_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Id_1, term_y_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_d_18);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Return_1, term_i_18);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Id_1, term_p_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_i_18, term_w_9);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_v_9, term_v_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Id_1, term_e_25);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Id_1, term_l_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_9, (ATerm) ATempty);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_n_25);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Id_1, term_p_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_26, (ATerm) ATempty);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_29, (ATerm) ATempty);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Some_1, term_n_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_9, term_o_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Op_2, term_h_30, (ATerm) ATempty);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_y_24);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_l_32, term_y_24);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_y_24);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__2, term_r_33, term_y_24);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_y_24);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym__2, term_c_37, term_d_37);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym__3, term_c_37, term_d_37, (ATerm) ATempty);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm g_90 (ATerm), ATerm h_90 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm v_105 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm m_107 (ATerm), ATerm n_107 (ATerm));
ATerm repeat_1 (ATerm, ATerm p_107 (ATerm));
ATerm new_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm g_104 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm f_104 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm b_1 (ATerm), ATerm e_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm l_96 (ATerm));
ATerm Var_1 (ATerm, ATerm x_0 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm i_80 (ATerm));
ATerm Real_1 (ATerm, ATerm w_0 (ATerm));
ATerm Str_1 (ATerm, ATerm v_0 (ATerm));
ATerm Int_1 (ATerm, ATerm u_0 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm r_82 (ATerm), ATerm s_82 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm q_76 (ATerm));
ATerm FunCall_2 (ATerm, ATerm i_73 (ATerm), ATerm j_73 (ATerm));
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
ATerm quote_1 (ATerm, ATerm v_93 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm i_86 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm t_0 (ATerm));
ATerm escape_1 (ATerm, ATerm h_93 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm));
ATerm length_0 (ATerm);
ATerm Arity_0 (ATerm);
ATerm DeclareConstructor_0 (ATerm);
ATerm TranslateSig_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_92 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm TranslateType_0 (ATerm);
ATerm TranslateVarDec_0 (ATerm);
ATerm SDefToDeclaration_0 (ATerm);
ATerm TranslateSpec_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_86 (ATerm));
ATerm restore_always_2 (ATerm, ATerm w_108 (ATerm), ATerm x_108 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm c_86 (ATerm));
ATerm scope_2 (ATerm, ATerm e_86 (ATerm), ATerm f_86 (ATerm));
ATerm assert_1 (ATerm, ATerm g_86 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm v_95 (ATerm), ATerm w_95 (ATerm));
ATerm crush_2 (ATerm, ATerm j_97 (ATerm), ATerm k_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_91 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_94 (ATerm), ATerm k_94 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_91 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_101 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_89 (ATerm));
ATerm map_1 (ATerm, ATerm d_101 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_89 (ATerm));
ATerm Program_1 (ATerm, ATerm t_78 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_90 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_108 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm n_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_84 (ATerm), ATerm y_84 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_89 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm i_91 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_91 (ATerm), ATerm c_91 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm post_extend_config_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,t_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      t_4 = ATgetArgument(e_4, 1);
      {
        ATerm g_5 = NULL;
        ATerm h_5 = NULL,m_5 = NULL;
        ATerm i_5 = NULL;
        t = not_null(f_4);
        {
          ATerm s_6 = t;
          int t_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(t_6);
            }
          else
            {
              t = s_6;
              t = (ATerm) ATempty;
            }
          {
            i_5 = t;
            if(((h_5 != NULL) && (h_5 != i_5)))
              _fail(i_5);
            else
              h_5 = i_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), not_null(t_4));
          {
            t = conc_0(t);
            {
              m_5 = t;
              if(((g_5 != NULL) && (g_5 != m_5)))
                _fail(m_5);
              else
                g_5 = m_5;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_6, not_null(f_4), not_null(g_5));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm g_90 (ATerm), ATerm h_90 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = term_y_6;
    return(t);
  }
  t = Option_3(t, g_90, h_90, c_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_0 (ATerm t)
      {
        ATerm w_5 = NULL;
        w_5 = t;
        q_5 :
        if(!(match_string(w_5, "--trace-all   trace all strategies")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm g_0 (ATerm t)
      {
        t = term_g_7;
        {
          ATerm h_0 (ATerm t)
          {
            t = term_h_7;
            return(t);
          }
          t = debug_1(t, h_0);
          {
            ATerm i_7;
            i_7 = t;
            {
              t = term_m_7;
              {
                ATerm y_0 (ATerm t)
                {
                  t = term_t_7;
                  return(t);
                }
                t = assert_1(t, y_0);
              }
            }
            t = i_7;
          }
        }
        return(t);
      }
      t = Option_2(t, d_0, g_0);
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              ATerm x_5 = NULL;
              x_5 = t;
              r_5 :
              if(!(match_string(x_5, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_1 (ATerm t)
            {
              ATerm y_5 = NULL;
              y_5 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(y_5)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_7, not_null(y_5)));
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = term_y_7;
                    return(t);
                  }
                  t = assert_1(t, d_1);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(y_5));
              }
              return(t);
            }
            ATerm c_1 (ATerm t)
            {
              t = term_z_7;
              return(t);
            }
            t = ArgOption_3(t, z_0, a_1, c_1);
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
              ATerm f_1 (ATerm t)
              {
                ATerm a_6 = NULL;
                a_6 = t;
                t_5 :
                if(!(match_string(a_6, "--C-include")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm g_1 (ATerm t)
              {
                ATerm d_6 = NULL;
                ATerm a_8;
                a_8 = t;
                {
                  ATerm b_6 = NULL;
                  ATerm c_6 = NULL;
                  c_6 = t;
                  if(((b_6 != NULL) && (b_6 != c_6)))
                    _fail(c_6);
                  else
                    b_6 = c_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATempty, not_null(b_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = a_8;
                {
                  ATerm e_6 = NULL;
                  e_6 = t;
                  if(((d_6 != NULL) && (d_6 != e_6)))
                    _fail(e_6);
                  else
                    d_6 = e_6;
                  t = (ATerm) ATmakeAppl(sym_Include_1, not_null(d_6));
                }
                return(t);
              }
              ATerm h_1 (ATerm t)
              {
                t = term_c_8;
                return(t);
              }
              t = ArgOption_3(t, f_1, g_1, h_1);
            }
          }
      }
    }
  return(t);
}
ATerm InitTermId_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym__3))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      n_6 = ATgetArgument(k_6, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(m_6))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_6)), term_d_8, not_null(n_6))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm u_6 = NULL;
  ATerm w_6 = NULL;
  u_6 = t;
  {
    ATerm x_6 = NULL;
    t = not_null(u_6);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          t = reverse_0(t);
          {
            x_6 = t;
            if(((w_6 != NULL) && (w_6 != x_6)))
              _fail(x_6);
            else
              w_6 = x_6;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_q_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_q_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(w_6)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__3))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      f_7 = ATgetArgument(c_7, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_7)), term_w_9)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm n_7 = NULL;
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      t = (ATerm) ATempty;
    }
  {
    ATerm o_7 = NULL,q_7 = NULL,s_7 = NULL;
    ATerm b_10;
    b_10 = t;
    {
      ATerm p_7 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        p_7 = t;
        if(((o_7 != NULL) && (o_7 != p_7)))
          _fail(p_7);
        else
          o_7 = p_7;
      }
    }
    t = b_10;
    {
      ATerm r_7 = NULL;
      t = InitTermIds_0(t);
      {
        r_7 = t;
        if(((q_7 != NULL) && (q_7 != r_7)))
          _fail(r_7);
        else
          q_7 = r_7;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_7), (ATerm) ATinsert(ATempty, not_null(q_7)));
        {
          t = conc_0(t);
          {
            s_7 = t;
            if(((n_7 != NULL) && (n_7 != s_7)))
              _fail(s_7);
            else
              n_7 = s_7;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(n_7));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm v_105 (ATerm))
{
  ATerm w_7 (ATerm t)
  {
    ATerm c_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_105(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = c_10;
        t = _one(t, w_7);
      }
    return(t);
  }
  t = w_7(t);
  return(t);
}
ATerm Csimplify_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
  ATerm h_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(i_9)), not_null(c_9));
    return(t);
  }
  ATerm i_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(i_9), not_null(j_9));
    return(t);
  }
  ATerm j_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_9), not_null(j_9));
    t = conc_0(t);
    return(t);
  }
  ATerm k_10 (ATerm t)
  {
    ATerm x_9 = NULL;
    ATerm y_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(l_9));
    {
      t = conc_0(t);
      {
        y_9 = t;
        if(((x_9 != NULL) && (x_9 != y_9)))
          _fail(y_9);
        else
          x_9 = y_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(x_9), not_null(m_9));
    return(t);
  }
  ATerm l_10 (ATerm t)
  {
    ATerm d_10 = NULL,f_10 = NULL;
    ATerm n_10;
    n_10 = t;
    {
      ATerm e_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(l_9));
      {
        t = conc_0(t);
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
      }
    }
    t = n_10;
    {
      ATerm g_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(n_9));
      {
        t = conc_0(t);
        {
          g_10 = t;
          if(((f_10 != NULL) && (f_10 != g_10)))
            _fail(g_10);
          else
            f_10 = g_10;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(d_10), not_null(f_10));
    }
    return(t);
  }
  h_9 = t;
  f_8 :
  if(match_cons(h_9, sym_IfElse_3))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      c_9 = ATgetArgument(h_9, 2);
      g_8 :
      if(match_cons(c_9, sym_Compound_2))
        {
          d_9 = ATgetArgument(c_9, 0);
          e_9 = ATgetArgument(c_9, 1);
          h_8 :
          if(((ATermList) e_9 == ATempty))
            {
              i_8 :
              if(((ATermList) d_9 == ATempty))
                {
                  j_8 :
                  if(match_cons(j_9, sym_Compound_2))
                    {
                      k_9 = ATgetArgument(j_9, 0);
                      n_9 = ATgetArgument(j_9, 1);
                      k_8 :
                      if(((ATermList) n_9 == ATempty))
                        {
                          l_8 :
                          if(((ATermList) k_9 == ATempty))
                            {
                              {
                                ATerm o_10 = t;
                                int q_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = h_10(t);
                                    LocalPopChoice(q_10);
                                  }
                                else
                                  {
                                    t = o_10;
                                    t = i_10(t);
                                  }
                              }
                            }
                          else
                            {
                              t = i_10(t);
                            }
                        }
                      else
                        {
                          m_8 :
                          t = i_10(t);
                        }
                    }
                  else
                    {
                      t = i_10(t);
                    }
                }
              else
                {
                  n_8 :
                  if(match_cons(j_9, sym_Compound_2))
                    {
                      k_9 = ATgetArgument(j_9, 0);
                      n_9 = ATgetArgument(j_9, 1);
                      o_8 :
                      if(((ATermList) k_9 == ATempty))
                        {
                          p_8 :
                          if(((ATermList) n_9 == ATempty))
                            {
                              t = h_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              q_8 :
              r_8 :
              if(match_cons(j_9, sym_Compound_2))
                {
                  k_9 = ATgetArgument(j_9, 0);
                  n_9 = ATgetArgument(j_9, 1);
                  s_8 :
                  if(((ATermList) k_9 == ATempty))
                    {
                      t_8 :
                      if(((ATermList) n_9 == ATempty))
                        {
                          t = h_10(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          u_8 :
          if(match_cons(j_9, sym_Compound_2))
            {
              k_9 = ATgetArgument(j_9, 0);
              n_9 = ATgetArgument(j_9, 1);
              v_8 :
              if(((ATermList) k_9 == ATempty))
                {
                  w_8 :
                  if(((ATermList) n_9 == ATempty))
                    {
                      t = h_10(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATgetType(h_9) == AT_LIST) && ((ATermList) h_9 != ATempty)))
        {
          i_9 = ATgetFirst((ATermList) h_9);
          j_9 = (ATerm) ATgetNext((ATermList) h_9);
          x_8 :
          if(match_cons(i_9, sym_Compound_2))
            {
              f_9 = ATgetArgument(i_9, 0);
              g_9 = ATgetArgument(i_9, 1);
              y_8 :
              if(((ATermList) f_9 == ATempty))
                {
                  t = j_10(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(h_9, sym_Compound_2))
            {
              i_9 = ATgetArgument(h_9, 0);
              j_9 = ATgetArgument(h_9, 1);
              z_8 :
              if(((ATgetType(j_9) == AT_LIST) && ((ATermList) j_9 != ATempty)))
                {
                  k_9 = ATgetFirst((ATermList) j_9);
                  n_9 = (ATerm) ATgetNext((ATermList) j_9);
                  a_9 :
                  if(match_cons(k_9, sym_Compound_2))
                    {
                      l_9 = ATgetArgument(k_9, 0);
                      m_9 = ATgetArgument(k_9, 1);
                      b_9 :
                      if(((ATermList) n_9 == ATempty))
                        {
                          {
                            ATerm s_10 = t;
                            int t_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = k_10(t);
                                LocalPopChoice(t_10);
                              }
                            else
                              {
                                t = s_10;
                                t = l_10(t);
                              }
                          }
                        }
                      else
                        {
                          t = l_10(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm m_107 (ATerm), ATerm n_107 (ATerm))
{
  ATerm p_10 (ATerm t)
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_107(t);
        t = p_10(t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        t = n_107(t);
      }
    return(t);
  }
  t = p_10(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm p_107 (ATerm))
{
  t = repeat_2(t, p_107, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm g_104 (ATerm))
{
  ATerm i_1 (ATerm t)
  {
    t = bottomup_1(t, g_104);
    return(t);
  }
  t = _all(t, i_1);
  t = g_104(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm k_1 (ATerm t)
    {
      ATerm a_11 = t;
      int b_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          LocalPopChoice(b_11);
        }
      else
        {
          t = a_11;
          t = ConstructTerm_0(t);
        }
      return(t);
    }
    t = try_1(t, k_1);
    return(t);
  }
  t = bottomup_1(t, j_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm f_104 (ATerm))
{
  t = f_104(t);
  {
    ATerm l_1 (ATerm t)
    {
      t = topdown_1(t, f_104);
      return(t);
    }
    t = _all(t, l_1);
  }
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm r_10 = NULL;
  r_10 = t;
  t = SSL_real_to_string(not_null(r_10));
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  w_10 :
  if(match_cons(x_10, sym__2))
    {
      y_10 = ATgetArgument(x_10, 0);
      z_10 = ATgetArgument(x_10, 1);
      {
        ATerm c_11 = NULL;
        ATerm d_11 = NULL;
        t = new_0(t);
        {
          d_11 = t;
          if(((c_11 != NULL) && (c_11 != d_11)))
            _fail(d_11);
          else
            c_11 = d_11;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_9, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_11)), term_w_9), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(z_10))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(y_10), (ATerm) ATmakeAppl(sym_Id_1, not_null(c_11)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Initialized_0 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  {
    ATerm l_11 = NULL,m_11 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_11));
    {
      ATerm m_1 (ATerm t)
      {
        t = term_e_11;
        return(t);
      }
      t = rewrite_1(t, m_1);
      {
        l_11 = t;
        h_11 :
        if(match_cons(l_11, sym_Defined_1))
          {
            m_11 = ATgetArgument(l_11, 0);
            i_11 :
            if(!(match_string(m_11, "j_0")))
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_f_11;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  s_11 = t;
  q_11 :
  if(match_cons(s_11, sym__2))
    {
      t_11 = ATgetArgument(s_11, 0);
      v_11 = ATgetArgument(s_11, 1);
      r_11 :
      if(match_cons(t_11, sym_Var_1))
        {
          u_11 = ATgetArgument(t_11, 0);
          {
            ATerm y_11 = NULL;
            t = not_null(u_11);
            {
              t = Initialized_0(t);
              {
                y_11 = t;
                p_11 :
                if(!(match_string(y_11, "NULL")))
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_11)), not_null(v_11));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  b_12 :
  if(match_cons(d_12, sym__2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      c_12 :
      if(((ATermList) e_12 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_12));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm b_1 (ATerm), ATerm e_1 (ATerm))
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  p_12 = t;
  n_12 :
  if(match_cons(p_12, sym__2))
    {
      q_12 = ATgetArgument(p_12, 0);
      t_12 = ATgetArgument(p_12, 1);
      o_12 :
      if(((ATgetType(q_12) == AT_LIST) && ((ATermList) q_12 != ATempty)))
        {
          r_12 = ATgetFirst((ATermList) q_12);
          s_12 = (ATerm) ATgetNext((ATermList) q_12);
          {
            ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
            ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), not_null(t_12));
            {
              t = b_1(t);
              {
                b_13 = t;
                m_12 :
                if(match_cons(b_13, sym__2))
                  {
                    c_13 = ATgetArgument(b_13, 0);
                    d_13 = ATgetArgument(b_13, 1);
                    {
                      ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
                      if(((z_12 != NULL) && (z_12 != c_13)))
                        _fail(c_13);
                      else
                        z_12 = c_13;
                      {
                        if(((x_12 != NULL) && (x_12 != d_13)))
                          _fail(d_13);
                        else
                          x_12 = d_13;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_12), not_null(x_12));
                          {
                            t = e_1(t);
                            {
                              e_13 = t;
                              l_12 :
                              if(match_cons(e_13, sym__2))
                                {
                                  f_13 = ATgetArgument(e_13, 0);
                                  g_13 = ATgetArgument(e_13, 1);
                                  {
                                    if(((a_13 != NULL) && (a_13 != f_13)))
                                      _fail(f_13);
                                    else
                                      a_13 = f_13;
                                    if(((y_12 != NULL) && (y_12 != g_13)))
                                      _fail(g_13);
                                    else
                                      y_12 = g_13;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_13)), not_null(z_12)), not_null(y_12));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm thread_map_1 (ATerm t, ATerm l_96 (ATerm))
{
  ATerm k_13 (ATerm t)
  {
    ATerm g_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, l_96, k_13);
        LocalPopChoice(k_11);
      }
    else
      {
        t = g_11;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = k_13(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm x_0 (ATerm))
{
  ATerm u_13 = NULL,v_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_Var_1))
    {
      v_13 = ATgetArgument(u_13, 0);
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_13 = NULL,a_14 = NULL;
            ATerm z_13 = NULL;
            t = SSLgetAnnotations(not_null(u_13));
            {
              z_13 = t;
              if(((y_13 != NULL) && (y_13 != z_13)))
                _fail(z_13);
              else
                y_13 = z_13;
            }
            {
              t = not_null(v_13);
              {
                ATerm c_14 = NULL;
                t = x_0(t);
                {
                  a_14 = t;
                  {
                    ATerm d_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_14)), not_null(y_13));
                    {
                      d_14 = t;
                      if(((c_14 != NULL) && (c_14 != d_14)))
                        _fail(d_14);
                      else
                        c_14 = d_14;
                    }
                    t = not_null(c_14);
                  }
                }
              }
            }
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm g_14 = NULL,i_14 = NULL;
              ATerm h_14 = NULL;
              t = SSLgetAnnotations(not_null(u_13));
              {
                h_14 = t;
                if(((g_14 != NULL) && (g_14 != h_14)))
                  _fail(h_14);
                else
                  g_14 = h_14;
              }
              {
                t = not_null(v_13);
                {
                  ATerm k_14 = NULL;
                  t = x_0(t);
                  {
                    i_14 = t;
                    {
                      ATerm l_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_14)), not_null(g_14));
                      {
                        l_14 = t;
                        if(((k_14 != NULL) && (k_14 != l_14)))
                          _fail(l_14);
                        else
                          k_14 = l_14;
                      }
                      t = not_null(k_14);
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
      _fail(t);
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm b_15 = NULL;
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  b_15 = t;
  {
    ATerm g_15 = NULL;
    ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
    t = not_null(b_15);
    {
      g_15 = t;
      {
        t = SSL_explode_term(not_null(g_15));
        {
          i_15 = t;
          x_14 :
          if(match_cons(i_15, sym__2))
            {
              j_15 = ATgetArgument(i_15, 0);
              k_15 = ATgetArgument(i_15, 1);
              y_14 :
              if(match_string(j_15, ""))
                {
                  z_14 :
                  if(((ATgetType(k_15) == AT_LIST) && ((ATermList) k_15 != ATempty)))
                    {
                      l_15 = ATgetFirst((ATermList) k_15);
                      m_15 = (ATerm) ATgetNext((ATermList) k_15);
                      a_15 :
                      if(((ATgetType(m_15) == AT_LIST) && ((ATermList) m_15 != ATempty)))
                        {
                          n_15 = ATgetFirst((ATermList) m_15);
                          o_15 = (ATerm) ATgetNext((ATermList) m_15);
                          {
                            if(((d_15 != NULL) && (d_15 != l_15)))
                              _fail(l_15);
                            else
                              d_15 = l_15;
                            {
                              if(((f_15 != NULL) && (f_15 != n_15)))
                                _fail(n_15);
                              else
                                f_15 = n_15;
                              if(((e_15 != NULL) && (e_15 != o_15)))
                                _fail(o_15);
                              else
                                e_15 = o_15;
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(f_15);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm v_15 = NULL;
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  t = term_j_7;
  {
    ATerm n_1 (ATerm t)
    {
      t = term_w_11;
      return(t);
    }
    t = rewrite_1(t, n_1);
    {
      w_15 = t;
      t_15 :
      if(match_cons(w_15, sym_Defined_2))
        {
          x_15 = ATgetArgument(w_15, 0);
          y_15 = ATgetArgument(w_15, 1);
          u_15 :
          if(match_string(x_15, "m_0"))
            {
              if(((v_15 != NULL) && (v_15 != y_15)))
                _fail(y_15);
              else
                v_15 = y_15;
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  }
  t = not_null(v_15);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm f_16 = NULL,g_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym_BuildDefault_1))
    {
      g_16 = ATgetArgument(f_16, 0);
      {
        ATerm j_16 = NULL,l_16 = NULL;
        ATerm k_16 = NULL;
        t = SSLgetAnnotations(not_null(f_16));
        {
          k_16 = t;
          if(((j_16 != NULL) && (j_16 != k_16)))
            _fail(k_16);
          else
            j_16 = k_16;
        }
        {
          t = not_null(g_16);
          {
            ATerm n_16 = NULL;
            t = i_80(t);
            {
              l_16 = t;
              {
                ATerm o_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(l_16)), not_null(j_16));
                {
                  o_16 = t;
                  if(((n_16 != NULL) && (n_16 != o_16)))
                    _fail(o_16);
                  else
                    n_16 = o_16;
                }
                t = not_null(n_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Real_1 (ATerm t, ATerm w_0 (ATerm))
{
  ATerm c_17 = NULL,d_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym_Real_1))
    {
      d_17 = ATgetArgument(c_17, 0);
      {
        ATerm x_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_17 = NULL,i_17 = NULL;
            ATerm h_17 = NULL;
            t = SSLgetAnnotations(not_null(c_17));
            {
              h_17 = t;
              if(((g_17 != NULL) && (g_17 != h_17)))
                _fail(h_17);
              else
                g_17 = h_17;
            }
            {
              t = not_null(d_17);
              {
                ATerm k_17 = NULL;
                t = w_0(t);
                {
                  i_17 = t;
                  {
                    ATerm l_17 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(i_17)), not_null(g_17));
                    {
                      l_17 = t;
                      if(((k_17 != NULL) && (k_17 != l_17)))
                        _fail(l_17);
                      else
                        k_17 = l_17;
                    }
                    t = not_null(k_17);
                  }
                }
              }
            }
            LocalPopChoice(z_11);
          }
        else
          {
            t = x_11;
            {
              ATerm o_17 = NULL,q_17 = NULL;
              ATerm p_17 = NULL;
              t = SSLgetAnnotations(not_null(c_17));
              {
                p_17 = t;
                if(((o_17 != NULL) && (o_17 != p_17)))
                  _fail(p_17);
                else
                  o_17 = p_17;
              }
              {
                t = not_null(d_17);
                {
                  ATerm s_17 = NULL;
                  t = w_0(t);
                  {
                    q_17 = t;
                    {
                      ATerm t_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(q_17)), not_null(o_17));
                      {
                        t_17 = t;
                        if(((s_17 != NULL) && (s_17 != t_17)))
                          _fail(t_17);
                        else
                          s_17 = t_17;
                      }
                      t = not_null(s_17);
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
      _fail(t);
    }
  return(t);
}
ATerm Str_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym_Str_1))
    {
      m_18 = ATgetArgument(l_18, 0);
      {
        ATerm a_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_18 = NULL,r_18 = NULL;
            ATerm q_18 = NULL;
            t = SSLgetAnnotations(not_null(l_18));
            {
              q_18 = t;
              if(((p_18 != NULL) && (p_18 != q_18)))
                _fail(q_18);
              else
                p_18 = q_18;
            }
            {
              t = not_null(m_18);
              {
                ATerm t_18 = NULL;
                t = v_0(t);
                {
                  r_18 = t;
                  {
                    ATerm u_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(r_18)), not_null(p_18));
                    {
                      u_18 = t;
                      if(((t_18 != NULL) && (t_18 != u_18)))
                        _fail(u_18);
                      else
                        t_18 = u_18;
                    }
                    t = not_null(t_18);
                  }
                }
              }
            }
            LocalPopChoice(g_12);
          }
        else
          {
            t = a_12;
            {
              ATerm x_18 = NULL,z_18 = NULL;
              ATerm y_18 = NULL;
              t = SSLgetAnnotations(not_null(l_18));
              {
                y_18 = t;
                if(((x_18 != NULL) && (x_18 != y_18)))
                  _fail(y_18);
                else
                  x_18 = y_18;
              }
              {
                t = not_null(m_18);
                {
                  ATerm b_19 = NULL;
                  t = v_0(t);
                  {
                    z_18 = t;
                    {
                      ATerm c_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(z_18)), not_null(x_18));
                      {
                        c_19 = t;
                        if(((b_19 != NULL) && (b_19 != c_19)))
                          _fail(c_19);
                        else
                          b_19 = c_19;
                      }
                      t = not_null(b_19);
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
      _fail(t);
    }
  return(t);
}
ATerm Int_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym_Int_1))
    {
      v_19 = ATgetArgument(u_19, 0);
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_19 = NULL,a_20 = NULL;
            ATerm z_19 = NULL;
            t = SSLgetAnnotations(not_null(u_19));
            {
              z_19 = t;
              if(((y_19 != NULL) && (y_19 != z_19)))
                _fail(z_19);
              else
                y_19 = z_19;
            }
            {
              t = not_null(v_19);
              {
                ATerm c_20 = NULL;
                t = u_0(t);
                {
                  a_20 = t;
                  {
                    ATerm d_20 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(a_20)), not_null(y_19));
                    {
                      d_20 = t;
                      if(((c_20 != NULL) && (c_20 != d_20)))
                        _fail(d_20);
                      else
                        c_20 = d_20;
                    }
                    t = not_null(c_20);
                  }
                }
              }
            }
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm g_20 = NULL,i_20 = NULL;
              ATerm h_20 = NULL;
              t = SSLgetAnnotations(not_null(u_19));
              {
                h_20 = t;
                if(((g_20 != NULL) && (g_20 != h_20)))
                  _fail(h_20);
                else
                  g_20 = h_20;
              }
              {
                t = not_null(v_19);
                {
                  ATerm k_20 = NULL;
                  t = u_0(t);
                  {
                    i_20 = t;
                    {
                      ATerm l_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(i_20)), not_null(g_20));
                      {
                        l_20 = t;
                        if(((k_20 != NULL) && (k_20 != l_20)))
                          _fail(l_20);
                        else
                          k_20 = l_20;
                      }
                      t = not_null(k_20);
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
      _fail(t);
    }
  return(t);
}
ATerm proper_list_0 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm x_20 = NULL;
        x_20 = t;
        u_20 :
        if(!(match_string(x_20, "Nil")))
          {
            _fail(t);
          }
        return(t);
      }
      t = Op_2(t, o_1, Nil_0);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm y_20 = NULL;
              y_20 = t;
              v_20 :
              if(!(match_string(y_20, "Cons")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = Cons_2(t, proper_list_0, Nil_0);
                return(t);
              }
              t = Cons_2(t, _id, r_1);
              return(t);
            }
            t = Op_2(t, p_1, q_1);
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            {
              ATerm s_1 (ATerm t)
              {
                ATerm w_12 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_20 = NULL;
                    z_20 = t;
                    w_20 :
                    if(!(match_string(z_20, "Nil")))
                      {
                        if(!(match_string(z_20, "Cons")))
                          {
                            _fail(t);
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_12;
                  }
                return(t);
              }
              t = Op_2(t, s_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm r_82 (ATerm), ATerm s_82 (ATerm))
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym_Op_2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      {
        ATerm m_21 = NULL,o_21 = NULL;
        ATerm n_21 = NULL;
        t = SSLgetAnnotations(not_null(g_21));
        {
          n_21 = t;
          if(((m_21 != NULL) && (m_21 != n_21)))
            _fail(n_21);
          else
            m_21 = n_21;
        }
        {
          t = not_null(h_21);
          {
            ATerm q_21 = NULL;
            t = r_82(t);
            {
              o_21 = t;
              {
                t = not_null(i_21);
                {
                  ATerm s_21 = NULL;
                  t = s_82(t);
                  {
                    q_21 = t;
                    {
                      ATerm t_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(o_21), not_null(q_21)), not_null(m_21));
                      {
                        t_21 = t;
                        if(((s_21 != NULL) && (s_21 != t_21)))
                          _fail(t_21);
                        else
                          s_21 = t_21;
                      }
                      t = not_null(s_21);
                    }
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
      _fail(t);
    }
  return(t);
}
ATerm CacheConstant_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  f_22 :
  if(match_cons(g_22, sym__2))
    {
      h_22 = ATgetArgument(g_22, 0);
      i_22 = ATgetArgument(g_22, 1);
      {
        ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
        ATerm o_22 = NULL;
        t = not_null(h_22);
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_1 (ATerm t)
              {
                t = map_1(t, Cache_0);
                return(t);
              }
              t = Op_2(t, _id, t_1);
              t = proper_list_0(t);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              {
                ATerm j_13 = t;
                int l_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Int_1(t, _id);
                    LocalPopChoice(l_13);
                  }
                else
                  {
                    t = j_13;
                    {
                      ATerm m_13 = t;
                      int n_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Str_1(t, _id);
                          LocalPopChoice(n_13);
                        }
                      else
                        {
                          t = m_13;
                          {
                            ATerm o_13 = t;
                            int p_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Real_1(t, _id);
                                LocalPopChoice(p_13);
                              }
                            else
                              {
                                t = o_13;
                                t = BuildDefault_1(t, _id);
                              }
                          }
                        }
                    }
                  }
              }
            }
          {
            ATerm p_22 = NULL,r_22 = NULL;
            t = new_0(t);
            {
              o_22 = t;
              {
                if(((l_22 != NULL) && (l_22 != o_22)))
                  _fail(o_22);
                else
                  l_22 = o_22;
                {
                  ATerm q_22 = NULL;
                  q_22 = t;
                  if(((p_22 != NULL) && (p_22 != q_22)))
                    _fail(q_22);
                  else
                    p_22 = q_22;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_13, not_null(p_22));
                    {
                      ATerm s_22 = NULL,u_22 = NULL;
                      t = conc_strings_0(t);
                      {
                        r_22 = t;
                        {
                          if(((m_22 != NULL) && (m_22 != r_22)))
                            _fail(r_22);
                          else
                            m_22 = r_22;
                          {
                            ATerm r_13;
                            r_13 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_22)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_13, not_null(m_22)));
                              {
                                ATerm u_1 (ATerm t)
                                {
                                  t = term_w_13;
                                  return(t);
                                }
                                t = assert_1(t, u_1);
                              }
                            }
                            t = r_13;
                            {
                              ATerm t_22 = NULL;
                              ATerm x_13 = t;
                              int b_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  LocalPopChoice(b_14);
                                }
                              else
                                {
                                  t = x_13;
                                  t = (ATerm) ATempty;
                                }
                              {
                                t_22 = t;
                                if(((s_22 != NULL) && (s_22 != t_22)))
                                  _fail(t_22);
                                else
                                  s_22 = t_22;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(s_22)), (ATerm) ATmakeAppl(sym__3, not_null(l_22), not_null(m_22), not_null(i_22)));
                                {
                                  u_22 = t;
                                  {
                                    if(((n_22 != NULL) && (n_22 != u_22)))
                                      _fail(u_22);
                                    else
                                      n_22 = u_22;
                                    {
                                      ATerm e_14;
                                      e_14 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATmakeAppl(sym_Defined_2, term_f_14, not_null(n_22)));
                                        {
                                          ATerm v_1 (ATerm t)
                                          {
                                            t = term_w_11;
                                            return(t);
                                          }
                                          t = assert_1(t, v_1);
                                        }
                                      }
                                      t = e_14;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(m_22));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ConstructTerm_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  p_23 = t;
  n_23 :
  if(match_cons(p_23, sym_Anno_2))
    {
      q_23 = ATgetArgument(p_23, 0);
      o_23 = ATgetArgument(p_23, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_23)), not_null(q_23))));
    }
  else
    {
      if(match_cons(p_23, sym_Op_2))
        {
          q_23 = ATgetArgument(p_23, 0);
          o_23 = ATgetArgument(p_23, 1);
          {
            ATerm v_23 = NULL;
            ATerm w_23 = NULL,y_23 = NULL;
            ATerm x_23 = NULL;
            t = not_null(o_23);
            {
              t = length_0(t);
              {
                x_23 = t;
                if(((w_23 != NULL) && (w_23 != x_23)))
                  _fail(x_23);
                else
                  w_23 = x_23;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(w_23));
              {
                t = ConstructorName_0(t);
                {
                  y_23 = t;
                  if(((v_23 != NULL) && (v_23 != y_23)))
                    _fail(y_23);
                  else
                    v_23 = y_23;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_14, (ATerm) ATinsert(CheckATermList(not_null(o_23)), (ATerm) ATmakeAppl(sym_Id_1, not_null(v_23)))));
          }
        }
      else
        {
          if(match_cons(p_23, sym_BuildDefault_1))
            {
              q_23 = ATgetArgument(p_23, 0);
              t = not_null(q_23);
            }
          else
            {
              if(match_cons(p_23, sym_Var_1))
                {
                  q_23 = ATgetArgument(p_23, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(q_23))));
                }
              else
                {
                  if(match_cons(p_23, sym_Str_1))
                    {
                      q_23 = ATgetArgument(p_23, 0);
                      {
                        ATerm c_24 = NULL;
                        ATerm d_24 = NULL;
                        t = not_null(q_23);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              d_24 = t;
                              if(((c_24 != NULL) && (c_24 != d_24)))
                                _fail(d_24);
                              else
                                c_24 = d_24;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_15), term_v_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(c_24))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(p_23, sym_Real_1))
                        {
                          q_23 = ATgetArgument(p_23, 0);
                          {
                            ATerm f_24 = NULL;
                            ATerm g_24 = NULL;
                            t = not_null(q_23);
                            {
                              t = real_to_string_0(t);
                              {
                                g_24 = t;
                                if(((f_24 != NULL) && (f_24 != g_24)))
                                  _fail(g_24);
                                else
                                  f_24 = g_24;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(f_24)))));
                          }
                        }
                      else
                        {
                          if(match_cons(p_23, sym_Int_1))
                            {
                              q_23 = ATgetArgument(p_23, 0);
                              {
                                ATerm i_24 = NULL;
                                ATerm j_24 = NULL;
                                t = not_null(q_23);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    j_24 = t;
                                    if(((i_24 != NULL) && (i_24 != j_24)))
                                      _fail(j_24);
                                    else
                                      i_24 = j_24;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(i_24)))));
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Id_1 (ATerm t, ATerm q_76 (ATerm))
{
  ATerm b_25 = NULL,c_25 = NULL;
  b_25 = t;
  a_25 :
  if(match_cons(b_25, sym_Id_1))
    {
      c_25 = ATgetArgument(b_25, 0);
      {
        ATerm f_25 = NULL,h_25 = NULL;
        ATerm g_25 = NULL;
        t = SSLgetAnnotations(not_null(b_25));
        {
          g_25 = t;
          if(((f_25 != NULL) && (f_25 != g_25)))
            _fail(g_25);
          else
            f_25 = g_25;
        }
        {
          t = not_null(c_25);
          {
            ATerm j_25 = NULL;
            t = q_76(t);
            {
              h_25 = t;
              {
                ATerm k_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(h_25)), not_null(f_25));
                {
                  k_25 = t;
                  if(((j_25 != NULL) && (j_25 != k_25)))
                    _fail(k_25);
                  else
                    j_25 = k_25;
                }
                t = not_null(j_25);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FunCall_2 (ATerm t, ATerm i_73 (ATerm), ATerm j_73 (ATerm))
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_FunCall_2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      {
        ATerm b_26 = NULL,d_26 = NULL;
        ATerm c_26 = NULL;
        t = SSLgetAnnotations(not_null(v_25));
        {
          c_26 = t;
          if(((b_26 != NULL) && (b_26 != c_26)))
            _fail(c_26);
          else
            b_26 = c_26;
        }
        {
          t = not_null(w_25);
          {
            ATerm f_26 = NULL;
            t = i_73(t);
            {
              d_26 = t;
              {
                t = not_null(x_25);
                {
                  ATerm h_26 = NULL;
                  t = j_73(t);
                  {
                    f_26 = t;
                    {
                      ATerm i_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(d_26), not_null(f_26)), not_null(b_26));
                      {
                        i_26 = t;
                        if(((h_26 != NULL) && (h_26 != i_26)))
                          _fail(i_26);
                        else
                          h_26 = i_26;
                      }
                      t = not_null(h_26);
                    }
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
      _fail(t);
    }
  return(t);
}
ATerm ConstructList_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  c_27 :
  if(match_cons(m_27, sym_Op_2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      d_27 :
      if(match_string(n_27, "Cons"))
        {
          e_27 :
          if(((ATgetType(o_27) == AT_LIST) && ((ATermList) o_27 != ATempty)))
            {
              i_27 = ATgetFirst((ATermList) o_27);
              j_27 = (ATerm) ATgetNext((ATermList) o_27);
              f_27 :
              if(((ATgetType(j_27) == AT_LIST) && ((ATermList) j_27 != ATempty)))
                {
                  k_27 = ATgetFirst((ATermList) j_27);
                  l_27 = (ATerm) ATgetNext((ATermList) j_27);
                  g_27 :
                  if(((ATermList) l_27 == ATempty))
                    {
                      {
                        ATerm r_27 = NULL;
                        ATerm e_28 = NULL;
                        t = not_null(k_27);
                        {
                          ATerm s_15 = t;
                          int z_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
                              s_27 = t;
                              t_26 :
                              if(match_cons(s_27, sym_TypeCast_2))
                                {
                                  t_27 = ATgetArgument(s_27, 0);
                                  a_28 = ATgetArgument(s_27, 1);
                                  u_26 :
                                  if(match_cons(t_27, sym_TypeName_2))
                                    {
                                      u_27 = ATgetArgument(t_27, 0);
                                      z_27 = ATgetArgument(t_27, 1);
                                      v_26 :
                                      if(match_cons(u_27, sym_TypeSpec_3))
                                        {
                                          v_27 = ATgetArgument(u_27, 0);
                                          w_27 = ATgetArgument(u_27, 1);
                                          y_27 = ATgetArgument(u_27, 2);
                                          w_26 :
                                          if(((ATermList) v_27 == ATempty))
                                            {
                                              x_26 :
                                              if(match_cons(w_27, sym_TypeId_1))
                                                {
                                                  x_27 = ATgetArgument(w_27, 0);
                                                  y_26 :
                                                  if(match_string(x_27, "ATerm"))
                                                    {
                                                      z_26 :
                                                      if(((ATermList) y_27 == ATempty))
                                                        {
                                                          a_27 :
                                                          if(match_cons(z_27, sym_None_0))
                                                            {
                                                              t = not_null(a_28);
                                                              {
                                                                ATerm a_16 = t;
                                                                int b_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm w_1 (ATerm t)
                                                                    {
                                                                      ATerm c_28 = NULL;
                                                                      c_28 = t;
                                                                      r_26 :
                                                                      if(!(match_string(c_28, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, w_1);
                                                                    LocalPopChoice(b_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = a_16;
                                                                    {
                                                                      ATerm x_1 (ATerm t)
                                                                      {
                                                                        ATerm z_1 (ATerm t)
                                                                        {
                                                                          ATerm d_28 = NULL;
                                                                          d_28 = t;
                                                                          s_26 :
                                                                          if(!(match_string(d_28, "ATinsert")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        t = Id_1(t, z_1);
                                                                        return(t);
                                                                      }
                                                                      ATerm y_1 (ATerm t)
                                                                      {
                                                                        ATerm a_2 (ATerm t)
                                                                        {
                                                                          t = Cons_2(t, _id, Nil_0);
                                                                          return(t);
                                                                        }
                                                                        t = Cons_2(t, _id, a_2);
                                                                        return(t);
                                                                      }
                                                                      t = FunCall_2(t, x_1, y_1);
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              LocalPopChoice(z_15);
                            }
                          else
                            {
                              t = s_15;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_16, (ATerm) ATinsert(ATempty, not_null(k_27)));
                            }
                          {
                            e_28 = t;
                            if(((r_27 != NULL) && (r_27 != e_28)))
                              _fail(e_28);
                            else
                              r_27 = e_28;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_27)), not_null(r_27))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_string(n_27, "Nil"))
            {
              h_27 :
              if(((ATermList) o_27 == ATempty))
                {
                  t = term_q_16;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cache_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_28 = NULL;
        ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_28));
        {
          ATerm b_2 (ATerm t)
          {
            t = term_w_13;
            return(t);
          }
          t = rewrite_1(t, b_2);
          {
            u_28 = t;
            m_28 :
            if(match_cons(u_28, sym_Defined_2))
              {
                v_28 = ATgetArgument(u_28, 0);
                w_28 = ATgetArgument(u_28, 1);
                n_28 :
                if(match_string(v_28, "l_0"))
                  {
                    if(((t_28 != NULL) && (t_28 != w_28)))
                      _fail(w_28);
                    else
                      t_28 = w_28;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(t_28));
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
        {
          ATerm y_28 = NULL;
          ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_28));
          {
            ATerm c_2 (ATerm t)
            {
              t = term_w_13;
              return(t);
            }
            t = rewrite_1(t, c_2);
            {
              z_28 = t;
              p_28 :
              if(match_cons(z_28, sym_Defined_2))
                {
                  a_29 = ATgetArgument(z_28, 0);
                  b_29 = ATgetArgument(z_28, 1);
                  q_28 :
                  if(match_string(a_29, "k_0"))
                    {
                      if(((y_28 != NULL) && (y_28 != b_29)))
                        _fail(b_29);
                      else
                        y_28 = b_29;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          }
          t = not_null(y_28);
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0 (ATerm t)
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
        ATerm i_29 = NULL,k_29 = NULL;
        ATerm v_16;
        v_16 = t;
        {
          ATerm j_29 = NULL;
          j_29 = t;
          if(((i_29 != NULL) && (i_29 != j_29)))
            _fail(j_29);
          else
            i_29 = j_29;
        }
        t = v_16;
        {
          ATerm l_29 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm w_16 = t;
              int x_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  LocalPopChoice(x_16);
                }
              else
                {
                  t = w_16;
                  t = ConstructTerm_0(t);
                }
              return(t);
            }
            t = try_1(t, d_2);
            {
              l_29 = t;
              if(((k_29 != NULL) && (k_29 != l_29)))
                _fail(l_29);
              else
                k_29 = l_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), not_null(k_29));
            {
              ATerm y_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = y_16;
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
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  ATerm k_45 (ATerm t)
  {
    ATerm z_37 = NULL,o_38 = NULL,q_38 = NULL;
    ATerm a_17;
    a_17 = t;
    {
      ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
      t = not_null(a_36);
      {
        ATerm e_17 = t;
        if((PushChoice() == 0))
          {
            ATerm a_38 = NULL;
            a_38 = t;
            d_31 :
            if(!(match_string(a_38, "Nil")))
              {
                if(!(match_string(a_38, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_17;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), term_f_17);
          {
            ATerm e_2 (ATerm t)
            {
              ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
              b_38 = t;
              h_31 :
              if(match_cons(b_38, sym__2))
                {
                  c_38 = ATgetArgument(b_38, 0);
                  e_38 = ATgetArgument(b_38, 1);
                  i_31 :
                  if(match_cons(c_38, sym_Var_1))
                    {
                      d_38 = ATgetArgument(c_38, 0);
                      {
                        ATerm h_38 = NULL,j_38 = NULL;
                        ATerm j_17;
                        j_17 = t;
                        {
                          ATerm i_38 = NULL;
                          t = not_null(e_38);
                          {
                            t = int_to_string_0(t);
                            {
                              i_38 = t;
                              if(((h_38 != NULL) && (h_38 != i_38)))
                                _fail(i_38);
                              else
                                h_38 = i_38;
                            }
                          }
                        }
                        t = j_17;
                        {
                          ATerm k_38 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), term_m_17);
                          {
                            t = add_0(t);
                            {
                              k_38 = t;
                              if(((j_38 != NULL) && (j_38 != k_38)))
                                _fail(k_38);
                              else
                                j_38 = k_38;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_38)), term_d_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(h_38))), (ATerm) ATmakeAppl(sym_Id_1, not_null(s_36)))))), not_null(j_38));
                        }
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = thread_map_1(t, e_2);
            {
              l_38 = t;
              k_31 :
              if(match_cons(l_38, sym__2))
                {
                  m_38 = ATgetArgument(l_38, 0);
                  n_38 = ATgetArgument(l_38, 1);
                  if(((z_37 != NULL) && (z_37 != m_38)))
                    _fail(m_38);
                  else
                    z_37 = m_38;
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
      }
    }
    t = a_17;
    {
      ATerm u_17;
      u_17 = t;
      {
        ATerm p_38 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_36), not_null(y_35));
        {
          t = ConstructorName_0(t);
          {
            p_38 = t;
            if(((o_38 != NULL) && (o_38 != p_38)))
              _fail(p_38);
            else
              o_38 = p_38;
          }
        }
      }
      t = u_17;
      {
        ATerm r_38 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_37), (ATerm) ATinsert(ATempty, not_null(c_36)));
        {
          t = conc_0(t);
          {
            r_38 = t;
            if(((q_38 != NULL) && (q_38 != r_38)))
              _fail(r_38);
            else
              q_38 = r_38;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_38))), (ATerm) ATmakeAppl(sym_Id_1, not_null(s_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(q_38)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_36)), not_null(d_36), not_null(t_36)))));
      }
    }
    return(t);
  }
  ATerm l_45 (ATerm t)
  {
    ATerm s_39 = NULL;
    ATerm t_39 = NULL;
    t = not_null(a_36);
    {
      t = real_to_string_0(t);
      {
        t_39 = t;
        if(((s_39 != NULL) && (s_39 != t_39)))
          _fail(t_39);
        else
          s_39 = t_39;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(s_39))), (ATerm) ATmakeAppl(sym_Id_1, not_null(s_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(c_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_36)), not_null(d_36), not_null(t_36)))));
    return(t);
  }
  ATerm m_45 (ATerm t)
  {
    ATerm a_40 = NULL;
    ATerm c_40 = NULL;
    t = not_null(a_36);
    {
      t = int_to_string_0(t);
      {
        c_40 = t;
        if(((a_40 != NULL) && (a_40 != c_40)))
          _fail(c_40);
        else
          a_40 = c_40;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_40))), (ATerm) ATmakeAppl(sym_Id_1, not_null(s_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(c_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_36)), not_null(d_36), not_null(t_36)))));
    return(t);
  }
  ATerm n_45 (ATerm t)
  {
    ATerm j_40 = NULL;
    ATerm k_40 = NULL;
    t = not_null(a_36);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          k_40 = t;
          if(((j_40 != NULL) && (j_40 != k_40)))
            _fail(k_40);
          else
            j_40 = k_40;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(j_40)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(s_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(c_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_36)), not_null(d_36), not_null(t_36)))));
    return(t);
  }
  ATerm o_45 (ATerm t)
  {
    t = not_null(t_36);
    return(t);
  }
  ATerm p_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_36)), (ATerm) ATmakeAppl(sym_Case_3, not_null(v_36), not_null(t_36), not_null(e_36)));
    return(t);
  }
  ATerm q_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(u_36)));
    return(t);
  }
  ATerm r_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_36)), term_d_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_36)), (ATerm) ATmakeAppl(sym_Id_1, not_null(f_36)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_36))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_36)), term_d_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_36)))));
    return(t);
  }
  ATerm s_45 (ATerm t)
  {
    t = not_null(v_36);
    {
      ATerm g_18 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_18;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_36)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_36))));
    return(t);
  }
  ATerm t_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_36)), term_d_8, term_i_18));
    return(t);
  }
  ATerm x_45 (ATerm t)
  {
    ATerm a_41 = NULL;
    ATerm b_41 = NULL;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(p_36), (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_18, not_null(v_36))))))), (ATerm) ATmakeAppl(sym__2, not_null(g_36), (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_18, not_null(v_36))))));
    {
      ATerm f_2 (ATerm t)
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MatchArg1_0(t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = MatchArg2_0(t);
          }
        return(t);
      }
      t = map_1(t, f_2);
      {
        b_41 = t;
        if(((a_41 != NULL) && (a_41 != b_41)))
          _fail(b_41);
        else
          a_41 = b_41;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_19, (ATerm) ATinsert(ATempty, not_null(v_36))), term_j_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_w_18, not_null(v_36)), term_p_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(a_41)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, term_i_18))));
    return(t);
  }
  ATerm e_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_w_18, not_null(v_36)), term_p_16), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, term_i_18))));
    return(t);
  }
  ATerm f_46 (ATerm t)
  {
    ATerm g_41 = NULL,w_41 = NULL;
    ATerm k_19;
    k_19 = t;
    {
      ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
      t = not_null(s_36);
      {
        ATerm l_19 = t;
        if((PushChoice() == 0))
          {
            ATerm h_41 = NULL;
            h_41 = t;
            t_31 :
            if(!(match_string(h_41, "Nil")))
              {
                if(!(match_string(h_41, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_19;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_36), term_f_17);
          {
            ATerm g_2 (ATerm t)
            {
              ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
              i_41 = t;
              p_32 :
              if(match_cons(i_41, sym__2))
                {
                  j_41 = ATgetArgument(i_41, 0);
                  k_41 = ATgetArgument(i_41, 1);
                  {
                    ATerm n_41 = NULL,r_41 = NULL;
                    ATerm m_19;
                    m_19 = t;
                    {
                      ATerm o_41 = NULL,q_41 = NULL;
                      ATerm p_41 = NULL;
                      t = not_null(k_41);
                      {
                        t = int_to_string_0(t);
                        {
                          p_41 = t;
                          if(((o_41 != NULL) && (o_41 != p_41)))
                            _fail(p_41);
                          else
                            o_41 = p_41;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_41), (ATerm) ATmakeAppl(sym_FunCall_2, term_r_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(o_41))), not_null(v_36))));
                        {
                          ATerm n_19 = t;
                          int o_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              LocalPopChoice(o_19);
                            }
                          else
                            {
                              t = n_19;
                              t = MatchArg2_0(t);
                            }
                          {
                            q_41 = t;
                            if(((n_41 != NULL) && (n_41 != q_41)))
                              _fail(q_41);
                            else
                              n_41 = q_41;
                          }
                        }
                      }
                    }
                    t = m_19;
                    {
                      ATerm s_41 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_41), term_m_17);
                      {
                        t = add_0(t);
                        {
                          s_41 = t;
                          if(((r_41 != NULL) && (r_41 != s_41)))
                            _fail(s_41);
                          else
                            r_41 = s_41;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_41), not_null(r_41));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = thread_map_1(t, g_2);
            {
              t_41 = t;
              r_32 :
              if(match_cons(t_41, sym__2))
                {
                  u_41 = ATgetArgument(t_41, 0);
                  v_41 = ATgetArgument(t_41, 1);
                  if(((g_41 != NULL) && (g_41 != u_41)))
                    _fail(u_41);
                  else
                    g_41 = u_41;
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
      }
    }
    t = k_19;
    {
      ATerm x_41 = NULL,z_41 = NULL;
      ATerm y_41 = NULL;
      t = not_null(r_36);
      {
        t = length_0(t);
        {
          y_41 = t;
          if(((x_41 != NULL) && (x_41 != y_41)))
            _fail(y_41);
          else
            x_41 = y_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_36), not_null(x_41));
        {
          t = ConstructorName_0(t);
          {
            z_41 = t;
            if(((w_41 != NULL) && (w_41 != z_41)))
              _fail(z_41);
            else
              w_41 = z_41;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_41))), not_null(v_36))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(g_41)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, term_i_18))));
    }
    return(t);
  }
  ATerm g_46 (ATerm t)
  {
    ATerm e_42 = NULL;
    ATerm f_42 = NULL;
    t = not_null(s_36);
    {
      t = real_to_string_0(t);
      {
        f_42 = t;
        if(((e_42 != NULL) && (e_42 != f_42)))
          _fail(f_42);
        else
          e_42 = f_42;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_19, (ATerm) ATinsert(ATempty, not_null(v_36))), term_q_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_s_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_20, not_null(v_36)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(e_42)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, term_i_18))));
    return(t);
  }
  ATerm h_46 (ATerm t)
  {
    ATerm n_42 = NULL;
    ATerm o_42 = NULL;
    t = not_null(s_36);
    {
      t = int_to_string_0(t);
      {
        o_42 = t;
        if(((n_42 != NULL) && (n_42 != o_42)))
          _fail(o_42);
        else
          n_42 = o_42;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_19, (ATerm) ATinsert(ATempty, not_null(v_36))), term_j_20), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_20, not_null(v_36)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(n_42)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, term_i_18))));
    return(t);
  }
  ATerm i_46 (ATerm t)
  {
    ATerm r_42 = NULL;
    ATerm s_42 = NULL;
    t = not_null(s_36);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          s_42 = t;
          if(((r_42 != NULL) && (r_42 != s_42)))
            _fail(s_42);
          else
            r_42 = s_42;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_21, not_null(v_36)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_t_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_15), term_v_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(r_42)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, term_i_18))));
    return(t);
  }
  ATerm j_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_36)), term_d_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_36)), not_null(v_36))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, not_null(v_36)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_36)), term_d_8, not_null(v_36))));
    return(t);
  }
  ATerm k_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(r_36), not_null(v_36))), (ATerm) ATmakeAppl(sym_Match_2, not_null(s_36), not_null(v_36))));
    return(t);
  }
  ATerm l_46 (ATerm t)
  {
    t = term_e_21;
    return(t);
  }
  ATerm m_46 (ATerm t)
  {
    t = term_e_21;
    return(t);
  }
  ATerm n_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(u_36), term_i_18);
    return(t);
  }
  ATerm o_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(u_36), (ATerm) ATinsert(ATempty, not_null(v_36)));
    return(t);
  }
  ATerm p_46 (ATerm t)
  {
    ATerm i_43 = NULL;
    ATerm j_43 = NULL;
    t = new_0(t);
    {
      j_43 = t;
      if(((i_43 != NULL) && (i_43 != j_43)))
        _fail(j_43);
      else
        i_43 = j_43;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_43)), term_w_9))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_18, term_d_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_43))))), not_null(u_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_43)), term_d_8, term_i_18))));
    return(t);
  }
  ATerm q_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(u_36));
    return(t);
  }
  ATerm r_46 (ATerm t)
  {
    ATerm n_43 = NULL;
    ATerm t_43 = NULL;
    t = not_null(v_36);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
        o_43 = t;
        n_33 :
        if(match_cons(o_43, sym_Call_2))
          {
            p_43 = ATgetArgument(o_43, 0);
            r_43 = ATgetArgument(o_43, 1);
            o_33 :
            if(match_cons(p_43, sym_SVar_1))
              {
                q_43 = ATgetArgument(p_43, 0);
                p_33 :
                if(((ATermList) r_43 == ATempty))
                  {
                    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(q_43));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1(t, h_2);
      {
        t_43 = t;
        if(((n_43 != NULL) && (n_43 != t_43)))
          _fail(t_43);
        else
          n_43 = t_43;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_18, term_d_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_36)), (ATerm) ATinsert(CheckATermList(not_null(n_43)), term_i_18))));
    return(t);
  }
  ATerm s_46 (ATerm t)
  {
    ATerm w_43 = NULL;
    ATerm x_43 = NULL;
    t = not_null(v_36);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = try_1(t, construct_term_0);
          return(t);
        }
        t = topdown_1(t, j_2);
        return(t);
      }
      t = map_1(t, i_2);
      {
        x_43 = t;
        if(((w_43 != NULL) && (w_43 != x_43)))
          _fail(x_43);
        else
          w_43 = x_43;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_18, term_d_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_36)), not_null(w_43))));
    return(t);
  }
  ATerm t_46 (ATerm t)
  {
    ATerm z_43 = NULL;
    ATerm a_44 = NULL;
    t = new_0(t);
    {
      a_44 = t;
      if(((z_43 != NULL) && (z_43 != a_44)))
        _fail(a_44);
      else
        z_43 = a_44;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_43)), term_w_9), term_j_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_r_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_21), term_x_21), not_null(u_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_18, term_d_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_43)))))))));
    return(t);
  }
  ATerm u_46 (ATerm t)
  {
    ATerm d_44 = NULL;
    ATerm e_44 = NULL;
    t = new_0(t);
    {
      e_44 = t;
      if(((d_44 != NULL) && (d_44 != e_44)))
        _fail(e_44);
      else
        d_44 = e_44;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_44)), term_w_9), term_j_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_d_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(u_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_18, term_d_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_44)))))))));
    return(t);
  }
  ATerm v_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(u_36), not_null(v_36));
    return(t);
  }
  ATerm w_46 (ATerm t)
  {
    ATerm l_44 = NULL,m_44 = NULL;
    ATerm n_44 = NULL;
    ATerm o_44 = NULL;
    t = new_0(t);
    {
      n_44 = t;
      {
        if(((l_44 != NULL) && (l_44 != n_44)))
          _fail(n_44);
        else
          l_44 = n_44;
        {
          t = new_0(t);
          {
            o_44 = t;
            if(((m_44 != NULL) && (m_44 != o_44)))
              _fail(o_44);
            else
              m_44 = o_44;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_44)), term_w_9), term_x_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_44)), term_w_9), term_j_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_r_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(m_44)))))), not_null(u_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_18, term_d_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_44)))))))));
    return(t);
  }
  ATerm x_46 (ATerm t)
  {
    ATerm r_44 = NULL,s_44 = NULL;
    ATerm t_44 = NULL;
    ATerm u_44 = NULL;
    t = new_0(t);
    {
      t_44 = t;
      {
        if(((r_44 != NULL) && (r_44 != t_44)))
          _fail(t_44);
        else
          r_44 = t_44;
        {
          t = new_0(t);
          {
            u_44 = t;
            if(((s_44 != NULL) && (s_44 != u_44)))
              _fail(u_44);
            else
              s_44 = u_44;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_44)), term_w_9), term_x_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_44)), term_w_9), term_j_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_r_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_44)))))), not_null(u_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_18, term_d_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_44)))))))));
    return(t);
  }
  ATerm y_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_36), not_null(v_36));
    return(t);
  }
  ATerm z_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_36)), not_null(u_36)));
    return(t);
  }
  ATerm a_47 (ATerm t)
  {
    ATerm d_45 = NULL;
    ATerm a_23;
    a_23 = t;
    {
      t = not_null(u_36);
      {
        ATerm k_2 (ATerm t)
        {
          ATerm b_45 = NULL;
          b_45 = t;
          {
            ATerm b_23;
            b_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(b_45)), term_d_23);
              {
                ATerm l_2 (ATerm t)
                {
                  t = term_e_11;
                  return(t);
                }
                t = assert_1(t, l_2);
              }
            }
            t = b_23;
          }
          return(t);
        }
        t = map_1(t, k_2);
      }
    }
    t = a_23;
    {
      ATerm g_45 = NULL;
      t = not_null(u_36);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm e_45 = NULL;
          e_45 = t;
          t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_45)), term_w_9), term_e_23);
          return(t);
        }
        t = map_1(t, m_2);
        {
          g_45 = t;
          if(((d_45 != NULL) && (d_45 != g_45)))
            _fail(g_45);
          else
            d_45 = g_45;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_9, not_null(d_45))), (ATerm) ATinsert(ATempty, not_null(v_36)));
    }
    return(t);
  }
  ATerm b_47 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, term_i_18)));
    return(t);
  }
  ATerm c_47 (ATerm t)
  {
    t = term_e_21;
    return(t);
  }
  w_36 = t;
  b_34 :
  if(match_cons(w_36, sym_Build_1))
    {
      u_36 = ATgetArgument(w_36, 0);
      {
        ATerm y_36 = NULL;
        ATerm z_36 = NULL;
        t = not_null(u_36);
        {
          t = construct_term_caching_0(t);
          {
            z_36 = t;
            if(((y_36 != NULL) && (y_36 != z_36)))
              _fail(z_36);
            else
              y_36 = z_36;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_18, term_d_8, not_null(y_36)));
      }
    }
  else
    {
      if(match_cons(w_36, sym_Case_3))
        {
          u_36 = ATgetArgument(w_36, 0);
          v_36 = ATgetArgument(w_36, 1);
          t_36 = ATgetArgument(w_36, 2);
          c_34 :
          if(match_cons(u_36, sym_Var_1))
            {
              s_36 = ATgetArgument(u_36, 0);
              d_34 :
              if(((ATgetType(v_36) == AT_LIST) && ((ATermList) v_36 != ATempty)))
                {
                  f_36 = ATgetFirst((ATermList) v_36);
                  d_36 = (ATerm) ATgetNext((ATermList) v_36);
                  e_34 :
                  if(match_cons(f_36, sym_Alt_3))
                    {
                      z_35 = ATgetArgument(f_36, 0);
                      b_36 = ATgetArgument(f_36, 1);
                      c_36 = ATgetArgument(f_36, 2);
                      f_34 :
                      if(match_cons(z_35, sym_Fun_2))
                        {
                          a_36 = ATgetArgument(z_35, 0);
                          y_35 = ATgetArgument(z_35, 1);
                          g_34 :
                          if(((ATgetType(b_36) == AT_LIST) && ((ATermList) b_36 != ATempty)))
                            {
                              s_35 = ATgetFirst((ATermList) b_36);
                              u_35 = (ATerm) ATgetNext((ATermList) b_36);
                              h_34 :
                              if(((ATgetType(u_35) == AT_LIST) && ((ATermList) u_35 != ATempty)))
                                {
                                  v_35 = ATgetFirst((ATermList) u_35);
                                  x_35 = (ATerm) ATgetNext((ATermList) u_35);
                                  i_34 :
                                  if(((ATermList) x_35 == ATempty))
                                    {
                                      j_34 :
                                      if(match_cons(v_35, sym_Var_1))
                                        {
                                          w_35 = ATgetArgument(v_35, 0);
                                          k_34 :
                                          if(match_cons(s_35, sym_Var_1))
                                            {
                                              t_35 = ATgetArgument(s_35, 0);
                                              l_34 :
                                              if(match_int(y_35, 2))
                                                {
                                                  m_34 :
                                                  if(match_string(a_36, "Cons"))
                                                    {
                                                      ATerm f_23 = t;
                                                      int g_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_36)))), term_j_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_w_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_36))), term_p_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_35)), term_d_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_36))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_35)), term_d_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_36))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_36)), not_null(d_36), not_null(t_36)))));
                                                          LocalPopChoice(g_23);
                                                        }
                                                      else
                                                        {
                                                          t = f_23;
                                                          t = k_45(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = k_45(t);
                                                    }
                                                }
                                              else
                                                {
                                                  n_34 :
                                                  t = k_45(t);
                                                }
                                            }
                                          else
                                            {
                                              o_34 :
                                              p_34 :
                                              t = k_45(t);
                                            }
                                        }
                                      else
                                        {
                                          q_34 :
                                          r_34 :
                                          s_34 :
                                          t = k_45(t);
                                        }
                                    }
                                  else
                                    {
                                      t_34 :
                                      u_34 :
                                      v_34 :
                                      w_34 :
                                      t = k_45(t);
                                    }
                                }
                              else
                                {
                                  x_34 :
                                  y_34 :
                                  z_34 :
                                  t = k_45(t);
                                }
                            }
                          else
                            {
                              if(((ATermList) b_36 == ATempty))
                                {
                                  a_35 :
                                  if(match_int(y_35, 0))
                                    {
                                      b_35 :
                                      if(match_string(a_36, "Nil"))
                                        {
                                          ATerm h_23 = t;
                                          int i_23 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_w_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_36))), term_p_16), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(c_36)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_36)), not_null(d_36), not_null(t_36)))));
                                              LocalPopChoice(i_23);
                                            }
                                          else
                                            {
                                              t = h_23;
                                              t = k_45(t);
                                            }
                                        }
                                      else
                                        {
                                          t = k_45(t);
                                        }
                                    }
                                  else
                                    {
                                      c_35 :
                                      t = k_45(t);
                                    }
                                }
                              else
                                {
                                  d_35 :
                                  e_35 :
                                  t = k_45(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(z_35, sym_Real_1))
                            {
                              a_36 = ATgetArgument(z_35, 0);
                              t = l_45(t);
                            }
                          else
                            {
                              if(match_cons(z_35, sym_Int_1))
                                {
                                  a_36 = ATgetArgument(z_35, 0);
                                  t = m_45(t);
                                }
                              else
                                {
                                  if(match_cons(z_35, sym_Str_1))
                                    {
                                      a_36 = ATgetArgument(z_35, 0);
                                      t = n_45(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(((ATermList) v_36 == ATempty))
                    {
                      t = o_45(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(w_36, sym_Case_4))
            {
              u_36 = ATgetArgument(w_36, 0);
              v_36 = ATgetArgument(w_36, 1);
              t_36 = ATgetArgument(w_36, 2);
              e_36 = ATgetArgument(w_36, 3);
              t = p_45(t);
            }
          else
            {
              if(match_cons(w_36, sym_Continue_1))
                {
                  u_36 = ATgetArgument(w_36, 0);
                  t = q_45(t);
                }
              else
                {
                  if(match_cons(w_36, sym_Assign_2))
                    {
                      u_36 = ATgetArgument(w_36, 0);
                      v_36 = ATgetArgument(w_36, 1);
                      f_35 :
                      if(match_cons(u_36, sym_Var_1))
                        {
                          s_36 = ATgetArgument(u_36, 0);
                          g_35 :
                          if(match_cons(v_36, sym_Var_1))
                            {
                              f_36 = ATgetArgument(v_36, 0);
                              {
                                ATerm j_23 = t;
                                int k_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = r_45(t);
                                    LocalPopChoice(k_23);
                                  }
                                else
                                  {
                                    t = j_23;
                                    t = s_45(t);
                                  }
                              }
                            }
                          else
                            {
                              t = s_45(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(w_36, sym_Assign_1))
                        {
                          u_36 = ATgetArgument(w_36, 0);
                          h_35 :
                          if(match_cons(u_36, sym_Var_1))
                            {
                              s_36 = ATgetArgument(u_36, 0);
                              t = t_45(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(w_36, sym_Match_2))
                            {
                              u_36 = ATgetArgument(w_36, 0);
                              v_36 = ATgetArgument(w_36, 1);
                              i_35 :
                              if(match_cons(u_36, sym_Op_2))
                                {
                                  s_36 = ATgetArgument(u_36, 0);
                                  r_36 = ATgetArgument(u_36, 1);
                                  j_35 :
                                  if(((ATgetType(r_36) == AT_LIST) && ((ATermList) r_36 != ATempty)))
                                    {
                                      g_36 = ATgetFirst((ATermList) r_36);
                                      o_36 = (ATerm) ATgetNext((ATermList) r_36);
                                      k_35 :
                                      if(((ATgetType(o_36) == AT_LIST) && ((ATermList) o_36 != ATempty)))
                                        {
                                          p_36 = ATgetFirst((ATermList) o_36);
                                          q_36 = (ATerm) ATgetNext((ATermList) o_36);
                                          l_35 :
                                          if(((ATermList) q_36 == ATempty))
                                            {
                                              m_35 :
                                              if(match_string(s_36, "Cons"))
                                                {
                                                  ATerm l_23 = t;
                                                  int m_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = x_45(t);
                                                      LocalPopChoice(m_23);
                                                    }
                                                  else
                                                    {
                                                      t = l_23;
                                                      t = f_46(t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = f_46(t);
                                                }
                                            }
                                          else
                                            {
                                              n_35 :
                                              t = f_46(t);
                                            }
                                        }
                                      else
                                        {
                                          o_35 :
                                          t = f_46(t);
                                        }
                                    }
                                  else
                                    {
                                      if(((ATermList) r_36 == ATempty))
                                        {
                                          p_35 :
                                          if(match_string(s_36, "Nil"))
                                            {
                                              ATerm r_23 = t;
                                              int s_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = e_46(t);
                                                  LocalPopChoice(s_23);
                                                }
                                              else
                                                {
                                                  t = r_23;
                                                  t = f_46(t);
                                                }
                                            }
                                          else
                                            {
                                              t = f_46(t);
                                            }
                                        }
                                      else
                                        {
                                          q_35 :
                                          t = f_46(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(u_36, sym_Real_1))
                                    {
                                      s_36 = ATgetArgument(u_36, 0);
                                      t = g_46(t);
                                    }
                                  else
                                    {
                                      if(match_cons(u_36, sym_Int_1))
                                        {
                                          s_36 = ATgetArgument(u_36, 0);
                                          t = h_46(t);
                                        }
                                      else
                                        {
                                          if(match_cons(u_36, sym_Str_1))
                                            {
                                              s_36 = ATgetArgument(u_36, 0);
                                              t = i_46(t);
                                            }
                                          else
                                            {
                                              if(match_cons(u_36, sym_Var_1))
                                                {
                                                  s_36 = ATgetArgument(u_36, 0);
                                                  t = j_46(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(u_36, sym_As_2))
                                                    {
                                                      s_36 = ATgetArgument(u_36, 0);
                                                      r_36 = ATgetArgument(u_36, 1);
                                                      t = k_46(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(u_36, sym_BuildDefault_1))
                                                        {
                                                          s_36 = ATgetArgument(u_36, 0);
                                                          t = l_46(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(u_36, sym_Wld_0))
                                                            {
                                                              t = m_46(t);
                                                            }
                                                          else
                                                            {
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
                          else
                            {
                              if(match_cons(w_36, sym_Match_1))
                                {
                                  u_36 = ATgetArgument(w_36, 0);
                                  t = n_46(t);
                                }
                              else
                                {
                                  if(match_cons(w_36, sym_Let_2))
                                    {
                                      u_36 = ATgetArgument(w_36, 0);
                                      v_36 = ATgetArgument(w_36, 1);
                                      t = o_46(t);
                                    }
                                  else
                                    {
                                      if(match_cons(w_36, sym_Where_1))
                                        {
                                          u_36 = ATgetArgument(w_36, 0);
                                          t = p_46(t);
                                        }
                                      else
                                        {
                                          if(match_cons(w_36, sym_Test_1))
                                            {
                                              u_36 = ATgetArgument(w_36, 0);
                                              t = q_46(t);
                                            }
                                          else
                                            {
                                              if(match_cons(w_36, sym_Call_2))
                                                {
                                                  u_36 = ATgetArgument(w_36, 0);
                                                  v_36 = ATgetArgument(w_36, 1);
                                                  r_35 :
                                                  if(match_cons(u_36, sym_SVar_1))
                                                    {
                                                      s_36 = ATgetArgument(u_36, 0);
                                                      t = r_46(t);
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_cons(w_36, sym_Prim_2))
                                                    {
                                                      u_36 = ATgetArgument(w_36, 0);
                                                      v_36 = ATgetArgument(w_36, 1);
                                                      t = s_46(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(w_36, sym_Not_1))
                                                        {
                                                          u_36 = ATgetArgument(w_36, 0);
                                                          t = t_46(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(w_36, sym_LGChoice_2))
                                                            {
                                                              u_36 = ATgetArgument(w_36, 0);
                                                              v_36 = ATgetArgument(w_36, 1);
                                                              t = u_46(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(w_36, sym_GChoice_2))
                                                                {
                                                                  u_36 = ATgetArgument(w_36, 0);
                                                                  v_36 = ATgetArgument(w_36, 1);
                                                                  t = v_46(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(w_36, sym_GuardedLChoice_3))
                                                                    {
                                                                      u_36 = ATgetArgument(w_36, 0);
                                                                      v_36 = ATgetArgument(w_36, 1);
                                                                      t_36 = ATgetArgument(w_36, 2);
                                                                      t = w_46(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(w_36, sym_LChoice_2))
                                                                        {
                                                                          u_36 = ATgetArgument(w_36, 0);
                                                                          v_36 = ATgetArgument(w_36, 1);
                                                                          t = x_46(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(w_36, sym_Choice_2))
                                                                            {
                                                                              u_36 = ATgetArgument(w_36, 0);
                                                                              v_36 = ATgetArgument(w_36, 1);
                                                                              t = y_46(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(w_36, sym_Seq_2))
                                                                                {
                                                                                  u_36 = ATgetArgument(w_36, 0);
                                                                                  v_36 = ATgetArgument(w_36, 1);
                                                                                  t = z_46(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(w_36, sym_Scope_2))
                                                                                    {
                                                                                      u_36 = ATgetArgument(w_36, 0);
                                                                                      v_36 = ATgetArgument(w_36, 1);
                                                                                      t = a_47(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(w_36, sym_Fail_0))
                                                                                        {
                                                                                          t = b_47(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(w_36, sym_Id_0))
                                                                                            {
                                                                                              t = c_47(t);
                                                                                            }
                                                                                          else
                                                                                            {
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
    }
  return(t);
}
ATerm PlainBody_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
  p_48 = t;
  o_48 :
  if(match_cons(p_48, sym__2))
    {
      q_48 = ATgetArgument(p_48, 0);
      r_48 = ATgetArgument(p_48, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_t_23), not_null(r_48)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL;
  a_49 = t;
  y_48 :
  if(((ATgetType(a_49) == AT_LIST) && ((ATermList) a_49 != ATempty)))
    {
      b_49 = ATgetFirst((ATermList) a_49);
      c_49 = (ATerm) ATgetNext((ATermList) a_49);
      z_48 :
      if(match_int(b_49, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_49)), term_z_23), term_u_23);
        }
      else
        {
          if(match_int(b_49, 92))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_49)), term_u_23), term_u_23);
            }
          else
            {
              if(match_int(b_49, 34))
                {
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_49)), term_a_24), term_u_23);
                }
              else
                {
                  _fail(t);
                }
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm escape_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm j_49 (ATerm t)
    {
      ATerm b_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Escape_0(t);
          {
            ATerm n_2 (ATerm t)
            {
              t = Cons_2(t, _id, j_49);
              return(t);
            }
            t = Cons_2(t, _id, n_2);
          }
          LocalPopChoice(e_24);
        }
      else
        {
          t = b_24;
          {
            ATerm h_24 = t;
            int k_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, j_49);
                LocalPopChoice(k_24);
              }
            else
              {
                t = h_24;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = j_49(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm o_49 = NULL,s_49 = NULL,t_49 = NULL;
  o_49 = t;
  n_49 :
  if(match_cons(o_49, sym__2))
    {
      s_49 = ATgetArgument(o_49, 0);
      t_49 = ATgetArgument(o_49, 1);
      {
        ATerm w_49 = NULL,y_49 = NULL;
        ATerm l_24;
        l_24 = t;
        {
          ATerm x_49 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_m_24), not_null(s_49));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  x_49 = t;
                  if(((w_49 != NULL) && (w_49 != x_49)))
                    _fail(x_49);
                  else
                    w_49 = x_49;
                }
              }
            }
          }
        }
        t = l_24;
        {
          ATerm z_49 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_n_24), not_null(s_49));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  z_49 = t;
                  if(((y_49 != NULL) && (y_49 != z_49)))
                    _fail(z_49);
                  else
                    y_49 = z_49;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(y_49))), term_q_24)))), not_null(t_49)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(w_49))), term_q_24)))));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm g_50 = NULL;
  g_50 = t;
  {
    ATerm i_50 = NULL,j_50 = NULL;
    t = term_j_7;
    {
      ATerm o_2 (ATerm t)
      {
        t = term_t_7;
        return(t);
      }
      t = rewrite_1(t, o_2);
      {
        i_50 = t;
        e_50 :
        if(match_cons(i_50, sym_Defined_1))
          {
            j_50 = ATgetArgument(i_50, 0);
            f_50 :
            if(!(match_string(j_50, "e_0")))
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(g_50);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm p_50 = NULL;
  p_50 = t;
  {
    ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_50));
    {
      ATerm p_2 (ATerm t)
      {
        t = term_y_7;
        return(t);
      }
      t = rewrite_1(t, p_2);
      {
        v_50 = t;
        n_50 :
        if(match_cons(v_50, sym_Defined_2))
          {
            w_50 = ATgetArgument(v_50, 0);
            x_50 = ATgetArgument(v_50, 1);
            o_50 :
            if(match_string(w_50, "f_0"))
              {
                if(((p_50 != NULL) && (p_50 != x_50)))
                  _fail(x_50);
                else
                  p_50 = x_50;
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(p_50);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL;
  e_51 = t;
  d_51 :
  if(match_cons(e_51, sym_SDef_3))
    {
      f_51 = ATgetArgument(e_51, 0);
      g_51 = ATgetArgument(e_51, 1);
      h_51 = ATgetArgument(e_51, 2);
      {
        ATerm l_51 = NULL,m_51 = NULL;
        ATerm n_51 = NULL;
        t = not_null(g_51);
        {
          ATerm o_51 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            n_51 = t;
            {
              if(((l_51 != NULL) && (l_51 != n_51)))
                _fail(n_51);
              else
                l_51 = n_51;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_51), not_null(h_51));
                {
                  ATerm r_24 = t;
                  int s_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_2 (ATerm t)
                      {
                        ATerm t_24 = t;
                        int u_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            LocalPopChoice(u_24);
                          }
                        else
                          {
                            t = t_24;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, q_2, _id);
                      t = TracedBody_0(t);
                      LocalPopChoice(s_24);
                    }
                  else
                    {
                      t = r_24;
                      t = PlainBody_0(t);
                    }
                  {
                    o_51 = t;
                    if(((m_51 != NULL) && (m_51 != o_51)))
                      _fail(o_51);
                    else
                      m_51 = o_51;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_v_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_51)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(l_51)), term_w_24)))), not_null(m_51));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm quote_1 (ATerm t, ATerm v_93 (ATerm))
{
  ATerm v_51 = NULL;
  ATerm x_51 = NULL,z_51 = NULL;
  v_51 = t;
  {
    ATerm x_24;
    x_24 = t;
    {
      ATerm y_51 = NULL;
      t = v_93(t);
      {
        y_51 = t;
        if(((x_51 != NULL) && (x_51 != y_51)))
          _fail(y_51);
        else
          x_51 = y_51;
      }
    }
    t = x_24;
    {
      ATerm a_52 = NULL;
      t = not_null(v_51);
      {
        t = explode_string_0(t);
        {
          a_52 = t;
          if(((z_51 != NULL) && (z_51 != a_52)))
            _fail(a_52);
          else
            z_51 = a_52;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, not_null(x_51))), not_null(z_51)), (ATerm) ATinsert(ATempty, not_null(x_51)));
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
  ATerm r_2 (ATerm t)
  {
    t = term_a_24;
    return(t);
  }
  t = quote_1(t, r_2);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  f_52 :
  if(((ATgetType(g_52) == AT_LIST) && ((ATermList) g_52 != ATempty)))
    {
      h_52 = ATgetFirst((ATermList) g_52);
      i_52 = (ATerm) ATgetNext((ATermList) g_52);
      t = not_null(h_52);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  p_52 = t;
  o_52 :
  if(match_cons(p_52, sym__2))
    {
      q_52 = ATgetArgument(p_52, 0);
      r_52 = ATgetArgument(p_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_52), not_null(r_52));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm i_86 (ATerm))
{
  ATerm x_52 = NULL;
  ATerm z_52 = NULL;
  x_52 = t;
  {
    ATerm a_53 = NULL;
    t = term_y_24;
    {
      t = i_86(t);
      {
        a_53 = t;
        if(((z_52 != NULL) && (z_52 != a_53)))
          _fail(a_53);
        else
          z_52 = a_53;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_52), not_null(x_52));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  h_53 :
  if(match_cons(i_53, sym__2))
    {
      j_53 = ATgetArgument(i_53, 0);
      k_53 = ATgetArgument(i_53, 1);
      {
        ATerm n_53 = NULL;
        ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(j_53), not_null(k_53));
        {
          ATerm s_2 (ATerm t)
          {
            t = term_z_24;
            return(t);
          }
          t = rewrite_1(t, s_2);
          {
            o_53 = t;
            f_53 :
            if(match_cons(o_53, sym_Defined_2))
              {
                p_53 = ATgetArgument(o_53, 0);
                q_53 = ATgetArgument(o_53, 1);
                g_53 :
                if(match_string(p_53, "i_0"))
                  {
                    if(((n_53 != NULL) && (n_53 != q_53)))
                      _fail(q_53);
                    else
                      n_53 = q_53;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = not_null(n_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitConstructor_0 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_OpDecl_2))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      {
        ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,k_54 = NULL;
        ATerm d_25;
        d_25 = t;
        {
          ATerm h_54 = NULL;
          t = not_null(b_54);
          {
            ATerm i_54 = NULL;
            t = Arity_0(t);
            {
              h_54 = t;
              {
                if(((f_54 != NULL) && (f_54 != h_54)))
                  _fail(h_54);
                else
                  f_54 = h_54;
                {
                  ATerm j_54 = NULL;
                  t = int_to_string_0(t);
                  {
                    i_54 = t;
                    {
                      if(((e_54 != NULL) && (e_54 != i_54)))
                        _fail(i_54);
                      else
                        e_54 = i_54;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_54), not_null(f_54));
                        {
                          t = ConstructorName_0(t);
                          {
                            j_54 = t;
                            if(((g_54 != NULL) && (g_54 != j_54)))
                              _fail(j_54);
                            else
                              g_54 = j_54;
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
        t = d_25;
        {
          ATerm l_54 = NULL;
          t = not_null(a_54);
          {
            t = double_quote_0(t);
            {
              l_54 = t;
              if(((k_54 != NULL) && (k_54 != l_54)))
                _fail(l_54);
              else
                k_54 = l_54;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(g_54)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_54)), term_d_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_25), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(e_54))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(k_54))))))));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitConstructors_0 (ATerm t)
{
  ATerm u_54 = NULL;
  ATerm w_54 = NULL;
  u_54 = t;
  {
    ATerm x_54 = NULL,z_54 = NULL;
    ATerm y_54 = NULL;
    t = not_null(u_54);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          y_54 = t;
          if(((x_54 != NULL) && (x_54 != y_54)))
            _fail(y_54);
          else
            x_54 = y_54;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_54), (ATerm) ATinsert(ATempty, term_o_25));
      {
        t = conc_0(t);
        {
          z_54 = t;
          if(((w_54 != NULL) && (w_54 != z_54)))
            _fail(z_54);
          else
            w_54 = z_54;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_q_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_q_25, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_q_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(w_54)));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm e_55 = NULL;
  e_55 = t;
  t = SSL_int_to_string(not_null(e_55));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
  p_55 = t;
  n_55 :
  if(((ATgetType(p_55) == AT_LIST) && ((ATermList) p_55 != ATempty)))
    {
      q_55 = ATgetFirst((ATermList) p_55);
      r_55 = (ATerm) ATgetNext((ATermList) p_55);
      o_55 :
      if(match_int(q_55, 95))
        {
          ATerm t_55 = NULL;
          ATerm u_55 = NULL;
          t = not_null(r_55);
          {
            t = t_0(t);
            {
              u_55 = t;
              if(((t_55 != NULL) && (t_55 != u_55)))
                _fail(u_55);
              else
                t_55 = u_55;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_55)), term_r_25), term_r_25);
        }
      else
        {
          if(match_int(q_55, 45))
            {
              ATerm w_55 = NULL;
              ATerm x_55 = NULL;
              t = not_null(r_55);
              {
                t = t_0(t);
                {
                  x_55 = t;
                  if(((w_55 != NULL) && (w_55 != x_55)))
                    _fail(x_55);
                  else
                    w_55 = x_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_55)), term_r_25);
            }
          else
            {
              if(match_int(q_55, 39))
                {
                  ATerm z_55 = NULL;
                  ATerm a_56 = NULL;
                  t = not_null(r_55);
                  {
                    t = t_0(t);
                    {
                      a_56 = t;
                      if(((z_55 != NULL) && (z_55 != a_56)))
                        _fail(a_56);
                      else
                        z_55 = a_56;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(z_55)), term_r_25), term_s_25), term_r_25);
                }
              else
                {
                  _fail(t);
                }
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm escape_1 (ATerm t, ATerm h_93 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm h_56 (ATerm t)
    {
      ATerm t_25 = t;
      int y_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_93(t, h_56);
          LocalPopChoice(y_25);
        }
      else
        {
          t = t_25;
          {
            ATerm z_25 = t;
            int a_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, h_56);
                LocalPopChoice(a_26);
              }
            else
              {
                t = z_25;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = h_56(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm))
{
  ATerm e_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_95(t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = e_26;
      {
        ATerm m_56 = NULL,n_56 = NULL,s_56 = NULL;
        m_56 = t;
        l_56 :
        if(((ATgetType(m_56) == AT_LIST) && ((ATermList) m_56 != ATempty)))
          {
            n_56 = ATgetFirst((ATermList) m_56);
            s_56 = (ATerm) ATgetNext((ATermList) m_56);
            {
              ATerm v_56 = NULL,x_56 = NULL;
              ATerm j_26;
              j_26 = t;
              {
                ATerm w_56 = NULL;
                t = not_null(n_56);
                {
                  t = z_95(t);
                  {
                    w_56 = t;
                    if(((v_56 != NULL) && (v_56 != w_56)))
                      _fail(w_56);
                    else
                      v_56 = w_56;
                  }
                }
              }
              t = j_26;
              {
                ATerm y_56 = NULL;
                t = not_null(s_56);
                {
                  t = foldr_3(t, x_95, y_95, z_95);
                  {
                    y_56 = t;
                    if(((x_56 != NULL) && (x_56 != y_56)))
                      _fail(y_56);
                    else
                      x_56 = y_56;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_56), not_null(x_56));
                  t = y_95(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_f_17;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_m_17;
    return(t);
  }
  t = foldr_3(t, t_2, add_0, u_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  j_57 = t;
  h_57 :
  if(match_cons(j_57, sym_FunType_2))
    {
      k_57 = ATgetArgument(j_57, 0);
      i_57 = ATgetArgument(j_57, 1);
      {
        t = not_null(k_57);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(j_57, sym_ConstType_1))
        {
          k_57 = ATgetArgument(j_57, 0);
          t = term_f_17;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DeclareConstructor_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL;
  a_58 = t;
  z_57 :
  if(match_cons(a_58, sym_OpDecl_2))
    {
      b_58 = ATgetArgument(a_58, 0);
      c_58 = ATgetArgument(a_58, 1);
      {
        ATerm f_58 = NULL,g_58 = NULL;
        ATerm h_58 = NULL;
        t = not_null(c_58);
        {
          ATerm a_65 = NULL,c_65 = NULL,z_65 = NULL;
          t = Arity_0(t);
          {
            h_58 = t;
            {
              if(((f_58 != NULL) && (f_58 != h_58)))
                _fail(h_58);
              else
                f_58 = h_58;
              {
                ATerm k_26;
                k_26 = t;
                {
                  ATerm b_65 = NULL;
                  t = not_null(b_58);
                  {
                    t = cify_0(t);
                    {
                      b_65 = t;
                      if(((a_65 != NULL) && (a_65 != b_65)))
                        _fail(b_65);
                      else
                        a_65 = b_65;
                    }
                  }
                }
                t = k_26;
                {
                  ATerm w_65 = NULL;
                  t = not_null(f_58);
                  {
                    t = int_to_string_0(t);
                    {
                      w_65 = t;
                      if(((c_65 != NULL) && (c_65 != w_65)))
                        _fail(w_65);
                      else
                        c_65 = w_65;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_65)), term_m_26), not_null(a_65)), term_l_26);
                    {
                      t = concat_strings_0(t);
                      {
                        z_65 = t;
                        {
                          if(((g_58 != NULL) && (g_58 != z_65)))
                            _fail(z_65);
                          else
                            g_58 = z_65;
                          {
                            ATerm n_26;
                            n_26 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(b_58), not_null(f_58)), (ATerm) ATmakeAppl(sym_Defined_2, term_o_26, not_null(g_58)));
                              {
                                ATerm v_2 (ATerm t)
                                {
                                  t = term_z_24;
                                  return(t);
                                }
                                t = assert_1(t, v_2);
                              }
                            }
                            t = n_26;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_58)), term_w_9)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TranslateSig_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
  n_66 = t;
  j_66 :
  if(match_cons(n_66, sym_Signature_1))
    {
      o_66 = ATgetArgument(n_66, 0);
      k_66 :
      if(((ATgetType(o_66) == AT_LIST) && ((ATermList) o_66 != ATempty)))
        {
          p_66 = ATgetFirst((ATermList) o_66);
          r_66 = (ATerm) ATgetNext((ATermList) o_66);
          l_66 :
          if(match_cons(p_66, sym_Constructors_1))
            {
              q_66 = ATgetArgument(p_66, 0);
              m_66 :
              if(((ATermList) r_66 == ATempty))
                {
                  {
                    ATerm t_66 = NULL,u_66 = NULL,x_66 = NULL;
                    ATerm p_27;
                    p_27 = t;
                    {
                      ATerm v_66 = NULL;
                      t = not_null(q_66);
                      {
                        ATerm w_66 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          v_66 = t;
                          {
                            if(((t_66 != NULL) && (t_66 != v_66)))
                              _fail(v_66);
                            else
                              t_66 = v_66;
                            {
                              t = not_null(q_66);
                              {
                                t = InitConstructors_0(t);
                                {
                                  w_66 = t;
                                  if(((u_66 != NULL) && (u_66 != w_66)))
                                    _fail(w_66);
                                  else
                                    u_66 = w_66;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = p_27;
                    {
                      ATerm y_66 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_66), (ATerm) ATinsert(ATempty, not_null(u_66)));
                      {
                        t = conc_0(t);
                        {
                          y_66 = t;
                          if(((x_66 != NULL) && (x_66 != y_66)))
                            _fail(y_66);
                          else
                            x_66 = y_66;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(x_66));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
  f_67 = t;
  e_67 :
  if(match_cons(f_67, sym__2))
    {
      g_67 = ATgetArgument(f_67, 0);
      h_67 = ATgetArgument(f_67, 1);
      {
        t = not_null(g_67);
        {
          ATerm w_2 (ATerm t)
          {
            t = not_null(h_67);
            return(t);
          }
          t = at_end_1(t, w_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
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
ATerm debug_1 (ATerm t, ATerm h_92 (ATerm))
{
  ATerm q_27;
  q_27 = t;
  {
    ATerm n_67 = NULL,p_67 = NULL;
    ATerm b_28;
    b_28 = t;
    {
      ATerm o_67 = NULL;
      t = h_92(t);
      {
        o_67 = t;
        if(((n_67 != NULL) && (n_67 != o_67)))
          _fail(o_67);
        else
          n_67 = o_67;
      }
    }
    t = b_28;
    {
      ATerm q_67 = NULL;
      q_67 = t;
      if(((p_67 != NULL) && (p_67 != q_67)))
        _fail(q_67);
      else
        p_67 = q_67;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_67)), not_null(n_67)));
        t = printnl_0(t);
      }
    }
  }
  t = q_27;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_67 = NULL;
  u_67 = t;
  t = SSL_is_string(not_null(u_67));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_2);
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL;
              d_68 = t;
              c_68 :
              if(match_cons(d_68, sym_Path_1))
                {
                  e_68 = ATgetArgument(d_68, 0);
                  t = not_null(e_68);
                }
              else
                {
                  if(match_cons(d_68, sym_Var_1))
                    {
                      e_68 = ATgetArgument(d_68, 0);
                      {
                        t = not_null(e_68);
                        {
                          ATerm k_28 = t;
                          int l_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_28);
                            }
                          else
                            {
                              t = k_28;
                              {
                                ATerm y_2 (ATerm t)
                                {
                                  t = term_o_28;
                                  return(t);
                                }
                                t = debug_1(t, y_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_68, sym_Prefix_2))
                        {
                          e_68 = ATgetArgument(d_68, 0);
                          f_68 = ATgetArgument(d_68, 1);
                          {
                            ATerm k_68 = NULL,m_68 = NULL;
                            ATerm s_28;
                            s_28 = t;
                            {
                              ATerm l_68 = NULL;
                              t = not_null(e_68);
                              {
                                t = eval_config_0(t);
                                {
                                  l_68 = t;
                                  if(((k_68 != NULL) && (k_68 != l_68)))
                                    _fail(l_68);
                                  else
                                    k_68 = l_68;
                                }
                              }
                            }
                            t = s_28;
                            {
                              ATerm n_68 = NULL;
                              t = not_null(f_68);
                              {
                                t = eval_config_0(t);
                                {
                                  n_68 = t;
                                  if(((m_68 != NULL) && (m_68 != n_68)))
                                    _fail(n_68);
                                  else
                                    m_68 = n_68;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_68), not_null(m_68));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm v_68 = NULL;
  v_68 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_6, not_null(v_68));
    {
      t = table_get_0(t);
      {
        ATerm z_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_28;
            x_28 = t;
            {
              ATerm x_68 = NULL;
              ATerm y_68 = NULL;
              y_68 = t;
              if(((x_68 != NULL) && (x_68 != y_68)))
                _fail(y_68);
              else
                x_68 = y_68;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_6, not_null(v_68), not_null(x_68));
                t = table_put_0(t);
              }
            }
            t = x_28;
          }
          return(t);
        }
        t = try_1(t, z_2);
      }
    }
  }
  return(t);
}
ATerm TranslateType_0 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  g_69 = t;
  e_69 :
  if(match_cons(g_69, sym_FunType_2))
    {
      h_69 = ATgetArgument(g_69, 0);
      f_69 = ATgetArgument(g_69, 1);
      {
        ATerm j_69 = NULL;
        ATerm k_69 = NULL;
        t = not_null(h_69);
        {
          t = map_1(t, TranslateType_0);
          {
            k_69 = t;
            if(((j_69 != NULL) && (j_69 != k_69)))
              _fail(k_69);
            else
              j_69 = k_69;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_v_9, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(j_69)));
      }
    }
  else
    {
      if(match_cons(g_69, sym_ConstType_1))
        {
          h_69 = ATgetArgument(g_69, 0);
          t = term_v_9;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm TranslateVarDec_0 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL;
  u_69 = t;
  r_69 :
  if(match_cons(u_69, sym_VarDec_2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      s_69 :
      if(match_cons(w_69, sym_FunType_2))
        {
          x_69 = ATgetArgument(w_69, 0);
          t_69 = ATgetArgument(w_69, 1);
          {
            ATerm a_70 = NULL;
            ATerm b_70 = NULL;
            t = not_null(x_69);
            {
              t = map_1(t, TranslateType_0);
              {
                b_70 = t;
                if(((a_70 != NULL) && (a_70 != b_70)))
                  _fail(b_70);
                else
                  a_70 = b_70;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_v_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_69)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(a_70)))));
          }
        }
      else
        {
          if(match_cons(w_69, sym_ConstType_1))
            {
              x_69 = ATgetArgument(w_69, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_v_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_69)), term_w_9));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefToDeclaration_0 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL;
  j_70 = t;
  i_70 :
  if(match_cons(j_70, sym_SDef_3))
    {
      k_70 = ATgetArgument(j_70, 0);
      l_70 = ATgetArgument(j_70, 1);
      m_70 = ATgetArgument(j_70, 2);
      {
        ATerm q_70 = NULL;
        ATerm r_70 = NULL;
        t = not_null(l_70);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            r_70 = t;
            if(((q_70 != NULL) && (q_70 != r_70)))
              _fail(r_70);
            else
              q_70 = r_70;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_70)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(q_70)), term_v_9))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TranslateSpec_0 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
  g_71 = t;
  a_71 :
  if(match_cons(g_71, sym_Specification_1))
    {
      h_71 = ATgetArgument(g_71, 0);
      b_71 :
      if(((ATgetType(h_71) == AT_LIST) && ((ATermList) h_71 != ATempty)))
        {
          i_71 = ATgetFirst((ATermList) h_71);
          k_71 = (ATerm) ATgetNext((ATermList) h_71);
          c_71 :
          if(match_cons(i_71, sym_Signature_1))
            {
              j_71 = ATgetArgument(i_71, 0);
              d_71 :
              if(((ATgetType(k_71) == AT_LIST) && ((ATermList) k_71 != ATempty)))
                {
                  l_71 = ATgetFirst((ATermList) k_71);
                  n_71 = (ATerm) ATgetNext((ATermList) k_71);
                  e_71 :
                  if(match_cons(l_71, sym_Strategies_1))
                    {
                      m_71 = ATgetArgument(l_71, 0);
                      f_71 :
                      if(((ATermList) n_71 == ATempty))
                        {
                          {
                            ATerm q_71 = NULL,r_71 = NULL,y_71 = NULL;
                            ATerm c_29;
                            c_29 = t;
                            {
                              ATerm s_71 = NULL;
                              t = not_null(m_71);
                              {
                                ATerm x_71 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  s_71 = t;
                                  {
                                    if(((q_71 != NULL) && (q_71 != s_71)))
                                      _fail(s_71);
                                    else
                                      q_71 = s_71;
                                    {
                                      t = term_b_8;
                                      {
                                        ATerm d_29 = t;
                                        int e_29 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm a_3 (ATerm t)
                                              {
                                                ATerm t_71 = NULL;
                                                ATerm u_71 = NULL,w_71 = NULL;
                                                ATerm v_71 = NULL;
                                                v_71 = t;
                                                if(((u_71 != NULL) && (u_71 != v_71)))
                                                  _fail(v_71);
                                                else
                                                  u_71 = v_71;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_f_29, not_null(u_71));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      w_71 = t;
                                                      if(((t_71 != NULL) && (t_71 != w_71)))
                                                        _fail(w_71);
                                                      else
                                                        t_71 = w_71;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(t_71));
                                                return(t);
                                              }
                                              t = map_1(t, a_3);
                                            }
                                            LocalPopChoice(e_29);
                                          }
                                        else
                                          {
                                            t = d_29;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          x_71 = t;
                                          if(((r_71 != NULL) && (r_71 != x_71)))
                                            _fail(x_71);
                                          else
                                            r_71 = x_71;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = c_29;
                            {
                              ATerm z_71 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_71)), not_null(q_71)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_29), (ATerm) ATmakeAppl(sym_Signature_1, not_null(j_71))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_29, (ATerm) ATinsert(ATempty, term_p_29)))), not_null(r_71));
                              {
                                t = concat_0(t);
                                {
                                  z_71 = t;
                                  if(((y_71 != NULL) && (y_71 != z_71)))
                                    _fail(z_71);
                                  else
                                    y_71 = z_71;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(y_71));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
  i_72 = t;
  h_72 :
  if(((ATgetType(i_72) == AT_LIST) && ((ATermList) i_72 != ATempty)))
    {
      j_72 = ATgetFirst((ATermList) i_72);
      k_72 = (ATerm) ATgetNext((ATermList) i_72);
      t = not_null(k_72);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL;
  r_72 = t;
  q_72 :
  if(match_cons(r_72, sym__2))
    {
      s_72 = ATgetArgument(r_72, 0);
      t_72 = ATgetArgument(r_72, 1);
      {
        ATerm r_29;
        r_29 = t;
        {
          ATerm w_72 = NULL;
          ATerm x_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_72), not_null(t_72));
          {
            ATerm s_29 = t;
            int t_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(t_29);
              }
            else
              {
                t = s_29;
                t = (ATerm) ATempty;
              }
            {
              x_72 = t;
              if(((w_72 != NULL) && (w_72 != x_72)))
                _fail(x_72);
              else
                w_72 = x_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_72), not_null(t_72), not_null(w_72));
            t = table_put_0(t);
          }
        }
        t = r_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
  ATerm u_29;
  u_29 = t;
  {
    ATerm h_73 = NULL;
    ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL;
    t = d_86(t);
    {
      h_73 = t;
      {
        if(((f_73 != NULL) && (f_73 != h_73)))
          _fail(h_73);
        else
          f_73 = h_73;
        {
          ATerm v_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_73), term_x_29);
              t = table_get_0(t);
              LocalPopChoice(w_29);
            }
          else
            {
              t = v_29;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            k_73 = t;
            d_73 :
            if(((ATgetType(k_73) == AT_LIST) && ((ATermList) k_73 != ATempty)))
              {
                l_73 = ATgetFirst((ATermList) k_73);
                m_73 = (ATerm) ATgetNext((ATermList) k_73);
                {
                  if(((g_73 != NULL) && (g_73 != l_73)))
                    _fail(l_73);
                  else
                    g_73 = l_73;
                  {
                    if(((e_73 != NULL) && (e_73 != m_73)))
                      _fail(m_73);
                    else
                      e_73 = m_73;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(f_73), term_x_29, not_null(e_73));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_73);
                          {
                            ATerm b_3 (ATerm t)
                            {
                              ATerm n_73 = NULL;
                              n_73 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_73), not_null(n_73));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, b_3);
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
  }
  t = u_29;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm w_108 (ATerm), ATerm x_108 (ATerm))
{
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_108(t);
      t = x_108(t);
      LocalPopChoice(z_29);
    }
  else
    {
      t = y_29;
      {
        t = x_108(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_86 (ATerm))
{
  ATerm u_73 = NULL;
  ATerm a_30;
  a_30 = t;
  {
    ATerm v_73 = NULL;
    ATerm w_73 = NULL;
    t = c_86(t);
    {
      v_73 = t;
      {
        if(((u_73 != NULL) && (u_73 != v_73)))
          _fail(v_73);
        else
          u_73 = v_73;
        {
          ATerm x_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_73), term_x_29);
          {
            ATerm b_30 = t;
            int c_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_30);
              }
            else
              {
                t = b_30;
                t = (ATerm) ATempty;
              }
            {
              x_73 = t;
              if(((w_73 != NULL) && (w_73 != x_73)))
                _fail(x_73);
              else
                w_73 = x_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_73), term_x_29, (ATerm) ATinsert(CheckATermList(not_null(w_73)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = a_30;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm e_86 (ATerm), ATerm f_86 (ATerm))
{
  t = begin_scope_1(t, e_86);
  {
    ATerm c_3 (ATerm t)
    {
      t = end_scope_1(t, e_86);
      return(t);
    }
    t = restore_always_2(t, f_86, c_3);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  f_74 = t;
  e_74 :
  if(match_cons(f_74, sym__2))
    {
      g_74 = ATgetArgument(f_74, 0);
      h_74 = ATgetArgument(f_74, 1);
      {
        ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL;
        ATerm d_30;
        d_30 = t;
        {
          ATerm n_74 = NULL;
          ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
          t = g_86(t);
          {
            n_74 = t;
            {
              if(((k_74 != NULL) && (k_74 != n_74)))
                _fail(n_74);
              else
                k_74 = n_74;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_74), not_null(g_74), not_null(h_74));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_30 = t;
                    int f_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_74), term_x_29);
                        t = table_get_0(t);
                        LocalPopChoice(f_30);
                      }
                    else
                      {
                        t = e_30;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_74 = t;
                      d_74 :
                      if(((ATgetType(o_74) == AT_LIST) && ((ATermList) o_74 != ATempty)))
                        {
                          p_74 = ATgetFirst((ATermList) o_74);
                          q_74 = (ATerm) ATgetNext((ATermList) o_74);
                          {
                            if(((l_74 != NULL) && (l_74 != p_74)))
                              _fail(p_74);
                            else
                              l_74 = p_74;
                            {
                              if(((m_74 != NULL) && (m_74 != q_74)))
                                _fail(q_74);
                              else
                                m_74 = q_74;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_74), term_x_29, (ATerm) ATinsert(CheckATermList(not_null(m_74)), (ATerm) ATinsert(CheckATermList(not_null(l_74)), not_null(g_74))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
            }
          }
        }
        t = d_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_term_caching_0 (ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL;
  ATerm g_30;
  g_30 = t;
  {
    ATerm y_74 = NULL;
    ATerm z_74 = NULL;
    t = term_i_30;
    {
      y_74 = t;
      {
        if(((w_74 != NULL) && (w_74 != y_74)))
          _fail(y_74);
        else
          w_74 = y_74;
        {
          t = term_q_16;
          {
            z_74 = t;
            if(((x_74 != NULL) && (x_74 != z_74)))
              _fail(z_74);
            else
              x_74 = z_74;
          }
        }
      }
    }
  }
  t = g_30;
  {
    ATerm j_30;
    j_30 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_74)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_30, not_null(x_74)));
      {
        ATerm d_3 (ATerm t)
        {
          t = term_w_13;
          return(t);
        }
        t = assert_1(t, d_3);
      }
    }
    t = j_30;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm f_75 (ATerm t)
    {
      ATerm e_3 (ATerm t)
      {
        t = term_e_11;
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        ATerm g_3 (ATerm t)
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
              {
                ATerm n_30 = t;
                int o_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    LocalPopChoice(o_30);
                  }
                else
                  {
                    t = n_30;
                    {
                      ATerm p_30 = t;
                      int q_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          LocalPopChoice(q_30);
                        }
                      else
                        {
                          t = p_30;
                          t = TranslateStrat_0(t);
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_1(t, g_3);
        {
          t = _all(t, f_75);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, e_3, f_3);
      return(t);
    }
    t = f_75(t);
    {
      ATerm h_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          ATerm e_75 = NULL;
          e_75 = t;
          d_75 :
          if(match_cons(e_75, sym_InitCachedTerms_0))
            {
              t = init_cached_terms_0(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = oncetd_1(t, i_3);
        return(t);
      }
      t = try_1(t, h_3);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_75 = NULL;
  ATerm r_30;
  r_30 = t;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm k_75 = NULL,l_75 = NULL;
      k_75 = t;
      i_75 :
      if(match_cons(k_75, sym_Program_1))
        {
          l_75 = ATgetArgument(k_75, 0);
          if(((j_75 != NULL) && (j_75 != l_75)))
            _fail(l_75);
          else
            j_75 = l_75;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_28, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_30), not_null(j_75)), term_s_30));
      {
        t = printnl_0(t);
        {
          t = term_m_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_30;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_28, (ATerm) ATinsert(ATempty, term_u_30));
  {
    t = printnl_0(t);
    {
      t = term_m_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_75 = NULL;
  o_75 = t;
  t = SSL_TicksToSeconds(not_null(o_75));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL;
  t_75 = t;
  s_75 :
  if(match_cons(t_75, sym__2))
    {
      u_75 = ATgetArgument(t_75, 0);
      v_75 = ATgetArgument(t_75, 1);
      {
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_75), not_null(v_75));
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
            t = SSL_addr(not_null(u_75), not_null(v_75));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_95 (ATerm), ATerm w_95 (ATerm))
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_95(t);
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      {
        ATerm c_76 = NULL,d_76 = NULL,e_76 = NULL;
        c_76 = t;
        b_76 :
        if(((ATgetType(c_76) == AT_LIST) && ((ATermList) c_76 != ATempty)))
          {
            d_76 = ATgetFirst((ATermList) c_76);
            e_76 = (ATerm) ATgetNext((ATermList) c_76);
            {
              ATerm h_76 = NULL;
              ATerm i_76 = NULL;
              t = not_null(e_76);
              {
                t = foldr_2(t, v_95, w_95);
                {
                  i_76 = t;
                  if(((h_76 != NULL) && (h_76 != i_76)))
                    _fail(i_76);
                  else
                    h_76 = i_76;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_76), not_null(h_76));
                t = w_95(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm j_97 (ATerm), ATerm k_97 (ATerm))
{
  ATerm p_76 = NULL;
  ATerm s_76 = NULL;
  p_76 = t;
  {
    ATerm t_76 = NULL;
    ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
    t = not_null(p_76);
    {
      t_76 = t;
      {
        t = SSL_explode_term(not_null(t_76));
        {
          v_76 = t;
          o_76 :
          if(match_cons(v_76, sym__2))
            {
              w_76 = ATgetArgument(v_76, 0);
              x_76 = ATgetArgument(v_76, 1);
              if(((s_76 != NULL) && (s_76 != x_76)))
                _fail(x_76);
              else
                s_76 = x_76;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_76);
      t = foldr_2(t, j_97, k_97);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm k_3 (ATerm t)
    {
      t = term_f_17;
      return(t);
    }
    t = crush_2(t, k_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL;
  ATerm l_3 (ATerm t)
  {
    ATerm o_77 = NULL;
    ATerm m_3 (ATerm t)
    {
      ATerm z_30 = t;
      if((PushChoice() == 0))
        {
          ATerm n_3 (ATerm t)
          {
            ATerm j_77 = NULL;
            j_77 = t;
            b_77 :
            if(!(match_cons(j_77, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_30;
        }
      return(t);
    }
    t = _2(t, m_3, _id);
    {
      ATerm o_3 (ATerm t)
      {
        ATerm p_3 (ATerm t)
        {
          ATerm k_77 = NULL,l_77 = NULL;
          k_77 = t;
          d_77 :
          if(match_cons(k_77, sym_Runtime_1))
            {
              l_77 = ATgetArgument(k_77, 0);
              if(((h_77 != NULL) && (h_77 != l_77)))
                _fail(l_77);
              else
                h_77 = l_77;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, p_3);
        return(t);
      }
      t = _2(t, o_3, _id);
      {
        ATerm q_3 (ATerm t)
        {
          ATerm r_3 (ATerm t)
          {
            ATerm m_77 = NULL,n_77 = NULL;
            m_77 = t;
            f_77 :
            if(match_cons(m_77, sym_Program_1))
              {
                n_77 = ATgetArgument(m_77, 0);
                if(((i_77 != NULL) && (i_77 != n_77)))
                  _fail(n_77);
                else
                  i_77 = n_77;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_3);
          return(t);
        }
        t = _2(t, q_3, _id);
        {
          ATerm p_77 = NULL;
          t = run_time_0(t);
          {
            p_77 = t;
            if(((o_77 != NULL) && (o_77 != p_77)))
              _fail(p_77);
            else
              o_77 = p_77;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_f_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_31), not_null(o_77)), term_a_31), not_null(i_77)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, l_3);
  {
    t = term_f_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL;
  v_77 = t;
  u_77 :
  if(match_cons(v_77, sym__2))
    {
      w_77 = ATgetArgument(v_77, 0);
      x_77 = ATgetArgument(v_77, 1);
      t = SSL_WriteToTextFile(not_null(w_77), not_null(x_77));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
  h_78 = t;
  g_78 :
  if(match_cons(h_78, sym__2))
    {
      i_78 = ATgetArgument(h_78, 0);
      j_78 = ATgetArgument(h_78, 1);
      {
        ATerm n_78 = NULL,p_78 = NULL;
        ATerm o_78 = NULL;
        t = SSLgetAnnotations(not_null(h_78));
        {
          o_78 = t;
          if(((n_78 != NULL) && (n_78 != o_78)))
            _fail(o_78);
          else
            n_78 = o_78;
        }
        {
          t = not_null(i_78);
          {
            ATerm r_78 = NULL;
            t = x_65(t);
            {
              p_78 = t;
              {
                t = not_null(j_78);
                {
                  ATerm v_78 = NULL;
                  t = y_65(t);
                  {
                    r_78 = t;
                    {
                      ATerm w_78 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_78), not_null(r_78)), not_null(n_78));
                      {
                        w_78 = t;
                        if(((v_78 != NULL) && (v_78 != w_78)))
                          _fail(w_78);
                        else
                          v_78 = w_78;
                      }
                      t = not_null(v_78);
                    }
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
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL;
  e_79 = t;
  d_79 :
  if(match_cons(e_79, sym__2))
    {
      f_79 = ATgetArgument(e_79, 0);
      g_79 = ATgetArgument(e_79, 1);
      t = SSL_WriteToBinaryFile(not_null(f_79), not_null(g_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm o_79 = NULL;
  ATerm c_31;
  c_31 = t;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm e_31 = t;
      int f_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_3 (ATerm t)
          {
            ATerm p_79 = NULL,q_79 = NULL;
            p_79 = t;
            l_79 :
            if(match_cons(p_79, sym_Output_1))
              {
                q_79 = ATgetArgument(p_79, 0);
                if(((o_79 != NULL) && (o_79 != q_79)))
                  _fail(q_79);
                else
                  o_79 = q_79;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_3);
          LocalPopChoice(f_31);
        }
      else
        {
          t = e_31;
          {
            ATerm r_79 = NULL;
            t = term_g_31;
            {
              r_79 = t;
              if(((o_79 != NULL) && (o_79 != r_79)))
                _fail(r_79);
              else
                o_79 = r_79;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_3, _id);
  }
  t = c_31;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm v_3 (ATerm t)
      {
        t = not_null(o_79);
        return(t);
      }
      t = split_2(t, v_3, _id);
      return(t);
    }
    t = _2(t, _id, u_3);
    {
      ATerm j_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_3 (ATerm t)
          {
            ATerm x_3 (ATerm t)
            {
              ATerm s_79 = NULL;
              s_79 = t;
              n_79 :
              if(!(match_cons(s_79, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_3);
            return(t);
          }
          t = _2(t, w_3, WriteToBinaryFile_0);
          LocalPopChoice(l_31);
        }
      else
        {
          t = j_31;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_91 (ATerm))
{
  ATerm y_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
  ATerm m_31;
  m_31 = t;
  t = dtime_0(t);
  t = m_31;
  {
    t = t_91(t);
    {
      ATerm n_31;
      n_31 = t;
      {
        ATerm z_79 = NULL;
        t = dtime_0(t);
        {
          z_79 = t;
          if(((y_79 != NULL) && (y_79 != z_79)))
            _fail(z_79);
          else
            y_79 = z_79;
        }
      }
      t = n_31;
      {
        a_80 = t;
        x_79 :
        if(match_cons(a_80, sym__2))
          {
            b_80 = ATgetArgument(a_80, 0);
            c_80 = ATgetArgument(a_80, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_80)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_79))), not_null(c_80));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm j_80 = NULL;
  j_80 = t;
  t = SSL_ReadFromFile(not_null(j_80));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_94 (ATerm), ATerm k_94 (ATerm))
{
  ATerm o_80 = NULL,q_80 = NULL;
  ATerm o_31;
  o_31 = t;
  {
    ATerm p_80 = NULL;
    t = j_94(t);
    {
      p_80 = t;
      if(((o_80 != NULL) && (o_80 != p_80)))
        _fail(p_80);
      else
        o_80 = p_80;
    }
  }
  t = o_31;
  {
    ATerm r_80 = NULL;
    t = k_94(t);
    {
      r_80 = t;
      if(((q_80 != NULL) && (q_80 != r_80)))
        _fail(r_80);
      else
        q_80 = r_80;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_80), not_null(q_80));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_80 = NULL;
  ATerm p_31;
  p_31 = t;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          ATerm y_80 = NULL,z_80 = NULL;
          y_80 = t;
          v_80 :
          if(match_cons(y_80, sym_Input_1))
            {
              z_80 = ATgetArgument(y_80, 0);
              if(((x_80 != NULL) && (x_80 != z_80)))
                _fail(z_80);
              else
                x_80 = z_80;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_3);
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        {
          ATerm a_81 = NULL;
          t = term_s_31;
          {
            a_81 = t;
            if(((x_80 != NULL) && (x_80 != a_81)))
              _fail(a_81);
            else
              x_80 = a_81;
          }
        }
      }
  }
  t = p_31;
  {
    ATerm z_3 (ATerm t)
    {
      t = not_null(x_80);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_81 = NULL;
  h_81 = t;
  g_81 :
  if(match_cons(h_81, sym_Version_0))
    {
      ATerm j_81 = NULL,l_81 = NULL;
      ATerm u_31;
      u_31 = t;
      {
        ATerm k_81 = NULL;
        t = SSLgetAnnotations(not_null(h_81));
        {
          k_81 = t;
          if(((j_81 != NULL) && (j_81 != k_81)))
            _fail(k_81);
          else
            j_81 = k_81;
        }
      }
      t = u_31;
      {
        ATerm m_81 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_81));
        {
          m_81 = t;
          if(((l_81 != NULL) && (l_81 != m_81)))
            _fail(m_81);
          else
            l_81 = m_81;
        }
        t = not_null(l_81);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        {
          ATerm x_31 = t;
          int y_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_31);
            }
          else
            {
              t = x_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_4);
  t = r_91(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_81 = NULL;
  r_81 = t;
  t = SSL_table_create(not_null(r_81));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_81 = NULL;
  v_81 = t;
  {
    ATerm z_31;
    z_31 = t;
    {
      t = term_a_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_32, term_b_32, not_null(v_81));
          t = table_put_0(t);
        }
      }
    }
    t = z_31;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
  a_82 = t;
  z_81 :
  if(match_cons(a_82, sym__2))
    {
      b_82 = ATgetArgument(a_82, 0);
      c_82 = ATgetArgument(a_82, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_6, not_null(b_82), not_null(c_82));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  l_82 = t;
  j_82 :
  if(match_string(l_82, "register-usage-info"))
    {
      t = register_usage_1(t, s_0);
    }
  else
    {
      if(((ATgetType(l_82) == AT_LIST) && ((ATermList) l_82 != ATempty)))
        {
          m_82 = ATgetFirst((ATermList) l_82);
          n_82 = (ATerm) ATgetNext((ATermList) l_82);
          k_82 :
          if(((ATgetType(n_82) == AT_LIST) && ((ATermList) n_82 != ATempty)))
            {
              o_82 = ATgetFirst((ATermList) n_82);
              p_82 = (ATerm) ATgetNext((ATermList) n_82);
              {
                ATerm v_82 = NULL;
                ATerm c_32;
                c_32 = t;
                {
                  t = not_null(m_82);
                  t = q_0(t);
                }
                t = c_32;
                {
                  ATerm w_82 = NULL;
                  t = not_null(o_82);
                  {
                    t = r_0(t);
                    {
                      w_82 = t;
                      if(((v_82 != NULL) && (v_82 != w_82)))
                        _fail(w_82);
                      else
                        v_82 = w_82;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_82)), not_null(v_82));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm o_83 = NULL;
        o_83 = t;
        a_83 :
        if(!(match_string(o_83, "-S")))
          {
            if(!(match_string(o_83, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_g_32;
        t = set_config_0(t);
        t = term_h_32;
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_i_32;
        return(t);
      }
      t = Option_3(t, b_4, c_4, g_4);
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              ATerm p_83 = NULL;
              p_83 = t;
              b_83 :
              if(!(match_string(p_83, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              t = term_m_32;
              t = set_config_0(t);
              t = term_n_32;
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              t = term_o_32;
              return(t);
            }
            t = Option_3(t, h_4, i_4, j_4);
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
            {
              ATerm q_32 = t;
              int s_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_4 (ATerm t)
                  {
                    ATerm q_83 = NULL;
                    q_83 = t;
                    c_83 :
                    if(!(match_string(q_83, "-v")))
                      {
                        if(!(match_string(q_83, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm l_4 (ATerm t)
                  {
                    t = term_u_32;
                    t = set_config_0(t);
                    t = term_v_32;
                    return(t);
                  }
                  ATerm m_4 (ATerm t)
                  {
                    t = term_w_32;
                    return(t);
                  }
                  t = Option_3(t, k_4, l_4, m_4);
                  LocalPopChoice(s_32);
                }
              else
                {
                  t = q_32;
                  {
                    ATerm x_32 = t;
                    int y_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_4 (ATerm t)
                        {
                          ATerm r_83 = NULL;
                          r_83 = t;
                          d_83 :
                          if(!(match_string(r_83, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm o_4 (ATerm t)
                        {
                          ATerm u_83 = NULL;
                          ATerm z_32;
                          z_32 = t;
                          {
                            ATerm s_83 = NULL;
                            ATerm t_83 = NULL;
                            t_83 = t;
                            if(((s_83 != NULL) && (s_83 != t_83)))
                              _fail(t_83);
                            else
                              s_83 = t_83;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_a_33, not_null(s_83));
                              t = set_config_0(t);
                            }
                          }
                          t = z_32;
                          {
                            ATerm v_83 = NULL;
                            v_83 = t;
                            if(((u_83 != NULL) && (u_83 != v_83)))
                              _fail(v_83);
                            else
                              u_83 = v_83;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(u_83));
                          }
                          return(t);
                        }
                        ATerm p_4 (ATerm t)
                        {
                          t = term_b_33;
                          return(t);
                        }
                        t = ArgOption_3(t, n_4, o_4, p_4);
                        LocalPopChoice(y_32);
                      }
                    else
                      {
                        t = x_32;
                        {
                          ATerm c_33 = t;
                          int d_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_4 (ATerm t)
                              {
                                ATerm w_83 = NULL;
                                w_83 = t;
                                g_83 :
                                if(!(match_string(w_83, "-i")))
                                  {
                                    if(!(match_string(w_83, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm r_4 (ATerm t)
                              {
                                ATerm z_83 = NULL;
                                ATerm e_33;
                                e_33 = t;
                                {
                                  ATerm x_83 = NULL;
                                  ATerm y_83 = NULL;
                                  y_83 = t;
                                  if(((x_83 != NULL) && (x_83 != y_83)))
                                    _fail(y_83);
                                  else
                                    x_83 = y_83;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_f_33, not_null(x_83));
                                    t = set_config_0(t);
                                  }
                                }
                                t = e_33;
                                {
                                  ATerm a_84 = NULL;
                                  a_84 = t;
                                  if(((z_83 != NULL) && (z_83 != a_84)))
                                    _fail(a_84);
                                  else
                                    z_83 = a_84;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_83));
                                }
                                return(t);
                              }
                              ATerm s_4 (ATerm t)
                              {
                                t = term_g_33;
                                return(t);
                              }
                              t = ArgOption_3(t, q_4, r_4, s_4);
                              LocalPopChoice(d_33);
                            }
                          else
                            {
                              t = c_33;
                              {
                                ATerm h_33 = t;
                                int i_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_4 (ATerm t)
                                    {
                                      ATerm b_84 = NULL;
                                      b_84 = t;
                                      j_83 :
                                      if(!(match_string(b_84, "-o")))
                                        {
                                          if(!(match_string(b_84, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm v_4 (ATerm t)
                                    {
                                      ATerm e_84 = NULL;
                                      ATerm j_33;
                                      j_33 = t;
                                      {
                                        ATerm c_84 = NULL;
                                        ATerm d_84 = NULL;
                                        d_84 = t;
                                        if(((c_84 != NULL) && (c_84 != d_84)))
                                          _fail(d_84);
                                        else
                                          c_84 = d_84;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_k_33, not_null(c_84));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = j_33;
                                      {
                                        ATerm f_84 = NULL;
                                        f_84 = t;
                                        if(((e_84 != NULL) && (e_84 != f_84)))
                                          _fail(f_84);
                                        else
                                          e_84 = f_84;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_84));
                                      }
                                      return(t);
                                    }
                                    ATerm w_4 (ATerm t)
                                    {
                                      t = term_l_33;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, u_4, v_4, w_4);
                                    LocalPopChoice(i_33);
                                  }
                                else
                                  {
                                    t = h_33;
                                    {
                                      ATerm m_33 = t;
                                      int q_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_4 (ATerm t)
                                          {
                                            ATerm g_84 = NULL;
                                            g_84 = t;
                                            m_83 :
                                            if(!(match_string(g_84, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_4 (ATerm t)
                                          {
                                            t = term_s_33;
                                            t = set_config_0(t);
                                            t = term_t_33;
                                            return(t);
                                          }
                                          ATerm z_4 (ATerm t)
                                          {
                                            t = term_u_33;
                                            return(t);
                                          }
                                          t = Option_3(t, x_4, y_4, z_4);
                                          LocalPopChoice(q_33);
                                        }
                                      else
                                        {
                                          t = m_33;
                                          {
                                            ATerm a_5 (ATerm t)
                                            {
                                              ATerm h_84 = NULL;
                                              h_84 = t;
                                              n_83 :
                                              if(!(match_string(h_84, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm b_5 (ATerm t)
                                            {
                                              t = term_w_33;
                                              t = set_config_0(t);
                                              t = term_x_33;
                                              return(t);
                                            }
                                            ATerm c_5 (ATerm t)
                                            {
                                              t = term_y_33;
                                              return(t);
                                            }
                                            t = Option_3(t, a_5, b_5, c_5);
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
  ATerm p_84 = NULL;
  p_84 = t;
  t = SSL_table_destroy(not_null(p_84));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_84 = NULL;
  ATerm g_85 (ATerm t)
  {
    t = SSL_exit(not_null(z_84));
    return(t);
  }
  ATerm h_85 (ATerm t)
  {
    ATerm c_85 = NULL,e_85 = NULL;
    ATerm z_33;
    z_33 = t;
    {
      ATerm d_85 = NULL;
      t = SSLgetAnnotations(not_null(z_84));
      {
        d_85 = t;
        if(((c_85 != NULL) && (c_85 != d_85)))
          _fail(d_85);
        else
          c_85 = d_85;
      }
    }
    t = z_33;
    {
      ATerm f_85 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_exit_0), not_null(c_85));
      {
        f_85 = t;
        if(((e_85 != NULL) && (e_85 != f_85)))
          _fail(f_85);
        else
          e_85 = f_85;
      }
      t = not_null(e_85);
    }
    return(t);
  }
  z_84 = t;
  w_84 :
  if(match_cons(z_84, sym_exit_0))
    {
      ATerm a_34 = t;
      int h_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_85(t);
          LocalPopChoice(h_36);
        }
      else
        {
          t = a_34;
          t = h_85(t);
        }
    }
  else
    {
      t = g_85(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm l_85 = NULL;
  l_85 = t;
  t = SSL_implode_string(not_null(l_85));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_101 (ATerm))
{
  ATerm o_85 (ATerm t)
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_85);
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        {
          t = Nil_0(t);
          t = r_101(t);
        }
      }
    return(t);
  }
  t = o_85(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
      {
        ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
        r_85 = t;
        q_85 :
        if(((ATgetType(r_85) == AT_LIST) && ((ATermList) r_85 != ATempty)))
          {
            s_85 = ATgetFirst((ATermList) r_85);
            t_85 = (ATerm) ATgetNext((ATermList) r_85);
            {
              t = not_null(s_85);
              {
                ATerm d_5 (ATerm t)
                {
                  t = not_null(t_85);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_5);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_85 = NULL;
  z_85 = t;
  t = SSL_explode_string(not_null(z_85));
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
ATerm long_description_1 (ATerm t, ATerm y_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_101 (ATerm))
{
  ATerm h_86 (ATerm t)
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        t = Cons_2(t, d_101, h_86);
      }
    return(t);
  }
  t = h_86(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
  r_86 = t;
  o_86 :
  if(((ATgetType(r_86) == AT_LIST) && ((ATermList) r_86 != ATempty)))
    {
      p_86 = ATgetFirst((ATermList) r_86);
      q_86 = (ATerm) ATgetNext((ATermList) r_86);
      {
        ATerm u_86 = NULL;
        t = not_null(q_86);
        {
          ATerm x_36;
          x_36 = t;
          {
            ATerm v_86 = NULL,x_86 = NULL,z_86 = NULL;
            ATerm a_37;
            a_37 = t;
            {
              ATerm w_86 = NULL;
              t = p_0(t);
              {
                w_86 = t;
                if(((v_86 != NULL) && (v_86 != w_86)))
                  _fail(w_86);
                else
                  v_86 = w_86;
              }
            }
            t = a_37;
            {
              ATerm y_86 = NULL;
              t = not_null(p_86);
              {
                t = o_0(t);
                {
                  y_86 = t;
                  if(((x_86 != NULL) && (x_86 != y_86)))
                    _fail(y_86);
                  else
                    x_86 = y_86;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_86)), not_null(x_86));
                {
                  z_86 = t;
                  if(((u_86 != NULL) && (u_86 != z_86)))
                    _fail(z_86);
                  else
                    u_86 = z_86;
                }
              }
            }
          }
          t = x_36;
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(u_86);
              return(t);
            }
            t = reverse_acc_2(t, o_0, e_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) r_86 == ATempty))
        {
          {
            t = term_y_24;
            t = p_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_78 (ATerm))
{
  ATerm k_87 = NULL,l_87 = NULL;
  k_87 = t;
  j_87 :
  if(match_cons(k_87, sym_Program_1))
    {
      l_87 = ATgetArgument(k_87, 0);
      {
        ATerm o_87 = NULL,q_87 = NULL;
        ATerm p_87 = NULL;
        t = SSLgetAnnotations(not_null(k_87));
        {
          p_87 = t;
          if(((o_87 != NULL) && (o_87 != p_87)))
            _fail(p_87);
          else
            o_87 = p_87;
        }
        {
          t = not_null(l_87);
          {
            ATerm s_87 = NULL;
            t = t_78(t);
            {
              q_87 = t;
              {
                ATerm t_87 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_87)), not_null(o_87));
                {
                  t_87 = t;
                  if(((s_87 != NULL) && (s_87 != t_87)))
                    _fail(t_87);
                  else
                    s_87 = t_87;
                }
                t = not_null(s_87);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm c_88 = NULL;
  ATerm j_5 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      ATerm d_88 = NULL;
      d_88 = t;
      if(((c_88 != NULL) && (c_88 != d_88)))
        _fail(d_88);
      else
        c_88 = d_88;
      return(t);
    }
    t = Program_1(t, k_5);
    return(t);
  }
  t = option_defined_1(t, j_5);
  {
    ATerm l_5 (ATerm t)
    {
      ATerm e_88 = NULL;
      ATerm f_88 = NULL;
      t = term_y_24;
      {
        ATerm n_5 (ATerm t)
        {
          t = not_null(c_88);
          return(t);
        }
        t = short_description_1(t, n_5);
        {
          t = concat_strings_0(t);
          {
            f_88 = t;
            if(((e_88 != NULL) && (e_88 != f_88)))
              _fail(f_88);
            else
              e_88 = f_88;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_28, (ATerm) ATinsert(ATempty, not_null(e_88)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_28, (ATerm) ATinsert(ATempty, term_b_37));
      {
        t = printnl_0(t);
        {
          t = term_e_37;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm g_88 = NULL;
                  g_88 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_88)), term_f_37));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_5);
                {
                  ATerm p_5 (ATerm t)
                  {
                    ATerm i_88 = NULL;
                    ATerm j_88 = NULL;
                    t = term_y_24;
                    {
                      ATerm s_5 (ATerm t)
                      {
                        t = not_null(c_88);
                        return(t);
                      }
                      t = long_description_1(t, s_5);
                      {
                        t = concat_strings_0(t);
                        {
                          j_88 = t;
                          if(((i_88 != NULL) && (i_88 != j_88)))
                            _fail(j_88);
                          else
                            i_88 = j_88;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_88)), term_g_37));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_5);
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
  ATerm q_88 = NULL,r_88 = NULL,s_88 = NULL;
  q_88 = t;
  p_88 :
  if(match_cons(q_88, sym__2))
    {
      r_88 = ATgetArgument(q_88, 0);
      s_88 = ATgetArgument(q_88, 1);
      {
        ATerm h_37;
        h_37 = t;
        t = SSL_printnl(not_null(r_88), not_null(s_88));
        t = h_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm b_89 = NULL,c_89 = NULL;
  b_89 = t;
  a_89 :
  if(match_cons(b_89, sym_Undefined_1))
    {
      c_89 = ATgetArgument(b_89, 0);
      {
        ATerm f_89 = NULL,h_89 = NULL;
        ATerm g_89 = NULL;
        t = SSLgetAnnotations(not_null(b_89));
        {
          g_89 = t;
          if(((f_89 != NULL) && (f_89 != g_89)))
            _fail(g_89);
          else
            f_89 = g_89;
        }
        {
          t = not_null(c_89);
          {
            ATerm j_89 = NULL;
            t = u_78(t);
            {
              h_89 = t;
              {
                ATerm k_89 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_89)), not_null(f_89));
                {
                  k_89 = t;
                  if(((j_89 != NULL) && (j_89 != k_89)))
                    _fail(k_89);
                  else
                    j_89 = k_89;
                }
                t = not_null(j_89);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_101 (ATerm))
{
  ATerm p_89 (ATerm t)
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_101, _id);
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        t = Cons_2(t, _id, p_89);
      }
    return(t);
  }
  t = p_89(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_90 (ATerm))
{
  t = fetch_1(t, w_90);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_89 = NULL;
  u_89 = t;
  t_89 :
  if(match_cons(u_89, sym_Help_0))
    {
      ATerm w_89 = NULL,e_90 = NULL;
      ATerm k_37;
      k_37 = t;
      {
        ATerm d_90 = NULL;
        t = SSLgetAnnotations(not_null(u_89));
        {
          d_90 = t;
          if(((w_89 != NULL) && (w_89 != d_90)))
            _fail(d_90);
          else
            w_89 = d_90;
        }
      }
      t = k_37;
      {
        ATerm f_90 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(w_89));
        {
          f_90 = t;
          if(((e_90 != NULL) && (e_90 != f_90)))
            _fail(f_90);
          else
            e_90 = f_90;
        }
        t = not_null(e_90);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_108 (ATerm))
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_108(t);
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
  n_90 = t;
  m_90 :
  if(match_cons(n_90, sym__2))
    {
      o_90 = ATgetArgument(n_90, 0);
      p_90 = ATgetArgument(n_90, 1);
      t = SSL_table_get(not_null(o_90), not_null(p_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL;
  x_90 = t;
  v_90 :
  if(match_cons(x_90, sym__3))
    {
      y_90 = ATgetArgument(x_90, 0);
      z_90 = ATgetArgument(x_90, 1);
      a_91 = ATgetArgument(x_90, 2);
      {
        ATerm n_37;
        n_37 = t;
        {
          ATerm j_91 = NULL;
          ATerm k_91 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_90), not_null(z_90));
          {
            ATerm o_37 = t;
            int p_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_37);
              }
            else
              {
                t = o_37;
                t = (ATerm) ATempty;
              }
            {
              k_91 = t;
              if(((j_91 != NULL) && (j_91 != k_91)))
                _fail(k_91);
              else
                j_91 = k_91;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_90), not_null(z_90), (ATerm) ATinsert(CheckATermList(not_null(j_91)), not_null(a_91)));
            t = table_put_0(t);
          }
        }
        t = n_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm o_91 = NULL;
  ATerm p_91 = NULL;
  t = term_y_24;
  {
    t = c_90(t);
    {
      p_91 = t;
      if(((o_91 != NULL) && (o_91 != p_91)))
        _fail(p_91);
      else
        o_91 = p_91;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_37, term_d_37, not_null(o_91));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
  x_91 = t;
  w_91 :
  if(match_string(x_91, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(x_91) == AT_LIST) && ((ATermList) x_91 != ATempty)))
        {
          y_91 = ATgetFirst((ATermList) x_91);
          z_91 = (ATerm) ATgetNext((ATermList) x_91);
          {
            ATerm c_92 = NULL;
            ATerm q_37;
            q_37 = t;
            {
              t = not_null(y_91);
              t = a_0(t);
            }
            t = q_37;
            {
              ATerm d_92 = NULL;
              t = term_y_24;
              {
                t = b_0(t);
                {
                  d_92 = t;
                  if(((c_92 != NULL) && (c_92 != d_92)))
                    _fail(d_92);
                  else
                    c_92 = d_92;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_91)), not_null(c_92));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm j_92 = NULL;
    j_92 = t;
    i_92 :
    if(!(match_string(j_92, "--help")))
      {
        if(!(match_string(j_92, "-h")))
          {
            if(!(match_string(j_92, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_r_37;
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_s_37;
    return(t);
  }
  t = Option_3(t, u_5, v_5, z_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL;
  m_92 = t;
  l_92 :
  if(((ATgetType(m_92) == AT_LIST) && ((ATermList) m_92 != ATempty)))
    {
      n_92 = ATgetFirst((ATermList) m_92);
      o_92 = (ATerm) ATgetNext((ATermList) m_92);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_92)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_92)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_84 (ATerm), ATerm y_84 (ATerm))
{
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL;
  y_92 = t;
  x_92 :
  if(((ATgetType(y_92) == AT_LIST) && ((ATermList) y_92 != ATempty)))
    {
      z_92 = ATgetFirst((ATermList) y_92);
      a_93 = (ATerm) ATgetNext((ATermList) y_92);
      {
        ATerm e_93 = NULL,g_93 = NULL;
        ATerm f_93 = NULL;
        t = SSLgetAnnotations(not_null(y_92));
        {
          f_93 = t;
          if(((e_93 != NULL) && (e_93 != f_93)))
            _fail(f_93);
          else
            e_93 = f_93;
        }
        {
          t = not_null(z_92);
          {
            ATerm l_93 = NULL;
            t = x_84(t);
            {
              g_93 = t;
              {
                t = not_null(a_93);
                {
                  ATerm n_93 = NULL;
                  t = y_84(t);
                  {
                    l_93 = t;
                    {
                      ATerm o_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_93)), not_null(g_93)), not_null(e_93));
                      {
                        o_93 = t;
                        if(((n_93 != NULL) && (n_93 != o_93)))
                          _fail(o_93);
                        else
                          n_93 = o_93;
                      }
                      t = not_null(n_93);
                    }
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
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm z_93 = NULL;
  z_93 = t;
  y_93 :
  if(((ATermList) z_93 == ATempty))
    {
      {
        ATerm b_94 = NULL,d_94 = NULL;
        ATerm t_37;
        t_37 = t;
        {
          ATerm c_94 = NULL;
          t = SSLgetAnnotations(not_null(z_93));
          {
            c_94 = t;
            if(((b_94 != NULL) && (b_94 != c_94)))
              _fail(c_94);
            else
              b_94 = c_94;
          }
        }
        t = t_37;
        {
          ATerm e_94 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_94));
          {
            e_94 = t;
            if(((d_94 != NULL) && (d_94 != e_94)))
              _fail(e_94);
            else
              d_94 = e_94;
          }
          t = not_null(d_94);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm u_37;
  u_37 = t;
  {
    ATerm f_6 (ATerm t)
    {
      t = term_v_37;
      t = a_90(t);
      return(t);
    }
    t = try_1(t, f_6);
  }
  t = u_37;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm l_94 = NULL;
      l_94 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_94));
      return(t);
    }
    ATerm h_6 (ATerm t)
    {
      ATerm w_37 = t;
      int x_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_37 = t;
          int f_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_38);
            }
          else
            {
              t = y_37;
              {
                t = a_90(t);
                t = Cons_2(t, _id, h_6);
              }
            }
          LocalPopChoice(x_37);
        }
      else
        {
          t = w_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_6, h_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL;
  ATerm g_38;
  g_38 = t;
  {
    ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL;
    u_94 = t;
    q_94 :
    if(match_cons(u_94, sym__3))
      {
        v_94 = ATgetArgument(u_94, 0);
        w_94 = ATgetArgument(u_94, 1);
        x_94 = ATgetArgument(u_94, 2);
        {
          if(((r_94 != NULL) && (r_94 != v_94)))
            _fail(v_94);
          else
            r_94 = v_94;
          {
            if(((s_94 != NULL) && (s_94 != w_94)))
              _fail(w_94);
            else
              s_94 = w_94;
            {
              if(((t_94 != NULL) && (t_94 != x_94)))
                _fail(x_94);
              else
                t_94 = x_94;
              t = SSL_table_put(not_null(r_94), not_null(s_94), not_null(t_94));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_38;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm a_95 = NULL;
  ATerm s_38;
  s_38 = t;
  {
    t = term_t_38;
    t = table_put_0(t);
  }
  t = s_38;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm u_38 = t;
      int v_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_89(t);
          LocalPopChoice(v_38);
        }
      else
        {
          t = u_38;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_6);
    {
      ATerm o_6 (ATerm t)
      {
        ATerm w_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_f_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_38);
          }
        else
          {
            t = w_38;
            {
              ATerm p_6 (ATerm t)
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm b_95 = NULL;
                  b_95 = t;
                  if(((a_95 != NULL) && (a_95 != b_95)))
                    _fail(b_95);
                  else
                    a_95 = b_95;
                  return(t);
                }
                t = Undefined_1(t, q_6);
                return(t);
              }
              t = option_defined_1(t, p_6);
              {
                ATerm y_38;
                y_38 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_95)), term_z_38));
                  t = printnl_0(t);
                }
                t = y_38;
                {
                  t = system_usage_0(t);
                  {
                    t = term_m_17;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_6);
      {
        ATerm a_39;
        a_39 = t;
        {
          t = term_c_37;
          t = table_destroy_0(t);
        }
        t = a_39;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm i_91 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_91(t);
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, r_6);
  {
    t = store_options_0(t);
    {
      ATerm d_39 = t;
      int e_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, i_91);
          LocalPopChoice(e_39);
        }
      else
        {
          t = d_39;
          {
            ATerm f_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, g_91);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(g_39);
              }
            else
              {
                t = f_39;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_91 (ATerm), ATerm c_91 (ATerm))
{
  t = iowrap_3(t, b_91, c_91, default_usage_0);
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
