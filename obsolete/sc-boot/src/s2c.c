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
ATerm term_a_36;
ATerm term_u_35;
ATerm term_l_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_k_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_c_33;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_e_31;
ATerm term_v_30;
ATerm term_p_30;
ATerm term_q_29;
ATerm term_i_28;
ATerm term_e_28;
ATerm term_w_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_x_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_h_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
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
ATerm term_w_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_i_14;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_h_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_u_9;
ATerm term_i_9;
void init_constant_terms (void)
{
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Id_1, term_c_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_11, (ATerm) ATempty);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Id_1, term_r_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_12, (ATerm) ATempty);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_TypeName_2, term_b_12, term_f_12);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Id_1, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Id_1, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Id_1, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Id_1, term_j_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_p_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Id_1, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Id_1, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Id_1, term_f_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Id_1, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Id_1, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Id_1, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_15, term_q_16);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Id_1, term_u_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Id_1, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Id_1, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Id_1, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Id_1, term_d_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Id_1, term_b_13);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Id_1, term_k_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Id_1, term_n_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Id_1, term_t_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_w_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_18, (ATerm) ATempty);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_z_18, term_f_12);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Id_1, term_b_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Id_1, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Id_1, term_p_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Id_1, term_w_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_20, (ATerm) ATempty);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_e_20, term_f_12);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Id_1, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_1, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_20, (ATerm) ATempty);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_m_20, term_f_12);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Id_1, term_b_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_21, (ATerm) ATempty);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_s_21, term_f_12);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_o_18);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Id_1, term_w_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_21, (ATerm) ATempty);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Equal_2, term_a_22, term_q_15);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Id_1, term_j_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_o_22, (ATerm) ATempty);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_18, term_o_18);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Id_1, term_t_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_22, (ATerm) ATempty);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Equal_2, term_z_22, term_q_15);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_b_23);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_23, (ATerm) ATempty);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Id_1, term_e_23);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_f_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Id_1, term_h_23);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_23);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_j_18);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Return_1, term_o_18);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Id_1, term_k_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_18, term_f_12);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_12, term_q_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Id_1, term_w_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Id_1, term_y_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_11, (ATerm) ATempty);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_a_25);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Id_1, term_c_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_26, (ATerm) ATempty);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Include_1, term_e_26);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <ssl/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Include_1, term_h_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_26, (ATerm) ATempty);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Some_1, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_11, term_o_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Op_2, term_k_27, (ATerm) ATempty);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_x_33);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym__3, term_w_33, term_x_33, (ATerm) ATempty);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ArgOption_2 (ATerm, ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm debug_1 (ATerm, ATerm t_75 (ATerm));
ATerm Option_2 (ATerm, ATerm v_73 (ATerm), ATerm w_73 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm w_88 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm n_90 (ATerm), ATerm o_90 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_90 (ATerm));
ATerm new_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm g_87 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_87 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm z_0 (ATerm), ATerm c_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm s_79 (ATerm));
ATerm Var_1 (ATerm, ATerm y_66 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm u_64 (ATerm));
ATerm Real_1 (ATerm, ATerm v_0 (ATerm));
ATerm Str_1 (ATerm, ATerm u_0 (ATerm));
ATerm Int_1 (ATerm, ATerm t_0 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm c_67 (ATerm), ATerm d_67 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm c_61 (ATerm));
ATerm FunCall_2 (ATerm, ATerm u_57 (ATerm), ATerm v_57 (ATerm));
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
ATerm quote_1 (ATerm, ATerm c_77 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm e_70 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm s_0 (ATerm));
ATerm escape_1 (ATerm, ATerm p_76 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm z_69 (ATerm));
ATerm restore_always_2 (ATerm, ATerm x_91 (ATerm), ATerm y_91 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm y_69 (ATerm));
ATerm scope_2 (ATerm, ATerm a_70 (ATerm), ATerm b_70 (ATerm));
ATerm assert_1 (ATerm, ATerm c_70 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm n_50 (ATerm), ATerm o_50 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_75 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_84 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_73 (ATerm));
ATerm map_1 (ATerm, ATerm i_84 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_73 (ATerm));
ATerm Program_1 (ATerm, ATerm f_63 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_63 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_84 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_74 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_91 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_73 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm m_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_69 (ATerm), ATerm i_69 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_73 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_73 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_74 (ATerm), ATerm w_74 (ATerm), ATerm x_74 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_74 (ATerm), ATerm r_74 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_2 (ATerm t, ATerm g_74 (ATerm), ATerm h_74 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = term_i_9;
    return(t);
  }
  t = ArgOption_3(t, g_74, h_74, a_0);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_75 (ATerm))
{
  ATerm j_9;
  j_9 = t;
  {
    ATerm r_2 = NULL,t_2 = NULL;
    ATerm t_9;
    t_9 = t;
    {
      ATerm s_2 = NULL;
      t = t_75(t);
      {
        s_2 = t;
        if(((r_2 != NULL) && (r_2 != s_2)))
          _fail(s_2);
        else
          r_2 = s_2;
      }
    }
    t = t_9;
    {
      ATerm u_2 = NULL;
      u_2 = t;
      if(((t_2 != NULL) && (t_2 != u_2)))
        _fail(u_2);
      else
        t_2 = u_2;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_2)), not_null(r_2)));
        t = printnl_0(t);
      }
    }
  }
  t = j_9;
  return(t);
}
ATerm Option_2 (ATerm t, ATerm v_73 (ATerm), ATerm w_73 (ATerm))
{
  ATerm d_0 (ATerm t)
  {
    t = term_i_9;
    return(t);
  }
  t = Option_3(t, v_73, w_73, d_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm v_9 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_0 (ATerm t)
      {
        ATerm a_3 = NULL;
        a_3 = t;
        x_2 :
        if(!(match_string(a_3, "--trace-all")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        t = term_h_10;
        {
          ATerm x_0 (ATerm t)
          {
            t = term_i_10;
            return(t);
          }
          t = debug_1(t, x_0);
          {
            ATerm k_10;
            k_10 = t;
            {
              t = term_s_10;
              {
                ATerm y_0 (ATerm t)
                {
                  t = term_t_10;
                  return(t);
                }
                t = assert_1(t, y_0);
              }
            }
            t = k_10;
          }
        }
        return(t);
      }
      t = Option_2(t, e_0, w_0);
      LocalPopChoice(g_10);
    }
  else
    {
      t = v_9;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm b_3 = NULL;
          b_3 = t;
          y_2 :
          if(!(match_string(b_3, "-t")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          ATerm c_3 = NULL;
          c_3 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(c_3)), (ATerm) ATmakeAppl(sym_Defined_2, term_u_10, not_null(c_3)));
            {
              ATerm d_1 (ATerm t)
              {
                t = term_v_10;
                return(t);
              }
              t = assert_1(t, d_1);
            }
            t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(c_3));
          }
          return(t);
        }
        t = ArgOption_2(t, a_1, b_1);
      }
    }
  return(t);
}
ATerm InitTermId_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
  h_3 = t;
  g_3 :
  if(match_cons(h_3, sym__3))
    {
      i_3 = ATgetArgument(h_3, 0);
      j_3 = ATgetArgument(h_3, 1);
      k_3 = ATgetArgument(h_3, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_3))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_3)), term_w_10, not_null(k_3))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm r_3 = NULL;
  ATerm t_3 = NULL;
  r_3 = t;
  {
    ATerm u_3 = NULL;
    t = not_null(r_3);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          t = reverse_0(t);
          {
            u_3 = t;
            if(((t_3 != NULL) && (t_3 != u_3)))
              _fail(u_3);
            else
              t_3 = u_3;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_q_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_11, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_q_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(t_3)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  z_3 = t;
  y_3 :
  if(match_cons(z_3, sym__3))
    {
      a_4 = ATgetArgument(z_3, 0);
      b_4 = ATgetArgument(z_3, 1);
      c_4 = ATgetArgument(z_3, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_4)), term_f_12)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm k_4 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      t = (ATerm) ATempty;
    }
  {
    ATerm l_4 = NULL,n_4 = NULL,p_4 = NULL;
    ATerm j_12;
    j_12 = t;
    {
      ATerm m_4 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        m_4 = t;
        if(((l_4 != NULL) && (l_4 != m_4)))
          _fail(m_4);
        else
          l_4 = m_4;
      }
    }
    t = j_12;
    {
      ATerm o_4 = NULL;
      t = InitTermIds_0(t);
      {
        o_4 = t;
        if(((n_4 != NULL) && (n_4 != o_4)))
          _fail(o_4);
        else
          n_4 = o_4;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), (ATerm) ATinsert(ATempty, not_null(n_4)));
        {
          t = conc_0(t);
          {
            p_4 = t;
            if(((k_4 != NULL) && (k_4 != p_4)))
              _fail(p_4);
            else
              k_4 = p_4;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(k_4));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm w_88 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_88(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = _one(t, t_4);
      }
    return(t);
  }
  t = t_4(t);
  return(t);
}
ATerm Csimplify_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  ATerm e_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(f_6)), not_null(z_5));
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(f_6), not_null(g_6));
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(g_6));
    t = conc_0(t);
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    ATerm u_6 = NULL;
    ATerm v_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(i_6));
    {
      t = conc_0(t);
      {
        v_6 = t;
        if(((u_6 != NULL) && (u_6 != v_6)))
          _fail(v_6);
        else
          u_6 = v_6;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(u_6), not_null(j_6));
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    ATerm a_7 = NULL,c_7 = NULL;
    ATerm m_12;
    m_12 = t;
    {
      ATerm b_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(i_6));
      {
        t = conc_0(t);
        {
          b_7 = t;
          if(((a_7 != NULL) && (a_7 != b_7)))
            _fail(b_7);
          else
            a_7 = b_7;
        }
      }
    }
    t = m_12;
    {
      ATerm d_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), not_null(k_6));
      {
        t = conc_0(t);
        {
          d_7 = t;
          if(((c_7 != NULL) && (c_7 != d_7)))
            _fail(d_7);
          else
            c_7 = d_7;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(a_7), not_null(c_7));
    }
    return(t);
  }
  e_6 = t;
  c_5 :
  if(match_cons(e_6, sym_IfElse_3))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      z_5 = ATgetArgument(e_6, 2);
      d_5 :
      if(match_cons(z_5, sym_Compound_2))
        {
          a_6 = ATgetArgument(z_5, 0);
          b_6 = ATgetArgument(z_5, 1);
          e_5 :
          if(((ATermList) b_6 == ATempty))
            {
              f_5 :
              if(((ATermList) a_6 == ATempty))
                {
                  g_5 :
                  if(match_cons(g_6, sym_Compound_2))
                    {
                      h_6 = ATgetArgument(g_6, 0);
                      k_6 = ATgetArgument(g_6, 1);
                      h_5 :
                      if(((ATermList) k_6 == ATempty))
                        {
                          i_5 :
                          if(((ATermList) h_6 == ATempty))
                            {
                              {
                                ATerm n_12 = t;
                                int r_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = e_7(t);
                                    LocalPopChoice(r_12);
                                  }
                                else
                                  {
                                    t = n_12;
                                    t = f_7(t);
                                  }
                              }
                            }
                          else
                            {
                              t = f_7(t);
                            }
                        }
                      else
                        {
                          j_5 :
                          t = f_7(t);
                        }
                    }
                  else
                    {
                      t = f_7(t);
                    }
                }
              else
                {
                  k_5 :
                  if(match_cons(g_6, sym_Compound_2))
                    {
                      h_6 = ATgetArgument(g_6, 0);
                      k_6 = ATgetArgument(g_6, 1);
                      l_5 :
                      if(((ATermList) h_6 == ATempty))
                        {
                          m_5 :
                          if(((ATermList) k_6 == ATempty))
                            {
                              t = e_7(t);
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
              n_5 :
              o_5 :
              if(match_cons(g_6, sym_Compound_2))
                {
                  h_6 = ATgetArgument(g_6, 0);
                  k_6 = ATgetArgument(g_6, 1);
                  p_5 :
                  if(((ATermList) h_6 == ATempty))
                    {
                      q_5 :
                      if(((ATermList) k_6 == ATempty))
                        {
                          t = e_7(t);
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
          r_5 :
          if(match_cons(g_6, sym_Compound_2))
            {
              h_6 = ATgetArgument(g_6, 0);
              k_6 = ATgetArgument(g_6, 1);
              s_5 :
              if(((ATermList) h_6 == ATempty))
                {
                  t_5 :
                  if(((ATermList) k_6 == ATempty))
                    {
                      t = e_7(t);
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
      if(((ATgetType(e_6) == AT_LIST) && ((ATermList) e_6 != ATempty)))
        {
          f_6 = ATgetFirst((ATermList) e_6);
          g_6 = (ATerm) ATgetNext((ATermList) e_6);
          u_5 :
          if(match_cons(f_6, sym_Compound_2))
            {
              c_6 = ATgetArgument(f_6, 0);
              d_6 = ATgetArgument(f_6, 1);
              v_5 :
              if(((ATermList) c_6 == ATempty))
                {
                  t = g_7(t);
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
          if(match_cons(e_6, sym_Compound_2))
            {
              f_6 = ATgetArgument(e_6, 0);
              g_6 = ATgetArgument(e_6, 1);
              w_5 :
              if(((ATgetType(g_6) == AT_LIST) && ((ATermList) g_6 != ATempty)))
                {
                  h_6 = ATgetFirst((ATermList) g_6);
                  k_6 = (ATerm) ATgetNext((ATermList) g_6);
                  x_5 :
                  if(match_cons(h_6, sym_Compound_2))
                    {
                      i_6 = ATgetArgument(h_6, 0);
                      j_6 = ATgetArgument(h_6, 1);
                      y_5 :
                      if(((ATermList) k_6 == ATempty))
                        {
                          {
                            ATerm t_12 = t;
                            int u_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = h_7(t);
                                LocalPopChoice(u_12);
                              }
                            else
                              {
                                t = t_12;
                                t = i_7(t);
                              }
                          }
                        }
                      else
                        {
                          t = i_7(t);
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
ATerm repeat_2 (ATerm t, ATerm n_90 (ATerm), ATerm o_90 (ATerm))
{
  ATerm m_7 (ATerm t)
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_90(t);
        t = m_7(t);
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        t = o_90(t);
      }
    return(t);
  }
  t = m_7(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_90 (ATerm))
{
  t = repeat_2(t, q_90, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm g_87 (ATerm))
{
  ATerm n_7 (ATerm t)
  {
    t = _all(t, n_7);
    t = g_87(t);
    return(t);
  }
  t = n_7(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          t = ConstructTerm_0(t);
        }
      return(t);
    }
    t = try_1(t, f_1);
    return(t);
  }
  t = bottomup_1(t, e_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_87 (ATerm))
{
  ATerm o_7 (ATerm t)
  {
    t = e_87(t);
    t = _all(t, o_7);
    return(t);
  }
  t = o_7(t);
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm q_7 = NULL;
  q_7 = t;
  t = SSL_real_to_string(not_null(q_7));
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym__2))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      {
        ATerm b_8 = NULL;
        ATerm c_8 = NULL;
        t = new_0(t);
        {
          c_8 = t;
          if(((b_8 != NULL) && (b_8 != c_8)))
            _fail(c_8);
          else
            b_8 = c_8;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_12, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_8)), term_f_12), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(y_7))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(x_7), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_8)))));
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
  ATerm i_8 = NULL;
  i_8 = t;
  {
    ATerm k_8 = NULL,l_8 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(i_8));
    {
      ATerm g_1 (ATerm t)
      {
        t = term_a_13;
        return(t);
      }
      t = rewrite_1(t, g_1);
      {
        k_8 = t;
        g_8 :
        if(match_cons(k_8, sym_Defined_1))
          {
            l_8 = ATgetArgument(k_8, 0);
            h_8 :
            if(!(match_string(l_8, "i_0")))
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
    t = term_b_13;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
  r_8 = t;
  p_8 :
  if(match_cons(r_8, sym__2))
    {
      s_8 = ATgetArgument(r_8, 0);
      u_8 = ATgetArgument(r_8, 1);
      q_8 :
      if(match_cons(s_8, sym_Var_1))
        {
          t_8 = ATgetArgument(s_8, 0);
          {
            ATerm x_8 = NULL;
            t = not_null(t_8);
            {
              t = Initialized_0(t);
              {
                x_8 = t;
                o_8 :
                if(!(match_string(x_8, "NULL")))
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_8)), not_null(u_8));
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
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  a_9 :
  if(match_cons(c_9, sym__2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      b_9 :
      if(((ATermList) d_9 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(e_9));
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
ATerm Cons_T_2 (ATerm t, ATerm z_0 (ATerm), ATerm c_1 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  o_9 = t;
  m_9 :
  if(match_cons(o_9, sym__2))
    {
      p_9 = ATgetArgument(o_9, 0);
      s_9 = ATgetArgument(o_9, 1);
      n_9 :
      if(((ATgetType(p_9) == AT_LIST) && ((ATermList) p_9 != ATempty)))
        {
          q_9 = ATgetFirst((ATermList) p_9);
          r_9 = (ATerm) ATgetNext((ATermList) p_9);
          {
            ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
            ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), not_null(s_9));
            {
              t = z_0(t);
              {
                a_10 = t;
                l_9 :
                if(match_cons(a_10, sym__2))
                  {
                    b_10 = ATgetArgument(a_10, 0);
                    c_10 = ATgetArgument(a_10, 1);
                    {
                      ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
                      if(((y_9 != NULL) && (y_9 != b_10)))
                        _fail(b_10);
                      else
                        y_9 = b_10;
                      {
                        if(((w_9 != NULL) && (w_9 != c_10)))
                          _fail(c_10);
                        else
                          w_9 = c_10;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_9), not_null(w_9));
                          {
                            t = c_1(t);
                            {
                              d_10 = t;
                              k_9 :
                              if(match_cons(d_10, sym__2))
                                {
                                  e_10 = ATgetArgument(d_10, 0);
                                  f_10 = ATgetArgument(d_10, 1);
                                  {
                                    if(((z_9 != NULL) && (z_9 != e_10)))
                                      _fail(e_10);
                                    else
                                      z_9 = e_10;
                                    if(((x_9 != NULL) && (x_9 != f_10)))
                                      _fail(f_10);
                                    else
                                      x_9 = f_10;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_9)), not_null(y_9)), not_null(x_9));
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
ATerm thread_map_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm j_10 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, s_79, j_10);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = j_10(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm n_10 = NULL,o_10 = NULL;
  n_10 = t;
  m_10 :
  if(match_cons(n_10, sym_Var_1))
    {
      o_10 = ATgetArgument(n_10, 0);
      {
        ATerm q_10 = NULL;
        t = not_null(o_10);
        {
          t = y_66(t);
          {
            q_10 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_10));
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
  ATerm b_11 = NULL;
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
  b_11 = t;
  {
    ATerm g_11 = NULL;
    ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
    t = not_null(b_11);
    {
      g_11 = t;
      {
        t = SSL_explode_term(not_null(g_11));
        {
          i_11 = t;
          x_10 :
          if(match_cons(i_11, sym__2))
            {
              j_11 = ATgetArgument(i_11, 0);
              k_11 = ATgetArgument(i_11, 1);
              y_10 :
              if(match_string(j_11, ""))
                {
                  z_10 :
                  if(((ATgetType(k_11) == AT_LIST) && ((ATermList) k_11 != ATempty)))
                    {
                      l_11 = ATgetFirst((ATermList) k_11);
                      m_11 = (ATerm) ATgetNext((ATermList) k_11);
                      a_11 :
                      if(((ATgetType(m_11) == AT_LIST) && ((ATermList) m_11 != ATempty)))
                        {
                          n_11 = ATgetFirst((ATermList) m_11);
                          o_11 = (ATerm) ATgetNext((ATermList) m_11);
                          {
                            if(((d_11 != NULL) && (d_11 != l_11)))
                              _fail(l_11);
                            else
                              d_11 = l_11;
                            {
                              if(((f_11 != NULL) && (f_11 != n_11)))
                                _fail(n_11);
                              else
                                f_11 = n_11;
                              if(((e_11 != NULL) && (e_11 != o_11)))
                                _fail(o_11);
                              else
                                e_11 = o_11;
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
    t = not_null(f_11);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm v_11 = NULL;
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  t = term_l_10;
  {
    ATerm h_1 (ATerm t)
    {
      t = term_e_13;
      return(t);
    }
    t = rewrite_1(t, h_1);
    {
      w_11 = t;
      t_11 :
      if(match_cons(w_11, sym_Defined_2))
        {
          x_11 = ATgetArgument(w_11, 0);
          y_11 = ATgetArgument(w_11, 1);
          u_11 :
          if(match_string(x_11, "l_0"))
            {
              if(((v_11 != NULL) && (v_11 != y_11)))
                _fail(y_11);
              else
                v_11 = y_11;
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
  t = not_null(v_11);
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
ATerm BuildDefault_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm d_12 = NULL,e_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_BuildDefault_1))
    {
      e_12 = ATgetArgument(d_12, 0);
      {
        ATerm g_12 = NULL;
        t = not_null(e_12);
        {
          t = u_64(t);
          {
            g_12 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(g_12));
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
ATerm Real_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm p_12 = NULL,q_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym_Real_1))
    {
      q_12 = ATgetArgument(p_12, 0);
      {
        ATerm i_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_12 = NULL;
            t = not_null(q_12);
            {
              t = v_0(t);
              {
                s_12 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(s_12));
              }
            }
            LocalPopChoice(k_13);
          }
        else
          {
            t = i_13;
            {
              ATerm v_12 = NULL;
              t = not_null(q_12);
              {
                t = v_0(t);
                {
                  v_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(v_12));
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
ATerm Str_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm g_13 = NULL,h_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym_Str_1))
    {
      h_13 = ATgetArgument(g_13, 0);
      {
        ATerm l_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_13 = NULL;
            t = not_null(h_13);
            {
              t = u_0(t);
              {
                j_13 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(j_13));
              }
            }
            LocalPopChoice(n_13);
          }
        else
          {
            t = l_13;
            {
              ATerm m_13 = NULL;
              t = not_null(h_13);
              {
                t = u_0(t);
                {
                  m_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(m_13));
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
ATerm Int_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm x_13 = NULL,y_13 = NULL;
  x_13 = t;
  w_13 :
  if(match_cons(x_13, sym_Int_1))
    {
      y_13 = ATgetArgument(x_13, 0);
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_14 = NULL;
            t = not_null(y_13);
            {
              t = t_0(t);
              {
                a_14 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(a_14));
              }
            }
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            {
              ATerm d_14 = NULL;
              t = not_null(y_13);
              {
                t = t_0(t);
                {
                  d_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(d_14));
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
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm m_14 = NULL;
        m_14 = t;
        j_14 :
        if(!(match_string(m_14, "Nil")))
          {
            _fail(t);
          }
        return(t);
      }
      t = Op_2(t, i_1, Nil_0);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              ATerm n_14 = NULL;
              n_14 = t;
              k_14 :
              if(!(match_string(n_14, "Cons")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = Cons_2(t, proper_list_0, Nil_0);
                return(t);
              }
              t = Cons_2(t, _id, l_1);
              return(t);
            }
            t = Op_2(t, j_1, k_1);
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm m_1 (ATerm t)
              {
                ATerm u_13 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_14 = NULL;
                    o_14 = t;
                    l_14 :
                    if(!(match_string(o_14, "Nil")))
                      {
                        if(!(match_string(o_14, "Cons")))
                          {
                            _fail(t);
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_13;
                  }
                return(t);
              }
              t = Op_2(t, m_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm c_67 (ATerm), ATerm d_67 (ATerm))
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  s_14 :
  if(match_cons(t_14, sym_Op_2))
    {
      u_14 = ATgetArgument(t_14, 0);
      v_14 = ATgetArgument(t_14, 1);
      {
        ATerm y_14 = NULL;
        t = not_null(u_14);
        {
          ATerm a_15 = NULL;
          t = c_67(t);
          {
            y_14 = t;
            {
              t = not_null(v_14);
              {
                t = d_67(t);
                {
                  a_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(y_14), not_null(a_15));
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
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym__2))
    {
      n_15 = ATgetArgument(m_15, 0);
      o_15 = ATgetArgument(m_15, 1);
      {
        ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
        ATerm u_15 = NULL;
        t = not_null(n_15);
        {
          ATerm v_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 (ATerm t)
              {
                t = map_1(t, Cache_0);
                return(t);
              }
              t = Op_2(t, _id, n_1);
              t = proper_list_0(t);
              LocalPopChoice(z_13);
            }
          else
            {
              t = v_13;
              {
                ATerm b_14 = t;
                int c_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Int_1(t, _id);
                    LocalPopChoice(c_14);
                  }
                else
                  {
                    t = b_14;
                    {
                      ATerm e_14 = t;
                      int f_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Str_1(t, _id);
                          LocalPopChoice(f_14);
                        }
                      else
                        {
                          t = e_14;
                          {
                            ATerm g_14 = t;
                            int h_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Real_1(t, _id);
                                LocalPopChoice(h_14);
                              }
                            else
                              {
                                t = g_14;
                                t = BuildDefault_1(t, _id);
                              }
                          }
                        }
                    }
                  }
              }
            }
          {
            ATerm v_15 = NULL,x_15 = NULL;
            t = new_0(t);
            {
              u_15 = t;
              {
                if(((r_15 != NULL) && (r_15 != u_15)))
                  _fail(u_15);
                else
                  r_15 = u_15;
                {
                  ATerm w_15 = NULL;
                  w_15 = t;
                  if(((v_15 != NULL) && (v_15 != w_15)))
                    _fail(w_15);
                  else
                    v_15 = w_15;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_i_14, not_null(v_15));
                    {
                      ATerm y_15 = NULL,a_16 = NULL;
                      t = conc_strings_0(t);
                      {
                        x_15 = t;
                        {
                          if(((s_15 != NULL) && (s_15 != x_15)))
                            _fail(x_15);
                          else
                            s_15 = x_15;
                          {
                            ATerm p_14;
                            p_14 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(n_15)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_14, not_null(s_15)));
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = term_r_14;
                                  return(t);
                                }
                                t = assert_1(t, o_1);
                              }
                            }
                            t = p_14;
                            {
                              ATerm z_15 = NULL;
                              ATerm w_14 = t;
                              int x_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  LocalPopChoice(x_14);
                                }
                              else
                                {
                                  t = w_14;
                                  t = (ATerm) ATempty;
                                }
                              {
                                z_15 = t;
                                if(((y_15 != NULL) && (y_15 != z_15)))
                                  _fail(z_15);
                                else
                                  y_15 = z_15;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(y_15)), (ATerm) ATmakeAppl(sym__3, not_null(r_15), not_null(s_15), not_null(o_15)));
                                {
                                  a_16 = t;
                                  {
                                    if(((t_15 != NULL) && (t_15 != a_16)))
                                      _fail(a_16);
                                    else
                                      t_15 = a_16;
                                    {
                                      ATerm z_14;
                                      z_14 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATmakeAppl(sym_Defined_2, term_b_15, not_null(t_15)));
                                        {
                                          ATerm p_1 (ATerm t)
                                          {
                                            t = term_e_13;
                                            return(t);
                                          }
                                          t = assert_1(t, p_1);
                                        }
                                      }
                                      t = z_14;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(s_15));
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
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  v_16 = t;
  t_16 :
  if(match_cons(v_16, sym_Anno_2))
    {
      w_16 = ATgetArgument(v_16, 0);
      u_16 = ATgetArgument(v_16, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_16)), not_null(w_16))));
    }
  else
    {
      if(match_cons(v_16, sym_Op_2))
        {
          w_16 = ATgetArgument(v_16, 0);
          u_16 = ATgetArgument(v_16, 1);
          {
            ATerm b_17 = NULL;
            ATerm c_17 = NULL,e_17 = NULL;
            ATerm d_17 = NULL;
            t = not_null(u_16);
            {
              t = length_0(t);
              {
                d_17 = t;
                if(((c_17 != NULL) && (c_17 != d_17)))
                  _fail(d_17);
                else
                  c_17 = d_17;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), not_null(c_17));
              {
                t = ConstructorName_0(t);
                {
                  e_17 = t;
                  if(((b_17 != NULL) && (b_17 != e_17)))
                    _fail(e_17);
                  else
                    b_17 = e_17;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_15, (ATerm) ATinsert(CheckATermList(not_null(u_16)), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_17)))));
          }
        }
      else
        {
          if(match_cons(v_16, sym_BuildDefault_1))
            {
              w_16 = ATgetArgument(v_16, 0);
              t = not_null(w_16);
            }
          else
            {
              if(match_cons(v_16, sym_Var_1))
                {
                  w_16 = ATgetArgument(v_16, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_16))));
                }
              else
                {
                  if(match_cons(v_16, sym_Str_1))
                    {
                      w_16 = ATgetArgument(v_16, 0);
                      {
                        ATerm i_17 = NULL;
                        ATerm j_17 = NULL;
                        t = not_null(w_16);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              j_17 = t;
                              if(((i_17 != NULL) && (i_17 != j_17)))
                                _fail(j_17);
                              else
                                i_17 = j_17;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_16), term_q_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(i_17))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(v_16, sym_Real_1))
                        {
                          w_16 = ATgetArgument(v_16, 0);
                          {
                            ATerm l_17 = NULL;
                            ATerm m_17 = NULL;
                            t = not_null(w_16);
                            {
                              t = real_to_string_0(t);
                              {
                                m_17 = t;
                                if(((l_17 != NULL) && (l_17 != m_17)))
                                  _fail(m_17);
                                else
                                  l_17 = m_17;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(l_17)))));
                          }
                        }
                      else
                        {
                          if(match_cons(v_16, sym_Int_1))
                            {
                              w_16 = ATgetArgument(v_16, 0);
                              {
                                ATerm o_17 = NULL;
                                ATerm p_17 = NULL;
                                t = not_null(w_16);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    p_17 = t;
                                    if(((o_17 != NULL) && (o_17 != p_17)))
                                      _fail(p_17);
                                    else
                                      o_17 = p_17;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(o_17)))));
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
ATerm Id_1 (ATerm t, ATerm c_61 (ATerm))
{
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym_Id_1))
    {
      g_18 = ATgetArgument(f_18, 0);
      {
        ATerm i_18 = NULL;
        t = not_null(g_18);
        {
          t = c_61(t);
          {
            i_18 = t;
            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(i_18));
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
ATerm FunCall_2 (ATerm t, ATerm u_57 (ATerm), ATerm v_57 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_FunCall_2))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      {
        ATerm v_18 = NULL;
        t = not_null(r_18);
        {
          ATerm x_18 = NULL;
          t = u_57(t);
          {
            v_18 = t;
            {
              t = not_null(s_18);
              {
                t = v_57(t);
                {
                  x_18 = t;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, not_null(v_18), not_null(x_18));
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
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  o_20 :
  if(match_cons(y_20, sym_Op_2))
    {
      z_20 = ATgetArgument(y_20, 0);
      a_21 = ATgetArgument(y_20, 1);
      p_20 :
      if(match_string(z_20, "Cons"))
        {
          q_20 :
          if(((ATgetType(a_21) == AT_LIST) && ((ATermList) a_21 != ATempty)))
            {
              u_20 = ATgetFirst((ATermList) a_21);
              v_20 = (ATerm) ATgetNext((ATermList) a_21);
              r_20 :
              if(((ATgetType(v_20) == AT_LIST) && ((ATermList) v_20 != ATempty)))
                {
                  w_20 = ATgetFirst((ATermList) v_20);
                  x_20 = (ATerm) ATgetNext((ATermList) v_20);
                  s_20 :
                  if(((ATermList) x_20 == ATempty))
                    {
                      {
                        ATerm d_21 = NULL;
                        ATerm q_21 = NULL;
                        t = not_null(w_20);
                        {
                          ATerm h_16 = t;
                          int i_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
                              e_21 = t;
                              h_19 :
                              if(match_cons(e_21, sym_TypeCast_2))
                                {
                                  f_21 = ATgetArgument(e_21, 0);
                                  m_21 = ATgetArgument(e_21, 1);
                                  i_19 :
                                  if(match_cons(f_21, sym_TypeName_2))
                                    {
                                      g_21 = ATgetArgument(f_21, 0);
                                      l_21 = ATgetArgument(f_21, 1);
                                      j_19 :
                                      if(match_cons(g_21, sym_TypeSpec_3))
                                        {
                                          h_21 = ATgetArgument(g_21, 0);
                                          i_21 = ATgetArgument(g_21, 1);
                                          k_21 = ATgetArgument(g_21, 2);
                                          k_19 :
                                          if(((ATermList) h_21 == ATempty))
                                            {
                                              l_19 :
                                              if(match_cons(i_21, sym_TypeId_1))
                                                {
                                                  j_21 = ATgetArgument(i_21, 0);
                                                  m_19 :
                                                  if(match_string(j_21, "ATerm"))
                                                    {
                                                      x_19 :
                                                      if(((ATermList) k_21 == ATempty))
                                                        {
                                                          y_19 :
                                                          if(match_cons(l_21, sym_None_0))
                                                            {
                                                              t = not_null(m_21);
                                                              {
                                                                ATerm j_16 = t;
                                                                int k_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm q_1 (ATerm t)
                                                                    {
                                                                      ATerm o_21 = NULL;
                                                                      o_21 = t;
                                                                      f_19 :
                                                                      if(!(match_string(o_21, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, q_1);
                                                                    LocalPopChoice(k_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = j_16;
                                                                    {
                                                                      ATerm r_1 (ATerm t)
                                                                      {
                                                                        ATerm t_1 (ATerm t)
                                                                        {
                                                                          ATerm p_21 = NULL;
                                                                          p_21 = t;
                                                                          g_19 :
                                                                          if(!(match_string(p_21, "ATinsert")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        t = Id_1(t, t_1);
                                                                        return(t);
                                                                      }
                                                                      ATerm s_1 (ATerm t)
                                                                      {
                                                                        ATerm u_1 (ATerm t)
                                                                        {
                                                                          t = Cons_2(t, _id, Nil_0);
                                                                          return(t);
                                                                        }
                                                                        t = Cons_2(t, _id, u_1);
                                                                        return(t);
                                                                      }
                                                                      t = FunCall_2(t, r_1, s_1);
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
                              LocalPopChoice(i_16);
                            }
                          else
                            {
                              t = h_16;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_16, (ATerm) ATinsert(ATempty, not_null(w_20)));
                            }
                          {
                            q_21 = t;
                            if(((d_21 != NULL) && (d_21 != q_21)))
                              _fail(q_21);
                            else
                              d_21 = q_21;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_20)), not_null(d_21))));
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
          if(match_string(z_20, "Nil"))
            {
              t_20 :
              if(((ATermList) a_21 == ATempty))
                {
                  t = term_r_16;
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
  ATerm d_22 = NULL;
  d_22 = t;
  {
    ATerm s_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_22 = NULL;
        ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(d_22));
        {
          ATerm v_1 (ATerm t)
          {
            t = term_r_14;
            return(t);
          }
          t = rewrite_1(t, v_1);
          {
            g_22 = t;
            y_21 :
            if(match_cons(g_22, sym_Defined_2))
              {
                h_22 = ATgetArgument(g_22, 0);
                i_22 = ATgetArgument(g_22, 1);
                z_21 :
                if(match_string(h_22, "k_0"))
                  {
                    if(((f_22 != NULL) && (f_22 != i_22)))
                      _fail(i_22);
                    else
                      f_22 = i_22;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(f_22));
        LocalPopChoice(x_16);
      }
    else
      {
        t = s_16;
        {
          ATerm k_22 = NULL;
          ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(d_22));
          {
            ATerm w_1 (ATerm t)
            {
              t = term_r_14;
              return(t);
            }
            t = rewrite_1(t, w_1);
            {
              l_22 = t;
              b_22 :
              if(match_cons(l_22, sym_Defined_2))
                {
                  m_22 = ATgetArgument(l_22, 0);
                  n_22 = ATgetArgument(l_22, 1);
                  c_22 :
                  if(match_string(m_22, "j_0"))
                    {
                      if(((k_22 != NULL) && (k_22 != n_22)))
                        _fail(n_22);
                      else
                        k_22 = n_22;
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
          t = not_null(k_22);
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0 (ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm u_22 = NULL,w_22 = NULL;
        ATerm a_17;
        a_17 = t;
        {
          ATerm v_22 = NULL;
          v_22 = t;
          if(((u_22 != NULL) && (u_22 != v_22)))
            _fail(v_22);
          else
            u_22 = v_22;
        }
        t = a_17;
        {
          ATerm x_22 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm x_1 (ATerm t)
            {
              ATerm f_17 = t;
              int g_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  LocalPopChoice(g_17);
                }
              else
                {
                  t = f_17;
                  t = ConstructTerm_0(t);
                }
              return(t);
            }
            t = try_1(t, x_1);
            {
              x_22 = t;
              if(((w_22 != NULL) && (w_22 != x_22)))
                _fail(x_22);
              else
                w_22 = x_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_22), not_null(w_22));
            {
              ATerm h_17 = t;
              int k_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  LocalPopChoice(k_17);
                }
              else
                {
                  t = h_17;
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
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  ATerm d_38 (ATerm t)
  {
    ATerm r_31 = NULL,i_32 = NULL,k_32 = NULL;
    ATerm n_17;
    n_17 = t;
    {
      ATerm d_32 = NULL,e_32 = NULL,h_32 = NULL;
      t = not_null(z_29);
      {
        ATerm q_17 = t;
        if((PushChoice() == 0))
          {
            ATerm s_31 = NULL;
            s_31 = t;
            d_25 :
            if(!(match_string(s_31, "Nil")))
              {
                if(!(match_string(s_31, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_17;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), term_r_17);
          {
            ATerm y_1 (ATerm t)
            {
              ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
              t_31 = t;
              i_25 :
              if(match_cons(t_31, sym__2))
                {
                  u_31 = ATgetArgument(t_31, 0);
                  w_31 = ATgetArgument(t_31, 1);
                  j_25 :
                  if(match_cons(u_31, sym_Var_1))
                    {
                      v_31 = ATgetArgument(u_31, 0);
                      {
                        ATerm z_31 = NULL,b_32 = NULL;
                        ATerm s_17;
                        s_17 = t;
                        {
                          ATerm a_32 = NULL;
                          t = not_null(w_31);
                          {
                            t = int_to_string_0(t);
                            {
                              a_32 = t;
                              if(((z_31 != NULL) && (z_31 != a_32)))
                                _fail(a_32);
                              else
                                z_31 = a_32;
                            }
                          }
                        }
                        t = s_17;
                        {
                          ATerm c_32 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_31), term_t_17);
                          {
                            t = add_0(t);
                            {
                              c_32 = t;
                              if(((b_32 != NULL) && (b_32 != c_32)))
                                _fail(c_32);
                              else
                                b_32 = c_32;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_31)), term_w_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(z_31))), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_30)))))), not_null(b_32));
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
            t = thread_map_1(t, y_1);
            {
              d_32 = t;
              l_25 :
              if(match_cons(d_32, sym__2))
                {
                  e_32 = ATgetArgument(d_32, 0);
                  h_32 = ATgetArgument(d_32, 1);
                  if(((r_31 != NULL) && (r_31 != e_32)))
                    _fail(e_32);
                  else
                    r_31 = e_32;
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
    t = n_17;
    {
      ATerm w_17;
      w_17 = t;
      {
        ATerm j_32 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), not_null(x_29));
        {
          t = ConstructorName_0(t);
          {
            j_32 = t;
            if(((i_32 != NULL) && (i_32 != j_32)))
              _fail(j_32);
            else
              i_32 = j_32;
          }
        }
      }
      t = w_17;
      {
        ATerm l_32 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_31), (ATerm) ATinsert(ATempty, not_null(b_30)));
        {
          t = conc_0(t);
          {
            l_32 = t;
            if(((k_32 != NULL) && (k_32 != l_32)))
              _fail(l_32);
            else
              k_32 = l_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_32))), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_30)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(k_32)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_30)), not_null(c_30), not_null(l_30)))));
      }
    }
    return(t);
  }
  ATerm e_38 (ATerm t)
  {
    ATerm s_32 = NULL;
    ATerm t_32 = NULL;
    t = not_null(z_29);
    {
      t = real_to_string_0(t);
      {
        t_32 = t;
        if(((s_32 != NULL) && (s_32 != t_32)))
          _fail(t_32);
        else
          s_32 = t_32;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(s_32))), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_30)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_30))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_30)), not_null(c_30), not_null(l_30)))));
    return(t);
  }
  ATerm f_38 (ATerm t)
  {
    ATerm a_33 = NULL;
    ATerm b_33 = NULL;
    t = not_null(z_29);
    {
      t = int_to_string_0(t);
      {
        b_33 = t;
        if(((a_33 != NULL) && (a_33 != b_33)))
          _fail(b_33);
        else
          a_33 = b_33;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_33))), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_30)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_30))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_30)), not_null(c_30), not_null(l_30)))));
    return(t);
  }
  ATerm g_38 (ATerm t)
  {
    ATerm i_33 = NULL;
    ATerm j_33 = NULL;
    t = not_null(z_29);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          j_33 = t;
          if(((i_33 != NULL) && (i_33 != j_33)))
            _fail(j_33);
          else
            i_33 = j_33;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(i_33)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_30)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_30))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_30)), not_null(c_30), not_null(l_30)))));
    return(t);
  }
  ATerm h_38 (ATerm t)
  {
    t = not_null(l_30);
    return(t);
  }
  ATerm i_38 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_30)), (ATerm) ATmakeAppl(sym_Case_3, not_null(n_30), not_null(l_30), not_null(d_30)));
    return(t);
  }
  ATerm j_38 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(m_30)));
    return(t);
  }
  ATerm k_38 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_30)), term_j_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_30)), (ATerm) ATmakeAppl(sym_Id_1, not_null(e_30)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_30))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_30)), term_w_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_30)))));
    return(t);
  }
  ATerm l_38 (ATerm t)
  {
    t = not_null(n_30);
    {
      ATerm m_18 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_18;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_30)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_30))));
    return(t);
  }
  ATerm m_38 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_30)), term_w_10, term_o_18));
    return(t);
  }
  ATerm n_38 (ATerm t)
  {
    ATerm z_33 = NULL;
    ATerm a_34 = NULL;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(h_30), (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_19, not_null(n_30))))))), (ATerm) ATmakeAppl(sym__2, not_null(f_30), (ATerm) ATmakeAppl(sym_FunCall_2, term_u_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_19, not_null(n_30))))));
    {
      ATerm z_1 (ATerm t)
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MatchArg1_0(t);
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
            t = MatchArg2_0(t);
          }
        return(t);
      }
      t = map_1(t, z_1);
      {
        a_34 = t;
        if(((z_33 != NULL) && (z_33 != a_34)))
          _fail(a_34);
        else
          z_33 = a_34;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_19, (ATerm) ATinsert(ATempty, not_null(n_30))), term_q_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_a_19, not_null(n_30)), term_q_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(z_33)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATempty, term_o_18))));
    return(t);
  }
  ATerm o_38 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_a_19, not_null(n_30)), term_q_16), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATempty, term_o_18))));
    return(t);
  }
  ATerm p_38 (ATerm t)
  {
    ATerm f_34 = NULL,y_34 = NULL;
    ATerm r_19;
    r_19 = t;
    {
      ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
      t = not_null(k_30);
      {
        ATerm s_19 = t;
        if((PushChoice() == 0))
          {
            ATerm g_34 = NULL;
            g_34 = t;
            s_25 :
            if(!(match_string(g_34, "Nil")))
              {
                if(!(match_string(g_34, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_19;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_30), term_r_17);
          {
            ATerm a_2 (ATerm t)
            {
              ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
              h_34 = t;
              g_26 :
              if(match_cons(h_34, sym__2))
                {
                  i_34 = ATgetArgument(h_34, 0);
                  j_34 = ATgetArgument(h_34, 1);
                  {
                    ATerm m_34 = NULL,t_34 = NULL;
                    ATerm t_19;
                    t_19 = t;
                    {
                      ATerm q_34 = NULL,s_34 = NULL;
                      ATerm r_34 = NULL;
                      t = not_null(j_34);
                      {
                        t = int_to_string_0(t);
                        {
                          r_34 = t;
                          if(((q_34 != NULL) && (q_34 != r_34)))
                            _fail(r_34);
                          else
                            q_34 = r_34;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_34), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(q_34))), not_null(n_30))));
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
                            s_34 = t;
                            if(((m_34 != NULL) && (m_34 != s_34)))
                              _fail(s_34);
                            else
                              m_34 = s_34;
                          }
                        }
                      }
                    }
                    t = t_19;
                    {
                      ATerm u_34 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_34), term_t_17);
                      {
                        t = add_0(t);
                        {
                          u_34 = t;
                          if(((t_34 != NULL) && (t_34 != u_34)))
                            _fail(u_34);
                          else
                            t_34 = u_34;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_34), not_null(t_34));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = thread_map_1(t, a_2);
            {
              v_34 = t;
              i_26 :
              if(match_cons(v_34, sym__2))
                {
                  w_34 = ATgetArgument(v_34, 0);
                  x_34 = ATgetArgument(v_34, 1);
                  if(((f_34 != NULL) && (f_34 != w_34)))
                    _fail(w_34);
                  else
                    f_34 = w_34;
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
    t = r_19;
    {
      ATerm z_34 = NULL,b_35 = NULL;
      ATerm a_35 = NULL;
      t = not_null(j_30);
      {
        t = length_0(t);
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), not_null(z_34));
        {
          t = ConstructorName_0(t);
          {
            b_35 = t;
            if(((y_34 != NULL) && (y_34 != b_35)))
              _fail(b_35);
            else
              y_34 = b_35;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(y_34))), not_null(n_30))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(f_34)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATempty, term_o_18))));
    }
    return(t);
  }
  ATerm q_38 (ATerm t)
  {
    ATerm e_35 = NULL;
    ATerm f_35 = NULL;
    t = not_null(k_30);
    {
      t = real_to_string_0(t);
      {
        f_35 = t;
        if(((e_35 != NULL) && (e_35 != f_35)))
          _fail(f_35);
        else
          e_35 = f_35;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_19, (ATerm) ATinsert(ATempty, not_null(n_30))), term_z_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_20, not_null(n_30)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(e_35)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATempty, term_o_18))));
    return(t);
  }
  ATerm r_38 (ATerm t)
  {
    ATerm i_35 = NULL;
    ATerm j_35 = NULL;
    t = not_null(k_30);
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
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_19, (ATerm) ATinsert(ATempty, not_null(n_30))), term_h_20), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, not_null(n_30)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(i_35)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATempty, term_o_18))));
    return(t);
  }
  ATerm s_38 (ATerm t)
  {
    ATerm m_35 = NULL;
    ATerm n_35 = NULL;
    t = not_null(k_30);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          n_35 = t;
          if(((m_35 != NULL) && (m_35 != n_35)))
            _fail(n_35);
          else
            m_35 = n_35;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_21, not_null(n_30)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_k_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_16), term_q_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(m_35)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATempty, term_o_18))));
    return(t);
  }
  ATerm t_38 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_30)), term_j_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_30)), not_null(n_30))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATempty, not_null(n_30)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_30)), term_w_10, not_null(n_30))));
    return(t);
  }
  ATerm u_38 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(j_30), not_null(n_30))), (ATerm) ATmakeAppl(sym_Match_2, not_null(k_30), not_null(n_30))));
    return(t);
  }
  ATerm v_38 (ATerm t)
  {
    t = term_u_21;
    return(t);
  }
  ATerm w_38 (ATerm t)
  {
    t = term_u_21;
    return(t);
  }
  ATerm x_38 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(m_30), term_o_18);
    return(t);
  }
  ATerm y_38 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(m_30), (ATerm) ATinsert(ATempty, not_null(n_30)));
    return(t);
  }
  ATerm z_38 (ATerm t)
  {
    ATerm c_36 = NULL;
    ATerm d_36 = NULL;
    t = new_0(t);
    {
      d_36 = t;
      if(((c_36 != NULL) && (c_36 != d_36)))
        _fail(d_36);
      else
        c_36 = d_36;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_36)), term_f_12))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_w_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_36))))), not_null(m_30)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_36)), term_w_10, term_o_18))));
    return(t);
  }
  ATerm a_39 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(m_30));
    return(t);
  }
  ATerm b_39 (ATerm t)
  {
    ATerm h_36 = NULL;
    ATerm n_36 = NULL;
    t = not_null(n_30);
    {
      ATerm b_2 (ATerm t)
      {
        ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
        i_36 = t;
        b_27 :
        if(match_cons(i_36, sym_Call_2))
          {
            j_36 = ATgetArgument(i_36, 0);
            l_36 = ATgetArgument(i_36, 1);
            c_27 :
            if(match_cons(j_36, sym_SVar_1))
              {
                k_36 = ATgetArgument(j_36, 0);
                d_27 :
                if(((ATermList) l_36 == ATempty))
                  {
                    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(k_36));
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
      t = map_1(t, b_2);
      {
        n_36 = t;
        if(((h_36 != NULL) && (h_36 != n_36)))
          _fail(n_36);
        else
          h_36 = n_36;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_w_10, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_30)), (ATerm) ATinsert(CheckATermList(not_null(h_36)), term_o_18))));
    return(t);
  }
  ATerm c_39 (ATerm t)
  {
    ATerm q_36 = NULL;
    ATerm r_36 = NULL;
    t = not_null(n_30);
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          t = try_1(t, construct_term_0);
          return(t);
        }
        t = topdown_1(t, d_2);
        return(t);
      }
      t = map_1(t, c_2);
      {
        r_36 = t;
        if(((q_36 != NULL) && (q_36 != r_36)))
          _fail(r_36);
        else
          q_36 = r_36;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_w_10, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_30)), not_null(q_36))));
    return(t);
  }
  ATerm d_39 (ATerm t)
  {
    ATerm t_36 = NULL;
    ATerm u_36 = NULL;
    t = new_0(t);
    {
      u_36 = t;
      if(((t_36 != NULL) && (t_36 != u_36)))
        _fail(u_36);
      else
        t_36 = u_36;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_36)), term_f_12), term_v_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_e_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_22), term_q_22), not_null(m_30))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_w_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_36)))))))));
    return(t);
  }
  ATerm e_39 (ATerm t)
  {
    ATerm x_36 = NULL;
    ATerm y_36 = NULL;
    t = new_0(t);
    {
      y_36 = t;
      if(((x_36 != NULL) && (x_36 != y_36)))
        _fail(y_36);
      else
        x_36 = y_36;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_36)), term_f_12), term_v_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_a_23, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(m_30))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_30)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_w_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_36)))))))));
    return(t);
  }
  ATerm f_39 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(m_30), not_null(n_30));
    return(t);
  }
  ATerm g_39 (ATerm t)
  {
    ATerm e_37 = NULL,f_37 = NULL;
    ATerm g_37 = NULL;
    ATerm h_37 = NULL;
    t = new_0(t);
    {
      g_37 = t;
      {
        if(((e_37 != NULL) && (e_37 != g_37)))
          _fail(g_37);
        else
          e_37 = g_37;
        {
          t = new_0(t);
          {
            h_37 = t;
            if(((f_37 != NULL) && (f_37 != h_37)))
              _fail(h_37);
            else
              f_37 = h_37;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_37)), term_f_12), term_g_23)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_37)), term_f_12), term_v_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_e_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_30)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_37)))))), not_null(m_30))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_30)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_w_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_37)))))))));
    return(t);
  }
  ATerm h_39 (ATerm t)
  {
    ATerm k_37 = NULL,l_37 = NULL;
    ATerm m_37 = NULL;
    ATerm n_37 = NULL;
    t = new_0(t);
    {
      m_37 = t;
      {
        if(((k_37 != NULL) && (k_37 != m_37)))
          _fail(m_37);
        else
          k_37 = m_37;
        {
          t = new_0(t);
          {
            n_37 = t;
            if(((l_37 != NULL) && (l_37 != n_37)))
              _fail(n_37);
            else
              l_37 = n_37;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_37)), term_f_12), term_g_23)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_37)), term_f_12), term_v_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_e_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_37)))))), not_null(m_30))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_30)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_w_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_37)))))))));
    return(t);
  }
  ATerm i_39 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_30), not_null(n_30));
    return(t);
  }
  ATerm j_39 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_30)), not_null(m_30)));
    return(t);
  }
  ATerm k_39 (ATerm t)
  {
    ATerm w_37 = NULL;
    ATerm j_23;
    j_23 = t;
    {
      t = not_null(m_30);
      {
        ATerm e_2 (ATerm t)
        {
          ATerm u_37 = NULL;
          u_37 = t;
          {
            ATerm k_23;
            k_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(u_37)), term_m_23);
              {
                ATerm f_2 (ATerm t)
                {
                  t = term_a_13;
                  return(t);
                }
                t = assert_1(t, f_2);
              }
            }
            t = k_23;
          }
          return(t);
        }
        t = map_1(t, e_2);
      }
    }
    t = j_23;
    {
      ATerm z_37 = NULL;
      t = not_null(m_30);
      {
        ATerm g_2 (ATerm t)
        {
          ATerm x_37 = NULL;
          x_37 = t;
          t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_37)), term_f_12), term_n_23);
          return(t);
        }
        t = map_1(t, g_2);
        {
          z_37 = t;
          if(((w_37 != NULL) && (w_37 != z_37)))
            _fail(z_37);
          else
            w_37 = z_37;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_12, not_null(w_37))), (ATerm) ATinsert(ATempty, not_null(n_30)));
    }
    return(t);
  }
  ATerm l_39 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATempty, term_o_18)));
    return(t);
  }
  ATerm m_39 (ATerm t)
  {
    t = term_u_21;
    return(t);
  }
  o_30 = t;
  r_27 :
  if(match_cons(o_30, sym_Build_1))
    {
      m_30 = ATgetArgument(o_30, 0);
      {
        ATerm q_30 = NULL;
        ATerm r_30 = NULL;
        t = not_null(m_30);
        {
          t = construct_term_caching_0(t);
          {
            r_30 = t;
            if(((q_30 != NULL) && (q_30 != r_30)))
              _fail(r_30);
            else
              q_30 = r_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_w_10, not_null(q_30)));
      }
    }
  else
    {
      if(match_cons(o_30, sym_Case_3))
        {
          m_30 = ATgetArgument(o_30, 0);
          n_30 = ATgetArgument(o_30, 1);
          l_30 = ATgetArgument(o_30, 2);
          x_27 :
          if(match_cons(m_30, sym_Var_1))
            {
              k_30 = ATgetArgument(m_30, 0);
              y_27 :
              if(((ATgetType(n_30) == AT_LIST) && ((ATermList) n_30 != ATempty)))
                {
                  e_30 = ATgetFirst((ATermList) n_30);
                  c_30 = (ATerm) ATgetNext((ATermList) n_30);
                  z_27 :
                  if(match_cons(e_30, sym_Alt_3))
                    {
                      y_29 = ATgetArgument(e_30, 0);
                      a_30 = ATgetArgument(e_30, 1);
                      b_30 = ATgetArgument(e_30, 2);
                      a_28 :
                      if(match_cons(y_29, sym_Fun_2))
                        {
                          z_29 = ATgetArgument(y_29, 0);
                          x_29 = ATgetArgument(y_29, 1);
                          b_28 :
                          if(((ATgetType(a_30) == AT_LIST) && ((ATermList) a_30 != ATempty)))
                            {
                              r_29 = ATgetFirst((ATermList) a_30);
                              t_29 = (ATerm) ATgetNext((ATermList) a_30);
                              c_28 :
                              if(((ATgetType(t_29) == AT_LIST) && ((ATermList) t_29 != ATempty)))
                                {
                                  u_29 = ATgetFirst((ATermList) t_29);
                                  w_29 = (ATerm) ATgetNext((ATermList) t_29);
                                  d_28 :
                                  if(((ATermList) w_29 == ATempty))
                                    {
                                      f_28 :
                                      if(match_cons(u_29, sym_Var_1))
                                        {
                                          v_29 = ATgetArgument(u_29, 0);
                                          g_28 :
                                          if(match_cons(r_29, sym_Var_1))
                                            {
                                              s_29 = ATgetArgument(r_29, 0);
                                              h_28 :
                                              if(match_int(x_29, 2))
                                                {
                                                  k_28 :
                                                  if(match_string(z_29, "Cons"))
                                                    {
                                                      ATerm o_23 = t;
                                                      int p_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_30)))), term_q_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_a_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_30))), term_q_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_30)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_29)), term_w_10, (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_30))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_29)), term_w_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_30))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_30)), not_null(c_30), not_null(l_30)))));
                                                          LocalPopChoice(p_23);
                                                        }
                                                      else
                                                        {
                                                          t = o_23;
                                                          t = d_38(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = d_38(t);
                                                    }
                                                }
                                              else
                                                {
                                                  l_28 :
                                                  t = d_38(t);
                                                }
                                            }
                                          else
                                            {
                                              m_28 :
                                              n_28 :
                                              t = d_38(t);
                                            }
                                        }
                                      else
                                        {
                                          o_28 :
                                          p_28 :
                                          q_28 :
                                          t = d_38(t);
                                        }
                                    }
                                  else
                                    {
                                      r_28 :
                                      s_28 :
                                      t_28 :
                                      u_28 :
                                      t = d_38(t);
                                    }
                                }
                              else
                                {
                                  v_28 :
                                  w_28 :
                                  x_28 :
                                  t = d_38(t);
                                }
                            }
                          else
                            {
                              if(((ATermList) a_30 == ATempty))
                                {
                                  y_28 :
                                  if(match_int(x_29, 0))
                                    {
                                      z_28 :
                                      if(match_string(z_29, "Nil"))
                                        {
                                          ATerm q_23 = t;
                                          int r_23 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_a_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_30))), term_q_16), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(b_30)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_30)), not_null(c_30), not_null(l_30)))));
                                              LocalPopChoice(r_23);
                                            }
                                          else
                                            {
                                              t = q_23;
                                              t = d_38(t);
                                            }
                                        }
                                      else
                                        {
                                          t = d_38(t);
                                        }
                                    }
                                  else
                                    {
                                      a_29 :
                                      t = d_38(t);
                                    }
                                }
                              else
                                {
                                  b_29 :
                                  c_29 :
                                  t = d_38(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(y_29, sym_Real_1))
                            {
                              z_29 = ATgetArgument(y_29, 0);
                              t = e_38(t);
                            }
                          else
                            {
                              if(match_cons(y_29, sym_Int_1))
                                {
                                  z_29 = ATgetArgument(y_29, 0);
                                  t = f_38(t);
                                }
                              else
                                {
                                  if(match_cons(y_29, sym_Str_1))
                                    {
                                      z_29 = ATgetArgument(y_29, 0);
                                      t = g_38(t);
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
                  if(((ATermList) n_30 == ATempty))
                    {
                      t = h_38(t);
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
          if(match_cons(o_30, sym_Case_4))
            {
              m_30 = ATgetArgument(o_30, 0);
              n_30 = ATgetArgument(o_30, 1);
              l_30 = ATgetArgument(o_30, 2);
              d_30 = ATgetArgument(o_30, 3);
              t = i_38(t);
            }
          else
            {
              if(match_cons(o_30, sym_Continue_1))
                {
                  m_30 = ATgetArgument(o_30, 0);
                  t = j_38(t);
                }
              else
                {
                  if(match_cons(o_30, sym_Assign_2))
                    {
                      m_30 = ATgetArgument(o_30, 0);
                      n_30 = ATgetArgument(o_30, 1);
                      d_29 :
                      if(match_cons(m_30, sym_Var_1))
                        {
                          k_30 = ATgetArgument(m_30, 0);
                          e_29 :
                          if(match_cons(n_30, sym_Var_1))
                            {
                              e_30 = ATgetArgument(n_30, 0);
                              {
                                ATerm s_23 = t;
                                int t_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_38(t);
                                    LocalPopChoice(t_23);
                                  }
                                else
                                  {
                                    t = s_23;
                                    t = l_38(t);
                                  }
                              }
                            }
                          else
                            {
                              t = l_38(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(o_30, sym_Assign_1))
                        {
                          m_30 = ATgetArgument(o_30, 0);
                          f_29 :
                          if(match_cons(m_30, sym_Var_1))
                            {
                              k_30 = ATgetArgument(m_30, 0);
                              t = m_38(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(o_30, sym_Match_2))
                            {
                              m_30 = ATgetArgument(o_30, 0);
                              n_30 = ATgetArgument(o_30, 1);
                              g_29 :
                              if(match_cons(m_30, sym_Op_2))
                                {
                                  k_30 = ATgetArgument(m_30, 0);
                                  j_30 = ATgetArgument(m_30, 1);
                                  h_29 :
                                  if(((ATgetType(j_30) == AT_LIST) && ((ATermList) j_30 != ATempty)))
                                    {
                                      f_30 = ATgetFirst((ATermList) j_30);
                                      g_30 = (ATerm) ATgetNext((ATermList) j_30);
                                      i_29 :
                                      if(((ATgetType(g_30) == AT_LIST) && ((ATermList) g_30 != ATempty)))
                                        {
                                          h_30 = ATgetFirst((ATermList) g_30);
                                          i_30 = (ATerm) ATgetNext((ATermList) g_30);
                                          j_29 :
                                          if(((ATermList) i_30 == ATempty))
                                            {
                                              k_29 :
                                              if(match_string(k_30, "Cons"))
                                                {
                                                  ATerm u_23 = t;
                                                  int v_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = n_38(t);
                                                      LocalPopChoice(v_23);
                                                    }
                                                  else
                                                    {
                                                      t = u_23;
                                                      t = p_38(t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = p_38(t);
                                                }
                                            }
                                          else
                                            {
                                              l_29 :
                                              t = p_38(t);
                                            }
                                        }
                                      else
                                        {
                                          m_29 :
                                          t = p_38(t);
                                        }
                                    }
                                  else
                                    {
                                      if(((ATermList) j_30 == ATempty))
                                        {
                                          n_29 :
                                          if(match_string(k_30, "Nil"))
                                            {
                                              ATerm w_23 = t;
                                              int x_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = o_38(t);
                                                  LocalPopChoice(x_23);
                                                }
                                              else
                                                {
                                                  t = w_23;
                                                  t = p_38(t);
                                                }
                                            }
                                          else
                                            {
                                              t = p_38(t);
                                            }
                                        }
                                      else
                                        {
                                          o_29 :
                                          t = p_38(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(m_30, sym_Real_1))
                                    {
                                      k_30 = ATgetArgument(m_30, 0);
                                      t = q_38(t);
                                    }
                                  else
                                    {
                                      if(match_cons(m_30, sym_Int_1))
                                        {
                                          k_30 = ATgetArgument(m_30, 0);
                                          t = r_38(t);
                                        }
                                      else
                                        {
                                          if(match_cons(m_30, sym_Str_1))
                                            {
                                              k_30 = ATgetArgument(m_30, 0);
                                              t = s_38(t);
                                            }
                                          else
                                            {
                                              if(match_cons(m_30, sym_Var_1))
                                                {
                                                  k_30 = ATgetArgument(m_30, 0);
                                                  t = t_38(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(m_30, sym_As_2))
                                                    {
                                                      k_30 = ATgetArgument(m_30, 0);
                                                      j_30 = ATgetArgument(m_30, 1);
                                                      t = u_38(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(m_30, sym_BuildDefault_1))
                                                        {
                                                          k_30 = ATgetArgument(m_30, 0);
                                                          t = v_38(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(m_30, sym_Wld_0))
                                                            {
                                                              t = w_38(t);
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
                              if(match_cons(o_30, sym_Match_1))
                                {
                                  m_30 = ATgetArgument(o_30, 0);
                                  t = x_38(t);
                                }
                              else
                                {
                                  if(match_cons(o_30, sym_Let_2))
                                    {
                                      m_30 = ATgetArgument(o_30, 0);
                                      n_30 = ATgetArgument(o_30, 1);
                                      t = y_38(t);
                                    }
                                  else
                                    {
                                      if(match_cons(o_30, sym_Where_1))
                                        {
                                          m_30 = ATgetArgument(o_30, 0);
                                          t = z_38(t);
                                        }
                                      else
                                        {
                                          if(match_cons(o_30, sym_Test_1))
                                            {
                                              m_30 = ATgetArgument(o_30, 0);
                                              t = a_39(t);
                                            }
                                          else
                                            {
                                              if(match_cons(o_30, sym_Call_2))
                                                {
                                                  m_30 = ATgetArgument(o_30, 0);
                                                  n_30 = ATgetArgument(o_30, 1);
                                                  p_29 :
                                                  if(match_cons(m_30, sym_SVar_1))
                                                    {
                                                      k_30 = ATgetArgument(m_30, 0);
                                                      t = b_39(t);
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_cons(o_30, sym_Prim_2))
                                                    {
                                                      m_30 = ATgetArgument(o_30, 0);
                                                      n_30 = ATgetArgument(o_30, 1);
                                                      t = c_39(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(o_30, sym_Not_1))
                                                        {
                                                          m_30 = ATgetArgument(o_30, 0);
                                                          t = d_39(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(o_30, sym_LGChoice_2))
                                                            {
                                                              m_30 = ATgetArgument(o_30, 0);
                                                              n_30 = ATgetArgument(o_30, 1);
                                                              t = e_39(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(o_30, sym_GChoice_2))
                                                                {
                                                                  m_30 = ATgetArgument(o_30, 0);
                                                                  n_30 = ATgetArgument(o_30, 1);
                                                                  t = f_39(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(o_30, sym_GuardedLChoice_3))
                                                                    {
                                                                      m_30 = ATgetArgument(o_30, 0);
                                                                      n_30 = ATgetArgument(o_30, 1);
                                                                      l_30 = ATgetArgument(o_30, 2);
                                                                      t = g_39(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(o_30, sym_LChoice_2))
                                                                        {
                                                                          m_30 = ATgetArgument(o_30, 0);
                                                                          n_30 = ATgetArgument(o_30, 1);
                                                                          t = h_39(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(o_30, sym_Choice_2))
                                                                            {
                                                                              m_30 = ATgetArgument(o_30, 0);
                                                                              n_30 = ATgetArgument(o_30, 1);
                                                                              t = i_39(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(o_30, sym_Seq_2))
                                                                                {
                                                                                  m_30 = ATgetArgument(o_30, 0);
                                                                                  n_30 = ATgetArgument(o_30, 1);
                                                                                  t = j_39(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(o_30, sym_Scope_2))
                                                                                    {
                                                                                      m_30 = ATgetArgument(o_30, 0);
                                                                                      n_30 = ATgetArgument(o_30, 1);
                                                                                      t = k_39(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(o_30, sym_Fail_0))
                                                                                        {
                                                                                          t = l_39(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(o_30, sym_Id_0))
                                                                                            {
                                                                                              t = m_39(t);
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
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
  x_40 = t;
  w_40 :
  if(match_cons(x_40, sym__2))
    {
      y_40 = ATgetArgument(x_40, 0);
      z_40 = ATgetArgument(x_40, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_y_23), not_null(z_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  m_41 = t;
  g_41 :
  if(((ATgetType(m_41) == AT_LIST) && ((ATermList) m_41 != ATempty)))
    {
      n_41 = ATgetFirst((ATermList) m_41);
      o_41 = (ATerm) ATgetNext((ATermList) m_41);
      l_41 :
      if(match_int(n_41, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_41)), term_a_24), term_z_23);
        }
      else
        {
          if(match_int(n_41, 92))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_41)), term_z_23), term_z_23);
            }
          else
            {
              if(match_int(n_41, 34))
                {
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_41)), term_b_24), term_z_23);
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
    ATerm y_41 (ATerm t)
    {
      ATerm c_24 = t;
      int d_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Escape_0(t);
          {
            ATerm h_2 (ATerm t)
            {
              t = Cons_2(t, _id, y_41);
              return(t);
            }
            t = Cons_2(t, _id, h_2);
          }
          LocalPopChoice(d_24);
        }
      else
        {
          t = c_24;
          {
            ATerm e_24 = t;
            int f_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, y_41);
                LocalPopChoice(f_24);
              }
            else
              {
                t = e_24;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = y_41(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
  h_42 = t;
  c_42 :
  if(match_cons(h_42, sym__2))
    {
      i_42 = ATgetArgument(h_42, 0);
      j_42 = ATgetArgument(h_42, 1);
      {
        ATerm m_42 = NULL,o_42 = NULL;
        ATerm g_24;
        g_24 = t;
        {
          ATerm n_42 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_h_24), not_null(i_42));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  n_42 = t;
                  if(((m_42 != NULL) && (m_42 != n_42)))
                    _fail(n_42);
                  else
                    m_42 = n_42;
                }
              }
            }
          }
        }
        t = g_24;
        {
          ATerm p_42 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_i_24), not_null(i_42));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  p_42 = t;
                  if(((o_42 != NULL) && (o_42 != p_42)))
                    _fail(p_42);
                  else
                    o_42 = p_42;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(o_42))), term_l_24)))), not_null(j_42)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(m_42))), term_l_24)))));
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
  ATerm w_42 = NULL;
  w_42 = t;
  {
    ATerm y_42 = NULL,q_49 = NULL;
    t = term_l_10;
    {
      ATerm i_2 (ATerm t)
      {
        t = term_t_10;
        return(t);
      }
      t = rewrite_1(t, i_2);
      {
        y_42 = t;
        u_42 :
        if(match_cons(y_42, sym_Defined_1))
          {
            q_49 = ATgetArgument(y_42, 0);
            v_42 :
            if(!(match_string(q_49, "b_0")))
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
    t = not_null(w_42);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm r_50 = NULL;
  r_50 = t;
  {
    ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_50));
    {
      ATerm j_2 (ATerm t)
      {
        t = term_v_10;
        return(t);
      }
      t = rewrite_1(t, j_2);
      {
        t_50 = t;
        p_50 :
        if(match_cons(t_50, sym_Defined_2))
          {
            u_50 = ATgetArgument(t_50, 0);
            v_50 = ATgetArgument(t_50, 1);
            q_50 :
            if(match_string(u_50, "g_0"))
              {
                if(((r_50 != NULL) && (r_50 != v_50)))
                  _fail(v_50);
                else
                  r_50 = v_50;
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
    t = not_null(r_50);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL;
  c_51 = t;
  b_51 :
  if(match_cons(c_51, sym_SDef_3))
    {
      d_51 = ATgetArgument(c_51, 0);
      e_51 = ATgetArgument(c_51, 1);
      f_51 = ATgetArgument(c_51, 2);
      {
        ATerm j_51 = NULL,k_51 = NULL;
        ATerm l_51 = NULL;
        t = not_null(e_51);
        {
          ATerm m_51 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            l_51 = t;
            {
              if(((j_51 != NULL) && (j_51 != l_51)))
                _fail(l_51);
              else
                j_51 = l_51;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_51), not_null(f_51));
                {
                  ATerm m_24 = t;
                  int n_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_2 (ATerm t)
                      {
                        ATerm o_24 = t;
                        int p_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            LocalPopChoice(p_24);
                          }
                        else
                          {
                            t = o_24;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, k_2, _id);
                      t = TracedBody_0(t);
                      LocalPopChoice(n_24);
                    }
                  else
                    {
                      t = m_24;
                      t = PlainBody_0(t);
                    }
                  {
                    m_51 = t;
                    if(((k_51 != NULL) && (k_51 != m_51)))
                      _fail(m_51);
                    else
                      k_51 = m_51;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_b_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_51)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(j_51)), term_r_24)))), not_null(k_51));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm quote_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm t_51 = NULL;
  ATerm v_51 = NULL,x_51 = NULL;
  t_51 = t;
  {
    ATerm s_24;
    s_24 = t;
    {
      ATerm w_51 = NULL;
      t = c_77(t);
      {
        w_51 = t;
        if(((v_51 != NULL) && (v_51 != w_51)))
          _fail(w_51);
        else
          v_51 = w_51;
      }
    }
    t = s_24;
    {
      ATerm y_51 = NULL;
      t = not_null(t_51);
      {
        t = explode_string_0(t);
        {
          y_51 = t;
          if(((x_51 != NULL) && (x_51 != y_51)))
            _fail(y_51);
          else
            x_51 = y_51;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, not_null(v_51))), not_null(x_51)), (ATerm) ATinsert(ATempty, not_null(v_51)));
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
  ATerm l_2 (ATerm t)
  {
    t = term_b_24;
    return(t);
  }
  t = quote_1(t, l_2);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  e_52 = t;
  d_52 :
  if(((ATgetType(e_52) == AT_LIST) && ((ATermList) e_52 != ATempty)))
    {
      f_52 = ATgetFirst((ATermList) e_52);
      g_52 = (ATerm) ATgetNext((ATermList) e_52);
      t = not_null(f_52);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
  m_52 = t;
  l_52 :
  if(match_cons(m_52, sym__2))
    {
      n_52 = ATgetArgument(m_52, 0);
      o_52 = ATgetArgument(m_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_52), not_null(o_52));
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
ATerm rewrite_1 (ATerm t, ATerm e_70 (ATerm))
{
  ATerm u_52 = NULL;
  ATerm w_52 = NULL;
  u_52 = t;
  {
    ATerm x_52 = NULL;
    t = term_t_24;
    {
      t = e_70(t);
      {
        x_52 = t;
        if(((w_52 != NULL) && (w_52 != x_52)))
          _fail(x_52);
        else
          w_52 = x_52;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_52), not_null(u_52));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
  f_53 = t;
  e_53 :
  if(match_cons(f_53, sym__2))
    {
      g_53 = ATgetArgument(f_53, 0);
      h_53 = ATgetArgument(f_53, 1);
      {
        ATerm k_53 = NULL;
        ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(g_53), not_null(h_53));
        {
          ATerm m_2 (ATerm t)
          {
            t = term_u_24;
            return(t);
          }
          t = rewrite_1(t, m_2);
          {
            l_53 = t;
            c_53 :
            if(match_cons(l_53, sym_Defined_2))
              {
                m_53 = ATgetArgument(l_53, 0);
                n_53 = ATgetArgument(l_53, 1);
                d_53 :
                if(match_string(m_53, "h_0"))
                  {
                    if(((k_53 != NULL) && (k_53 != n_53)))
                      _fail(n_53);
                    else
                      k_53 = n_53;
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
        t = not_null(k_53);
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
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL;
  w_53 = t;
  v_53 :
  if(match_cons(w_53, sym_OpDecl_2))
    {
      x_53 = ATgetArgument(w_53, 0);
      y_53 = ATgetArgument(w_53, 1);
      {
        ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,h_54 = NULL;
        ATerm v_24;
        v_24 = t;
        {
          ATerm e_54 = NULL;
          t = not_null(y_53);
          {
            ATerm f_54 = NULL;
            t = Arity_0(t);
            {
              e_54 = t;
              {
                if(((c_54 != NULL) && (c_54 != e_54)))
                  _fail(e_54);
                else
                  c_54 = e_54;
                {
                  ATerm g_54 = NULL;
                  t = int_to_string_0(t);
                  {
                    f_54 = t;
                    {
                      if(((b_54 != NULL) && (b_54 != f_54)))
                        _fail(f_54);
                      else
                        b_54 = f_54;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_53), not_null(c_54));
                        {
                          t = ConstructorName_0(t);
                          {
                            g_54 = t;
                            if(((d_54 != NULL) && (d_54 != g_54)))
                              _fail(g_54);
                            else
                              d_54 = g_54;
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
        t = v_24;
        {
          ATerm i_54 = NULL;
          t = not_null(x_53);
          {
            t = double_quote_0(t);
            {
              i_54 = t;
              if(((h_54 != NULL) && (h_54 != i_54)))
                _fail(i_54);
              else
                h_54 = i_54;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_54)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_54)), term_w_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_24), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(b_54))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(h_54))))))));
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
  ATerm r_54 = NULL;
  ATerm t_54 = NULL;
  r_54 = t;
  {
    ATerm u_54 = NULL,w_54 = NULL;
    ATerm v_54 = NULL;
    t = not_null(r_54);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          v_54 = t;
          if(((u_54 != NULL) && (u_54 != v_54)))
            _fail(v_54);
          else
            u_54 = v_54;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_54), (ATerm) ATinsert(ATempty, term_b_25));
      {
        t = conc_0(t);
        {
          w_54 = t;
          if(((t_54 != NULL) && (t_54 != w_54)))
            _fail(w_54);
          else
            t_54 = w_54;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_q_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_25, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_q_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(t_54)));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm b_55 = NULL;
  b_55 = t;
  t = SSL_int_to_string(not_null(b_55));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL;
  m_55 = t;
  k_55 :
  if(((ATgetType(m_55) == AT_LIST) && ((ATermList) m_55 != ATempty)))
    {
      n_55 = ATgetFirst((ATermList) m_55);
      o_55 = (ATerm) ATgetNext((ATermList) m_55);
      l_55 :
      if(match_int(n_55, 95))
        {
          ATerm q_55 = NULL;
          ATerm r_55 = NULL;
          t = not_null(o_55);
          {
            t = s_0(t);
            {
              r_55 = t;
              if(((q_55 != NULL) && (q_55 != r_55)))
                _fail(r_55);
              else
                q_55 = r_55;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_55)), term_f_25), term_f_25);
        }
      else
        {
          if(match_int(n_55, 45))
            {
              ATerm t_55 = NULL;
              ATerm u_55 = NULL;
              t = not_null(o_55);
              {
                t = s_0(t);
                {
                  u_55 = t;
                  if(((t_55 != NULL) && (t_55 != u_55)))
                    _fail(u_55);
                  else
                    t_55 = u_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_55)), term_f_25);
            }
          else
            {
              if(match_int(n_55, 39))
                {
                  ATerm w_55 = NULL;
                  ATerm x_55 = NULL;
                  t = not_null(o_55);
                  {
                    t = s_0(t);
                    {
                      x_55 = t;
                      if(((w_55 != NULL) && (w_55 != x_55)))
                        _fail(x_55);
                      else
                        w_55 = x_55;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_55)), term_f_25), term_g_25), term_f_25);
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
ATerm escape_1 (ATerm t, ATerm p_76 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm e_56 (ATerm t)
    {
      ATerm h_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_76(t, e_56);
          LocalPopChoice(k_25);
        }
      else
        {
          t = h_25;
          {
            ATerm m_25 = t;
            int n_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, e_56);
                LocalPopChoice(n_25);
              }
            else
              {
                t = m_25;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = e_56(t);
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
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
  h_56 = t;
  g_56 :
  if(match_cons(h_56, sym__2))
    {
      i_56 = ATgetArgument(h_56, 0);
      j_56 = ATgetArgument(h_56, 1);
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_56), not_null(j_56));
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            t = SSL_addr(not_null(i_56), not_null(j_56));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm))
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_79(t);
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
        r_56 = t;
        q_56 :
        if(((ATgetType(r_56) == AT_LIST) && ((ATermList) r_56 != ATempty)))
          {
            s_56 = ATgetFirst((ATermList) r_56);
            t_56 = (ATerm) ATgetNext((ATermList) r_56);
            {
              ATerm w_56 = NULL,y_56 = NULL;
              ATerm t_25;
              t_25 = t;
              {
                ATerm x_56 = NULL;
                t = not_null(s_56);
                {
                  t = g_79(t);
                  {
                    x_56 = t;
                    if(((w_56 != NULL) && (w_56 != x_56)))
                      _fail(x_56);
                    else
                      w_56 = x_56;
                  }
                }
              }
              t = t_25;
              {
                ATerm z_56 = NULL;
                t = not_null(t_56);
                {
                  t = foldr_3(t, e_79, f_79, g_79);
                  {
                    z_56 = t;
                    if(((y_56 != NULL) && (y_56 != z_56)))
                      _fail(z_56);
                    else
                      y_56 = z_56;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_56), not_null(y_56));
                  t = f_79(t);
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
  ATerm n_2 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_t_17;
    return(t);
  }
  t = foldr_3(t, n_2, add_0, o_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
  h_57 = t;
  f_57 :
  if(match_cons(h_57, sym_FunType_2))
    {
      i_57 = ATgetArgument(h_57, 0);
      g_57 = ATgetArgument(h_57, 1);
      {
        t = not_null(i_57);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(h_57, sym_ConstType_1))
        {
          i_57 = ATgetArgument(h_57, 0);
          t = term_r_17;
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
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  w_57 = t;
  t_57 :
  if(match_cons(w_57, sym_OpDecl_2))
    {
      x_57 = ATgetArgument(w_57, 0);
      y_57 = ATgetArgument(w_57, 1);
      {
        ATerm b_58 = NULL,c_58 = NULL;
        ATerm d_58 = NULL;
        t = not_null(y_57);
        {
          ATerm e_58 = NULL,g_58 = NULL,i_58 = NULL;
          t = Arity_0(t);
          {
            d_58 = t;
            {
              if(((b_58 != NULL) && (b_58 != d_58)))
                _fail(d_58);
              else
                b_58 = d_58;
              {
                ATerm u_25;
                u_25 = t;
                {
                  ATerm f_58 = NULL;
                  t = not_null(x_57);
                  {
                    t = cify_0(t);
                    {
                      f_58 = t;
                      if(((e_58 != NULL) && (e_58 != f_58)))
                        _fail(f_58);
                      else
                        e_58 = f_58;
                    }
                  }
                }
                t = u_25;
                {
                  ATerm h_58 = NULL;
                  t = not_null(b_58);
                  {
                    t = int_to_string_0(t);
                    {
                      h_58 = t;
                      if(((g_58 != NULL) && (g_58 != h_58)))
                        _fail(h_58);
                      else
                        g_58 = h_58;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_58)), term_w_25), not_null(e_58)), term_v_25);
                    {
                      t = concat_strings_0(t);
                      {
                        i_58 = t;
                        {
                          if(((c_58 != NULL) && (c_58 != i_58)))
                            _fail(i_58);
                          else
                            c_58 = i_58;
                          {
                            ATerm x_25;
                            x_25 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(x_57), not_null(b_58)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_25, not_null(c_58)));
                              {
                                ATerm p_2 (ATerm t)
                                {
                                  t = term_u_24;
                                  return(t);
                                }
                                t = assert_1(t, p_2);
                              }
                            }
                            t = x_25;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_58)), term_f_12)));
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
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL;
  w_58 = t;
  s_58 :
  if(match_cons(w_58, sym_Signature_1))
    {
      x_58 = ATgetArgument(w_58, 0);
      t_58 :
      if(((ATgetType(x_58) == AT_LIST) && ((ATermList) x_58 != ATempty)))
        {
          y_58 = ATgetFirst((ATermList) x_58);
          a_59 = (ATerm) ATgetNext((ATermList) x_58);
          u_58 :
          if(match_cons(y_58, sym_Constructors_1))
            {
              z_58 = ATgetArgument(y_58, 0);
              v_58 :
              if(((ATermList) a_59 == ATempty))
                {
                  {
                    ATerm c_59 = NULL,d_59 = NULL,g_59 = NULL;
                    ATerm c_26;
                    c_26 = t;
                    {
                      ATerm e_59 = NULL;
                      t = not_null(z_58);
                      {
                        ATerm f_59 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          e_59 = t;
                          {
                            if(((c_59 != NULL) && (c_59 != e_59)))
                              _fail(e_59);
                            else
                              c_59 = e_59;
                            {
                              t = not_null(z_58);
                              {
                                t = InitConstructors_0(t);
                                {
                                  f_59 = t;
                                  if(((d_59 != NULL) && (d_59 != f_59)))
                                    _fail(f_59);
                                  else
                                    d_59 = f_59;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = c_26;
                    {
                      ATerm h_59 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_59), (ATerm) ATinsert(ATempty, not_null(d_59)));
                      {
                        t = conc_0(t);
                        {
                          h_59 = t;
                          if(((g_59 != NULL) && (g_59 != h_59)))
                            _fail(h_59);
                          else
                            g_59 = h_59;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(g_59));
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
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL;
  o_59 = t;
  n_59 :
  if(match_cons(o_59, sym__2))
    {
      p_59 = ATgetArgument(o_59, 0);
      q_59 = ATgetArgument(o_59, 1);
      {
        t = not_null(p_59);
        {
          ATerm q_2 (ATerm t)
          {
            t = not_null(q_59);
            return(t);
          }
          t = at_end_1(t, q_2);
        }
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
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL;
  z_59 = t;
  x_59 :
  if(match_cons(z_59, sym_FunType_2))
    {
      a_60 = ATgetArgument(z_59, 0);
      y_59 = ATgetArgument(z_59, 1);
      {
        ATerm c_60 = NULL;
        ATerm d_60 = NULL;
        t = not_null(a_60);
        {
          t = map_1(t, TranslateType_0);
          {
            d_60 = t;
            if(((c_60 != NULL) && (c_60 != d_60)))
              _fail(d_60);
            else
              c_60 = d_60;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_12, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(c_60)));
      }
    }
  else
    {
      if(match_cons(z_59, sym_ConstType_1))
        {
          a_60 = ATgetArgument(z_59, 0);
          t = term_b_12;
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
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL;
  n_60 = t;
  k_60 :
  if(match_cons(n_60, sym_VarDec_2))
    {
      o_60 = ATgetArgument(n_60, 0);
      p_60 = ATgetArgument(n_60, 1);
      l_60 :
      if(match_cons(p_60, sym_FunType_2))
        {
          q_60 = ATgetArgument(p_60, 0);
          m_60 = ATgetArgument(p_60, 1);
          {
            ATerm t_60 = NULL;
            ATerm u_60 = NULL;
            t = not_null(q_60);
            {
              t = map_1(t, TranslateType_0);
              {
                u_60 = t;
                if(((t_60 != NULL) && (t_60 != u_60)))
                  _fail(u_60);
                else
                  t_60 = u_60;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_60)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(t_60)))));
          }
        }
      else
        {
          if(match_cons(p_60, sym_ConstType_1))
            {
              q_60 = ATgetArgument(p_60, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_60)), term_f_12));
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
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
  d_61 = t;
  b_61 :
  if(match_cons(d_61, sym_SDef_3))
    {
      e_61 = ATgetArgument(d_61, 0);
      f_61 = ATgetArgument(d_61, 1);
      g_61 = ATgetArgument(d_61, 2);
      {
        ATerm k_61 = NULL;
        ATerm l_61 = NULL;
        t = not_null(f_61);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            l_61 = t;
            if(((k_61 != NULL) && (k_61 != l_61)))
              _fail(l_61);
            else
              k_61 = l_61;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_61)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(k_61)), term_b_12))))));
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
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL;
  x_61 = t;
  r_61 :
  if(match_cons(x_61, sym_Specification_1))
    {
      y_61 = ATgetArgument(x_61, 0);
      s_61 :
      if(((ATgetType(y_61) == AT_LIST) && ((ATermList) y_61 != ATempty)))
        {
          z_61 = ATgetFirst((ATermList) y_61);
          b_62 = (ATerm) ATgetNext((ATermList) y_61);
          t_61 :
          if(match_cons(z_61, sym_Signature_1))
            {
              a_62 = ATgetArgument(z_61, 0);
              u_61 :
              if(((ATgetType(b_62) == AT_LIST) && ((ATermList) b_62 != ATempty)))
                {
                  c_62 = ATgetFirst((ATermList) b_62);
                  e_62 = (ATerm) ATgetNext((ATermList) b_62);
                  v_61 :
                  if(match_cons(c_62, sym_Strategies_1))
                    {
                      d_62 = ATgetArgument(c_62, 0);
                      w_61 :
                      if(((ATermList) e_62 == ATempty))
                        {
                          {
                            ATerm h_62 = NULL,j_62 = NULL;
                            ATerm d_26;
                            d_26 = t;
                            {
                              ATerm i_62 = NULL;
                              t = not_null(d_62);
                              {
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  i_62 = t;
                                  if(((h_62 != NULL) && (h_62 != i_62)))
                                    _fail(i_62);
                                  else
                                    h_62 = i_62;
                                }
                              }
                            }
                            t = d_26;
                            {
                              ATerm k_62 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_62), not_null(d_62));
                              {
                                t = conc_0(t);
                                {
                                  k_62 = t;
                                  if(((j_62 != NULL) && (j_62 != k_62)))
                                    _fail(k_62);
                                  else
                                    j_62 = k_62;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(j_62)), term_q_26), (ATerm) ATmakeAppl(sym_Signature_1, not_null(a_62))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_26, (ATerm) ATinsert(ATempty, term_p_26))), term_j_26), term_f_26));
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
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL;
  q_62 = t;
  p_62 :
  if(((ATgetType(q_62) == AT_LIST) && ((ATermList) q_62 != ATempty)))
    {
      r_62 = ATgetFirst((ATermList) q_62);
      s_62 = (ATerm) ATgetNext((ATermList) q_62);
      t = not_null(s_62);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL;
  z_62 = t;
  y_62 :
  if(match_cons(z_62, sym__2))
    {
      a_63 = ATgetArgument(z_62, 0);
      b_63 = ATgetArgument(z_62, 1);
      {
        ATerm r_26;
        r_26 = t;
        {
          ATerm e_63 = NULL;
          ATerm h_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_63), not_null(b_63));
          {
            ATerm s_26 = t;
            int t_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(t_26);
              }
            else
              {
                t = s_26;
                t = (ATerm) ATempty;
              }
            {
              h_63 = t;
              if(((e_63 != NULL) && (e_63 != h_63)))
                _fail(h_63);
              else
                e_63 = h_63;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_63), not_null(b_63), not_null(e_63));
            t = table_put_0(t);
          }
        }
        t = r_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  ATerm u_26;
  u_26 = t;
  {
    ATerm r_63 = NULL;
    ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
    t = z_69(t);
    {
      r_63 = t;
      {
        if(((p_63 != NULL) && (p_63 != r_63)))
          _fail(r_63);
        else
          p_63 = r_63;
        {
          ATerm v_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_63), term_x_26);
              t = table_get_0(t);
              LocalPopChoice(w_26);
            }
          else
            {
              t = v_26;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            s_63 = t;
            n_63 :
            if(((ATgetType(s_63) == AT_LIST) && ((ATermList) s_63 != ATempty)))
              {
                t_63 = ATgetFirst((ATermList) s_63);
                u_63 = (ATerm) ATgetNext((ATermList) s_63);
                {
                  if(((q_63 != NULL) && (q_63 != t_63)))
                    _fail(t_63);
                  else
                    q_63 = t_63;
                  {
                    if(((o_63 != NULL) && (o_63 != u_63)))
                      _fail(u_63);
                    else
                      o_63 = u_63;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_63), term_x_26, not_null(o_63));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(q_63);
                          {
                            ATerm v_2 (ATerm t)
                            {
                              ATerm v_63 = NULL;
                              v_63 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_63), not_null(v_63));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, v_2);
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
  t = u_26;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm x_91 (ATerm), ATerm y_91 (ATerm))
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_91(t);
      t = y_91(t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        t = y_91(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm c_64 = NULL;
  ATerm a_27;
  a_27 = t;
  {
    ATerm d_64 = NULL;
    ATerm e_64 = NULL;
    t = y_69(t);
    {
      d_64 = t;
      {
        if(((c_64 != NULL) && (c_64 != d_64)))
          _fail(d_64);
        else
          c_64 = d_64;
        {
          ATerm f_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_64), term_x_26);
          {
            ATerm e_27 = t;
            int f_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_27);
              }
            else
              {
                t = e_27;
                t = (ATerm) ATempty;
              }
            {
              f_64 = t;
              if(((e_64 != NULL) && (e_64 != f_64)))
                _fail(f_64);
              else
                e_64 = f_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_64), term_x_26, (ATerm) ATinsert(CheckATermList(not_null(e_64)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = a_27;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm a_70 (ATerm), ATerm b_70 (ATerm))
{
  t = begin_scope_1(t, a_70);
  {
    ATerm w_2 (ATerm t)
    {
      t = end_scope_1(t, a_70);
      return(t);
    }
    t = restore_always_2(t, b_70, w_2);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_70 (ATerm))
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL;
  n_64 = t;
  m_64 :
  if(match_cons(n_64, sym__2))
    {
      o_64 = ATgetArgument(n_64, 0);
      p_64 = ATgetArgument(n_64, 1);
      {
        ATerm s_64 = NULL,t_64 = NULL,v_64 = NULL;
        ATerm g_27;
        g_27 = t;
        {
          ATerm w_64 = NULL;
          ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
          t = c_70(t);
          {
            w_64 = t;
            {
              if(((s_64 != NULL) && (s_64 != w_64)))
                _fail(w_64);
              else
                s_64 = w_64;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_64), not_null(o_64), not_null(p_64));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_27 = t;
                    int i_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_64), term_x_26);
                        t = table_get_0(t);
                        LocalPopChoice(i_27);
                      }
                    else
                      {
                        t = h_27;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      x_64 = t;
                      l_64 :
                      if(((ATgetType(x_64) == AT_LIST) && ((ATermList) x_64 != ATempty)))
                        {
                          y_64 = ATgetFirst((ATermList) x_64);
                          z_64 = (ATerm) ATgetNext((ATermList) x_64);
                          {
                            if(((t_64 != NULL) && (t_64 != y_64)))
                              _fail(y_64);
                            else
                              t_64 = y_64;
                            {
                              if(((v_64 != NULL) && (v_64 != z_64)))
                                _fail(z_64);
                              else
                                v_64 = z_64;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(s_64), term_x_26, (ATerm) ATinsert(CheckATermList(not_null(v_64)), (ATerm) ATinsert(CheckATermList(not_null(t_64)), not_null(o_64))));
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
        t = g_27;
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
  ATerm f_65 = NULL,g_65 = NULL;
  ATerm j_27;
  j_27 = t;
  {
    ATerm h_65 = NULL;
    ATerm i_65 = NULL;
    t = term_l_27;
    {
      h_65 = t;
      {
        if(((f_65 != NULL) && (f_65 != h_65)))
          _fail(h_65);
        else
          f_65 = h_65;
        {
          t = term_r_16;
          {
            i_65 = t;
            if(((g_65 != NULL) && (g_65 != i_65)))
              _fail(i_65);
            else
              g_65 = i_65;
          }
        }
      }
    }
  }
  t = j_27;
  {
    ATerm m_27;
    m_27 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(f_65)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_27, not_null(g_65)));
      {
        ATerm z_2 (ATerm t)
        {
          t = term_r_14;
          return(t);
        }
        t = assert_1(t, z_2);
      }
    }
    t = m_27;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm o_65 (ATerm t)
    {
      ATerm d_3 (ATerm t)
      {
        t = term_a_13;
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        ATerm f_3 (ATerm t)
        {
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
              {
                ATerm q_27 = t;
                int s_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    LocalPopChoice(s_27);
                  }
                else
                  {
                    t = q_27;
                    {
                      ATerm t_27 = t;
                      int u_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          LocalPopChoice(u_27);
                        }
                      else
                        {
                          t = t_27;
                          t = TranslateStrat_0(t);
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_1(t, f_3);
        {
          t = _all(t, o_65);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, d_3, e_3);
      return(t);
    }
    t = o_65(t);
    {
      ATerm l_3 (ATerm t)
      {
        ATerm m_3 (ATerm t)
        {
          ATerm n_65 = NULL;
          n_65 = t;
          m_65 :
          if(match_cons(n_65, sym_InitCachedTerms_0))
            {
              t = init_cached_terms_0(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = oncetd_1(t, m_3);
        return(t);
      }
      t = try_1(t, l_3);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_65 = NULL;
  ATerm v_27;
  v_27 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm t_65 = NULL,u_65 = NULL;
      t_65 = t;
      r_65 :
      if(match_cons(t_65, sym_Program_1))
        {
          u_65 = ATgetArgument(t_65, 0);
          if(((s_65 != NULL) && (s_65 != u_65)))
            _fail(u_65);
          else
            s_65 = u_65;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, n_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_28), not_null(s_65)), term_w_27));
      {
        t = printnl_0(t);
        {
          t = term_t_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_27;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATempty, term_i_28));
  {
    t = printnl_0(t);
    {
      t = term_t_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL;
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      ATerm j_28 = t;
      if((PushChoice() == 0))
        {
          ATerm q_3 (ATerm t)
          {
            ATerm d_66 = NULL;
            d_66 = t;
            w_65 :
            if(!(match_cons(d_66, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_28;
        }
      return(t);
    }
    t = _2(t, p_3, _id);
    {
      ATerm s_3 (ATerm t)
      {
        ATerm v_3 (ATerm t)
        {
          ATerm e_66 = NULL,f_66 = NULL;
          e_66 = t;
          y_65 :
          if(match_cons(e_66, sym_Runtime_1))
            {
              f_66 = ATgetArgument(e_66, 0);
              if(((c_66 != NULL) && (c_66 != f_66)))
                _fail(f_66);
              else
                c_66 = f_66;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_3);
        return(t);
      }
      t = _2(t, s_3, _id);
      {
        ATerm w_3 (ATerm t)
        {
          ATerm x_3 (ATerm t)
          {
            ATerm g_66 = NULL,h_66 = NULL;
            g_66 = t;
            a_66 :
            if(match_cons(g_66, sym_Program_1))
              {
                h_66 = ATgetArgument(g_66, 0);
                if(((b_66 != NULL) && (b_66 != h_66)))
                  _fail(h_66);
                else
                  b_66 = h_66;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_3);
          return(t);
        }
        t = _2(t, w_3, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_30), not_null(c_66)), term_q_29), not_null(b_66)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, o_3);
  {
    t = term_r_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
  m_66 = t;
  l_66 :
  if(match_cons(m_66, sym__2))
    {
      n_66 = ATgetArgument(m_66, 0);
      o_66 = ATgetArgument(m_66, 1);
      t = SSL_WriteToTextFile(not_null(n_66), not_null(o_66));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm n_50 (ATerm), ATerm o_50 (ATerm))
{
  ATerm w_66 = NULL,x_66 = NULL,z_66 = NULL;
  w_66 = t;
  v_66 :
  if(match_cons(w_66, sym__2))
    {
      x_66 = ATgetArgument(w_66, 0);
      z_66 = ATgetArgument(w_66, 1);
      {
        ATerm e_67 = NULL;
        t = not_null(x_66);
        {
          ATerm g_67 = NULL;
          t = n_50(t);
          {
            e_67 = t;
            {
              t = not_null(z_66);
              {
                t = o_50(t);
                {
                  g_67 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_67), not_null(g_67));
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
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL;
  n_67 = t;
  m_67 :
  if(match_cons(n_67, sym__2))
    {
      o_67 = ATgetArgument(n_67, 0);
      p_67 = ATgetArgument(n_67, 1);
      t = SSL_WriteToBinaryFile(not_null(o_67), not_null(p_67));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_67 = NULL;
  ATerm s_30;
  s_30 = t;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm t_30 = t;
      int u_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_4 (ATerm t)
          {
            ATerm y_67 = NULL,z_67 = NULL;
            y_67 = t;
            u_67 :
            if(match_cons(y_67, sym_Output_1))
              {
                z_67 = ATgetArgument(y_67, 0);
                if(((x_67 != NULL) && (x_67 != z_67)))
                  _fail(z_67);
                else
                  x_67 = z_67;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_4);
          LocalPopChoice(u_30);
        }
      else
        {
          t = t_30;
          {
            ATerm a_68 = NULL;
            t = term_v_30;
            {
              a_68 = t;
              if(((x_67 != NULL) && (x_67 != a_68)))
                _fail(a_68);
              else
                x_67 = a_68;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_4, _id);
  }
  t = s_30;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        t = not_null(x_67);
        return(t);
      }
      t = split_2(t, g_4, _id);
      return(t);
    }
    t = _2(t, _id, f_4);
    {
      ATerm w_30 = t;
      int x_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_4 (ATerm t)
          {
            ATerm i_4 (ATerm t)
            {
              ATerm b_68 = NULL;
              b_68 = t;
              w_67 :
              if(!(match_cons(b_68, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, i_4);
            return(t);
          }
          t = _2(t, h_4, WriteToBinaryFile_0);
          LocalPopChoice(x_30);
        }
      else
        {
          t = w_30;
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
ATerm apply_strategy_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm h_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
  ATerm y_30;
  y_30 = t;
  t = dtime_0(t);
  t = y_30;
  {
    t = h_75(t);
    {
      ATerm z_30;
      z_30 = t;
      {
        ATerm i_68 = NULL;
        t = dtime_0(t);
        {
          i_68 = t;
          if(((h_68 != NULL) && (h_68 != i_68)))
            _fail(i_68);
          else
            h_68 = i_68;
        }
      }
      t = z_30;
      {
        j_68 = t;
        g_68 :
        if(match_cons(j_68, sym__2))
          {
            k_68 = ATgetArgument(j_68, 0);
            l_68 = ATgetArgument(j_68, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_68)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_68))), not_null(l_68));
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
  ATerm r_68 = NULL;
  r_68 = t;
  t = SSL_ReadFromFile(not_null(r_68));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  ATerm w_68 = NULL,y_68 = NULL;
  ATerm a_31;
  a_31 = t;
  {
    ATerm x_68 = NULL;
    t = q_77(t);
    {
      x_68 = t;
      if(((w_68 != NULL) && (w_68 != x_68)))
        _fail(x_68);
      else
        w_68 = x_68;
    }
  }
  t = a_31;
  {
    ATerm z_68 = NULL;
    t = r_77(t);
    {
      z_68 = t;
      if(((y_68 != NULL) && (y_68 != z_68)))
        _fail(z_68);
      else
        y_68 = z_68;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_68), not_null(y_68));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_69 = NULL;
  ATerm b_31;
  b_31 = t;
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 (ATerm t)
        {
          ATerm g_69 = NULL,j_69 = NULL;
          g_69 = t;
          d_69 :
          if(match_cons(g_69, sym_Input_1))
            {
              j_69 = ATgetArgument(g_69, 0);
              if(((f_69 != NULL) && (f_69 != j_69)))
                _fail(j_69);
              else
                f_69 = j_69;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, j_4);
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        {
          ATerm k_69 = NULL;
          t = term_e_31;
          {
            k_69 = t;
            if(((f_69 != NULL) && (f_69 != k_69)))
              _fail(k_69);
            else
              f_69 = k_69;
          }
        }
      }
  }
  t = b_31;
  {
    ATerm q_4 (ATerm t)
    {
      t = not_null(f_69);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_69 = NULL;
  o_69 = t;
  n_69 :
  if(!(match_cons(o_69, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        {
          ATerm h_31 = t;
          int i_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_31);
            }
          else
            {
              t = h_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, r_4);
  t = g_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_69 = NULL;
  q_69 = t;
  t = SSL_table_create(not_null(q_69));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_69 = NULL;
  u_69 = t;
  {
    ATerm j_31;
    j_31 = t;
    {
      t = term_k_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_31, term_l_31, not_null(u_69));
          t = table_put_0(t);
        }
      }
    }
    t = j_31;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL;
  i_70 = t;
  g_70 :
  if(match_string(i_70, "register-usage-info"))
    {
      t = register_usage_1(t, r_0);
    }
  else
    {
      if(((ATgetType(i_70) == AT_LIST) && ((ATermList) i_70 != ATempty)))
        {
          j_70 = ATgetFirst((ATermList) i_70);
          k_70 = (ATerm) ATgetNext((ATermList) i_70);
          h_70 :
          if(((ATgetType(k_70) == AT_LIST) && ((ATermList) k_70 != ATempty)))
            {
              l_70 = ATgetFirst((ATermList) k_70);
              m_70 = (ATerm) ATgetNext((ATermList) k_70);
              {
                ATerm q_70 = NULL;
                ATerm m_31;
                m_31 = t;
                {
                  t = not_null(j_70);
                  t = p_0(t);
                }
                t = m_31;
                {
                  ATerm r_70 = NULL;
                  t = not_null(l_70);
                  {
                    t = q_0(t);
                    {
                      r_70 = t;
                      if(((q_70 != NULL) && (q_70 != r_70)))
                        _fail(r_70);
                      else
                        q_70 = r_70;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_70)), not_null(q_70));
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
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 (ATerm t)
      {
        ATerm g_71 = NULL;
        g_71 = t;
        v_70 :
        if(!(match_string(g_71, "-S")))
          {
            if(!(match_string(g_71, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        t = term_p_31;
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        t = term_q_31;
        return(t);
      }
      t = Option_3(t, s_4, u_4, v_4);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        ATerm x_31 = t;
        int y_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 (ATerm t)
            {
              ATerm h_71 = NULL;
              h_71 = t;
              w_70 :
              if(!(match_string(h_71, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_4 (ATerm t)
            {
              t = term_f_32;
              return(t);
            }
            ATerm y_4 (ATerm t)
            {
              t = term_g_32;
              return(t);
            }
            t = Option_3(t, w_4, x_4, y_4);
            LocalPopChoice(y_31);
          }
        else
          {
            t = x_31;
            {
              ATerm m_32 = t;
              int n_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_4 (ATerm t)
                  {
                    ATerm i_71 = NULL;
                    i_71 = t;
                    x_70 :
                    if(!(match_string(i_71, "-v")))
                      {
                        if(!(match_string(i_71, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm a_5 (ATerm t)
                  {
                    t = term_o_32;
                    return(t);
                  }
                  ATerm b_5 (ATerm t)
                  {
                    t = term_p_32;
                    return(t);
                  }
                  t = Option_3(t, z_4, a_5, b_5);
                  LocalPopChoice(n_32);
                }
              else
                {
                  t = m_32;
                  {
                    ATerm q_32 = t;
                    int r_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_6 (ATerm t)
                        {
                          ATerm j_71 = NULL;
                          j_71 = t;
                          y_70 :
                          if(!(match_string(j_71, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_6 (ATerm t)
                        {
                          ATerm k_71 = NULL;
                          ATerm l_71 = NULL;
                          l_71 = t;
                          if(((k_71 != NULL) && (k_71 != l_71)))
                            _fail(l_71);
                          else
                            k_71 = l_71;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(k_71));
                          return(t);
                        }
                        ATerm n_6 (ATerm t)
                        {
                          t = term_u_32;
                          return(t);
                        }
                        t = ArgOption_3(t, l_6, m_6, n_6);
                        LocalPopChoice(r_32);
                      }
                    else
                      {
                        t = q_32;
                        {
                          ATerm v_32 = t;
                          int w_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_6 (ATerm t)
                              {
                                ATerm m_71 = NULL;
                                m_71 = t;
                                a_71 :
                                if(!(match_string(m_71, "-i")))
                                  {
                                    if(!(match_string(m_71, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm p_6 (ATerm t)
                              {
                                ATerm n_71 = NULL;
                                ATerm o_71 = NULL;
                                o_71 = t;
                                if(((n_71 != NULL) && (n_71 != o_71)))
                                  _fail(o_71);
                                else
                                  n_71 = o_71;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_71));
                                return(t);
                              }
                              ATerm q_6 (ATerm t)
                              {
                                t = term_x_32;
                                return(t);
                              }
                              t = ArgOption_3(t, o_6, p_6, q_6);
                              LocalPopChoice(w_32);
                            }
                          else
                            {
                              t = v_32;
                              {
                                ATerm y_32 = t;
                                int z_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_6 (ATerm t)
                                    {
                                      ATerm p_71 = NULL;
                                      p_71 = t;
                                      c_71 :
                                      if(!(match_string(p_71, "-o")))
                                        {
                                          if(!(match_string(p_71, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm s_6 (ATerm t)
                                    {
                                      ATerm q_71 = NULL;
                                      ATerm r_71 = NULL;
                                      r_71 = t;
                                      if(((q_71 != NULL) && (q_71 != r_71)))
                                        _fail(r_71);
                                      else
                                        q_71 = r_71;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_71));
                                      return(t);
                                    }
                                    ATerm t_6 (ATerm t)
                                    {
                                      t = term_c_33;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, r_6, s_6, t_6);
                                    LocalPopChoice(z_32);
                                  }
                                else
                                  {
                                    t = y_32;
                                    {
                                      ATerm d_33 = t;
                                      int e_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_6 (ATerm t)
                                          {
                                            ATerm s_71 = NULL;
                                            s_71 = t;
                                            e_71 :
                                            if(!(match_string(s_71, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm x_6 (ATerm t)
                                          {
                                            t = term_f_33;
                                            return(t);
                                          }
                                          ATerm y_6 (ATerm t)
                                          {
                                            t = term_g_33;
                                            return(t);
                                          }
                                          t = Option_3(t, w_6, x_6, y_6);
                                          LocalPopChoice(e_33);
                                        }
                                      else
                                        {
                                          t = d_33;
                                          {
                                            ATerm z_6 (ATerm t)
                                            {
                                              ATerm t_71 = NULL;
                                              t_71 = t;
                                              f_71 :
                                              if(!(match_string(t_71, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm j_7 (ATerm t)
                                            {
                                              t = term_h_33;
                                              return(t);
                                            }
                                            ATerm k_7 (ATerm t)
                                            {
                                              t = term_k_33;
                                              return(t);
                                            }
                                            t = Option_3(t, z_6, j_7, k_7);
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
  ATerm y_71 = NULL;
  y_71 = t;
  t = SSL_table_destroy(not_null(y_71));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_72 = NULL;
  ATerm f_72 (ATerm t)
  {
    t = SSL_exit(not_null(d_72));
    return(t);
  }
  d_72 = t;
  c_72 :
  if(match_cons(d_72, sym_exit_0))
    {
      ATerm l_33 = t;
      int m_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_72(t);
          LocalPopChoice(m_33);
        }
      else
        {
          t = l_33;
          {
          }
        }
    }
  else
    {
      t = f_72(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_72 = NULL;
  h_72 = t;
  t = SSL_implode_string(not_null(h_72));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_84 (ATerm))
{
  ATerm k_72 (ATerm t)
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_72);
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        {
          t = Nil_0(t);
          t = w_84(t);
        }
      }
    return(t);
  }
  t = k_72(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      {
        ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL;
        n_72 = t;
        m_72 :
        if(((ATgetType(n_72) == AT_LIST) && ((ATermList) n_72 != ATempty)))
          {
            o_72 = ATgetFirst((ATermList) n_72);
            p_72 = (ATerm) ATgetNext((ATermList) n_72);
            {
              t = not_null(o_72);
              {
                ATerm l_7 (ATerm t)
                {
                  t = not_null(p_72);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_7);
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
  ATerm v_72 = NULL;
  v_72 = t;
  t = SSL_explode_string(not_null(v_72));
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
ATerm long_description_1 (ATerm t, ATerm n_73 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_84 (ATerm))
{
  ATerm y_72 (ATerm t)
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        t = Cons_2(t, i_84, y_72);
      }
    return(t);
  }
  t = y_72(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
  h_73 = t;
  e_73 :
  if(((ATgetType(h_73) == AT_LIST) && ((ATermList) h_73 != ATempty)))
    {
      f_73 = ATgetFirst((ATermList) h_73);
      g_73 = (ATerm) ATgetNext((ATermList) h_73);
      {
        ATerm k_73 = NULL;
        t = not_null(g_73);
        {
          ATerm t_33;
          t_33 = t;
          {
            ATerm l_73 = NULL,t_73 = NULL,x_73 = NULL;
            ATerm u_33;
            u_33 = t;
            {
              ATerm s_73 = NULL;
              t = o_0(t);
              {
                s_73 = t;
                if(((l_73 != NULL) && (l_73 != s_73)))
                  _fail(s_73);
                else
                  l_73 = s_73;
              }
            }
            t = u_33;
            {
              ATerm u_73 = NULL;
              t = not_null(f_73);
              {
                t = n_0(t);
                {
                  u_73 = t;
                  if(((t_73 != NULL) && (t_73 != u_73)))
                    _fail(u_73);
                  else
                    t_73 = u_73;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_73)), not_null(t_73));
                {
                  x_73 = t;
                  if(((k_73 != NULL) && (k_73 != x_73)))
                    _fail(x_73);
                  else
                    k_73 = x_73;
                }
              }
            }
          }
          t = t_33;
          {
            ATerm p_7 (ATerm t)
            {
              t = not_null(k_73);
              return(t);
            }
            t = reverse_acc_2(t, n_0, p_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) h_73 == ATempty))
        {
          {
            t = term_t_24;
            t = o_0(t);
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
  ATerm r_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_73 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm i_74 = NULL,j_74 = NULL;
  i_74 = t;
  f_74 :
  if(match_cons(i_74, sym_Program_1))
    {
      j_74 = ATgetArgument(i_74, 0);
      {
        ATerm m_74 = NULL;
        t = not_null(j_74);
        {
          t = f_63(t);
          {
            m_74 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_74));
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
  ATerm z_74 = NULL;
  ATerm s_7 (ATerm t)
  {
    ATerm t_7 (ATerm t)
    {
      ATerm a_75 = NULL;
      a_75 = t;
      if(((z_74 != NULL) && (z_74 != a_75)))
        _fail(a_75);
      else
        z_74 = a_75;
      return(t);
    }
    t = Program_1(t, t_7);
    return(t);
  }
  t = option_defined_1(t, s_7);
  {
    ATerm u_7 (ATerm t)
    {
      ATerm b_75 = NULL;
      ATerm c_75 = NULL;
      t = term_t_24;
      {
        ATerm z_7 (ATerm t)
        {
          t = not_null(z_74);
          return(t);
        }
        t = short_description_1(t, z_7);
        {
          t = concat_strings_0(t);
          {
            c_75 = t;
            if(((b_75 != NULL) && (b_75 != c_75)))
              _fail(c_75);
            else
              b_75 = c_75;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATempty, not_null(b_75)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, u_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATempty, term_v_33));
      {
        t = printnl_0(t);
        {
          t = term_y_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_8 (ATerm t)
                {
                  ATerm d_75 = NULL;
                  d_75 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_75)), term_b_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_8);
                {
                  ATerm d_8 (ATerm t)
                  {
                    ATerm f_75 = NULL;
                    ATerm i_75 = NULL;
                    t = term_t_24;
                    {
                      ATerm e_8 (ATerm t)
                      {
                        t = not_null(z_74);
                        return(t);
                      }
                      t = long_description_1(t, e_8);
                      {
                        t = concat_strings_0(t);
                        {
                          i_75 = t;
                          if(((f_75 != NULL) && (f_75 != i_75)))
                            _fail(i_75);
                          else
                            f_75 = i_75;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_75)), term_c_34));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, d_8);
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
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
  p_75 = t;
  o_75 :
  if(match_cons(p_75, sym__2))
    {
      q_75 = ATgetArgument(p_75, 0);
      r_75 = ATgetArgument(p_75, 1);
      {
        ATerm d_34;
        d_34 = t;
        t = SSL_printnl(not_null(q_75), not_null(r_75));
        t = d_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm z_75 = NULL,a_76 = NULL;
  z_75 = t;
  y_75 :
  if(match_cons(z_75, sym_Undefined_1))
    {
      a_76 = ATgetArgument(z_75, 0);
      {
        ATerm c_76 = NULL;
        t = not_null(a_76);
        {
          t = g_63(t);
          {
            c_76 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_76));
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
ATerm fetch_1 (ATerm t, ATerm q_84 (ATerm))
{
  ATerm g_76 (ATerm t)
  {
    ATerm e_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_84, _id);
        LocalPopChoice(k_34);
      }
    else
      {
        t = e_34;
        t = Cons_2(t, _id, g_76);
      }
    return(t);
  }
  t = g_76(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_74 (ATerm))
{
  t = fetch_1(t, l_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_76 = NULL;
  i_76 = t;
  h_76 :
  if(!(match_cons(i_76, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_91 (ATerm))
{
  ATerm l_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_91(t);
      LocalPopChoice(n_34);
    }
  else
    {
      t = l_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL;
  l_76 = t;
  k_76 :
  if(match_cons(l_76, sym__2))
    {
      m_76 = ATgetArgument(l_76, 0);
      n_76 = ATgetArgument(l_76, 1);
      t = SSL_table_get(not_null(m_76), not_null(n_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL;
  x_76 = t;
  w_76 :
  if(match_cons(x_76, sym__3))
    {
      y_76 = ATgetArgument(x_76, 0);
      z_76 = ATgetArgument(x_76, 1);
      a_77 = ATgetArgument(x_76, 2);
      {
        ATerm o_34;
        o_34 = t;
        {
          ATerm f_77 = NULL;
          ATerm g_77 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_76), not_null(z_76));
          {
            ATerm p_34 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_35);
              }
            else
              {
                t = p_34;
                t = (ATerm) ATempty;
              }
            {
              g_77 = t;
              if(((f_77 != NULL) && (f_77 != g_77)))
                _fail(g_77);
              else
                f_77 = g_77;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_76), not_null(z_76), (ATerm) ATinsert(CheckATermList(not_null(f_77)), not_null(a_77)));
            t = table_put_0(t);
          }
        }
        t = o_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_73 (ATerm))
{
  ATerm k_77 = NULL;
  ATerm l_77 = NULL;
  t = term_t_24;
  {
    t = r_73(t);
    {
      l_77 = t;
      if(((k_77 != NULL) && (k_77 != l_77)))
        _fail(l_77);
      else
        k_77 = l_77;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_33, term_x_33, not_null(k_77));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL;
  t_77 = t;
  s_77 :
  if(match_string(t_77, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(t_77) == AT_LIST) && ((ATermList) t_77 != ATempty)))
        {
          u_77 = ATgetFirst((ATermList) t_77);
          v_77 = (ATerm) ATgetNext((ATermList) t_77);
          {
            ATerm y_77 = NULL;
            ATerm d_35;
            d_35 = t;
            {
              t = not_null(u_77);
              t = c_0(t);
            }
            t = d_35;
            {
              ATerm z_77 = NULL;
              t = term_t_24;
              {
                t = f_0(t);
                {
                  z_77 = t;
                  if(((y_77 != NULL) && (y_77 != z_77)))
                    _fail(z_77);
                  else
                    y_77 = z_77;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_77)), not_null(y_77));
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
  ATerm f_8 (ATerm t)
  {
    ATerm e_78 = NULL;
    e_78 = t;
    d_78 :
    if(!(match_string(e_78, "--help")))
      {
        if(!(match_string(e_78, "-h")))
          {
            if(!(match_string(e_78, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    t = term_g_35;
    return(t);
  }
  ATerm m_8 (ATerm t)
  {
    t = term_h_35;
    return(t);
  }
  t = Option_3(t, f_8, j_8, m_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
  h_78 = t;
  g_78 :
  if(((ATgetType(h_78) == AT_LIST) && ((ATermList) h_78 != ATempty)))
    {
      i_78 = ATgetFirst((ATermList) h_78);
      j_78 = (ATerm) ATgetNext((ATermList) h_78);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_78)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_78)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_69 (ATerm), ATerm i_69 (ATerm))
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
  r_78 = t;
  q_78 :
  if(((ATgetType(r_78) == AT_LIST) && ((ATermList) r_78 != ATempty)))
    {
      s_78 = ATgetFirst((ATermList) r_78);
      t_78 = (ATerm) ATgetNext((ATermList) r_78);
      {
        ATerm w_78 = NULL;
        t = not_null(s_78);
        {
          ATerm y_78 = NULL;
          t = h_69(t);
          {
            w_78 = t;
            {
              t = not_null(t_78);
              {
                t = i_69(t);
                {
                  y_78 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_78)), not_null(w_78));
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
  ATerm h_79 = NULL;
  h_79 = t;
  d_79 :
  if(((ATermList) h_79 == ATempty))
    {
      {
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm k_35;
  k_35 = t;
  {
    ATerm n_8 (ATerm t)
    {
      t = term_l_35;
      t = p_73(t);
      return(t);
    }
    t = try_1(t, n_8);
  }
  t = k_35;
  {
    ATerm v_8 (ATerm t)
    {
      ATerm j_79 = NULL;
      j_79 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_79));
      return(t);
    }
    ATerm w_8 (ATerm t)
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
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
              {
                t = p_73(t);
                t = Cons_2(t, _id, w_8);
              }
            }
          LocalPopChoice(p_35);
        }
      else
        {
          t = o_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_8, w_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL;
  ATerm s_35;
  s_35 = t;
  {
    ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL;
    u_79 = t;
    o_79 :
    if(match_cons(u_79, sym__3))
      {
        v_79 = ATgetArgument(u_79, 0);
        w_79 = ATgetArgument(u_79, 1);
        x_79 = ATgetArgument(u_79, 2);
        {
          if(((p_79 != NULL) && (p_79 != v_79)))
            _fail(v_79);
          else
            p_79 = v_79;
          {
            if(((q_79 != NULL) && (q_79 != w_79)))
              _fail(w_79);
            else
              q_79 = w_79;
            {
              if(((r_79 != NULL) && (r_79 != x_79)))
                _fail(x_79);
              else
                r_79 = x_79;
              t = SSL_table_put(not_null(p_79), not_null(q_79), not_null(r_79));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm a_80 = NULL;
  ATerm t_35;
  t_35 = t;
  {
    t = term_u_35;
    t = table_put_0(t);
  }
  t = t_35;
  {
    ATerm y_8 (ATerm t)
    {
      ATerm v_35 = t;
      int w_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_73(t);
          LocalPopChoice(w_35);
        }
      else
        {
          t = v_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, y_8);
    {
      ATerm z_8 (ATerm t)
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_r_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
            {
              ATerm f_9 (ATerm t)
              {
                ATerm g_9 (ATerm t)
                {
                  ATerm b_80 = NULL;
                  b_80 = t;
                  if(((a_80 != NULL) && (a_80 != b_80)))
                    _fail(b_80);
                  else
                    a_80 = b_80;
                  return(t);
                }
                t = Undefined_1(t, g_9);
                return(t);
              }
              t = option_defined_1(t, f_9);
              {
                ATerm z_35;
                z_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_80)), term_a_36));
                  t = printnl_0(t);
                }
                t = z_35;
                {
                  t = system_usage_0(t);
                  {
                    t = term_t_17;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, z_8);
      {
        ATerm b_36;
        b_36 = t;
        {
          t = term_w_33;
          t = table_destroy_0(t);
        }
        t = b_36;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_74 (ATerm), ATerm w_74 (ATerm), ATerm x_74 (ATerm))
{
  ATerm h_9 (ATerm t)
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_74(t);
        LocalPopChoice(f_36);
      }
    else
      {
        t = e_36;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, h_9);
  {
    t = store_options_0(t);
    {
      ATerm g_36 = t;
      int m_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, x_74);
          LocalPopChoice(m_36);
        }
      else
        {
          t = g_36;
          {
            ATerm o_36 = t;
            int p_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, v_74);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(p_36);
              }
            else
              {
                t = o_36;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  t = iowrap_3(t, q_74, r_74, default_usage_0);
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
