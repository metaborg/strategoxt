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
ATerm term_u_36;
ATerm term_m_36;
ATerm term_f_36;
ATerm term_d_36;
ATerm term_a_36;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_f_30;
ATerm term_t_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_s_28;
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
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_b_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_t_21;
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
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_z_9;
ATerm term_v_9;
void init_constant_terms (void)
{
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_s_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Id_1, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_11, (ATerm) ATempty);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Id_1, term_p_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_12, (ATerm) ATempty);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_m_12, term_n_12);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Id_1, term_i_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Id_1, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Id_1, term_n_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Id_1, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_IntConst_1, term_x_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Id_1, term_d_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Id_1, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Id_1, term_j_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Id_1, term_p_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Id_1, term_v_17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_1, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_16, term_i_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Id_1, term_y_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Id_1, term_f_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Id_1, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Id_1, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Id_1, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Id_1, term_o_14);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Id_1, term_s_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Id_1, term_v_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Id_1, term_x_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_20, (ATerm) ATempty);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_20, term_n_12);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Id_1, term_e_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_1, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Id_1, term_k_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Id_1, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Id_1, term_t_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_w_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_20, (ATerm) ATempty);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_21, term_n_12);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Id_1, term_e_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Id_1, term_g_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_21, (ATerm) ATempty);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_21, term_n_12);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Id_1, term_m_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_21, (ATerm) ATempty);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_t_21, term_n_12);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_w_19);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Id_1, term_y_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_21, (ATerm) ATempty);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Equal_2, term_a_22, term_c_17);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Id_1, term_g_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATempty);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, term_w_19);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_m_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Id_1, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_22, (ATerm) ATempty);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Equal_2, term_q_22, term_c_17);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_23, (ATerm) ATempty);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Id_1, term_r_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_s_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Id_1, term_u_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_r_19);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Return_1, term_w_19);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Id_1, term_y_25);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_19, term_n_12);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_m_12, term_e_26);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Id_1, term_l_26);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Id_1, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_11, (ATerm) ATempty);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_p_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Id_1, term_r_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_m_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_27, (ATerm) ATempty);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Include_1, term_r_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <ssl/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Include_1, term_t_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_v_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_27, (ATerm) ATempty);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Some_1, term_y_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_z_11, term_z_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Op_2, term_s_28, (ATerm) ATempty);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_l_35);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym__3, term_i_35, term_l_35, (ATerm) ATempty);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ArgOption_2 (ATerm, ATerm b_74 (ATerm), ATerm c_74 (ATerm));
ATerm debug_1 (ATerm, ATerm o_75 (ATerm));
ATerm Option_2 (ATerm, ATerm q_73 (ATerm), ATerm r_73 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm s_88 (ATerm));
ATerm Stat_1 (ATerm, ATerm g_61 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm j_90 (ATerm), ATerm k_90 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_90 (ATerm));
ATerm new_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm c_87 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm a_87 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm y_0 (ATerm), ATerm b_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm o_79 (ATerm));
ATerm Var_1 (ATerm, ATerm t_66 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm p_64 (ATerm));
ATerm Real_1 (ATerm, ATerm u_0 (ATerm));
ATerm Str_1 (ATerm, ATerm t_0 (ATerm));
ATerm Int_1 (ATerm, ATerm s_0 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm x_60 (ATerm));
ATerm FunCall_2 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm));
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
ATerm quote_1 (ATerm, ATerm y_76 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm z_69 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm r_0 (ATerm));
ATerm escape_1 (ATerm, ATerm l_76 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm u_69 (ATerm));
ATerm restore_always_2 (ATerm, ATerm t_91 (ATerm), ATerm u_91 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm t_69 (ATerm));
ATerm scope_2 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm));
ATerm assert_1 (ATerm, ATerm x_69 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm i_50 (ATerm), ATerm j_50 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_75 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_84 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_73 (ATerm));
ATerm map_1 (ATerm, ATerm e_84 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_73 (ATerm));
ATerm Program_1 (ATerm, ATerm a_63 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_63 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_84 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_74 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_91 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_73 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm h_0 (ATerm), ATerm l_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_69 (ATerm), ATerm d_69 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_73 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_73 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm s_74 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_74 (ATerm), ATerm m_74 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_2 (ATerm t, ATerm b_74 (ATerm), ATerm c_74 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = term_v_9;
    return(t);
  }
  t = ArgOption_3(t, b_74, c_74, a_0);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm x_9;
  x_9 = t;
  {
    ATerm t_2 = NULL,v_2 = NULL;
    ATerm y_9;
    y_9 = t;
    {
      ATerm u_2 = NULL;
      t = o_75(t);
      {
        u_2 = t;
        if(((t_2 != NULL) && (t_2 != u_2)))
          _fail(u_2);
        else
          t_2 = u_2;
      }
    }
    t = y_9;
    {
      ATerm w_2 = NULL;
      w_2 = t;
      if(((v_2 != NULL) && (v_2 != w_2)))
        _fail(w_2);
      else
        v_2 = w_2;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_2)), not_null(t_2)));
        t = printnl_0(t);
      }
    }
  }
  t = x_9;
  return(t);
}
ATerm Option_2 (ATerm t, ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  ATerm d_0 (ATerm t)
  {
    t = term_v_9;
    return(t);
  }
  t = Option_3(t, q_73, r_73, d_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm a_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        ATerm c_3 = NULL;
        c_3 = t;
        z_2 :
        if(!(match_string(c_3, "--trace-all")))
          _fail(t);
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        t = term_g_10;
        {
          ATerm x_0 (ATerm t)
          {
            t = term_j_10;
            return(t);
          }
          t = debug_1(t, x_0);
          {
            ATerm k_10;
            k_10 = t;
            {
              t = term_t_10;
              {
                ATerm z_0 (ATerm t)
                {
                  t = term_b_11;
                  return(t);
                }
                t = assert_1(t, z_0);
              }
            }
            t = k_10;
          }
        }
        return(t);
      }
      t = Option_2(t, v_0, w_0);
      LocalPopChoice(f_10);
    }
  else
    {
      t = a_10;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm d_3 = NULL;
          d_3 = t;
          a_3 :
          if(!(match_string(d_3, "-t")))
            _fail(t);
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          ATerm e_3 = NULL;
          e_3 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(e_3)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_11, not_null(e_3)));
            {
              ATerm d_1 (ATerm t)
              {
                t = term_e_11;
                return(t);
              }
              t = assert_1(t, d_1);
            }
            t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(e_3));
          }
          return(t);
        }
        t = ArgOption_2(t, a_1, c_1);
      }
    }
  return(t);
}
ATerm InitTermId_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  j_3 = t;
  i_3 :
  if(match_cons(j_3, sym__3))
    {
      k_3 = ATgetArgument(j_3, 0);
      l_3 = ATgetArgument(j_3, 1);
      m_3 = ATgetArgument(j_3, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_3))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_3)), term_f_11, not_null(m_3))));
    }
  else
    _fail(t);
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm t_3 = NULL;
  ATerm v_3 = NULL;
  t_3 = t;
  {
    ATerm w_3 = NULL;
    t = not_null(t_3);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          t = reverse_0(t);
          {
            w_3 = t;
            if(((v_3 != NULL) && (v_3 != w_3)))
              _fail(w_3);
            else
              v_3 = w_3;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_o_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_z_11, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_o_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(v_3)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym__3))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      e_4 = ATgetArgument(b_4, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_4)), term_n_12)));
    }
  else
    _fail(t);
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm m_4 = NULL;
  ATerm o_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = o_12;
      t = (ATerm) ATempty;
    }
  {
    ATerm n_4 = NULL,p_4 = NULL,r_4 = NULL;
    ATerm r_12;
    r_12 = t;
    {
      ATerm o_4 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        o_4 = t;
        if(((n_4 != NULL) && (n_4 != o_4)))
          _fail(o_4);
        else
          n_4 = o_4;
      }
    }
    t = r_12;
    {
      ATerm q_4 = NULL;
      t = InitTermIds_0(t);
      {
        q_4 = t;
        if(((p_4 != NULL) && (p_4 != q_4)))
          _fail(q_4);
        else
          p_4 = q_4;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), (ATerm) ATinsert(ATempty, not_null(p_4)));
        {
          t = conc_0(t);
          {
            r_4 = t;
            if(((m_4 != NULL) && (m_4 != r_4)))
              _fail(r_4);
            else
              m_4 = r_4;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(m_4));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm s_88 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm v_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_88(t);
        LocalPopChoice(x_12);
      }
    else
      {
        t = v_12;
        t = _one(t, v_4);
      }
    return(t);
  }
  t = v_4(t);
  return(t);
}
ATerm Stat_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm z_4 = NULL,a_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym_Stat_1))
    {
      a_5 = ATgetArgument(z_4, 0);
      {
        ATerm c_5 = NULL;
        t = not_null(a_5);
        {
          t = g_61(t);
          {
            c_5 = t;
            t = (ATerm) ATmakeAppl(sym_Stat_1, not_null(c_5));
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
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
  ATerm i_9 (ATerm t)
  {
    t = not_null(q_7);
    t = Stat_1(t, _id);
    t = (ATerm) ATmakeAppl(sym_IfElse_3, not_null(a_8), not_null(q_7), not_null(u_7));
    return(t);
  }
  ATerm j_9 (ATerm t)
  {
    t = not_null(s_7);
    t = Stat_1(t, _id);
    t = (ATerm) ATmakeAppl(sym_IfElse_3, not_null(a_8), not_null(b_8), not_null(s_7));
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(a_8)), not_null(u_7));
    return(t);
  }
  ATerm l_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(a_8), not_null(b_8));
    return(t);
  }
  ATerm m_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_7), not_null(b_8));
    t = conc_0(t);
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    ATerm x_8 = NULL;
    ATerm y_8 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), not_null(d_8));
    {
      t = conc_0(t);
      {
        y_8 = t;
        if(((x_8 != NULL) && (x_8 != y_8)))
          _fail(y_8);
        else
          x_8 = y_8;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(x_8), not_null(e_8));
    return(t);
  }
  ATerm o_9 (ATerm t)
  {
    ATerm d_9 = NULL,f_9 = NULL;
    ATerm y_12;
    y_12 = t;
    {
      ATerm e_9 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), not_null(d_8));
      {
        t = conc_0(t);
        {
          e_9 = t;
          if(((d_9 != NULL) && (d_9 != e_9)))
            _fail(e_9);
          else
            d_9 = e_9;
        }
      }
    }
    t = y_12;
    {
      ATerm g_9 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), not_null(f_8));
      {
        t = conc_0(t);
        {
          g_9 = t;
          if(((f_9 != NULL) && (f_9 != g_9)))
            _fail(g_9);
          else
            f_9 = g_9;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(d_9), not_null(f_9));
    }
    return(t);
  }
  z_7 = t;
  r_5 :
  if(match_cons(z_7, sym_If_2))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      s_5 :
      if(match_cons(b_8, sym_Compound_2))
        {
          c_8 = ATgetArgument(b_8, 0);
          f_8 = ATgetArgument(b_8, 1);
          t_5 :
          if(((ATermList) c_8 == ATempty))
            {
              u_5 :
              if(((ATgetType(f_8) == AT_LIST) && ((ATermList) f_8 != ATempty)))
                {
                  q_7 = ATgetFirst((ATermList) f_8);
                  r_7 = (ATerm) ATgetNext((ATermList) f_8);
                  v_5 :
                  if(((ATermList) r_7 == ATempty))
                    {
                      {
                        t = not_null(q_7);
                        t = Stat_1(t, _id);
                        t = (ATerm) ATmakeAppl(sym_If_2, not_null(a_8), not_null(q_7));
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
      if(match_cons(z_7, sym_IfElse_3))
        {
          a_8 = ATgetArgument(z_7, 0);
          b_8 = ATgetArgument(z_7, 1);
          u_7 = ATgetArgument(z_7, 2);
          w_5 :
          if(match_cons(u_7, sym_Compound_2))
            {
              v_7 = ATgetArgument(u_7, 0);
              w_7 = ATgetArgument(u_7, 1);
              x_5 :
              if(((ATgetType(w_7) == AT_LIST) && ((ATermList) w_7 != ATempty)))
                {
                  s_7 = ATgetFirst((ATermList) w_7);
                  t_7 = (ATerm) ATgetNext((ATermList) w_7);
                  y_5 :
                  if(((ATermList) t_7 == ATempty))
                    {
                      z_5 :
                      if(((ATermList) v_7 == ATempty))
                        {
                          a_6 :
                          if(match_cons(b_8, sym_Compound_2))
                            {
                              c_8 = ATgetArgument(b_8, 0);
                              f_8 = ATgetArgument(b_8, 1);
                              b_6 :
                              if(((ATgetType(f_8) == AT_LIST) && ((ATermList) f_8 != ATempty)))
                                {
                                  q_7 = ATgetFirst((ATermList) f_8);
                                  r_7 = (ATerm) ATgetNext((ATermList) f_8);
                                  c_6 :
                                  if(((ATermList) r_7 == ATempty))
                                    {
                                      d_6 :
                                      if(((ATermList) c_8 == ATempty))
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
                                        t = j_9(t);
                                    }
                                  else
                                    {
                                      e_6 :
                                      t = j_9(t);
                                    }
                                }
                              else
                                {
                                  if(((ATermList) f_8 == ATempty))
                                    {
                                      f_6 :
                                      if(((ATermList) c_8 == ATempty))
                                        {
                                          {
                                            ATerm b_13 = t;
                                            int c_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = j_9(t);
                                                LocalPopChoice(c_13);
                                              }
                                            else
                                              {
                                                t = b_13;
                                                t = k_9(t);
                                              }
                                          }
                                        }
                                      else
                                        t = j_9(t);
                                    }
                                  else
                                    {
                                      g_6 :
                                      t = j_9(t);
                                    }
                                }
                            }
                          else
                            t = j_9(t);
                        }
                      else
                        {
                          h_6 :
                          if(match_cons(b_8, sym_Compound_2))
                            {
                              c_8 = ATgetArgument(b_8, 0);
                              f_8 = ATgetArgument(b_8, 1);
                              i_6 :
                              if(((ATermList) c_8 == ATempty))
                                {
                                  j_6 :
                                  if(((ATgetType(f_8) == AT_LIST) && ((ATermList) f_8 != ATempty)))
                                    {
                                      q_7 = ATgetFirst((ATermList) f_8);
                                      r_7 = (ATerm) ATgetNext((ATermList) f_8);
                                      k_6 :
                                      if(((ATermList) r_7 == ATempty))
                                        {
                                          t = i_9(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(((ATermList) f_8 == ATempty))
                                        {
                                          t = k_9(t);
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
                      l_6 :
                      m_6 :
                      if(match_cons(b_8, sym_Compound_2))
                        {
                          c_8 = ATgetArgument(b_8, 0);
                          f_8 = ATgetArgument(b_8, 1);
                          n_6 :
                          if(((ATermList) c_8 == ATempty))
                            {
                              o_6 :
                              if(((ATgetType(f_8) == AT_LIST) && ((ATermList) f_8 != ATempty)))
                                {
                                  q_7 = ATgetFirst((ATermList) f_8);
                                  r_7 = (ATerm) ATgetNext((ATermList) f_8);
                                  p_6 :
                                  if(((ATermList) r_7 == ATempty))
                                    {
                                      t = i_9(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(((ATermList) f_8 == ATempty))
                                    {
                                      t = k_9(t);
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
                  if(((ATermList) w_7 == ATempty))
                    {
                      q_6 :
                      if(((ATermList) v_7 == ATempty))
                        {
                          r_6 :
                          if(match_cons(b_8, sym_Compound_2))
                            {
                              c_8 = ATgetArgument(b_8, 0);
                              f_8 = ATgetArgument(b_8, 1);
                              s_6 :
                              if(((ATgetType(f_8) == AT_LIST) && ((ATermList) f_8 != ATempty)))
                                {
                                  q_7 = ATgetFirst((ATermList) f_8);
                                  r_7 = (ATerm) ATgetNext((ATermList) f_8);
                                  t_6 :
                                  if(((ATermList) r_7 == ATempty))
                                    {
                                      u_6 :
                                      if(((ATermList) c_8 == ATempty))
                                        {
                                          {
                                            ATerm i_13 = t;
                                            int n_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = i_9(t);
                                                LocalPopChoice(n_13);
                                              }
                                            else
                                              {
                                                t = i_13;
                                                t = l_9(t);
                                              }
                                          }
                                        }
                                      else
                                        t = l_9(t);
                                    }
                                  else
                                    {
                                      v_6 :
                                      t = l_9(t);
                                    }
                                }
                              else
                                {
                                  if(((ATermList) f_8 == ATempty))
                                    {
                                      w_6 :
                                      if(((ATermList) c_8 == ATempty))
                                        {
                                          {
                                            ATerm v_13 = t;
                                            int w_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = k_9(t);
                                                LocalPopChoice(w_13);
                                              }
                                            else
                                              {
                                                t = v_13;
                                                t = l_9(t);
                                              }
                                          }
                                        }
                                      else
                                        t = l_9(t);
                                    }
                                  else
                                    {
                                      x_6 :
                                      t = l_9(t);
                                    }
                                }
                            }
                          else
                            t = l_9(t);
                        }
                      else
                        {
                          y_6 :
                          if(match_cons(b_8, sym_Compound_2))
                            {
                              c_8 = ATgetArgument(b_8, 0);
                              f_8 = ATgetArgument(b_8, 1);
                              z_6 :
                              if(((ATermList) c_8 == ATempty))
                                {
                                  a_7 :
                                  if(((ATgetType(f_8) == AT_LIST) && ((ATermList) f_8 != ATempty)))
                                    {
                                      q_7 = ATgetFirst((ATermList) f_8);
                                      r_7 = (ATerm) ATgetNext((ATermList) f_8);
                                      b_7 :
                                      if(((ATermList) r_7 == ATempty))
                                        {
                                          t = i_9(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(((ATermList) f_8 == ATempty))
                                        {
                                          t = k_9(t);
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
                      c_7 :
                      d_7 :
                      if(match_cons(b_8, sym_Compound_2))
                        {
                          c_8 = ATgetArgument(b_8, 0);
                          f_8 = ATgetArgument(b_8, 1);
                          e_7 :
                          if(((ATermList) c_8 == ATempty))
                            {
                              f_7 :
                              if(((ATgetType(f_8) == AT_LIST) && ((ATermList) f_8 != ATempty)))
                                {
                                  q_7 = ATgetFirst((ATermList) f_8);
                                  r_7 = (ATerm) ATgetNext((ATermList) f_8);
                                  g_7 :
                                  if(((ATermList) r_7 == ATempty))
                                    {
                                      t = i_9(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(((ATermList) f_8 == ATempty))
                                    {
                                      t = k_9(t);
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
              h_7 :
              if(match_cons(b_8, sym_Compound_2))
                {
                  c_8 = ATgetArgument(b_8, 0);
                  f_8 = ATgetArgument(b_8, 1);
                  i_7 :
                  if(((ATermList) c_8 == ATempty))
                    {
                      j_7 :
                      if(((ATgetType(f_8) == AT_LIST) && ((ATermList) f_8 != ATempty)))
                        {
                          q_7 = ATgetFirst((ATermList) f_8);
                          r_7 = (ATerm) ATgetNext((ATermList) f_8);
                          k_7 :
                          if(((ATermList) r_7 == ATempty))
                            {
                              t = i_9(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(((ATermList) f_8 == ATempty))
                            {
                              t = k_9(t);
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
          if(((ATgetType(z_7) == AT_LIST) && ((ATermList) z_7 != ATempty)))
            {
              a_8 = ATgetFirst((ATermList) z_7);
              b_8 = (ATerm) ATgetNext((ATermList) z_7);
              l_7 :
              if(match_cons(a_8, sym_Compound_2))
                {
                  x_7 = ATgetArgument(a_8, 0);
                  y_7 = ATgetArgument(a_8, 1);
                  m_7 :
                  if(((ATermList) x_7 == ATempty))
                    {
                      t = m_9(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(z_7, sym_Compound_2))
                {
                  a_8 = ATgetArgument(z_7, 0);
                  b_8 = ATgetArgument(z_7, 1);
                  n_7 :
                  if(((ATgetType(b_8) == AT_LIST) && ((ATermList) b_8 != ATempty)))
                    {
                      c_8 = ATgetFirst((ATermList) b_8);
                      f_8 = (ATerm) ATgetNext((ATermList) b_8);
                      o_7 :
                      if(match_cons(c_8, sym_Compound_2))
                        {
                          d_8 = ATgetArgument(c_8, 0);
                          e_8 = ATgetArgument(c_8, 1);
                          p_7 :
                          if(((ATermList) f_8 == ATempty))
                            {
                              {
                                ATerm x_13 = t;
                                int y_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_9(t);
                                    LocalPopChoice(y_13);
                                  }
                                else
                                  {
                                    t = x_13;
                                    t = o_9(t);
                                  }
                              }
                            }
                          else
                            t = o_9(t);
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
ATerm repeat_2 (ATerm t, ATerm j_90 (ATerm), ATerm k_90 (ATerm))
{
  ATerm s_9 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_90(t);
        t = s_9(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = k_90(t);
      }
    return(t);
  }
  t = s_9(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm m_90 (ATerm))
{
  t = repeat_2(t, m_90, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm t_9 (ATerm t)
  {
    t = _all(t, t_9);
    t = c_87(t);
    return(t);
  }
  t = t_9(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      ATerm h_14 = t;
      int l_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          LocalPopChoice(l_14);
        }
      else
        {
          t = h_14;
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
ATerm topdown_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm u_9 (ATerm t)
  {
    t = a_87(t);
    t = _all(t, u_9);
    return(t);
  }
  t = u_9(t);
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  t = SSL_real_to_string(not_null(w_9));
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym__2))
    {
      d_10 = ATgetArgument(c_10, 0);
      e_10 = ATgetArgument(c_10, 1);
      {
        ATerm h_10 = NULL;
        ATerm i_10 = NULL;
        t = new_0(t);
        {
          i_10 = t;
          if(((h_10 != NULL) && (h_10 != i_10)))
            _fail(i_10);
          else
            h_10 = i_10;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_12, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_10)), term_n_12), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(e_10))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(d_10), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_10)))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Initialized_0 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  {
    ATerm q_10 = NULL,r_10 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(o_10));
    {
      ATerm g_1 (ATerm t)
      {
        t = term_n_14;
        return(t);
      }
      t = rewrite_1(t, g_1);
      {
        q_10 = t;
        m_10 :
        if(match_cons(q_10, sym_Defined_1))
          {
            r_10 = ATgetArgument(q_10, 0);
            n_10 :
            if(!(match_string(r_10, "g_0")))
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = term_o_14;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  x_10 = t;
  v_10 :
  if(match_cons(x_10, sym__2))
    {
      y_10 = ATgetArgument(x_10, 0);
      a_11 = ATgetArgument(x_10, 1);
      w_10 :
      if(match_cons(y_10, sym_Var_1))
        {
          z_10 = ATgetArgument(y_10, 0);
          {
            ATerm d_11 = NULL;
            t = not_null(z_10);
            {
              t = Initialized_0(t);
              {
                d_11 = t;
                u_10 :
                if(!(match_string(d_11, "NULL")))
                  _fail(t);
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_10)), not_null(a_11));
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
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  g_11 :
  if(match_cons(i_11, sym__2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      h_11 :
      if(((ATermList) j_11 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(k_11));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm y_0 (ATerm), ATerm b_1 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  u_11 = t;
  s_11 :
  if(match_cons(u_11, sym__2))
    {
      v_11 = ATgetArgument(u_11, 0);
      y_11 = ATgetArgument(u_11, 1);
      t_11 :
      if(((ATgetType(v_11) == AT_LIST) && ((ATermList) v_11 != ATempty)))
        {
          w_11 = ATgetFirst((ATermList) v_11);
          x_11 = (ATerm) ATgetNext((ATermList) v_11);
          {
            ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
            ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(y_11));
            {
              t = y_0(t);
              {
                g_12 = t;
                r_11 :
                if(match_cons(g_12, sym__2))
                  {
                    h_12 = ATgetArgument(g_12, 0);
                    i_12 = ATgetArgument(g_12, 1);
                    {
                      ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
                      if(((e_12 != NULL) && (e_12 != h_12)))
                        _fail(h_12);
                      else
                        e_12 = h_12;
                      {
                        if(((c_12 != NULL) && (c_12 != i_12)))
                          _fail(i_12);
                        else
                          c_12 = i_12;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), not_null(c_12));
                          {
                            t = b_1(t);
                            {
                              j_12 = t;
                              q_11 :
                              if(match_cons(j_12, sym__2))
                                {
                                  k_12 = ATgetArgument(j_12, 0);
                                  l_12 = ATgetArgument(j_12, 1);
                                  {
                                    if(((f_12 != NULL) && (f_12 != k_12)))
                                      _fail(k_12);
                                    else
                                      f_12 = k_12;
                                    if(((d_12 != NULL) && (d_12 != l_12)))
                                      _fail(l_12);
                                    else
                                      d_12 = l_12;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_12)), not_null(e_12)), not_null(d_12));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm thread_map_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm p_12 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, o_79, p_12);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = p_12(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm t_66 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_Var_1))
    {
      u_12 = ATgetArgument(t_12, 0);
      {
        ATerm w_12 = NULL;
        t = not_null(u_12);
        {
          t = t_66(t);
          {
            w_12 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_12));
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
  ATerm h_13 = NULL;
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  h_13 = t;
  {
    ATerm m_13 = NULL;
    ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
    t = not_null(h_13);
    {
      m_13 = t;
      {
        t = SSL_explode_term(not_null(m_13));
        {
          o_13 = t;
          d_13 :
          if(match_cons(o_13, sym__2))
            {
              p_13 = ATgetArgument(o_13, 0);
              q_13 = ATgetArgument(o_13, 1);
              e_13 :
              if(match_string(p_13, ""))
                {
                  f_13 :
                  if(((ATgetType(q_13) == AT_LIST) && ((ATermList) q_13 != ATempty)))
                    {
                      r_13 = ATgetFirst((ATermList) q_13);
                      s_13 = (ATerm) ATgetNext((ATermList) q_13);
                      g_13 :
                      if(((ATgetType(s_13) == AT_LIST) && ((ATermList) s_13 != ATempty)))
                        {
                          t_13 = ATgetFirst((ATermList) s_13);
                          u_13 = (ATerm) ATgetNext((ATermList) s_13);
                          {
                            if(((j_13 != NULL) && (j_13 != r_13)))
                              _fail(r_13);
                            else
                              j_13 = r_13;
                            {
                              if(((l_13 != NULL) && (l_13 != t_13)))
                                _fail(t_13);
                              else
                                l_13 = t_13;
                              if(((k_13 != NULL) && (k_13 != u_13)))
                                _fail(u_13);
                              else
                                k_13 = u_13;
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
    t = not_null(l_13);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm b_14 = NULL;
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  t = term_l_10;
  {
    ATerm h_1 (ATerm t)
    {
      t = term_r_14;
      return(t);
    }
    t = rewrite_1(t, h_1);
    {
      c_14 = t;
      z_13 :
      if(match_cons(c_14, sym_Defined_2))
        {
          d_14 = ATgetArgument(c_14, 0);
          e_14 = ATgetArgument(c_14, 1);
          a_14 :
          if(match_string(d_14, "k_0"))
            {
              if(((b_14 != NULL) && (b_14 != e_14)))
                _fail(e_14);
              else
                b_14 = e_14;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  }
  t = not_null(b_14);
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
ATerm BuildDefault_1 (ATerm t, ATerm p_64 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_BuildDefault_1))
    {
      k_14 = ATgetArgument(j_14, 0);
      {
        ATerm m_14 = NULL;
        t = not_null(k_14);
        {
          t = p_64(t);
          {
            m_14 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(m_14));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Real_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_Real_1))
    {
      w_14 = ATgetArgument(v_14, 0);
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_14 = NULL;
            t = not_null(w_14);
            {
              t = u_0(t);
              {
                y_14 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(y_14));
              }
            }
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            {
              ATerm b_15 = NULL;
              t = not_null(w_14);
              {
                t = u_0(t);
                {
                  b_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(b_15));
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
ATerm Str_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm m_15 = NULL,n_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym_Str_1))
    {
      n_15 = ATgetArgument(m_15, 0);
      {
        ATerm x_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_15 = NULL;
            t = not_null(n_15);
            {
              t = t_0(t);
              {
                p_15 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(p_15));
              }
            }
            LocalPopChoice(z_14);
          }
        else
          {
            t = x_14;
            {
              ATerm s_15 = NULL;
              t = not_null(n_15);
              {
                t = t_0(t);
                {
                  s_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(s_15));
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
ATerm Int_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm d_16 = NULL,e_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym_Int_1))
    {
      e_16 = ATgetArgument(d_16, 0);
      {
        ATerm a_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_16 = NULL;
            t = not_null(e_16);
            {
              t = s_0(t);
              {
                g_16 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(g_16));
              }
            }
            LocalPopChoice(c_15);
          }
        else
          {
            t = a_15;
            {
              ATerm j_16 = NULL;
              t = not_null(e_16);
              {
                t = s_0(t);
                {
                  j_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(j_16));
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
ATerm proper_list_0 (ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm s_16 = NULL;
        s_16 = t;
        p_16 :
        if(!(match_string(s_16, "Nil")))
          _fail(t);
        return(t);
      }
      t = Op_2(t, i_1, Nil_0);
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
            ATerm j_1 (ATerm t)
            {
              ATerm t_16 = NULL;
              t_16 = t;
              q_16 :
              if(!(match_string(t_16, "Cons")))
                _fail(t);
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
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            {
              ATerm m_1 (ATerm t)
              {
                ATerm h_15 = t;
                if((PushChoice() == 0))
                  {
                    ATerm u_16 = NULL;
                    u_16 = t;
                    r_16 :
                    if(!(match_string(u_16, "Nil")))
                      {
                        if(!(match_string(u_16, "Cons")))
                          _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = h_15;
                return(t);
              }
              t = Op_2(t, m_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym_Op_2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      {
        ATerm e_17 = NULL;
        t = not_null(a_17);
        {
          ATerm g_17 = NULL;
          t = x_66(t);
          {
            e_17 = t;
            {
              t = not_null(b_17);
              {
                t = y_66(t);
                {
                  g_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(e_17), not_null(g_17));
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
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym__2))
    {
      t_17 = ATgetArgument(s_17, 0);
      u_17 = ATgetArgument(s_17, 1);
      {
        ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
        ATerm a_18 = NULL;
        t = not_null(t_17);
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 (ATerm t)
              {
                t = map_1(t, Cache_0);
                return(t);
              }
              t = Op_2(t, _id, n_1);
              t = proper_list_0(t);
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              {
                ATerm k_15 = t;
                int o_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Int_1(t, _id);
                    LocalPopChoice(o_15);
                  }
                else
                  {
                    t = k_15;
                    {
                      ATerm q_15 = t;
                      int r_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Str_1(t, _id);
                          LocalPopChoice(r_15);
                        }
                      else
                        {
                          t = q_15;
                          {
                            ATerm t_15 = t;
                            int u_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Real_1(t, _id);
                                LocalPopChoice(u_15);
                              }
                            else
                              {
                                t = t_15;
                                t = BuildDefault_1(t, _id);
                              }
                          }
                        }
                    }
                  }
              }
            }
          {
            ATerm b_18 = NULL,d_18 = NULL;
            t = new_0(t);
            {
              a_18 = t;
              {
                if(((x_17 != NULL) && (x_17 != a_18)))
                  _fail(a_18);
                else
                  x_17 = a_18;
                {
                  ATerm c_18 = NULL;
                  c_18 = t;
                  if(((b_18 != NULL) && (b_18 != c_18)))
                    _fail(c_18);
                  else
                    b_18 = c_18;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_v_15, not_null(b_18));
                    {
                      ATerm e_18 = NULL,g_18 = NULL;
                      t = conc_strings_0(t);
                      {
                        d_18 = t;
                        {
                          if(((y_17 != NULL) && (y_17 != d_18)))
                            _fail(d_18);
                          else
                            y_17 = d_18;
                          {
                            ATerm w_15;
                            w_15 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(t_17)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_15, not_null(y_17)));
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = term_y_15;
                                  return(t);
                                }
                                t = assert_1(t, o_1);
                              }
                            }
                            t = w_15;
                            {
                              ATerm f_18 = NULL;
                              ATerm z_15 = t;
                              int a_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  LocalPopChoice(a_16);
                                }
                              else
                                {
                                  t = z_15;
                                  t = (ATerm) ATempty;
                                }
                              {
                                f_18 = t;
                                if(((e_18 != NULL) && (e_18 != f_18)))
                                  _fail(f_18);
                                else
                                  e_18 = f_18;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(e_18)), (ATerm) ATmakeAppl(sym__3, not_null(x_17), not_null(y_17), not_null(u_17)));
                                {
                                  g_18 = t;
                                  {
                                    if(((z_17 != NULL) && (z_17 != g_18)))
                                      _fail(g_18);
                                    else
                                      z_17 = g_18;
                                    {
                                      ATerm b_16;
                                      b_16 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATmakeAppl(sym_Defined_2, term_f_16, not_null(z_17)));
                                        {
                                          ATerm p_1 (ATerm t)
                                          {
                                            t = term_r_14;
                                            return(t);
                                          }
                                          t = assert_1(t, p_1);
                                        }
                                      }
                                      t = b_16;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(y_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ConstructTerm_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  b_19 = t;
  z_18 :
  if(match_cons(b_19, sym_Anno_2))
    {
      c_19 = ATgetArgument(b_19, 0);
      a_19 = ATgetArgument(b_19, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_19)), not_null(c_19))));
    }
  else
    {
      if(match_cons(b_19, sym_Op_2))
        {
          c_19 = ATgetArgument(b_19, 0);
          a_19 = ATgetArgument(b_19, 1);
          {
            ATerm h_19 = NULL;
            ATerm i_19 = NULL,k_19 = NULL;
            ATerm j_19 = NULL;
            t = not_null(a_19);
            {
              t = length_0(t);
              {
                j_19 = t;
                if(((i_19 != NULL) && (i_19 != j_19)))
                  _fail(j_19);
                else
                  i_19 = j_19;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(i_19));
              {
                t = ConstructorName_0(t);
                {
                  k_19 = t;
                  if(((h_19 != NULL) && (h_19 != k_19)))
                    _fail(k_19);
                  else
                    h_19 = k_19;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_16, (ATerm) ATinsert(CheckATermList(not_null(a_19)), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_19)))));
          }
        }
      else
        {
          if(match_cons(b_19, sym_BuildDefault_1))
            {
              c_19 = ATgetArgument(b_19, 0);
              t = not_null(c_19);
            }
          else
            {
              if(match_cons(b_19, sym_Var_1))
                {
                  c_19 = ATgetArgument(b_19, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_o_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_19))));
                }
              else
                {
                  if(match_cons(b_19, sym_Str_1))
                    {
                      c_19 = ATgetArgument(b_19, 0);
                      {
                        ATerm y_19 = NULL;
                        ATerm v_20 = NULL;
                        t = not_null(c_19);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              v_20 = t;
                              if(((y_19 != NULL) && (y_19 != v_20)))
                                _fail(v_20);
                              else
                                y_19 = v_20;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_17), term_c_17), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(y_19))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(b_19, sym_Real_1))
                        {
                          c_19 = ATgetArgument(b_19, 0);
                          {
                            ATerm x_20 = NULL;
                            ATerm y_20 = NULL;
                            t = not_null(c_19);
                            {
                              t = real_to_string_0(t);
                              {
                                y_20 = t;
                                if(((x_20 != NULL) && (x_20 != y_20)))
                                  _fail(y_20);
                                else
                                  x_20 = y_20;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(x_20)))));
                          }
                        }
                      else
                        {
                          if(match_cons(b_19, sym_Int_1))
                            {
                              c_19 = ATgetArgument(b_19, 0);
                              {
                                ATerm a_21 = NULL;
                                ATerm b_21 = NULL;
                                t = not_null(c_19);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    b_21 = t;
                                    if(((a_21 != NULL) && (a_21 != b_21)))
                                      _fail(b_21);
                                    else
                                      a_21 = b_21;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_21)))));
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
  return(t);
}
ATerm Id_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm r_21 = NULL,s_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym_Id_1))
    {
      s_21 = ATgetArgument(r_21, 0);
      {
        ATerm u_21 = NULL;
        t = not_null(s_21);
        {
          t = x_60(t);
          {
            u_21 = t;
            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(u_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm FunCall_2 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm))
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_FunCall_2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      {
        ATerm h_22 = NULL;
        t = not_null(d_22);
        {
          ATerm j_22 = NULL;
          t = p_57(t);
          {
            h_22 = t;
            {
              t = not_null(e_22);
              {
                t = q_57(t);
                {
                  j_22 = t;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, not_null(h_22), not_null(j_22));
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
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,v_23 = NULL;
  m_23 = t;
  c_23 :
  if(match_cons(m_23, sym_Op_2))
    {
      n_23 = ATgetArgument(m_23, 0);
      v_23 = ATgetArgument(m_23, 1);
      d_23 :
      if(match_string(n_23, "Cons"))
        {
          e_23 :
          if(((ATgetType(v_23) == AT_LIST) && ((ATermList) v_23 != ATempty)))
            {
              i_23 = ATgetFirst((ATermList) v_23);
              j_23 = (ATerm) ATgetNext((ATermList) v_23);
              f_23 :
              if(((ATgetType(j_23) == AT_LIST) && ((ATermList) j_23 != ATempty)))
                {
                  k_23 = ATgetFirst((ATermList) j_23);
                  l_23 = (ATerm) ATgetNext((ATermList) j_23);
                  g_23 :
                  if(((ATermList) l_23 == ATempty))
                    {
                      {
                        ATerm y_23 = NULL;
                        ATerm s_24 = NULL;
                        t = not_null(k_23);
                        {
                          ATerm l_17 = t;
                          int m_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
                              z_23 = t;
                              t_22 :
                              if(match_cons(z_23, sym_TypeCast_2))
                                {
                                  a_24 = ATgetArgument(z_23, 0);
                                  m_24 = ATgetArgument(z_23, 1);
                                  u_22 :
                                  if(match_cons(a_24, sym_TypeName_2))
                                    {
                                      b_24 = ATgetArgument(a_24, 0);
                                      l_24 = ATgetArgument(a_24, 1);
                                      v_22 :
                                      if(match_cons(b_24, sym_TypeSpec_3))
                                        {
                                          c_24 = ATgetArgument(b_24, 0);
                                          d_24 = ATgetArgument(b_24, 1);
                                          k_24 = ATgetArgument(b_24, 2);
                                          w_22 :
                                          if(((ATermList) c_24 == ATempty))
                                            {
                                              x_22 :
                                              if(match_cons(d_24, sym_TypeId_1))
                                                {
                                                  j_24 = ATgetArgument(d_24, 0);
                                                  y_22 :
                                                  if(match_string(j_24, "ATerm"))
                                                    {
                                                      z_22 :
                                                      if(((ATermList) k_24 == ATempty))
                                                        {
                                                          a_23 :
                                                          if(match_cons(l_24, sym_None_0))
                                                            {
                                                              t = not_null(m_24);
                                                              {
                                                                ATerm n_17 = t;
                                                                int o_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm q_1 (ATerm t)
                                                                    {
                                                                      ATerm q_24 = NULL;
                                                                      q_24 = t;
                                                                      r_22 :
                                                                      if(!(match_string(q_24, "ATempty")))
                                                                        _fail(t);
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, q_1);
                                                                    LocalPopChoice(o_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = n_17;
                                                                    {
                                                                      ATerm r_1 (ATerm t)
                                                                      {
                                                                        ATerm t_1 (ATerm t)
                                                                        {
                                                                          ATerm r_24 = NULL;
                                                                          r_24 = t;
                                                                          s_22 :
                                                                          if(!(match_string(r_24, "ATinsert")))
                                                                            _fail(t);
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
                              LocalPopChoice(m_17);
                            }
                          else
                            {
                              t = l_17;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_q_17, (ATerm) ATinsert(ATempty, not_null(k_23)));
                            }
                          {
                            s_24 = t;
                            if(((y_23 != NULL) && (y_23 != s_24)))
                              _fail(s_24);
                            else
                              y_23 = s_24;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_23)), not_null(y_23))));
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
          if(match_string(n_23, "Nil"))
            {
              h_23 :
              if(((ATermList) v_23 == ATempty))
                {
                  t = term_j_18;
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
  ATerm g_25 = NULL;
  g_25 = t;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_25 = NULL;
        ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(g_25));
        {
          ATerm v_1 (ATerm t)
          {
            t = term_y_15;
            return(t);
          }
          t = rewrite_1(t, v_1);
          {
            j_25 = t;
            b_25 :
            if(match_cons(j_25, sym_Defined_2))
              {
                k_25 = ATgetArgument(j_25, 0);
                l_25 = ATgetArgument(j_25, 1);
                c_25 :
                if(match_string(k_25, "j_0"))
                  {
                    if(((i_25 != NULL) && (i_25 != l_25)))
                      _fail(l_25);
                    else
                      i_25 = l_25;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(i_25));
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm n_25 = NULL;
          ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(g_25));
          {
            ATerm w_1 (ATerm t)
            {
              t = term_y_15;
              return(t);
            }
            t = rewrite_1(t, w_1);
            {
              o_25 = t;
              e_25 :
              if(match_cons(o_25, sym_Defined_2))
                {
                  p_25 = ATgetArgument(o_25, 0);
                  q_25 = ATgetArgument(o_25, 1);
                  f_25 :
                  if(match_string(p_25, "i_0"))
                    {
                      if(((n_25 != NULL) && (n_25 != q_25)))
                        _fail(q_25);
                      else
                        n_25 = q_25;
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
          t = not_null(n_25);
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      {
        ATerm j_26 = NULL,t_26 = NULL;
        ATerm o_18;
        o_18 = t;
        {
          ATerm s_26 = NULL;
          s_26 = t;
          if(((j_26 != NULL) && (j_26 != s_26)))
            _fail(s_26);
          else
            j_26 = s_26;
        }
        t = o_18;
        {
          ATerm u_26 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm x_1 (ATerm t)
            {
              ATerm p_18 = t;
              int q_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  LocalPopChoice(q_18);
                }
              else
                {
                  t = p_18;
                  t = ConstructTerm_0(t);
                }
              return(t);
            }
            t = try_1(t, x_1);
            {
              u_26 = t;
              if(((t_26 != NULL) && (t_26 != u_26)))
                _fail(u_26);
              else
                t_26 = u_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), not_null(t_26));
            {
              ATerm r_18 = t;
              int s_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  LocalPopChoice(s_18);
                }
              else
                {
                  t = r_18;
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
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  ATerm r_40 (ATerm t)
  {
    ATerm h_34 = NULL,z_34 = NULL,b_35 = NULL;
    ATerm t_18;
    t_18 = t;
    {
      ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
      t = not_null(x_32);
      {
        ATerm u_18 = t;
        if((PushChoice() == 0))
          {
            ATerm l_34 = NULL;
            l_34 = t;
            w_28 :
            if(!(match_string(l_34, "Nil")))
              {
                if(!(match_string(l_34, "Cons")))
                  _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          t = u_18;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_32), term_v_18);
          {
            ATerm y_1 (ATerm t)
            {
              ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
              m_34 = t;
              a_29 :
              if(match_cons(m_34, sym__2))
                {
                  n_34 = ATgetArgument(m_34, 0);
                  p_34 = ATgetArgument(m_34, 1);
                  b_29 :
                  if(match_cons(n_34, sym_Var_1))
                    {
                      o_34 = ATgetArgument(n_34, 0);
                      {
                        ATerm s_34 = NULL,u_34 = NULL;
                        ATerm w_18;
                        w_18 = t;
                        {
                          ATerm t_34 = NULL;
                          t = not_null(p_34);
                          {
                            t = int_to_string_0(t);
                            {
                              t_34 = t;
                              if(((s_34 != NULL) && (s_34 != t_34)))
                                _fail(t_34);
                              else
                                s_34 = t_34;
                            }
                          }
                        }
                        t = w_18;
                        {
                          ATerm v_34 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_34), term_x_18);
                          {
                            t = add_0(t);
                            {
                              v_34 = t;
                              if(((u_34 != NULL) && (u_34 != v_34)))
                                _fail(v_34);
                              else
                                u_34 = v_34;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_34)), term_f_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_34))), (ATerm) ATmakeAppl(sym_Id_1, not_null(i_33)))))), not_null(u_34));
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
            t = thread_map_1(t, y_1);
            {
              w_34 = t;
              d_29 :
              if(match_cons(w_34, sym__2))
                {
                  x_34 = ATgetArgument(w_34, 0);
                  y_34 = ATgetArgument(w_34, 1);
                  if(((h_34 != NULL) && (h_34 != x_34)))
                    _fail(x_34);
                  else
                    h_34 = x_34;
                }
              else
                _fail(t);
            }
          }
        }
      }
    }
    t = t_18;
    {
      ATerm e_19;
      e_19 = t;
      {
        ATerm a_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_32), not_null(v_32));
        {
          t = ConstructorName_0(t);
          {
            a_35 = t;
            if(((z_34 != NULL) && (z_34 != a_35)))
              _fail(a_35);
            else
              z_34 = a_35;
          }
        }
      }
      t = e_19;
      {
        ATerm c_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_34), (ATerm) ATinsert(ATempty, not_null(z_32)));
        {
          t = conc_0(t);
          {
            c_35 = t;
            if(((b_35 != NULL) && (b_35 != c_35)))
              _fail(c_35);
            else
              b_35 = c_35;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_34))), (ATerm) ATmakeAppl(sym_Id_1, not_null(i_33)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(b_35)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_33)), not_null(a_33), not_null(j_33)))));
      }
    }
    return(t);
  }
  ATerm s_40 (ATerm t)
  {
    ATerm j_35 = NULL;
    ATerm k_35 = NULL;
    t = not_null(x_32);
    {
      t = real_to_string_0(t);
      {
        k_35 = t;
        if(((j_35 != NULL) && (j_35 != k_35)))
          _fail(k_35);
        else
          j_35 = k_35;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(j_35))), (ATerm) ATmakeAppl(sym_Id_1, not_null(i_33)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_33)), not_null(a_33), not_null(j_33)))));
    return(t);
  }
  ATerm t_40 (ATerm t)
  {
    ATerm t_35 = NULL;
    ATerm u_35 = NULL;
    t = not_null(x_32);
    {
      t = int_to_string_0(t);
      {
        u_35 = t;
        if(((t_35 != NULL) && (t_35 != u_35)))
          _fail(u_35);
        else
          t_35 = u_35;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(t_35))), (ATerm) ATmakeAppl(sym_Id_1, not_null(i_33)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_33)), not_null(a_33), not_null(j_33)))));
    return(t);
  }
  ATerm u_40 (ATerm t)
  {
    ATerm b_36 = NULL;
    ATerm c_36 = NULL;
    t = not_null(x_32);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(b_36)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(i_33)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_33)), not_null(a_33), not_null(j_33)))));
    return(t);
  }
  ATerm v_40 (ATerm t)
  {
    t = not_null(j_33);
    return(t);
  }
  ATerm w_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_33)), (ATerm) ATmakeAppl(sym_Case_3, not_null(l_33), not_null(j_33), not_null(b_33)));
    return(t);
  }
  ATerm x_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_33)));
    return(t);
  }
  ATerm y_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_33)), term_r_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_33)), (ATerm) ATmakeAppl(sym_Id_1, not_null(c_33)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_33))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_33)), term_f_11, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_33)))));
    return(t);
  }
  ATerm z_40 (ATerm t)
  {
    t = not_null(l_33);
    {
      ATerm u_19 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        t = u_19;
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_33)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_33))));
    return(t);
  }
  ATerm a_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_33)), term_f_11, term_w_19));
    return(t);
  }
  ATerm b_41 (ATerm t)
  {
    ATerm s_36 = NULL;
    ATerm t_36 = NULL;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(f_33), (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_20, not_null(l_33))))))), (ATerm) ATmakeAppl(sym__2, not_null(d_33), (ATerm) ATmakeAppl(sym_FunCall_2, term_z_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_20, not_null(l_33))))));
    {
      ATerm z_1 (ATerm t)
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
        return(t);
      }
      t = map_1(t, z_1);
      {
        t_36 = t;
        if(((s_36 != NULL) && (s_36 != t_36)))
          _fail(t_36);
        else
          s_36 = t_36;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, not_null(l_33))), term_l_20), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_d_20, not_null(l_33)), term_i_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(s_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, term_w_19))));
    return(t);
  }
  ATerm g_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_d_20, not_null(l_33)), term_i_18), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, term_w_19))));
    return(t);
  }
  ATerm h_41 (ATerm t)
  {
    ATerm y_36 = NULL,o_37 = NULL;
    ATerm m_20;
    m_20 = t;
    {
      ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
      t = not_null(i_33);
      {
        ATerm n_20 = t;
        if((PushChoice() == 0))
          {
            ATerm z_36 = NULL;
            z_36 = t;
            k_29 :
            if(!(match_string(z_36, "Nil")))
              {
                if(!(match_string(z_36, "Cons")))
                  _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          t = n_20;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_33), term_v_18);
          {
            ATerm a_2 (ATerm t)
            {
              ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
              a_37 = t;
              q_29 :
              if(match_cons(a_37, sym__2))
                {
                  b_37 = ATgetArgument(a_37, 0);
                  c_37 = ATgetArgument(a_37, 1);
                  {
                    ATerm f_37 = NULL,j_37 = NULL;
                    ATerm o_20;
                    o_20 = t;
                    {
                      ATerm g_37 = NULL,i_37 = NULL;
                      ATerm h_37 = NULL;
                      t = not_null(c_37);
                      {
                        t = int_to_string_0(t);
                        {
                          h_37 = t;
                          if(((g_37 != NULL) && (g_37 != h_37)))
                            _fail(h_37);
                          else
                            g_37 = h_37;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_37), (ATerm) ATmakeAppl(sym_FunCall_2, term_d_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(g_37))), not_null(l_33))));
                        {
                          ATerm p_20 = t;
                          int q_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              LocalPopChoice(q_20);
                            }
                          else
                            {
                              t = p_20;
                              t = MatchArg2_0(t);
                            }
                          {
                            i_37 = t;
                            if(((f_37 != NULL) && (f_37 != i_37)))
                              _fail(i_37);
                            else
                              f_37 = i_37;
                          }
                        }
                      }
                    }
                    t = o_20;
                    {
                      ATerm k_37 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_37), term_x_18);
                      {
                        t = add_0(t);
                        {
                          k_37 = t;
                          if(((j_37 != NULL) && (j_37 != k_37)))
                            _fail(k_37);
                          else
                            j_37 = k_37;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_37), not_null(j_37));
                    }
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = thread_map_1(t, a_2);
            {
              l_37 = t;
              s_29 :
              if(match_cons(l_37, sym__2))
                {
                  m_37 = ATgetArgument(l_37, 0);
                  n_37 = ATgetArgument(l_37, 1);
                  if(((y_36 != NULL) && (y_36 != m_37)))
                    _fail(m_37);
                  else
                    y_36 = m_37;
                }
              else
                _fail(t);
            }
          }
        }
      }
    }
    t = m_20;
    {
      ATerm p_37 = NULL,r_37 = NULL;
      ATerm q_37 = NULL;
      t = not_null(h_33);
      {
        t = length_0(t);
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_33), not_null(p_37));
        {
          t = ConstructorName_0(t);
          {
            r_37 = t;
            if(((o_37 != NULL) && (o_37 != r_37)))
              _fail(r_37);
            else
              o_37 = r_37;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_37))), not_null(l_33))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(y_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, term_w_19))));
    }
    return(t);
  }
  ATerm i_41 (ATerm t)
  {
    ATerm u_37 = NULL;
    ATerm v_37 = NULL;
    t = not_null(i_33);
    {
      t = real_to_string_0(t);
      {
        v_37 = t;
        if(((u_37 != NULL) && (u_37 != v_37)))
          _fail(v_37);
        else
          u_37 = v_37;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, not_null(l_33))), term_s_20), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_21, not_null(l_33)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(u_37)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, term_w_19))));
    return(t);
  }
  ATerm j_41 (ATerm t)
  {
    ATerm y_37 = NULL;
    ATerm z_37 = NULL;
    t = not_null(i_33);
    {
      t = int_to_string_0(t);
      {
        z_37 = t;
        if(((y_37 != NULL) && (y_37 != z_37)))
          _fail(z_37);
        else
          y_37 = z_37;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, not_null(l_33))), term_f_21), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_21, not_null(l_33)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(y_37)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, term_w_19))));
    return(t);
  }
  ATerm k_41 (ATerm t)
  {
    ATerm c_38 = NULL;
    ATerm d_38 = NULL;
    t = not_null(i_33);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          d_38 = t;
          if(((c_38 != NULL) && (c_38 != d_38)))
            _fail(d_38);
          else
            c_38 = d_38;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_21, not_null(l_33)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_w_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_17), term_c_17), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(c_38)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, term_w_19))));
    return(t);
  }
  ATerm l_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_33)), term_r_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_33)), not_null(l_33))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, not_null(l_33)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_33)), term_f_11, not_null(l_33))));
    return(t);
  }
  ATerm m_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(h_33), not_null(l_33))), (ATerm) ATmakeAppl(sym_Match_2, not_null(i_33), not_null(l_33))));
    return(t);
  }
  ATerm n_41 (ATerm t)
  {
    t = term_w_21;
    return(t);
  }
  ATerm o_41 (ATerm t)
  {
    t = term_w_21;
    return(t);
  }
  ATerm p_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(k_33), term_w_19);
    return(t);
  }
  ATerm t_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(k_33), (ATerm) ATinsert(ATempty, not_null(l_33)));
    return(t);
  }
  ATerm u_41 (ATerm t)
  {
    ATerm q_38 = NULL;
    ATerm r_38 = NULL;
    t = new_0(t);
    {
      r_38 = t;
      if(((q_38 != NULL) && (q_38 != r_38)))
        _fail(r_38);
      else
        q_38 = r_38;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_38)), term_n_12))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_19, term_f_11, (ATerm) ATmakeAppl(sym_Id_1, not_null(q_38))))), not_null(k_33)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_38)), term_f_11, term_w_19))));
    return(t);
  }
  ATerm v_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(k_33));
    return(t);
  }
  ATerm w_41 (ATerm t)
  {
    ATerm v_38 = NULL;
    ATerm b_39 = NULL;
    t = not_null(l_33);
    {
      ATerm b_2 (ATerm t)
      {
        ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
        w_38 = t;
        a_30 :
        if(match_cons(w_38, sym_Call_2))
          {
            x_38 = ATgetArgument(w_38, 0);
            z_38 = ATgetArgument(w_38, 1);
            b_30 :
            if(match_cons(x_38, sym_SVar_1))
              {
                y_38 = ATgetArgument(x_38, 0);
                c_30 :
                if(((ATermList) z_38 == ATempty))
                  {
                    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(y_38));
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
      t = map_1(t, b_2);
      {
        b_39 = t;
        if(((v_38 != NULL) && (v_38 != b_39)))
          _fail(b_39);
        else
          v_38 = b_39;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_19, term_f_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_33)), (ATerm) ATinsert(CheckATermList(not_null(v_38)), term_w_19))));
    return(t);
  }
  ATerm x_41 (ATerm t)
  {
    ATerm e_39 = NULL;
    ATerm f_39 = NULL;
    t = not_null(l_33);
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
        f_39 = t;
        if(((e_39 != NULL) && (e_39 != f_39)))
          _fail(f_39);
        else
          e_39 = f_39;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_19, term_f_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_33)), not_null(e_39))));
    return(t);
  }
  ATerm c_42 (ATerm t)
  {
    ATerm h_39 = NULL;
    ATerm i_39 = NULL;
    t = new_0(t);
    {
      i_39 = t;
      if(((h_39 != NULL) && (h_39 != i_39)))
        _fail(i_39);
      else
        h_39 = i_39;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_39)), term_n_12), term_x_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_22), term_l_22), not_null(k_33))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_19, term_f_11, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_39)))))))));
    return(t);
  }
  ATerm d_42 (ATerm t)
  {
    ATerm l_39 = NULL;
    ATerm m_39 = NULL;
    t = new_0(t);
    {
      m_39 = t;
      if(((l_39 != NULL) && (l_39 != m_39)))
        _fail(m_39);
      else
        l_39 = m_39;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_39)), term_n_12), term_x_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_b_23, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(k_33))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_33)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_19, term_f_11, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_39)))))))));
    return(t);
  }
  ATerm e_42 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(k_33), not_null(l_33));
    return(t);
  }
  ATerm f_42 (ATerm t)
  {
    ATerm s_39 = NULL,t_39 = NULL;
    ATerm u_39 = NULL;
    ATerm v_39 = NULL;
    t = new_0(t);
    {
      u_39 = t;
      {
        if(((s_39 != NULL) && (s_39 != u_39)))
          _fail(u_39);
        else
          s_39 = u_39;
        {
          t = new_0(t);
          {
            v_39 = t;
            if(((t_39 != NULL) && (t_39 != v_39)))
              _fail(v_39);
            else
              t_39 = v_39;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_39)), term_n_12), term_t_23)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_39)), term_n_12), term_x_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_33)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_39)))))), not_null(k_33))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_33)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_19, term_f_11, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_39)))))))));
    return(t);
  }
  ATerm g_42 (ATerm t)
  {
    ATerm y_39 = NULL,z_39 = NULL;
    ATerm a_40 = NULL;
    ATerm b_40 = NULL;
    t = new_0(t);
    {
      a_40 = t;
      {
        if(((y_39 != NULL) && (y_39 != a_40)))
          _fail(a_40);
        else
          y_39 = a_40;
        {
          t = new_0(t);
          {
            b_40 = t;
            if(((z_39 != NULL) && (z_39 != b_40)))
              _fail(b_40);
            else
              z_39 = b_40;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_39)), term_n_12), term_t_23)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_39)), term_n_12), term_x_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_39)))))), not_null(k_33))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_33)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_19, term_f_11, (ATerm) ATmakeAppl(sym_Id_1, not_null(y_39)))))))));
    return(t);
  }
  ATerm h_42 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_33), not_null(l_33));
    return(t);
  }
  ATerm i_42 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_33)), not_null(k_33)));
    return(t);
  }
  ATerm j_42 (ATerm t)
  {
    ATerm k_40 = NULL;
    ATerm x_23;
    x_23 = t;
    {
      t = not_null(k_33);
      {
        ATerm e_2 (ATerm t)
        {
          ATerm i_40 = NULL;
          i_40 = t;
          {
            ATerm e_24;
            e_24 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(i_40)), term_g_24);
              {
                ATerm f_2 (ATerm t)
                {
                  t = term_n_14;
                  return(t);
                }
                t = assert_1(t, f_2);
              }
            }
            t = e_24;
          }
          return(t);
        }
        t = map_1(t, e_2);
      }
    }
    t = x_23;
    {
      ATerm n_40 = NULL;
      t = not_null(k_33);
      {
        ATerm g_2 (ATerm t)
        {
          ATerm l_40 = NULL;
          l_40 = t;
          t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_40)), term_n_12), term_h_24);
          return(t);
        }
        t = map_1(t, g_2);
        {
          n_40 = t;
          if(((k_40 != NULL) && (k_40 != n_40)))
            _fail(n_40);
          else
            k_40 = n_40;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_12, not_null(k_40))), (ATerm) ATinsert(ATempty, not_null(l_33)));
    }
    return(t);
  }
  ATerm k_42 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATempty, term_w_19)));
    return(t);
  }
  ATerm l_42 (ATerm t)
  {
    t = term_w_21;
    return(t);
  }
  m_33 = t;
  o_30 :
  if(match_cons(m_33, sym_Build_1))
    {
      k_33 = ATgetArgument(m_33, 0);
      {
        ATerm o_33 = NULL;
        ATerm p_33 = NULL;
        t = not_null(k_33);
        {
          t = construct_term_caching_0(t);
          {
            p_33 = t;
            if(((o_33 != NULL) && (o_33 != p_33)))
              _fail(p_33);
            else
              o_33 = p_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_19, term_f_11, not_null(o_33)));
      }
    }
  else
    {
      if(match_cons(m_33, sym_Case_3))
        {
          k_33 = ATgetArgument(m_33, 0);
          l_33 = ATgetArgument(m_33, 1);
          j_33 = ATgetArgument(m_33, 2);
          r_30 :
          if(match_cons(k_33, sym_Var_1))
            {
              i_33 = ATgetArgument(k_33, 0);
              y_30 :
              if(((ATgetType(l_33) == AT_LIST) && ((ATermList) l_33 != ATempty)))
                {
                  c_33 = ATgetFirst((ATermList) l_33);
                  a_33 = (ATerm) ATgetNext((ATermList) l_33);
                  z_30 :
                  if(match_cons(c_33, sym_Alt_3))
                    {
                      w_32 = ATgetArgument(c_33, 0);
                      y_32 = ATgetArgument(c_33, 1);
                      z_32 = ATgetArgument(c_33, 2);
                      a_31 :
                      if(match_cons(w_32, sym_Fun_2))
                        {
                          x_32 = ATgetArgument(w_32, 0);
                          v_32 = ATgetArgument(w_32, 1);
                          b_31 :
                          if(((ATgetType(y_32) == AT_LIST) && ((ATermList) y_32 != ATempty)))
                            {
                              p_32 = ATgetFirst((ATermList) y_32);
                              r_32 = (ATerm) ATgetNext((ATermList) y_32);
                              c_31 :
                              if(((ATgetType(r_32) == AT_LIST) && ((ATermList) r_32 != ATempty)))
                                {
                                  s_32 = ATgetFirst((ATermList) r_32);
                                  u_32 = (ATerm) ATgetNext((ATermList) r_32);
                                  d_31 :
                                  if(((ATermList) u_32 == ATempty))
                                    {
                                      e_31 :
                                      if(match_cons(s_32, sym_Var_1))
                                        {
                                          t_32 = ATgetArgument(s_32, 0);
                                          f_31 :
                                          if(match_cons(p_32, sym_Var_1))
                                            {
                                              q_32 = ATgetArgument(p_32, 0);
                                              g_31 :
                                              if(match_int(v_32, 2))
                                                {
                                                  h_31 :
                                                  if(match_string(x_32, "Cons"))
                                                    {
                                                      ATerm i_24 = t;
                                                      int n_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_33)))), term_l_20), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_d_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_33))), term_i_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_32)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_32)), term_f_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_33))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_32)), term_f_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_33))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_33)), not_null(a_33), not_null(j_33)))));
                                                          LocalPopChoice(n_24);
                                                        }
                                                      else
                                                        {
                                                          t = i_24;
                                                          t = r_40(t);
                                                        }
                                                    }
                                                  else
                                                    t = r_40(t);
                                                }
                                              else
                                                {
                                                  i_31 :
                                                  t = r_40(t);
                                                }
                                            }
                                          else
                                            {
                                              j_31 :
                                              k_31 :
                                              t = r_40(t);
                                            }
                                        }
                                      else
                                        {
                                          l_31 :
                                          m_31 :
                                          n_31 :
                                          t = r_40(t);
                                        }
                                    }
                                  else
                                    {
                                      o_31 :
                                      p_31 :
                                      q_31 :
                                      r_31 :
                                      t = r_40(t);
                                    }
                                }
                              else
                                {
                                  s_31 :
                                  t_31 :
                                  u_31 :
                                  t = r_40(t);
                                }
                            }
                          else
                            {
                              if(((ATermList) y_32 == ATempty))
                                {
                                  v_31 :
                                  if(match_int(v_32, 0))
                                    {
                                      w_31 :
                                      if(match_string(x_32, "Nil"))
                                        {
                                          ATerm o_24 = t;
                                          int p_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_d_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_33))), term_i_18), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(z_32)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_33)), not_null(a_33), not_null(j_33)))));
                                              LocalPopChoice(p_24);
                                            }
                                          else
                                            {
                                              t = o_24;
                                              t = r_40(t);
                                            }
                                        }
                                      else
                                        t = r_40(t);
                                    }
                                  else
                                    {
                                      x_31 :
                                      t = r_40(t);
                                    }
                                }
                              else
                                {
                                  y_31 :
                                  z_31 :
                                  t = r_40(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(w_32, sym_Real_1))
                            {
                              x_32 = ATgetArgument(w_32, 0);
                              t = s_40(t);
                            }
                          else
                            {
                              if(match_cons(w_32, sym_Int_1))
                                {
                                  x_32 = ATgetArgument(w_32, 0);
                                  t = t_40(t);
                                }
                              else
                                {
                                  if(match_cons(w_32, sym_Str_1))
                                    {
                                      x_32 = ATgetArgument(w_32, 0);
                                      t = u_40(t);
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
                  if(((ATermList) l_33 == ATempty))
                    {
                      t = v_40(t);
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
          if(match_cons(m_33, sym_Case_4))
            {
              k_33 = ATgetArgument(m_33, 0);
              l_33 = ATgetArgument(m_33, 1);
              j_33 = ATgetArgument(m_33, 2);
              b_33 = ATgetArgument(m_33, 3);
              t = w_40(t);
            }
          else
            {
              if(match_cons(m_33, sym_Continue_1))
                {
                  k_33 = ATgetArgument(m_33, 0);
                  t = x_40(t);
                }
              else
                {
                  if(match_cons(m_33, sym_Assign_2))
                    {
                      k_33 = ATgetArgument(m_33, 0);
                      l_33 = ATgetArgument(m_33, 1);
                      c_32 :
                      if(match_cons(k_33, sym_Var_1))
                        {
                          i_33 = ATgetArgument(k_33, 0);
                          d_32 :
                          if(match_cons(l_33, sym_Var_1))
                            {
                              c_33 = ATgetArgument(l_33, 0);
                              {
                                ATerm t_24 = t;
                                int u_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = y_40(t);
                                    LocalPopChoice(u_24);
                                  }
                                else
                                  {
                                    t = t_24;
                                    t = z_40(t);
                                  }
                              }
                            }
                          else
                            t = z_40(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(m_33, sym_Assign_1))
                        {
                          k_33 = ATgetArgument(m_33, 0);
                          e_32 :
                          if(match_cons(k_33, sym_Var_1))
                            {
                              i_33 = ATgetArgument(k_33, 0);
                              t = a_41(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(m_33, sym_Match_2))
                            {
                              k_33 = ATgetArgument(m_33, 0);
                              l_33 = ATgetArgument(m_33, 1);
                              f_32 :
                              if(match_cons(k_33, sym_Op_2))
                                {
                                  i_33 = ATgetArgument(k_33, 0);
                                  h_33 = ATgetArgument(k_33, 1);
                                  g_32 :
                                  if(((ATgetType(h_33) == AT_LIST) && ((ATermList) h_33 != ATempty)))
                                    {
                                      d_33 = ATgetFirst((ATermList) h_33);
                                      e_33 = (ATerm) ATgetNext((ATermList) h_33);
                                      h_32 :
                                      if(((ATgetType(e_33) == AT_LIST) && ((ATermList) e_33 != ATempty)))
                                        {
                                          f_33 = ATgetFirst((ATermList) e_33);
                                          g_33 = (ATerm) ATgetNext((ATermList) e_33);
                                          i_32 :
                                          if(((ATermList) g_33 == ATempty))
                                            {
                                              j_32 :
                                              if(match_string(i_33, "Cons"))
                                                {
                                                  ATerm v_24 = t;
                                                  int w_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = b_41(t);
                                                      LocalPopChoice(w_24);
                                                    }
                                                  else
                                                    {
                                                      t = v_24;
                                                      t = h_41(t);
                                                    }
                                                }
                                              else
                                                t = h_41(t);
                                            }
                                          else
                                            {
                                              k_32 :
                                              t = h_41(t);
                                            }
                                        }
                                      else
                                        {
                                          l_32 :
                                          t = h_41(t);
                                        }
                                    }
                                  else
                                    {
                                      if(((ATermList) h_33 == ATempty))
                                        {
                                          m_32 :
                                          if(match_string(i_33, "Nil"))
                                            {
                                              ATerm x_24 = t;
                                              int y_24 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = g_41(t);
                                                  LocalPopChoice(y_24);
                                                }
                                              else
                                                {
                                                  t = x_24;
                                                  t = h_41(t);
                                                }
                                            }
                                          else
                                            t = h_41(t);
                                        }
                                      else
                                        {
                                          n_32 :
                                          t = h_41(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(k_33, sym_Real_1))
                                    {
                                      i_33 = ATgetArgument(k_33, 0);
                                      t = i_41(t);
                                    }
                                  else
                                    {
                                      if(match_cons(k_33, sym_Int_1))
                                        {
                                          i_33 = ATgetArgument(k_33, 0);
                                          t = j_41(t);
                                        }
                                      else
                                        {
                                          if(match_cons(k_33, sym_Str_1))
                                            {
                                              i_33 = ATgetArgument(k_33, 0);
                                              t = k_41(t);
                                            }
                                          else
                                            {
                                              if(match_cons(k_33, sym_Var_1))
                                                {
                                                  i_33 = ATgetArgument(k_33, 0);
                                                  t = l_41(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(k_33, sym_As_2))
                                                    {
                                                      i_33 = ATgetArgument(k_33, 0);
                                                      h_33 = ATgetArgument(k_33, 1);
                                                      t = m_41(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(k_33, sym_BuildDefault_1))
                                                        {
                                                          i_33 = ATgetArgument(k_33, 0);
                                                          t = n_41(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(k_33, sym_Wld_0))
                                                            t = o_41(t);
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
                              if(match_cons(m_33, sym_Match_1))
                                {
                                  k_33 = ATgetArgument(m_33, 0);
                                  t = p_41(t);
                                }
                              else
                                {
                                  if(match_cons(m_33, sym_Let_2))
                                    {
                                      k_33 = ATgetArgument(m_33, 0);
                                      l_33 = ATgetArgument(m_33, 1);
                                      t = t_41(t);
                                    }
                                  else
                                    {
                                      if(match_cons(m_33, sym_Where_1))
                                        {
                                          k_33 = ATgetArgument(m_33, 0);
                                          t = u_41(t);
                                        }
                                      else
                                        {
                                          if(match_cons(m_33, sym_Test_1))
                                            {
                                              k_33 = ATgetArgument(m_33, 0);
                                              t = v_41(t);
                                            }
                                          else
                                            {
                                              if(match_cons(m_33, sym_Call_2))
                                                {
                                                  k_33 = ATgetArgument(m_33, 0);
                                                  l_33 = ATgetArgument(m_33, 1);
                                                  o_32 :
                                                  if(match_cons(k_33, sym_SVar_1))
                                                    {
                                                      i_33 = ATgetArgument(k_33, 0);
                                                      t = w_41(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(m_33, sym_Prim_2))
                                                    {
                                                      k_33 = ATgetArgument(m_33, 0);
                                                      l_33 = ATgetArgument(m_33, 1);
                                                      t = x_41(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(m_33, sym_Not_1))
                                                        {
                                                          k_33 = ATgetArgument(m_33, 0);
                                                          t = c_42(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(m_33, sym_LGChoice_2))
                                                            {
                                                              k_33 = ATgetArgument(m_33, 0);
                                                              l_33 = ATgetArgument(m_33, 1);
                                                              t = d_42(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(m_33, sym_GChoice_2))
                                                                {
                                                                  k_33 = ATgetArgument(m_33, 0);
                                                                  l_33 = ATgetArgument(m_33, 1);
                                                                  t = e_42(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(m_33, sym_GuardedLChoice_3))
                                                                    {
                                                                      k_33 = ATgetArgument(m_33, 0);
                                                                      l_33 = ATgetArgument(m_33, 1);
                                                                      j_33 = ATgetArgument(m_33, 2);
                                                                      t = f_42(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(m_33, sym_LChoice_2))
                                                                        {
                                                                          k_33 = ATgetArgument(m_33, 0);
                                                                          l_33 = ATgetArgument(m_33, 1);
                                                                          t = g_42(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(m_33, sym_Choice_2))
                                                                            {
                                                                              k_33 = ATgetArgument(m_33, 0);
                                                                              l_33 = ATgetArgument(m_33, 1);
                                                                              t = h_42(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(m_33, sym_Seq_2))
                                                                                {
                                                                                  k_33 = ATgetArgument(m_33, 0);
                                                                                  l_33 = ATgetArgument(m_33, 1);
                                                                                  t = i_42(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(m_33, sym_Scope_2))
                                                                                    {
                                                                                      k_33 = ATgetArgument(m_33, 0);
                                                                                      l_33 = ATgetArgument(m_33, 1);
                                                                                      t = j_42(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(m_33, sym_Fail_0))
                                                                                        t = k_42(t);
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(m_33, sym_Id_0))
                                                                                            t = l_42(t);
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
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  i_51 = t;
  h_51 :
  if(match_cons(i_51, sym__2))
    {
      j_51 = ATgetArgument(i_51, 0);
      k_51 = ATgetArgument(i_51, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_z_24), not_null(k_51)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  r_51 :
  if(((ATgetType(t_51) == AT_LIST) && ((ATermList) t_51 != ATempty)))
    {
      u_51 = ATgetFirst((ATermList) t_51);
      v_51 = (ATerm) ATgetNext((ATermList) t_51);
      s_51 :
      if(match_int(u_51, 10))
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_51)), term_d_25), term_a_25);
      else
        {
          if(match_int(u_51, 92))
            t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_51)), term_a_25), term_a_25);
          else
            {
              if(match_int(u_51, 34))
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_51)), term_h_25), term_a_25);
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
    ATerm c_52 (ATerm t)
    {
      ATerm m_25 = t;
      int r_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Escape_0(t);
          {
            ATerm h_2 (ATerm t)
            {
              t = Cons_2(t, _id, c_52);
              return(t);
            }
            t = Cons_2(t, _id, h_2);
          }
          LocalPopChoice(r_25);
        }
      else
        {
          t = m_25;
          {
            ATerm s_25 = t;
            int t_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, c_52);
                LocalPopChoice(t_25);
              }
            else
              {
                t = s_25;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = c_52(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  g_52 :
  if(match_cons(h_52, sym__2))
    {
      i_52 = ATgetArgument(h_52, 0);
      j_52 = ATgetArgument(h_52, 1);
      {
        ATerm m_52 = NULL,o_52 = NULL;
        ATerm u_25;
        u_25 = t;
        {
          ATerm n_52 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_v_25), not_null(i_52));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  n_52 = t;
                  if(((m_52 != NULL) && (m_52 != n_52)))
                    _fail(n_52);
                  else
                    m_52 = n_52;
                }
              }
            }
          }
        }
        t = u_25;
        {
          ATerm p_52 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_w_25), not_null(i_52));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  p_52 = t;
                  if(((o_52 != NULL) && (o_52 != p_52)))
                    _fail(p_52);
                  else
                    o_52 = p_52;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_24), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_19), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(o_52))), term_z_25)))), not_null(j_52)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_19), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(m_52))), term_z_25)))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  {
    ATerm y_52 = NULL,z_52 = NULL;
    t = term_l_10;
    {
      ATerm i_2 (ATerm t)
      {
        t = term_b_11;
        return(t);
      }
      t = rewrite_1(t, i_2);
      {
        y_52 = t;
        u_52 :
        if(match_cons(y_52, sym_Defined_1))
          {
            z_52 = ATgetArgument(y_52, 0);
            v_52 :
            if(!(match_string(z_52, "b_0")))
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(w_52);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm f_53 = NULL;
  f_53 = t;
  {
    ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(f_53));
    {
      ATerm j_2 (ATerm t)
      {
        t = term_e_11;
        return(t);
      }
      t = rewrite_1(t, j_2);
      {
        h_53 = t;
        d_53 :
        if(match_cons(h_53, sym_Defined_2))
          {
            i_53 = ATgetArgument(h_53, 0);
            j_53 = ATgetArgument(h_53, 1);
            e_53 :
            if(match_string(i_53, "e_0"))
              {
                if(((f_53 != NULL) && (f_53 != j_53)))
                  _fail(j_53);
                else
                  f_53 = j_53;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(f_53);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  q_53 = t;
  p_53 :
  if(match_cons(q_53, sym_SDef_3))
    {
      r_53 = ATgetArgument(q_53, 0);
      s_53 = ATgetArgument(q_53, 1);
      t_53 = ATgetArgument(q_53, 2);
      {
        ATerm x_53 = NULL,y_53 = NULL;
        ATerm z_53 = NULL;
        t = not_null(s_53);
        {
          ATerm a_54 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            z_53 = t;
            {
              if(((x_53 != NULL) && (x_53 != z_53)))
                _fail(z_53);
              else
                x_53 = z_53;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_53), not_null(t_53));
                {
                  ATerm a_26 = t;
                  int b_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_2 (ATerm t)
                      {
                        ATerm c_26 = t;
                        int d_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            LocalPopChoice(d_26);
                          }
                        else
                          {
                            t = c_26;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, k_2, _id);
                      t = TracedBody_0(t);
                      LocalPopChoice(b_26);
                    }
                  else
                    {
                      t = a_26;
                      t = PlainBody_0(t);
                    }
                  {
                    a_54 = t;
                    if(((y_53 != NULL) && (y_53 != a_54)))
                      _fail(a_54);
                    else
                      y_53 = a_54;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_m_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_53)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(x_53)), term_f_26)))), not_null(y_53));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm quote_1 (ATerm t, ATerm y_76 (ATerm))
{
  ATerm h_54 = NULL;
  ATerm j_54 = NULL,l_54 = NULL;
  h_54 = t;
  {
    ATerm g_26;
    g_26 = t;
    {
      ATerm k_54 = NULL;
      t = y_76(t);
      {
        k_54 = t;
        if(((j_54 != NULL) && (j_54 != k_54)))
          _fail(k_54);
        else
          j_54 = k_54;
      }
    }
    t = g_26;
    {
      ATerm m_54 = NULL;
      t = not_null(h_54);
      {
        t = explode_string_0(t);
        {
          m_54 = t;
          if(((l_54 != NULL) && (l_54 != m_54)))
            _fail(m_54);
          else
            l_54 = m_54;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, not_null(j_54))), not_null(l_54)), (ATerm) ATinsert(ATempty, not_null(j_54)));
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
    t = term_h_25;
    return(t);
  }
  t = quote_1(t, l_2);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
  s_54 = t;
  r_54 :
  if(((ATgetType(s_54) == AT_LIST) && ((ATermList) s_54 != ATempty)))
    {
      t_54 = ATgetFirst((ATermList) s_54);
      u_54 = (ATerm) ATgetNext((ATermList) s_54);
      t = not_null(t_54);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
  a_55 = t;
  z_54 :
  if(match_cons(a_55, sym__2))
    {
      b_55 = ATgetArgument(a_55, 0);
      c_55 = ATgetArgument(a_55, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_55), not_null(c_55));
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
ATerm rewrite_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm i_55 = NULL;
  ATerm k_55 = NULL;
  i_55 = t;
  {
    ATerm l_55 = NULL;
    t = term_h_26;
    {
      t = z_69(t);
      {
        l_55 = t;
        if(((k_55 != NULL) && (k_55 != l_55)))
          _fail(l_55);
        else
          k_55 = l_55;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_55), not_null(i_55));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
  t_55 = t;
  s_55 :
  if(match_cons(t_55, sym__2))
    {
      u_55 = ATgetArgument(t_55, 0);
      v_55 = ATgetArgument(t_55, 1);
      {
        ATerm y_55 = NULL;
        ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(u_55), not_null(v_55));
        {
          ATerm m_2 (ATerm t)
          {
            t = term_i_26;
            return(t);
          }
          t = rewrite_1(t, m_2);
          {
            z_55 = t;
            q_55 :
            if(match_cons(z_55, sym_Defined_2))
              {
                a_56 = ATgetArgument(z_55, 0);
                b_56 = ATgetArgument(z_55, 1);
                r_55 :
                if(match_string(a_56, "f_0"))
                  {
                    if(((y_55 != NULL) && (y_55 != b_56)))
                      _fail(b_56);
                    else
                      y_55 = b_56;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = not_null(y_55);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InitConstructor_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
  k_56 = t;
  j_56 :
  if(match_cons(k_56, sym_OpDecl_2))
    {
      l_56 = ATgetArgument(k_56, 0);
      m_56 = ATgetArgument(k_56, 1);
      {
        ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,v_56 = NULL;
        ATerm k_26;
        k_26 = t;
        {
          ATerm s_56 = NULL;
          t = not_null(m_56);
          {
            ATerm t_56 = NULL;
            t = Arity_0(t);
            {
              s_56 = t;
              {
                if(((q_56 != NULL) && (q_56 != s_56)))
                  _fail(s_56);
                else
                  q_56 = s_56;
                {
                  ATerm u_56 = NULL;
                  t = int_to_string_0(t);
                  {
                    t_56 = t;
                    {
                      if(((p_56 != NULL) && (p_56 != t_56)))
                        _fail(t_56);
                      else
                        p_56 = t_56;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_56), not_null(q_56));
                        {
                          t = ConstructorName_0(t);
                          {
                            u_56 = t;
                            if(((r_56 != NULL) && (r_56 != u_56)))
                              _fail(u_56);
                            else
                              r_56 = u_56;
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
        t = k_26;
        {
          ATerm w_56 = NULL;
          t = not_null(l_56);
          {
            t = double_quote_0(t);
            {
              w_56 = t;
              if(((v_56 != NULL) && (v_56 != w_56)))
                _fail(w_56);
              else
                v_56 = w_56;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_56)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_56)), term_f_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_26), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(p_56))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(v_56))))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InitConstructors_0 (ATerm t)
{
  ATerm f_57 = NULL;
  ATerm h_57 = NULL;
  f_57 = t;
  {
    ATerm i_57 = NULL,k_57 = NULL;
    ATerm j_57 = NULL;
    t = not_null(f_57);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          j_57 = t;
          if(((i_57 != NULL) && (i_57 != j_57)))
            _fail(j_57);
          else
            i_57 = j_57;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_57), (ATerm) ATinsert(ATempty, term_q_26));
      {
        t = conc_0(t);
        {
          k_57 = t;
          if(((h_57 != NULL) && (h_57 != k_57)))
            _fail(k_57);
          else
            h_57 = k_57;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_o_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_v_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_o_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(h_57)));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm r_57 = NULL;
  r_57 = t;
  t = SSL_int_to_string(not_null(r_57));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
  c_58 = t;
  a_58 :
  if(((ATgetType(c_58) == AT_LIST) && ((ATermList) c_58 != ATempty)))
    {
      d_58 = ATgetFirst((ATermList) c_58);
      e_58 = (ATerm) ATgetNext((ATermList) c_58);
      b_58 :
      if(match_int(d_58, 95))
        {
          ATerm g_58 = NULL;
          ATerm h_58 = NULL;
          t = not_null(e_58);
          {
            t = r_0(t);
            {
              h_58 = t;
              if(((g_58 != NULL) && (g_58 != h_58)))
                _fail(h_58);
              else
                g_58 = h_58;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_58)), term_w_26), term_w_26);
        }
      else
        {
          if(match_int(d_58, 45))
            {
              ATerm j_58 = NULL;
              ATerm k_58 = NULL;
              t = not_null(e_58);
              {
                t = r_0(t);
                {
                  k_58 = t;
                  if(((j_58 != NULL) && (j_58 != k_58)))
                    _fail(k_58);
                  else
                    j_58 = k_58;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_58)), term_w_26);
            }
          else
            {
              if(match_int(d_58, 39))
                {
                  ATerm m_58 = NULL;
                  ATerm n_58 = NULL;
                  t = not_null(e_58);
                  {
                    t = r_0(t);
                    {
                      n_58 = t;
                      if(((m_58 != NULL) && (m_58 != n_58)))
                        _fail(n_58);
                      else
                        m_58 = n_58;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_58)), term_w_26), term_x_26), term_w_26);
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
ATerm escape_1 (ATerm t, ATerm l_76 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm u_58 (ATerm t)
    {
      ATerm y_26 = t;
      int z_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_76(t, u_58);
          LocalPopChoice(z_26);
        }
      else
        {
          t = y_26;
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, u_58);
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = u_58(t);
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
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
  x_58 = t;
  w_58 :
  if(match_cons(x_58, sym__2))
    {
      y_58 = ATgetArgument(x_58, 0);
      z_58 = ATgetArgument(x_58, 1);
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_58), not_null(z_58));
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            t = SSL_addr(not_null(y_58), not_null(z_58));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_79(t);
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
        h_59 = t;
        g_59 :
        if(((ATgetType(h_59) == AT_LIST) && ((ATermList) h_59 != ATempty)))
          {
            i_59 = ATgetFirst((ATermList) h_59);
            j_59 = (ATerm) ATgetNext((ATermList) h_59);
            {
              ATerm m_59 = NULL,o_59 = NULL;
              ATerm g_27;
              g_27 = t;
              {
                ATerm n_59 = NULL;
                t = not_null(i_59);
                {
                  t = c_79(t);
                  {
                    n_59 = t;
                    if(((m_59 != NULL) && (m_59 != n_59)))
                      _fail(n_59);
                    else
                      m_59 = n_59;
                  }
                }
              }
              t = g_27;
              {
                ATerm p_59 = NULL;
                t = not_null(j_59);
                {
                  t = foldr_3(t, a_79, b_79, c_79);
                  {
                    p_59 = t;
                    if(((o_59 != NULL) && (o_59 != p_59)))
                      _fail(p_59);
                    else
                      o_59 = p_59;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_59), not_null(o_59));
                  t = b_79(t);
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
  ATerm n_2 (ATerm t)
  {
    t = term_v_18;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_x_18;
    return(t);
  }
  t = foldr_3(t, n_2, add_0, o_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
  x_59 = t;
  v_59 :
  if(match_cons(x_59, sym_FunType_2))
    {
      y_59 = ATgetArgument(x_59, 0);
      w_59 = ATgetArgument(x_59, 1);
      {
        t = not_null(y_59);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(x_59, sym_ConstType_1))
        {
          y_59 = ATgetArgument(x_59, 0);
          t = term_v_18;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm DeclareConstructor_0 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
  k_60 = t;
  j_60 :
  if(match_cons(k_60, sym_OpDecl_2))
    {
      l_60 = ATgetArgument(k_60, 0);
      m_60 = ATgetArgument(k_60, 1);
      {
        ATerm p_60 = NULL,q_60 = NULL;
        ATerm r_60 = NULL;
        t = not_null(m_60);
        {
          ATerm s_60 = NULL,u_60 = NULL,w_60 = NULL;
          t = Arity_0(t);
          {
            r_60 = t;
            {
              if(((p_60 != NULL) && (p_60 != r_60)))
                _fail(r_60);
              else
                p_60 = r_60;
              {
                ATerm h_27;
                h_27 = t;
                {
                  ATerm t_60 = NULL;
                  t = not_null(l_60);
                  {
                    t = cify_0(t);
                    {
                      t_60 = t;
                      if(((s_60 != NULL) && (s_60 != t_60)))
                        _fail(t_60);
                      else
                        s_60 = t_60;
                    }
                  }
                }
                t = h_27;
                {
                  ATerm v_60 = NULL;
                  t = not_null(p_60);
                  {
                    t = int_to_string_0(t);
                    {
                      v_60 = t;
                      if(((u_60 != NULL) && (u_60 != v_60)))
                        _fail(v_60);
                      else
                        u_60 = v_60;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_60)), term_j_27), not_null(s_60)), term_i_27);
                    {
                      t = concat_strings_0(t);
                      {
                        w_60 = t;
                        {
                          if(((q_60 != NULL) && (q_60 != w_60)))
                            _fail(w_60);
                          else
                            q_60 = w_60;
                          {
                            ATerm k_27;
                            k_27 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(l_60), not_null(p_60)), (ATerm) ATmakeAppl(sym_Defined_2, term_l_27, not_null(q_60)));
                              {
                                ATerm p_2 (ATerm t)
                                {
                                  t = term_i_26;
                                  return(t);
                                }
                                t = assert_1(t, p_2);
                              }
                            }
                            t = k_27;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_o_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_60)), term_n_12)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateSig_0 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL;
  m_61 = t;
  i_61 :
  if(match_cons(m_61, sym_Signature_1))
    {
      n_61 = ATgetArgument(m_61, 0);
      j_61 :
      if(((ATgetType(n_61) == AT_LIST) && ((ATermList) n_61 != ATempty)))
        {
          o_61 = ATgetFirst((ATermList) n_61);
          q_61 = (ATerm) ATgetNext((ATermList) n_61);
          k_61 :
          if(match_cons(o_61, sym_Constructors_1))
            {
              p_61 = ATgetArgument(o_61, 0);
              l_61 :
              if(((ATermList) q_61 == ATempty))
                {
                  {
                    ATerm s_61 = NULL,t_61 = NULL,w_61 = NULL;
                    ATerm p_27;
                    p_27 = t;
                    {
                      ATerm u_61 = NULL;
                      t = not_null(p_61);
                      {
                        ATerm v_61 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          u_61 = t;
                          {
                            if(((s_61 != NULL) && (s_61 != u_61)))
                              _fail(u_61);
                            else
                              s_61 = u_61;
                            {
                              t = not_null(p_61);
                              {
                                t = InitConstructors_0(t);
                                {
                                  v_61 = t;
                                  if(((t_61 != NULL) && (t_61 != v_61)))
                                    _fail(v_61);
                                  else
                                    t_61 = v_61;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = p_27;
                    {
                      ATerm x_61 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_61), (ATerm) ATinsert(ATempty, not_null(t_61)));
                      {
                        t = conc_0(t);
                        {
                          x_61 = t;
                          if(((w_61 != NULL) && (w_61 != x_61)))
                            _fail(x_61);
                          else
                            w_61 = x_61;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(w_61));
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
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
  e_62 = t;
  d_62 :
  if(match_cons(e_62, sym__2))
    {
      f_62 = ATgetArgument(e_62, 0);
      g_62 = ATgetArgument(e_62, 1);
      {
        t = not_null(f_62);
        {
          ATerm q_2 (ATerm t)
          {
            t = not_null(g_62);
            return(t);
          }
          t = at_end_1(t, q_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateType_0 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
  p_62 = t;
  n_62 :
  if(match_cons(p_62, sym_FunType_2))
    {
      q_62 = ATgetArgument(p_62, 0);
      o_62 = ATgetArgument(p_62, 1);
      {
        ATerm s_62 = NULL;
        ATerm t_62 = NULL;
        t = not_null(q_62);
        {
          t = map_1(t, TranslateType_0);
          {
            t_62 = t;
            if(((s_62 != NULL) && (s_62 != t_62)))
              _fail(t_62);
            else
              s_62 = t_62;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_m_12, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(s_62)));
      }
    }
  else
    {
      if(match_cons(p_62, sym_ConstType_1))
        {
          q_62 = ATgetArgument(p_62, 0);
          t = term_m_12;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm TranslateVarDec_0 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL;
  f_63 = t;
  c_63 :
  if(match_cons(f_63, sym_VarDec_2))
    {
      g_63 = ATgetArgument(f_63, 0);
      h_63 = ATgetArgument(f_63, 1);
      d_63 :
      if(match_cons(h_63, sym_FunType_2))
        {
          i_63 = ATgetArgument(h_63, 0);
          e_63 = ATgetArgument(h_63, 1);
          {
            ATerm l_63 = NULL;
            ATerm m_63 = NULL;
            t = not_null(i_63);
            {
              t = map_1(t, TranslateType_0);
              {
                m_63 = t;
                if(((l_63 != NULL) && (l_63 != m_63)))
                  _fail(m_63);
                else
                  l_63 = m_63;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_m_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_63)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(l_63)))));
          }
        }
      else
        {
          if(match_cons(h_63, sym_ConstType_1))
            {
              i_63 = ATgetArgument(h_63, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_m_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_63)), term_n_12));
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
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL;
  u_63 = t;
  t_63 :
  if(match_cons(u_63, sym_SDef_3))
    {
      v_63 = ATgetArgument(u_63, 0);
      w_63 = ATgetArgument(u_63, 1);
      x_63 = ATgetArgument(u_63, 2);
      {
        ATerm b_64 = NULL;
        ATerm c_64 = NULL;
        t = not_null(w_63);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            c_64 = t;
            if(((b_64 != NULL) && (b_64 != c_64)))
              _fail(c_64);
            else
              b_64 = c_64;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_63)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(b_64)), term_m_12))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateSpec_0 (ATerm t)
{
  ATerm o_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  o_64 = t;
  i_64 :
  if(match_cons(o_64, sym_Specification_1))
    {
      q_64 = ATgetArgument(o_64, 0);
      j_64 :
      if(((ATgetType(q_64) == AT_LIST) && ((ATermList) q_64 != ATempty)))
        {
          r_64 = ATgetFirst((ATermList) q_64);
          t_64 = (ATerm) ATgetNext((ATermList) q_64);
          k_64 :
          if(match_cons(r_64, sym_Signature_1))
            {
              s_64 = ATgetArgument(r_64, 0);
              l_64 :
              if(((ATgetType(t_64) == AT_LIST) && ((ATermList) t_64 != ATempty)))
                {
                  u_64 = ATgetFirst((ATermList) t_64);
                  w_64 = (ATerm) ATgetNext((ATermList) t_64);
                  m_64 :
                  if(match_cons(u_64, sym_Strategies_1))
                    {
                      v_64 = ATgetArgument(u_64, 0);
                      n_64 :
                      if(((ATermList) w_64 == ATempty))
                        {
                          {
                            ATerm z_64 = NULL,b_65 = NULL;
                            ATerm q_27;
                            q_27 = t;
                            {
                              ATerm a_65 = NULL;
                              t = not_null(v_64);
                              {
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  a_65 = t;
                                  if(((z_64 != NULL) && (z_64 != a_65)))
                                    _fail(a_65);
                                  else
                                    z_64 = a_65;
                                }
                              }
                            }
                            t = q_27;
                            {
                              ATerm c_65 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(z_64), not_null(v_64));
                              {
                                t = conc_0(t);
                                {
                                  c_65 = t;
                                  if(((b_65 != NULL) && (b_65 != c_65)))
                                    _fail(c_65);
                                  else
                                    b_65 = c_65;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(b_65)), term_b_28), (ATerm) ATmakeAppl(sym_Signature_1, not_null(s_64))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_27, (ATerm) ATinsert(ATempty, term_a_28))), term_u_27), term_s_27));
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
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
  i_65 = t;
  h_65 :
  if(((ATgetType(i_65) == AT_LIST) && ((ATermList) i_65 != ATempty)))
    {
      j_65 = ATgetFirst((ATermList) i_65);
      k_65 = (ATerm) ATgetNext((ATermList) i_65);
      t = not_null(k_65);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
  r_65 = t;
  q_65 :
  if(match_cons(r_65, sym__2))
    {
      s_65 = ATgetArgument(r_65, 0);
      t_65 = ATgetArgument(r_65, 1);
      {
        ATerm c_28;
        c_28 = t;
        {
          ATerm w_65 = NULL;
          ATerm x_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_65), not_null(t_65));
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
              x_65 = t;
              if(((w_65 != NULL) && (w_65 != x_65)))
                _fail(x_65);
              else
                w_65 = x_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_65), not_null(t_65), not_null(w_65));
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
ATerm end_scope_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
  ATerm f_28;
  f_28 = t;
  {
    ATerm h_66 = NULL;
    ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
    t = u_69(t);
    {
      h_66 = t;
      {
        if(((f_66 != NULL) && (f_66 != h_66)))
          _fail(h_66);
        else
          f_66 = h_66;
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_66), term_i_28);
              t = table_get_0(t);
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_66 = t;
            d_66 :
            if(((ATgetType(i_66) == AT_LIST) && ((ATermList) i_66 != ATempty)))
              {
                j_66 = ATgetFirst((ATermList) i_66);
                k_66 = (ATerm) ATgetNext((ATermList) i_66);
                {
                  if(((g_66 != NULL) && (g_66 != j_66)))
                    _fail(j_66);
                  else
                    g_66 = j_66;
                  {
                    if(((e_66 != NULL) && (e_66 != k_66)))
                      _fail(k_66);
                    else
                      e_66 = k_66;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(f_66), term_i_28, not_null(e_66));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_66);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm l_66 = NULL;
                              l_66 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_66), not_null(l_66));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, r_2);
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
ATerm restore_always_2 (ATerm t, ATerm t_91 (ATerm), ATerm u_91 (ATerm))
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_91(t);
      t = u_91(t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      {
        t = u_91(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_69 (ATerm))
{
  ATerm s_66 = NULL;
  ATerm l_28;
  l_28 = t;
  {
    ATerm u_66 = NULL;
    ATerm v_66 = NULL;
    t = t_69(t);
    {
      u_66 = t;
      {
        if(((s_66 != NULL) && (s_66 != u_66)))
          _fail(u_66);
        else
          s_66 = u_66;
        {
          ATerm w_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_66), term_i_28);
          {
            ATerm m_28 = t;
            int n_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_28);
              }
            else
              {
                t = m_28;
                t = (ATerm) ATempty;
              }
            {
              w_66 = t;
              if(((v_66 != NULL) && (v_66 != w_66)))
                _fail(w_66);
              else
                v_66 = w_66;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_66), term_i_28, (ATerm) ATinsert(CheckATermList(not_null(v_66)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_28;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm))
{
  t = begin_scope_1(t, v_69);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1(t, v_69);
      return(t);
    }
    t = restore_always_2(t, w_69, s_2);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_69 (ATerm))
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
  g_67 = t;
  f_67 :
  if(match_cons(g_67, sym__2))
    {
      h_67 = ATgetArgument(g_67, 0);
      i_67 = ATgetArgument(g_67, 1);
      {
        ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL;
        ATerm o_28;
        o_28 = t;
        {
          ATerm o_67 = NULL;
          ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
          t = x_69(t);
          {
            o_67 = t;
            {
              if(((l_67 != NULL) && (l_67 != o_67)))
                _fail(o_67);
              else
                l_67 = o_67;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_67), not_null(h_67), not_null(i_67));
                {
                  t = table_push_0(t);
                  {
                    ATerm p_28 = t;
                    int q_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_67), term_i_28);
                        t = table_get_0(t);
                        LocalPopChoice(q_28);
                      }
                    else
                      {
                        t = p_28;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_67 = t;
                      e_67 :
                      if(((ATgetType(p_67) == AT_LIST) && ((ATermList) p_67 != ATempty)))
                        {
                          q_67 = ATgetFirst((ATermList) p_67);
                          r_67 = (ATerm) ATgetNext((ATermList) p_67);
                          {
                            if(((m_67 != NULL) && (m_67 != q_67)))
                              _fail(q_67);
                            else
                              m_67 = q_67;
                            {
                              if(((n_67 != NULL) && (n_67 != r_67)))
                                _fail(r_67);
                              else
                                n_67 = r_67;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_67), term_i_28, (ATerm) ATinsert(CheckATermList(not_null(n_67)), (ATerm) ATinsert(CheckATermList(not_null(m_67)), not_null(h_67))));
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
        t = o_28;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm init_term_caching_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL;
  ATerm r_28;
  r_28 = t;
  {
    ATerm z_67 = NULL;
    ATerm a_68 = NULL;
    t = term_t_28;
    {
      z_67 = t;
      {
        if(((x_67 != NULL) && (x_67 != z_67)))
          _fail(z_67);
        else
          x_67 = z_67;
        {
          t = term_j_18;
          {
            a_68 = t;
            if(((y_67 != NULL) && (y_67 != a_68)))
              _fail(a_68);
            else
              y_67 = a_68;
          }
        }
      }
    }
  }
  t = r_28;
  {
    ATerm u_28;
    u_28 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(x_67)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_28, not_null(y_67)));
      {
        ATerm x_2 (ATerm t)
        {
          t = term_y_15;
          return(t);
        }
        t = assert_1(t, x_2);
      }
    }
    t = u_28;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm g_68 (ATerm t)
    {
      ATerm y_2 (ATerm t)
      {
        t = term_n_14;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        ATerm f_3 (ATerm t)
        {
          ATerm x_28 = t;
          int y_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              LocalPopChoice(y_28);
            }
          else
            {
              t = x_28;
              {
                ATerm z_28 = t;
                int c_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    LocalPopChoice(c_29);
                  }
                else
                  {
                    t = z_28;
                    {
                      ATerm e_29 = t;
                      int f_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          LocalPopChoice(f_29);
                        }
                      else
                        {
                          t = e_29;
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
          t = _all(t, g_68);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, y_2, b_3);
      return(t);
    }
    t = g_68(t);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm h_3 (ATerm t)
        {
          ATerm f_68 = NULL;
          f_68 = t;
          e_68 :
          if(match_cons(f_68, sym_InitCachedTerms_0))
            t = init_cached_terms_0(t);
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1(t, h_3);
        return(t);
      }
      t = try_1(t, g_3);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_68 = NULL;
  ATerm g_29;
  g_29 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm l_68 = NULL,m_68 = NULL;
      l_68 = t;
      j_68 :
      if(match_cons(l_68, sym_Program_1))
        {
          m_68 = ATgetArgument(l_68, 0);
          if(((k_68 != NULL) && (k_68 != m_68)))
            _fail(m_68);
          else
            k_68 = m_68;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, n_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_29), not_null(k_68)), term_h_29));
      {
        t = printnl_0(t);
        {
          t = term_x_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = g_29;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATempty, term_j_29));
  {
    t = printnl_0(t);
    {
      t = term_x_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL;
  ATerm o_3 (ATerm t)
  {
    ATerm p_3 (ATerm t)
    {
      ATerm l_29 = t;
      if((PushChoice() == 0))
        {
          ATerm q_3 (ATerm t)
          {
            ATerm v_68 = NULL;
            v_68 = t;
            o_68 :
            if(!(match_cons(v_68, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, q_3);
          PopChoice();
          _fail(t);
        }
      else
        t = l_29;
      return(t);
    }
    t = _2(t, p_3, _id);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm s_3 (ATerm t)
        {
          ATerm w_68 = NULL,x_68 = NULL;
          w_68 = t;
          q_68 :
          if(match_cons(w_68, sym_Runtime_1))
            {
              x_68 = ATgetArgument(w_68, 0);
              if(((u_68 != NULL) && (u_68 != x_68)))
                _fail(x_68);
              else
                u_68 = x_68;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, s_3);
        return(t);
      }
      t = _2(t, r_3, _id);
      {
        ATerm u_3 (ATerm t)
        {
          ATerm x_3 (ATerm t)
          {
            ATerm y_68 = NULL,z_68 = NULL;
            y_68 = t;
            s_68 :
            if(match_cons(y_68, sym_Program_1))
              {
                z_68 = ATgetArgument(y_68, 0);
                if(((t_68 != NULL) && (t_68 != z_68)))
                  _fail(z_68);
                else
                  t_68 = z_68;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, x_3);
          return(t);
        }
        t = _2(t, u_3, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_29), not_null(u_68)), term_m_29), not_null(t_68)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, o_3);
  {
    t = term_v_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
  g_69 = t;
  f_69 :
  if(match_cons(g_69, sym__2))
    {
      h_69 = ATgetArgument(g_69, 0);
      i_69 = ATgetArgument(g_69, 1);
      t = SSL_WriteToTextFile(not_null(h_69), not_null(i_69));
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm i_50 (ATerm), ATerm j_50 (ATerm))
{
  ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL;
  q_69 = t;
  p_69 :
  if(match_cons(q_69, sym__2))
    {
      r_69 = ATgetArgument(q_69, 0);
      s_69 = ATgetArgument(q_69, 1);
      {
        ATerm b_70 = NULL;
        t = not_null(r_69);
        {
          ATerm d_70 = NULL;
          t = i_50(t);
          {
            b_70 = t;
            {
              t = not_null(s_69);
              {
                t = j_50(t);
                {
                  d_70 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_70), not_null(d_70));
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
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
  k_70 = t;
  j_70 :
  if(match_cons(k_70, sym__2))
    {
      l_70 = ATgetArgument(k_70, 0);
      m_70 = ATgetArgument(k_70, 1);
      t = SSL_WriteToBinaryFile(not_null(l_70), not_null(m_70));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm u_70 = NULL;
  ATerm o_29;
  o_29 = t;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm p_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_3 (ATerm t)
          {
            ATerm v_70 = NULL,w_70 = NULL;
            v_70 = t;
            r_70 :
            if(match_cons(v_70, sym_Output_1))
              {
                w_70 = ATgetArgument(v_70, 0);
                if(((u_70 != NULL) && (u_70 != w_70)))
                  _fail(w_70);
                else
                  u_70 = w_70;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_3);
          LocalPopChoice(r_29);
        }
      else
        {
          t = p_29;
          {
            ATerm x_70 = NULL;
            t = term_t_29;
            {
              x_70 = t;
              if(((u_70 != NULL) && (u_70 != x_70)))
                _fail(x_70);
              else
                u_70 = x_70;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_3, _id);
  }
  t = o_29;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        t = not_null(u_70);
        return(t);
      }
      t = split_2(t, g_4, _id);
      return(t);
    }
    t = _2(t, _id, f_4);
    {
      ATerm u_29 = t;
      int v_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_4 (ATerm t)
          {
            ATerm i_4 (ATerm t)
            {
              ATerm y_70 = NULL;
              y_70 = t;
              t_70 :
              if(!(match_cons(y_70, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, i_4);
            return(t);
          }
          t = _2(t, h_4, WriteToBinaryFile_0);
          LocalPopChoice(v_29);
        }
      else
        {
          t = u_29;
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
ATerm apply_strategy_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm e_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL;
  ATerm w_29;
  w_29 = t;
  t = dtime_0(t);
  t = w_29;
  {
    t = c_75(t);
    {
      ATerm x_29;
      x_29 = t;
      {
        ATerm f_71 = NULL;
        t = dtime_0(t);
        {
          f_71 = t;
          if(((e_71 != NULL) && (e_71 != f_71)))
            _fail(f_71);
          else
            e_71 = f_71;
        }
      }
      t = x_29;
      {
        g_71 = t;
        d_71 :
        if(match_cons(g_71, sym__2))
          {
            h_71 = ATgetArgument(g_71, 0);
            i_71 = ATgetArgument(g_71, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_71)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_71))), not_null(i_71));
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
  ATerm o_71 = NULL;
  o_71 = t;
  t = SSL_ReadFromFile(not_null(o_71));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm t_71 = NULL,v_71 = NULL;
  ATerm y_29;
  y_29 = t;
  {
    ATerm u_71 = NULL;
    t = m_77(t);
    {
      u_71 = t;
      if(((t_71 != NULL) && (t_71 != u_71)))
        _fail(u_71);
      else
        t_71 = u_71;
    }
  }
  t = y_29;
  {
    ATerm w_71 = NULL;
    t = n_77(t);
    {
      w_71 = t;
      if(((v_71 != NULL) && (v_71 != w_71)))
        _fail(w_71);
      else
        v_71 = w_71;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_71), not_null(v_71));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_72 = NULL;
  ATerm z_29;
  z_29 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 (ATerm t)
        {
          ATerm d_72 = NULL,e_72 = NULL;
          d_72 = t;
          a_72 :
          if(match_cons(d_72, sym_Input_1))
            {
              e_72 = ATgetArgument(d_72, 0);
              if(((c_72 != NULL) && (c_72 != e_72)))
                _fail(e_72);
              else
                c_72 = e_72;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, j_4);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        {
          ATerm f_72 = NULL;
          t = term_f_30;
          {
            f_72 = t;
            if(((c_72 != NULL) && (c_72 != f_72)))
              _fail(f_72);
            else
              c_72 = f_72;
          }
        }
      }
  }
  t = z_29;
  {
    ATerm k_4 (ATerm t)
    {
      t = not_null(c_72);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_72 = NULL;
  j_72 = t;
  i_72 :
  if(!(match_cons(j_72, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_4);
  t = b_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_72 = NULL;
  l_72 = t;
  t = SSL_table_create(not_null(l_72));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_72 = NULL;
  p_72 = t;
  {
    ATerm k_30;
    k_30 = t;
    {
      t = term_l_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_30, term_m_30, not_null(p_72));
          t = table_put_0(t);
        }
      }
    }
    t = k_30;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL;
  x_72 = t;
  v_72 :
  if(match_string(x_72, "register-usage-info"))
    t = register_usage_1(t, q_0);
  else
    {
      if(((ATgetType(x_72) == AT_LIST) && ((ATermList) x_72 != ATempty)))
        {
          y_72 = ATgetFirst((ATermList) x_72);
          z_72 = (ATerm) ATgetNext((ATermList) x_72);
          w_72 :
          if(((ATgetType(z_72) == AT_LIST) && ((ATermList) z_72 != ATempty)))
            {
              a_73 = ATgetFirst((ATermList) z_72);
              b_73 = (ATerm) ATgetNext((ATermList) z_72);
              {
                ATerm f_73 = NULL;
                ATerm n_30;
                n_30 = t;
                {
                  t = not_null(y_72);
                  t = o_0(t);
                }
                t = n_30;
                {
                  ATerm g_73 = NULL;
                  t = not_null(a_73);
                  {
                    t = p_0(t);
                    {
                      g_73 = t;
                      if(((f_73 != NULL) && (f_73 != g_73)))
                        _fail(g_73);
                      else
                        f_73 = g_73;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_73)), not_null(f_73));
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
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 (ATerm t)
      {
        ATerm f_74 = NULL;
        f_74 = t;
        s_73 :
        if(!(match_string(f_74, "-S")))
          {
            if(!(match_string(f_74, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm t_4 (ATerm t)
      {
        t = term_s_30;
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        t = term_t_30;
        return(t);
      }
      t = Option_3(t, s_4, t_4, u_4);
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 (ATerm t)
            {
              ATerm h_74 = NULL;
              h_74 = t;
              t_73 :
              if(!(match_string(h_74, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm x_4 (ATerm t)
            {
              t = term_w_30;
              return(t);
            }
            ATerm b_5 (ATerm t)
            {
              t = term_x_30;
              return(t);
            }
            t = Option_3(t, w_4, x_4, b_5);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            {
              ATerm a_32 = t;
              int b_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_5 (ATerm t)
                  {
                    ATerm i_74 = NULL;
                    i_74 = t;
                    u_73 :
                    if(!(match_string(i_74, "-v")))
                      {
                        if(!(match_string(i_74, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm e_5 (ATerm t)
                  {
                    t = term_n_33;
                    return(t);
                  }
                  ATerm f_5 (ATerm t)
                  {
                    t = term_q_33;
                    return(t);
                  }
                  t = Option_3(t, d_5, e_5, f_5);
                  LocalPopChoice(b_32);
                }
              else
                {
                  t = a_32;
                  {
                    ATerm r_33 = t;
                    int s_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_5 (ATerm t)
                        {
                          ATerm j_74 = NULL;
                          j_74 = t;
                          v_73 :
                          if(!(match_string(j_74, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm h_5 (ATerm t)
                        {
                          ATerm k_74 = NULL;
                          ATerm n_74 = NULL;
                          n_74 = t;
                          if(((k_74 != NULL) && (k_74 != n_74)))
                            _fail(n_74);
                          else
                            k_74 = n_74;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(k_74));
                          return(t);
                        }
                        ATerm i_5 (ATerm t)
                        {
                          t = term_t_33;
                          return(t);
                        }
                        t = ArgOption_3(t, g_5, h_5, i_5);
                        LocalPopChoice(s_33);
                      }
                    else
                      {
                        t = r_33;
                        {
                          ATerm u_33 = t;
                          int v_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_5 (ATerm t)
                              {
                                ATerm o_74 = NULL;
                                o_74 = t;
                                x_73 :
                                if(!(match_string(o_74, "-i")))
                                  {
                                    if(!(match_string(o_74, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm k_5 (ATerm t)
                              {
                                ATerm p_74 = NULL;
                                ATerm t_74 = NULL;
                                t_74 = t;
                                if(((p_74 != NULL) && (p_74 != t_74)))
                                  _fail(t_74);
                                else
                                  p_74 = t_74;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_74));
                                return(t);
                              }
                              ATerm l_5 (ATerm t)
                              {
                                t = term_w_33;
                                return(t);
                              }
                              t = ArgOption_3(t, j_5, k_5, l_5);
                              LocalPopChoice(v_33);
                            }
                          else
                            {
                              t = u_33;
                              {
                                ATerm x_33 = t;
                                int y_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_5 (ATerm t)
                                    {
                                      ATerm u_74 = NULL;
                                      u_74 = t;
                                      z_73 :
                                      if(!(match_string(u_74, "-o")))
                                        {
                                          if(!(match_string(u_74, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_5 (ATerm t)
                                    {
                                      ATerm v_74 = NULL;
                                      ATerm w_74 = NULL;
                                      w_74 = t;
                                      if(((v_74 != NULL) && (v_74 != w_74)))
                                        _fail(w_74);
                                      else
                                        v_74 = w_74;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_74));
                                      return(t);
                                    }
                                    ATerm o_5 (ATerm t)
                                    {
                                      t = term_z_33;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, m_5, n_5, o_5);
                                    LocalPopChoice(y_33);
                                  }
                                else
                                  {
                                    t = x_33;
                                    {
                                      ATerm a_34 = t;
                                      int b_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_5 (ATerm t)
                                          {
                                            ATerm x_74 = NULL;
                                            x_74 = t;
                                            d_74 :
                                            if(!(match_string(x_74, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm q_5 (ATerm t)
                                          {
                                            t = term_c_34;
                                            return(t);
                                          }
                                          ATerm g_8 (ATerm t)
                                          {
                                            t = term_d_34;
                                            return(t);
                                          }
                                          t = Option_3(t, p_5, q_5, g_8);
                                          LocalPopChoice(b_34);
                                        }
                                      else
                                        {
                                          t = a_34;
                                          {
                                            ATerm h_8 (ATerm t)
                                            {
                                              ATerm y_74 = NULL;
                                              y_74 = t;
                                              e_74 :
                                              if(!(match_string(y_74, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm i_8 (ATerm t)
                                            {
                                              t = term_e_34;
                                              return(t);
                                            }
                                            ATerm j_8 (ATerm t)
                                            {
                                              t = term_f_34;
                                              return(t);
                                            }
                                            t = Option_3(t, h_8, i_8, j_8);
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
  ATerm f_75 = NULL;
  f_75 = t;
  t = SSL_table_destroy(not_null(f_75));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_75 = NULL;
  ATerm m_75 (ATerm t)
  {
    t = SSL_exit(not_null(k_75));
    return(t);
  }
  k_75 = t;
  j_75 :
  if(match_cons(k_75, sym_exit_0))
    {
      ATerm g_34 = t;
      int i_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_75(t);
          LocalPopChoice(i_34);
        }
      else
        {
          t = g_34;
          {
          }
        }
    }
  else
    t = m_75(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm p_75 = NULL;
  p_75 = t;
  t = SSL_implode_string(not_null(p_75));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_84 (ATerm))
{
  ATerm s_75 (ATerm t)
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_75);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          t = Nil_0(t);
          t = s_84(t);
        }
      }
    return(t);
  }
  t = s_75(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
      {
        ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
        v_75 = t;
        u_75 :
        if(((ATgetType(v_75) == AT_LIST) && ((ATermList) v_75 != ATempty)))
          {
            w_75 = ATgetFirst((ATermList) v_75);
            x_75 = (ATerm) ATgetNext((ATermList) v_75);
            {
              t = not_null(w_75);
              {
                ATerm k_8 (ATerm t)
                {
                  t = not_null(x_75);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_8);
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
  ATerm d_76 = NULL;
  d_76 = t;
  t = SSL_explode_string(not_null(d_76));
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
ATerm long_description_1 (ATerm t, ATerm i_73 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm g_76 (ATerm t)
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = Cons_2(t, e_84, g_76);
      }
    return(t);
  }
  t = g_76(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  s_76 = t;
  p_76 :
  if(((ATgetType(s_76) == AT_LIST) && ((ATermList) s_76 != ATempty)))
    {
      q_76 = ATgetFirst((ATermList) s_76);
      r_76 = (ATerm) ATgetNext((ATermList) s_76);
      {
        ATerm v_76 = NULL;
        t = not_null(r_76);
        {
          ATerm f_35;
          f_35 = t;
          {
            ATerm w_76 = NULL,z_76 = NULL,b_77 = NULL;
            ATerm g_35;
            g_35 = t;
            {
              ATerm x_76 = NULL;
              t = n_0(t);
              {
                x_76 = t;
                if(((w_76 != NULL) && (w_76 != x_76)))
                  _fail(x_76);
                else
                  w_76 = x_76;
              }
            }
            t = g_35;
            {
              ATerm a_77 = NULL;
              t = not_null(q_76);
              {
                t = m_0(t);
                {
                  a_77 = t;
                  if(((z_76 != NULL) && (z_76 != a_77)))
                    _fail(a_77);
                  else
                    z_76 = a_77;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_76)), not_null(z_76));
                {
                  b_77 = t;
                  if(((v_76 != NULL) && (v_76 != b_77)))
                    _fail(b_77);
                  else
                    v_76 = b_77;
                }
              }
            }
          }
          t = f_35;
          {
            ATerm l_8 (ATerm t)
            {
              t = not_null(v_76);
              return(t);
            }
            t = reverse_acc_2(t, m_0, l_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) s_76 == ATempty))
        {
          {
            t = term_h_26;
            t = n_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_73 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm k_77 = NULL,l_77 = NULL;
  k_77 = t;
  j_77 :
  if(match_cons(k_77, sym_Program_1))
    {
      l_77 = ATgetArgument(k_77, 0);
      {
        ATerm p_77 = NULL;
        t = not_null(l_77);
        {
          t = a_63(t);
          {
            p_77 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_77));
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
  ATerm x_77 = NULL;
  ATerm n_8 (ATerm t)
  {
    ATerm o_8 (ATerm t)
    {
      ATerm y_77 = NULL;
      y_77 = t;
      if(((x_77 != NULL) && (x_77 != y_77)))
        _fail(y_77);
      else
        x_77 = y_77;
      return(t);
    }
    t = Program_1(t, o_8);
    return(t);
  }
  t = option_defined_1(t, n_8);
  {
    ATerm p_8 (ATerm t)
    {
      ATerm z_77 = NULL;
      ATerm a_78 = NULL;
      t = term_h_26;
      {
        ATerm q_8 (ATerm t)
        {
          t = not_null(x_77);
          return(t);
        }
        t = short_description_1(t, q_8);
        {
          t = concat_strings_0(t);
          {
            a_78 = t;
            if(((z_77 != NULL) && (z_77 != a_78)))
              _fail(a_78);
            else
              z_77 = a_78;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATempty, not_null(z_77)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, p_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATempty, term_h_35));
      {
        t = printnl_0(t);
        {
          t = term_m_35;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_8 (ATerm t)
                {
                  ATerm b_78 = NULL;
                  b_78 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_78)), term_n_35));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_8);
                {
                  ATerm s_8 (ATerm t)
                  {
                    ATerm d_78 = NULL;
                    ATerm e_78 = NULL;
                    t = term_h_26;
                    {
                      ATerm t_8 (ATerm t)
                      {
                        t = not_null(x_77);
                        return(t);
                      }
                      t = long_description_1(t, t_8);
                      {
                        t = concat_strings_0(t);
                        {
                          e_78 = t;
                          if(((d_78 != NULL) && (d_78 != e_78)))
                            _fail(e_78);
                          else
                            d_78 = e_78;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_78)), term_o_35));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_8);
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
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
  l_78 = t;
  k_78 :
  if(match_cons(l_78, sym__2))
    {
      m_78 = ATgetArgument(l_78, 0);
      n_78 = ATgetArgument(l_78, 1);
      {
        ATerm p_35;
        p_35 = t;
        t = SSL_printnl(not_null(m_78), not_null(n_78));
        t = p_35;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_63 (ATerm))
{
  ATerm u_78 = NULL,v_78 = NULL;
  u_78 = t;
  t_78 :
  if(match_cons(u_78, sym_Undefined_1))
    {
      v_78 = ATgetArgument(u_78, 0);
      {
        ATerm x_78 = NULL;
        t = not_null(v_78);
        {
          t = b_63(t);
          {
            x_78 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_78));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm e_79 (ATerm t)
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_84, _id);
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        t = Cons_2(t, _id, e_79);
      }
    return(t);
  }
  t = e_79(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_74 (ATerm))
{
  t = fetch_1(t, g_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_79 = NULL;
  g_79 = t;
  f_79 :
  if(!(match_cons(g_79, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_91 (ATerm))
{
  ATerm s_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_91(t);
      LocalPopChoice(v_35);
    }
  else
    {
      t = s_35;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
  j_79 = t;
  i_79 :
  if(match_cons(j_79, sym__2))
    {
      k_79 = ATgetArgument(j_79, 0);
      l_79 = ATgetArgument(j_79, 1);
      t = SSL_table_get(not_null(k_79), not_null(l_79));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL;
  u_79 = t;
  t_79 :
  if(match_cons(u_79, sym__3))
    {
      v_79 = ATgetArgument(u_79, 0);
      w_79 = ATgetArgument(u_79, 1);
      x_79 = ATgetArgument(u_79, 2);
      {
        ATerm w_35;
        w_35 = t;
        {
          ATerm b_80 = NULL;
          ATerm c_80 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_79), not_null(w_79));
          {
            ATerm x_35 = t;
            int y_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_35);
              }
            else
              {
                t = x_35;
                t = (ATerm) ATempty;
              }
            {
              c_80 = t;
              if(((b_80 != NULL) && (b_80 != c_80)))
                _fail(c_80);
              else
                b_80 = c_80;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_79), not_null(w_79), (ATerm) ATinsert(CheckATermList(not_null(b_80)), not_null(x_79)));
            t = table_put_0(t);
          }
        }
        t = w_35;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm g_80 = NULL;
  ATerm h_80 = NULL;
  t = term_h_26;
  {
    t = m_73(t);
    {
      h_80 = t;
      if(((g_80 != NULL) && (g_80 != h_80)))
        _fail(h_80);
      else
        g_80 = h_80;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_35, term_l_35, not_null(g_80));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm h_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL;
  n_80 = t;
  m_80 :
  if(match_string(n_80, "register-usage-info"))
    t = register_usage_1(t, l_0);
  else
    {
      if(((ATgetType(n_80) == AT_LIST) && ((ATermList) n_80 != ATempty)))
        {
          o_80 = ATgetFirst((ATermList) n_80);
          p_80 = (ATerm) ATgetNext((ATermList) n_80);
          {
            ATerm s_80 = NULL;
            ATerm z_35;
            z_35 = t;
            {
              t = not_null(o_80);
              t = c_0(t);
            }
            t = z_35;
            {
              ATerm t_80 = NULL;
              t = term_h_26;
              {
                t = h_0(t);
                {
                  t_80 = t;
                  if(((s_80 != NULL) && (s_80 != t_80)))
                    _fail(t_80);
                  else
                    s_80 = t_80;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_80)), not_null(s_80));
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
  ATerm u_8 (ATerm t)
  {
    ATerm y_80 = NULL;
    y_80 = t;
    x_80 :
    if(!(match_string(y_80, "--help")))
      {
        if(!(match_string(y_80, "-h")))
          {
            if(!(match_string(y_80, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm v_8 (ATerm t)
  {
    t = term_a_36;
    return(t);
  }
  ATerm w_8 (ATerm t)
  {
    t = term_d_36;
    return(t);
  }
  t = Option_3(t, u_8, v_8, w_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
  b_81 = t;
  a_81 :
  if(((ATgetType(b_81) == AT_LIST) && ((ATermList) b_81 != ATempty)))
    {
      c_81 = ATgetFirst((ATermList) b_81);
      d_81 = (ATerm) ATgetNext((ATermList) b_81);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_81)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_81)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_69 (ATerm), ATerm d_69 (ATerm))
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL;
  l_81 = t;
  k_81 :
  if(((ATgetType(l_81) == AT_LIST) && ((ATermList) l_81 != ATempty)))
    {
      m_81 = ATgetFirst((ATermList) l_81);
      n_81 = (ATerm) ATgetNext((ATermList) l_81);
      {
        ATerm q_81 = NULL;
        t = not_null(m_81);
        {
          ATerm s_81 = NULL;
          t = c_69(t);
          {
            q_81 = t;
            {
              t = not_null(n_81);
              {
                t = d_69(t);
                {
                  s_81 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_81)), not_null(q_81));
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
  ATerm y_81 = NULL;
  y_81 = t;
  x_81 :
  if(((ATermList) y_81 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_73 (ATerm))
{
  ATerm e_36;
  e_36 = t;
  {
    ATerm z_8 (ATerm t)
    {
      t = term_f_36;
      t = k_73(t);
      return(t);
    }
    t = try_1(t, z_8);
  }
  t = e_36;
  {
    ATerm a_9 (ATerm t)
    {
      ATerm a_82 = NULL;
      a_82 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_82));
      return(t);
    }
    ATerm b_9 (ATerm t)
    {
      ATerm g_36 = t;
      int h_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_36 = t;
          int j_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_36);
            }
          else
            {
              t = i_36;
              {
                t = k_73(t);
                t = Cons_2(t, _id, b_9);
              }
            }
          LocalPopChoice(h_36);
        }
      else
        {
          t = g_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_9, b_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL;
  ATerm k_36;
  k_36 = t;
  {
    ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL;
    j_82 = t;
    f_82 :
    if(match_cons(j_82, sym__3))
      {
        k_82 = ATgetArgument(j_82, 0);
        l_82 = ATgetArgument(j_82, 1);
        m_82 = ATgetArgument(j_82, 2);
        {
          if(((g_82 != NULL) && (g_82 != k_82)))
            _fail(k_82);
          else
            g_82 = k_82;
          {
            if(((h_82 != NULL) && (h_82 != l_82)))
              _fail(l_82);
            else
              h_82 = l_82;
            {
              if(((i_82 != NULL) && (i_82 != m_82)))
                _fail(m_82);
              else
                i_82 = m_82;
              t = SSL_table_put(not_null(g_82), not_null(h_82), not_null(i_82));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = k_36;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_73 (ATerm))
{
  ATerm p_82 = NULL;
  ATerm l_36;
  l_36 = t;
  {
    t = term_m_36;
    t = table_put_0(t);
  }
  t = l_36;
  {
    ATerm c_9 (ATerm t)
    {
      ATerm n_36 = t;
      int o_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_73(t);
          LocalPopChoice(o_36);
        }
      else
        {
          t = n_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_9);
    {
      ATerm h_9 (ATerm t)
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_v_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            {
              ATerm p_9 (ATerm t)
              {
                ATerm q_9 (ATerm t)
                {
                  ATerm q_82 = NULL;
                  q_82 = t;
                  if(((p_82 != NULL) && (p_82 != q_82)))
                    _fail(q_82);
                  else
                    p_82 = q_82;
                  return(t);
                }
                t = Undefined_1(t, q_9);
                return(t);
              }
              t = option_defined_1(t, p_9);
              {
                ATerm r_36;
                r_36 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_82)), term_u_36));
                  t = printnl_0(t);
                }
                t = r_36;
                {
                  t = system_usage_0(t);
                  {
                    t = term_x_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_9);
      {
        ATerm v_36;
        v_36 = t;
        {
          t = term_i_35;
          t = table_destroy_0(t);
        }
        t = v_36;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm s_74 (ATerm))
{
  ATerm r_9 (ATerm t)
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_74(t);
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, r_9);
  {
    t = store_options_0(t);
    {
      ATerm d_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, s_74);
          LocalPopChoice(e_37);
        }
      else
        {
          t = d_37;
          {
            ATerm s_37 = t;
            int t_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, q_74);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(t_37);
              }
            else
              {
                t = s_37;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_74 (ATerm), ATerm m_74 (ATerm))
{
  t = iowrap_3(t, l_74, m_74, default_usage_0);
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
