#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_Match_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  {
    sym__1 = ATmakeSymbol("", 1, ATfalse);
    ATprotectSymbol(sym__1);
  }
  {
    sym__2 = ATmakeSymbol("", 2, ATfalse);
    ATprotectSymbol(sym__2);
  }
  {
    sym__3 = ATmakeSymbol("", 3, ATfalse);
    ATprotectSymbol(sym__3);
  }
  {
    sym__4 = ATmakeSymbol("", 4, ATfalse);
    ATprotectSymbol(sym__4);
  }
  {
    sym__5 = ATmakeSymbol("", 5, ATfalse);
    ATprotectSymbol(sym__5);
  }
  {
    sym__6 = ATmakeSymbol("", 6, ATfalse);
    ATprotectSymbol(sym__6);
  }
  {
    sym__7 = ATmakeSymbol("", 7, ATfalse);
    ATprotectSymbol(sym__7);
  }
  {
    sym__8 = ATmakeSymbol("", 8, ATfalse);
    ATprotectSymbol(sym__8);
  }
  {
    sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
    ATprotectSymbol(sym_Scopes_0);
  }
  {
    sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
    ATprotectSymbol(sym_Keys_0);
  }
  {
    sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
    ATprotectSymbol(sym_Keys_1);
  }
  {
    sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
    ATprotectSymbol(sym_Keys_2);
  }
  {
    sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
    ATprotectSymbol(sym_Keys_3);
  }
  {
    sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
    ATprotectSymbol(sym_Keys_4);
  }
  {
    sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
    ATprotectSymbol(sym_Keys_5);
  }
  {
    sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
    ATprotectSymbol(sym_Keys_6);
  }
  {
    sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
    ATprotectSymbol(sym_Keys_7);
  }
  {
    sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
    ATprotectSymbol(sym_Keys_8);
  }
  {
    sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
    ATprotectSymbol(sym_Keys_9);
  }
  {
    sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
    ATprotectSymbol(sym_Keys_10);
  }
  {
    sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
    ATprotectSymbol(sym_Defined_0);
  }
  {
    sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
    ATprotectSymbol(sym_Defined_1);
  }
  {
    sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
    ATprotectSymbol(sym_Defined_2);
  }
  {
    sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
    ATprotectSymbol(sym_Defined_3);
  }
  {
    sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
    ATprotectSymbol(sym_Defined_4);
  }
  {
    sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
    ATprotectSymbol(sym_Defined_5);
  }
  {
    sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
    ATprotectSymbol(sym_Defined_6);
  }
  {
    sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
    ATprotectSymbol(sym_Defined_7);
  }
  {
    sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
    ATprotectSymbol(sym_Defined_8);
  }
  {
    sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
    ATprotectSymbol(sym_Defined_9);
  }
  {
    sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
    ATprotectSymbol(sym_Defined_10);
  }
  {
    sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
    ATprotectSymbol(sym_Undefined_0);
  }
  {
    sym_PointerOf_1 = ATmakeSymbol("PointerOf", 1, ATfalse);
    ATprotectSymbol(sym_PointerOf_1);
  }
  {
    sym_Pointer_2 = ATmakeSymbol("Pointer", 2, ATfalse);
    ATprotectSymbol(sym_Pointer_2);
  }
  {
    sym_ParamListVarArgs_1 = ATmakeSymbol("ParamListVarArgs", 1, ATfalse);
    ATprotectSymbol(sym_ParamListVarArgs_1);
  }
  {
    sym_ParamList_1 = ATmakeSymbol("ParamList", 1, ATfalse);
    ATprotectSymbol(sym_ParamList_1);
  }
  {
    sym_ArrayDecl_2 = ATmakeSymbol("ArrayDecl", 2, ATfalse);
    ATprotectSymbol(sym_ArrayDecl_2);
  }
  {
    sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
    ATprotectSymbol(sym_DeclBracket_1);
  }
  {
    sym_DeclBracket1_1 = ATmakeSymbol("DeclBracket1", 1, ATfalse);
    ATprotectSymbol(sym_DeclBracket1_1);
  }
  {
    sym_DeclBracket2_1 = ATmakeSymbol("DeclBracket2", 1, ATfalse);
    ATprotectSymbol(sym_DeclBracket2_1);
  }
  {
    sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
    ATprotectSymbol(sym_FunType_2);
  }
  {
    sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
    ATprotectSymbol(sym_ParamDecl_2);
  }
  {
    sym_ParamDecl2_2 = ATmakeSymbol("ParamDecl2", 2, ATfalse);
    ATprotectSymbol(sym_ParamDecl2_2);
  }
  {
    sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
    ATprotectSymbol(sym_TypeName_2);
  }
  {
    sym_Enum_2 = ATmakeSymbol("Enum", 2, ATfalse);
    ATprotectSymbol(sym_Enum_2);
  }
  {
    sym_EnumId_1 = ATmakeSymbol("EnumId", 1, ATfalse);
    ATprotectSymbol(sym_EnumId_1);
  }
  {
    sym_Enumerator_2 = ATmakeSymbol("Enumerator", 2, ATfalse);
    ATprotectSymbol(sym_Enumerator_2);
  }
  {
    sym_EnumVal_1 = ATmakeSymbol("EnumVal", 1, ATfalse);
    ATprotectSymbol(sym_EnumVal_1);
  }
  {
    sym_Struct_2 = ATmakeSymbol("Struct", 2, ATfalse);
    ATprotectSymbol(sym_Struct_2);
  }
  {
    sym_StructId_1 = ATmakeSymbol("StructId", 1, ATfalse);
    ATprotectSymbol(sym_StructId_1);
  }
  {
    sym_Union_2 = ATmakeSymbol("Union", 2, ATfalse);
    ATprotectSymbol(sym_Union_2);
  }
  {
    sym_UnionId_1 = ATmakeSymbol("UnionId", 1, ATfalse);
    ATprotectSymbol(sym_UnionId_1);
  }
  {
    sym_MemDecl_2 = ATmakeSymbol("MemDecl", 2, ATfalse);
    ATprotectSymbol(sym_MemDecl_2);
  }
  {
    sym_MemDecl1_2 = ATmakeSymbol("MemDecl1", 2, ATfalse);
    ATprotectSymbol(sym_MemDecl1_2);
  }
  {
    sym_BitFieldSize_2 = ATmakeSymbol("BitFieldSize", 2, ATfalse);
    ATprotectSymbol(sym_BitFieldSize_2);
  }
  {
    sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
    ATprotectSymbol(sym_IntConst_1);
  }
  {
    sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
    ATprotectSymbol(sym_FloatConst_1);
  }
  {
    sym_OctConst_1 = ATmakeSymbol("OctConst", 1, ATfalse);
    ATprotectSymbol(sym_OctConst_1);
  }
  {
    sym_HexConst_1 = ATmakeSymbol("HexConst", 1, ATfalse);
    ATprotectSymbol(sym_HexConst_1);
  }
  {
    sym_CharConst_1 = ATmakeSymbol("CharConst", 1, ATfalse);
    ATprotectSymbol(sym_CharConst_1);
  }
  {
    sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
    ATprotectSymbol(sym_StringLit_1);
  }
  {
    sym_ArrayIndex_2 = ATmakeSymbol("ArrayIndex", 2, ATfalse);
    ATprotectSymbol(sym_ArrayIndex_2);
  }
  {
    sym_FunCall_2 = ATmakeSymbol("FunCall", 2, ATfalse);
    ATprotectSymbol(sym_FunCall_2);
  }
  {
    sym_Field_2 = ATmakeSymbol("Field", 2, ATfalse);
    ATprotectSymbol(sym_Field_2);
  }
  {
    sym_DerefMember_2 = ATmakeSymbol("DerefMember", 2, ATfalse);
    ATprotectSymbol(sym_DerefMember_2);
  }
  {
    sym_PostIncr_1 = ATmakeSymbol("PostIncr", 1, ATfalse);
    ATprotectSymbol(sym_PostIncr_1);
  }
  {
    sym_PostDecr_1 = ATmakeSymbol("PostDecr", 1, ATfalse);
    ATprotectSymbol(sym_PostDecr_1);
  }
  {
    sym_PreIncr_1 = ATmakeSymbol("PreIncr", 1, ATfalse);
    ATprotectSymbol(sym_PreIncr_1);
  }
  {
    sym_PreDecr_1 = ATmakeSymbol("PreDecr", 1, ATfalse);
    ATprotectSymbol(sym_PreDecr_1);
  }
  {
    sym_SizeofExp_1 = ATmakeSymbol("SizeofExp", 1, ATfalse);
    ATprotectSymbol(sym_SizeofExp_1);
  }
  {
    sym_SizeofType_1 = ATmakeSymbol("SizeofType", 1, ATfalse);
    ATprotectSymbol(sym_SizeofType_1);
  }
  {
    sym_Address_1 = ATmakeSymbol("Address", 1, ATfalse);
    ATprotectSymbol(sym_Address_1);
  }
  {
    sym_Deref_1 = ATmakeSymbol("Deref", 1, ATfalse);
    ATprotectSymbol(sym_Deref_1);
  }
  {
    sym_Positive_1 = ATmakeSymbol("Positive", 1, ATfalse);
    ATprotectSymbol(sym_Positive_1);
  }
  {
    sym_Negative_1 = ATmakeSymbol("Negative", 1, ATfalse);
    ATprotectSymbol(sym_Negative_1);
  }
  {
    sym_Tilde_1 = ATmakeSymbol("Tilde", 1, ATfalse);
    ATprotectSymbol(sym_Tilde_1);
  }
  {
    sym_Negation_1 = ATmakeSymbol("Negation", 1, ATfalse);
    ATprotectSymbol(sym_Negation_1);
  }
  {
    sym_TypeCast_2 = ATmakeSymbol("TypeCast", 2, ATfalse);
    ATprotectSymbol(sym_TypeCast_2);
  }
  {
    sym_Mul_2 = ATmakeSymbol("Mul", 2, ATfalse);
    ATprotectSymbol(sym_Mul_2);
  }
  {
    sym_Div_2 = ATmakeSymbol("Div", 2, ATfalse);
    ATprotectSymbol(sym_Div_2);
  }
  {
    sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
    ATprotectSymbol(sym_Mod_2);
  }
  {
    sym_Add_2 = ATmakeSymbol("Add", 2, ATfalse);
    ATprotectSymbol(sym_Add_2);
  }
  {
    sym_Subt_2 = ATmakeSymbol("Subt", 2, ATfalse);
    ATprotectSymbol(sym_Subt_2);
  }
  {
    sym_ShiftLeft_2 = ATmakeSymbol("ShiftLeft", 2, ATfalse);
    ATprotectSymbol(sym_ShiftLeft_2);
  }
  {
    sym_ShiftRight_2 = ATmakeSymbol("ShiftRight", 2, ATfalse);
    ATprotectSymbol(sym_ShiftRight_2);
  }
  {
    sym_Lt_2 = ATmakeSymbol("Lt", 2, ATfalse);
    ATprotectSymbol(sym_Lt_2);
  }
  {
    sym_Gt_2 = ATmakeSymbol("Gt", 2, ATfalse);
    ATprotectSymbol(sym_Gt_2);
  }
  {
    sym_Le_2 = ATmakeSymbol("Le", 2, ATfalse);
    ATprotectSymbol(sym_Le_2);
  }
  {
    sym_Ge_2 = ATmakeSymbol("Ge", 2, ATfalse);
    ATprotectSymbol(sym_Ge_2);
  }
  {
    sym_Equal_2 = ATmakeSymbol("Equal", 2, ATfalse);
    ATprotectSymbol(sym_Equal_2);
  }
  {
    sym_NotEqual_2 = ATmakeSymbol("NotEqual", 2, ATfalse);
    ATprotectSymbol(sym_NotEqual_2);
  }
  {
    sym_And_2 = ATmakeSymbol("And", 2, ATfalse);
    ATprotectSymbol(sym_And_2);
  }
  {
    sym_ExOr_2 = ATmakeSymbol("ExOr", 2, ATfalse);
    ATprotectSymbol(sym_ExOr_2);
  }
  {
    sym_IncOr_2 = ATmakeSymbol("IncOr", 2, ATfalse);
    ATprotectSymbol(sym_IncOr_2);
  }
  {
    sym_LAnd_2 = ATmakeSymbol("LAnd", 2, ATfalse);
    ATprotectSymbol(sym_LAnd_2);
  }
  {
    sym_LOr_2 = ATmakeSymbol("LOr", 2, ATfalse);
    ATprotectSymbol(sym_LOr_2);
  }
  {
    sym_IfExp_3 = ATmakeSymbol("IfExp", 3, ATfalse);
    ATprotectSymbol(sym_IfExp_3);
  }
  {
    sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
    ATprotectSymbol(sym_Assign_3);
  }
  {
    sym_AssignEq_0 = ATmakeSymbol("AssignEq", 0, ATfalse);
    ATprotectSymbol(sym_AssignEq_0);
  }
  {
    sym_AssignMul_0 = ATmakeSymbol("AssignMul", 0, ATfalse);
    ATprotectSymbol(sym_AssignMul_0);
  }
  {
    sym_AssignDiv_0 = ATmakeSymbol("AssignDiv", 0, ATfalse);
    ATprotectSymbol(sym_AssignDiv_0);
  }
  {
    sym_AssignMod_0 = ATmakeSymbol("AssignMod", 0, ATfalse);
    ATprotectSymbol(sym_AssignMod_0);
  }
  {
    sym_AssignPlus_0 = ATmakeSymbol("AssignPlus", 0, ATfalse);
    ATprotectSymbol(sym_AssignPlus_0);
  }
  {
    sym_AssignMin_0 = ATmakeSymbol("AssignMin", 0, ATfalse);
    ATprotectSymbol(sym_AssignMin_0);
  }
  {
    sym_AssignSL_0 = ATmakeSymbol("AssignSL", 0, ATfalse);
    ATprotectSymbol(sym_AssignSL_0);
  }
  {
    sym_AssignSR_0 = ATmakeSymbol("AssignSR", 0, ATfalse);
    ATprotectSymbol(sym_AssignSR_0);
  }
  {
    sym_AssignAnd_0 = ATmakeSymbol("AssignAnd", 0, ATfalse);
    ATprotectSymbol(sym_AssignAnd_0);
  }
  {
    sym_AssignExp_0 = ATmakeSymbol("AssignExp", 0, ATfalse);
    ATprotectSymbol(sym_AssignExp_0);
  }
  {
    sym_AssignOr_0 = ATmakeSymbol("AssignOr", 0, ATfalse);
    ATprotectSymbol(sym_AssignOr_0);
  }
  {
    sym_Comma_2 = ATmakeSymbol("Comma", 2, ATfalse);
    ATprotectSymbol(sym_Comma_2);
  }
  {
    sym_EmptyExp_0 = ATmakeSymbol("EmptyExp", 0, ATfalse);
    ATprotectSymbol(sym_EmptyExp_0);
  }
  {
    sym_Typedef_0 = ATmakeSymbol("Typedef", 0, ATfalse);
    ATprotectSymbol(sym_Typedef_0);
  }
  {
    sym_Extern_0 = ATmakeSymbol("Extern", 0, ATfalse);
    ATprotectSymbol(sym_Extern_0);
  }
  {
    sym_Static_0 = ATmakeSymbol("Static", 0, ATfalse);
    ATprotectSymbol(sym_Static_0);
  }
  {
    sym_Auto_0 = ATmakeSymbol("Auto", 0, ATfalse);
    ATprotectSymbol(sym_Auto_0);
  }
  {
    sym_Register_0 = ATmakeSymbol("Register", 0, ATfalse);
    ATprotectSymbol(sym_Register_0);
  }
  {
    sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
    ATprotectSymbol(sym_Int_0);
  }
  {
    sym_Char_0 = ATmakeSymbol("Char", 0, ATfalse);
    ATprotectSymbol(sym_Char_0);
  }
  {
    sym_Short_0 = ATmakeSymbol("Short", 0, ATfalse);
    ATprotectSymbol(sym_Short_0);
  }
  {
    sym_Long_0 = ATmakeSymbol("Long", 0, ATfalse);
    ATprotectSymbol(sym_Long_0);
  }
  {
    sym_Float_0 = ATmakeSymbol("Float", 0, ATfalse);
    ATprotectSymbol(sym_Float_0);
  }
  {
    sym_Double_0 = ATmakeSymbol("Double", 0, ATfalse);
    ATprotectSymbol(sym_Double_0);
  }
  {
    sym_Signed_0 = ATmakeSymbol("Signed", 0, ATfalse);
    ATprotectSymbol(sym_Signed_0);
  }
  {
    sym_Unsigned_0 = ATmakeSymbol("Unsigned", 0, ATfalse);
    ATprotectSymbol(sym_Unsigned_0);
  }
  {
    sym_Void_0 = ATmakeSymbol("Void", 0, ATfalse);
    ATprotectSymbol(sym_Void_0);
  }
  {
    sym_Const_0 = ATmakeSymbol("Const", 0, ATfalse);
    ATprotectSymbol(sym_Const_0);
  }
  {
    sym_Volatile_0 = ATmakeSymbol("Volatile", 0, ATfalse);
    ATprotectSymbol(sym_Volatile_0);
  }
  {
    sym_Declaration_2 = ATmakeSymbol("Declaration", 2, ATfalse);
    ATprotectSymbol(sym_Declaration_2);
  }
  {
    sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
    ATprotectSymbol(sym_Declaration2_2);
  }
  {
    sym_IdDeclInit_2 = ATmakeSymbol("IdDeclInit", 2, ATfalse);
    ATprotectSymbol(sym_IdDeclInit_2);
  }
  {
    sym_DeclInit_2 = ATmakeSymbol("DeclInit", 2, ATfalse);
    ATprotectSymbol(sym_DeclInit_2);
  }
  {
    sym_ArrayInit_1 = ATmakeSymbol("ArrayInit", 1, ATfalse);
    ATprotectSymbol(sym_ArrayInit_1);
  }
  {
    sym_ArrayInitIncomplete_1 = ATmakeSymbol("ArrayInitIncomplete", 1, ATfalse);
    ATprotectSymbol(sym_ArrayInitIncomplete_1);
  }
  {
    sym_AssignInit_1 = ATmakeSymbol("AssignInit", 1, ATfalse);
    ATprotectSymbol(sym_AssignInit_1);
  }
  {
    sym_TypeSpec_3 = ATmakeSymbol("TypeSpec", 3, ATfalse);
    ATprotectSymbol(sym_TypeSpec_3);
  }
  {
    sym_DQualifiers_3 = ATmakeSymbol("DQualifiers", 3, ATfalse);
    ATprotectSymbol(sym_DQualifiers_3);
  }
  {
    sym_DeclSpec_5 = ATmakeSymbol("DeclSpec", 5, ATfalse);
    ATprotectSymbol(sym_DeclSpec_5);
  }
  {
    sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
    ATprotectSymbol(sym_Id_1);
  }
  {
    sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
    ATprotectSymbol(sym_TypeId_1);
  }
  {
    sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
    ATprotectSymbol(sym_Label_2);
  }
  {
    sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
    ATprotectSymbol(sym_Case_2);
  }
  {
    sym_Default_1 = ATmakeSymbol("Default", 1, ATfalse);
    ATprotectSymbol(sym_Default_1);
  }
  {
    sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
    ATprotectSymbol(sym_Compound_2);
  }
  {
    sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
    ATprotectSymbol(sym_Stat_1);
  }
  {
    sym_If_2 = ATmakeSymbol("If", 2, ATfalse);
    ATprotectSymbol(sym_If_2);
  }
  {
    sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
    ATprotectSymbol(sym_IfElse_3);
  }
  {
    sym_Switch_2 = ATmakeSymbol("Switch", 2, ATfalse);
    ATprotectSymbol(sym_Switch_2);
  }
  {
    sym_While_2 = ATmakeSymbol("While", 2, ATfalse);
    ATprotectSymbol(sym_While_2);
  }
  {
    sym_DoWhile_2 = ATmakeSymbol("DoWhile", 2, ATfalse);
    ATprotectSymbol(sym_DoWhile_2);
  }
  {
    sym_For_4 = ATmakeSymbol("For", 4, ATfalse);
    ATprotectSymbol(sym_For_4);
  }
  {
    sym_Goto_1 = ATmakeSymbol("Goto", 1, ATfalse);
    ATprotectSymbol(sym_Goto_1);
  }
  {
    sym_Continue_0 = ATmakeSymbol("Continue", 0, ATfalse);
    ATprotectSymbol(sym_Continue_0);
  }
  {
    sym_Break_0 = ATmakeSymbol("Break", 0, ATfalse);
    ATprotectSymbol(sym_Break_0);
  }
  {
    sym_Return_1 = ATmakeSymbol("Return", 1, ATfalse);
    ATprotectSymbol(sym_Return_1);
  }
  {
    sym_Exit_1 = ATmakeSymbol("Exit", 1, ATfalse);
    ATprotectSymbol(sym_Exit_1);
  }
  {
    sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
    ATprotectSymbol(sym_FunDef_3);
  }
  {
    sym_NoTypeSpecifier_0 = ATmakeSymbol("NoTypeSpecifier", 0, ATfalse);
    ATprotectSymbol(sym_NoTypeSpecifier_0);
  }
  {
    sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
    ATprotectSymbol(sym_TranslationUnit_1);
  }
  {
    sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
    ATprotectSymbol(sym_Include_1);
  }
  {
    sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
    ATprotectSymbol(sym_IdDecl_3);
  }
  {
    sym_FunDecl_3 = ATmakeSymbol("FunDecl", 3, ATfalse);
    ATprotectSymbol(sym_FunDecl_3);
  }
  {
    sym_TypedefDeclarator1_3 = ATmakeSymbol("TypedefDeclarator1", 3, ATfalse);
    ATprotectSymbol(sym_TypedefDeclarator1_3);
  }
  {
    sym_TypedefDeclarator2_3 = ATmakeSymbol("TypedefDeclarator2", 3, ATfalse);
    ATprotectSymbol(sym_TypedefDeclarator2_3);
  }
  {
    sym_OldFunction1_3 = ATmakeSymbol("OldFunction1", 3, ATfalse);
    ATprotectSymbol(sym_OldFunction1_3);
  }
  {
    sym_OldFunction2_3 = ATmakeSymbol("OldFunction2", 3, ATfalse);
    ATprotectSymbol(sym_OldFunction2_3);
  }
  {
    sym_PpIf_4 = ATmakeSymbol("PpIf", 4, ATfalse);
    ATprotectSymbol(sym_PpIf_4);
  }
  {
    sym_return_0 = ATmakeSymbol("return", 0, ATfalse);
    ATprotectSymbol(sym_return_0);
  }
  {
    sym_exit_0 = ATmakeSymbol("exit", 0, ATfalse);
    ATprotectSymbol(sym_exit_0);
  }
  {
    sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
    ATprotectSymbol(sym_Program_1);
  }
  {
    sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
    ATprotectSymbol(sym_Undefined_1);
  }
  {
    sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
    ATprotectSymbol(sym_Silent_0);
  }
  {
    sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
    ATprotectSymbol(sym_Verbose_0);
  }
  {
    sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
    ATprotectSymbol(sym_Version_0);
  }
  {
    sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
    ATprotectSymbol(sym_Input_1);
  }
  {
    sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
    ATprotectSymbol(sym_Output_1);
  }
  {
    sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
    ATprotectSymbol(sym_Binary_0);
  }
  {
    sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
    ATprotectSymbol(sym_Statistics_0);
  }
  {
    sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
    ATprotectSymbol(sym_Help_0);
  }
  {
    sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
    ATprotectSymbol(sym_Runtime_1);
  }
  {
    sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
    ATprotectSymbol(sym_DeclVersion_1);
  }
  {
    sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
    ATprotectSymbol(sym_stdin_0);
  }
  {
    sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
    ATprotectSymbol(sym_stdout_0);
  }
  {
    sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
    ATprotectSymbol(sym_stderr_0);
  }
  {
    sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
    ATprotectSymbol(sym_None_0);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
    ATprotectSymbol(sym_CUT_0);
  }
  {
    sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
    ATprotectSymbol(sym_Seqs_1);
  }
  {
    sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
    ATprotectSymbol(sym_Choices_1);
  }
  {
    sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
    ATprotectSymbol(sym_LChoices_1);
  }
  {
    sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
    ATprotectSymbol(sym_Lets_2);
  }
  {
    sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
    ATprotectSymbol(sym_ScopeDefault_1);
  }
  {
    sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
    ATprotectSymbol(sym_DynRuleScope_2);
  }
  {
    sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
    ATprotectSymbol(sym_MA_2);
  }
  {
    sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
    ATprotectSymbol(sym_AM_2);
  }
  {
    sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
    ATprotectSymbol(sym_BA_2);
  }
  {
    sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
    ATprotectSymbol(sym_BAM_3);
  }
  {
    sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
    ATprotectSymbol(sym_Con_3);
  }
  {
    sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
    ATprotectSymbol(sym_App_2);
  }
  {
    sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
    ATprotectSymbol(sym_RootApp_1);
  }
  {
    sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
    ATprotectSymbol(sym_InfixApp_3);
  }
  {
    sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
    ATprotectSymbol(sym_Explode_2);
  }
  {
    sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
    ATprotectSymbol(sym_ExplodeCong_2);
  }
  {
    sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
    ATprotectSymbol(sym_As_2);
  }
  {
    sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
    ATprotectSymbol(sym_BuildDefault_1);
  }
  {
    sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
    ATprotectSymbol(sym_Rule_3);
  }
  {
    sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
    ATprotectSymbol(sym_StratRule_3);
  }
  {
    sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
    ATprotectSymbol(sym_LRule_1);
  }
  {
    sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
    ATprotectSymbol(sym_SRule_1);
  }
  {
    sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
    ATprotectSymbol(sym_RDef_3);
  }
  {
    sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
    ATprotectSymbol(sym_DynamicRules_1);
  }
  {
    sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
    ATprotectSymbol(sym_OverrideDynamicRules_1);
  }
  {
    sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
    ATprotectSymbol(sym_Mod_2);
  }
  {
    sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
    ATprotectSymbol(sym_Overlay_3);
  }
  {
    sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
    ATprotectSymbol(sym_Signature_1);
  }
  {
    sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
    ATprotectSymbol(sym_Overlays_1);
  }
  {
    sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
    ATprotectSymbol(sym_Rules_1);
  }
  {
    sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
    ATprotectSymbol(sym_Strategies_1);
  }
  {
    sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
    ATprotectSymbol(sym_Imports_1);
  }
  {
    sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
    ATprotectSymbol(sym_Specification_1);
  }
  {
    sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
    ATprotectSymbol(sym_ConstType_1);
  }
  {
    sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
    ATprotectSymbol(sym_FunType_2);
  }
  {
    sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
    ATprotectSymbol(sym_Sort_2);
  }
  {
    sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
    ATprotectSymbol(sym_OpDecl_2);
  }
  {
    sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
    ATprotectSymbol(sym_Sorts_1);
  }
  {
    sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
    ATprotectSymbol(sym_Constructors_1);
  }
  {
    sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
    ATprotectSymbol(sym_NoKind_0);
  }
  {
    sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
    ATprotectSymbol(sym_Final_1);
  }
  {
    sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
    ATprotectSymbol(sym_Case_4);
  }
  {
    sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
    ATprotectSymbol(sym_Case_3);
  }
  {
    sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
    ATprotectSymbol(sym_Alt_3);
  }
  {
    sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
    ATprotectSymbol(sym_Continue_1);
  }
  {
    sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
    ATprotectSymbol(sym_Assign_2);
  }
  {
    sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
    ATprotectSymbol(sym_Assign_1);
  }
  {
    sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
    ATprotectSymbol(sym_Fun_2);
  }
  {
    sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
    ATprotectSymbol(sym_Str_1);
  }
  {
    sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
    ATprotectSymbol(sym_Int_1);
  }
  {
    sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
    ATprotectSymbol(sym_Real_1);
  }
  {
    sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
    ATprotectSymbol(sym_Wld_0);
  }
  {
    sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
    ATprotectSymbol(sym_Var_1);
  }
  {
    sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
    ATprotectSymbol(sym_Int_1);
  }
  {
    sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
    ATprotectSymbol(sym_Real_1);
  }
  {
    sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
    ATprotectSymbol(sym_Str_1);
  }
  {
    sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
    ATprotectSymbol(sym_Op_2);
  }
  {
    sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
    ATprotectSymbol(sym_Id_0);
  }
  {
    sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
    ATprotectSymbol(sym_Fail_0);
  }
  {
    sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
    ATprotectSymbol(sym_Test_1);
  }
  {
    sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
    ATprotectSymbol(sym_Not_1);
  }
  {
    sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
    ATprotectSymbol(sym_Seq_2);
  }
  {
    sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
    ATprotectSymbol(sym_Choice_2);
  }
  {
    sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
    ATprotectSymbol(sym_LChoice_2);
  }
  {
    sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
    ATprotectSymbol(sym_SVar_1);
  }
  {
    sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
    ATprotectSymbol(sym_Rec_2);
  }
  {
    sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
    ATprotectSymbol(sym_Let_2);
  }
  {
    sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
    ATprotectSymbol(sym_SDef_3);
  }
  {
    sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
    ATprotectSymbol(sym_VarDec_2);
  }
  {
    sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
    ATprotectSymbol(sym_DefaultVarDec_1);
  }
  {
    sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
    ATprotectSymbol(sym_SDef_4);
  }
  {
    sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
    ATprotectSymbol(sym_DontInline_0);
  }
  {
    sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
    ATprotectSymbol(sym_Call_2);
  }
  {
    sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
    ATprotectSymbol(sym_Path_2);
  }
  {
    sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
    ATprotectSymbol(sym_Cong_2);
  }
  {
    sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
    ATprotectSymbol(sym_One_1);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
    ATprotectSymbol(sym_All_1);
  }
  {
    sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
    ATprotectSymbol(sym_Thread_1);
  }
  {
    sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
    ATprotectSymbol(sym_Assign_2);
  }
  {
    sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
    ATprotectSymbol(sym_Match_1);
  }
  {
    sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
    ATprotectSymbol(sym_Build_1);
  }
  {
    sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
    ATprotectSymbol(sym_MatchVar_1);
  }
  {
    sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
    ATprotectSymbol(sym_MatchFun_1);
  }
  {
    sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
    ATprotectSymbol(sym_Scope_2);
  }
  {
    sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
    ATprotectSymbol(sym_Where_1);
  }
  {
    sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
    ATprotectSymbol(sym_Prim_2);
  }
  {
    sym_TraceAll_0 = ATmakeSymbol("TraceAll", 0, ATfalse);
    ATprotectSymbol(sym_TraceAll_0);
  }
  {
    sym_Trace_1 = ATmakeSymbol("Trace", 1, ATfalse);
    ATprotectSymbol(sym_Trace_1);
  }
  {
    sym_Match_2 = ATmakeSymbol("Match", 2, ATfalse);
    ATprotectSymbol(sym_Match_2);
  }
  {
    sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
    ATprotectSymbol(sym_Nil_0);
  }
  {
    sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
    ATprotectSymbol(sym_Cons_2);
  }
}
ATerm ArgOption_2 (ATerm, ATerm z_70 (ATerm), ATerm a_71 (ATerm));
ATerm debug_1 (ATerm, ATerm m_72 (ATerm));
ATerm Option_2 (ATerm, ATerm o_70 (ATerm), ATerm p_70 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm Stat_1 (ATerm, ATerm s_58 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm r_86 (ATerm), ATerm s_86 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_86 (ATerm));
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm n_83 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm q_0 (ATerm), ATerm t_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm k_76 (ATerm));
ATerm Var_1 (ATerm, ATerm b_64 (ATerm));
ATerm Op_2 (ATerm, ATerm f_64 (ATerm), ATerm g_64 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm TranslateStrat_0 (ATerm);
ATerm PlainBody_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm TracedBody_0 (ATerm);
ATerm TraceAllFuns_0 (ATerm);
ATerm TraceFun_0 (ATerm);
ATerm TranslateDef_0 (ATerm);
ATerm quote_1 (ATerm, ATerm u_73 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm x_66 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm v_66 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm m_0 (ATerm));
ATerm escape_1 (ATerm, ATerm h_73 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm s_66 (ATerm));
ATerm restore_always_2 (ATerm, ATerm b_88 (ATerm), ATerm c_88 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_66 (ATerm));
ATerm scope_2 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm u_47 (ATerm), ATerm v_47 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_72 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_71 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_81 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_70 (ATerm));
ATerm map_1 (ATerm, ATerm u_80 (ATerm));
ATerm reverse_1 (ATerm, ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_70 (ATerm));
ATerm Program_1 (ATerm, ATerm m_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_81 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_71 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_87 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_70 (ATerm));
ATerm Option_3 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_70 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_70 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_71 (ATerm), ATerm p_71 (ATerm), ATerm q_71 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_71 (ATerm), ATerm k_71 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_2 (ATerm t, ATerm z_70 (ATerm), ATerm a_71 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = ArgOption_3(t, z_70, a_71, a_0);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm p_8;
  p_8 = t;
  {
    ATerm s_1 = NULL,u_1 = NULL;
    ATerm q_8;
    q_8 = t;
    {
      ATerm t_1 = NULL;
      t = m_72(t);
      {
        t_1 = t;
        if(((s_1 != NULL) && (s_1 != t_1)))
          _fail(t_1);
        else
          s_1 = t_1;
      }
    }
    t = q_8;
    {
      ATerm v_1 = NULL;
      v_1 = t;
      if(((u_1 != NULL) && (u_1 != v_1)))
        _fail(v_1);
      else
        u_1 = v_1;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(s_1)));
        t = printnl_0(t);
      }
    }
  }
  t = p_8;
  return(t);
}
ATerm Option_2 (ATerm t, ATerm o_70 (ATerm), ATerm p_70 (ATerm))
{
  ATerm n_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, o_70, p_70, n_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm r_8 = t;
  if((PushChoice() == 0))
    {
      ATerm o_0 (ATerm t)
      {
        ATerm b_2 = NULL;
        b_2 = t;
        y_1 :
        if(!(match_string(b_2, "--trace-all")))
          _fail(t);
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_TraceAll_0);
        {
          ATerm r_0 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
            return(t);
          }
          t = debug_1(t, r_0);
          {
            ATerm s_8;
            s_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_0), (ATerm) ATmakeAppl(sym_Defined_1, (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue))));
              {
                ATerm s_0 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
                  return(t);
                }
                t = assert_1(t, s_0);
              }
            }
            t = s_8;
          }
        }
        return(t);
      }
      t = Option_2(t, o_0, p_0);
      PopChoice();
    }
  else
    {
      t = r_8;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm c_2 = NULL;
          c_2 = t;
          z_1 :
          if(!(match_string(c_2, "-t")))
            _fail(t);
          return(t);
        }
        ATerm v_0 (ATerm t)
        {
          ATerm d_2 = NULL;
          d_2 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_2)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue)), not_null(d_2)));
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
                return(t);
              }
              t = assert_1(t, w_0);
            }
            t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(d_2));
          }
          return(t);
        }
        t = ArgOption_2(t, u_0, v_0);
      }
    }
  return(t);
}
ATerm Stat_1 (ATerm t, ATerm s_58 (ATerm))
{
  ATerm j_2 = NULL,k_2 = NULL;
  j_2 = t;
  i_2 :
  if(match_cons(j_2, sym_Stat_1))
    {
      k_2 = ATgetArgument(j_2, 0);
      {
        ATerm m_2 = NULL;
        t = not_null(k_2);
        {
          t = s_58(t);
          {
            m_2 = t;
            t = (ATerm) ATmakeAppl(sym_Stat_1, not_null(m_2));
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
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
  ATerm s_6 (ATerm t)
  {
    t = not_null(a_5);
    t = Stat_1(t, _id);
    t = (ATerm) ATmakeAppl(sym_IfElse_3, not_null(k_5), not_null(a_5), not_null(e_5));
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = not_null(c_5);
    t = Stat_1(t, _id);
    t = (ATerm) ATmakeAppl(sym_IfElse_3, not_null(k_5), not_null(l_5), not_null(c_5));
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(k_5)), not_null(e_5));
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(k_5), not_null(l_5));
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), not_null(l_5));
    t = conc_0(t);
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    ATerm h_6 = NULL;
    ATerm i_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_5), not_null(n_5));
    {
      t = conc_0(t);
      {
        i_6 = t;
        if(((h_6 != NULL) && (h_6 != i_6)))
          _fail(i_6);
        else
          h_6 = i_6;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(h_6), not_null(o_5));
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    ATerm n_6 = NULL,p_6 = NULL;
    ATerm t_8;
    t_8 = t;
    {
      ATerm o_6 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_5), not_null(n_5));
      {
        t = conc_0(t);
        {
          o_6 = t;
          if(((n_6 != NULL) && (n_6 != o_6)))
            _fail(o_6);
          else
            n_6 = o_6;
        }
      }
    }
    t = t_8;
    {
      ATerm q_6 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_5), not_null(p_5));
      {
        t = conc_0(t);
        {
          q_6 = t;
          if(((p_6 != NULL) && (p_6 != q_6)))
            _fail(q_6);
          else
            p_6 = q_6;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(n_6), not_null(p_6));
    }
    return(t);
  }
  j_5 = t;
  b_3 :
  if(match_cons(j_5, sym_If_2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      c_3 :
      if(match_cons(l_5, sym_Compound_2))
        {
          m_5 = ATgetArgument(l_5, 0);
          p_5 = ATgetArgument(l_5, 1);
          d_3 :
          if(((ATermList) m_5 == ATempty))
            {
              e_3 :
              if(((ATgetType(p_5) == AT_LIST) && ((ATermList) p_5 != ATempty)))
                {
                  a_5 = ATgetFirst((ATermList) p_5);
                  b_5 = (ATerm) ATgetNext((ATermList) p_5);
                  f_3 :
                  if(((ATermList) b_5 == ATempty))
                    {
                      {
                        t = not_null(a_5);
                        t = Stat_1(t, _id);
                        t = (ATerm) ATmakeAppl(sym_If_2, not_null(k_5), not_null(a_5));
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
      if(match_cons(j_5, sym_IfElse_3))
        {
          k_5 = ATgetArgument(j_5, 0);
          l_5 = ATgetArgument(j_5, 1);
          e_5 = ATgetArgument(j_5, 2);
          g_3 :
          if(match_cons(e_5, sym_Compound_2))
            {
              f_5 = ATgetArgument(e_5, 0);
              g_5 = ATgetArgument(e_5, 1);
              h_3 :
              if(((ATgetType(g_5) == AT_LIST) && ((ATermList) g_5 != ATempty)))
                {
                  c_5 = ATgetFirst((ATermList) g_5);
                  d_5 = (ATerm) ATgetNext((ATermList) g_5);
                  i_3 :
                  if(((ATermList) d_5 == ATempty))
                    {
                      j_3 :
                      if(((ATermList) f_5 == ATempty))
                        {
                          k_3 :
                          if(match_cons(l_5, sym_Compound_2))
                            {
                              m_5 = ATgetArgument(l_5, 0);
                              p_5 = ATgetArgument(l_5, 1);
                              l_3 :
                              if(((ATgetType(p_5) == AT_LIST) && ((ATermList) p_5 != ATempty)))
                                {
                                  a_5 = ATgetFirst((ATermList) p_5);
                                  b_5 = (ATerm) ATgetNext((ATermList) p_5);
                                  m_3 :
                                  if(((ATermList) b_5 == ATempty))
                                    {
                                      n_3 :
                                      if(((ATermList) m_5 == ATempty))
                                        {
                                          {
                                            ATerm v_8 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = s_6(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = v_8;
                                                t = t_6(t);
                                              }
                                          }
                                        }
                                      else
                                        t = t_6(t);
                                    }
                                  else
                                    {
                                      o_3 :
                                      t = t_6(t);
                                    }
                                }
                              else
                                {
                                  if(((ATermList) p_5 == ATempty))
                                    {
                                      p_3 :
                                      if(((ATermList) m_5 == ATempty))
                                        {
                                          {
                                            ATerm x_8 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = t_6(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = x_8;
                                                t = u_6(t);
                                              }
                                          }
                                        }
                                      else
                                        t = t_6(t);
                                    }
                                  else
                                    {
                                      q_3 :
                                      t = t_6(t);
                                    }
                                }
                            }
                          else
                            t = t_6(t);
                        }
                      else
                        {
                          r_3 :
                          if(match_cons(l_5, sym_Compound_2))
                            {
                              m_5 = ATgetArgument(l_5, 0);
                              p_5 = ATgetArgument(l_5, 1);
                              s_3 :
                              if(((ATermList) m_5 == ATempty))
                                {
                                  t_3 :
                                  if(((ATgetType(p_5) == AT_LIST) && ((ATermList) p_5 != ATempty)))
                                    {
                                      a_5 = ATgetFirst((ATermList) p_5);
                                      b_5 = (ATerm) ATgetNext((ATermList) p_5);
                                      u_3 :
                                      if(((ATermList) b_5 == ATempty))
                                        {
                                          t = s_6(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(((ATermList) p_5 == ATempty))
                                        {
                                          t = u_6(t);
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
                      v_3 :
                      w_3 :
                      if(match_cons(l_5, sym_Compound_2))
                        {
                          m_5 = ATgetArgument(l_5, 0);
                          p_5 = ATgetArgument(l_5, 1);
                          x_3 :
                          if(((ATermList) m_5 == ATempty))
                            {
                              y_3 :
                              if(((ATgetType(p_5) == AT_LIST) && ((ATermList) p_5 != ATempty)))
                                {
                                  a_5 = ATgetFirst((ATermList) p_5);
                                  b_5 = (ATerm) ATgetNext((ATermList) p_5);
                                  z_3 :
                                  if(((ATermList) b_5 == ATempty))
                                    {
                                      t = s_6(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(((ATermList) p_5 == ATempty))
                                    {
                                      t = u_6(t);
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
                  if(((ATermList) g_5 == ATempty))
                    {
                      a_4 :
                      if(((ATermList) f_5 == ATempty))
                        {
                          b_4 :
                          if(match_cons(l_5, sym_Compound_2))
                            {
                              m_5 = ATgetArgument(l_5, 0);
                              p_5 = ATgetArgument(l_5, 1);
                              c_4 :
                              if(((ATgetType(p_5) == AT_LIST) && ((ATermList) p_5 != ATempty)))
                                {
                                  a_5 = ATgetFirst((ATermList) p_5);
                                  b_5 = (ATerm) ATgetNext((ATermList) p_5);
                                  d_4 :
                                  if(((ATermList) b_5 == ATempty))
                                    {
                                      e_4 :
                                      if(((ATermList) m_5 == ATempty))
                                        {
                                          {
                                            ATerm y_8 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = s_6(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = y_8;
                                                t = v_6(t);
                                              }
                                          }
                                        }
                                      else
                                        t = v_6(t);
                                    }
                                  else
                                    {
                                      f_4 :
                                      t = v_6(t);
                                    }
                                }
                              else
                                {
                                  if(((ATermList) p_5 == ATempty))
                                    {
                                      g_4 :
                                      if(((ATermList) m_5 == ATempty))
                                        {
                                          {
                                            ATerm z_8 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = u_6(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = z_8;
                                                t = v_6(t);
                                              }
                                          }
                                        }
                                      else
                                        t = v_6(t);
                                    }
                                  else
                                    {
                                      h_4 :
                                      t = v_6(t);
                                    }
                                }
                            }
                          else
                            t = v_6(t);
                        }
                      else
                        {
                          i_4 :
                          if(match_cons(l_5, sym_Compound_2))
                            {
                              m_5 = ATgetArgument(l_5, 0);
                              p_5 = ATgetArgument(l_5, 1);
                              j_4 :
                              if(((ATermList) m_5 == ATempty))
                                {
                                  k_4 :
                                  if(((ATgetType(p_5) == AT_LIST) && ((ATermList) p_5 != ATempty)))
                                    {
                                      a_5 = ATgetFirst((ATermList) p_5);
                                      b_5 = (ATerm) ATgetNext((ATermList) p_5);
                                      l_4 :
                                      if(((ATermList) b_5 == ATempty))
                                        {
                                          t = s_6(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(((ATermList) p_5 == ATempty))
                                        {
                                          t = u_6(t);
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
                      m_4 :
                      n_4 :
                      if(match_cons(l_5, sym_Compound_2))
                        {
                          m_5 = ATgetArgument(l_5, 0);
                          p_5 = ATgetArgument(l_5, 1);
                          o_4 :
                          if(((ATermList) m_5 == ATempty))
                            {
                              p_4 :
                              if(((ATgetType(p_5) == AT_LIST) && ((ATermList) p_5 != ATempty)))
                                {
                                  a_5 = ATgetFirst((ATermList) p_5);
                                  b_5 = (ATerm) ATgetNext((ATermList) p_5);
                                  q_4 :
                                  if(((ATermList) b_5 == ATempty))
                                    {
                                      t = s_6(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(((ATermList) p_5 == ATempty))
                                    {
                                      t = u_6(t);
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
              r_4 :
              if(match_cons(l_5, sym_Compound_2))
                {
                  m_5 = ATgetArgument(l_5, 0);
                  p_5 = ATgetArgument(l_5, 1);
                  s_4 :
                  if(((ATermList) m_5 == ATempty))
                    {
                      t_4 :
                      if(((ATgetType(p_5) == AT_LIST) && ((ATermList) p_5 != ATempty)))
                        {
                          a_5 = ATgetFirst((ATermList) p_5);
                          b_5 = (ATerm) ATgetNext((ATermList) p_5);
                          u_4 :
                          if(((ATermList) b_5 == ATempty))
                            {
                              t = s_6(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(((ATermList) p_5 == ATempty))
                            {
                              t = u_6(t);
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
          if(((ATgetType(j_5) == AT_LIST) && ((ATermList) j_5 != ATempty)))
            {
              k_5 = ATgetFirst((ATermList) j_5);
              l_5 = (ATerm) ATgetNext((ATermList) j_5);
              v_4 :
              if(match_cons(k_5, sym_Compound_2))
                {
                  h_5 = ATgetArgument(k_5, 0);
                  i_5 = ATgetArgument(k_5, 1);
                  w_4 :
                  if(((ATermList) h_5 == ATempty))
                    {
                      t = w_6(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(j_5, sym_Compound_2))
                {
                  k_5 = ATgetArgument(j_5, 0);
                  l_5 = ATgetArgument(j_5, 1);
                  x_4 :
                  if(((ATgetType(l_5) == AT_LIST) && ((ATermList) l_5 != ATempty)))
                    {
                      m_5 = ATgetFirst((ATermList) l_5);
                      p_5 = (ATerm) ATgetNext((ATermList) l_5);
                      y_4 :
                      if(match_cons(m_5, sym_Compound_2))
                        {
                          n_5 = ATgetArgument(m_5, 0);
                          o_5 = ATgetArgument(m_5, 1);
                          z_4 :
                          if(((ATermList) p_5 == ATempty))
                            {
                              {
                                ATerm a_9 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = x_6(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = a_9;
                                    t = y_6(t);
                                  }
                              }
                            }
                          else
                            t = y_6(t);
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
ATerm repeat_2 (ATerm t, ATerm r_86 (ATerm), ATerm s_86 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    ATerm f_9 = t;
    if((PushChoice() == 0))
      {
        t = r_86(t);
        t = c_7(t);
        PopChoice();
      }
    else
      {
        t = f_9;
        t = s_86(t);
      }
    return(t);
  }
  t = c_7(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_86 (ATerm))
{
  t = repeat_2(t, u_86, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ConstructTerm_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  q_7 = t;
  o_7 :
  if(match_cons(q_7, sym_Op_2))
    {
      r_7 = ATgetArgument(q_7, 0);
      p_7 = ATgetArgument(q_7, 1);
      {
        ATerm u_7 = NULL;
        ATerm v_7 = NULL,x_7 = NULL;
        ATerm w_7 = NULL;
        t = not_null(p_7);
        {
          t = length_0(t);
          {
            w_7 = t;
            if(((v_7 != NULL) && (v_7 != w_7)))
              _fail(w_7);
            else
              v_7 = w_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), not_null(v_7));
          {
            t = ConstructorName_0(t);
            {
              x_7 = t;
              if(((u_7 != NULL) && (u_7 != x_7)))
                _fail(x_7);
              else
                u_7 = x_7;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue))), (ATerm) ATinsert(CheckATermList(not_null(p_7)), (ATerm) ATmakeAppl(sym_Id_1, not_null(u_7)))));
      }
    }
  else
    {
      if(match_cons(q_7, sym_BuildDefault_1))
        {
          r_7 = ATgetArgument(q_7, 0);
          t = not_null(r_7);
        }
      else
        {
          if(match_cons(q_7, sym_Var_1))
            {
              r_7 = ATgetArgument(q_7, 0);
              t = (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_7))));
            }
          else
            {
              if(match_cons(q_7, sym_Str_1))
                {
                  r_7 = ATgetArgument(q_7, 0);
                  {
                    ATerm b_8 = NULL;
                    ATerm c_8 = NULL;
                    t = not_null(r_7);
                    {
                      t = escape_0(t);
                      {
                        t = double_quote_0(t);
                        {
                          c_8 = t;
                          if(((b_8 != NULL) && (b_8 != c_8)))
                            _fail(c_8);
                          else
                            b_8 = c_8;
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_IntConst_1, (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(b_8))))))));
                  }
                }
              else
                {
                  if(match_cons(q_7, sym_Real_1))
                    {
                      r_7 = ATgetArgument(q_7, 0);
                      {
                        ATerm e_8 = NULL;
                        ATerm f_8 = NULL;
                        t = not_null(r_7);
                        {
                          t = real_to_string_0(t);
                          {
                            f_8 = t;
                            if(((e_8 != NULL) && (e_8 != f_8)))
                              _fail(f_8);
                            else
                              e_8 = f_8;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(e_8)))));
                      }
                    }
                  else
                    {
                      if(match_cons(q_7, sym_Int_1))
                        {
                          r_7 = ATgetArgument(q_7, 0);
                          {
                            ATerm h_8 = NULL;
                            ATerm i_8 = NULL;
                            t = not_null(r_7);
                            {
                              t = int_to_string_0(t);
                              {
                                i_8 = t;
                                if(((h_8 != NULL) && (h_8 != i_8)))
                                  _fail(i_8);
                                else
                                  h_8 = i_8;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(h_8)))));
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
ATerm topdown_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    t = n_83(t);
    t = _all(t, u_8);
    return(t);
  }
  t = u_8(t);
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm w_8 = NULL;
  w_8 = t;
  t = SSL_real_to_string(not_null(w_8));
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      {
        ATerm h_9 = NULL;
        ATerm i_9 = NULL;
        t = new_0(t);
        {
          i_9 = t;
          if(((h_9 != NULL) && (h_9 != i_9)))
            _fail(i_9);
          else
            h_9 = i_9;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_9)), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(e_9))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(d_9), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_9)))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Initialized_0 (ATerm t)
{
  ATerm o_9 = NULL;
  o_9 = t;
  {
    ATerm q_9 = NULL,r_9 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(o_9));
    {
      ATerm x_0 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, x_0);
      {
        q_9 = t;
        m_9 :
        if(match_cons(q_9, sym_Defined_1))
          {
            r_9 = ATgetArgument(q_9, 0);
            n_9 :
            if(!(match_string(r_9, "e_0")))
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
  x_9 = t;
  v_9 :
  if(match_cons(x_9, sym__2))
    {
      y_9 = ATgetArgument(x_9, 0);
      a_10 = ATgetArgument(x_9, 1);
      w_9 :
      if(match_cons(y_9, sym_Var_1))
        {
          z_9 = ATgetArgument(y_9, 0);
          {
            ATerm d_10 = NULL;
            t = not_null(z_9);
            {
              t = Initialized_0(t);
              {
                d_10 = t;
                u_9 :
                if(!(match_string(d_10, "NULL")))
                  _fail(t);
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_9)), not_null(a_10));
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
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
  i_10 = t;
  g_10 :
  if(match_cons(i_10, sym__2))
    {
      j_10 = ATgetArgument(i_10, 0);
      k_10 = ATgetArgument(i_10, 1);
      h_10 :
      if(((ATermList) j_10 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(k_10));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm q_0 (ATerm), ATerm t_0 (ATerm))
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  u_10 = t;
  s_10 :
  if(match_cons(u_10, sym__2))
    {
      v_10 = ATgetArgument(u_10, 0);
      y_10 = ATgetArgument(u_10, 1);
      t_10 :
      if(((ATgetType(v_10) == AT_LIST) && ((ATermList) v_10 != ATempty)))
        {
          w_10 = ATgetFirst((ATermList) v_10);
          x_10 = (ATerm) ATgetNext((ATermList) v_10);
          {
            ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
            ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_10), not_null(y_10));
            {
              t = q_0(t);
              {
                g_11 = t;
                r_10 :
                if(match_cons(g_11, sym__2))
                  {
                    h_11 = ATgetArgument(g_11, 0);
                    i_11 = ATgetArgument(g_11, 1);
                    {
                      ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
                      if(((e_11 != NULL) && (e_11 != h_11)))
                        _fail(h_11);
                      else
                        e_11 = h_11;
                      {
                        if(((c_11 != NULL) && (c_11 != i_11)))
                          _fail(i_11);
                        else
                          c_11 = i_11;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), not_null(c_11));
                          {
                            t = t_0(t);
                            {
                              j_11 = t;
                              q_10 :
                              if(match_cons(j_11, sym__2))
                                {
                                  k_11 = ATgetArgument(j_11, 0);
                                  l_11 = ATgetArgument(j_11, 1);
                                  {
                                    if(((f_11 != NULL) && (f_11 != k_11)))
                                      _fail(k_11);
                                    else
                                      f_11 = k_11;
                                    if(((d_11 != NULL) && (d_11 != l_11)))
                                      _fail(l_11);
                                    else
                                      d_11 = l_11;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_11)), not_null(e_11)), not_null(d_11));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm thread_map_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm p_11 (ATerm t)
  {
    ATerm g_9 = t;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, k_76, p_11);
        PopChoice();
      }
    else
      {
        t = g_9;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = p_11(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm b_64 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym_Var_1))
    {
      u_11 = ATgetArgument(t_11, 0);
      {
        ATerm w_11 = NULL;
        t = not_null(u_11);
        {
          t = b_64(t);
          {
            w_11 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm f_64 (ATerm), ATerm g_64 (ATerm))
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_Op_2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        ATerm j_12 = NULL;
        t = not_null(f_12);
        {
          ATerm l_12 = NULL;
          t = f_64(t);
          {
            j_12 = t;
            {
              t = not_null(g_12);
              {
                t = g_64(t);
                {
                  l_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_12), not_null(l_12));
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
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  v_12 :
  if(match_cons(f_13, sym_Op_2))
    {
      g_13 = ATgetArgument(f_13, 0);
      h_13 = ATgetArgument(f_13, 1);
      w_12 :
      if(match_string(g_13, "Cons"))
        {
          x_12 :
          if(((ATgetType(h_13) == AT_LIST) && ((ATermList) h_13 != ATempty)))
            {
              b_13 = ATgetFirst((ATermList) h_13);
              c_13 = (ATerm) ATgetNext((ATermList) h_13);
              y_12 :
              if(((ATgetType(c_13) == AT_LIST) && ((ATermList) c_13 != ATempty)))
                {
                  d_13 = ATgetFirst((ATermList) c_13);
                  e_13 = (ATerm) ATgetNext((ATermList) c_13);
                  z_12 :
                  if(((ATermList) e_13 == ATempty))
                    {
                      {
                        ATerm k_13 = NULL;
                        ATerm n_13 = NULL;
                        ATerm j_9 = t;
                        if((PushChoice() == 0))
                          {
                            t = not_null(d_13);
                            {
                              ATerm k_9 = t;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_0 (ATerm t)
                                  {
                                    ATerm l_13 = NULL;
                                    l_13 = t;
                                    s_12 :
                                    if(!(match_string(l_13, "Nil")))
                                      _fail(t);
                                    return(t);
                                  }
                                  t = Op_2(t, y_0, Nil_0);
                                  PopChoice();
                                }
                              else
                                {
                                  t = k_9;
                                  {
                                    ATerm z_0 (ATerm t)
                                    {
                                      ATerm m_13 = NULL;
                                      m_13 = t;
                                      t_12 :
                                      if(!(match_string(m_13, "Cons")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm a_1 (ATerm t)
                                    {
                                      ATerm b_1 (ATerm t)
                                      {
                                        t = Cons_2(t, _id, Nil_0);
                                        return(t);
                                      }
                                      t = Cons_2(t, _id, b_1);
                                      return(t);
                                    }
                                    t = Op_2(t, z_0, a_1);
                                  }
                                }
                              t = ConstructList_0(t);
                            }
                            PopChoice();
                          }
                        else
                          {
                            t = j_9;
                            t = (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue))), (ATerm) ATinsert(ATempty, not_null(d_13)));
                          }
                        {
                          n_13 = t;
                          if(((k_13 != NULL) && (k_13 != n_13)))
                            _fail(n_13);
                          else
                            k_13 = n_13;
                        }
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_13)), not_null(k_13)));
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
          if(match_string(g_13, "Nil"))
            {
              a_13 :
              if(((ATermList) h_13 == ATempty))
                {
                  t = (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue)));
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
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  ATerm r_28 (ATerm t)
  {
    ATerm h_21 = NULL,w_21 = NULL,y_21 = NULL;
    ATerm l_9;
    l_9 = t;
    {
      ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
      t = not_null(p_18);
      {
        ATerm p_9 = t;
        if((PushChoice() == 0))
          {
            ATerm i_21 = NULL;
            i_21 = t;
            d_15 :
            if(!(match_string(i_21, "Nil")))
              {
                if(!(match_string(i_21, "Cons")))
                  _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          t = p_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), (ATerm) ATmakeInt(0));
          {
            ATerm c_1 (ATerm t)
            {
              ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
              j_21 = t;
              h_15 :
              if(match_cons(j_21, sym__2))
                {
                  k_21 = ATgetArgument(j_21, 0);
                  m_21 = ATgetArgument(j_21, 1);
                  i_15 :
                  if(match_cons(k_21, sym_Var_1))
                    {
                      l_21 = ATgetArgument(k_21, 0);
                      {
                        ATerm p_21 = NULL,r_21 = NULL;
                        ATerm s_9;
                        s_9 = t;
                        {
                          ATerm q_21 = NULL;
                          t = not_null(m_21);
                          {
                            t = int_to_string_0(t);
                            {
                              q_21 = t;
                              if(((p_21 != NULL) && (p_21 != q_21)))
                                _fail(q_21);
                              else
                                p_21 = q_21;
                            }
                          }
                        }
                        t = s_9;
                        {
                          ATerm s_21 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_21), (ATerm) ATmakeInt(1));
                          {
                            t = add_0(t);
                            {
                              s_21 = t;
                              if(((r_21 != NULL) && (r_21 != s_21)))
                                _fail(s_21);
                              else
                                r_21 = s_21;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_21)), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(p_21))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_20)))))), not_null(r_21));
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
            t = thread_map_1(t, c_1);
            {
              t_21 = t;
              k_15 :
              if(match_cons(t_21, sym__2))
                {
                  u_21 = ATgetArgument(t_21, 0);
                  v_21 = ATgetArgument(t_21, 1);
                  if(((h_21 != NULL) && (h_21 != u_21)))
                    _fail(u_21);
                  else
                    h_21 = u_21;
                }
              else
                _fail(t);
            }
          }
        }
      }
    }
    t = l_9;
    {
      ATerm t_9;
      t_9 = t;
      {
        ATerm x_21 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(n_18));
        {
          t = ConstructorName_0(t);
          {
            x_21 = t;
            if(((w_21 != NULL) && (w_21 != x_21)))
              _fail(x_21);
            else
              w_21 = x_21;
          }
        }
      }
      t = t_9;
      {
        ATerm z_21 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_21), (ATerm) ATinsert(ATempty, not_null(b_19)));
        {
          t = conc_0(t);
          {
            z_21 = t;
            if(((y_21 != NULL) && (y_21 != z_21)))
              _fail(z_21);
            else
              y_21 = z_21;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_21))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_20)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(y_21)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_20)), not_null(c_19), not_null(z_19)))));
      }
    }
    return(t);
  }
  ATerm s_28 (ATerm t)
  {
    ATerm g_22 = NULL;
    ATerm h_22 = NULL;
    t = not_null(p_18);
    {
      t = real_to_string_0(t);
      {
        h_22 = t;
        if(((g_22 != NULL) && (g_22 != h_22)))
          _fail(h_22);
        else
          g_22 = h_22;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(g_22))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_20)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_19))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_20)), not_null(c_19), not_null(z_19)))));
    return(t);
  }
  ATerm t_28 (ATerm t)
  {
    ATerm o_22 = NULL;
    ATerm p_22 = NULL;
    t = not_null(p_18);
    {
      t = int_to_string_0(t);
      {
        p_22 = t;
        if(((o_22 != NULL) && (o_22 != p_22)))
          _fail(p_22);
        else
          o_22 = p_22;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(o_22))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_20)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_19))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_20)), not_null(c_19), not_null(z_19)))));
    return(t);
  }
  ATerm u_28 (ATerm t)
  {
    ATerm d_23 = NULL;
    ATerm e_23 = NULL;
    t = not_null(p_18);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          e_23 = t;
          if(((d_23 != NULL) && (d_23 != e_23)))
            _fail(e_23);
          else
            d_23 = e_23;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(d_23)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_20)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_19))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_20)), not_null(c_19), not_null(z_19)))));
    return(t);
  }
  ATerm v_28 (ATerm t)
  {
    t = not_null(z_19);
    return(t);
  }
  ATerm w_28 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_20)), (ATerm) ATmakeAppl(sym_Case_3, not_null(j_20), not_null(z_19), not_null(a_20)));
    return(t);
  }
  ATerm x_28 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_20)));
    return(t);
  }
  ATerm y_28 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_20)), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_20)), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_20)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_20))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_20)), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_20)))));
    return(t);
  }
  ATerm z_28 (ATerm t)
  {
    t = not_null(j_20);
    {
      ATerm b_10 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        t = b_10;
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_20)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_20))));
    return(t);
  }
  ATerm a_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_20)), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))));
    return(t);
  }
  ATerm b_29 (ATerm t)
  {
    ATerm b_24 = NULL;
    ATerm c_24 = NULL;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(e_20), (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), not_null(j_20))))))), (ATerm) ATmakeAppl(sym__2, not_null(c_20), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), not_null(j_20))))));
    {
      ATerm d_1 (ATerm t)
      {
        ATerm c_10 = t;
        if((PushChoice() == 0))
          {
            t = MatchArg1_0(t);
            PopChoice();
          }
        else
          {
            t = c_10;
            t = MatchArg2_0(t);
          }
        return(t);
      }
      t = map_1(t, d_1);
      {
        c_24 = t;
        if(((b_24 != NULL) && (b_24 != c_24)))
          _fail(c_24);
        else
          b_24 = c_24;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue))), (ATerm) ATinsert(ATempty, not_null(j_20))), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), not_null(j_20)), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(b_24)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))));
    return(t);
  }
  ATerm c_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), not_null(j_20)), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))));
    return(t);
  }
  ATerm d_29 (ATerm t)
  {
    ATerm i_24 = NULL,h_25 = NULL;
    ATerm e_10;
    e_10 = t;
    {
      ATerm v_24 = NULL,f_25 = NULL,g_25 = NULL;
      t = not_null(h_20);
      {
        ATerm f_10 = t;
        if((PushChoice() == 0))
          {
            ATerm j_24 = NULL;
            j_24 = t;
            r_15 :
            if(!(match_string(j_24, "Nil")))
              {
                if(!(match_string(j_24, "Cons")))
                  _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          t = f_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), (ATerm) ATmakeInt(0));
          {
            ATerm e_1 (ATerm t)
            {
              ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
              k_24 = t;
              w_15 :
              if(match_cons(k_24, sym__2))
                {
                  l_24 = ATgetArgument(k_24, 0);
                  m_24 = ATgetArgument(k_24, 1);
                  {
                    ATerm p_24 = NULL,t_24 = NULL;
                    ATerm l_10;
                    l_10 = t;
                    {
                      ATerm q_24 = NULL,s_24 = NULL;
                      ATerm r_24 = NULL;
                      t = not_null(m_24);
                      {
                        t = int_to_string_0(t);
                        {
                          r_24 = t;
                          if(((q_24 != NULL) && (q_24 != r_24)))
                            _fail(r_24);
                          else
                            q_24 = r_24;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(q_24))), not_null(j_20))));
                        {
                          ATerm m_10 = t;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = m_10;
                              t = MatchArg2_0(t);
                            }
                          {
                            s_24 = t;
                            if(((p_24 != NULL) && (p_24 != s_24)))
                              _fail(s_24);
                            else
                              p_24 = s_24;
                          }
                        }
                      }
                    }
                    t = l_10;
                    {
                      ATerm u_24 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_24), (ATerm) ATmakeInt(1));
                      {
                        t = add_0(t);
                        {
                          u_24 = t;
                          if(((t_24 != NULL) && (t_24 != u_24)))
                            _fail(u_24);
                          else
                            t_24 = u_24;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_24), not_null(t_24));
                    }
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = thread_map_1(t, e_1);
            {
              v_24 = t;
              y_15 :
              if(match_cons(v_24, sym__2))
                {
                  f_25 = ATgetArgument(v_24, 0);
                  g_25 = ATgetArgument(v_24, 1);
                  if(((i_24 != NULL) && (i_24 != f_25)))
                    _fail(f_25);
                  else
                    i_24 = f_25;
                }
              else
                _fail(t);
            }
          }
        }
      }
    }
    t = e_10;
    {
      ATerm i_25 = NULL,n_25 = NULL;
      ATerm m_25 = NULL;
      t = not_null(g_20);
      {
        t = length_0(t);
        {
          m_25 = t;
          if(((i_25 != NULL) && (i_25 != m_25)))
            _fail(m_25);
          else
            i_25 = m_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(i_25));
        {
          t = ConstructorName_0(t);
          {
            n_25 = t;
            if(((h_25 != NULL) && (h_25 != n_25)))
              _fail(n_25);
            else
              h_25 = n_25;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_25))), not_null(j_20))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(i_24)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))));
    }
    return(t);
  }
  ATerm e_29 (ATerm t)
  {
    ATerm y_25 = NULL;
    ATerm z_25 = NULL;
    t = not_null(h_20);
    {
      t = real_to_string_0(t);
      {
        z_25 = t;
        if(((y_25 != NULL) && (y_25 != z_25)))
          _fail(z_25);
        else
          y_25 = z_25;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue))), (ATerm) ATinsert(ATempty, not_null(j_20))), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), not_null(j_20)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(y_25)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))));
    return(t);
  }
  ATerm f_29 (ATerm t)
  {
    ATerm c_26 = NULL;
    ATerm d_26 = NULL;
    t = not_null(h_20);
    {
      t = int_to_string_0(t);
      {
        d_26 = t;
        if(((c_26 != NULL) && (c_26 != d_26)))
          _fail(d_26);
        else
          c_26 = d_26;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue))), (ATerm) ATinsert(ATempty, not_null(j_20))), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), not_null(j_20)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(c_26)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))));
    return(t);
  }
  ATerm g_29 (ATerm t)
  {
    ATerm g_26 = NULL;
    ATerm h_26 = NULL;
    t = not_null(h_20);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          h_26 = t;
          if(((g_26 != NULL) && (g_26 != h_26)))
            _fail(h_26);
          else
            g_26 = h_26;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), not_null(j_20)))), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_IntConst_1, (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(g_26)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))));
    return(t);
  }
  ATerm h_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_20)), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_20)), not_null(j_20))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATinsert(ATempty, not_null(j_20)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_20)), (ATerm)ATmakeAppl(sym_AssignEq_0), not_null(j_20))));
    return(t);
  }
  ATerm i_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(g_20), not_null(j_20))), (ATerm) ATmakeAppl(sym_Match_2, not_null(h_20), not_null(j_20))));
    return(t);
  }
  ATerm j_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
    return(t);
  }
  ATerm k_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
    return(t);
  }
  ATerm l_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(i_20), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))));
    return(t);
  }
  ATerm m_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(i_20), (ATerm) ATinsert(ATempty, not_null(j_20)));
    return(t);
  }
  ATerm n_29 (ATerm t)
  {
    ATerm b_27 = NULL;
    ATerm c_27 = NULL;
    t = new_0(t);
    {
      c_27 = t;
      if(((b_27 != NULL) && (b_27 != c_27)))
        _fail(c_27);
      else
        b_27 = c_27;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_27)), (ATerm) ATmakeAppl(sym_None_0)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_27))))), not_null(i_20)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_27)), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))));
    return(t);
  }
  ATerm o_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(i_20));
    return(t);
  }
  ATerm r_29 (ATerm t)
  {
    ATerm j_27 = NULL;
    ATerm p_27 = NULL;
    t = not_null(j_20);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
        k_27 = t;
        g_16 :
        if(match_cons(k_27, sym_Call_2))
          {
            l_27 = ATgetArgument(k_27, 0);
            n_27 = ATgetArgument(k_27, 1);
            h_16 :
            if(match_cons(l_27, sym_SVar_1))
              {
                m_27 = ATgetArgument(l_27, 0);
                i_16 :
                if(((ATermList) n_27 == ATempty))
                  {
                    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(m_27));
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
      t = map_1(t, f_1);
      {
        p_27 = t;
        if(((j_27 != NULL) && (j_27 != p_27)))
          _fail(p_27);
        else
          j_27 = p_27;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_20)), (ATerm) ATinsert(CheckATermList(not_null(j_27)), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))));
    return(t);
  }
  ATerm y_29 (ATerm t)
  {
    ATerm s_27 = NULL;
    ATerm t_27 = NULL;
    t = not_null(j_20);
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = try_1(t, ConstructTerm_0);
          return(t);
        }
        t = topdown_1(t, h_1);
        return(t);
      }
      t = map_1(t, g_1);
      {
        t_27 = t;
        if(((s_27 != NULL) && (s_27 != t_27)))
          _fail(t_27);
        else
          s_27 = t_27;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_20)), not_null(s_27))));
    return(t);
  }
  ATerm z_29 (ATerm t)
  {
    ATerm v_27 = NULL;
    ATerm w_27 = NULL;
    t = new_0(t);
    {
      w_27 = t;
      if(((v_27 != NULL) && (v_27 != w_27)))
        _fail(w_27);
      else
        v_27 = w_27;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_27)), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_IntConst_1, (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue))), (ATerm) ATempty))), not_null(i_20))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_Id_1, not_null(v_27)))))))));
    return(t);
  }
  ATerm a_30 (ATerm t)
  {
    ATerm z_27 = NULL;
    ATerm a_28 = NULL;
    t = new_0(t);
    {
      a_28 = t;
      if(((z_27 != NULL) && (z_27 != a_28)))
        _fail(a_28);
      else
        z_27 = a_28;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_27)), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_IntConst_1, (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue))), (ATerm) ATempty))), not_null(i_20))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_20)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_27)))))))));
    return(t);
  }
  ATerm b_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_20), not_null(j_20));
    return(t);
  }
  ATerm c_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_20)), not_null(i_20)));
    return(t);
  }
  ATerm d_30 (ATerm t)
  {
    ATerm j_28 = NULL;
    ATerm n_10;
    n_10 = t;
    {
      t = not_null(i_20);
      {
        ATerm i_1 (ATerm t)
        {
          ATerm h_28 = NULL;
          h_28 = t;
          {
            ATerm o_10;
            o_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_28)), (ATerm) ATmakeAppl(sym_Defined_1, (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue))));
              {
                ATerm j_1 (ATerm t)
                {
                  t = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
                  return(t);
                }
                t = assert_1(t, j_1);
              }
            }
            t = o_10;
          }
          return(t);
        }
        t = map_1(t, i_1);
      }
    }
    t = n_10;
    {
      ATerm m_28 = NULL;
      t = not_null(i_20);
      {
        ATerm k_1 (ATerm t)
        {
          ATerm k_28 = NULL;
          k_28 = t;
          t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_28)), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_AssignInit_1, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue)))));
          return(t);
        }
        t = map_1(t, k_1);
        {
          m_28 = t;
          if(((j_28 != NULL) && (j_28 != m_28)))
            _fail(m_28);
          else
            j_28 = m_28;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), not_null(j_28))), (ATerm) ATinsert(ATempty, not_null(j_20)));
    }
    return(t);
  }
  ATerm e_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))))));
    return(t);
  }
  ATerm f_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
    return(t);
  }
  k_20 = t;
  q_16 :
  if(match_cons(k_20, sym_Build_1))
    {
      i_20 = ATgetArgument(k_20, 0);
      {
        ATerm m_20 = NULL;
        ATerm p_20 = NULL;
        t = not_null(i_20);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm p_10 = t;
            if((PushChoice() == 0))
              {
                ATerm n_20 = NULL;
                t = ConstructList_0(t);
                {
                  ATerm o_20 = NULL;
                  o_20 = t;
                  if(((n_20 != NULL) && (n_20 != o_20)))
                    _fail(o_20);
                  else
                    n_20 = o_20;
                  t = (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), not_null(n_20));
                }
                PopChoice();
              }
            else
              {
                t = p_10;
                t = repeat_1(t, ConstructTerm_0);
              }
            return(t);
          }
          t = topdown_1(t, l_1);
          {
            p_20 = t;
            if(((m_20 != NULL) && (m_20 != p_20)))
              _fail(p_20);
            else
              m_20 = p_20;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm)ATmakeAppl(sym_AssignEq_0), not_null(m_20)));
      }
    }
  else
    {
      if(match_cons(k_20, sym_Case_3))
        {
          i_20 = ATgetArgument(k_20, 0);
          j_20 = ATgetArgument(k_20, 1);
          z_19 = ATgetArgument(k_20, 2);
          r_16 :
          if(match_cons(i_20, sym_Var_1))
            {
              h_20 = ATgetArgument(i_20, 0);
              s_16 :
              if(((ATgetType(j_20) == AT_LIST) && ((ATermList) j_20 != ATempty)))
                {
                  b_20 = ATgetFirst((ATermList) j_20);
                  c_19 = (ATerm) ATgetNext((ATermList) j_20);
                  t_16 :
                  if(match_cons(b_20, sym_Alt_3))
                    {
                      o_18 = ATgetArgument(b_20, 0);
                      a_19 = ATgetArgument(b_20, 1);
                      b_19 = ATgetArgument(b_20, 2);
                      u_16 :
                      if(match_cons(o_18, sym_Fun_2))
                        {
                          p_18 = ATgetArgument(o_18, 0);
                          n_18 = ATgetArgument(o_18, 1);
                          v_16 :
                          if(((ATgetType(a_19) == AT_LIST) && ((ATermList) a_19 != ATempty)))
                            {
                              h_18 = ATgetFirst((ATermList) a_19);
                              j_18 = (ATerm) ATgetNext((ATermList) a_19);
                              w_16 :
                              if(((ATgetType(j_18) == AT_LIST) && ((ATermList) j_18 != ATempty)))
                                {
                                  k_18 = ATgetFirst((ATermList) j_18);
                                  m_18 = (ATerm) ATgetNext((ATermList) j_18);
                                  x_16 :
                                  if(((ATermList) m_18 == ATempty))
                                    {
                                      y_16 :
                                      if(match_cons(k_18, sym_Var_1))
                                        {
                                          l_18 = ATgetArgument(k_18, 0);
                                          z_16 :
                                          if(match_cons(h_18, sym_Var_1))
                                            {
                                              i_18 = ATgetArgument(h_18, 0);
                                              a_17 :
                                              if(match_int(n_18, 2))
                                                {
                                                  b_17 :
                                                  if(match_string(p_18, "Cons"))
                                                    {
                                                      ATerm z_10 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_20)))), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_20))), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_19)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_18)), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_20))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_18)), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_20))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_20)), not_null(c_19), not_null(z_19)))));
                                                          PopChoice();
                                                        }
                                                      else
                                                        {
                                                          t = z_10;
                                                          t = r_28(t);
                                                        }
                                                    }
                                                  else
                                                    t = r_28(t);
                                                }
                                              else
                                                {
                                                  c_17 :
                                                  t = r_28(t);
                                                }
                                            }
                                          else
                                            {
                                              d_17 :
                                              e_17 :
                                              t = r_28(t);
                                            }
                                        }
                                      else
                                        {
                                          f_17 :
                                          g_17 :
                                          h_17 :
                                          t = r_28(t);
                                        }
                                    }
                                  else
                                    {
                                      i_17 :
                                      j_17 :
                                      k_17 :
                                      l_17 :
                                      t = r_28(t);
                                    }
                                }
                              else
                                {
                                  m_17 :
                                  n_17 :
                                  o_17 :
                                  t = r_28(t);
                                }
                            }
                          else
                            {
                              if(((ATermList) a_19 == ATempty))
                                {
                                  p_17 :
                                  if(match_int(n_18, 0))
                                    {
                                      q_17 :
                                      if(match_string(p_18, "Nil"))
                                        {
                                          ATerm a_11 = t;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_TypeCast_2, (ATerm)ATmakeAppl(sym_TypeName_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_None_0)), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_20))), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(b_19)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_20)), not_null(c_19), not_null(z_19)))));
                                              PopChoice();
                                            }
                                          else
                                            {
                                              t = a_11;
                                              t = r_28(t);
                                            }
                                        }
                                      else
                                        t = r_28(t);
                                    }
                                  else
                                    {
                                      r_17 :
                                      t = r_28(t);
                                    }
                                }
                              else
                                {
                                  s_17 :
                                  t_17 :
                                  t = r_28(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(o_18, sym_Real_1))
                            {
                              p_18 = ATgetArgument(o_18, 0);
                              t = s_28(t);
                            }
                          else
                            {
                              if(match_cons(o_18, sym_Int_1))
                                {
                                  p_18 = ATgetArgument(o_18, 0);
                                  t = t_28(t);
                                }
                              else
                                {
                                  if(match_cons(o_18, sym_Str_1))
                                    {
                                      p_18 = ATgetArgument(o_18, 0);
                                      t = u_28(t);
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
                  if(((ATermList) j_20 == ATempty))
                    {
                      t = v_28(t);
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
          if(match_cons(k_20, sym_Case_4))
            {
              i_20 = ATgetArgument(k_20, 0);
              j_20 = ATgetArgument(k_20, 1);
              z_19 = ATgetArgument(k_20, 2);
              a_20 = ATgetArgument(k_20, 3);
              t = w_28(t);
            }
          else
            {
              if(match_cons(k_20, sym_Continue_1))
                {
                  i_20 = ATgetArgument(k_20, 0);
                  t = x_28(t);
                }
              else
                {
                  if(match_cons(k_20, sym_Assign_2))
                    {
                      i_20 = ATgetArgument(k_20, 0);
                      j_20 = ATgetArgument(k_20, 1);
                      u_17 :
                      if(match_cons(i_20, sym_Var_1))
                        {
                          h_20 = ATgetArgument(i_20, 0);
                          v_17 :
                          if(match_cons(j_20, sym_Var_1))
                            {
                              b_20 = ATgetArgument(j_20, 0);
                              {
                                ATerm b_11 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = y_28(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = b_11;
                                    t = z_28(t);
                                  }
                              }
                            }
                          else
                            t = z_28(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(k_20, sym_Assign_1))
                        {
                          i_20 = ATgetArgument(k_20, 0);
                          w_17 :
                          if(match_cons(i_20, sym_Var_1))
                            {
                              h_20 = ATgetArgument(i_20, 0);
                              t = a_29(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(k_20, sym_Match_2))
                            {
                              i_20 = ATgetArgument(k_20, 0);
                              j_20 = ATgetArgument(k_20, 1);
                              x_17 :
                              if(match_cons(i_20, sym_Op_2))
                                {
                                  h_20 = ATgetArgument(i_20, 0);
                                  g_20 = ATgetArgument(i_20, 1);
                                  y_17 :
                                  if(((ATgetType(g_20) == AT_LIST) && ((ATermList) g_20 != ATempty)))
                                    {
                                      c_20 = ATgetFirst((ATermList) g_20);
                                      d_20 = (ATerm) ATgetNext((ATermList) g_20);
                                      z_17 :
                                      if(((ATgetType(d_20) == AT_LIST) && ((ATermList) d_20 != ATempty)))
                                        {
                                          e_20 = ATgetFirst((ATermList) d_20);
                                          f_20 = (ATerm) ATgetNext((ATermList) d_20);
                                          a_18 :
                                          if(((ATermList) f_20 == ATempty))
                                            {
                                              b_18 :
                                              if(match_string(h_20, "Cons"))
                                                {
                                                  ATerm m_11 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = b_29(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = m_11;
                                                      t = d_29(t);
                                                    }
                                                }
                                              else
                                                t = d_29(t);
                                            }
                                          else
                                            {
                                              c_18 :
                                              t = d_29(t);
                                            }
                                        }
                                      else
                                        {
                                          d_18 :
                                          t = d_29(t);
                                        }
                                    }
                                  else
                                    {
                                      if(((ATermList) g_20 == ATempty))
                                        {
                                          e_18 :
                                          if(match_string(h_20, "Nil"))
                                            {
                                              ATerm n_11 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  t = c_29(t);
                                                  PopChoice();
                                                }
                                              else
                                                {
                                                  t = n_11;
                                                  t = d_29(t);
                                                }
                                            }
                                          else
                                            t = d_29(t);
                                        }
                                      else
                                        {
                                          f_18 :
                                          t = d_29(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(i_20, sym_Real_1))
                                    {
                                      h_20 = ATgetArgument(i_20, 0);
                                      t = e_29(t);
                                    }
                                  else
                                    {
                                      if(match_cons(i_20, sym_Int_1))
                                        {
                                          h_20 = ATgetArgument(i_20, 0);
                                          t = f_29(t);
                                        }
                                      else
                                        {
                                          if(match_cons(i_20, sym_Str_1))
                                            {
                                              h_20 = ATgetArgument(i_20, 0);
                                              t = g_29(t);
                                            }
                                          else
                                            {
                                              if(match_cons(i_20, sym_Var_1))
                                                {
                                                  h_20 = ATgetArgument(i_20, 0);
                                                  t = h_29(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(i_20, sym_As_2))
                                                    {
                                                      h_20 = ATgetArgument(i_20, 0);
                                                      g_20 = ATgetArgument(i_20, 1);
                                                      t = i_29(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(i_20, sym_BuildDefault_1))
                                                        {
                                                          h_20 = ATgetArgument(i_20, 0);
                                                          t = j_29(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(i_20, sym_Wld_0))
                                                            t = k_29(t);
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
                              if(match_cons(k_20, sym_Match_1))
                                {
                                  i_20 = ATgetArgument(k_20, 0);
                                  t = l_29(t);
                                }
                              else
                                {
                                  if(match_cons(k_20, sym_Let_2))
                                    {
                                      i_20 = ATgetArgument(k_20, 0);
                                      j_20 = ATgetArgument(k_20, 1);
                                      t = m_29(t);
                                    }
                                  else
                                    {
                                      if(match_cons(k_20, sym_Where_1))
                                        {
                                          i_20 = ATgetArgument(k_20, 0);
                                          t = n_29(t);
                                        }
                                      else
                                        {
                                          if(match_cons(k_20, sym_Test_1))
                                            {
                                              i_20 = ATgetArgument(k_20, 0);
                                              t = o_29(t);
                                            }
                                          else
                                            {
                                              if(match_cons(k_20, sym_Call_2))
                                                {
                                                  i_20 = ATgetArgument(k_20, 0);
                                                  j_20 = ATgetArgument(k_20, 1);
                                                  g_18 :
                                                  if(match_cons(i_20, sym_SVar_1))
                                                    {
                                                      h_20 = ATgetArgument(i_20, 0);
                                                      t = r_29(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(k_20, sym_Prim_2))
                                                    {
                                                      i_20 = ATgetArgument(k_20, 0);
                                                      j_20 = ATgetArgument(k_20, 1);
                                                      t = y_29(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(k_20, sym_Not_1))
                                                        {
                                                          i_20 = ATgetArgument(k_20, 0);
                                                          t = z_29(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(k_20, sym_LChoice_2))
                                                            {
                                                              i_20 = ATgetArgument(k_20, 0);
                                                              j_20 = ATgetArgument(k_20, 1);
                                                              t = a_30(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(k_20, sym_Choice_2))
                                                                {
                                                                  i_20 = ATgetArgument(k_20, 0);
                                                                  j_20 = ATgetArgument(k_20, 1);
                                                                  t = b_30(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(k_20, sym_Seq_2))
                                                                    {
                                                                      i_20 = ATgetArgument(k_20, 0);
                                                                      j_20 = ATgetArgument(k_20, 1);
                                                                      t = c_30(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(k_20, sym_Scope_2))
                                                                        {
                                                                          i_20 = ATgetArgument(k_20, 0);
                                                                          j_20 = ATgetArgument(k_20, 1);
                                                                          t = d_30(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(k_20, sym_Fail_0))
                                                                            t = e_30(t);
                                                                          else
                                                                            {
                                                                              if(match_cons(k_20, sym_Id_0))
                                                                                t = f_30(t);
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
  return(t);
}
ATerm PlainBody_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym__2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Return_1, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))))), not_null(r_31)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  y_31 :
  if(((ATgetType(a_32) == AT_LIST) && ((ATermList) a_32 != ATempty)))
    {
      b_32 = ATgetFirst((ATermList) a_32);
      c_32 = (ATerm) ATgetNext((ATermList) a_32);
      z_31 :
      if(match_int(b_32, 10))
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_32)), (ATerm) ATmakeInt(110)), (ATerm) ATmakeInt(92));
      else
        {
          if(match_int(b_32, 92))
            t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_32)), (ATerm) ATmakeInt(92)), (ATerm) ATmakeInt(92));
          else
            {
              if(match_int(b_32, 34))
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_32)), (ATerm) ATmakeInt(34)), (ATerm) ATmakeInt(92));
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
    ATerm j_32 (ATerm t)
    {
      ATerm o_11 = t;
      if((PushChoice() == 0))
        {
          t = Escape_0(t);
          {
            ATerm m_1 (ATerm t)
            {
              t = Cons_2(t, _id, j_32);
              return(t);
            }
            t = Cons_2(t, _id, m_1);
          }
          PopChoice();
        }
      else
        {
          t = o_11;
          {
            ATerm q_11 = t;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, j_32);
                PopChoice();
              }
            else
              {
                t = q_11;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = j_32(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
  o_32 = t;
  n_32 :
  if(match_cons(o_32, sym__2))
    {
      p_32 = ATgetArgument(o_32, 0);
      q_32 = ATgetArgument(o_32, 1);
      {
        ATerm t_32 = NULL,v_32 = NULL;
        ATerm r_11;
        r_11 = t;
        {
          ATerm u_32 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue))), not_null(p_32));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  u_32 = t;
                  if(((t_32 != NULL) && (t_32 != u_32)))
                    _fail(u_32);
                  else
                    t_32 = u_32;
                }
              }
            }
          }
        }
        t = r_11;
        {
          ATerm w_32 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue))), not_null(p_32));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  w_32 = t;
                  if(((v_32 != NULL) && (v_32 != w_32)))
                    _fail(w_32);
                  else
                    v_32 = w_32;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Return_1, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(v_32))), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue))))))), not_null(q_32)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(t_32))), (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue))))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm d_33 = NULL;
  d_33 = t;
  {
    ATerm f_33 = NULL,g_33 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_0);
    {
      ATerm n_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, n_1);
      {
        f_33 = t;
        b_33 :
        if(match_cons(f_33, sym_Defined_1))
          {
            g_33 = ATgetArgument(f_33, 0);
            c_33 :
            if(!(match_string(g_33, "b_0")))
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(d_33);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  {
    ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(m_33));
    {
      ATerm o_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
        return(t);
      }
      t = rewrite_1(t, o_1);
      {
        o_33 = t;
        k_33 :
        if(match_cons(o_33, sym_Defined_2))
          {
            p_33 = ATgetArgument(o_33, 0);
            q_33 = ATgetArgument(o_33, 1);
            l_33 :
            if(match_string(p_33, "c_0"))
              {
                if(((m_33 != NULL) && (m_33 != q_33)))
                  _fail(q_33);
                else
                  m_33 = q_33;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(m_33);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  x_33 = t;
  w_33 :
  if(match_cons(x_33, sym_SDef_3))
    {
      y_33 = ATgetArgument(x_33, 0);
      z_33 = ATgetArgument(x_33, 1);
      a_34 = ATgetArgument(x_33, 2);
      {
        ATerm e_34 = NULL,f_34 = NULL;
        ATerm g_34 = NULL;
        t = not_null(z_33);
        {
          ATerm h_34 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            g_34 = t;
            {
              if(((e_34 != NULL) && (e_34 != g_34)))
                _fail(g_34);
              else
                e_34 = g_34;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), not_null(a_34));
                {
                  ATerm v_11 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm p_1 (ATerm t)
                      {
                        ATerm x_11 = t;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = x_11;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, p_1, _id);
                      t = TracedBody_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = v_11;
                      t = PlainBody_0(t);
                    }
                  {
                    h_34 = t;
                    if(((f_34 != NULL) && (f_34 != h_34)))
                      _fail(h_34);
                    else
                      f_34 = h_34;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_33)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(e_34)), (ATerm) ATmakeAppl(sym_ParamDecl_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm) ATmakeAppl(sym_None_0))))))), not_null(f_34));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm quote_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm q_34 = NULL;
  ATerm s_34 = NULL,u_34 = NULL;
  q_34 = t;
  {
    ATerm y_11;
    y_11 = t;
    {
      ATerm t_34 = NULL;
      t = u_73(t);
      {
        t_34 = t;
        if(((s_34 != NULL) && (s_34 != t_34)))
          _fail(t_34);
        else
          s_34 = t_34;
      }
    }
    t = y_11;
    {
      ATerm v_34 = NULL;
      t = not_null(q_34);
      {
        t = explode_string_0(t);
        {
          v_34 = t;
          if(((u_34 != NULL) && (u_34 != v_34)))
            _fail(v_34);
          else
            u_34 = v_34;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, not_null(s_34))), not_null(u_34)), (ATerm) ATinsert(ATempty, not_null(s_34)));
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
  ATerm q_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(34);
    return(t);
  }
  t = quote_1(t, q_1);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  a_35 :
  if(((ATgetType(b_35) == AT_LIST) && ((ATermList) b_35 != ATempty)))
    {
      c_35 = ATgetFirst((ATermList) b_35);
      d_35 = (ATerm) ATgetNext((ATermList) b_35);
      t = not_null(c_35);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  i_35 :
  if(match_cons(j_35, sym__2))
    {
      k_35 = ATgetArgument(j_35, 0);
      l_35 = ATgetArgument(j_35, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_35), not_null(l_35));
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
ATerm rewrite_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm r_35 = NULL;
  ATerm t_35 = NULL;
  r_35 = t;
  {
    ATerm u_35 = NULL;
    t = (ATerm) ATmakeAppl(sym__0);
    {
      t = x_66(t);
      {
        u_35 = t;
        if(((t_35 != NULL) && (t_35 != u_35)))
          _fail(u_35);
        else
          t_35 = u_35;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_35), not_null(r_35));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      {
        ATerm h_36 = NULL;
        ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(d_36), not_null(e_36));
        {
          ATerm r_1 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
            return(t);
          }
          t = rewrite_1(t, r_1);
          {
            i_36 = t;
            z_35 :
            if(match_cons(i_36, sym_Defined_2))
              {
                j_36 = ATgetArgument(i_36, 0);
                k_36 = ATgetArgument(i_36, 1);
                a_36 :
                if(match_string(j_36, "d_0"))
                  {
                    if(((h_36 != NULL) && (h_36 != k_36)))
                      _fail(k_36);
                    else
                      h_36 = k_36;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = not_null(h_36);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InitConstructor_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym_OpDecl_2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      {
        ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,e_37 = NULL;
        ATerm z_11;
        z_11 = t;
        {
          ATerm b_37 = NULL;
          t = not_null(v_36);
          {
            ATerm c_37 = NULL;
            t = Arity_0(t);
            {
              b_37 = t;
              {
                if(((z_36 != NULL) && (z_36 != b_37)))
                  _fail(b_37);
                else
                  z_36 = b_37;
                {
                  ATerm d_37 = NULL;
                  t = int_to_string_0(t);
                  {
                    c_37 = t;
                    {
                      if(((y_36 != NULL) && (y_36 != c_37)))
                        _fail(c_37);
                      else
                        y_36 = c_37;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_36), not_null(z_36));
                        {
                          t = ConstructorName_0(t);
                          {
                            d_37 = t;
                            if(((a_37 != NULL) && (a_37 != d_37)))
                              _fail(d_37);
                            else
                              a_37 = d_37;
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
        t = z_11;
        {
          ATerm f_37 = NULL;
          t = not_null(u_36);
          {
            t = double_quote_0(t);
            {
              f_37 = t;
              if(((e_37 != NULL) && (e_37 != f_37)))
                _fail(f_37);
              else
                e_37 = f_37;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_37)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_37)), (ATerm)ATmakeAppl(sym_AssignEq_0), (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(y_36))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(e_37)))))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InitConstructors_0 (ATerm t)
{
  ATerm n_37 = NULL;
  ATerm p_37 = NULL;
  n_37 = t;
  {
    ATerm q_37 = NULL;
    t = not_null(n_37);
    {
      t = map_1(t, InitConstructor_0);
      {
        q_37 = t;
        if(((p_37 != NULL) && (p_37 != q_37)))
          _fail(q_37);
        else
          p_37 = q_37;
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Void_0), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Void_0), (ATerm) ATempty))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(p_37)));
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_66 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      {
        ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
        ATerm a_12;
        a_12 = t;
        {
          ATerm g_38 = NULL;
          ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
          t = v_66(t);
          {
            g_38 = t;
            {
              if(((d_38 != NULL) && (d_38 != g_38)))
                _fail(g_38);
              else
                d_38 = g_38;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_38), not_null(z_37), not_null(a_38));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_38), (ATerm) ATmakeAppl(sym_Scopes_0));
                        t = table_get_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = b_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_38 = t;
                      w_37 :
                      if(((ATgetType(h_38) == AT_LIST) && ((ATermList) h_38 != ATempty)))
                        {
                          i_38 = ATgetFirst((ATermList) h_38);
                          j_38 = (ATerm) ATgetNext((ATermList) h_38);
                          {
                            if(((e_38 != NULL) && (e_38 != i_38)))
                              _fail(i_38);
                            else
                              e_38 = i_38;
                            {
                              if(((f_38 != NULL) && (f_38 != j_38)))
                                _fail(j_38);
                              else
                                f_38 = j_38;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_38), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(f_38)), (ATerm) ATinsert(CheckATermList(not_null(e_38)), not_null(z_37))));
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
        t = a_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm o_38 = NULL;
  o_38 = t;
  t = SSL_int_to_string(not_null(o_38));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  x_38 :
  if(((ATgetType(z_38) == AT_LIST) && ((ATermList) z_38 != ATempty)))
    {
      a_39 = ATgetFirst((ATermList) z_38);
      b_39 = (ATerm) ATgetNext((ATermList) z_38);
      y_38 :
      if(match_int(a_39, 95))
        {
          ATerm d_39 = NULL;
          ATerm e_39 = NULL;
          t = not_null(b_39);
          {
            t = m_0(t);
            {
              e_39 = t;
              if(((d_39 != NULL) && (d_39 != e_39)))
                _fail(e_39);
              else
                d_39 = e_39;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_39)), (ATerm) ATmakeInt(95)), (ATerm) ATmakeInt(95));
        }
      else
        {
          if(match_int(a_39, 45))
            {
              ATerm g_39 = NULL;
              ATerm h_39 = NULL;
              t = not_null(b_39);
              {
                t = m_0(t);
                {
                  h_39 = t;
                  if(((g_39 != NULL) && (g_39 != h_39)))
                    _fail(h_39);
                  else
                    g_39 = h_39;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_39)), (ATerm) ATmakeInt(95));
            }
          else
            {
              if(match_int(a_39, 39))
                {
                  ATerm j_39 = NULL;
                  ATerm k_39 = NULL;
                  t = not_null(b_39);
                  {
                    t = m_0(t);
                    {
                      k_39 = t;
                      if(((j_39 != NULL) && (j_39 != k_39)))
                        _fail(k_39);
                      else
                        j_39 = k_39;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(j_39)), (ATerm) ATmakeInt(95)), (ATerm) ATmakeInt(112)), (ATerm) ATmakeInt(95));
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
ATerm escape_1 (ATerm t, ATerm h_73 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm r_39 (ATerm t)
    {
      ATerm c_12 = t;
      if((PushChoice() == 0))
        {
          t = h_73(t, r_39);
          PopChoice();
        }
      else
        {
          t = c_12;
          {
            ATerm h_12 = t;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, r_39);
                PopChoice();
              }
            else
              {
                t = h_12;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = r_39(t);
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
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
  u_39 = t;
  t_39 :
  if(match_cons(u_39, sym__2))
    {
      v_39 = ATgetArgument(u_39, 0);
      w_39 = ATgetArgument(u_39, 1);
      {
        ATerm i_12 = t;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_39), not_null(w_39));
            PopChoice();
          }
        else
          {
            t = i_12;
            t = SSL_addr(not_null(v_39), not_null(w_39));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm))
{
  ATerm k_12 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_75(t);
      PopChoice();
    }
  else
    {
      t = k_12;
      {
        ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
        i_40 = t;
        h_40 :
        if(((ATgetType(i_40) == AT_LIST) && ((ATermList) i_40 != ATempty)))
          {
            j_40 = ATgetFirst((ATermList) i_40);
            k_40 = (ATerm) ATgetNext((ATermList) i_40);
            {
              ATerm p_40 = NULL,r_40 = NULL;
              ATerm m_12;
              m_12 = t;
              {
                ATerm q_40 = NULL;
                t = not_null(j_40);
                {
                  t = y_75(t);
                  {
                    q_40 = t;
                    if(((p_40 != NULL) && (p_40 != q_40)))
                      _fail(q_40);
                    else
                      p_40 = q_40;
                  }
                }
              }
              t = m_12;
              {
                ATerm s_40 = NULL;
                t = not_null(k_40);
                {
                  t = foldr_3(t, w_75, x_75, y_75);
                  {
                    s_40 = t;
                    if(((r_40 != NULL) && (r_40 != s_40)))
                      _fail(s_40);
                    else
                      r_40 = s_40;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_40), not_null(r_40));
                  t = x_75(t);
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
  ATerm w_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, w_1, add_0, x_1);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  e_41 = t;
  c_41 :
  if(match_cons(e_41, sym_FunType_2))
    {
      f_41 = ATgetArgument(e_41, 0);
      d_41 = ATgetArgument(e_41, 1);
      {
        t = not_null(f_41);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(e_41, sym_ConstType_1))
        {
          f_41 = ATgetArgument(e_41, 0);
          t = (ATerm) ATmakeInt(0);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm DeclareConstructor_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym_OpDecl_2))
    {
      y_47 = ATgetArgument(x_47, 0);
      z_47 = ATgetArgument(x_47, 1);
      {
        ATerm c_48 = NULL,d_48 = NULL;
        ATerm e_48 = NULL;
        t = not_null(z_47);
        {
          ATerm f_48 = NULL,h_48 = NULL,j_48 = NULL;
          t = Arity_0(t);
          {
            e_48 = t;
            {
              if(((c_48 != NULL) && (c_48 != e_48)))
                _fail(e_48);
              else
                c_48 = e_48;
              {
                ATerm n_12;
                n_12 = t;
                {
                  ATerm g_48 = NULL;
                  t = not_null(y_47);
                  {
                    t = cify_0(t);
                    {
                      g_48 = t;
                      if(((f_48 != NULL) && (f_48 != g_48)))
                        _fail(g_48);
                      else
                        f_48 = g_48;
                    }
                  }
                }
                t = n_12;
                {
                  ATerm i_48 = NULL;
                  t = not_null(c_48);
                  {
                    t = int_to_string_0(t);
                    {
                      i_48 = t;
                      if(((h_48 != NULL) && (h_48 != i_48)))
                        _fail(i_48);
                      else
                        h_48 = i_48;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_48)), (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue))), not_null(f_48)), (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue)));
                    {
                      t = concat_strings_0(t);
                      {
                        j_48 = t;
                        {
                          if(((d_48 != NULL) && (d_48 != j_48)))
                            _fail(j_48);
                          else
                            d_48 = j_48;
                          {
                            ATerm o_12;
                            o_12 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(y_47), not_null(c_48)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue)), not_null(d_48)));
                              {
                                ATerm a_2 (ATerm t)
                                {
                                  t = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
                                  return(t);
                                }
                                t = assert_1(t, a_2);
                              }
                            }
                            t = o_12;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_48)), (ATerm) ATmakeAppl(sym_None_0))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateSig_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  x_48 = t;
  t_48 :
  if(match_cons(x_48, sym_Signature_1))
    {
      y_48 = ATgetArgument(x_48, 0);
      u_48 :
      if(((ATgetType(y_48) == AT_LIST) && ((ATermList) y_48 != ATempty)))
        {
          z_48 = ATgetFirst((ATermList) y_48);
          b_49 = (ATerm) ATgetNext((ATermList) y_48);
          v_48 :
          if(match_cons(z_48, sym_Constructors_1))
            {
              a_49 = ATgetArgument(z_48, 0);
              w_48 :
              if(((ATermList) b_49 == ATempty))
                {
                  {
                    ATerm d_49 = NULL,e_49 = NULL,h_49 = NULL;
                    ATerm p_12;
                    p_12 = t;
                    {
                      ATerm f_49 = NULL;
                      t = not_null(a_49);
                      {
                        ATerm g_49 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          f_49 = t;
                          {
                            if(((d_49 != NULL) && (d_49 != f_49)))
                              _fail(f_49);
                            else
                              d_49 = f_49;
                            {
                              t = not_null(a_49);
                              {
                                t = InitConstructors_0(t);
                                {
                                  g_49 = t;
                                  if(((e_49 != NULL) && (e_49 != g_49)))
                                    _fail(g_49);
                                  else
                                    e_49 = g_49;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = p_12;
                    {
                      ATerm i_49 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_49), (ATerm) ATinsert(ATempty, not_null(e_49)));
                      {
                        t = conc_0(t);
                        {
                          i_49 = t;
                          if(((h_49 != NULL) && (h_49 != i_49)))
                            _fail(i_49);
                          else
                            h_49 = i_49;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(h_49));
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
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  o_49 :
  if(match_cons(p_49, sym__2))
    {
      q_49 = ATgetArgument(p_49, 0);
      r_49 = ATgetArgument(p_49, 1);
      {
        t = not_null(q_49);
        {
          ATerm e_2 (ATerm t)
          {
            t = not_null(r_49);
            return(t);
          }
          t = at_end_1(t, e_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateType_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  a_50 = t;
  y_49 :
  if(match_cons(a_50, sym_FunType_2))
    {
      b_50 = ATgetArgument(a_50, 0);
      z_49 = ATgetArgument(a_50, 1);
      {
        ATerm d_50 = NULL;
        ATerm e_50 = NULL;
        t = not_null(b_50);
        {
          t = map_1(t, TranslateType_0);
          {
            e_50 = t;
            if(((d_50 != NULL) && (d_50 != e_50)))
              _fail(e_50);
            else
              d_50 = e_50;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_ParamList_1, not_null(d_50)));
      }
    }
  else
    {
      if(match_cons(a_50, sym_ConstType_1))
        {
          b_50 = ATgetArgument(a_50, 0);
          t = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm TranslateVarDec_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  o_50 = t;
  l_50 :
  if(match_cons(o_50, sym_VarDec_2))
    {
      p_50 = ATgetArgument(o_50, 0);
      q_50 = ATgetArgument(o_50, 1);
      m_50 :
      if(match_cons(q_50, sym_FunType_2))
        {
          r_50 = ATgetArgument(q_50, 0);
          n_50 = ATgetArgument(q_50, 1);
          {
            ATerm u_50 = NULL;
            ATerm v_50 = NULL;
            t = not_null(r_50);
            {
              t = map_1(t, TranslateType_0);
              {
                v_50 = t;
                if(((u_50 != NULL) && (u_50 != v_50)))
                  _fail(v_50);
                else
                  u_50 = v_50;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_50)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(u_50)))));
          }
        }
      else
        {
          if(match_cons(q_50, sym_ConstType_1))
            {
              r_50 = ATgetArgument(q_50, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_50)), (ATerm) ATmakeAppl(sym_None_0)));
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
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL;
  d_51 = t;
  c_51 :
  if(match_cons(d_51, sym_SDef_3))
    {
      e_51 = ATgetArgument(d_51, 0);
      f_51 = ATgetArgument(d_51, 1);
      g_51 = ATgetArgument(d_51, 2);
      {
        ATerm k_51 = NULL;
        ATerm l_51 = NULL;
        t = not_null(f_51);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            l_51 = t;
            if(((k_51 != NULL) && (k_51 != l_51)))
              _fail(l_51);
            else
              k_51 = l_51;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_51)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(k_51)), (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty)))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateSpec_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
  x_51 = t;
  r_51 :
  if(match_cons(x_51, sym_Specification_1))
    {
      y_51 = ATgetArgument(x_51, 0);
      s_51 :
      if(((ATgetType(y_51) == AT_LIST) && ((ATermList) y_51 != ATempty)))
        {
          z_51 = ATgetFirst((ATermList) y_51);
          b_52 = (ATerm) ATgetNext((ATermList) y_51);
          t_51 :
          if(match_cons(z_51, sym_Signature_1))
            {
              a_52 = ATgetArgument(z_51, 0);
              u_51 :
              if(((ATgetType(b_52) == AT_LIST) && ((ATermList) b_52 != ATempty)))
                {
                  c_52 = ATgetFirst((ATermList) b_52);
                  e_52 = (ATerm) ATgetNext((ATermList) b_52);
                  v_51 :
                  if(match_cons(c_52, sym_Strategies_1))
                    {
                      d_52 = ATgetArgument(c_52, 0);
                      w_51 :
                      if(((ATermList) e_52 == ATempty))
                        {
                          {
                            ATerm h_52 = NULL,j_52 = NULL;
                            ATerm q_12;
                            q_12 = t;
                            {
                              ATerm i_52 = NULL;
                              t = not_null(d_52);
                              {
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  i_52 = t;
                                  if(((h_52 != NULL) && (h_52 != i_52)))
                                    _fail(i_52);
                                  else
                                    h_52 = i_52;
                                }
                              }
                            }
                            t = q_12;
                            {
                              ATerm k_52 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_52), not_null(d_52));
                              {
                                t = conc_0(t);
                                {
                                  k_52 = t;
                                  if(((j_52 != NULL) && (j_52 != k_52)))
                                    _fail(k_52);
                                  else
                                    j_52 = k_52;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(j_52)), (ATerm) ATmakeAppl(sym_Signature_1, not_null(a_52))), (ATerm) ATmakeAppl(sym_Include_1, (ATerm) ATmakeAppl(ATmakeSymbol("#include <stratego-lib.h>", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Include_1, (ATerm) ATmakeAppl(ATmakeSymbol("#include <stratego.h>", 0, ATtrue)))));
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
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  p_52 :
  if(((ATgetType(q_52) == AT_LIST) && ((ATermList) q_52 != ATempty)))
    {
      r_52 = ATgetFirst((ATermList) q_52);
      s_52 = (ATerm) ATgetNext((ATermList) q_52);
      t = not_null(s_52);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
  z_52 = t;
  y_52 :
  if(match_cons(z_52, sym__2))
    {
      a_53 = ATgetArgument(z_52, 0);
      b_53 = ATgetArgument(z_52, 1);
      {
        ATerm r_12;
        r_12 = t;
        {
          ATerm e_53 = NULL;
          ATerm f_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_53), not_null(b_53));
          {
            ATerm u_12 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                PopChoice();
              }
            else
              {
                t = u_12;
                t = (ATerm) ATempty;
              }
            {
              f_53 = t;
              if(((e_53 != NULL) && (e_53 != f_53)))
                _fail(f_53);
              else
                e_53 = f_53;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_53), not_null(b_53), not_null(e_53));
            t = table_put_0(t);
          }
        }
        t = r_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_66 (ATerm))
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm p_53 = NULL;
    ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
    t = s_66(t);
    {
      p_53 = t;
      {
        if(((n_53 != NULL) && (n_53 != p_53)))
          _fail(p_53);
        else
          n_53 = p_53;
        {
          ATerm j_13 = t;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_53), (ATerm) ATmakeAppl(sym_Scopes_0));
              t = table_get_0(t);
              PopChoice();
            }
          else
            {
              t = j_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            q_53 = t;
            l_53 :
            if(((ATgetType(q_53) == AT_LIST) && ((ATermList) q_53 != ATempty)))
              {
                r_53 = ATgetFirst((ATermList) q_53);
                s_53 = (ATerm) ATgetNext((ATermList) q_53);
                {
                  if(((o_53 != NULL) && (o_53 != r_53)))
                    _fail(r_53);
                  else
                    o_53 = r_53;
                  {
                    if(((m_53 != NULL) && (m_53 != s_53)))
                      _fail(s_53);
                    else
                      m_53 = s_53;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(n_53), (ATerm)ATmakeAppl(sym_Scopes_0), not_null(m_53));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(o_53);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm t_53 = NULL;
                              t_53 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_53), not_null(t_53));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, f_2);
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
  t = i_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_88 (ATerm), ATerm c_88 (ATerm))
{
  ATerm o_13 = t;
  if((PushChoice() == 0))
    {
      t = b_88(t);
      t = c_88(t);
      PopChoice();
    }
  else
    {
      t = o_13;
      {
        t = c_88(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_66 (ATerm))
{
  ATerm a_54 = NULL;
  ATerm p_13;
  p_13 = t;
  {
    ATerm b_54 = NULL;
    ATerm c_54 = NULL;
    t = r_66(t);
    {
      b_54 = t;
      {
        if(((a_54 != NULL) && (a_54 != b_54)))
          _fail(b_54);
        else
          a_54 = b_54;
        {
          ATerm d_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_54), (ATerm) ATmakeAppl(sym_Scopes_0));
          {
            ATerm q_13 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = q_13;
                t = (ATerm) ATempty;
              }
            {
              d_54 = t;
              if(((c_54 != NULL) && (c_54 != d_54)))
                _fail(d_54);
              else
                c_54 = d_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_54), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(c_54)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = p_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm))
{
  t = begin_scope_1(t, t_66);
  {
    ATerm g_2 (ATerm t)
    {
      t = end_scope_1(t, t_66);
      return(t);
    }
    t = restore_always_2(t, u_66, g_2);
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm r_13 = t;
      if((PushChoice() == 0))
        {
          t = TranslateSpec_0(t);
          PopChoice();
        }
      else
        {
          t = r_13;
          {
            ATerm s_13 = t;
            if((PushChoice() == 0))
              {
                t = TranslateSig_0(t);
                PopChoice();
              }
            else
              {
                t = s_13;
                {
                  ATerm t_13 = t;
                  if((PushChoice() == 0))
                    {
                      t = TranslateDef_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = t_13;
                      t = TranslateStrat_0(t);
                    }
                }
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, n_2);
    {
      t = _all(t, compile_0);
      t = repeat_1(t, Csimplify_0);
    }
    return(t);
  }
  t = scope_2(t, h_2, l_2);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_54 = NULL;
  ATerm u_13;
  u_13 = t;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm k_54 = NULL,l_54 = NULL;
      k_54 = t;
      i_54 :
      if(match_cons(k_54, sym_Program_1))
        {
          l_54 = ATgetArgument(k_54, 0);
          if(((j_54 != NULL) && (j_54 != l_54)))
            _fail(l_54);
          else
            j_54 = l_54;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, o_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(j_54)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = u_13;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue))));
  {
    t = printnl_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  ATerm p_2 (ATerm t)
  {
    ATerm q_2 (ATerm t)
    {
      ATerm v_13 = t;
      if((PushChoice() == 0))
        {
          ATerm r_2 (ATerm t)
          {
            ATerm u_54 = NULL;
            u_54 = t;
            n_54 :
            if(!(match_cons(u_54, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_2);
          PopChoice();
          _fail(t);
        }
      else
        t = v_13;
      return(t);
    }
    t = _2(t, q_2, _id);
    {
      ATerm s_2 (ATerm t)
      {
        ATerm t_2 (ATerm t)
        {
          ATerm v_54 = NULL,w_54 = NULL;
          v_54 = t;
          p_54 :
          if(match_cons(v_54, sym_Runtime_1))
            {
              w_54 = ATgetArgument(v_54, 0);
              if(((t_54 != NULL) && (t_54 != w_54)))
                _fail(w_54);
              else
                t_54 = w_54;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, t_2);
        return(t);
      }
      t = _2(t, s_2, _id);
      {
        ATerm u_2 (ATerm t)
        {
          ATerm v_2 (ATerm t)
          {
            ATerm x_54 = NULL,y_54 = NULL;
            x_54 = t;
            r_54 :
            if(match_cons(x_54, sym_Program_1))
              {
                y_54 = ATgetArgument(x_54, 0);
                if(((s_54 != NULL) && (s_54 != y_54)))
                  _fail(y_54);
                else
                  s_54 = y_54;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, v_2);
          return(t);
        }
        t = _2(t, u_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(t_54)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(s_54)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, p_2);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
  d_55 = t;
  c_55 :
  if(match_cons(d_55, sym__2))
    {
      e_55 = ATgetArgument(d_55, 0);
      f_55 = ATgetArgument(d_55, 1);
      t = SSL_WriteToTextFile(not_null(e_55), not_null(f_55));
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm u_47 (ATerm), ATerm v_47 (ATerm))
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
  n_55 = t;
  m_55 :
  if(match_cons(n_55, sym__2))
    {
      o_55 = ATgetArgument(n_55, 0);
      p_55 = ATgetArgument(n_55, 1);
      {
        ATerm s_55 = NULL;
        t = not_null(o_55);
        {
          ATerm u_55 = NULL;
          t = u_47(t);
          {
            s_55 = t;
            {
              t = not_null(p_55);
              {
                t = v_47(t);
                {
                  u_55 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_55), not_null(u_55));
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
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
  b_56 = t;
  a_56 :
  if(match_cons(b_56, sym__2))
    {
      c_56 = ATgetArgument(b_56, 0);
      d_56 = ATgetArgument(b_56, 1);
      t = SSL_WriteToBinaryFile(not_null(c_56), not_null(d_56));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_56 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm w_2 (ATerm t)
    {
      ATerm x_13 = t;
      if((PushChoice() == 0))
        {
          ATerm x_2 (ATerm t)
          {
            ATerm m_56 = NULL,n_56 = NULL;
            m_56 = t;
            i_56 :
            if(match_cons(m_56, sym_Output_1))
              {
                n_56 = ATgetArgument(m_56, 0);
                if(((l_56 != NULL) && (l_56 != n_56)))
                  _fail(n_56);
                else
                  l_56 = n_56;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, x_2);
          PopChoice();
        }
      else
        {
          t = x_13;
          {
            ATerm o_56 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              o_56 = t;
              if(((l_56 != NULL) && (l_56 != o_56)))
                _fail(o_56);
              else
                l_56 = o_56;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_2, _id);
  }
  t = w_13;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm z_2 (ATerm t)
      {
        t = not_null(l_56);
        return(t);
      }
      t = split_2(t, z_2, _id);
      return(t);
    }
    t = _2(t, _id, y_2);
    {
      ATerm y_13 = t;
      if((PushChoice() == 0))
        {
          ATerm a_3 (ATerm t)
          {
            ATerm q_5 (ATerm t)
            {
              ATerm p_56 = NULL;
              p_56 = t;
              k_56 :
              if(!(match_cons(p_56, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, q_5);
            return(t);
          }
          t = _2(t, a_3, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = y_13;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_72 (ATerm))
{
  ATerm v_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL;
  ATerm z_13;
  z_13 = t;
  t = dtime_0(t);
  t = z_13;
  {
    t = a_72(t);
    {
      ATerm a_14;
      a_14 = t;
      {
        ATerm w_56 = NULL;
        t = dtime_0(t);
        {
          w_56 = t;
          if(((v_56 != NULL) && (v_56 != w_56)))
            _fail(w_56);
          else
            v_56 = w_56;
        }
      }
      t = a_14;
      {
        x_56 = t;
        u_56 :
        if(match_cons(x_56, sym__2))
          {
            y_56 = ATgetArgument(x_56, 0);
            z_56 = ATgetArgument(x_56, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_56)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_56))), not_null(z_56));
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
  ATerm f_57 = NULL;
  f_57 = t;
  t = SSL_ReadFromFile(not_null(f_57));
  return(t);
}
ATerm split_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  ATerm k_57 = NULL,m_57 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm l_57 = NULL;
    t = i_74(t);
    {
      l_57 = t;
      if(((k_57 != NULL) && (k_57 != l_57)))
        _fail(l_57);
      else
        k_57 = l_57;
    }
  }
  t = b_14;
  {
    ATerm n_57 = NULL;
    t = j_74(t);
    {
      n_57 = t;
      if(((m_57 != NULL) && (m_57 != n_57)))
        _fail(n_57);
      else
        m_57 = n_57;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_57), not_null(m_57));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_57 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    ATerm d_14 = t;
    if((PushChoice() == 0))
      {
        ATerm r_5 (ATerm t)
        {
          ATerm u_57 = NULL,v_57 = NULL;
          u_57 = t;
          r_57 :
          if(match_cons(u_57, sym_Input_1))
            {
              v_57 = ATgetArgument(u_57, 0);
              if(((t_57 != NULL) && (t_57 != v_57)))
                _fail(v_57);
              else
                t_57 = v_57;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, r_5);
        PopChoice();
      }
    else
      {
        t = d_14;
        {
          ATerm w_57 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            w_57 = t;
            if(((t_57 != NULL) && (t_57 != w_57)))
              _fail(w_57);
            else
              t_57 = w_57;
          }
        }
      }
  }
  t = c_14;
  {
    ATerm s_5 (ATerm t)
    {
      t = not_null(t_57);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_58 = NULL;
  a_58 = t;
  z_57 :
  if(!(match_cons(a_58, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm e_14 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = e_14;
        {
          ATerm f_14 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = f_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_5);
  t = z_71(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_58 = NULL;
  c_58 = t;
  t = SSL_table_create(not_null(c_58));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  {
    ATerm g_14;
    g_14 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(g_58));
          t = table_put_0(t);
        }
      }
    }
    t = g_14;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,t_58 = NULL;
  o_58 = t;
  m_58 :
  if(match_string(o_58, "register-usage-info"))
    t = register_usage_1(t, l_0);
  else
    {
      if(((ATgetType(o_58) == AT_LIST) && ((ATermList) o_58 != ATempty)))
        {
          p_58 = ATgetFirst((ATermList) o_58);
          q_58 = (ATerm) ATgetNext((ATermList) o_58);
          n_58 :
          if(((ATgetType(q_58) == AT_LIST) && ((ATermList) q_58 != ATempty)))
            {
              r_58 = ATgetFirst((ATermList) q_58);
              t_58 = (ATerm) ATgetNext((ATermList) q_58);
              {
                ATerm x_58 = NULL;
                ATerm h_14;
                h_14 = t;
                {
                  t = not_null(p_58);
                  t = j_0(t);
                }
                t = h_14;
                {
                  ATerm y_58 = NULL;
                  t = not_null(r_58);
                  {
                    t = k_0(t);
                    {
                      y_58 = t;
                      if(((x_58 != NULL) && (x_58 != y_58)))
                        _fail(y_58);
                      else
                        x_58 = y_58;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_58)), not_null(x_58));
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
  ATerm i_14 = t;
  if((PushChoice() == 0))
    {
      ATerm u_5 (ATerm t)
      {
        ATerm n_59 = NULL;
        n_59 = t;
        c_59 :
        if(!(match_string(n_59, "-S")))
          {
            if(!(match_string(n_59, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm v_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm w_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, u_5, v_5, w_5);
      PopChoice();
    }
  else
    {
      t = i_14;
      {
        ATerm j_14 = t;
        if((PushChoice() == 0))
          {
            ATerm x_5 (ATerm t)
            {
              ATerm o_59 = NULL;
              o_59 = t;
              d_59 :
              if(!(match_string(o_59, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm y_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm z_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, x_5, y_5, z_5);
            PopChoice();
          }
        else
          {
            t = j_14;
            {
              ATerm k_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm a_6 (ATerm t)
                  {
                    ATerm p_59 = NULL;
                    p_59 = t;
                    e_59 :
                    if(!(match_string(p_59, "-v")))
                      {
                        if(!(match_string(p_59, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm b_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm c_6 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, a_6, b_6, c_6);
                  PopChoice();
                }
              else
                {
                  t = k_14;
                  {
                    ATerm l_14 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm d_6 (ATerm t)
                        {
                          ATerm q_59 = NULL;
                          q_59 = t;
                          f_59 :
                          if(!(match_string(q_59, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm e_6 (ATerm t)
                        {
                          ATerm r_59 = NULL;
                          ATerm s_59 = NULL;
                          s_59 = t;
                          if(((r_59 != NULL) && (r_59 != s_59)))
                            _fail(s_59);
                          else
                            r_59 = s_59;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(r_59));
                          return(t);
                        }
                        ATerm f_6 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, d_6, e_6, f_6);
                        PopChoice();
                      }
                    else
                      {
                        t = l_14;
                        {
                          ATerm m_14 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm g_6 (ATerm t)
                              {
                                ATerm t_59 = NULL;
                                t_59 = t;
                                h_59 :
                                if(!(match_string(t_59, "-i")))
                                  {
                                    if(!(match_string(t_59, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm j_6 (ATerm t)
                              {
                                ATerm u_59 = NULL;
                                ATerm v_59 = NULL;
                                v_59 = t;
                                if(((u_59 != NULL) && (u_59 != v_59)))
                                  _fail(v_59);
                                else
                                  u_59 = v_59;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_59));
                                return(t);
                              }
                              ATerm k_6 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, g_6, j_6, k_6);
                              PopChoice();
                            }
                          else
                            {
                              t = m_14;
                              {
                                ATerm n_14 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_6 (ATerm t)
                                    {
                                      ATerm w_59 = NULL;
                                      w_59 = t;
                                      j_59 :
                                      if(!(match_string(w_59, "-o")))
                                        {
                                          if(!(match_string(w_59, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm m_6 (ATerm t)
                                    {
                                      ATerm x_59 = NULL;
                                      ATerm y_59 = NULL;
                                      y_59 = t;
                                      if(((x_59 != NULL) && (x_59 != y_59)))
                                        _fail(y_59);
                                      else
                                        x_59 = y_59;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_59));
                                      return(t);
                                    }
                                    ATerm r_6 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, l_6, m_6, r_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = n_14;
                                    {
                                      ATerm o_14 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm z_6 (ATerm t)
                                          {
                                            ATerm z_59 = NULL;
                                            z_59 = t;
                                            l_59 :
                                            if(!(match_string(z_59, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm a_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm b_7 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, z_6, a_7, b_7);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = o_14;
                                          {
                                            ATerm d_7 (ATerm t)
                                            {
                                              ATerm a_60 = NULL;
                                              a_60 = t;
                                              m_59 :
                                              if(!(match_string(a_60, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm e_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm f_7 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, d_7, e_7, f_7);
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
  ATerm f_60 = NULL;
  f_60 = t;
  t = SSL_table_destroy(not_null(f_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_60 = NULL;
  ATerm o_60 (ATerm t)
  {
    t = SSL_exit(not_null(k_60));
    return(t);
  }
  k_60 = t;
  j_60 :
  if(match_cons(k_60, sym_exit_0))
    {
      ATerm p_14 = t;
      if((PushChoice() == 0))
        {
          t = o_60(t);
          PopChoice();
        }
      else
        {
          t = p_14;
          {
          }
        }
    }
  else
    t = o_60(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_60 = NULL;
  q_60 = t;
  t = SSL_implode_string(not_null(q_60));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm t_60 (ATerm t)
  {
    ATerm q_14 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_60);
        PopChoice();
      }
    else
      {
        t = q_14;
        {
          t = Nil_0(t);
          t = i_81(t);
        }
      }
    return(t);
  }
  t = t_60(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_14 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = r_14;
      {
        ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
        w_60 = t;
        v_60 :
        if(((ATgetType(w_60) == AT_LIST) && ((ATermList) w_60 != ATempty)))
          {
            x_60 = ATgetFirst((ATermList) w_60);
            y_60 = (ATerm) ATgetNext((ATermList) w_60);
            {
              t = not_null(x_60);
              {
                ATerm g_7 (ATerm t)
                {
                  t = not_null(y_60);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_7);
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
  ATerm e_61 = NULL;
  e_61 = t;
  t = SSL_explode_string(not_null(e_61));
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
ATerm long_description_1 (ATerm t, ATerm g_70 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm h_61 (ATerm t)
  {
    ATerm s_14 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = s_14;
        t = Cons_2(t, u_80, h_61);
      }
    return(t);
  }
  t = h_61(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL;
  o_61 = t;
  l_61 :
  if(((ATgetType(o_61) == AT_LIST) && ((ATermList) o_61 != ATempty)))
    {
      m_61 = ATgetFirst((ATermList) o_61);
      n_61 = (ATerm) ATgetNext((ATermList) o_61);
      {
        t = not_null(n_61);
        {
          ATerm h_7 (ATerm t)
          {
            ATerm r_61 = NULL;
            ATerm s_61 = NULL;
            t = i_0(t);
            {
              s_61 = t;
              if(((r_61 != NULL) && (r_61 != s_61)))
                _fail(s_61);
              else
                r_61 = s_61;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(r_61)), not_null(m_61));
            return(t);
          }
          t = reverse_1(t, h_7);
        }
      }
    }
  else
    {
      if(((ATermList) o_61 == ATempty))
        {
          {
            t = (ATerm) ATmakeAppl(sym__0);
            t = i_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, i_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_70 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_60 (ATerm))
{
  ATerm z_61 = NULL,a_62 = NULL;
  z_61 = t;
  y_61 :
  if(match_cons(z_61, sym_Program_1))
    {
      a_62 = ATgetArgument(z_61, 0);
      {
        ATerm c_62 = NULL;
        t = not_null(a_62);
        {
          t = m_60(t);
          {
            c_62 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_62));
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
  ATerm k_62 = NULL;
  ATerm j_7 (ATerm t)
  {
    ATerm k_7 (ATerm t)
    {
      ATerm l_62 = NULL;
      l_62 = t;
      if(((k_62 != NULL) && (k_62 != l_62)))
        _fail(l_62);
      else
        k_62 = l_62;
      return(t);
    }
    t = Program_1(t, k_7);
    return(t);
  }
  t = option_defined_1(t, j_7);
  {
    ATerm l_7 (ATerm t)
    {
      ATerm m_62 = NULL;
      ATerm n_62 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm m_7 (ATerm t)
        {
          t = not_null(k_62);
          return(t);
        }
        t = short_description_1(t, m_7);
        {
          t = concat_strings_0(t);
          {
            n_62 = t;
            if(((m_62 != NULL) && (m_62 != n_62)))
              _fail(n_62);
            else
              m_62 = n_62;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(m_62)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_7 (ATerm t)
                {
                  ATerm o_62 = NULL;
                  o_62 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_62)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_7);
                {
                  ATerm s_7 (ATerm t)
                  {
                    ATerm q_62 = NULL;
                    ATerm r_62 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm t_7 (ATerm t)
                      {
                        t = not_null(k_62);
                        return(t);
                      }
                      t = long_description_1(t, t_7);
                      {
                        t = concat_strings_0(t);
                        {
                          r_62 = t;
                          if(((q_62 != NULL) && (q_62 != r_62)))
                            _fail(r_62);
                          else
                            q_62 = r_62;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_62)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_7);
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
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
  y_62 = t;
  x_62 :
  if(match_cons(y_62, sym__2))
    {
      z_62 = ATgetArgument(y_62, 0);
      a_63 = ATgetArgument(y_62, 1);
      {
        ATerm t_14;
        t_14 = t;
        t = SSL_printnl(not_null(z_62), not_null(a_63));
        t = t_14;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_60 (ATerm))
{
  ATerm h_63 = NULL,i_63 = NULL;
  h_63 = t;
  g_63 :
  if(match_cons(h_63, sym_Undefined_1))
    {
      i_63 = ATgetArgument(h_63, 0);
      {
        ATerm k_63 = NULL;
        t = not_null(i_63);
        {
          t = n_60(t);
          {
            k_63 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_63));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm o_63 (ATerm t)
  {
    ATerm u_14 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_81, _id);
        PopChoice();
      }
    else
      {
        t = u_14;
        t = Cons_2(t, _id, o_63);
      }
    return(t);
  }
  t = o_63(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_71 (ATerm))
{
  t = fetch_1(t, e_71);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_63 = NULL;
  q_63 = t;
  p_63 :
  if(!(match_cons(q_63, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm v_14 = t;
  if((PushChoice() == 0))
    {
      t = o_87(t);
      PopChoice();
    }
  else
    {
      t = v_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
  t_63 = t;
  s_63 :
  if(match_cons(t_63, sym__2))
    {
      u_63 = ATgetArgument(t_63, 0);
      v_63 = ATgetArgument(t_63, 1);
      t = SSL_table_get(not_null(u_63), not_null(v_63));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,h_64 = NULL,i_64 = NULL;
  d_64 = t;
  c_64 :
  if(match_cons(d_64, sym__3))
    {
      e_64 = ATgetArgument(d_64, 0);
      h_64 = ATgetArgument(d_64, 1);
      i_64 = ATgetArgument(d_64, 2);
      {
        ATerm w_14;
        w_14 = t;
        {
          ATerm m_64 = NULL;
          ATerm n_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_64), not_null(h_64));
          {
            ATerm x_14 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = x_14;
                t = (ATerm) ATempty;
              }
            {
              n_64 = t;
              if(((m_64 != NULL) && (m_64 != n_64)))
                _fail(n_64);
              else
                m_64 = n_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_64), not_null(h_64), (ATerm) ATinsert(CheckATermList(not_null(m_64)), not_null(i_64)));
            t = table_put_0(t);
          }
        }
        t = w_14;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_70 (ATerm))
{
  ATerm r_64 = NULL;
  ATerm s_64 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = k_70(t);
    {
      s_64 = t;
      if(((r_64 != NULL) && (r_64 != s_64)))
        _fail(s_64);
      else
        r_64 = s_64;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(r_64));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
  y_64 = t;
  x_64 :
  if(match_string(y_64, "register-usage-info"))
    t = register_usage_1(t, h_0);
  else
    {
      if(((ATgetType(y_64) == AT_LIST) && ((ATermList) y_64 != ATempty)))
        {
          z_64 = ATgetFirst((ATermList) y_64);
          a_65 = (ATerm) ATgetNext((ATermList) y_64);
          {
            ATerm d_65 = NULL;
            ATerm y_14;
            y_14 = t;
            {
              t = not_null(z_64);
              t = f_0(t);
            }
            t = y_14;
            {
              ATerm e_65 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = g_0(t);
                {
                  e_65 = t;
                  if(((d_65 != NULL) && (d_65 != e_65)))
                    _fail(e_65);
                  else
                    d_65 = e_65;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_65)), not_null(d_65));
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
  ATerm y_7 (ATerm t)
  {
    ATerm j_65 = NULL;
    j_65 = t;
    i_65 :
    if(!(match_string(j_65, "--help")))
      {
        if(!(match_string(j_65, "-h")))
          {
            if(!(match_string(j_65, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm z_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm a_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, y_7, z_7, a_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  m_65 = t;
  l_65 :
  if(((ATgetType(m_65) == AT_LIST) && ((ATermList) m_65 != ATempty)))
    {
      n_65 = ATgetFirst((ATermList) m_65);
      o_65 = (ATerm) ATgetNext((ATermList) m_65);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_65)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_65)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm))
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL;
  w_65 = t;
  v_65 :
  if(((ATgetType(w_65) == AT_LIST) && ((ATermList) w_65 != ATempty)))
    {
      x_65 = ATgetFirst((ATermList) w_65);
      y_65 = (ATerm) ATgetNext((ATermList) w_65);
      {
        ATerm b_66 = NULL;
        t = not_null(x_65);
        {
          ATerm f_66 = NULL;
          t = c_66(t);
          {
            b_66 = t;
            {
              t = not_null(y_65);
              {
                t = d_66(t);
                {
                  f_66 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_66)), not_null(b_66));
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
  ATerm l_66 = NULL;
  l_66 = t;
  k_66 :
  if(((ATermList) l_66 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm z_14;
  z_14 = t;
  {
    ATerm d_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = i_70(t);
      return(t);
    }
    t = try_1(t, d_8);
  }
  t = z_14;
  {
    ATerm g_8 (ATerm t)
    {
      ATerm n_66 = NULL;
      n_66 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_66));
      return(t);
    }
    ATerm j_8 (ATerm t)
    {
      ATerm a_15 = t;
      if((PushChoice() == 0))
        {
          ATerm b_15 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = b_15;
              {
                t = i_70(t);
                t = Cons_2(t, _id, j_8);
              }
            }
          PopChoice();
        }
      else
        {
          t = a_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_8, j_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
  ATerm c_15;
  c_15 = t;
  {
    ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
    c_67 = t;
    y_66 :
    if(match_cons(c_67, sym__3))
      {
        d_67 = ATgetArgument(c_67, 0);
        e_67 = ATgetArgument(c_67, 1);
        f_67 = ATgetArgument(c_67, 2);
        {
          if(((z_66 != NULL) && (z_66 != d_67)))
            _fail(d_67);
          else
            z_66 = d_67;
          {
            if(((a_67 != NULL) && (a_67 != e_67)))
              _fail(e_67);
            else
              a_67 = e_67;
            {
              if(((b_67 != NULL) && (b_67 != f_67)))
                _fail(f_67);
              else
                b_67 = f_67;
              t = SSL_table_put(not_null(z_66), not_null(a_67), not_null(b_67));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = c_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm i_67 = NULL;
  ATerm e_15;
  e_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = e_15;
  {
    ATerm k_8 (ATerm t)
    {
      ATerm f_15 = t;
      if((PushChoice() == 0))
        {
          t = h_70(t);
          PopChoice();
        }
      else
        {
          t = f_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_8);
    {
      ATerm l_8 (ATerm t)
      {
        ATerm g_15 = t;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
            }
            PopChoice();
          }
        else
          {
            t = g_15;
            {
              ATerm m_8 (ATerm t)
              {
                ATerm n_8 (ATerm t)
                {
                  ATerm j_67 = NULL;
                  j_67 = t;
                  if(((i_67 != NULL) && (i_67 != j_67)))
                    _fail(j_67);
                  else
                    i_67 = j_67;
                  return(t);
                }
                t = Undefined_1(t, n_8);
                return(t);
              }
              t = option_defined_1(t, m_8);
              {
                ATerm j_15;
                j_15 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_67)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = j_15;
                {
                  t = system_usage_0(t);
                  {
                    t = (ATerm) ATmakeInt(1);
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, l_8);
      {
        ATerm l_15;
        l_15 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = l_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_71 (ATerm), ATerm p_71 (ATerm), ATerm q_71 (ATerm))
{
  ATerm o_8 (ATerm t)
  {
    ATerm m_15 = t;
    if((PushChoice() == 0))
      {
        t = p_71(t);
        PopChoice();
      }
    else
      {
        t = m_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, o_8);
  {
    t = store_options_0(t);
    {
      ATerm n_15 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, q_71);
          PopChoice();
        }
      else
        {
          t = n_15;
          {
            ATerm o_15 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, o_71);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = o_15;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_71 (ATerm), ATerm k_71 (ATerm))
{
  t = iowrap_3(t, j_71, k_71, default_usage_0);
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
