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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
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
Symbol sym_SRDef_3;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
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
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
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
ATerm term_d_40;
ATerm term_v_39;
ATerm term_k_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_w_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_v_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_q_32;
ATerm term_h_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_y_31;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_x_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_a_28;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_t_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_o_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_p_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_d_11;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_l_7;
ATerm term_j_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_p_6;
ATerm term_i_6;
ATerm term_f_6;
void init_constant_terms (void)
{
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_6);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_e_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Id_1, term_y_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_8, (ATerm) ATempty);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Id_1, term_c_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_8, (ATerm) ATempty);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_8, term_o_8);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Id_1, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Id_1, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Id_1, term_i_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Id_1, term_n_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_IntConst_1, term_u_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Id_1, term_z_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Id_1, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Id_1, term_f_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Id_1, term_l_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_s_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Id_1, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_14, term_g_16);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Id_1, term_k_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Id_1, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Id_1, term_p_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Id_1, term_u_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Id_1, term_z_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Id_1, term_p_10);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Id_1, term_h_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Id_1, term_m_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Id_1, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_18, (ATerm) ATempty);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_s_18, term_o_8);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Id_1, term_u_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Id_1, term_y_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Id_1, term_d_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Id_1, term_i_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Id_1, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Id_1, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_20, (ATerm) ATempty);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_20, term_o_8);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Id_1, term_e_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Id_1, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_20, (ATerm) ATempty);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_20, term_o_8);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Id_1, term_u_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_21, (ATerm) ATempty);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_d_21, term_o_8);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_n_18);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Id_1, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_21, (ATerm) ATempty);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_j_21, term_v_14);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Id_1, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_21, (ATerm) ATempty);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_18, term_n_18);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Id_1, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_21, (ATerm) ATempty);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_t_21, term_v_14);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_22, (ATerm) ATempty);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Id_1, term_g_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_j_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Id_1, term_l_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_d_18);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Return_1, term_n_18);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Id_1, term_o_24);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_n_18, term_o_8);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_n_8, term_i_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Id_1, term_n_25);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Id_1, term_p_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_8, (ATerm) ATempty);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_r_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Id_1, term_t_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_26, (ATerm) ATempty);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_27, (ATerm) ATempty);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Some_1, term_i_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_j_8, term_j_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Op_2, term_u_28, (ATerm) ATempty);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_h_17);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_17);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__2, term_s_33, term_k_25);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_y_33, term_k_25);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_k_25);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym__2, term_a_36, term_b_36);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_n_37, term_k_25);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym__3, term_a_36, term_b_36, (ATerm) ATempty);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm p_93 (ATerm), ATerm q_93 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm y_112 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm p_114 (ATerm), ATerm q_114 (ATerm));
ATerm repeat_1 (ATerm, ATerm s_114 (ATerm));
ATerm new_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm j_111 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm i_111 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm d_1 (ATerm), ATerm g_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm s_101 (ATerm));
ATerm Var_1 (ATerm, ATerm z_0 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm h_83 (ATerm));
ATerm Real_1 (ATerm, ATerm y_0 (ATerm));
ATerm Str_1 (ATerm, ATerm x_0 (ATerm));
ATerm Int_1 (ATerm, ATerm w_0 (ATerm));
ATerm Anno_2 (ATerm, ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm t_85 (ATerm), ATerm u_85 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm j_79 (ATerm));
ATerm FunCall_2 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm TranslateStrat_0 (ATerm);
ATerm PlainBody_0 (ATerm);
ATerm Escape_linefeed_0 (ATerm);
ATerm Escape_backslash_0 (ATerm);
ATerm Escape_double_quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_chars_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm TracedBody_0 (ATerm);
ATerm TraceAllFuns_0 (ATerm);
ATerm TraceFun_0 (ATerm);
ATerm TranslateDef_0 (ATerm);
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm k_98 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm k_89 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm t_0 (ATerm));
ATerm escape_1 (ATerm, ATerm n_98 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm));
ATerm length_0 (ATerm);
ATerm Arity_0 (ATerm);
ATerm DeclareConstructor_0 (ATerm);
ATerm TranslateSig_0 (ATerm);
ATerm TranslateType_0 (ATerm);
ATerm TranslateVarDec_0 (ATerm);
ATerm SDefToDeclaration_0 (ATerm);
ATerm TranslateSpec_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm f_89 (ATerm));
ATerm restore_always_2 (ATerm, ATerm z_115 (ATerm), ATerm a_116 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm e_89 (ATerm));
ATerm scope_2 (ATerm, ATerm g_89 (ATerm), ATerm h_89 (ATerm));
ATerm assert_1 (ATerm, ATerm i_89 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_107 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_97 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm c_95 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm q_68 (ATerm), ATerm r_68 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_96 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_99 (ATerm), ATerm r_99 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_101 (ATerm), ATerm d_101 (ATerm));
ATerm crush_2 (ATerm, ATerm u_102 (ATerm), ATerm v_102 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_95 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_96 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_93 (ATerm));
ATerm map_1 (ATerm, ATerm s_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_93 (ATerm));
ATerm Program_1 (ATerm, ATerm r_81 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm l_97 (ATerm));
ATerm Undefined_1 (ATerm, ATerm s_81 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_107 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_94 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_115 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_93 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_87 (ATerm), ATerm a_88 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm s_95 (ATerm));
ATerm iowrap_4 (ATerm, ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm iowrap_3 (ATerm, ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm));
ATerm iowrap_2 (ATerm, ATerm y_95 (ATerm), ATerm z_95 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm post_extend_config_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,j_5 = NULL;
  u_4 = t;
  t_4 :
  if(match_cons(u_4, sym__2))
    {
      v_4 = ATgetArgument(u_4, 0);
      j_5 = ATgetArgument(u_4, 1);
      {
        ATerm w_5 = NULL;
        ATerm x_5 = NULL,c_6 = NULL;
        ATerm y_5 = NULL;
        t = not_null(v_4);
        {
          ATerm d_6 = t;
          int e_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(e_6);
            }
          else
            {
              t = d_6;
              t = (ATerm) ATempty;
            }
          {
            y_5 = t;
            if(((x_5 != NULL) && (x_5 != y_5)))
              _fail(y_5);
            else
              x_5 = y_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(j_5));
          {
            t = conc_0(t);
            {
              c_6 = t;
              if(((w_5 != NULL) && (w_5 != c_6)))
                _fail(c_6);
              else
                w_5 = c_6;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_6, not_null(v_4), not_null(w_5));
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
ATerm Option_2 (ATerm t, ATerm p_93 (ATerm), ATerm q_93 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = term_i_6;
    return(t);
  }
  t = Option_3(t, p_93, q_93, c_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_0 (ATerm t)
      {
        ATerm m_6 = NULL;
        m_6 = t;
        g_6 :
        if(!(match_string(m_6, "--trace-all   trace all strategies")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_0 (ATerm t)
      {
        t = term_p_6;
        {
          ATerm n_0 (ATerm t)
          {
            t = term_v_6;
            return(t);
          }
          t = debug_1(t, n_0);
          {
            ATerm w_6;
            w_6 = t;
            {
              t = term_f_7;
              {
                ATerm a_1 (ATerm t)
                {
                  t = term_g_7;
                  return(t);
                }
                t = assert_1(t, a_1);
              }
            }
            t = w_6;
          }
        }
        return(t);
      }
      t = Option_2(t, d_0, m_0);
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm n_6 = NULL;
              n_6 = t;
              h_6 :
              if(!(match_string(n_6, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_1 (ATerm t)
            {
              ATerm o_6 = NULL;
              o_6 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(o_6)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_7, not_null(o_6)));
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = term_l_7;
                    return(t);
                  }
                  t = assert_1(t, f_1);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(o_6));
              }
              return(t);
            }
            ATerm e_1 (ATerm t)
            {
              t = term_o_7;
              return(t);
            }
            t = ArgOption_3(t, b_1, c_1, e_1);
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            {
              ATerm h_1 (ATerm t)
              {
                ATerm q_6 = NULL;
                q_6 = t;
                j_6 :
                if(!(match_string(q_6, "--C-include")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_1 (ATerm t)
              {
                ATerm t_6 = NULL;
                ATerm p_7;
                p_7 = t;
                {
                  ATerm r_6 = NULL;
                  ATerm s_6 = NULL;
                  s_6 = t;
                  if(((r_6 != NULL) && (r_6 != s_6)))
                    _fail(s_6);
                  else
                    r_6 = s_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATempty, not_null(r_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = p_7;
                {
                  ATerm u_6 = NULL;
                  u_6 = t;
                  if(((t_6 != NULL) && (t_6 != u_6)))
                    _fail(u_6);
                  else
                    t_6 = u_6;
                  t = (ATerm) ATmakeAppl(sym_Include_1, not_null(t_6));
                }
                return(t);
              }
              ATerm j_1 (ATerm t)
              {
                t = term_w_7;
                return(t);
              }
              t = ArgOption_3(t, h_1, i_1, j_1);
            }
          }
      }
    }
  return(t);
}
ATerm InitTermId_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
  a_7 = t;
  z_6 :
  if(match_cons(a_7, sym__3))
    {
      b_7 = ATgetArgument(a_7, 0);
      c_7 = ATgetArgument(a_7, 1);
      d_7 = ATgetArgument(a_7, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_7))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_7)), term_x_7, not_null(d_7))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm k_7 = NULL;
  ATerm m_7 = NULL;
  k_7 = t;
  {
    ATerm n_7 = NULL;
    t = not_null(k_7);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          t = reverse_0(t);
          {
            n_7 = t;
            if(((m_7 != NULL) && (m_7 != n_7)))
              _fail(n_7);
            else
              m_7 = n_7;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_b_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_j_8, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_b_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(m_7)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym__3))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      v_7 = ATgetArgument(s_7, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_7)), term_o_8)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm d_8 = NULL;
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      t = (ATerm) ATempty;
    }
  {
    ATerm e_8 = NULL,g_8 = NULL,i_8 = NULL;
    ATerm r_8;
    r_8 = t;
    {
      ATerm f_8 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        f_8 = t;
        if(((e_8 != NULL) && (e_8 != f_8)))
          _fail(f_8);
        else
          e_8 = f_8;
      }
    }
    t = r_8;
    {
      ATerm h_8 = NULL;
      t = InitTermIds_0(t);
      {
        h_8 = t;
        if(((g_8 != NULL) && (g_8 != h_8)))
          _fail(h_8);
        else
          g_8 = h_8;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), (ATerm) ATinsert(ATempty, not_null(g_8)));
        {
          t = conc_0(t);
          {
            i_8 = t;
            if(((d_8 != NULL) && (d_8 != i_8)))
              _fail(i_8);
            else
              d_8 = i_8;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(d_8));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm y_112 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_112(t);
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = _one(t, m_8);
      }
    return(t);
  }
  t = m_8(t);
  return(t);
}
ATerm Csimplify_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  ATerm x_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(y_9)), not_null(s_9));
    return(t);
  }
  ATerm y_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(y_9), not_null(z_9));
    return(t);
  }
  ATerm z_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(z_9));
    t = conc_0(t);
    return(t);
  }
  ATerm a_11 (ATerm t)
  {
    ATerm n_10 = NULL;
    ATerm o_10 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), not_null(b_10));
    {
      t = conc_0(t);
      {
        o_10 = t;
        if(((n_10 != NULL) && (n_10 != o_10)))
          _fail(o_10);
        else
          n_10 = o_10;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(n_10), not_null(c_10));
    return(t);
  }
  ATerm b_11 (ATerm t)
  {
    ATerm t_10 = NULL,v_10 = NULL;
    ATerm u_8;
    u_8 = t;
    {
      ATerm u_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), not_null(b_10));
      {
        t = conc_0(t);
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
      }
    }
    t = u_8;
    {
      ATerm w_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), not_null(d_10));
      {
        t = conc_0(t);
        {
          w_10 = t;
          if(((v_10 != NULL) && (v_10 != w_10)))
            _fail(w_10);
          else
            v_10 = w_10;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(t_10), not_null(v_10));
    }
    return(t);
  }
  x_9 = t;
  v_8 :
  if(match_cons(x_9, sym_IfElse_3))
    {
      y_9 = ATgetArgument(x_9, 0);
      z_9 = ATgetArgument(x_9, 1);
      s_9 = ATgetArgument(x_9, 2);
      w_8 :
      if(match_cons(s_9, sym_Compound_2))
        {
          t_9 = ATgetArgument(s_9, 0);
          u_9 = ATgetArgument(s_9, 1);
          x_8 :
          if(((ATermList) u_9 == ATempty))
            {
              y_8 :
              if(((ATermList) t_9 == ATempty))
                {
                  z_8 :
                  if(match_cons(z_9, sym_Compound_2))
                    {
                      a_10 = ATgetArgument(z_9, 0);
                      d_10 = ATgetArgument(z_9, 1);
                      a_9 :
                      if(((ATermList) d_10 == ATempty))
                        {
                          b_9 :
                          if(((ATermList) a_10 == ATempty))
                            {
                              {
                                ATerm e_10 = t;
                                int f_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = x_10(t);
                                    LocalPopChoice(f_10);
                                  }
                                else
                                  {
                                    t = e_10;
                                    t = y_10(t);
                                  }
                              }
                            }
                          else
                            {
                              t = y_10(t);
                            }
                        }
                      else
                        {
                          c_9 :
                          t = y_10(t);
                        }
                    }
                  else
                    {
                      t = y_10(t);
                    }
                }
              else
                {
                  d_9 :
                  if(match_cons(z_9, sym_Compound_2))
                    {
                      a_10 = ATgetArgument(z_9, 0);
                      d_10 = ATgetArgument(z_9, 1);
                      e_9 :
                      if(((ATermList) a_10 == ATempty))
                        {
                          f_9 :
                          if(((ATermList) d_10 == ATempty))
                            {
                              t = x_10(t);
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
              g_9 :
              h_9 :
              if(match_cons(z_9, sym_Compound_2))
                {
                  a_10 = ATgetArgument(z_9, 0);
                  d_10 = ATgetArgument(z_9, 1);
                  i_9 :
                  if(((ATermList) a_10 == ATempty))
                    {
                      j_9 :
                      if(((ATermList) d_10 == ATempty))
                        {
                          t = x_10(t);
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
          k_9 :
          if(match_cons(z_9, sym_Compound_2))
            {
              a_10 = ATgetArgument(z_9, 0);
              d_10 = ATgetArgument(z_9, 1);
              l_9 :
              if(((ATermList) a_10 == ATempty))
                {
                  m_9 :
                  if(((ATermList) d_10 == ATempty))
                    {
                      t = x_10(t);
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
      if(((ATgetType(x_9) == AT_LIST) && ((ATermList) x_9 != ATempty)))
        {
          y_9 = ATgetFirst((ATermList) x_9);
          z_9 = (ATerm) ATgetNext((ATermList) x_9);
          n_9 :
          if(match_cons(y_9, sym_Compound_2))
            {
              v_9 = ATgetArgument(y_9, 0);
              w_9 = ATgetArgument(y_9, 1);
              o_9 :
              if(((ATermList) v_9 == ATempty))
                {
                  t = z_10(t);
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
          if(match_cons(x_9, sym_Compound_2))
            {
              y_9 = ATgetArgument(x_9, 0);
              z_9 = ATgetArgument(x_9, 1);
              p_9 :
              if(((ATgetType(z_9) == AT_LIST) && ((ATermList) z_9 != ATempty)))
                {
                  a_10 = ATgetFirst((ATermList) z_9);
                  d_10 = (ATerm) ATgetNext((ATermList) z_9);
                  q_9 :
                  if(match_cons(a_10, sym_Compound_2))
                    {
                      b_10 = ATgetArgument(a_10, 0);
                      c_10 = ATgetArgument(a_10, 1);
                      r_9 :
                      if(((ATermList) d_10 == ATempty))
                        {
                          {
                            ATerm g_10 = t;
                            int h_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_11(t);
                                LocalPopChoice(h_10);
                              }
                            else
                              {
                                t = g_10;
                                t = b_11(t);
                              }
                          }
                        }
                      else
                        {
                          t = b_11(t);
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
ATerm repeat_2 (ATerm t, ATerm p_114 (ATerm), ATerm q_114 (ATerm))
{
  ATerm f_11 (ATerm t)
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_114(t);
        t = f_11(t);
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = q_114(t);
      }
    return(t);
  }
  t = f_11(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm s_114 (ATerm))
{
  t = repeat_2(t, s_114, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm j_111 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    t = bottomup_1(t, j_111);
    return(t);
  }
  t = _all(t, k_1);
  t = j_111(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      ATerm k_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          LocalPopChoice(l_10);
        }
      else
        {
          t = k_10;
          t = ConstructTerm_0(t);
        }
      return(t);
    }
    t = try_1(t, m_1);
    return(t);
  }
  t = bottomup_1(t, l_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm i_111 (ATerm))
{
  t = i_111(t);
  {
    ATerm n_1 (ATerm t)
    {
      t = topdown_1(t, i_111);
      return(t);
    }
    t = _all(t, n_1);
  }
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm h_11 = NULL;
  h_11 = t;
  t = SSL_real_to_string(not_null(h_11));
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym__2))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      {
        ATerm s_11 = NULL;
        ATerm t_11 = NULL;
        t = new_0(t);
        {
          t_11 = t;
          if(((s_11 != NULL) && (s_11 != t_11)))
            _fail(t_11);
          else
            s_11 = t_11;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_8, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_11)), term_o_8), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(p_11))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(o_11), (ATerm) ATmakeAppl(sym_Id_1, not_null(s_11)))));
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
  ATerm z_11 = NULL;
  z_11 = t;
  {
    ATerm b_12 = NULL,c_12 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_11));
    {
      ATerm o_1 (ATerm t)
      {
        t = term_m_10;
        return(t);
      }
      t = rewrite_1(t, o_1);
      {
        b_12 = t;
        x_11 :
        if(match_cons(b_12, sym_Defined_1))
          {
            c_12 = ATgetArgument(b_12, 0);
            y_11 :
            if(!(match_string(c_12, "p_0")))
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
    t = term_p_10;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  i_12 = t;
  g_12 :
  if(match_cons(i_12, sym__2))
    {
      j_12 = ATgetArgument(i_12, 0);
      l_12 = ATgetArgument(i_12, 1);
      h_12 :
      if(match_cons(j_12, sym_Var_1))
        {
          k_12 = ATgetArgument(j_12, 0);
          {
            ATerm o_12 = NULL;
            t = not_null(k_12);
            {
              t = Initialized_0(t);
              {
                o_12 = t;
                f_12 :
                if(!(match_string(o_12, "NULL")))
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_12)), not_null(l_12));
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
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  r_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      s_12 :
      if(((ATermList) u_12 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(v_12));
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
ATerm Cons_T_2 (ATerm t, ATerm d_1 (ATerm), ATerm g_1 (ATerm))
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  f_13 = t;
  d_13 :
  if(match_cons(f_13, sym__2))
    {
      g_13 = ATgetArgument(f_13, 0);
      j_13 = ATgetArgument(f_13, 1);
      e_13 :
      if(((ATgetType(g_13) == AT_LIST) && ((ATermList) g_13 != ATempty)))
        {
          h_13 = ATgetFirst((ATermList) g_13);
          i_13 = (ATerm) ATgetNext((ATermList) g_13);
          {
            ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
            ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(j_13));
            {
              t = d_1(t);
              {
                r_13 = t;
                c_13 :
                if(match_cons(r_13, sym__2))
                  {
                    s_13 = ATgetArgument(r_13, 0);
                    t_13 = ATgetArgument(r_13, 1);
                    {
                      ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
                      if(((p_13 != NULL) && (p_13 != s_13)))
                        _fail(s_13);
                      else
                        p_13 = s_13;
                      {
                        if(((n_13 != NULL) && (n_13 != t_13)))
                          _fail(t_13);
                        else
                          n_13 = t_13;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), not_null(n_13));
                          {
                            t = g_1(t);
                            {
                              u_13 = t;
                              b_13 :
                              if(match_cons(u_13, sym__2))
                                {
                                  v_13 = ATgetArgument(u_13, 0);
                                  w_13 = ATgetArgument(u_13, 1);
                                  {
                                    if(((q_13 != NULL) && (q_13 != v_13)))
                                      _fail(v_13);
                                    else
                                      q_13 = v_13;
                                    if(((o_13 != NULL) && (o_13 != w_13)))
                                      _fail(w_13);
                                    else
                                      o_13 = w_13;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_13)), not_null(p_13)), not_null(o_13));
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
ATerm thread_map_1 (ATerm t, ATerm s_101 (ATerm))
{
  ATerm a_14 (ATerm t)
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, s_101, a_14);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = a_14(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm z_0 (ATerm))
{
  ATerm k_14 = NULL,l_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_Var_1))
    {
      l_14 = ATgetArgument(k_14, 0);
      {
        ATerm s_10 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_14 = NULL,q_14 = NULL;
            ATerm p_14 = NULL;
            t = SSLgetAnnotations(not_null(k_14));
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
            {
              t = not_null(l_14);
              {
                ATerm s_14 = NULL;
                t = z_0(t);
                {
                  q_14 = t;
                  {
                    ATerm t_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_14)), not_null(o_14));
                    {
                      t_14 = t;
                      if(((s_14 != NULL) && (s_14 != t_14)))
                        _fail(t_14);
                      else
                        s_14 = t_14;
                    }
                    t = not_null(s_14);
                  }
                }
              }
            }
            LocalPopChoice(c_11);
          }
        else
          {
            t = s_10;
            {
              ATerm w_14 = NULL,y_14 = NULL;
              ATerm x_14 = NULL;
              t = SSLgetAnnotations(not_null(k_14));
              {
                x_14 = t;
                if(((w_14 != NULL) && (w_14 != x_14)))
                  _fail(x_14);
                else
                  w_14 = x_14;
              }
              {
                t = not_null(l_14);
                {
                  ATerm a_15 = NULL;
                  t = z_0(t);
                  {
                    y_14 = t;
                    {
                      ATerm b_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_14)), not_null(w_14));
                      {
                        b_15 = t;
                        if(((a_15 != NULL) && (a_15 != b_15)))
                          _fail(b_15);
                        else
                          a_15 = b_15;
                      }
                      t = not_null(a_15);
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
  ATerm r_15 = NULL;
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  r_15 = t;
  {
    ATerm w_15 = NULL;
    ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
    t = not_null(r_15);
    {
      w_15 = t;
      {
        t = SSL_explode_term(not_null(w_15));
        {
          y_15 = t;
          n_15 :
          if(match_cons(y_15, sym__2))
            {
              z_15 = ATgetArgument(y_15, 0);
              a_16 = ATgetArgument(y_15, 1);
              o_15 :
              if(match_string(z_15, ""))
                {
                  p_15 :
                  if(((ATgetType(a_16) == AT_LIST) && ((ATermList) a_16 != ATempty)))
                    {
                      b_16 = ATgetFirst((ATermList) a_16);
                      c_16 = (ATerm) ATgetNext((ATermList) a_16);
                      q_15 :
                      if(((ATgetType(c_16) == AT_LIST) && ((ATermList) c_16 != ATempty)))
                        {
                          d_16 = ATgetFirst((ATermList) c_16);
                          e_16 = (ATerm) ATgetNext((ATermList) c_16);
                          {
                            if(((t_15 != NULL) && (t_15 != b_16)))
                              _fail(b_16);
                            else
                              t_15 = b_16;
                            {
                              if(((v_15 != NULL) && (v_15 != d_16)))
                                _fail(d_16);
                              else
                                v_15 = d_16;
                              if(((u_15 != NULL) && (u_15 != e_16)))
                                _fail(e_16);
                              else
                                u_15 = e_16;
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
    t = not_null(v_15);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm l_16 = NULL;
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  t = term_x_6;
  {
    ATerm p_1 (ATerm t)
    {
      t = term_d_11;
      return(t);
    }
    t = rewrite_1(t, p_1);
    {
      m_16 = t;
      j_16 :
      if(match_cons(m_16, sym_Defined_2))
        {
          n_16 = ATgetArgument(m_16, 0);
          o_16 = ATgetArgument(m_16, 1);
          k_16 :
          if(match_string(n_16, "s_0"))
            {
              if(((l_16 != NULL) && (l_16 != o_16)))
                _fail(o_16);
              else
                l_16 = o_16;
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
  t = not_null(l_16);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm h_83 (ATerm))
{
  ATerm v_16 = NULL,w_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym_BuildDefault_1))
    {
      w_16 = ATgetArgument(v_16, 0);
      {
        ATerm z_16 = NULL,b_17 = NULL;
        ATerm a_17 = NULL;
        t = SSLgetAnnotations(not_null(v_16));
        {
          a_17 = t;
          if(((z_16 != NULL) && (z_16 != a_17)))
            _fail(a_17);
          else
            z_16 = a_17;
        }
        {
          t = not_null(w_16);
          {
            ATerm d_17 = NULL;
            t = h_83(t);
            {
              b_17 = t;
              {
                ATerm e_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(b_17)), not_null(z_16));
                {
                  e_17 = t;
                  if(((d_17 != NULL) && (d_17 != e_17)))
                    _fail(e_17);
                  else
                    d_17 = e_17;
                }
                t = not_null(d_17);
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
ATerm Real_1 (ATerm t, ATerm y_0 (ATerm))
{
  ATerm s_17 = NULL,t_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym_Real_1))
    {
      t_17 = ATgetArgument(s_17, 0);
      {
        ATerm e_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_17 = NULL,y_17 = NULL;
            ATerm x_17 = NULL;
            t = SSLgetAnnotations(not_null(s_17));
            {
              x_17 = t;
              if(((w_17 != NULL) && (w_17 != x_17)))
                _fail(x_17);
              else
                w_17 = x_17;
            }
            {
              t = not_null(t_17);
              {
                ATerm a_18 = NULL;
                t = y_0(t);
                {
                  y_17 = t;
                  {
                    ATerm b_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(y_17)), not_null(w_17));
                    {
                      b_18 = t;
                      if(((a_18 != NULL) && (a_18 != b_18)))
                        _fail(b_18);
                      else
                        a_18 = b_18;
                    }
                    t = not_null(a_18);
                  }
                }
              }
            }
            LocalPopChoice(g_11);
          }
        else
          {
            t = e_11;
            {
              ATerm e_18 = NULL,g_18 = NULL;
              ATerm f_18 = NULL;
              t = SSLgetAnnotations(not_null(s_17));
              {
                f_18 = t;
                if(((e_18 != NULL) && (e_18 != f_18)))
                  _fail(f_18);
                else
                  e_18 = f_18;
              }
              {
                t = not_null(t_17);
                {
                  ATerm i_18 = NULL;
                  t = y_0(t);
                  {
                    g_18 = t;
                    {
                      ATerm j_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(g_18)), not_null(e_18));
                      {
                        j_18 = t;
                        if(((i_18 != NULL) && (i_18 != j_18)))
                          _fail(j_18);
                        else
                          i_18 = j_18;
                      }
                      t = not_null(i_18);
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
ATerm Str_1 (ATerm t, ATerm x_0 (ATerm))
{
  ATerm b_19 = NULL,c_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym_Str_1))
    {
      c_19 = ATgetArgument(b_19, 0);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_19 = NULL,h_19 = NULL;
            ATerm g_19 = NULL;
            t = SSLgetAnnotations(not_null(b_19));
            {
              g_19 = t;
              if(((f_19 != NULL) && (f_19 != g_19)))
                _fail(g_19);
              else
                f_19 = g_19;
            }
            {
              t = not_null(c_19);
              {
                ATerm j_19 = NULL;
                t = x_0(t);
                {
                  h_19 = t;
                  {
                    ATerm k_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(h_19)), not_null(f_19));
                    {
                      k_19 = t;
                      if(((j_19 != NULL) && (j_19 != k_19)))
                        _fail(k_19);
                      else
                        j_19 = k_19;
                    }
                    t = not_null(j_19);
                  }
                }
              }
            }
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            {
              ATerm n_19 = NULL,p_19 = NULL;
              ATerm o_19 = NULL;
              t = SSLgetAnnotations(not_null(b_19));
              {
                o_19 = t;
                if(((n_19 != NULL) && (n_19 != o_19)))
                  _fail(o_19);
                else
                  n_19 = o_19;
              }
              {
                t = not_null(c_19);
                {
                  ATerm r_19 = NULL;
                  t = x_0(t);
                  {
                    p_19 = t;
                    {
                      ATerm s_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(p_19)), not_null(n_19));
                      {
                        s_19 = t;
                        if(((r_19 != NULL) && (r_19 != s_19)))
                          _fail(s_19);
                        else
                          r_19 = s_19;
                      }
                      t = not_null(r_19);
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
ATerm Int_1 (ATerm t, ATerm w_0 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_Int_1))
    {
      l_20 = ATgetArgument(k_20, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_20 = NULL,q_20 = NULL;
            ATerm p_20 = NULL;
            t = SSLgetAnnotations(not_null(k_20));
            {
              p_20 = t;
              if(((o_20 != NULL) && (o_20 != p_20)))
                _fail(p_20);
              else
                o_20 = p_20;
            }
            {
              t = not_null(l_20);
              {
                ATerm s_20 = NULL;
                t = w_0(t);
                {
                  q_20 = t;
                  {
                    ATerm t_20 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(q_20)), not_null(o_20));
                    {
                      t_20 = t;
                      if(((s_20 != NULL) && (s_20 != t_20)))
                        _fail(t_20);
                      else
                        s_20 = t_20;
                    }
                    t = not_null(s_20);
                  }
                }
              }
            }
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm w_20 = NULL,y_20 = NULL;
              ATerm x_20 = NULL;
              t = SSLgetAnnotations(not_null(k_20));
              {
                x_20 = t;
                if(((w_20 != NULL) && (w_20 != x_20)))
                  _fail(x_20);
                else
                  w_20 = x_20;
              }
              {
                t = not_null(l_20);
                {
                  ATerm a_21 = NULL;
                  t = w_0(t);
                  {
                    y_20 = t;
                    {
                      ATerm b_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(y_20)), not_null(w_20));
                      {
                        b_21 = t;
                        if(((a_21 != NULL) && (a_21 != b_21)))
                          _fail(b_21);
                        else
                          a_21 = b_21;
                      }
                      t = not_null(a_21);
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
ATerm Anno_2 (ATerm t, ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  u_21 :
  if(match_cons(v_21, sym_Anno_2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_22 = NULL,d_22 = NULL;
            ATerm c_22 = NULL;
            t = SSLgetAnnotations(not_null(v_21));
            {
              c_22 = t;
              if(((b_22 != NULL) && (b_22 != c_22)))
                _fail(c_22);
              else
                b_22 = c_22;
            }
            {
              t = not_null(w_21);
              {
                ATerm f_22 = NULL;
                t = u_0(t);
                {
                  d_22 = t;
                  {
                    t = not_null(x_21);
                    {
                      ATerm h_22 = NULL;
                      t = v_0(t);
                      {
                        f_22 = t;
                        {
                          ATerm i_22 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(d_22), not_null(f_22)), not_null(b_22));
                          {
                            i_22 = t;
                            if(((h_22 != NULL) && (h_22 != i_22)))
                              _fail(i_22);
                            else
                              h_22 = i_22;
                          }
                          t = not_null(h_22);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm m_22 = NULL,o_22 = NULL;
              ATerm n_22 = NULL;
              t = SSLgetAnnotations(not_null(v_21));
              {
                n_22 = t;
                if(((m_22 != NULL) && (m_22 != n_22)))
                  _fail(n_22);
                else
                  m_22 = n_22;
              }
              {
                t = not_null(w_21);
                {
                  ATerm q_22 = NULL;
                  t = u_0(t);
                  {
                    o_22 = t;
                    {
                      t = not_null(x_21);
                      {
                        ATerm s_22 = NULL;
                        t = v_0(t);
                        {
                          q_22 = t;
                          {
                            ATerm t_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(o_22), not_null(q_22)), not_null(m_22));
                            {
                              t_22 = t;
                              if(((s_22 != NULL) && (s_22 != t_22)))
                                _fail(t_22);
                              else
                                s_22 = t_22;
                            }
                            t = not_null(s_22);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm proper_list_0 (ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm h_23 = NULL;
        h_23 = t;
        e_23 :
        if(!(match_string(h_23, "Nil")))
          {
            _fail(t);
          }
        return(t);
      }
      t = Op_2(t, q_1, Nil_0);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm w_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm i_23 = NULL;
              i_23 = t;
              f_23 :
              if(!(match_string(i_23, "Cons")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = Cons_2(t, proper_list_0, Nil_0);
                return(t);
              }
              t = Cons_2(t, _id, t_1);
              return(t);
            }
            t = Op_2(t, r_1, s_1);
            LocalPopChoice(a_12);
          }
        else
          {
            t = w_11;
            {
              ATerm u_1 (ATerm t)
              {
                ATerm d_12 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_23 = NULL;
                    j_23 = t;
                    g_23 :
                    if(!(match_string(j_23, "Nil")))
                      {
                        if(!(match_string(j_23, "Cons")))
                          {
                            _fail(t);
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_12;
                  }
                return(t);
              }
              t = Op_2(t, u_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm t_85 (ATerm), ATerm u_85 (ATerm))
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  q_23 = t;
  p_23 :
  if(match_cons(q_23, sym_Op_2))
    {
      r_23 = ATgetArgument(q_23, 0);
      s_23 = ATgetArgument(q_23, 1);
      {
        ATerm w_23 = NULL,y_23 = NULL;
        ATerm x_23 = NULL;
        t = SSLgetAnnotations(not_null(q_23));
        {
          x_23 = t;
          if(((w_23 != NULL) && (w_23 != x_23)))
            _fail(x_23);
          else
            w_23 = x_23;
        }
        {
          t = not_null(r_23);
          {
            ATerm a_24 = NULL;
            t = t_85(t);
            {
              y_23 = t;
              {
                t = not_null(s_23);
                {
                  ATerm c_24 = NULL;
                  t = u_85(t);
                  {
                    a_24 = t;
                    {
                      ATerm d_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(y_23), not_null(a_24)), not_null(w_23));
                      {
                        d_24 = t;
                        if(((c_24 != NULL) && (c_24 != d_24)))
                          _fail(d_24);
                        else
                          c_24 = d_24;
                      }
                      t = not_null(c_24);
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
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
  q_24 = t;
  p_24 :
  if(match_cons(q_24, sym__2))
    {
      r_24 = ATgetArgument(q_24, 0);
      s_24 = ATgetArgument(q_24, 1);
      {
        ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
        ATerm y_24 = NULL;
        t = not_null(r_24);
        {
          ATerm e_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_1 (ATerm t)
              {
                t = map_1(t, Cache_0);
                return(t);
              }
              t = Op_2(t, _id, v_1);
              t = proper_list_0(t);
              LocalPopChoice(m_12);
            }
          else
            {
              t = e_12;
              {
                ATerm n_12 = t;
                int p_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Anno_2(t, Cache_0, Cache_0);
                    LocalPopChoice(p_12);
                  }
                else
                  {
                    t = n_12;
                    {
                      ATerm q_12 = t;
                      int w_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Int_1(t, _id);
                          LocalPopChoice(w_12);
                        }
                      else
                        {
                          t = q_12;
                          {
                            ATerm x_12 = t;
                            int y_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Str_1(t, _id);
                                LocalPopChoice(y_12);
                              }
                            else
                              {
                                t = x_12;
                                {
                                  ATerm z_12 = t;
                                  int a_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Real_1(t, _id);
                                      LocalPopChoice(a_13);
                                    }
                                  else
                                    {
                                      t = z_12;
                                      t = BuildDefault_1(t, _id);
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
              }
            }
          {
            ATerm z_24 = NULL,b_25 = NULL;
            t = new_0(t);
            {
              y_24 = t;
              {
                if(((v_24 != NULL) && (v_24 != y_24)))
                  _fail(y_24);
                else
                  v_24 = y_24;
                {
                  ATerm a_25 = NULL;
                  a_25 = t;
                  if(((z_24 != NULL) && (z_24 != a_25)))
                    _fail(a_25);
                  else
                    z_24 = a_25;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_k_13, not_null(z_24));
                    {
                      ATerm c_25 = NULL,e_25 = NULL;
                      t = conc_strings_0(t);
                      {
                        b_25 = t;
                        {
                          if(((w_24 != NULL) && (w_24 != b_25)))
                            _fail(b_25);
                          else
                            w_24 = b_25;
                          {
                            ATerm l_13;
                            l_13 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_24)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_13, not_null(w_24)));
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = term_x_13;
                                  return(t);
                                }
                                t = assert_1(t, w_1);
                              }
                            }
                            t = l_13;
                            {
                              ATerm d_25 = NULL;
                              ATerm y_13 = t;
                              int z_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  LocalPopChoice(z_13);
                                }
                              else
                                {
                                  t = y_13;
                                  t = (ATerm) ATempty;
                                }
                              {
                                d_25 = t;
                                if(((c_25 != NULL) && (c_25 != d_25)))
                                  _fail(d_25);
                                else
                                  c_25 = d_25;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(c_25)), (ATerm) ATmakeAppl(sym__3, not_null(v_24), not_null(w_24), not_null(s_24)));
                                {
                                  e_25 = t;
                                  {
                                    if(((x_24 != NULL) && (x_24 != e_25)))
                                      _fail(e_25);
                                    else
                                      x_24 = e_25;
                                    {
                                      ATerm b_14;
                                      b_14 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATmakeAppl(sym_Defined_2, term_c_14, not_null(x_24)));
                                        {
                                          ATerm x_1 (ATerm t)
                                          {
                                            t = term_d_11;
                                            return(t);
                                          }
                                          t = assert_1(t, x_1);
                                        }
                                      }
                                      t = b_14;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(w_24));
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
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  z_25 = t;
  x_25 :
  if(match_cons(z_25, sym_Anno_2))
    {
      a_26 = ATgetArgument(z_25, 0);
      y_25 = ATgetArgument(z_25, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_25)), not_null(a_26))));
    }
  else
    {
      if(match_cons(z_25, sym_Op_2))
        {
          a_26 = ATgetArgument(z_25, 0);
          y_25 = ATgetArgument(z_25, 1);
          {
            ATerm f_26 = NULL;
            ATerm g_26 = NULL,i_26 = NULL;
            ATerm h_26 = NULL;
            t = not_null(y_25);
            {
              t = length_0(t);
              {
                h_26 = t;
                if(((g_26 != NULL) && (g_26 != h_26)))
                  _fail(h_26);
                else
                  g_26 = h_26;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_26), not_null(g_26));
              {
                t = ConstructorName_0(t);
                {
                  i_26 = t;
                  if(((f_26 != NULL) && (f_26 != i_26)))
                    _fail(i_26);
                  else
                    f_26 = i_26;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_14, (ATerm) ATinsert(CheckATermList(not_null(y_25)), (ATerm) ATmakeAppl(sym_Id_1, not_null(f_26)))));
          }
        }
      else
        {
          if(match_cons(z_25, sym_BuildDefault_1))
            {
              a_26 = ATgetArgument(z_25, 0);
              t = not_null(a_26);
            }
          else
            {
              if(match_cons(z_25, sym_Var_1))
                {
                  a_26 = ATgetArgument(z_25, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_26))));
                }
              else
                {
                  if(match_cons(z_25, sym_Str_1))
                    {
                      a_26 = ATgetArgument(z_25, 0);
                      {
                        ATerm m_26 = NULL;
                        ATerm n_26 = NULL;
                        t = not_null(a_26);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              n_26 = t;
                              if(((m_26 != NULL) && (m_26 != n_26)))
                                _fail(n_26);
                              else
                                m_26 = n_26;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_15), term_v_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(m_26))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(z_25, sym_Real_1))
                        {
                          a_26 = ATgetArgument(z_25, 0);
                          {
                            ATerm p_26 = NULL;
                            ATerm q_26 = NULL;
                            t = not_null(a_26);
                            {
                              t = real_to_string_0(t);
                              {
                                q_26 = t;
                                if(((p_26 != NULL) && (p_26 != q_26)))
                                  _fail(q_26);
                                else
                                  p_26 = q_26;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(p_26)))));
                          }
                        }
                      else
                        {
                          if(match_cons(z_25, sym_Int_1))
                            {
                              a_26 = ATgetArgument(z_25, 0);
                              {
                                ATerm s_26 = NULL;
                                ATerm t_26 = NULL;
                                t = not_null(a_26);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    t_26 = t;
                                    if(((s_26 != NULL) && (s_26 != t_26)))
                                      _fail(t_26);
                                    else
                                      s_26 = t_26;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_26)))));
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
ATerm Id_1 (ATerm t, ATerm j_79 (ATerm))
{
  ATerm l_27 = NULL,m_27 = NULL;
  l_27 = t;
  k_27 :
  if(match_cons(l_27, sym_Id_1))
    {
      m_27 = ATgetArgument(l_27, 0);
      {
        ATerm p_27 = NULL,r_27 = NULL;
        ATerm q_27 = NULL;
        t = SSLgetAnnotations(not_null(l_27));
        {
          q_27 = t;
          if(((p_27 != NULL) && (p_27 != q_27)))
            _fail(q_27);
          else
            p_27 = q_27;
        }
        {
          t = not_null(m_27);
          {
            ATerm t_27 = NULL;
            t = j_79(t);
            {
              r_27 = t;
              {
                ATerm u_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(r_27)), not_null(p_27));
                {
                  u_27 = t;
                  if(((t_27 != NULL) && (t_27 != u_27)))
                    _fail(u_27);
                  else
                    t_27 = u_27;
                }
                t = not_null(t_27);
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
ATerm FunCall_2 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm))
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  e_28 :
  if(match_cons(f_28, sym_FunCall_2))
    {
      g_28 = ATgetArgument(f_28, 0);
      h_28 = ATgetArgument(f_28, 1);
      {
        ATerm l_28 = NULL,n_28 = NULL;
        ATerm m_28 = NULL;
        t = SSLgetAnnotations(not_null(f_28));
        {
          m_28 = t;
          if(((l_28 != NULL) && (l_28 != m_28)))
            _fail(m_28);
          else
            l_28 = m_28;
        }
        {
          t = not_null(g_28);
          {
            ATerm p_28 = NULL;
            t = b_76(t);
            {
              n_28 = t;
              {
                t = not_null(h_28);
                {
                  ATerm r_28 = NULL;
                  t = c_76(t);
                  {
                    p_28 = t;
                    {
                      ATerm s_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(n_28), not_null(p_28)), not_null(l_28));
                      {
                        s_28 = t;
                        if(((r_28 != NULL) && (r_28 != s_28)))
                          _fail(s_28);
                        else
                          r_28 = s_28;
                      }
                      t = not_null(r_28);
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
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  m_29 :
  if(match_cons(w_29, sym_Op_2))
    {
      x_29 = ATgetArgument(w_29, 0);
      y_29 = ATgetArgument(w_29, 1);
      n_29 :
      if(match_string(x_29, "Cons"))
        {
          o_29 :
          if(((ATgetType(y_29) == AT_LIST) && ((ATermList) y_29 != ATempty)))
            {
              s_29 = ATgetFirst((ATermList) y_29);
              t_29 = (ATerm) ATgetNext((ATermList) y_29);
              p_29 :
              if(((ATgetType(t_29) == AT_LIST) && ((ATermList) t_29 != ATempty)))
                {
                  u_29 = ATgetFirst((ATermList) t_29);
                  v_29 = (ATerm) ATgetNext((ATermList) t_29);
                  q_29 :
                  if(((ATermList) v_29 == ATempty))
                    {
                      {
                        ATerm b_30 = NULL;
                        ATerm o_30 = NULL;
                        t = not_null(u_29);
                        {
                          ATerm h_15 = t;
                          int i_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
                              c_30 = t;
                              d_29 :
                              if(match_cons(c_30, sym_TypeCast_2))
                                {
                                  d_30 = ATgetArgument(c_30, 0);
                                  k_30 = ATgetArgument(c_30, 1);
                                  e_29 :
                                  if(match_cons(d_30, sym_TypeName_2))
                                    {
                                      e_30 = ATgetArgument(d_30, 0);
                                      j_30 = ATgetArgument(d_30, 1);
                                      f_29 :
                                      if(match_cons(e_30, sym_TypeSpec_3))
                                        {
                                          f_30 = ATgetArgument(e_30, 0);
                                          g_30 = ATgetArgument(e_30, 1);
                                          i_30 = ATgetArgument(e_30, 2);
                                          g_29 :
                                          if(((ATermList) f_30 == ATempty))
                                            {
                                              h_29 :
                                              if(match_cons(g_30, sym_TypeId_1))
                                                {
                                                  h_30 = ATgetArgument(g_30, 0);
                                                  i_29 :
                                                  if(match_string(h_30, "ATerm"))
                                                    {
                                                      j_29 :
                                                      if(((ATermList) i_30 == ATempty))
                                                        {
                                                          k_29 :
                                                          if(match_cons(j_30, sym_None_0))
                                                            {
                                                              t = not_null(k_30);
                                                              {
                                                                ATerm j_15 = t;
                                                                int k_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm y_1 (ATerm t)
                                                                    {
                                                                      ATerm m_30 = NULL;
                                                                      m_30 = t;
                                                                      b_29 :
                                                                      if(!(match_string(m_30, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, y_1);
                                                                    LocalPopChoice(k_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = j_15;
                                                                    {
                                                                      ATerm z_1 (ATerm t)
                                                                      {
                                                                        ATerm b_2 (ATerm t)
                                                                        {
                                                                          ATerm n_30 = NULL;
                                                                          n_30 = t;
                                                                          c_29 :
                                                                          if(!(match_string(n_30, "ATinsert")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        t = Id_1(t, b_2);
                                                                        return(t);
                                                                      }
                                                                      ATerm a_2 (ATerm t)
                                                                      {
                                                                        ATerm c_2 (ATerm t)
                                                                        {
                                                                          t = Cons_2(t, _id, Nil_0);
                                                                          return(t);
                                                                        }
                                                                        t = Cons_2(t, _id, c_2);
                                                                        return(t);
                                                                      }
                                                                      t = FunCall_2(t, z_1, a_2);
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
                              LocalPopChoice(i_15);
                            }
                          else
                            {
                              t = h_15;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_15, (ATerm) ATinsert(ATempty, not_null(u_29)));
                            }
                          {
                            o_30 = t;
                            if(((b_30 != NULL) && (b_30 != o_30)))
                              _fail(o_30);
                            else
                              b_30 = o_30;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_29)), not_null(b_30))));
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
          if(match_string(x_29, "Nil"))
            {
              r_29 :
              if(((ATermList) y_29 == ATempty))
                {
                  t = term_h_16;
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
  ATerm b_31 = NULL;
  b_31 = t;
  {
    ATerm i_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_31 = NULL;
        ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(b_31));
        {
          ATerm d_2 (ATerm t)
          {
            t = term_x_13;
            return(t);
          }
          t = rewrite_1(t, d_2);
          {
            e_31 = t;
            w_30 :
            if(match_cons(e_31, sym_Defined_2))
              {
                f_31 = ATgetArgument(e_31, 0);
                g_31 = ATgetArgument(e_31, 1);
                x_30 :
                if(match_string(f_31, "r_0"))
                  {
                    if(((d_31 != NULL) && (d_31 != g_31)))
                      _fail(g_31);
                    else
                      d_31 = g_31;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(d_31));
        LocalPopChoice(p_16);
      }
    else
      {
        t = i_16;
        {
          ATerm i_31 = NULL;
          ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(b_31));
          {
            ATerm e_2 (ATerm t)
            {
              t = term_x_13;
              return(t);
            }
            t = rewrite_1(t, e_2);
            {
              j_31 = t;
              z_30 :
              if(match_cons(j_31, sym_Defined_2))
                {
                  k_31 = ATgetArgument(j_31, 0);
                  l_31 = ATgetArgument(j_31, 1);
                  a_31 :
                  if(match_string(k_31, "q_0"))
                    {
                      if(((i_31 != NULL) && (i_31 != l_31)))
                        _fail(l_31);
                      else
                        i_31 = l_31;
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
          t = not_null(i_31);
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm s_31 = NULL,u_31 = NULL;
        ATerm s_16;
        s_16 = t;
        {
          ATerm t_31 = NULL;
          t_31 = t;
          if(((s_31 != NULL) && (s_31 != t_31)))
            _fail(t_31);
          else
            s_31 = t_31;
        }
        t = s_16;
        {
          ATerm v_31 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm f_2 (ATerm t)
            {
              ATerm t_16 = t;
              int x_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  LocalPopChoice(x_16);
                }
              else
                {
                  t = t_16;
                  t = ConstructTerm_0(t);
                }
              return(t);
            }
            t = try_1(t, f_2);
            {
              v_31 = t;
              if(((u_31 != NULL) && (u_31 != v_31)))
                _fail(v_31);
              else
                u_31 = v_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_31), not_null(u_31));
            {
              ATerm y_16 = t;
              int c_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  LocalPopChoice(c_17);
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
  ATerm o_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
  ATerm u_47 (ATerm t)
  {
    ATerm j_40 = NULL,f_41 = NULL,k_41 = NULL;
    ATerm f_17;
    f_17 = t;
    {
      ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
      t = not_null(y_38);
      {
        ATerm g_17 = t;
        if((PushChoice() == 0))
          {
            ATerm k_40 = NULL;
            k_40 = t;
            u_34 :
            if(!(match_string(k_40, "Nil")))
              {
                if(!(match_string(k_40, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_17;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_38), term_h_17);
          {
            ATerm g_2 (ATerm t)
            {
              ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
              l_40 = t;
              y_34 :
              if(match_cons(l_40, sym__2))
                {
                  m_40 = ATgetArgument(l_40, 0);
                  o_40 = ATgetArgument(l_40, 1);
                  z_34 :
                  if(match_cons(m_40, sym_Var_1))
                    {
                      n_40 = ATgetArgument(m_40, 0);
                      {
                        ATerm y_40 = NULL,a_41 = NULL;
                        ATerm i_17;
                        i_17 = t;
                        {
                          ATerm z_40 = NULL;
                          t = not_null(o_40);
                          {
                            t = int_to_string_0(t);
                            {
                              z_40 = t;
                              if(((y_40 != NULL) && (y_40 != z_40)))
                                _fail(z_40);
                              else
                                y_40 = z_40;
                            }
                          }
                        }
                        t = i_17;
                        {
                          ATerm b_41 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_40), term_j_17);
                          {
                            t = add_0(t);
                            {
                              b_41 = t;
                              if(((a_41 != NULL) && (a_41 != b_41)))
                                _fail(b_41);
                              else
                                a_41 = b_41;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_40)), term_x_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(y_40))), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39)))))), not_null(a_41));
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
            t = thread_map_1(t, g_2);
            {
              c_41 = t;
              b_35 :
              if(match_cons(c_41, sym__2))
                {
                  d_41 = ATgetArgument(c_41, 0);
                  e_41 = ATgetArgument(c_41, 1);
                  if(((j_40 != NULL) && (j_40 != d_41)))
                    _fail(d_41);
                  else
                    j_40 = d_41;
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
    t = f_17;
    {
      ATerm m_17;
      m_17 = t;
      {
        ATerm j_41 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_38), not_null(w_38));
        {
          t = ConstructorName_0(t);
          {
            j_41 = t;
            if(((f_41 != NULL) && (f_41 != j_41)))
              _fail(j_41);
            else
              f_41 = j_41;
          }
        }
      }
      t = m_17;
      {
        ATerm r_41 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_40), (ATerm) ATinsert(ATempty, not_null(a_39)));
        {
          t = conc_0(t);
          {
            r_41 = t;
            if(((k_41 != NULL) && (k_41 != r_41)))
              _fail(r_41);
            else
              k_41 = r_41;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_41))), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(k_41)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_39)), not_null(b_39), not_null(l_39)))));
      }
    }
    return(t);
  }
  ATerm z_47 (ATerm t)
  {
    ATerm z_41 = NULL;
    ATerm a_42 = NULL;
    t = not_null(y_38);
    {
      t = real_to_string_0(t);
      {
        a_42 = t;
        if(((z_41 != NULL) && (z_41 != a_42)))
          _fail(a_42);
        else
          z_41 = a_42;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(z_41))), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(a_39))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_39)), not_null(b_39), not_null(l_39)))));
    return(t);
  }
  ATerm c_48 (ATerm t)
  {
    ATerm h_42 = NULL;
    ATerm i_42 = NULL;
    t = not_null(y_38);
    {
      t = int_to_string_0(t);
      {
        i_42 = t;
        if(((h_42 != NULL) && (h_42 != i_42)))
          _fail(i_42);
        else
          h_42 = i_42;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(h_42))), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(a_39))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_39)), not_null(b_39), not_null(l_39)))));
    return(t);
  }
  ATerm d_48 (ATerm t)
  {
    ATerm p_42 = NULL;
    ATerm q_42 = NULL;
    t = not_null(y_38);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          q_42 = t;
          if(((p_42 != NULL) && (p_42 != q_42)))
            _fail(q_42);
          else
            p_42 = q_42;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(p_42)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(a_39))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_39)), not_null(b_39), not_null(l_39)))));
    return(t);
  }
  ATerm e_48 (ATerm t)
  {
    t = not_null(l_39);
    return(t);
  }
  ATerm f_48 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_39)), (ATerm) ATmakeAppl(sym_Case_3, not_null(n_39), not_null(l_39), not_null(c_39)));
    return(t);
  }
  ATerm g_48 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(m_39)));
    return(t);
  }
  ATerm h_48 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_39)), term_d_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_39)), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_39)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_39))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_39)), term_x_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_39)))));
    return(t);
  }
  ATerm i_48 (ATerm t)
  {
    t = not_null(n_39);
    {
      ATerm l_18 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = l_18;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_39)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_39))));
    return(t);
  }
  ATerm o_48 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_39)), term_x_7, term_n_18));
    return(t);
  }
  ATerm p_48 (ATerm t)
  {
    ATerm g_43 = NULL;
    ATerm h_43 = NULL;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(h_39), (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_18, not_null(n_39))))))), (ATerm) ATmakeAppl(sym__2, not_null(f_39), (ATerm) ATmakeAppl(sym_FunCall_2, term_p_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_18, not_null(n_39))))));
    {
      ATerm h_2 (ATerm t)
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MatchArg1_0(t);
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            t = MatchArg2_0(t);
          }
        return(t);
      }
      t = map_1(t, h_2);
      {
        h_43 = t;
        if(((g_43 != NULL) && (g_43 != h_43)))
          _fail(h_43);
        else
          g_43 = h_43;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_18, (ATerm) ATinsert(ATempty, not_null(n_39))), term_e_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_19, (ATerm) ATinsert(ATempty, not_null(n_39))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(g_43)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, term_n_18))));
    return(t);
  }
  ATerm q_48 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_18, (ATerm) ATinsert(ATempty, not_null(n_39))), term_e_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_19, (ATerm) ATinsert(ATempty, not_null(n_39))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, term_n_18))));
    return(t);
  }
  ATerm r_48 (ATerm t)
  {
    ATerm m_43 = NULL,e_44 = NULL;
    ATerm m_19;
    m_19 = t;
    {
      ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
      t = not_null(k_39);
      {
        ATerm q_19 = t;
        if((PushChoice() == 0))
          {
            ATerm n_43 = NULL;
            n_43 = t;
            i_35 :
            if(!(match_string(n_43, "Nil")))
              {
                if(!(match_string(n_43, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_19;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_39), term_h_17);
          {
            ATerm i_2 (ATerm t)
            {
              ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
              o_43 = t;
              n_35 :
              if(match_cons(o_43, sym__2))
                {
                  p_43 = ATgetArgument(o_43, 0);
                  q_43 = ATgetArgument(o_43, 1);
                  {
                    ATerm t_43 = NULL,x_43 = NULL;
                    ATerm t_19;
                    t_19 = t;
                    {
                      ATerm u_43 = NULL,w_43 = NULL;
                      ATerm v_43 = NULL;
                      t = not_null(q_43);
                      {
                        t = int_to_string_0(t);
                        {
                          v_43 = t;
                          if(((u_43 != NULL) && (u_43 != v_43)))
                            _fail(v_43);
                          else
                            u_43 = v_43;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_43), (ATerm) ATmakeAppl(sym_FunCall_2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(u_43))), not_null(n_39))));
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
                          {
                            w_43 = t;
                            if(((t_43 != NULL) && (t_43 != w_43)))
                              _fail(w_43);
                            else
                              t_43 = w_43;
                          }
                        }
                      }
                    }
                    t = t_19;
                    {
                      ATerm y_43 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_43), term_j_17);
                      {
                        t = add_0(t);
                        {
                          y_43 = t;
                          if(((x_43 != NULL) && (x_43 != y_43)))
                            _fail(y_43);
                          else
                            x_43 = y_43;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_43), not_null(x_43));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = thread_map_1(t, i_2);
            {
              b_44 = t;
              p_35 :
              if(match_cons(b_44, sym__2))
                {
                  c_44 = ATgetArgument(b_44, 0);
                  d_44 = ATgetArgument(b_44, 1);
                  if(((m_43 != NULL) && (m_43 != c_44)))
                    _fail(c_44);
                  else
                    m_43 = c_44;
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
    t = m_19;
    {
      ATerm k_44 = NULL,m_44 = NULL;
      ATerm l_44 = NULL;
      t = not_null(j_39);
      {
        t = length_0(t);
        {
          l_44 = t;
          if(((k_44 != NULL) && (k_44 != l_44)))
            _fail(l_44);
          else
            k_44 = l_44;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_39), not_null(k_44));
        {
          t = ConstructorName_0(t);
          {
            m_44 = t;
            if(((e_44 != NULL) && (e_44 != m_44)))
              _fail(m_44);
            else
              e_44 = m_44;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_44))), not_null(n_39))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(m_43)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, term_n_18))));
    }
    return(t);
  }
  ATerm s_48 (ATerm t)
  {
    ATerm p_44 = NULL;
    ATerm q_44 = NULL;
    t = not_null(k_39);
    {
      t = real_to_string_0(t);
      {
        q_44 = t;
        if(((p_44 != NULL) && (p_44 != q_44)))
          _fail(q_44);
        else
          p_44 = q_44;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_18, (ATerm) ATinsert(ATempty, not_null(n_39))), term_x_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_20, not_null(n_39)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(p_44)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, term_n_18))));
    return(t);
  }
  ATerm t_48 (ATerm t)
  {
    ATerm u_44 = NULL;
    ATerm x_44 = NULL;
    t = not_null(k_39);
    {
      t = int_to_string_0(t);
      {
        x_44 = t;
        if(((u_44 != NULL) && (u_44 != x_44)))
          _fail(x_44);
        else
          u_44 = x_44;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_18, (ATerm) ATinsert(ATempty, not_null(n_39))), term_f_20), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_20, not_null(n_39)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(u_44)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, term_n_18))));
    return(t);
  }
  ATerm u_48 (ATerm t)
  {
    ATerm a_45 = NULL;
    ATerm b_45 = NULL;
    t = not_null(k_39);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          b_45 = t;
          if(((a_45 != NULL) && (a_45 != b_45)))
            _fail(b_45);
          else
            a_45 = b_45;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_21, not_null(n_39)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_15), term_v_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(a_45)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, term_n_18))));
    return(t);
  }
  ATerm v_48 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_39)), term_d_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_39)), not_null(n_39))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, not_null(n_39)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_39)), term_x_7, not_null(n_39))));
    return(t);
  }
  ATerm w_48 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(j_39), not_null(n_39))), (ATerm) ATmakeAppl(sym_Match_2, not_null(k_39), not_null(n_39))));
    return(t);
  }
  ATerm x_48 (ATerm t)
  {
    t = term_f_21;
    return(t);
  }
  ATerm y_48 (ATerm t)
  {
    t = term_f_21;
    return(t);
  }
  ATerm z_48 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(m_39), term_n_18);
    return(t);
  }
  ATerm a_49 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(m_39), (ATerm) ATinsert(ATempty, not_null(n_39)));
    return(t);
  }
  ATerm b_49 (ATerm t)
  {
    ATerm o_45 = NULL;
    ATerm p_45 = NULL;
    t = new_0(t);
    {
      p_45 = t;
      if(((o_45 != NULL) && (o_45 != p_45)))
        _fail(p_45);
      else
        o_45 = p_45;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_45)), term_o_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_18, term_x_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_45))))), not_null(m_39)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_45)), term_x_7, term_n_18))));
    return(t);
  }
  ATerm c_49 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(m_39));
    return(t);
  }
  ATerm d_49 (ATerm t)
  {
    ATerm t_45 = NULL;
    ATerm c_46 = NULL;
    t = not_null(n_39);
    {
      ATerm j_2 (ATerm t)
      {
        ATerm u_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
        u_45 = t;
        x_35 :
        if(match_cons(u_45, sym_Call_2))
          {
            x_45 = ATgetArgument(u_45, 0);
            z_45 = ATgetArgument(u_45, 1);
            y_35 :
            if(match_cons(x_45, sym_SVar_1))
              {
                y_45 = ATgetArgument(x_45, 0);
                z_35 :
                if(((ATermList) z_45 == ATempty))
                  {
                    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(y_45));
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
      t = map_1(t, j_2);
      {
        c_46 = t;
        if(((t_45 != NULL) && (t_45 != c_46)))
          _fail(c_46);
        else
          t_45 = c_46;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_18, term_x_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_39)), (ATerm) ATinsert(CheckATermList(not_null(t_45)), term_n_18))));
    return(t);
  }
  ATerm e_49 (ATerm t)
  {
    ATerm f_46 = NULL;
    ATerm i_46 = NULL;
    t = not_null(n_39);
    {
      ATerm k_2 (ATerm t)
      {
        ATerm l_2 (ATerm t)
        {
          t = try_1(t, construct_term_0);
          return(t);
        }
        t = topdown_1(t, l_2);
        return(t);
      }
      t = map_1(t, k_2);
      {
        i_46 = t;
        if(((f_46 != NULL) && (f_46 != i_46)))
          _fail(i_46);
        else
          f_46 = i_46;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_18, term_x_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_39)), not_null(f_46))));
    return(t);
  }
  ATerm f_49 (ATerm t)
  {
    ATerm k_46 = NULL;
    ATerm l_46 = NULL;
    t = new_0(t);
    {
      l_46 = t;
      if(((k_46 != NULL) && (k_46 != l_46)))
        _fail(l_46);
      else
        k_46 = l_46;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_46)), term_o_8), term_g_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_21), term_o_21), not_null(m_39))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_18, term_x_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_46)))))))));
    return(t);
  }
  ATerm g_49 (ATerm t)
  {
    ATerm o_46 = NULL;
    ATerm p_46 = NULL;
    t = new_0(t);
    {
      p_46 = t;
      if(((o_46 != NULL) && (o_46 != p_46)))
        _fail(p_46);
      else
        o_46 = p_46;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_46)), term_o_8), term_g_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(m_39))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_39)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_18, term_x_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_46)))))))));
    return(t);
  }
  ATerm h_49 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(m_39), not_null(n_39));
    return(t);
  }
  ATerm i_49 (ATerm t)
  {
    ATerm v_46 = NULL,w_46 = NULL;
    ATerm x_46 = NULL;
    ATerm y_46 = NULL;
    t = new_0(t);
    {
      x_46 = t;
      {
        if(((v_46 != NULL) && (v_46 != x_46)))
          _fail(x_46);
        else
          v_46 = x_46;
        {
          t = new_0(t);
          {
            y_46 = t;
            if(((w_46 != NULL) && (w_46 != y_46)))
              _fail(y_46);
            else
              w_46 = y_46;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_46)), term_o_8), term_k_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_46)), term_o_8), term_g_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_39)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_46)))))), not_null(m_39))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_39)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_18, term_x_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_46)))))))));
    return(t);
  }
  ATerm j_49 (ATerm t)
  {
    ATerm b_47 = NULL,c_47 = NULL;
    ATerm d_47 = NULL;
    ATerm e_47 = NULL;
    t = new_0(t);
    {
      d_47 = t;
      {
        if(((b_47 != NULL) && (b_47 != d_47)))
          _fail(d_47);
        else
          b_47 = d_47;
        {
          t = new_0(t);
          {
            e_47 = t;
            if(((c_47 != NULL) && (c_47 != e_47)))
              _fail(e_47);
            else
              c_47 = e_47;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_47)), term_o_8), term_k_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_47)), term_o_8), term_g_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_47)))))), not_null(m_39))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_39)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_18, term_x_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_47)))))))));
    return(t);
  }
  ATerm k_49 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_39), not_null(n_39));
    return(t);
  }
  ATerm l_49 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_39)), not_null(m_39)));
    return(t);
  }
  ATerm m_49 (ATerm t)
  {
    ATerm n_47 = NULL;
    ATerm r_22;
    r_22 = t;
    {
      t = not_null(m_39);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm l_47 = NULL;
          l_47 = t;
          {
            ATerm u_22;
            u_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(l_47)), term_w_22);
              {
                ATerm n_2 (ATerm t)
                {
                  t = term_m_10;
                  return(t);
                }
                t = assert_1(t, n_2);
              }
            }
            t = u_22;
          }
          return(t);
        }
        t = map_1(t, m_2);
      }
    }
    t = r_22;
    {
      ATerm q_47 = NULL;
      t = not_null(m_39);
      {
        ATerm o_2 (ATerm t)
        {
          ATerm o_47 = NULL;
          o_47 = t;
          t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_47)), term_o_8), term_x_22);
          return(t);
        }
        t = map_1(t, o_2);
        {
          q_47 = t;
          if(((n_47 != NULL) && (n_47 != q_47)))
            _fail(q_47);
          else
            n_47 = q_47;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_8, not_null(n_47))), (ATerm) ATinsert(ATempty, not_null(n_39)));
    }
    return(t);
  }
  ATerm n_49 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, term_n_18)));
    return(t);
  }
  ATerm o_49 (ATerm t)
  {
    t = term_f_21;
    return(t);
  }
  o_39 = t;
  l_36 :
  if(match_cons(o_39, sym_Build_1))
    {
      m_39 = ATgetArgument(o_39, 0);
      {
        ATerm q_39 = NULL;
        ATerm r_39 = NULL;
        t = not_null(m_39);
        {
          t = construct_term_caching_0(t);
          {
            r_39 = t;
            if(((q_39 != NULL) && (q_39 != r_39)))
              _fail(r_39);
            else
              q_39 = r_39;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_18, term_x_7, not_null(q_39)));
      }
    }
  else
    {
      if(match_cons(o_39, sym_Case_3))
        {
          m_39 = ATgetArgument(o_39, 0);
          n_39 = ATgetArgument(o_39, 1);
          l_39 = ATgetArgument(o_39, 2);
          m_36 :
          if(match_cons(m_39, sym_Var_1))
            {
              k_39 = ATgetArgument(m_39, 0);
              n_36 :
              if(((ATgetType(n_39) == AT_LIST) && ((ATermList) n_39 != ATempty)))
                {
                  d_39 = ATgetFirst((ATermList) n_39);
                  b_39 = (ATerm) ATgetNext((ATermList) n_39);
                  o_36 :
                  if(match_cons(d_39, sym_Alt_3))
                    {
                      x_38 = ATgetArgument(d_39, 0);
                      z_38 = ATgetArgument(d_39, 1);
                      a_39 = ATgetArgument(d_39, 2);
                      p_36 :
                      if(match_cons(x_38, sym_Fun_2))
                        {
                          y_38 = ATgetArgument(x_38, 0);
                          w_38 = ATgetArgument(x_38, 1);
                          q_36 :
                          if(((ATgetType(z_38) == AT_LIST) && ((ATermList) z_38 != ATempty)))
                            {
                              o_38 = ATgetFirst((ATermList) z_38);
                              s_38 = (ATerm) ATgetNext((ATermList) z_38);
                              r_36 :
                              if(((ATgetType(s_38) == AT_LIST) && ((ATermList) s_38 != ATempty)))
                                {
                                  t_38 = ATgetFirst((ATermList) s_38);
                                  v_38 = (ATerm) ATgetNext((ATermList) s_38);
                                  s_36 :
                                  if(((ATermList) v_38 == ATempty))
                                    {
                                      t_36 :
                                      if(match_cons(t_38, sym_Var_1))
                                        {
                                          u_38 = ATgetArgument(t_38, 0);
                                          u_36 :
                                          if(match_cons(o_38, sym_Var_1))
                                            {
                                              r_38 = ATgetArgument(o_38, 0);
                                              v_36 :
                                              if(match_int(w_38, 2))
                                                {
                                                  w_36 :
                                                  if(match_string(y_38, "Cons"))
                                                    {
                                                      ATerm y_22 = t;
                                                      int z_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39)))), term_e_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_39)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_38)), term_x_7, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_38)), term_x_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_39)), not_null(b_39), not_null(l_39)))));
                                                          LocalPopChoice(z_22);
                                                        }
                                                      else
                                                        {
                                                          t = y_22;
                                                          t = u_47(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = u_47(t);
                                                    }
                                                }
                                              else
                                                {
                                                  x_36 :
                                                  t = u_47(t);
                                                }
                                            }
                                          else
                                            {
                                              y_36 :
                                              z_36 :
                                              t = u_47(t);
                                            }
                                        }
                                      else
                                        {
                                          a_37 :
                                          b_37 :
                                          c_37 :
                                          t = u_47(t);
                                        }
                                    }
                                  else
                                    {
                                      d_37 :
                                      e_37 :
                                      f_37 :
                                      g_37 :
                                      t = u_47(t);
                                    }
                                }
                              else
                                {
                                  h_37 :
                                  p_37 :
                                  q_37 :
                                  t = u_47(t);
                                }
                            }
                          else
                            {
                              if(((ATermList) z_38 == ATempty))
                                {
                                  r_37 :
                                  if(match_int(w_38, 0))
                                    {
                                      s_37 :
                                      if(match_string(y_38, "Nil"))
                                        {
                                          ATerm a_23 = t;
                                          int b_23 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39)))), term_e_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_l_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(a_39)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_39)), not_null(b_39), not_null(l_39)))));
                                              LocalPopChoice(b_23);
                                            }
                                          else
                                            {
                                              t = a_23;
                                              t = u_47(t);
                                            }
                                        }
                                      else
                                        {
                                          t = u_47(t);
                                        }
                                    }
                                  else
                                    {
                                      t_37 :
                                      t = u_47(t);
                                    }
                                }
                              else
                                {
                                  u_37 :
                                  v_37 :
                                  t = u_47(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(x_38, sym_Real_1))
                            {
                              y_38 = ATgetArgument(x_38, 0);
                              t = z_47(t);
                            }
                          else
                            {
                              if(match_cons(x_38, sym_Int_1))
                                {
                                  y_38 = ATgetArgument(x_38, 0);
                                  t = c_48(t);
                                }
                              else
                                {
                                  if(match_cons(x_38, sym_Str_1))
                                    {
                                      y_38 = ATgetArgument(x_38, 0);
                                      t = d_48(t);
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
                  if(((ATermList) n_39 == ATempty))
                    {
                      t = e_48(t);
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
          if(match_cons(o_39, sym_Case_4))
            {
              m_39 = ATgetArgument(o_39, 0);
              n_39 = ATgetArgument(o_39, 1);
              l_39 = ATgetArgument(o_39, 2);
              c_39 = ATgetArgument(o_39, 3);
              t = f_48(t);
            }
          else
            {
              if(match_cons(o_39, sym_Continue_1))
                {
                  m_39 = ATgetArgument(o_39, 0);
                  t = g_48(t);
                }
              else
                {
                  if(match_cons(o_39, sym_Assign_2))
                    {
                      m_39 = ATgetArgument(o_39, 0);
                      n_39 = ATgetArgument(o_39, 1);
                      w_37 :
                      if(match_cons(m_39, sym_Var_1))
                        {
                          k_39 = ATgetArgument(m_39, 0);
                          x_37 :
                          if(match_cons(n_39, sym_Var_1))
                            {
                              d_39 = ATgetArgument(n_39, 0);
                              {
                                ATerm c_23 = t;
                                int d_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = h_48(t);
                                    LocalPopChoice(d_23);
                                  }
                                else
                                  {
                                    t = c_23;
                                    t = i_48(t);
                                  }
                              }
                            }
                          else
                            {
                              t = i_48(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(o_39, sym_Assign_1))
                        {
                          m_39 = ATgetArgument(o_39, 0);
                          y_37 :
                          if(match_cons(m_39, sym_Var_1))
                            {
                              k_39 = ATgetArgument(m_39, 0);
                              t = o_48(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(o_39, sym_Match_2))
                            {
                              m_39 = ATgetArgument(o_39, 0);
                              n_39 = ATgetArgument(o_39, 1);
                              z_37 :
                              if(match_cons(m_39, sym_Op_2))
                                {
                                  k_39 = ATgetArgument(m_39, 0);
                                  j_39 = ATgetArgument(m_39, 1);
                                  a_38 :
                                  if(((ATgetType(j_39) == AT_LIST) && ((ATermList) j_39 != ATempty)))
                                    {
                                      f_39 = ATgetFirst((ATermList) j_39);
                                      g_39 = (ATerm) ATgetNext((ATermList) j_39);
                                      b_38 :
                                      if(((ATgetType(g_39) == AT_LIST) && ((ATermList) g_39 != ATempty)))
                                        {
                                          h_39 = ATgetFirst((ATermList) g_39);
                                          i_39 = (ATerm) ATgetNext((ATermList) g_39);
                                          c_38 :
                                          if(((ATermList) i_39 == ATempty))
                                            {
                                              d_38 :
                                              if(match_string(k_39, "Cons"))
                                                {
                                                  ATerm k_23 = t;
                                                  int l_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = p_48(t);
                                                      LocalPopChoice(l_23);
                                                    }
                                                  else
                                                    {
                                                      t = k_23;
                                                      t = r_48(t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = r_48(t);
                                                }
                                            }
                                          else
                                            {
                                              e_38 :
                                              t = r_48(t);
                                            }
                                        }
                                      else
                                        {
                                          f_38 :
                                          t = r_48(t);
                                        }
                                    }
                                  else
                                    {
                                      if(((ATermList) j_39 == ATempty))
                                        {
                                          l_38 :
                                          if(match_string(k_39, "Nil"))
                                            {
                                              ATerm m_23 = t;
                                              int n_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = q_48(t);
                                                  LocalPopChoice(n_23);
                                                }
                                              else
                                                {
                                                  t = m_23;
                                                  t = r_48(t);
                                                }
                                            }
                                          else
                                            {
                                              t = r_48(t);
                                            }
                                        }
                                      else
                                        {
                                          m_38 :
                                          t = r_48(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(m_39, sym_Real_1))
                                    {
                                      k_39 = ATgetArgument(m_39, 0);
                                      t = s_48(t);
                                    }
                                  else
                                    {
                                      if(match_cons(m_39, sym_Int_1))
                                        {
                                          k_39 = ATgetArgument(m_39, 0);
                                          t = t_48(t);
                                        }
                                      else
                                        {
                                          if(match_cons(m_39, sym_Str_1))
                                            {
                                              k_39 = ATgetArgument(m_39, 0);
                                              t = u_48(t);
                                            }
                                          else
                                            {
                                              if(match_cons(m_39, sym_Var_1))
                                                {
                                                  k_39 = ATgetArgument(m_39, 0);
                                                  t = v_48(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(m_39, sym_As_2))
                                                    {
                                                      k_39 = ATgetArgument(m_39, 0);
                                                      j_39 = ATgetArgument(m_39, 1);
                                                      t = w_48(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(m_39, sym_BuildDefault_1))
                                                        {
                                                          k_39 = ATgetArgument(m_39, 0);
                                                          t = x_48(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(m_39, sym_Wld_0))
                                                            {
                                                              t = y_48(t);
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
                              if(match_cons(o_39, sym_Match_1))
                                {
                                  m_39 = ATgetArgument(o_39, 0);
                                  t = z_48(t);
                                }
                              else
                                {
                                  if(match_cons(o_39, sym_Let_2))
                                    {
                                      m_39 = ATgetArgument(o_39, 0);
                                      n_39 = ATgetArgument(o_39, 1);
                                      t = a_49(t);
                                    }
                                  else
                                    {
                                      if(match_cons(o_39, sym_Where_1))
                                        {
                                          m_39 = ATgetArgument(o_39, 0);
                                          t = b_49(t);
                                        }
                                      else
                                        {
                                          if(match_cons(o_39, sym_Test_1))
                                            {
                                              m_39 = ATgetArgument(o_39, 0);
                                              t = c_49(t);
                                            }
                                          else
                                            {
                                              if(match_cons(o_39, sym_Call_2))
                                                {
                                                  m_39 = ATgetArgument(o_39, 0);
                                                  n_39 = ATgetArgument(o_39, 1);
                                                  n_38 :
                                                  if(match_cons(m_39, sym_SVar_1))
                                                    {
                                                      k_39 = ATgetArgument(m_39, 0);
                                                      t = d_49(t);
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_cons(o_39, sym_Prim_2))
                                                    {
                                                      m_39 = ATgetArgument(o_39, 0);
                                                      n_39 = ATgetArgument(o_39, 1);
                                                      t = e_49(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(o_39, sym_Not_1))
                                                        {
                                                          m_39 = ATgetArgument(o_39, 0);
                                                          t = f_49(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(o_39, sym_LGChoice_2))
                                                            {
                                                              m_39 = ATgetArgument(o_39, 0);
                                                              n_39 = ATgetArgument(o_39, 1);
                                                              t = g_49(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(o_39, sym_GChoice_2))
                                                                {
                                                                  m_39 = ATgetArgument(o_39, 0);
                                                                  n_39 = ATgetArgument(o_39, 1);
                                                                  t = h_49(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(o_39, sym_GuardedLChoice_3))
                                                                    {
                                                                      m_39 = ATgetArgument(o_39, 0);
                                                                      n_39 = ATgetArgument(o_39, 1);
                                                                      l_39 = ATgetArgument(o_39, 2);
                                                                      t = i_49(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(o_39, sym_LChoice_2))
                                                                        {
                                                                          m_39 = ATgetArgument(o_39, 0);
                                                                          n_39 = ATgetArgument(o_39, 1);
                                                                          t = j_49(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(o_39, sym_Choice_2))
                                                                            {
                                                                              m_39 = ATgetArgument(o_39, 0);
                                                                              n_39 = ATgetArgument(o_39, 1);
                                                                              t = k_49(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(o_39, sym_Seq_2))
                                                                                {
                                                                                  m_39 = ATgetArgument(o_39, 0);
                                                                                  n_39 = ATgetArgument(o_39, 1);
                                                                                  t = l_49(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(o_39, sym_Scope_2))
                                                                                    {
                                                                                      m_39 = ATgetArgument(o_39, 0);
                                                                                      n_39 = ATgetArgument(o_39, 1);
                                                                                      t = m_49(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(o_39, sym_Fail_0))
                                                                                        {
                                                                                          t = n_49(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(o_39, sym_Id_0))
                                                                                            {
                                                                                              t = o_49(t);
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
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  y_50 :
  if(match_cons(z_50, sym__2))
    {
      a_51 = ATgetArgument(z_50, 0);
      b_51 = ATgetArgument(z_50, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_o_23), not_null(b_51)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  i_51 = t;
  g_51 :
  if(((ATgetType(i_51) == AT_LIST) && ((ATermList) i_51 != ATempty)))
    {
      j_51 = ATgetFirst((ATermList) i_51);
      k_51 = (ATerm) ATgetNext((ATermList) i_51);
      h_51 :
      if(match_int(j_51, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_51)), term_u_23), term_t_23);
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
ATerm Escape_backslash_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,v_51 = NULL;
  q_51 = t;
  o_51 :
  if(((ATgetType(q_51) == AT_LIST) && ((ATermList) q_51 != ATempty)))
    {
      r_51 = ATgetFirst((ATermList) q_51);
      v_51 = (ATerm) ATgetNext((ATermList) q_51);
      p_51 :
      if(match_int(r_51, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_51)), term_t_23), term_t_23);
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
ATerm Escape_double_quote_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  z_51 :
  if(((ATgetType(b_52) == AT_LIST) && ((ATermList) b_52 != ATempty)))
    {
      c_52 = ATgetFirst((ATermList) b_52);
      d_52 = (ATerm) ATgetNext((ATermList) b_52);
      a_52 :
      if(match_int(c_52, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_52)), term_v_23), term_t_23);
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
ATerm Escape_0 (ATerm t)
{
  ATerm z_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = z_23;
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm p_2 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, p_2);
      }
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_0 (ATerm t)
{
  t = string_as_chars_1(t, escape_chars_0);
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
  l_52 = t;
  k_52 :
  if(match_cons(l_52, sym__2))
    {
      m_52 = ATgetArgument(l_52, 0);
      n_52 = ATgetArgument(l_52, 1);
      {
        ATerm q_52 = NULL,s_52 = NULL;
        ATerm k_24;
        k_24 = t;
        {
          ATerm r_52 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_l_24), not_null(m_52));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  r_52 = t;
                  if(((q_52 != NULL) && (q_52 != r_52)))
                    _fail(r_52);
                  else
                    q_52 = r_52;
                }
              }
            }
          }
        }
        t = k_24;
        {
          ATerm x_52 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_m_24), not_null(m_52));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  x_52 = t;
                  if(((s_52 != NULL) && (s_52 != x_52)))
                    _fail(x_52);
                  else
                    s_52 = x_52;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(s_52))), term_t_24)))), not_null(n_52)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(q_52))), term_t_24)))));
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
  ATerm e_53 = NULL;
  e_53 = t;
  {
    ATerm g_53 = NULL,h_53 = NULL;
    t = term_x_6;
    {
      ATerm q_2 (ATerm t)
      {
        t = term_g_7;
        return(t);
      }
      t = rewrite_1(t, q_2);
      {
        g_53 = t;
        c_53 :
        if(match_cons(g_53, sym_Defined_1))
          {
            h_53 = ATgetArgument(g_53, 0);
            d_53 :
            if(!(match_string(h_53, "e_0")))
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
    t = not_null(e_53);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm n_53 = NULL;
  n_53 = t;
  {
    ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(n_53));
    {
      ATerm r_2 (ATerm t)
      {
        t = term_l_7;
        return(t);
      }
      t = rewrite_1(t, r_2);
      {
        p_53 = t;
        l_53 :
        if(match_cons(p_53, sym_Defined_2))
          {
            q_53 = ATgetArgument(p_53, 0);
            r_53 = ATgetArgument(p_53, 1);
            m_53 :
            if(match_string(q_53, "f_0"))
              {
                if(((n_53 != NULL) && (n_53 != r_53)))
                  _fail(r_53);
                else
                  n_53 = r_53;
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
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
  y_53 = t;
  x_53 :
  if(match_cons(y_53, sym_SDef_3))
    {
      z_53 = ATgetArgument(y_53, 0);
      a_54 = ATgetArgument(y_53, 1);
      b_54 = ATgetArgument(y_53, 2);
      {
        ATerm f_54 = NULL,g_54 = NULL;
        ATerm h_54 = NULL;
        t = not_null(a_54);
        {
          ATerm i_54 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            h_54 = t;
            {
              if(((f_54 != NULL) && (f_54 != h_54)))
                _fail(h_54);
              else
                f_54 = h_54;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_53), not_null(b_54));
                {
                  ATerm u_24 = t;
                  int f_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_2 (ATerm t)
                      {
                        ATerm g_25 = t;
                        int h_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            LocalPopChoice(h_25);
                          }
                        else
                          {
                            t = g_25;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, s_2, _id);
                      t = TracedBody_0(t);
                      LocalPopChoice(f_25);
                    }
                  else
                    {
                      t = u_24;
                      t = PlainBody_0(t);
                    }
                  {
                    i_54 = t;
                    if(((g_54 != NULL) && (g_54 != i_54)))
                      _fail(i_54);
                    else
                      g_54 = i_54;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_n_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_53)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(f_54)), term_j_25)))), not_null(g_54));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  o_54 :
  if(match_cons(p_54, sym__2))
    {
      q_54 = ATgetArgument(p_54, 0);
      r_54 = ATgetArgument(p_54, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_54)), not_null(q_54)), (ATerm) ATinsert(ATempty, not_null(q_54)));
        t = conc_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm w_54 = NULL;
  ATerm x_54 = NULL;
  x_54 = t;
  if(((w_54 != NULL) && (w_54 != x_54)))
    _fail(x_54);
  else
    w_54 = x_54;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_23, not_null(w_54));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm k_98 (ATerm))
{
  t = explode_string_0(t);
  {
    t = k_98(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
  b_55 = t;
  a_55 :
  if(((ATgetType(b_55) == AT_LIST) && ((ATermList) b_55 != ATempty)))
    {
      c_55 = ATgetFirst((ATermList) b_55);
      d_55 = (ATerm) ATgetNext((ATermList) b_55);
      t = not_null(c_55);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
  j_55 = t;
  i_55 :
  if(match_cons(j_55, sym__2))
    {
      k_55 = ATgetArgument(j_55, 0);
      l_55 = ATgetArgument(j_55, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_55), not_null(l_55));
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
ATerm rewrite_1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm r_55 = NULL;
  ATerm t_55 = NULL;
  r_55 = t;
  {
    ATerm u_55 = NULL;
    t = term_k_25;
    {
      t = k_89(t);
      {
        u_55 = t;
        if(((t_55 != NULL) && (t_55 != u_55)))
          _fail(u_55);
        else
          t_55 = u_55;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_55), not_null(r_55));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
  c_56 = t;
  b_56 :
  if(match_cons(c_56, sym__2))
    {
      d_56 = ATgetArgument(c_56, 0);
      e_56 = ATgetArgument(c_56, 1);
      {
        ATerm h_56 = NULL;
        ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(d_56), not_null(e_56));
        {
          ATerm t_2 (ATerm t)
          {
            t = term_l_25;
            return(t);
          }
          t = rewrite_1(t, t_2);
          {
            i_56 = t;
            z_55 :
            if(match_cons(i_56, sym_Defined_2))
              {
                j_56 = ATgetArgument(i_56, 0);
                k_56 = ATgetArgument(i_56, 1);
                a_56 :
                if(match_string(j_56, "o_0"))
                  {
                    if(((h_56 != NULL) && (h_56 != k_56)))
                      _fail(k_56);
                    else
                      h_56 = k_56;
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
        t = not_null(h_56);
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
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t_56 = t;
  s_56 :
  if(match_cons(t_56, sym_OpDecl_2))
    {
      u_56 = ATgetArgument(t_56, 0);
      v_56 = ATgetArgument(t_56, 1);
      {
        ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,e_57 = NULL;
        ATerm m_25;
        m_25 = t;
        {
          ATerm b_57 = NULL;
          t = not_null(v_56);
          {
            ATerm c_57 = NULL;
            t = Arity_0(t);
            {
              b_57 = t;
              {
                if(((z_56 != NULL) && (z_56 != b_57)))
                  _fail(b_57);
                else
                  z_56 = b_57;
                {
                  ATerm d_57 = NULL;
                  t = int_to_string_0(t);
                  {
                    c_57 = t;
                    {
                      if(((y_56 != NULL) && (y_56 != c_57)))
                        _fail(c_57);
                      else
                        y_56 = c_57;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_56), not_null(z_56));
                        {
                          t = ConstructorName_0(t);
                          {
                            d_57 = t;
                            if(((a_57 != NULL) && (a_57 != d_57)))
                              _fail(d_57);
                            else
                              a_57 = d_57;
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
        t = m_25;
        {
          ATerm f_57 = NULL;
          t = not_null(u_56);
          {
            t = double_quote_0(t);
            {
              f_57 = t;
              if(((e_57 != NULL) && (e_57 != f_57)))
                _fail(f_57);
              else
                e_57 = f_57;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_57)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_57)), term_x_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_25), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(y_56))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(e_57))))))));
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
  ATerm o_57 = NULL;
  ATerm q_57 = NULL;
  o_57 = t;
  {
    ATerm r_57 = NULL,t_57 = NULL;
    ATerm s_57 = NULL;
    t = not_null(o_57);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          s_57 = t;
          if(((r_57 != NULL) && (r_57 != s_57)))
            _fail(s_57);
          else
            r_57 = s_57;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_57), (ATerm) ATinsert(ATempty, term_s_25));
      {
        t = conc_0(t);
        {
          t_57 = t;
          if(((q_57 != NULL) && (q_57 != t_57)))
            _fail(t_57);
          else
            q_57 = t_57;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_b_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_u_25, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_b_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(q_57)));
  }
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
ATerm int_to_string_0 (ATerm t)
{
  ATerm y_57 = NULL;
  y_57 = t;
  t = SSL_int_to_string(not_null(y_57));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  h_58 :
  if(((ATgetType(j_58) == AT_LIST) && ((ATermList) j_58 != ATempty)))
    {
      k_58 = ATgetFirst((ATermList) j_58);
      l_58 = (ATerm) ATgetNext((ATermList) j_58);
      i_58 :
      if(match_int(k_58, 95))
        {
          ATerm n_58 = NULL;
          ATerm o_58 = NULL;
          t = not_null(l_58);
          {
            t = t_0(t);
            {
              o_58 = t;
              if(((n_58 != NULL) && (n_58 != o_58)))
                _fail(o_58);
              else
                n_58 = o_58;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_58)), term_v_25), term_v_25);
        }
      else
        {
          if(match_int(k_58, 45))
            {
              ATerm q_58 = NULL;
              ATerm r_58 = NULL;
              t = not_null(l_58);
              {
                t = t_0(t);
                {
                  r_58 = t;
                  if(((q_58 != NULL) && (q_58 != r_58)))
                    _fail(r_58);
                  else
                    q_58 = r_58;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_58)), term_v_25);
            }
          else
            {
              if(match_int(k_58, 39))
                {
                  ATerm x_58 = NULL;
                  ATerm y_58 = NULL;
                  t = not_null(l_58);
                  {
                    t = t_0(t);
                    {
                      y_58 = t;
                      if(((x_58 != NULL) && (x_58 != y_58)))
                        _fail(y_58);
                      else
                        x_58 = y_58;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_58)), term_v_25), term_w_25), term_v_25);
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
ATerm escape_1 (ATerm t, ATerm n_98 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm f_59 (ATerm t)
    {
      ATerm b_26 = t;
      int c_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_98(t, f_59);
          LocalPopChoice(c_26);
        }
      else
        {
          t = b_26;
          {
            ATerm d_26 = t;
            int e_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, f_59);
                LocalPopChoice(e_26);
              }
            else
              {
                t = d_26;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = f_59(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm))
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_101(t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL;
        n_59 = t;
        m_59 :
        if(((ATgetType(n_59) == AT_LIST) && ((ATermList) n_59 != ATempty)))
          {
            o_59 = ATgetFirst((ATermList) n_59);
            p_59 = (ATerm) ATgetNext((ATermList) n_59);
            {
              ATerm x_59 = NULL,z_59 = NULL;
              ATerm l_26;
              l_26 = t;
              {
                ATerm y_59 = NULL;
                t = not_null(o_59);
                {
                  t = g_101(t);
                  {
                    y_59 = t;
                    if(((x_59 != NULL) && (x_59 != y_59)))
                      _fail(y_59);
                    else
                      x_59 = y_59;
                  }
                }
              }
              t = l_26;
              {
                ATerm a_60 = NULL;
                t = not_null(p_59);
                {
                  t = foldr_3(t, e_101, f_101, g_101);
                  {
                    a_60 = t;
                    if(((z_59 != NULL) && (z_59 != a_60)))
                      _fail(a_60);
                    else
                      z_59 = a_60;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_59), not_null(z_59));
                  t = f_101(t);
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
  ATerm u_2 (ATerm t)
  {
    t = term_h_17;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_j_17;
    return(t);
  }
  t = foldr_3(t, u_2, add_0, v_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
  i_60 = t;
  g_60 :
  if(match_cons(i_60, sym_FunType_2))
    {
      j_60 = ATgetArgument(i_60, 0);
      h_60 = ATgetArgument(i_60, 1);
      {
        t = not_null(j_60);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(i_60, sym_ConstType_1))
        {
          j_60 = ATgetArgument(i_60, 0);
          t = term_h_17;
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
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL;
  v_60 = t;
  u_60 :
  if(match_cons(v_60, sym_OpDecl_2))
    {
      w_60 = ATgetArgument(v_60, 0);
      x_60 = ATgetArgument(v_60, 1);
      {
        ATerm a_61 = NULL,t_67 = NULL;
        ATerm u_67 = NULL;
        t = not_null(x_60);
        {
          ATerm v_67 = NULL,s_68 = NULL,u_68 = NULL;
          t = Arity_0(t);
          {
            u_67 = t;
            {
              if(((a_61 != NULL) && (a_61 != u_67)))
                _fail(u_67);
              else
                a_61 = u_67;
              {
                ATerm o_26;
                o_26 = t;
                {
                  ATerm p_68 = NULL;
                  t = not_null(w_60);
                  {
                    t = cify_0(t);
                    {
                      p_68 = t;
                      if(((v_67 != NULL) && (v_67 != p_68)))
                        _fail(p_68);
                      else
                        v_67 = p_68;
                    }
                  }
                }
                t = o_26;
                {
                  ATerm t_68 = NULL;
                  t = not_null(a_61);
                  {
                    t = int_to_string_0(t);
                    {
                      t_68 = t;
                      if(((s_68 != NULL) && (s_68 != t_68)))
                        _fail(t_68);
                      else
                        s_68 = t_68;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_68)), term_u_26), not_null(v_67)), term_r_26);
                    {
                      t = concat_strings_0(t);
                      {
                        u_68 = t;
                        {
                          if(((t_67 != NULL) && (t_67 != u_68)))
                            _fail(u_68);
                          else
                            t_67 = u_68;
                          {
                            ATerm v_26;
                            v_26 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(w_60), not_null(a_61)), (ATerm) ATmakeAppl(sym_Defined_2, term_w_26, not_null(t_67)));
                              {
                                ATerm w_2 (ATerm t)
                                {
                                  t = term_l_25;
                                  return(t);
                                }
                                t = assert_1(t, w_2);
                              }
                            }
                            t = v_26;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_67)), term_o_8)));
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
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL;
  i_69 = t;
  e_69 :
  if(match_cons(i_69, sym_Signature_1))
    {
      j_69 = ATgetArgument(i_69, 0);
      f_69 :
      if(((ATgetType(j_69) == AT_LIST) && ((ATermList) j_69 != ATempty)))
        {
          k_69 = ATgetFirst((ATermList) j_69);
          m_69 = (ATerm) ATgetNext((ATermList) j_69);
          g_69 :
          if(match_cons(k_69, sym_Constructors_1))
            {
              l_69 = ATgetArgument(k_69, 0);
              h_69 :
              if(((ATermList) m_69 == ATempty))
                {
                  {
                    ATerm o_69 = NULL,p_69 = NULL,s_69 = NULL;
                    ATerm a_27;
                    a_27 = t;
                    {
                      ATerm q_69 = NULL;
                      t = not_null(l_69);
                      {
                        ATerm r_69 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          q_69 = t;
                          {
                            if(((o_69 != NULL) && (o_69 != q_69)))
                              _fail(q_69);
                            else
                              o_69 = q_69;
                            {
                              t = not_null(l_69);
                              {
                                t = InitConstructors_0(t);
                                {
                                  r_69 = t;
                                  if(((p_69 != NULL) && (p_69 != r_69)))
                                    _fail(r_69);
                                  else
                                    p_69 = r_69;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = a_27;
                    {
                      ATerm t_69 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_69), (ATerm) ATinsert(ATempty, not_null(p_69)));
                      {
                        t = conc_0(t);
                        {
                          t_69 = t;
                          if(((s_69 != NULL) && (s_69 != t_69)))
                            _fail(t_69);
                          else
                            s_69 = t_69;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(s_69));
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
ATerm TranslateType_0 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  d_70 = t;
  b_70 :
  if(match_cons(d_70, sym_FunType_2))
    {
      e_70 = ATgetArgument(d_70, 0);
      c_70 = ATgetArgument(d_70, 1);
      {
        ATerm g_70 = NULL;
        ATerm h_70 = NULL;
        t = not_null(e_70);
        {
          t = map_1(t, TranslateType_0);
          {
            h_70 = t;
            if(((g_70 != NULL) && (g_70 != h_70)))
              _fail(h_70);
            else
              g_70 = h_70;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_n_8, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(g_70)));
      }
    }
  else
    {
      if(match_cons(d_70, sym_ConstType_1))
        {
          e_70 = ATgetArgument(d_70, 0);
          t = term_n_8;
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
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
  r_70 = t;
  o_70 :
  if(match_cons(r_70, sym_VarDec_2))
    {
      s_70 = ATgetArgument(r_70, 0);
      t_70 = ATgetArgument(r_70, 1);
      p_70 :
      if(match_cons(t_70, sym_FunType_2))
        {
          u_70 = ATgetArgument(t_70, 0);
          q_70 = ATgetArgument(t_70, 1);
          {
            ATerm x_70 = NULL;
            ATerm y_70 = NULL;
            t = not_null(u_70);
            {
              t = map_1(t, TranslateType_0);
              {
                y_70 = t;
                if(((x_70 != NULL) && (x_70 != y_70)))
                  _fail(y_70);
                else
                  x_70 = y_70;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_n_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_70)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(x_70)))));
          }
        }
      else
        {
          if(match_cons(t_70, sym_ConstType_1))
            {
              u_70 = ATgetArgument(t_70, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_n_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_70)), term_o_8));
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
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
  g_71 = t;
  f_71 :
  if(match_cons(g_71, sym_SDef_3))
    {
      h_71 = ATgetArgument(g_71, 0);
      i_71 = ATgetArgument(g_71, 1);
      j_71 = ATgetArgument(g_71, 2);
      {
        ATerm n_71 = NULL;
        ATerm o_71 = NULL;
        t = not_null(i_71);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            o_71 = t;
            if(((n_71 != NULL) && (n_71 != o_71)))
              _fail(o_71);
            else
              n_71 = o_71;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(n_71)), term_n_8))))));
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
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL;
  d_72 = t;
  x_71 :
  if(match_cons(d_72, sym_Specification_1))
    {
      e_72 = ATgetArgument(d_72, 0);
      y_71 :
      if(((ATgetType(e_72) == AT_LIST) && ((ATermList) e_72 != ATempty)))
        {
          f_72 = ATgetFirst((ATermList) e_72);
          h_72 = (ATerm) ATgetNext((ATermList) e_72);
          z_71 :
          if(match_cons(f_72, sym_Signature_1))
            {
              g_72 = ATgetArgument(f_72, 0);
              a_72 :
              if(((ATgetType(h_72) == AT_LIST) && ((ATermList) h_72 != ATempty)))
                {
                  i_72 = ATgetFirst((ATermList) h_72);
                  k_72 = (ATerm) ATgetNext((ATermList) h_72);
                  b_72 :
                  if(match_cons(i_72, sym_Strategies_1))
                    {
                      j_72 = ATgetArgument(i_72, 0);
                      c_72 :
                      if(((ATermList) k_72 == ATempty))
                        {
                          {
                            ATerm n_72 = NULL,o_72 = NULL,v_72 = NULL;
                            ATerm b_27;
                            b_27 = t;
                            {
                              ATerm p_72 = NULL;
                              t = not_null(j_72);
                              {
                                ATerm u_72 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  p_72 = t;
                                  {
                                    if(((n_72 != NULL) && (n_72 != p_72)))
                                      _fail(p_72);
                                    else
                                      n_72 = p_72;
                                    {
                                      t = term_q_7;
                                      {
                                        ATerm c_27 = t;
                                        int d_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm x_2 (ATerm t)
                                              {
                                                ATerm q_72 = NULL;
                                                ATerm r_72 = NULL,t_72 = NULL;
                                                ATerm s_72 = NULL;
                                                s_72 = t;
                                                if(((r_72 != NULL) && (r_72 != s_72)))
                                                  _fail(s_72);
                                                else
                                                  r_72 = s_72;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_e_27, not_null(r_72));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      t_72 = t;
                                                      if(((q_72 != NULL) && (q_72 != t_72)))
                                                        _fail(t_72);
                                                      else
                                                        q_72 = t_72;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(q_72));
                                                return(t);
                                              }
                                              t = map_1(t, x_2);
                                            }
                                            LocalPopChoice(d_27);
                                          }
                                        else
                                          {
                                            t = c_27;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          u_72 = t;
                                          if(((o_72 != NULL) && (o_72 != u_72)))
                                            _fail(u_72);
                                          else
                                            o_72 = u_72;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = b_27;
                            {
                              ATerm w_72 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(j_72)), not_null(n_72)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_27), (ATerm) ATmakeAppl(sym_Signature_1, not_null(g_72))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_27, (ATerm) ATinsert(ATempty, term_n_27)))), not_null(o_72));
                              {
                                t = concat_0(t);
                                {
                                  w_72 = t;
                                  if(((v_72 != NULL) && (v_72 != w_72)))
                                    _fail(w_72);
                                  else
                                    v_72 = w_72;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(v_72));
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
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
  f_73 = t;
  e_73 :
  if(((ATgetType(f_73) == AT_LIST) && ((ATermList) f_73 != ATempty)))
    {
      g_73 = ATgetFirst((ATermList) f_73);
      h_73 = (ATerm) ATgetNext((ATermList) f_73);
      t = not_null(h_73);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
  o_73 = t;
  n_73 :
  if(match_cons(o_73, sym__2))
    {
      p_73 = ATgetArgument(o_73, 0);
      q_73 = ATgetArgument(o_73, 1);
      {
        ATerm s_27;
        s_27 = t;
        {
          ATerm t_73 = NULL;
          ATerm u_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_73), not_null(q_73));
          {
            ATerm v_27 = t;
            int w_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(w_27);
              }
            else
              {
                t = v_27;
                t = (ATerm) ATempty;
              }
            {
              u_73 = t;
              if(((t_73 != NULL) && (t_73 != u_73)))
                _fail(u_73);
              else
                t_73 = u_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_73), not_null(q_73), not_null(t_73));
            t = table_put_0(t);
          }
        }
        t = s_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL;
  ATerm x_27;
  x_27 = t;
  {
    ATerm e_74 = NULL;
    ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
    t = f_89(t);
    {
      e_74 = t;
      {
        if(((d_74 != NULL) && (d_74 != e_74)))
          _fail(e_74);
        else
          d_74 = e_74;
        {
          ATerm y_27 = t;
          int z_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_74), term_a_28);
              t = table_get_0(t);
              LocalPopChoice(z_27);
            }
          else
            {
              t = y_27;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            f_74 = t;
            a_74 :
            if(((ATgetType(f_74) == AT_LIST) && ((ATermList) f_74 != ATempty)))
              {
                g_74 = ATgetFirst((ATermList) f_74);
                h_74 = (ATerm) ATgetNext((ATermList) f_74);
                {
                  if(((c_74 != NULL) && (c_74 != g_74)))
                    _fail(g_74);
                  else
                    c_74 = g_74;
                  {
                    if(((b_74 != NULL) && (b_74 != h_74)))
                      _fail(h_74);
                    else
                      b_74 = h_74;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(d_74), term_a_28, not_null(b_74));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(c_74);
                          {
                            ATerm y_2 (ATerm t)
                            {
                              ATerm i_74 = NULL;
                              i_74 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_74), not_null(i_74));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, y_2);
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
  t = x_27;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm z_115 (ATerm), ATerm a_116 (ATerm))
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_115(t);
      t = a_116(t);
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        t = a_116(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm p_74 = NULL;
  ATerm d_28;
  d_28 = t;
  {
    ATerm q_74 = NULL;
    ATerm r_74 = NULL;
    t = e_89(t);
    {
      q_74 = t;
      {
        if(((p_74 != NULL) && (p_74 != q_74)))
          _fail(q_74);
        else
          p_74 = q_74;
        {
          ATerm s_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_74), term_a_28);
          {
            ATerm i_28 = t;
            int j_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_28);
              }
            else
              {
                t = i_28;
                t = (ATerm) ATempty;
              }
            {
              s_74 = t;
              if(((r_74 != NULL) && (r_74 != s_74)))
                _fail(s_74);
              else
                r_74 = s_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_74), term_a_28, (ATerm) ATinsert(CheckATermList(not_null(r_74)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_28;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm g_89 (ATerm), ATerm h_89 (ATerm))
{
  t = begin_scope_1(t, g_89);
  {
    ATerm z_2 (ATerm t)
    {
      t = end_scope_1(t, g_89);
      return(t);
    }
    t = restore_always_2(t, h_89, z_2);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_89 (ATerm))
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  a_75 = t;
  z_74 :
  if(match_cons(a_75, sym__2))
    {
      b_75 = ATgetArgument(a_75, 0);
      c_75 = ATgetArgument(a_75, 1);
      {
        ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL;
        ATerm k_28;
        k_28 = t;
        {
          ATerm i_75 = NULL;
          ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
          t = i_89(t);
          {
            i_75 = t;
            {
              if(((f_75 != NULL) && (f_75 != i_75)))
                _fail(i_75);
              else
                f_75 = i_75;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_75), not_null(b_75), not_null(c_75));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_28 = t;
                    int q_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_75), term_a_28);
                        t = table_get_0(t);
                        LocalPopChoice(q_28);
                      }
                    else
                      {
                        t = o_28;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      j_75 = t;
                      y_74 :
                      if(((ATgetType(j_75) == AT_LIST) && ((ATermList) j_75 != ATempty)))
                        {
                          k_75 = ATgetFirst((ATermList) j_75);
                          l_75 = (ATerm) ATgetNext((ATermList) j_75);
                          {
                            if(((g_75 != NULL) && (g_75 != k_75)))
                              _fail(k_75);
                            else
                              g_75 = k_75;
                            {
                              if(((h_75 != NULL) && (h_75 != l_75)))
                                _fail(l_75);
                              else
                                h_75 = l_75;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_75), term_a_28, (ATerm) ATinsert(CheckATermList(not_null(h_75)), (ATerm) ATinsert(CheckATermList(not_null(g_75)), not_null(b_75))));
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
        t = k_28;
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
  ATerm r_75 = NULL,s_75 = NULL;
  ATerm t_28;
  t_28 = t;
  {
    ATerm t_75 = NULL;
    ATerm u_75 = NULL;
    t = term_v_28;
    {
      t_75 = t;
      {
        if(((r_75 != NULL) && (r_75 != t_75)))
          _fail(t_75);
        else
          r_75 = t_75;
        {
          t = term_h_16;
          {
            u_75 = t;
            if(((s_75 != NULL) && (s_75 != u_75)))
              _fail(u_75);
            else
              s_75 = u_75;
          }
        }
      }
    }
  }
  t = t_28;
  {
    ATerm w_28;
    w_28 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_75)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_28, not_null(s_75)));
      {
        ATerm a_3 (ATerm t)
        {
          t = term_x_13;
          return(t);
        }
        t = assert_1(t, a_3);
      }
    }
    t = w_28;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm a_76 (ATerm t)
    {
      ATerm b_3 (ATerm t)
      {
        t = term_m_10;
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        ATerm d_3 (ATerm t)
        {
          ATerm y_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              LocalPopChoice(z_28);
            }
          else
            {
              t = y_28;
              {
                ATerm a_29 = t;
                int l_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    LocalPopChoice(l_29);
                  }
                else
                  {
                    t = a_29;
                    {
                      ATerm z_29 = t;
                      int a_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          LocalPopChoice(a_30);
                        }
                      else
                        {
                          t = z_29;
                          t = TranslateStrat_0(t);
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_1(t, d_3);
        {
          t = _all(t, a_76);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, b_3, c_3);
      return(t);
    }
    t = a_76(t);
    {
      ATerm e_3 (ATerm t)
      {
        ATerm f_3 (ATerm t)
        {
          ATerm z_75 = NULL;
          z_75 = t;
          y_75 :
          if(match_cons(z_75, sym_InitCachedTerms_0))
            {
              t = init_cached_terms_0(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = oncetd_1(t, f_3);
        return(t);
      }
      t = try_1(t, e_3);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm g_76 = NULL;
  ATerm l_30;
  l_30 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm h_76 = NULL,i_76 = NULL;
      h_76 = t;
      f_76 :
      if(match_cons(h_76, sym_Program_1))
        {
          i_76 = ATgetArgument(h_76, 0);
          if(((g_76 != NULL) && (g_76 != i_76)))
            _fail(i_76);
          else
            g_76 = i_76;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_30), not_null(g_76)), term_q_30));
      {
        t = printnl_0(t);
        {
          t = term_j_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL;
  m_76 = t;
  l_76 :
  if(match_cons(m_76, sym__2))
    {
      n_76 = ATgetArgument(m_76, 0);
      o_76 = ATgetArgument(m_76, 1);
      {
        ATerm s_30;
        s_30 = t;
        t = SSL_printnl(not_null(n_76), not_null(o_76));
        t = s_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_76 = NULL;
  t_76 = t;
  t = SSL_implode_string(not_null(t_76));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      {
        ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
        y_76 = t;
        x_76 :
        if(((ATgetType(y_76) == AT_LIST) && ((ATermList) y_76 != ATempty)))
          {
            z_76 = ATgetFirst((ATermList) y_76);
            a_77 = (ATerm) ATgetNext((ATermList) y_76);
            {
              t = not_null(z_76);
              {
                ATerm h_3 (ATerm t)
                {
                  t = not_null(a_77);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_3);
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
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm k_77 = NULL;
  ATerm m_77 = NULL;
  k_77 = t;
  {
    ATerm n_77 = NULL;
    ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
    t = not_null(k_77);
    {
      n_77 = t;
      {
        t = SSL_explode_term(not_null(n_77));
        {
          p_77 = t;
          i_77 :
          if(match_cons(p_77, sym__2))
            {
              q_77 = ATgetArgument(p_77, 0);
              r_77 = ATgetArgument(p_77, 1);
              j_77 :
              if(match_string(q_77, ""))
                {
                  if(((m_77 != NULL) && (m_77 != r_77)))
                    _fail(r_77);
                  else
                    m_77 = r_77;
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
    {
      t = not_null(m_77);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_107 (ATerm))
{
  ATerm v_77 (ATerm t)
  {
    ATerm v_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_77);
        LocalPopChoice(y_30);
      }
    else
      {
        t = v_30;
        {
          t = Nil_0(t);
          t = h_107(t);
        }
      }
    return(t);
  }
  t = v_77(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL;
  y_77 = t;
  x_77 :
  if(match_cons(y_77, sym__2))
    {
      z_77 = ATgetArgument(y_77, 0);
      a_78 = ATgetArgument(y_77, 1);
      {
        t = not_null(z_77);
        {
          ATerm i_3 (ATerm t)
          {
            t = not_null(a_78);
            return(t);
          }
          t = at_end_1(t, i_3);
        }
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
  ATerm c_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(h_31);
    }
  else
    {
      t = c_31;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_78 = NULL;
  f_78 = t;
  t = SSL_explode_string(not_null(f_78));
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
ATerm debug_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm m_31;
  m_31 = t;
  {
    ATerm k_78 = NULL,m_78 = NULL;
    ATerm n_31;
    n_31 = t;
    {
      ATerm l_78 = NULL;
      t = k_97(t);
      {
        l_78 = t;
        if(((k_78 != NULL) && (k_78 != l_78)))
          _fail(l_78);
        else
          k_78 = l_78;
      }
    }
    t = n_31;
    {
      ATerm n_78 = NULL;
      n_78 = t;
      if(((m_78 != NULL) && (m_78 != n_78)))
        _fail(n_78);
      else
        m_78 = n_78;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_78)), not_null(k_78)));
        t = printnl_0(t);
      }
    }
  }
  t = m_31;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm r_78 = NULL;
  r_78 = t;
  t = SSL_is_string(not_null(r_78));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_3);
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
            {
              ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
              a_79 = t;
              z_78 :
              if(match_cons(a_79, sym_Path_1))
                {
                  b_79 = ATgetArgument(a_79, 0);
                  t = not_null(b_79);
                }
              else
                {
                  if(match_cons(a_79, sym_Var_1))
                    {
                      b_79 = ATgetArgument(a_79, 0);
                      {
                        t = not_null(b_79);
                        {
                          ATerm w_31 = t;
                          int x_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_31);
                            }
                          else
                            {
                              t = w_31;
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = term_y_31;
                                  return(t);
                                }
                                t = debug_1(t, k_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(a_79, sym_Prefix_2))
                        {
                          b_79 = ATgetArgument(a_79, 0);
                          c_79 = ATgetArgument(a_79, 1);
                          {
                            ATerm h_79 = NULL,k_79 = NULL;
                            ATerm z_31;
                            z_31 = t;
                            {
                              ATerm i_79 = NULL;
                              t = not_null(b_79);
                              {
                                t = eval_config_0(t);
                                {
                                  i_79 = t;
                                  if(((h_79 != NULL) && (h_79 != i_79)))
                                    _fail(i_79);
                                  else
                                    h_79 = i_79;
                                }
                              }
                            }
                            t = z_31;
                            {
                              ATerm l_79 = NULL;
                              t = not_null(c_79);
                              {
                                t = eval_config_0(t);
                                {
                                  l_79 = t;
                                  if(((k_79 != NULL) && (k_79 != l_79)))
                                    _fail(l_79);
                                  else
                                    k_79 = l_79;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_79), not_null(k_79));
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
  ATerm t_79 = NULL;
  t_79 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_6, not_null(t_79));
    {
      t = table_get_0(t);
      {
        ATerm l_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_32;
            a_32 = t;
            {
              ATerm v_79 = NULL;
              ATerm w_79 = NULL;
              w_79 = t;
              if(((v_79 != NULL) && (v_79 != w_79)))
                _fail(w_79);
              else
                v_79 = w_79;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_6, not_null(t_79), not_null(v_79));
                t = table_put_0(t);
              }
            }
            t = a_32;
          }
          return(t);
        }
        t = try_1(t, l_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm c_95 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm b_32;
    b_32 = t;
    {
      ATerm a_80 = NULL;
      ATerm b_80 = NULL;
      t = term_c_32;
      {
        t = get_config_0(t);
        {
          b_80 = t;
          if(((a_80 != NULL) && (a_80 != b_80)))
            _fail(b_80);
          else
            a_80 = b_80;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_80), term_d_32);
        t = geq_0(t);
      }
    }
    t = b_32;
    t = c_95(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
  f_80 = t;
  e_80 :
  if(match_cons(f_80, sym__2))
    {
      g_80 = ATgetArgument(f_80, 0);
      h_80 = ATgetArgument(f_80, 1);
      t = SSL_WriteToTextFile(not_null(g_80), not_null(h_80));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm q_68 (ATerm), ATerm r_68 (ATerm))
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
  r_80 = t;
  q_80 :
  if(match_cons(r_80, sym__2))
    {
      s_80 = ATgetArgument(r_80, 0);
      t_80 = ATgetArgument(r_80, 1);
      {
        ATerm x_80 = NULL,z_80 = NULL;
        ATerm y_80 = NULL;
        t = SSLgetAnnotations(not_null(r_80));
        {
          y_80 = t;
          if(((x_80 != NULL) && (x_80 != y_80)))
            _fail(y_80);
          else
            x_80 = y_80;
        }
        {
          t = not_null(s_80);
          {
            ATerm b_81 = NULL;
            t = q_68(t);
            {
              z_80 = t;
              {
                t = not_null(t_80);
                {
                  ATerm d_81 = NULL;
                  t = r_68(t);
                  {
                    b_81 = t;
                    {
                      ATerm e_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_80), not_null(b_81)), not_null(x_80));
                      {
                        e_81 = t;
                        if(((d_81 != NULL) && (d_81 != e_81)))
                          _fail(e_81);
                        else
                          d_81 = e_81;
                      }
                      t = not_null(d_81);
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
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
  m_81 = t;
  l_81 :
  if(match_cons(m_81, sym__2))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      t = SSL_WriteToBinaryFile(not_null(n_81), not_null(o_81));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_81 = NULL;
  ATerm e_32;
  e_32 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm f_32 = t;
      int g_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            ATerm z_81 = NULL,a_82 = NULL;
            z_81 = t;
            v_81 :
            if(match_cons(z_81, sym_Output_1))
              {
                a_82 = ATgetArgument(z_81, 0);
                if(((y_81 != NULL) && (y_81 != a_82)))
                  _fail(a_82);
                else
                  y_81 = a_82;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_3);
          LocalPopChoice(g_32);
        }
      else
        {
          t = f_32;
          {
            ATerm b_82 = NULL;
            t = term_h_32;
            {
              b_82 = t;
              if(((y_81 != NULL) && (y_81 != b_82)))
                _fail(b_82);
              else
                y_81 = b_82;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_3, _id);
  }
  t = e_32;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(y_81);
        return(t);
      }
      t = split_2(t, q_3, _id);
      return(t);
    }
    t = _2(t, _id, p_3);
    {
      ATerm i_32 = t;
      int j_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              ATerm c_82 = NULL;
              c_82 = t;
              x_81 :
              if(!(match_cons(c_82, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, s_3);
            return(t);
          }
          t = _2(t, r_3, WriteToBinaryFile_0);
          LocalPopChoice(j_32);
        }
      else
        {
          t = i_32;
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
ATerm apply_strategy_1 (ATerm t, ATerm u_96 (ATerm))
{
  ATerm i_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL;
  ATerm k_32;
  k_32 = t;
  t = dtime_0(t);
  t = k_32;
  {
    t = u_96(t);
    {
      ATerm l_32;
      l_32 = t;
      {
        ATerm j_82 = NULL;
        t = dtime_0(t);
        {
          j_82 = t;
          if(((i_82 != NULL) && (i_82 != j_82)))
            _fail(j_82);
          else
            i_82 = j_82;
        }
      }
      t = l_32;
      {
        k_82 = t;
        h_82 :
        if(match_cons(k_82, sym__2))
          {
            l_82 = ATgetArgument(k_82, 0);
            m_82 = ATgetArgument(k_82, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_82)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_82))), not_null(m_82));
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
  ATerm s_82 = NULL;
  s_82 = t;
  t = SSL_ReadFromFile(not_null(s_82));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_99 (ATerm), ATerm r_99 (ATerm))
{
  ATerm x_82 = NULL,z_82 = NULL;
  ATerm m_32;
  m_32 = t;
  {
    ATerm y_82 = NULL;
    t = q_99(t);
    {
      y_82 = t;
      if(((x_82 != NULL) && (x_82 != y_82)))
        _fail(y_82);
      else
        x_82 = y_82;
    }
  }
  t = m_32;
  {
    ATerm a_83 = NULL;
    t = r_99(t);
    {
      a_83 = t;
      if(((z_82 != NULL) && (z_82 != a_83)))
        _fail(a_83);
      else
        z_82 = a_83;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_82), not_null(z_82));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_83 = NULL;
  ATerm n_32;
  n_32 = t;
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 (ATerm t)
        {
          ATerm i_83 = NULL,j_83 = NULL;
          i_83 = t;
          e_83 :
          if(match_cons(i_83, sym_Input_1))
            {
              j_83 = ATgetArgument(i_83, 0);
              if(((g_83 != NULL) && (g_83 != j_83)))
                _fail(j_83);
              else
                g_83 = j_83;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, t_3);
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        {
          ATerm k_83 = NULL;
          t = term_q_32;
          {
            k_83 = t;
            if(((g_83 != NULL) && (g_83 != k_83)))
              _fail(k_83);
            else
              g_83 = k_83;
          }
        }
      }
  }
  t = n_32;
  {
    ATerm u_3 (ATerm t)
    {
      t = not_null(g_83);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_3);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_83 = NULL;
  o_83 = t;
  t = SSL_string_to_int(not_null(o_83));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL;
  w_83 = t;
  u_83 :
  if(match_string(w_83, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_83) == AT_LIST) && ((ATermList) w_83 != ATempty)))
        {
          x_83 = ATgetFirst((ATermList) w_83);
          y_83 = (ATerm) ATgetNext((ATermList) w_83);
          v_83 :
          if(((ATgetType(y_83) == AT_LIST) && ((ATermList) y_83 != ATempty)))
            {
              z_83 = ATgetFirst((ATermList) y_83);
              a_84 = (ATerm) ATgetNext((ATermList) y_83);
              {
                ATerm e_84 = NULL;
                ATerm r_32;
                r_32 = t;
                {
                  t = not_null(x_83);
                  t = j_0(t);
                }
                t = r_32;
                {
                  ATerm f_84 = NULL;
                  t = not_null(z_83);
                  {
                    t = k_0(t);
                    {
                      f_84 = t;
                      if(((e_84 != NULL) && (e_84 != f_84)))
                        _fail(f_84);
                      else
                        e_84 = f_84;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_84)), not_null(e_84));
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
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 (ATerm t)
      {
        ATerm y_84 = NULL;
        y_84 = t;
        j_84 :
        if(!(match_string(y_84, "-i")))
          {
            if(!(match_string(y_84, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        ATerm b_85 = NULL;
        ATerm u_32;
        u_32 = t;
        {
          ATerm z_84 = NULL;
          ATerm a_85 = NULL;
          a_85 = t;
          if(((z_84 != NULL) && (z_84 != a_85)))
            _fail(a_85);
          else
            z_84 = a_85;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_v_32, not_null(z_84));
            t = set_config_0(t);
          }
        }
        t = u_32;
        {
          ATerm c_85 = NULL;
          c_85 = t;
          if(((b_85 != NULL) && (b_85 != c_85)))
            _fail(c_85);
          else
            b_85 = c_85;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_85));
        }
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_w_32;
        return(t);
      }
      t = ArgOption_3(t, v_3, w_3, x_3);
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm d_85 = NULL;
              d_85 = t;
              m_84 :
              if(!(match_string(d_85, "-o")))
                {
                  if(!(match_string(d_85, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              ATerm g_85 = NULL;
              ATerm z_32;
              z_32 = t;
              {
                ATerm e_85 = NULL;
                ATerm f_85 = NULL;
                f_85 = t;
                if(((e_85 != NULL) && (e_85 != f_85)))
                  _fail(f_85);
                else
                  e_85 = f_85;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_33, not_null(e_85));
                  t = set_config_0(t);
                }
              }
              t = z_32;
              {
                ATerm h_85 = NULL;
                h_85 = t;
                if(((g_85 != NULL) && (g_85 != h_85)))
                  _fail(h_85);
                else
                  g_85 = h_85;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_85));
              }
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_b_33;
              return(t);
            }
            t = ArgOption_3(t, y_3, z_3, a_4);
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
                  ATerm b_4 (ATerm t)
                  {
                    ATerm i_85 = NULL;
                    i_85 = t;
                    p_84 :
                    if(!(match_string(i_85, "-S")))
                      {
                        if(!(match_string(i_85, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_4 (ATerm t)
                  {
                    t = term_e_33;
                    t = set_config_0(t);
                    t = term_f_33;
                    return(t);
                  }
                  ATerm d_4 (ATerm t)
                  {
                    t = term_g_33;
                    return(t);
                  }
                  t = Option_3(t, b_4, c_4, d_4);
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
                        ATerm e_4 (ATerm t)
                        {
                          ATerm j_85 = NULL;
                          j_85 = t;
                          q_84 :
                          if(!(match_string(j_85, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          ATerm m_85 = NULL;
                          ATerm j_33;
                          j_33 = t;
                          {
                            ATerm k_85 = NULL;
                            ATerm l_85 = NULL;
                            t = string_to_int_0(t);
                            {
                              l_85 = t;
                              if(((k_85 != NULL) && (k_85 != l_85)))
                                _fail(l_85);
                              else
                                k_85 = l_85;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_32, not_null(k_85));
                              t = set_config_0(t);
                            }
                          }
                          t = j_33;
                          {
                            ATerm n_85 = NULL;
                            n_85 = t;
                            if(((m_85 != NULL) && (m_85 != n_85)))
                              _fail(n_85);
                            else
                              m_85 = n_85;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_85));
                          }
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          t = term_k_33;
                          return(t);
                        }
                        t = ArgOption_3(t, e_4, f_4, g_4);
                        LocalPopChoice(i_33);
                      }
                    else
                      {
                        t = h_33;
                        {
                          ATerm l_33 = t;
                          int m_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_4 (ATerm t)
                              {
                                ATerm o_85 = NULL;
                                o_85 = t;
                                t_84 :
                                if(!(match_string(o_85, "-k")))
                                  {
                                    if(!(match_string(o_85, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm i_4 (ATerm t)
                              {
                                ATerm n_33;
                                n_33 = t;
                                {
                                  ATerm p_85 = NULL;
                                  ATerm q_85 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    q_85 = t;
                                    if(((p_85 != NULL) && (p_85 != q_85)))
                                      _fail(q_85);
                                    else
                                      p_85 = q_85;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_o_33, not_null(p_85));
                                    t = set_config_0(t);
                                  }
                                }
                                t = n_33;
                                return(t);
                              }
                              ATerm j_4 (ATerm t)
                              {
                                t = term_p_33;
                                return(t);
                              }
                              t = ArgOption_3(t, h_4, i_4, j_4);
                              LocalPopChoice(m_33);
                            }
                          else
                            {
                              t = l_33;
                              {
                                ATerm q_33 = t;
                                int r_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_4 (ATerm t)
                                    {
                                      ATerm r_85 = NULL;
                                      r_85 = t;
                                      v_84 :
                                      if(!(match_string(r_85, "-v")))
                                        {
                                          if(!(match_string(r_85, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm l_4 (ATerm t)
                                    {
                                      t = term_t_33;
                                      t = set_config_0(t);
                                      t = term_u_33;
                                      return(t);
                                    }
                                    ATerm m_4 (ATerm t)
                                    {
                                      t = term_v_33;
                                      return(t);
                                    }
                                    t = Option_3(t, k_4, l_4, m_4);
                                    LocalPopChoice(r_33);
                                  }
                                else
                                  {
                                    t = q_33;
                                    {
                                      ATerm w_33 = t;
                                      int x_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_4 (ATerm t)
                                          {
                                            ATerm s_85 = NULL;
                                            s_85 = t;
                                            w_84 :
                                            if(!(match_string(s_85, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm o_4 (ATerm t)
                                          {
                                            t = term_z_33;
                                            t = set_config_0(t);
                                            t = term_a_34;
                                            return(t);
                                          }
                                          ATerm p_4 (ATerm t)
                                          {
                                            t = term_b_34;
                                            return(t);
                                          }
                                          t = Option_3(t, n_4, o_4, p_4);
                                          LocalPopChoice(x_33);
                                        }
                                      else
                                        {
                                          t = w_33;
                                          {
                                            ATerm q_4 (ATerm t)
                                            {
                                              ATerm v_85 = NULL;
                                              v_85 = t;
                                              x_84 :
                                              if(!(match_string(v_85, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm r_4 (ATerm t)
                                            {
                                              t = term_d_34;
                                              t = set_config_0(t);
                                              t = term_e_34;
                                              return(t);
                                            }
                                            ATerm s_4 (ATerm t)
                                            {
                                              t = term_f_34;
                                              return(t);
                                            }
                                            t = Option_3(t, q_4, r_4, s_4);
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
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATempty, term_g_34));
  {
    t = printnl_0(t);
    {
      t = term_j_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_86 = NULL;
  e_86 = t;
  t = SSL_TicksToSeconds(not_null(e_86));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL;
  j_86 = t;
  i_86 :
  if(match_cons(j_86, sym__2))
    {
      k_86 = ATgetArgument(j_86, 0);
      l_86 = ATgetArgument(j_86, 1);
      {
        ATerm h_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_86), not_null(l_86));
            LocalPopChoice(i_34);
          }
        else
          {
            t = h_34;
            t = SSL_addr(not_null(k_86), not_null(l_86));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_101 (ATerm), ATerm d_101 (ATerm))
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_101(t);
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      {
        ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
        s_86 = t;
        r_86 :
        if(((ATgetType(s_86) == AT_LIST) && ((ATermList) s_86 != ATempty)))
          {
            t_86 = ATgetFirst((ATermList) s_86);
            u_86 = (ATerm) ATgetNext((ATermList) s_86);
            {
              ATerm x_86 = NULL;
              ATerm y_86 = NULL;
              t = not_null(u_86);
              {
                t = foldr_2(t, c_101, d_101);
                {
                  y_86 = t;
                  if(((x_86 != NULL) && (x_86 != y_86)))
                    _fail(y_86);
                  else
                    x_86 = y_86;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_86), not_null(x_86));
                t = d_101(t);
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
ATerm crush_2 (ATerm t, ATerm u_102 (ATerm), ATerm v_102 (ATerm))
{
  ATerm f_87 = NULL;
  ATerm h_87 = NULL;
  f_87 = t;
  {
    ATerm i_87 = NULL;
    ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
    t = not_null(f_87);
    {
      i_87 = t;
      {
        t = SSL_explode_term(not_null(i_87));
        {
          k_87 = t;
          e_87 :
          if(match_cons(k_87, sym__2))
            {
              l_87 = ATgetArgument(k_87, 0);
              m_87 = ATgetArgument(k_87, 1);
              if(((h_87 != NULL) && (h_87 != m_87)))
                _fail(m_87);
              else
                h_87 = m_87;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_87);
      t = foldr_2(t, u_102, v_102);
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
    ATerm w_4 (ATerm t)
    {
      t = term_h_17;
      return(t);
    }
    t = crush_2(t, w_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL;
  s_87 = t;
  r_87 :
  if(match_cons(s_87, sym__2))
    {
      t_87 = ATgetArgument(s_87, 0);
      u_87 = ATgetArgument(s_87, 1);
      {
        ATerm l_34;
        l_34 = t;
        {
          ATerm m_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_87), not_null(u_87));
              LocalPopChoice(n_34);
            }
          else
            {
              t = m_34;
              t = SSL_gtr(not_null(t_87), not_null(u_87));
            }
        }
        t = l_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm c_88 = NULL;
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
      d_88 = t;
      b_88 :
      if(match_cons(d_88, sym__2))
        {
          e_88 = ATgetArgument(d_88, 0);
          f_88 = ATgetArgument(d_88, 1);
          {
            if(((c_88 != NULL) && (c_88 != e_88)))
              _fail(e_88);
            else
              c_88 = e_88;
            if(((c_88 != NULL) && (c_88 != f_88)))
              _fail(f_88);
            else
              c_88 = f_88;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_95 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    ATerm q_34;
    q_34 = t;
    {
      ATerm i_88 = NULL;
      ATerm j_88 = NULL;
      t = term_c_32;
      {
        t = get_config_0(t);
        {
          j_88 = t;
          if(((i_88 != NULL) && (i_88 != j_88)))
            _fail(j_88);
          else
            i_88 = j_88;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_88), term_j_17);
        t = geq_0(t);
      }
    }
    t = q_34;
    t = b_95(t);
    return(t);
  }
  t = try_1(t, x_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm n_88 = NULL,p_88 = NULL;
    ATerm r_34;
    r_34 = t;
    {
      ATerm o_88 = NULL;
      t = run_time_0(t);
      {
        o_88 = t;
        if(((n_88 != NULL) && (n_88 != o_88)))
          _fail(o_88);
        else
          n_88 = o_88;
      }
    }
    t = r_34;
    {
      ATerm q_88 = NULL;
      t = term_s_34;
      {
        t = get_config_0(t);
        {
          q_88 = t;
          if(((p_88 != NULL) && (p_88 != q_88)))
            _fail(q_88);
          else
            p_88 = q_88;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_34), not_null(n_88)), term_t_34), not_null(p_88)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_4);
  {
    t = term_h_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_88 = NULL;
  x_88 = t;
  w_88 :
  if(match_cons(x_88, sym_Version_0))
    {
      ATerm z_88 = NULL,b_89 = NULL;
      ATerm w_34;
      w_34 = t;
      {
        ATerm a_89 = NULL;
        t = SSLgetAnnotations(not_null(x_88));
        {
          a_89 = t;
          if(((z_88 != NULL) && (z_88 != a_89)))
            _fail(a_89);
          else
            z_88 = a_89;
        }
      }
      t = w_34;
      {
        ATerm c_89 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_88));
        {
          c_89 = t;
          if(((b_89 != NULL) && (b_89 != c_89)))
            _fail(c_89);
          else
            b_89 = c_89;
        }
        t = not_null(b_89);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_96 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm x_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_35);
      }
    else
      {
        t = x_34;
        {
          ATerm c_35 = t;
          int d_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_35);
            }
          else
            {
              t = c_35;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_4);
  t = s_96(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_89 = NULL;
  n_89 = t;
  t = SSL_table_create(not_null(n_89));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_89 = NULL;
  r_89 = t;
  {
    ATerm e_35;
    e_35 = t;
    {
      t = term_f_35;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_35, term_g_35, not_null(r_89));
          t = table_put_0(t);
        }
      }
    }
    t = e_35;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_89 = NULL;
  v_89 = t;
  t = SSL_table_destroy(not_null(v_89));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_90 = NULL;
  ATerm k_90 (ATerm t)
  {
    t = SSL_exit(not_null(d_90));
    return(t);
  }
  ATerm l_90 (ATerm t)
  {
    ATerm g_90 = NULL,i_90 = NULL;
    ATerm h_35;
    h_35 = t;
    {
      ATerm h_90 = NULL;
      t = SSLgetAnnotations(not_null(d_90));
      {
        h_90 = t;
        if(((g_90 != NULL) && (g_90 != h_90)))
          _fail(h_90);
        else
          g_90 = h_90;
      }
    }
    t = h_35;
    {
      ATerm j_90 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_exit_0), not_null(g_90));
      {
        j_90 = t;
        if(((i_90 != NULL) && (i_90 != j_90)))
          _fail(j_90);
        else
          i_90 = j_90;
      }
      t = not_null(i_90);
    }
    return(t);
  }
  d_90 = t;
  c_90 :
  if(match_cons(d_90, sym_exit_0))
    {
      ATerm j_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_90(t);
          LocalPopChoice(k_35);
        }
      else
        {
          t = j_35;
          t = l_90(t);
        }
    }
  else
    {
      t = k_90(t);
    }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
  p_90 = t;
  o_90 :
  if(((ATermList) p_90 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_90) == AT_LIST) && ((ATermList) p_90 != ATempty)))
        {
          q_90 = ATgetFirst((ATermList) p_90);
          r_90 = (ATerm) ATgetNext((ATermList) p_90);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm l_35;
  l_35 = t;
  {
    ATerm u_90 = NULL;
    ATerm x_90 = NULL;
    ATerm m_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = m_35;
        {
          ATerm v_90 = NULL;
          ATerm w_90 = NULL;
          w_90 = t;
          if(((v_90 != NULL) && (v_90 != w_90)))
            _fail(w_90);
          else
            v_90 = w_90;
          t = (ATerm) ATinsert(ATempty, not_null(v_90));
        }
      }
    {
      x_90 = t;
      if(((u_90 != NULL) && (u_90 != x_90)))
        _fail(x_90);
      else
        u_90 = x_90;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_32, not_null(u_90));
      t = printnl_0(t);
    }
  }
  t = l_35;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm h_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_106 (ATerm))
{
  ATerm a_91 (ATerm t)
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        t = Cons_2(t, s_106, a_91);
      }
    return(t);
  }
  t = a_91(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL;
  j_91 = t;
  g_91 :
  if(((ATgetType(j_91) == AT_LIST) && ((ATermList) j_91 != ATempty)))
    {
      h_91 = ATgetFirst((ATermList) j_91);
      i_91 = (ATerm) ATgetNext((ATermList) j_91);
      {
        ATerm m_91 = NULL;
        t = not_null(i_91);
        {
          ATerm s_35;
          s_35 = t;
          {
            ATerm n_91 = NULL,p_91 = NULL,r_91 = NULL;
            ATerm t_35;
            t_35 = t;
            {
              ATerm o_91 = NULL;
              t = i_0(t);
              {
                o_91 = t;
                if(((n_91 != NULL) && (n_91 != o_91)))
                  _fail(o_91);
                else
                  n_91 = o_91;
              }
            }
            t = t_35;
            {
              ATerm q_91 = NULL;
              t = not_null(h_91);
              {
                t = h_0(t);
                {
                  q_91 = t;
                  if(((p_91 != NULL) && (p_91 != q_91)))
                    _fail(q_91);
                  else
                    p_91 = q_91;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_91)), not_null(p_91));
                {
                  r_91 = t;
                  if(((m_91 != NULL) && (m_91 != r_91)))
                    _fail(r_91);
                  else
                    m_91 = r_91;
                }
              }
            }
          }
          t = s_35;
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(m_91);
              return(t);
            }
            t = reverse_acc_2(t, h_0, a_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) j_91 == ATempty))
        {
          {
            t = term_k_25;
            t = i_0(t);
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
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_81 (ATerm))
{
  ATerm c_92 = NULL,d_92 = NULL;
  c_92 = t;
  b_92 :
  if(match_cons(c_92, sym_Program_1))
    {
      d_92 = ATgetArgument(c_92, 0);
      {
        ATerm g_92 = NULL,i_92 = NULL;
        ATerm h_92 = NULL;
        t = SSLgetAnnotations(not_null(c_92));
        {
          h_92 = t;
          if(((g_92 != NULL) && (g_92 != h_92)))
            _fail(h_92);
          else
            g_92 = h_92;
        }
        {
          t = not_null(d_92);
          {
            ATerm k_92 = NULL;
            t = r_81(t);
            {
              i_92 = t;
              {
                ATerm l_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_92)), not_null(g_92));
                {
                  l_92 = t;
                  if(((k_92 != NULL) && (k_92 != l_92)))
                    _fail(l_92);
                  else
                    k_92 = l_92;
                }
                t = not_null(k_92);
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
  ATerm u_92 = NULL;
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_92 = NULL;
      t = term_s_34;
      {
        t = get_config_0(t);
        {
          v_92 = t;
          if(((u_92 != NULL) && (u_92 != v_92)))
            _fail(v_92);
          else
            u_92 = v_92;
        }
      }
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm d_5 (ATerm t)
          {
            ATerm w_92 = NULL;
            w_92 = t;
            if(((u_92 != NULL) && (u_92 != w_92)))
              _fail(w_92);
            else
              u_92 = w_92;
            return(t);
          }
          t = Program_1(t, d_5);
          return(t);
        }
        t = option_defined_1(t, c_5);
      }
    }
  {
    ATerm e_5 (ATerm t)
    {
      ATerm f_5 (ATerm t)
      {
        t = not_null(u_92);
        return(t);
      }
      t = short_description_1(t, f_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_5);
    {
      t = term_w_35;
      {
        t = echo_0(t);
        {
          t = term_c_36;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm x_92 = NULL;
                  ATerm y_92 = NULL;
                  y_92 = t;
                  if(((x_92 != NULL) && (x_92 != y_92)))
                    _fail(y_92);
                  else
                    x_92 = y_92;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_92)), term_d_36);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm z_92 = NULL;
                    ATerm a_93 = NULL;
                    ATerm i_5 (ATerm t)
                    {
                      t = not_null(u_92);
                      return(t);
                    }
                    t = long_description_1(t, i_5);
                    {
                      a_93 = t;
                      if(((z_92 != NULL) && (z_92 != a_93)))
                        _fail(a_93);
                      else
                        z_92 = a_93;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_92)), term_e_36);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_5);
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
ATerm debug_0 (ATerm t)
{
  ATerm f_36;
  f_36 = t;
  {
    ATerm m_93 = NULL;
    ATerm n_93 = NULL;
    n_93 = t;
    if(((m_93 != NULL) && (m_93 != n_93)))
      _fail(n_93);
    else
      m_93 = n_93;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATempty, not_null(m_93)));
      t = printnl_0(t);
    }
  }
  t = f_36;
  return(t);
}
ATerm say_1 (ATerm t, ATerm l_97 (ATerm))
{
  ATerm g_36;
  g_36 = t;
  {
    t = l_97(t);
    t = debug_0(t);
  }
  t = g_36;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm w_93 = NULL,x_93 = NULL;
  w_93 = t;
  v_93 :
  if(match_cons(w_93, sym_Undefined_1))
    {
      x_93 = ATgetArgument(w_93, 0);
      {
        ATerm a_94 = NULL,c_94 = NULL;
        ATerm b_94 = NULL;
        t = SSLgetAnnotations(not_null(w_93));
        {
          b_94 = t;
          if(((a_94 != NULL) && (a_94 != b_94)))
            _fail(b_94);
          else
            a_94 = b_94;
        }
        {
          t = not_null(x_93);
          {
            ATerm e_94 = NULL;
            t = s_81(t);
            {
              c_94 = t;
              {
                ATerm f_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_94)), not_null(a_94));
                {
                  f_94 = t;
                  if(((e_94 != NULL) && (e_94 != f_94)))
                    _fail(f_94);
                  else
                    e_94 = f_94;
                }
                t = not_null(e_94);
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
ATerm fetch_1 (ATerm t, ATerm b_107 (ATerm))
{
  ATerm k_94 (ATerm t)
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_107, _id);
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        t = Cons_2(t, _id, k_94);
      }
    return(t);
  }
  t = k_94(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_94 (ATerm))
{
  t = fetch_1(t, l_94);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_94 = NULL;
  q_94 = t;
  p_94 :
  if(match_cons(q_94, sym_Help_0))
    {
      ATerm s_94 = NULL,u_94 = NULL;
      ATerm j_36;
      j_36 = t;
      {
        ATerm t_94 = NULL;
        t = SSLgetAnnotations(not_null(q_94));
        {
          t_94 = t;
          if(((s_94 != NULL) && (s_94 != t_94)))
            _fail(t_94);
          else
            s_94 = t_94;
        }
      }
      t = j_36;
      {
        ATerm v_94 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_94));
        {
          v_94 = t;
          if(((u_94 != NULL) && (u_94 != v_94)))
            _fail(v_94);
          else
            u_94 = v_94;
        }
        t = not_null(u_94);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_115 (ATerm))
{
  ATerm k_36 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_115(t);
      LocalPopChoice(i_37);
    }
  else
    {
      t = k_36;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL;
  d_95 = t;
  a_95 :
  if(match_cons(d_95, sym__2))
    {
      e_95 = ATgetArgument(d_95, 0);
      f_95 = ATgetArgument(d_95, 1);
      t = SSL_table_get(not_null(e_95), not_null(f_95));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL,t_95 = NULL;
  m_95 = t;
  l_95 :
  if(match_cons(m_95, sym__3))
    {
      n_95 = ATgetArgument(m_95, 0);
      o_95 = ATgetArgument(m_95, 1);
      t_95 = ATgetArgument(m_95, 2);
      {
        ATerm j_37;
        j_37 = t;
        {
          ATerm x_95 = NULL;
          ATerm d_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_95), not_null(o_95));
          {
            ATerm k_37 = t;
            int l_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_37);
              }
            else
              {
                t = k_37;
                t = (ATerm) ATempty;
              }
            {
              d_96 = t;
              if(((x_95 != NULL) && (x_95 != d_96)))
                _fail(d_96);
              else
                x_95 = d_96;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_95), not_null(o_95), (ATerm) ATinsert(CheckATermList(not_null(x_95)), not_null(t_95)));
            t = table_put_0(t);
          }
        }
        t = j_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm l_96 = NULL;
  ATerm m_96 = NULL;
  t = term_k_25;
  {
    t = l_93(t);
    {
      m_96 = t;
      if(((l_96 != NULL) && (l_96 != m_96)))
        _fail(m_96);
      else
        l_96 = m_96;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_36, term_b_36, not_null(l_96));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm t_96 = NULL,v_96 = NULL,w_96 = NULL;
  t_96 = t;
  r_96 :
  if(match_string(t_96, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(t_96) == AT_LIST) && ((ATermList) t_96 != ATempty)))
        {
          v_96 = ATgetFirst((ATermList) t_96);
          w_96 = (ATerm) ATgetNext((ATermList) t_96);
          {
            ATerm z_96 = NULL;
            ATerm m_37;
            m_37 = t;
            {
              t = not_null(v_96);
              t = a_0(t);
            }
            t = m_37;
            {
              ATerm a_97 = NULL;
              t = term_k_25;
              {
                t = b_0(t);
                {
                  a_97 = t;
                  if(((z_96 != NULL) && (z_96 != a_97)))
                    _fail(a_97);
                  else
                    z_96 = a_97;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_96)), not_null(z_96));
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
  ATerm k_5 (ATerm t)
  {
    ATerm f_97 = NULL;
    f_97 = t;
    e_97 :
    if(!(match_string(f_97, "--help")))
      {
        if(!(match_string(f_97, "-h")))
          {
            if(!(match_string(f_97, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_o_37;
    {
      t = set_config_0(t);
      t = term_g_38;
    }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_h_38;
    return(t);
  }
  t = Option_3(t, k_5, l_5, m_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_97 = NULL,j_97 = NULL,m_97 = NULL;
  i_97 = t;
  h_97 :
  if(((ATgetType(i_97) == AT_LIST) && ((ATermList) i_97 != ATempty)))
    {
      j_97 = ATgetFirst((ATermList) i_97);
      m_97 = (ATerm) ATgetNext((ATermList) i_97);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_97)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_97)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_87 (ATerm), ATerm a_88 (ATerm))
{
  ATerm w_97 = NULL,x_97 = NULL,y_97 = NULL;
  w_97 = t;
  v_97 :
  if(((ATgetType(w_97) == AT_LIST) && ((ATermList) w_97 != ATempty)))
    {
      x_97 = ATgetFirst((ATermList) w_97);
      y_97 = (ATerm) ATgetNext((ATermList) w_97);
      {
        ATerm c_98 = NULL,e_98 = NULL;
        ATerm d_98 = NULL;
        t = SSLgetAnnotations(not_null(w_97));
        {
          d_98 = t;
          if(((c_98 != NULL) && (c_98 != d_98)))
            _fail(d_98);
          else
            c_98 = d_98;
        }
        {
          t = not_null(x_97);
          {
            ATerm g_98 = NULL;
            t = z_87(t);
            {
              e_98 = t;
              {
                t = not_null(y_97);
                {
                  ATerm i_98 = NULL;
                  t = a_88(t);
                  {
                    g_98 = t;
                    {
                      ATerm j_98 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_98)), not_null(e_98)), not_null(c_98));
                      {
                        j_98 = t;
                        if(((i_98 != NULL) && (i_98 != j_98)))
                          _fail(j_98);
                        else
                          i_98 = j_98;
                      }
                      t = not_null(i_98);
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
  ATerm x_98 = NULL;
  x_98 = t;
  w_98 :
  if(((ATermList) x_98 == ATempty))
    {
      {
        ATerm z_98 = NULL,b_99 = NULL;
        ATerm i_38;
        i_38 = t;
        {
          ATerm a_99 = NULL;
          t = SSLgetAnnotations(not_null(x_98));
          {
            a_99 = t;
            if(((z_98 != NULL) && (z_98 != a_99)))
              _fail(a_99);
            else
              z_98 = a_99;
          }
        }
        t = i_38;
        {
          ATerm c_99 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_98));
          {
            c_99 = t;
            if(((b_99 != NULL) && (b_99 != c_99)))
              _fail(c_99);
            else
              b_99 = c_99;
          }
          t = not_null(b_99);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL;
  i_99 = t;
  h_99 :
  if(match_cons(i_99, sym__2))
    {
      j_99 = ATgetArgument(i_99, 0);
      k_99 = ATgetArgument(i_99, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_6, not_null(j_99), not_null(k_99));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_93 (ATerm))
{
  ATerm j_38;
  j_38 = t;
  {
    ATerm n_5 (ATerm t)
    {
      t = term_k_38;
      t = j_93(t);
      return(t);
    }
    t = try_1(t, n_5);
  }
  t = j_38;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm u_99 = NULL;
      ATerm p_38;
      p_38 = t;
      {
        ATerm s_99 = NULL;
        ATerm t_99 = NULL;
        t_99 = t;
        if(((s_99 != NULL) && (s_99 != t_99)))
          _fail(t_99);
        else
          s_99 = t_99;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_34, not_null(s_99));
          t = set_config_0(t);
        }
      }
      t = p_38;
      {
        ATerm v_99 = NULL;
        v_99 = t;
        if(((u_99 != NULL) && (u_99 != v_99)))
          _fail(v_99);
        else
          u_99 = v_99;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_99));
      }
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm q_38 = t;
      int e_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_39 = t;
          int s_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(s_39);
            }
          else
            {
              t = p_39;
              {
                t = j_93(t);
                t = Cons_2(t, _id, p_5);
              }
            }
          LocalPopChoice(e_39);
        }
      else
        {
          t = q_38;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_5, p_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
  ATerm t_39;
  t_39 = t;
  {
    ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL;
    e_100 = t;
    a_100 :
    if(match_cons(e_100, sym__3))
      {
        f_100 = ATgetArgument(e_100, 0);
        g_100 = ATgetArgument(e_100, 1);
        h_100 = ATgetArgument(e_100, 2);
        {
          if(((b_100 != NULL) && (b_100 != f_100)))
            _fail(f_100);
          else
            b_100 = f_100;
          {
            if(((c_100 != NULL) && (c_100 != g_100)))
              _fail(g_100);
            else
              c_100 = g_100;
            {
              if(((d_100 != NULL) && (d_100 != h_100)))
                _fail(h_100);
              else
                d_100 = h_100;
              t = SSL_table_put(not_null(b_100), not_null(c_100), not_null(d_100));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_39;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_93 (ATerm))
{
  ATerm k_100 = NULL;
  ATerm u_39;
  u_39 = t;
  {
    t = term_v_39;
    t = table_put_0(t);
  }
  t = u_39;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm w_39 = t;
      int x_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_93(t);
          LocalPopChoice(x_39);
        }
      else
        {
          t = w_39;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_5);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm y_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_40;
            a_40 = t;
            {
              ATerm b_40 = t;
              int c_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_37;
                  t = get_config_0(t);
                  LocalPopChoice(c_40);
                }
              else
                {
                  t = b_40;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = a_40;
            {
              t = system_usage_0(t);
              {
                t = term_h_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_39);
          }
        else
          {
            t = y_39;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm l_100 = NULL;
                  l_100 = t;
                  if(((k_100 != NULL) && (k_100 != l_100)))
                    _fail(l_100);
                  else
                    k_100 = l_100;
                  return(t);
                }
                t = Undefined_1(t, t_5);
                return(t);
              }
              t = option_defined_1(t, s_5);
              {
                ATerm u_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_100)), term_d_40);
                  return(t);
                }
                t = say_1(t, u_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_17;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_5);
      {
        ATerm e_40;
        e_40 = t;
        {
          t = term_a_36;
          t = table_destroy_0(t);
        }
        t = e_40;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm s_95 (ATerm))
{
  t = parse_options_1(t, p_95);
  {
    t = store_options_0(t);
    {
      t = r_95(t);
      {
        ATerm f_40 = t;
        int g_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_95);
            LocalPopChoice(g_40);
          }
        else
          {
            t = f_40;
            {
              ATerm h_40 = t;
              int i_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_95(t);
                  t = report_success_0(t);
                  LocalPopChoice(i_40);
                }
              else
                {
                  t = h_40;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_96(t);
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, g_96);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_5, i_96, j_96, z_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm r_40;
      r_40 = t;
      {
        ATerm o_100 = NULL;
        ATerm p_100 = NULL;
        t = term_s_34;
        {
          t = get_config_0(t);
          {
            p_100 = t;
            if(((o_100 != NULL) && (o_100 != p_100)))
              _fail(p_100);
            else
              o_100 = p_100;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATempty, not_null(o_100)));
          t = printnl_0(t);
        }
      }
      t = r_40;
      return(t);
    }
    t = if_verbose2_1(t, b_6);
    return(t);
  }
  t = iowrap_4(t, a_96, b_96, c_96, a_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm y_95 (ATerm), ATerm z_95 (ATerm))
{
  t = iowrap_3(t, y_95, z_95, default_usage_0);
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
