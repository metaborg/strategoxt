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
ATerm term_r_37;
ATerm term_e_37;
ATerm term_p_36;
ATerm term_j_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_w_34;
ATerm term_s_34;
ATerm term_p_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_z_32;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_b_29;
ATerm term_z_28;
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
ATerm term_g_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_a_26;
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
ATerm term_d_24;
ATerm term_c_24;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
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
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
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
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_19, (ATerm) ATempty);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_o_19, term_l_12);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Id_1, term_q_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Id_1, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Id_1, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATinsert(ATempty, term_j_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_19, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Stat_1, term_z_19);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Id_1, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_1, term_i_20);
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
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Id_1, term_q_22);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_23, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Equal_2, term_e_23, term_j_16);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_23, (ATerm) ATempty);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Id_1, term_j_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_l_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Id_1, term_t_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_e_19);
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
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_j_19, term_l_12);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, term_a_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Id_1, term_g_26);
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
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Op_2, term_x_28, (ATerm) ATempty);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATinsert(ATempty, term_m_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATinsert(ATempty, term_r_29);
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
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_stdin_0);
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
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATinsert(ATempty, term_q_35);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_r_35);
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
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym__3, term_t_35, term_u_35, (ATerm) ATempty);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ArgOption_2 (ATerm, ATerm s_72 (ATerm), ATerm t_72 (ATerm));
ATerm debug_1 (ATerm, ATerm f_74 (ATerm));
ATerm Option_2 (ATerm, ATerm h_72 (ATerm), ATerm i_72 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm y_86 (ATerm));
ATerm Stat_1 (ATerm, ATerm g_60 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm p_88 (ATerm), ATerm q_88 (ATerm));
ATerm repeat_1 (ATerm, ATerm s_88 (ATerm));
ATerm new_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm i_85 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm g_85 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm x_0 (ATerm), ATerm a_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm d_78 (ATerm));
ATerm Var_1 (ATerm, ATerm p_65 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm n_63 (ATerm));
ATerm Real_1 (ATerm, ATerm t_0 (ATerm));
ATerm Str_1 (ATerm, ATerm s_0 (ATerm));
ATerm Int_1 (ATerm, ATerm r_0 (ATerm));
ATerm Op_2 (ATerm, ATerm t_65 (ATerm), ATerm u_65 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm x_59 (ATerm));
ATerm FunCall_2 (ATerm, ATerm p_56 (ATerm), ATerm q_56 (ATerm));
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
ATerm quote_1 (ATerm, ATerm n_75 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm q_68 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm q_0 (ATerm));
ATerm escape_1 (ATerm, ATerm a_75 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm l_68 (ATerm));
ATerm restore_always_2 (ATerm, ATerm z_89 (ATerm), ATerm a_90 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm k_68 (ATerm));
ATerm scope_2 (ATerm, ATerm m_68 (ATerm), ATerm n_68 (ATerm));
ATerm assert_1 (ATerm, ATerm o_68 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm i_49 (ATerm), ATerm j_49 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_73 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_83 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_71 (ATerm));
ATerm map_1 (ATerm, ATerm n_82 (ATerm));
ATerm reverse_1 (ATerm, ATerm m_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_71 (ATerm));
ATerm Program_1 (ATerm, ATerm a_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_72 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_89 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_72 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm g_0 (ATerm), ATerm l_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_72 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_72 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_73 (ATerm), ATerm d_73 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_2 (ATerm t, ATerm s_72 (ATerm), ATerm t_72 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = term_b_9;
    return(t);
  }
  t = ArgOption_3(t, s_72, t_72, b_0);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm g_9;
  g_9 = t;
  {
    ATerm s_2 = NULL,u_2 = NULL;
    ATerm o_9;
    o_9 = t;
    {
      ATerm t_2 = NULL;
      t = f_74(t);
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
ATerm Option_2 (ATerm t, ATerm h_72 (ATerm), ATerm i_72 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = term_b_9;
    return(t);
  }
  t = Option_3(t, h_72, i_72, c_0);
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
ATerm oncetd_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm q_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_86(t);
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
ATerm Stat_1 (ATerm t, ATerm g_60 (ATerm))
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
          t = g_60(t);
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
ATerm repeat_2 (ATerm t, ATerm p_88 (ATerm), ATerm q_88 (ATerm))
{
  ATerm r_9 (ATerm t)
  {
    ATerm x_13 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_88(t);
        t = r_9(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = x_13;
        t = q_88(t);
      }
    return(t);
  }
  t = r_9(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm s_88 (ATerm))
{
  t = repeat_2(t, s_88, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm s_9 (ATerm t)
  {
    t = _all(t, s_9);
    t = i_85(t);
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
ATerm topdown_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm t_9 (ATerm t)
  {
    t = g_85(t);
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
ATerm thread_map_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm o_12 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, d_78, o_12);
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
ATerm Var_1 (ATerm t, ATerm p_65 (ATerm))
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
          t = p_65(t);
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
ATerm BuildDefault_1 (ATerm t, ATerm n_63 (ATerm))
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
          t = n_63(t);
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
ATerm Op_2 (ATerm t, ATerm t_65 (ATerm), ATerm u_65 (ATerm))
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
          t = t_65(t);
          {
            x_16 = t;
            {
              t = not_null(u_16);
              {
                t = u_65(t);
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
                    ATerm k_20 = NULL;
                    ATerm l_20 = NULL;
                    t = not_null(u_18);
                    {
                      t = escape_0(t);
                      {
                        t = double_quote_0(t);
                        {
                          l_20 = t;
                          if(((k_20 != NULL) && (k_20 != l_20)))
                            _fail(l_20);
                          else
                            k_20 = l_20;
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(CheckATermList(term_n_16), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(k_20))))))));
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
ATerm Id_1 (ATerm t, ATerm x_59 (ATerm))
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
          t = x_59(t);
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
ATerm FunCall_2 (ATerm t, ATerm p_56 (ATerm), ATerm q_56 (ATerm))
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
          t = p_56(t);
          {
            w_21 = t;
            {
              t = not_null(t_21);
              {
                t = q_56(t);
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
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,k_23 = NULL;
  b_23 = t;
  r_22 :
  if(match_cons(b_23, sym_Op_2))
    {
      c_23 = ATgetArgument(b_23, 0);
      k_23 = ATgetArgument(b_23, 1);
      s_22 :
      if(match_string(c_23, "Cons"))
        {
          t_22 :
          if(((ATgetType(k_23) == AT_LIST) && ((ATermList) k_23 != ATempty)))
            {
              x_22 = ATgetFirst((ATermList) k_23);
              y_22 = (ATerm) ATgetNext((ATermList) k_23);
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
                              ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
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
                                      a_24 = ATgetArgument(p_23, 1);
                                      k_22 :
                                      if(match_cons(q_23, sym_TypeSpec_3))
                                        {
                                          r_23 = ATgetArgument(q_23, 0);
                                          s_23 = ATgetArgument(q_23, 1);
                                          z_23 = ATgetArgument(q_23, 2);
                                          l_22 :
                                          if(((ATermList) r_23 == ATempty))
                                            {
                                              m_22 :
                                              if(match_cons(s_23, sym_TypeId_1))
                                                {
                                                  y_23 = ATgetArgument(s_23, 0);
                                                  n_22 :
                                                  if(match_string(y_23, "ATerm"))
                                                    {
                                                      o_22 :
                                                      if(((ATermList) z_23 == ATempty))
                                                        {
                                                          p_22 :
                                                          if(match_cons(a_24, sym_None_0))
                                                            {
                                                              t = not_null(b_24);
                                                              {
                                                                ATerm a_17 = t;
                                                                int b_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm k_1 (ATerm t)
                                                                    {
                                                                      ATerm f_24 = NULL;
                                                                      f_24 = t;
                                                                      g_22 :
                                                                      if(!(match_string(f_24, "ATempty")))
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
                                                                          ATerm g_24 = NULL;
                                                                          g_24 = t;
                                                                          h_22 :
                                                                          if(!(match_string(g_24, "ATinsert")))
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
              if(((ATermList) k_23 == ATempty))
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
            q_24 :
            if(match_cons(y_24, sym_Defined_2))
              {
                z_24 = ATgetArgument(y_24, 0);
                a_25 = ATgetArgument(y_24, 1);
                r_24 :
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
        ATerm y_25 = NULL,i_26 = NULL;
        ATerm b_18;
        b_18 = t;
        {
          ATerm h_26 = NULL;
          h_26 = t;
          if(((y_25 != NULL) && (y_25 != h_26)))
            _fail(h_26);
          else
            y_25 = h_26;
        }
        t = b_18;
        {
          ATerm j_26 = NULL;
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
              j_26 = t;
              if(((i_26 != NULL) && (i_26 != j_26)))
                _fail(j_26);
              else
                i_26 = j_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), not_null(i_26));
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
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL;
  ATerm w_39 (ATerm t)
  {
    ATerm w_33 = NULL,l_34 = NULL,n_34 = NULL;
    ATerm g_18;
    g_18 = t;
    {
      ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
      t = not_null(j_32);
      {
        ATerm h_18 = t;
        if((PushChoice() == 0))
          {
            ATerm x_33 = NULL;
            x_33 = t;
            k_28 :
            if(!(match_string(x_33, "Nil")))
              {
                if(!(match_string(x_33, "Cons")))
                  _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          t = h_18;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_32), term_i_18);
          {
            ATerm s_1 (ATerm t)
            {
              ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
              y_33 = t;
              o_28 :
              if(match_cons(y_33, sym__2))
                {
                  z_33 = ATgetArgument(y_33, 0);
                  b_34 = ATgetArgument(y_33, 1);
                  p_28 :
                  if(match_cons(z_33, sym_Var_1))
                    {
                      a_34 = ATgetArgument(z_33, 0);
                      {
                        ATerm e_34 = NULL,g_34 = NULL;
                        ATerm j_18;
                        j_18 = t;
                        {
                          ATerm f_34 = NULL;
                          t = not_null(b_34);
                          {
                            t = int_to_string_0(t);
                            {
                              f_34 = t;
                              if(((e_34 != NULL) && (e_34 != f_34)))
                                _fail(f_34);
                              else
                                e_34 = f_34;
                            }
                          }
                        }
                        t = j_18;
                        {
                          ATerm h_34 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_34), term_k_18);
                          {
                            t = add_0(t);
                            {
                              h_34 = t;
                              if(((g_34 != NULL) && (g_34 != h_34)))
                                _fail(h_34);
                              else
                                g_34 = h_34;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_34)), term_r_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(e_34))), (ATerm) ATmakeAppl(sym_Id_1, not_null(v_32)))))), not_null(g_34));
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
              i_34 = t;
              r_28 :
              if(match_cons(i_34, sym__2))
                {
                  j_34 = ATgetArgument(i_34, 0);
                  k_34 = ATgetArgument(i_34, 1);
                  if(((w_33 != NULL) && (w_33 != j_34)))
                    _fail(j_34);
                  else
                    w_33 = j_34;
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
        ATerm m_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_32), not_null(h_32));
        {
          t = ConstructorName_0(t);
          {
            m_34 = t;
            if(((l_34 != NULL) && (l_34 != m_34)))
              _fail(m_34);
            else
              l_34 = m_34;
          }
        }
      }
      t = n_18;
      {
        ATerm o_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_33), (ATerm) ATinsert(ATempty, not_null(l_32)));
        {
          t = conc_0(t);
          {
            o_34 = t;
            if(((n_34 != NULL) && (n_34 != o_34)))
              _fail(o_34);
            else
              n_34 = o_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_34))), (ATerm) ATmakeAppl(sym_Id_1, not_null(v_32)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(n_34)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_32)), not_null(m_32), not_null(n_32)))));
      }
    }
    return(t);
  }
  ATerm x_39 (ATerm t)
  {
    ATerm v_34 = NULL;
    ATerm y_34 = NULL;
    t = not_null(j_32);
    {
      t = real_to_string_0(t);
      {
        y_34 = t;
        if(((v_34 != NULL) && (v_34 != y_34)))
          _fail(y_34);
        else
          v_34 = y_34;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(v_34))), (ATerm) ATmakeAppl(sym_Id_1, not_null(v_32)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_32)), not_null(m_32), not_null(n_32)))));
    return(t);
  }
  ATerm y_39 (ATerm t)
  {
    ATerm f_35 = NULL;
    ATerm g_35 = NULL;
    t = not_null(j_32);
    {
      t = int_to_string_0(t);
      {
        g_35 = t;
        if(((f_35 != NULL) && (f_35 != g_35)))
          _fail(g_35);
        else
          f_35 = g_35;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(f_35))), (ATerm) ATmakeAppl(sym_Id_1, not_null(v_32)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_32)), not_null(m_32), not_null(n_32)))));
    return(t);
  }
  ATerm z_39 (ATerm t)
  {
    ATerm n_35 = NULL;
    ATerm o_35 = NULL;
    t = not_null(j_32);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          o_35 = t;
          if(((n_35 != NULL) && (n_35 != o_35)))
            _fail(o_35);
          else
            n_35 = o_35;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(n_35)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(v_32)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_32)), not_null(m_32), not_null(n_32)))));
    return(t);
  }
  ATerm a_40 (ATerm t)
  {
    t = not_null(n_32);
    return(t);
  }
  ATerm b_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_32)), (ATerm) ATmakeAppl(sym_Case_3, not_null(x_32), not_null(n_32), not_null(o_32)));
    return(t);
  }
  ATerm c_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_32)));
    return(t);
  }
  ATerm d_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_32)), term_e_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_32)), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_32)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_32))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_32)), term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_32)))));
    return(t);
  }
  ATerm e_40 (ATerm t)
  {
    t = not_null(x_32);
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
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_32)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_32))));
    return(t);
  }
  ATerm f_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_32)), term_r_10, term_j_19));
    return(t);
  }
  ATerm g_40 (ATerm t)
  {
    ATerm e_36 = NULL;
    ATerm f_36 = NULL;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(s_32), (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_19, not_null(x_32))))))), (ATerm) ATmakeAppl(sym__2, not_null(q_32), (ATerm) ATmakeAppl(sym_FunCall_2, term_l_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_19, not_null(x_32))))));
    {
      ATerm t_1 (ATerm t)
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MatchArg1_0(t);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = MatchArg2_0(t);
          }
        return(t);
      }
      t = map_1(t, t_1);
      {
        f_36 = t;
        if(((e_36 != NULL) && (e_36 != f_36)))
          _fail(f_36);
        else
          e_36 = f_36;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATempty, not_null(x_32))), term_x_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_p_19, not_null(x_32)), term_h_17)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(e_36)), term_a_20);
    return(t);
  }
  ATerm h_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_p_19, not_null(x_32)), term_h_17), term_a_20);
    return(t);
  }
  ATerm i_40 (ATerm t)
  {
    ATerm k_36 = NULL,a_37 = NULL;
    ATerm b_20;
    b_20 = t;
    {
      ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
      t = not_null(v_32);
      {
        ATerm c_20 = t;
        if((PushChoice() == 0))
          {
            ATerm l_36 = NULL;
            l_36 = t;
            y_28 :
            if(!(match_string(l_36, "Nil")))
              {
                if(!(match_string(l_36, "Cons")))
                  _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          t = c_20;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_32), term_i_18);
          {
            ATerm u_1 (ATerm t)
            {
              ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
              m_36 = t;
              e_29 :
              if(match_cons(m_36, sym__2))
                {
                  n_36 = ATgetArgument(m_36, 0);
                  o_36 = ATgetArgument(m_36, 1);
                  {
                    ATerm r_36 = NULL,v_36 = NULL;
                    ATerm d_20;
                    d_20 = t;
                    {
                      ATerm s_36 = NULL,u_36 = NULL;
                      ATerm t_36 = NULL;
                      t = not_null(o_36);
                      {
                        t = int_to_string_0(t);
                        {
                          t_36 = t;
                          if(((s_36 != NULL) && (s_36 != t_36)))
                            _fail(t_36);
                          else
                            s_36 = t_36;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_36), (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_36))), not_null(x_32))));
                        {
                          ATerm e_20 = t;
                          int f_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              LocalPopChoice(f_20);
                            }
                          else
                            {
                              t = e_20;
                              t = MatchArg2_0(t);
                            }
                          {
                            u_36 = t;
                            if(((r_36 != NULL) && (r_36 != u_36)))
                              _fail(u_36);
                            else
                              r_36 = u_36;
                          }
                        }
                      }
                    }
                    t = d_20;
                    {
                      ATerm w_36 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_36), term_k_18);
                      {
                        t = add_0(t);
                        {
                          w_36 = t;
                          if(((v_36 != NULL) && (v_36 != w_36)))
                            _fail(w_36);
                          else
                            v_36 = w_36;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_36), not_null(v_36));
                    }
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = thread_map_1(t, u_1);
            {
              x_36 = t;
              g_29 :
              if(match_cons(x_36, sym__2))
                {
                  y_36 = ATgetArgument(x_36, 0);
                  z_36 = ATgetArgument(x_36, 1);
                  if(((k_36 != NULL) && (k_36 != y_36)))
                    _fail(y_36);
                  else
                    k_36 = y_36;
                }
              else
                _fail(t);
            }
          }
        }
      }
    }
    t = b_20;
    {
      ATerm b_37 = NULL,d_37 = NULL;
      ATerm c_37 = NULL;
      t = not_null(u_32);
      {
        t = length_0(t);
        {
          c_37 = t;
          if(((b_37 != NULL) && (b_37 != c_37)))
            _fail(c_37);
          else
            b_37 = c_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_32), not_null(b_37));
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
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_37))), not_null(x_32))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(k_36)), term_a_20);
    }
    return(t);
  }
  ATerm j_40 (ATerm t)
  {
    ATerm g_37 = NULL;
    ATerm h_37 = NULL;
    t = not_null(v_32);
    {
      t = real_to_string_0(t);
      {
        h_37 = t;
        if(((g_37 != NULL) && (g_37 != h_37)))
          _fail(h_37);
        else
          g_37 = h_37;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATempty, not_null(x_32))), term_h_20), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_20, not_null(x_32)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(g_37)))), term_a_20);
    return(t);
  }
  ATerm o_40 (ATerm t)
  {
    ATerm k_37 = NULL;
    ATerm l_37 = NULL;
    t = not_null(v_32);
    {
      t = int_to_string_0(t);
      {
        l_37 = t;
        if(((k_37 != NULL) && (k_37 != l_37)))
          _fail(l_37);
        else
          k_37 = l_37;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATempty, not_null(x_32))), term_v_20), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_21, not_null(x_32)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(k_37)))), term_a_20);
    return(t);
  }
  ATerm p_40 (ATerm t)
  {
    ATerm o_37 = NULL;
    ATerm p_37 = NULL;
    t = not_null(v_32);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          p_37 = t;
          if(((o_37 != NULL) && (o_37 != p_37)))
            _fail(p_37);
          else
            o_37 = p_37;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_21, not_null(x_32)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(CheckATermList(term_n_16), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(o_37)))))), term_a_20);
    return(t);
  }
  ATerm q_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_32)), term_e_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_32)), not_null(x_32))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_19, (ATerm) ATinsert(ATempty, not_null(x_32)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_32)), term_r_10, not_null(x_32))));
    return(t);
  }
  ATerm r_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(u_32), not_null(x_32))), (ATerm) ATmakeAppl(sym_Match_2, not_null(v_32), not_null(x_32))));
    return(t);
  }
  ATerm s_40 (ATerm t)
  {
    t = term_m_21;
    return(t);
  }
  ATerm t_40 (ATerm t)
  {
    t = term_m_21;
    return(t);
  }
  ATerm u_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(w_32), term_j_19);
    return(t);
  }
  ATerm v_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(w_32), (ATerm) ATinsert(ATempty, not_null(x_32)));
    return(t);
  }
  ATerm w_40 (ATerm t)
  {
    ATerm c_38 = NULL;
    ATerm d_38 = NULL;
    t = new_0(t);
    {
      d_38 = t;
      if(((c_38 != NULL) && (c_38 != d_38)))
        _fail(d_38);
      else
        c_38 = d_38;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_38)), term_l_12))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_38))))), not_null(w_32)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_38)), term_r_10, term_j_19))));
    return(t);
  }
  ATerm x_40 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(w_32));
    return(t);
  }
  ATerm a_41 (ATerm t)
  {
    ATerm h_38 = NULL;
    ATerm n_38 = NULL;
    t = not_null(x_32);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
        i_38 = t;
        o_29 :
        if(match_cons(i_38, sym_Call_2))
          {
            j_38 = ATgetArgument(i_38, 0);
            l_38 = ATgetArgument(i_38, 1);
            p_29 :
            if(match_cons(j_38, sym_SVar_1))
              {
                k_38 = ATgetArgument(j_38, 0);
                q_29 :
                if(((ATermList) l_38 == ATempty))
                  {
                    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(k_38));
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
        n_38 = t;
        if(((h_38 != NULL) && (h_38 != n_38)))
          _fail(n_38);
        else
          h_38 = n_38;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_32)), (ATerm) ATinsert(CheckATermList(not_null(h_38)), term_j_19))));
    return(t);
  }
  ATerm b_41 (ATerm t)
  {
    ATerm q_38 = NULL;
    ATerm r_38 = NULL;
    t = not_null(x_32);
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
        r_38 = t;
        if(((q_38 != NULL) && (q_38 != r_38)))
          _fail(r_38);
        else
          q_38 = r_38;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_32)), not_null(q_38))));
    return(t);
  }
  ATerm c_41 (ATerm t)
  {
    ATerm t_38 = NULL;
    ATerm u_38 = NULL;
    t = new_0(t);
    {
      u_38 = t;
      if(((t_38 != NULL) && (t_38 != u_38)))
        _fail(u_38);
      else
        t_38 = u_38;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_38)), term_l_12), term_n_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_v_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(CheckATermList(term_f_22), not_null(w_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_38)))))))));
    return(t);
  }
  ATerm d_41 (ATerm t)
  {
    ATerm x_38 = NULL;
    ATerm y_38 = NULL;
    t = new_0(t);
    {
      y_38 = t;
      if(((x_38 != NULL) && (x_38 != y_38)))
        _fail(y_38);
      else
        x_38 = y_38;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_38)), term_l_12), term_n_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_23, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(w_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_32)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_38)))))))));
    return(t);
  }
  ATerm e_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(w_32), not_null(x_32));
    return(t);
  }
  ATerm j_41 (ATerm t)
  {
    ATerm d_39 = NULL,e_39 = NULL;
    ATerm f_39 = NULL;
    ATerm g_39 = NULL;
    t = new_0(t);
    {
      f_39 = t;
      {
        if(((d_39 != NULL) && (d_39 != f_39)))
          _fail(f_39);
        else
          d_39 = f_39;
        {
          t = new_0(t);
          {
            g_39 = t;
            if(((e_39 != NULL) && (e_39 != g_39)))
              _fail(g_39);
            else
              e_39 = g_39;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_39)), term_l_12), term_m_23)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_39)), term_l_12), term_n_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_v_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_39)))))), not_null(w_32))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_32)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_39)))))))));
    return(t);
  }
  ATerm k_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(w_32), not_null(x_32));
    return(t);
  }
  ATerm l_41 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_32)), not_null(w_32)));
    return(t);
  }
  ATerm m_41 (ATerm t)
  {
    ATerm p_39 = NULL;
    ATerm v_23;
    v_23 = t;
    {
      t = not_null(w_32);
      {
        ATerm y_1 (ATerm t)
        {
          ATerm n_39 = NULL;
          n_39 = t;
          {
            ATerm w_23;
            w_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(n_39)), term_c_24);
              {
                ATerm z_1 (ATerm t)
                {
                  t = term_k_14;
                  return(t);
                }
                t = assert_1(t, z_1);
              }
            }
            t = w_23;
          }
          return(t);
        }
        t = map_1(t, y_1);
      }
    }
    t = v_23;
    {
      ATerm s_39 = NULL;
      t = not_null(w_32);
      {
        ATerm a_2 (ATerm t)
        {
          ATerm q_39 = NULL;
          q_39 = t;
          t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_39)), term_l_12), term_d_24);
          return(t);
        }
        t = map_1(t, a_2);
        {
          s_39 = t;
          if(((p_39 != NULL) && (p_39 != s_39)))
            _fail(s_39);
          else
            p_39 = s_39;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, not_null(p_39))), (ATerm) ATinsert(ATempty, not_null(x_32)));
    }
    return(t);
  }
  ATerm n_41 (ATerm t)
  {
    t = term_a_20;
    return(t);
  }
  ATerm o_41 (ATerm t)
  {
    t = term_m_21;
    return(t);
  }
  y_32 = t;
  c_30 :
  if(match_cons(y_32, sym_Build_1))
    {
      w_32 = ATgetArgument(y_32, 0);
      {
        ATerm a_33 = NULL;
        ATerm b_33 = NULL;
        t = not_null(w_32);
        {
          t = construct_term_caching_0(t);
          {
            b_33 = t;
            if(((a_33 != NULL) && (a_33 != b_33)))
              _fail(b_33);
            else
              a_33 = b_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_j_19, term_r_10, not_null(a_33)));
      }
    }
  else
    {
      if(match_cons(y_32, sym_Case_3))
        {
          w_32 = ATgetArgument(y_32, 0);
          x_32 = ATgetArgument(y_32, 1);
          n_32 = ATgetArgument(y_32, 2);
          j_30 :
          if(match_cons(w_32, sym_Var_1))
            {
              v_32 = ATgetArgument(w_32, 0);
              k_30 :
              if(((ATgetType(x_32) == AT_LIST) && ((ATermList) x_32 != ATempty)))
                {
                  p_32 = ATgetFirst((ATermList) x_32);
                  m_32 = (ATerm) ATgetNext((ATermList) x_32);
                  l_30 :
                  if(match_cons(p_32, sym_Alt_3))
                    {
                      i_32 = ATgetArgument(p_32, 0);
                      k_32 = ATgetArgument(p_32, 1);
                      l_32 = ATgetArgument(p_32, 2);
                      m_30 :
                      if(match_cons(i_32, sym_Fun_2))
                        {
                          j_32 = ATgetArgument(i_32, 0);
                          h_32 = ATgetArgument(i_32, 1);
                          n_30 :
                          if(((ATgetType(k_32) == AT_LIST) && ((ATermList) k_32 != ATempty)))
                            {
                              b_32 = ATgetFirst((ATermList) k_32);
                              d_32 = (ATerm) ATgetNext((ATermList) k_32);
                              o_30 :
                              if(((ATgetType(d_32) == AT_LIST) && ((ATermList) d_32 != ATempty)))
                                {
                                  e_32 = ATgetFirst((ATermList) d_32);
                                  g_32 = (ATerm) ATgetNext((ATermList) d_32);
                                  p_30 :
                                  if(((ATermList) g_32 == ATempty))
                                    {
                                      q_30 :
                                      if(match_cons(e_32, sym_Var_1))
                                        {
                                          f_32 = ATgetArgument(e_32, 0);
                                          r_30 :
                                          if(match_cons(b_32, sym_Var_1))
                                            {
                                              c_32 = ATgetArgument(b_32, 0);
                                              s_30 :
                                              if(match_int(h_32, 2))
                                                {
                                                  t_30 :
                                                  if(match_string(j_32, "Cons"))
                                                    {
                                                      ATerm e_24 = t;
                                                      int i_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_32)))), term_x_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_p_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_32))), term_h_17)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_32)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_32)), term_r_10, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_32))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_32)), term_r_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_32))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_32)), not_null(m_32), not_null(n_32)))));
                                                          LocalPopChoice(i_24);
                                                        }
                                                      else
                                                        {
                                                          t = e_24;
                                                          t = w_39(t);
                                                        }
                                                    }
                                                  else
                                                    t = w_39(t);
                                                }
                                              else
                                                {
                                                  u_30 :
                                                  t = w_39(t);
                                                }
                                            }
                                          else
                                            {
                                              v_30 :
                                              w_30 :
                                              t = w_39(t);
                                            }
                                        }
                                      else
                                        {
                                          x_30 :
                                          y_30 :
                                          z_30 :
                                          t = w_39(t);
                                        }
                                    }
                                  else
                                    {
                                      a_31 :
                                      b_31 :
                                      c_31 :
                                      d_31 :
                                      t = w_39(t);
                                    }
                                }
                              else
                                {
                                  e_31 :
                                  f_31 :
                                  g_31 :
                                  t = w_39(t);
                                }
                            }
                          else
                            {
                              if(((ATermList) k_32 == ATempty))
                                {
                                  h_31 :
                                  if(match_int(h_32, 0))
                                    {
                                      i_31 :
                                      if(match_string(j_32, "Nil"))
                                        {
                                          ATerm j_24 = t;
                                          int k_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_p_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_32))), term_h_17), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(l_32)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_32)), not_null(m_32), not_null(n_32)))));
                                              LocalPopChoice(k_24);
                                            }
                                          else
                                            {
                                              t = j_24;
                                              t = w_39(t);
                                            }
                                        }
                                      else
                                        t = w_39(t);
                                    }
                                  else
                                    {
                                      j_31 :
                                      t = w_39(t);
                                    }
                                }
                              else
                                {
                                  k_31 :
                                  n_31 :
                                  t = w_39(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(i_32, sym_Real_1))
                            {
                              j_32 = ATgetArgument(i_32, 0);
                              t = x_39(t);
                            }
                          else
                            {
                              if(match_cons(i_32, sym_Int_1))
                                {
                                  j_32 = ATgetArgument(i_32, 0);
                                  t = y_39(t);
                                }
                              else
                                {
                                  if(match_cons(i_32, sym_Str_1))
                                    {
                                      j_32 = ATgetArgument(i_32, 0);
                                      t = z_39(t);
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
                  if(((ATermList) x_32 == ATempty))
                    {
                      t = a_40(t);
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
          if(match_cons(y_32, sym_Case_4))
            {
              w_32 = ATgetArgument(y_32, 0);
              x_32 = ATgetArgument(y_32, 1);
              n_32 = ATgetArgument(y_32, 2);
              o_32 = ATgetArgument(y_32, 3);
              t = b_40(t);
            }
          else
            {
              if(match_cons(y_32, sym_Continue_1))
                {
                  w_32 = ATgetArgument(y_32, 0);
                  t = c_40(t);
                }
              else
                {
                  if(match_cons(y_32, sym_Assign_2))
                    {
                      w_32 = ATgetArgument(y_32, 0);
                      x_32 = ATgetArgument(y_32, 1);
                      o_31 :
                      if(match_cons(w_32, sym_Var_1))
                        {
                          v_32 = ATgetArgument(w_32, 0);
                          p_31 :
                          if(match_cons(x_32, sym_Var_1))
                            {
                              p_32 = ATgetArgument(x_32, 0);
                              {
                                ATerm l_24 = t;
                                int m_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = d_40(t);
                                    LocalPopChoice(m_24);
                                  }
                                else
                                  {
                                    t = l_24;
                                    t = e_40(t);
                                  }
                              }
                            }
                          else
                            t = e_40(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(y_32, sym_Assign_1))
                        {
                          w_32 = ATgetArgument(y_32, 0);
                          q_31 :
                          if(match_cons(w_32, sym_Var_1))
                            {
                              v_32 = ATgetArgument(w_32, 0);
                              t = f_40(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(y_32, sym_Match_2))
                            {
                              w_32 = ATgetArgument(y_32, 0);
                              x_32 = ATgetArgument(y_32, 1);
                              r_31 :
                              if(match_cons(w_32, sym_Op_2))
                                {
                                  v_32 = ATgetArgument(w_32, 0);
                                  u_32 = ATgetArgument(w_32, 1);
                                  s_31 :
                                  if(((ATgetType(u_32) == AT_LIST) && ((ATermList) u_32 != ATempty)))
                                    {
                                      q_32 = ATgetFirst((ATermList) u_32);
                                      r_32 = (ATerm) ATgetNext((ATermList) u_32);
                                      t_31 :
                                      if(((ATgetType(r_32) == AT_LIST) && ((ATermList) r_32 != ATempty)))
                                        {
                                          s_32 = ATgetFirst((ATermList) r_32);
                                          t_32 = (ATerm) ATgetNext((ATermList) r_32);
                                          u_31 :
                                          if(((ATermList) t_32 == ATempty))
                                            {
                                              v_31 :
                                              if(match_string(v_32, "Cons"))
                                                {
                                                  ATerm n_24 = t;
                                                  int o_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = g_40(t);
                                                      LocalPopChoice(o_24);
                                                    }
                                                  else
                                                    {
                                                      t = n_24;
                                                      t = i_40(t);
                                                    }
                                                }
                                              else
                                                t = i_40(t);
                                            }
                                          else
                                            {
                                              w_31 :
                                              t = i_40(t);
                                            }
                                        }
                                      else
                                        {
                                          x_31 :
                                          t = i_40(t);
                                        }
                                    }
                                  else
                                    {
                                      if(((ATermList) u_32 == ATempty))
                                        {
                                          y_31 :
                                          if(match_string(v_32, "Nil"))
                                            {
                                              ATerm p_24 = t;
                                              int s_24 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = h_40(t);
                                                  LocalPopChoice(s_24);
                                                }
                                              else
                                                {
                                                  t = p_24;
                                                  t = i_40(t);
                                                }
                                            }
                                          else
                                            t = i_40(t);
                                        }
                                      else
                                        {
                                          z_31 :
                                          t = i_40(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(w_32, sym_Real_1))
                                    {
                                      v_32 = ATgetArgument(w_32, 0);
                                      t = j_40(t);
                                    }
                                  else
                                    {
                                      if(match_cons(w_32, sym_Int_1))
                                        {
                                          v_32 = ATgetArgument(w_32, 0);
                                          t = o_40(t);
                                        }
                                      else
                                        {
                                          if(match_cons(w_32, sym_Str_1))
                                            {
                                              v_32 = ATgetArgument(w_32, 0);
                                              t = p_40(t);
                                            }
                                          else
                                            {
                                              if(match_cons(w_32, sym_Var_1))
                                                {
                                                  v_32 = ATgetArgument(w_32, 0);
                                                  t = q_40(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(w_32, sym_As_2))
                                                    {
                                                      v_32 = ATgetArgument(w_32, 0);
                                                      u_32 = ATgetArgument(w_32, 1);
                                                      t = r_40(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(w_32, sym_BuildDefault_1))
                                                        {
                                                          v_32 = ATgetArgument(w_32, 0);
                                                          t = s_40(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(w_32, sym_Wld_0))
                                                            t = t_40(t);
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
                              if(match_cons(y_32, sym_Match_1))
                                {
                                  w_32 = ATgetArgument(y_32, 0);
                                  t = u_40(t);
                                }
                              else
                                {
                                  if(match_cons(y_32, sym_Let_2))
                                    {
                                      w_32 = ATgetArgument(y_32, 0);
                                      x_32 = ATgetArgument(y_32, 1);
                                      t = v_40(t);
                                    }
                                  else
                                    {
                                      if(match_cons(y_32, sym_Where_1))
                                        {
                                          w_32 = ATgetArgument(y_32, 0);
                                          t = w_40(t);
                                        }
                                      else
                                        {
                                          if(match_cons(y_32, sym_Test_1))
                                            {
                                              w_32 = ATgetArgument(y_32, 0);
                                              t = x_40(t);
                                            }
                                          else
                                            {
                                              if(match_cons(y_32, sym_Call_2))
                                                {
                                                  w_32 = ATgetArgument(y_32, 0);
                                                  x_32 = ATgetArgument(y_32, 1);
                                                  a_32 :
                                                  if(match_cons(w_32, sym_SVar_1))
                                                    {
                                                      v_32 = ATgetArgument(w_32, 0);
                                                      t = a_41(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(y_32, sym_Prim_2))
                                                    {
                                                      w_32 = ATgetArgument(y_32, 0);
                                                      x_32 = ATgetArgument(y_32, 1);
                                                      t = b_41(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(y_32, sym_Not_1))
                                                        {
                                                          w_32 = ATgetArgument(y_32, 0);
                                                          t = c_41(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(y_32, sym_LGChoice_2))
                                                            {
                                                              w_32 = ATgetArgument(y_32, 0);
                                                              x_32 = ATgetArgument(y_32, 1);
                                                              t = d_41(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(y_32, sym_GChoice_2))
                                                                {
                                                                  w_32 = ATgetArgument(y_32, 0);
                                                                  x_32 = ATgetArgument(y_32, 1);
                                                                  t = e_41(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(y_32, sym_LChoice_2))
                                                                    {
                                                                      w_32 = ATgetArgument(y_32, 0);
                                                                      x_32 = ATgetArgument(y_32, 1);
                                                                      t = j_41(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(y_32, sym_Choice_2))
                                                                        {
                                                                          w_32 = ATgetArgument(y_32, 0);
                                                                          x_32 = ATgetArgument(y_32, 1);
                                                                          t = k_41(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(y_32, sym_Seq_2))
                                                                            {
                                                                              w_32 = ATgetArgument(y_32, 0);
                                                                              x_32 = ATgetArgument(y_32, 1);
                                                                              t = l_41(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(y_32, sym_Scope_2))
                                                                                {
                                                                                  w_32 = ATgetArgument(y_32, 0);
                                                                                  x_32 = ATgetArgument(y_32, 1);
                                                                                  t = m_41(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(y_32, sym_Fail_0))
                                                                                    t = n_41(t);
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(y_32, sym_Id_0))
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
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  c_50 = t;
  b_50 :
  if(match_cons(c_50, sym__2))
    {
      d_50 = ATgetArgument(c_50, 0);
      e_50 = ATgetArgument(c_50, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(CheckATermList(term_b_25), not_null(e_50)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  l_50 :
  if(((ATgetType(n_50) == AT_LIST) && ((ATermList) n_50 != ATempty)))
    {
      o_50 = ATgetFirst((ATermList) n_50);
      p_50 = (ATerm) ATgetNext((ATermList) n_50);
      m_50 :
      if(match_int(o_50, 10))
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_50)), term_h_25), term_g_25);
      else
        {
          if(match_int(o_50, 92))
            t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_50)), term_g_25), term_g_25);
          else
            {
              if(match_int(o_50, 34))
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_50)), term_i_25), term_g_25);
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
    ATerm w_50 (ATerm t)
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Escape_0(t);
          {
            ATerm b_2 (ATerm t)
            {
              t = Cons_2(t, _id, w_50);
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
                t = Cons_2(t, _id, w_50);
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
    t = w_50(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym__2))
    {
      c_51 = ATgetArgument(b_51, 0);
      d_51 = ATgetArgument(b_51, 1);
      {
        ATerm g_51 = NULL,i_51 = NULL;
        ATerm n_25;
        n_25 = t;
        {
          ATerm h_51 = NULL;
          t = (ATerm) ATinsert(CheckATermList(term_p_25), not_null(c_51));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  h_51 = t;
                  if(((g_51 != NULL) && (g_51 != h_51)))
                    _fail(h_51);
                  else
                    g_51 = h_51;
                }
              }
            }
          }
        }
        t = n_25;
        {
          ATerm j_51 = NULL;
          t = (ATerm) ATinsert(CheckATermList(term_r_25), not_null(c_51));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  j_51 = t;
                  if(((i_51 != NULL) && (i_51 != j_51)))
                    _fail(j_51);
                  else
                    i_51 = j_51;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_b_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_25, (ATerm) ATinsert(ATinsert(CheckATermList(term_y_19), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(i_51))), term_u_25)))), not_null(d_51)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_25, (ATerm) ATinsert(ATinsert(CheckATermList(term_y_19), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(g_51))), term_u_25)))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm q_51 = NULL;
  q_51 = t;
  {
    ATerm s_51 = NULL,t_51 = NULL;
    t = term_z_9;
    {
      ATerm c_2 (ATerm t)
      {
        t = term_j_10;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        s_51 = t;
        o_51 :
        if(match_cons(s_51, sym_Defined_1))
          {
            t_51 = ATgetArgument(s_51, 0);
            p_51 :
            if(!(match_string(t_51, "d_0")))
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(q_51);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm z_51 = NULL;
  z_51 = t;
  {
    ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_51));
    {
      ATerm d_2 (ATerm t)
      {
        t = term_o_10;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        b_52 = t;
        x_51 :
        if(match_cons(b_52, sym_Defined_2))
          {
            c_52 = ATgetArgument(b_52, 0);
            d_52 = ATgetArgument(b_52, 1);
            y_51 :
            if(match_string(c_52, "e_0"))
              {
                if(((z_51 != NULL) && (z_51 != d_52)))
                  _fail(d_52);
                else
                  z_51 = d_52;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(z_51);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
  k_52 = t;
  j_52 :
  if(match_cons(k_52, sym_SDef_3))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      n_52 = ATgetArgument(k_52, 2);
      {
        ATerm r_52 = NULL,s_52 = NULL;
        ATerm t_52 = NULL;
        t = not_null(m_52);
        {
          ATerm u_52 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            t_52 = t;
            {
              if(((r_52 != NULL) && (r_52 != t_52)))
                _fail(t_52);
              else
                r_52 = t_52;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_52), not_null(n_52));
                {
                  ATerm v_25 = t;
                  int w_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_2 (ATerm t)
                      {
                        ATerm x_25 = t;
                        int z_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            LocalPopChoice(z_25);
                          }
                        else
                          {
                            t = x_25;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, e_2, _id);
                      t = TracedBody_0(t);
                      LocalPopChoice(w_25);
                    }
                  else
                    {
                      t = v_25;
                      t = PlainBody_0(t);
                    }
                  {
                    u_52 = t;
                    if(((s_52 != NULL) && (s_52 != u_52)))
                      _fail(u_52);
                    else
                      s_52 = u_52;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_a_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_52)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(r_52)), term_b_26)))), not_null(s_52));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm quote_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm b_53 = NULL;
  ATerm d_53 = NULL,f_53 = NULL;
  b_53 = t;
  {
    ATerm c_26;
    c_26 = t;
    {
      ATerm e_53 = NULL;
      t = n_75(t);
      {
        e_53 = t;
        if(((d_53 != NULL) && (d_53 != e_53)))
          _fail(e_53);
        else
          d_53 = e_53;
      }
    }
    t = c_26;
    {
      ATerm g_53 = NULL;
      t = not_null(b_53);
      {
        t = explode_string_0(t);
        {
          g_53 = t;
          if(((f_53 != NULL) && (f_53 != g_53)))
            _fail(g_53);
          else
            f_53 = g_53;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, not_null(d_53))), not_null(f_53)), (ATerm) ATinsert(ATempty, not_null(d_53)));
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
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
  m_53 = t;
  l_53 :
  if(((ATgetType(m_53) == AT_LIST) && ((ATermList) m_53 != ATempty)))
    {
      n_53 = ATgetFirst((ATermList) m_53);
      o_53 = (ATerm) ATgetNext((ATermList) m_53);
      t = not_null(n_53);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
  u_53 = t;
  t_53 :
  if(match_cons(u_53, sym__2))
    {
      v_53 = ATgetArgument(u_53, 0);
      w_53 = ATgetArgument(u_53, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_53), not_null(w_53));
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
ATerm rewrite_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm c_54 = NULL;
  ATerm e_54 = NULL;
  c_54 = t;
  {
    ATerm f_54 = NULL;
    t = term_d_26;
    {
      t = q_68(t);
      {
        f_54 = t;
        if(((e_54 != NULL) && (e_54 != f_54)))
          _fail(f_54);
        else
          e_54 = f_54;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_54), not_null(c_54));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
  n_54 = t;
  m_54 :
  if(match_cons(n_54, sym__2))
    {
      o_54 = ATgetArgument(n_54, 0);
      p_54 = ATgetArgument(n_54, 1);
      {
        ATerm s_54 = NULL;
        ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(o_54), not_null(p_54));
        {
          ATerm g_2 (ATerm t)
          {
            t = term_e_26;
            return(t);
          }
          t = rewrite_1(t, g_2);
          {
            t_54 = t;
            k_54 :
            if(match_cons(t_54, sym_Defined_2))
              {
                u_54 = ATgetArgument(t_54, 0);
                v_54 = ATgetArgument(t_54, 1);
                l_54 :
                if(match_string(u_54, "f_0"))
                  {
                    if(((s_54 != NULL) && (s_54 != v_54)))
                      _fail(v_54);
                    else
                      s_54 = v_54;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = not_null(s_54);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InitConstructor_0 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  d_55 :
  if(match_cons(e_55, sym_OpDecl_2))
    {
      f_55 = ATgetArgument(e_55, 0);
      g_55 = ATgetArgument(e_55, 1);
      {
        ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,p_55 = NULL;
        ATerm f_26;
        f_26 = t;
        {
          ATerm m_55 = NULL;
          t = not_null(g_55);
          {
            ATerm n_55 = NULL;
            t = Arity_0(t);
            {
              m_55 = t;
              {
                if(((k_55 != NULL) && (k_55 != m_55)))
                  _fail(m_55);
                else
                  k_55 = m_55;
                {
                  ATerm o_55 = NULL;
                  t = int_to_string_0(t);
                  {
                    n_55 = t;
                    {
                      if(((j_55 != NULL) && (j_55 != n_55)))
                        _fail(n_55);
                      else
                        j_55 = n_55;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_55), not_null(k_55));
                        {
                          t = ConstructorName_0(t);
                          {
                            o_55 = t;
                            if(((l_55 != NULL) && (l_55 != o_55)))
                              _fail(o_55);
                            else
                              l_55 = o_55;
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
        t = f_26;
        {
          ATerm q_55 = NULL;
          t = not_null(f_55);
          {
            t = double_quote_0(t);
            {
              q_55 = t;
              if(((p_55 != NULL) && (p_55 != q_55)))
                _fail(q_55);
              else
                p_55 = q_55;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_55)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_55)), term_r_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(ATinsert(CheckATermList(term_l_26), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(j_55))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(p_55))))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InitConstructors_0 (ATerm t)
{
  ATerm z_55 = NULL;
  ATerm b_56 = NULL;
  z_55 = t;
  {
    ATerm c_56 = NULL,e_56 = NULL;
    ATerm d_56 = NULL;
    t = not_null(z_55);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          d_56 = t;
          if(((c_56 != NULL) && (c_56 != d_56)))
            _fail(d_56);
          else
            c_56 = d_56;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_56), term_q_26);
      {
        t = conc_0(t);
        {
          e_56 = t;
          if(((b_56 != NULL) && (b_56 != e_56)))
            _fail(e_56);
          else
            b_56 = e_56;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_d_11, term_t_26, (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(b_56)));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm j_56 = NULL;
  j_56 = t;
  t = SSL_int_to_string(not_null(j_56));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  u_56 :
  if(((ATgetType(w_56) == AT_LIST) && ((ATermList) w_56 != ATempty)))
    {
      x_56 = ATgetFirst((ATermList) w_56);
      y_56 = (ATerm) ATgetNext((ATermList) w_56);
      v_56 :
      if(match_int(x_56, 95))
        {
          ATerm a_57 = NULL;
          ATerm b_57 = NULL;
          t = not_null(y_56);
          {
            t = q_0(t);
            {
              b_57 = t;
              if(((a_57 != NULL) && (a_57 != b_57)))
                _fail(b_57);
              else
                a_57 = b_57;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_57)), term_u_26), term_u_26);
        }
      else
        {
          if(match_int(x_56, 45))
            {
              ATerm d_57 = NULL;
              ATerm e_57 = NULL;
              t = not_null(y_56);
              {
                t = q_0(t);
                {
                  e_57 = t;
                  if(((d_57 != NULL) && (d_57 != e_57)))
                    _fail(e_57);
                  else
                    d_57 = e_57;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_57)), term_u_26);
            }
          else
            {
              if(match_int(x_56, 39))
                {
                  ATerm g_57 = NULL;
                  ATerm h_57 = NULL;
                  t = not_null(y_56);
                  {
                    t = q_0(t);
                    {
                      h_57 = t;
                      if(((g_57 != NULL) && (g_57 != h_57)))
                        _fail(h_57);
                      else
                        g_57 = h_57;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_57)), term_u_26), term_v_26), term_u_26);
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
ATerm escape_1 (ATerm t, ATerm a_75 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm o_57 (ATerm t)
    {
      ATerm w_26 = t;
      int x_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_75(t, o_57);
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
                t = Cons_2(t, _id, o_57);
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
    t = o_57(t);
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
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  q_57 :
  if(match_cons(r_57, sym__2))
    {
      s_57 = ATgetArgument(r_57, 0);
      t_57 = ATgetArgument(r_57, 1);
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_57), not_null(t_57));
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            t = SSL_addr(not_null(s_57), not_null(t_57));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_77(t);
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      {
        ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
        b_58 = t;
        a_58 :
        if(((ATgetType(b_58) == AT_LIST) && ((ATermList) b_58 != ATempty)))
          {
            c_58 = ATgetFirst((ATermList) b_58);
            d_58 = (ATerm) ATgetNext((ATermList) b_58);
            {
              ATerm g_58 = NULL,i_58 = NULL;
              ATerm e_27;
              e_27 = t;
              {
                ATerm h_58 = NULL;
                t = not_null(c_58);
                {
                  t = r_77(t);
                  {
                    h_58 = t;
                    if(((g_58 != NULL) && (g_58 != h_58)))
                      _fail(h_58);
                    else
                      g_58 = h_58;
                  }
                }
              }
              t = e_27;
              {
                ATerm j_58 = NULL;
                t = not_null(d_58);
                {
                  t = foldr_3(t, p_77, q_77, r_77);
                  {
                    j_58 = t;
                    if(((i_58 != NULL) && (i_58 != j_58)))
                      _fail(j_58);
                    else
                      i_58 = j_58;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_58), not_null(i_58));
                  t = q_77(t);
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
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  r_58 = t;
  p_58 :
  if(match_cons(r_58, sym_FunType_2))
    {
      s_58 = ATgetArgument(r_58, 0);
      q_58 = ATgetArgument(r_58, 1);
      {
        t = not_null(s_58);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(r_58, sym_ConstType_1))
        {
          s_58 = ATgetArgument(r_58, 0);
          t = term_i_18;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm DeclareConstructor_0 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
  e_59 = t;
  d_59 :
  if(match_cons(e_59, sym_OpDecl_2))
    {
      f_59 = ATgetArgument(e_59, 0);
      g_59 = ATgetArgument(e_59, 1);
      {
        ATerm j_59 = NULL,k_59 = NULL;
        ATerm l_59 = NULL;
        t = not_null(g_59);
        {
          ATerm m_59 = NULL,o_59 = NULL,q_59 = NULL;
          t = Arity_0(t);
          {
            l_59 = t;
            {
              if(((j_59 != NULL) && (j_59 != l_59)))
                _fail(l_59);
              else
                j_59 = l_59;
              {
                ATerm f_27;
                f_27 = t;
                {
                  ATerm n_59 = NULL;
                  t = not_null(f_59);
                  {
                    t = cify_0(t);
                    {
                      n_59 = t;
                      if(((m_59 != NULL) && (m_59 != n_59)))
                        _fail(n_59);
                      else
                        m_59 = n_59;
                    }
                  }
                }
                t = f_27;
                {
                  ATerm p_59 = NULL;
                  t = not_null(j_59);
                  {
                    t = int_to_string_0(t);
                    {
                      p_59 = t;
                      if(((o_59 != NULL) && (o_59 != p_59)))
                        _fail(p_59);
                      else
                        o_59 = p_59;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_59)), term_h_27), not_null(m_59)), term_g_27);
                    {
                      t = concat_strings_0(t);
                      {
                        q_59 = t;
                        {
                          if(((k_59 != NULL) && (k_59 != q_59)))
                            _fail(q_59);
                          else
                            k_59 = q_59;
                          {
                            ATerm i_27;
                            i_27 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(f_59), not_null(j_59)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_27, not_null(k_59)));
                              {
                                ATerm j_2 (ATerm t)
                                {
                                  t = term_e_26;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_59)), term_l_12)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateSig_0 (ATerm t)
{
  ATerm f_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  f_60 = t;
  b_60 :
  if(match_cons(f_60, sym_Signature_1))
    {
      h_60 = ATgetArgument(f_60, 0);
      c_60 :
      if(((ATgetType(h_60) == AT_LIST) && ((ATermList) h_60 != ATempty)))
        {
          i_60 = ATgetFirst((ATermList) h_60);
          k_60 = (ATerm) ATgetNext((ATermList) h_60);
          d_60 :
          if(match_cons(i_60, sym_Constructors_1))
            {
              j_60 = ATgetArgument(i_60, 0);
              e_60 :
              if(((ATermList) k_60 == ATempty))
                {
                  {
                    ATerm m_60 = NULL,n_60 = NULL,q_60 = NULL;
                    ATerm n_27;
                    n_27 = t;
                    {
                      ATerm o_60 = NULL;
                      t = not_null(j_60);
                      {
                        ATerm p_60 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          o_60 = t;
                          {
                            if(((m_60 != NULL) && (m_60 != o_60)))
                              _fail(o_60);
                            else
                              m_60 = o_60;
                            {
                              t = not_null(j_60);
                              {
                                t = InitConstructors_0(t);
                                {
                                  p_60 = t;
                                  if(((n_60 != NULL) && (n_60 != p_60)))
                                    _fail(p_60);
                                  else
                                    n_60 = p_60;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = n_27;
                    {
                      ATerm r_60 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_60), (ATerm) ATinsert(ATempty, not_null(n_60)));
                      {
                        t = conc_0(t);
                        {
                          r_60 = t;
                          if(((q_60 != NULL) && (q_60 != r_60)))
                            _fail(r_60);
                          else
                            q_60 = r_60;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(q_60));
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
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL;
  y_60 = t;
  x_60 :
  if(match_cons(y_60, sym__2))
    {
      z_60 = ATgetArgument(y_60, 0);
      a_61 = ATgetArgument(y_60, 1);
      {
        t = not_null(z_60);
        {
          ATerm k_2 (ATerm t)
          {
            t = not_null(a_61);
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
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL;
  j_61 = t;
  h_61 :
  if(match_cons(j_61, sym_FunType_2))
    {
      k_61 = ATgetArgument(j_61, 0);
      i_61 = ATgetArgument(j_61, 1);
      {
        ATerm m_61 = NULL;
        ATerm n_61 = NULL;
        t = not_null(k_61);
        {
          t = map_1(t, TranslateType_0);
          {
            n_61 = t;
            if(((m_61 != NULL) && (m_61 != n_61)))
              _fail(n_61);
            else
              m_61 = n_61;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(m_61)));
      }
    }
  else
    {
      if(match_cons(j_61, sym_ConstType_1))
        {
          k_61 = ATgetArgument(j_61, 0);
          t = term_a_12;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm TranslateVarDec_0 (ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,c_62 = NULL;
  x_61 = t;
  u_61 :
  if(match_cons(x_61, sym_VarDec_2))
    {
      y_61 = ATgetArgument(x_61, 0);
      z_61 = ATgetArgument(x_61, 1);
      v_61 :
      if(match_cons(z_61, sym_FunType_2))
        {
          c_62 = ATgetArgument(z_61, 0);
          w_61 = ATgetArgument(z_61, 1);
          {
            ATerm f_62 = NULL;
            ATerm g_62 = NULL;
            t = not_null(c_62);
            {
              t = map_1(t, TranslateType_0);
              {
                g_62 = t;
                if(((f_62 != NULL) && (f_62 != g_62)))
                  _fail(g_62);
                else
                  f_62 = g_62;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_61)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(f_62)))));
          }
        }
      else
        {
          if(match_cons(z_61, sym_ConstType_1))
            {
              c_62 = ATgetArgument(z_61, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_61)), term_l_12));
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
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL;
  o_62 = t;
  n_62 :
  if(match_cons(o_62, sym_SDef_3))
    {
      p_62 = ATgetArgument(o_62, 0);
      q_62 = ATgetArgument(o_62, 1);
      r_62 = ATgetArgument(o_62, 2);
      {
        ATerm v_62 = NULL;
        ATerm w_62 = NULL;
        t = not_null(q_62);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            w_62 = t;
            if(((v_62 != NULL) && (v_62 != w_62)))
              _fail(w_62);
            else
              v_62 = w_62;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_62)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(v_62)), term_a_12))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm TranslateSpec_0 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL;
  i_63 = t;
  c_63 :
  if(match_cons(i_63, sym_Specification_1))
    {
      j_63 = ATgetArgument(i_63, 0);
      d_63 :
      if(((ATgetType(j_63) == AT_LIST) && ((ATermList) j_63 != ATempty)))
        {
          k_63 = ATgetFirst((ATermList) j_63);
          m_63 = (ATerm) ATgetNext((ATermList) j_63);
          e_63 :
          if(match_cons(k_63, sym_Signature_1))
            {
              l_63 = ATgetArgument(k_63, 0);
              f_63 :
              if(((ATgetType(m_63) == AT_LIST) && ((ATermList) m_63 != ATempty)))
                {
                  o_63 = ATgetFirst((ATermList) m_63);
                  q_63 = (ATerm) ATgetNext((ATermList) m_63);
                  g_63 :
                  if(match_cons(o_63, sym_Strategies_1))
                    {
                      p_63 = ATgetArgument(o_63, 0);
                      h_63 :
                      if(((ATermList) q_63 == ATempty))
                        {
                          {
                            ATerm t_63 = NULL,v_63 = NULL;
                            ATerm o_27;
                            o_27 = t;
                            {
                              ATerm u_63 = NULL;
                              t = not_null(p_63);
                              {
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  u_63 = t;
                                  if(((t_63 != NULL) && (t_63 != u_63)))
                                    _fail(u_63);
                                  else
                                    t_63 = u_63;
                                }
                              }
                            }
                            t = o_27;
                            {
                              ATerm w_63 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(t_63), not_null(p_63));
                              {
                                t = conc_0(t);
                                {
                                  w_63 = t;
                                  if(((v_63 != NULL) && (v_63 != w_63)))
                                    _fail(w_63);
                                  else
                                    v_63 = w_63;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_63)), term_b_28), (ATerm) ATmakeAppl(sym_Signature_1, not_null(l_63))), term_a_28), term_s_27), term_q_27));
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
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  c_64 = t;
  b_64 :
  if(((ATgetType(c_64) == AT_LIST) && ((ATermList) c_64 != ATempty)))
    {
      d_64 = ATgetFirst((ATermList) c_64);
      e_64 = (ATerm) ATgetNext((ATermList) c_64);
      t = not_null(e_64);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
  l_64 = t;
  k_64 :
  if(match_cons(l_64, sym__2))
    {
      m_64 = ATgetArgument(l_64, 0);
      n_64 = ATgetArgument(l_64, 1);
      {
        ATerm c_28;
        c_28 = t;
        {
          ATerm q_64 = NULL;
          ATerm r_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_64), not_null(n_64));
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
              r_64 = t;
              if(((q_64 != NULL) && (q_64 != r_64)))
                _fail(r_64);
              else
                q_64 = r_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_64), not_null(n_64), not_null(q_64));
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
ATerm end_scope_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
  ATerm f_28;
  f_28 = t;
  {
    ATerm b_65 = NULL;
    ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
    t = l_68(t);
    {
      b_65 = t;
      {
        if(((z_64 != NULL) && (z_64 != b_65)))
          _fail(b_65);
        else
          z_64 = b_65;
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_64), term_i_28);
              t = table_get_0(t);
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              t = term_j_28;
            }
          {
            c_65 = t;
            x_64 :
            if(((ATgetType(c_65) == AT_LIST) && ((ATermList) c_65 != ATempty)))
              {
                d_65 = ATgetFirst((ATermList) c_65);
                e_65 = (ATerm) ATgetNext((ATermList) c_65);
                {
                  if(((a_65 != NULL) && (a_65 != d_65)))
                    _fail(d_65);
                  else
                    a_65 = d_65;
                  {
                    if(((y_64 != NULL) && (y_64 != e_65)))
                      _fail(e_65);
                    else
                      y_64 = e_65;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_64), term_i_28, not_null(y_64));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_65);
                          {
                            ATerm l_2 (ATerm t)
                            {
                              ATerm f_65 = NULL;
                              f_65 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_64), not_null(f_65));
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
ATerm restore_always_2 (ATerm t, ATerm z_89 (ATerm), ATerm a_90 (ATerm))
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_89(t);
      t = a_90(t);
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        t = a_90(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm k_68 (ATerm))
{
  ATerm m_65 = NULL;
  ATerm n_28;
  n_28 = t;
  {
    ATerm n_65 = NULL;
    ATerm o_65 = NULL;
    t = k_68(t);
    {
      n_65 = t;
      {
        if(((m_65 != NULL) && (m_65 != n_65)))
          _fail(n_65);
        else
          m_65 = n_65;
        {
          ATerm q_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_65), term_i_28);
          {
            ATerm q_28 = t;
            int s_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_28);
              }
            else
              {
                t = q_28;
                t = (ATerm) ATempty;
              }
            {
              q_65 = t;
              if(((o_65 != NULL) && (o_65 != q_65)))
                _fail(q_65);
              else
                o_65 = q_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_65), term_i_28, (ATerm) ATinsert(CheckATermList(not_null(o_65)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_28;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm m_68 (ATerm), ATerm n_68 (ATerm))
{
  t = begin_scope_1(t, m_68);
  {
    ATerm m_2 (ATerm t)
    {
      t = end_scope_1(t, m_68);
      return(t);
    }
    t = restore_always_2(t, n_68, m_2);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_68 (ATerm))
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  a_66 = t;
  z_65 :
  if(match_cons(a_66, sym__2))
    {
      b_66 = ATgetArgument(a_66, 0);
      c_66 = ATgetArgument(a_66, 1);
      {
        ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
        ATerm t_28;
        t_28 = t;
        {
          ATerm i_66 = NULL;
          ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
          t = o_68(t);
          {
            i_66 = t;
            {
              if(((f_66 != NULL) && (f_66 != i_66)))
                _fail(i_66);
              else
                f_66 = i_66;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_66), not_null(b_66), not_null(c_66));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_28 = t;
                    int v_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_66), term_i_28);
                        t = table_get_0(t);
                        LocalPopChoice(v_28);
                      }
                    else
                      {
                        t = u_28;
                        t = term_j_28;
                      }
                    {
                      j_66 = t;
                      y_65 :
                      if(((ATgetType(j_66) == AT_LIST) && ((ATermList) j_66 != ATempty)))
                        {
                          k_66 = ATgetFirst((ATermList) j_66);
                          l_66 = (ATerm) ATgetNext((ATermList) j_66);
                          {
                            if(((g_66 != NULL) && (g_66 != k_66)))
                              _fail(k_66);
                            else
                              g_66 = k_66;
                            {
                              if(((h_66 != NULL) && (h_66 != l_66)))
                                _fail(l_66);
                              else
                                h_66 = l_66;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_66), term_i_28, (ATerm) ATinsert(CheckATermList(not_null(h_66)), (ATerm) ATinsert(CheckATermList(not_null(g_66)), not_null(b_66))));
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
  ATerm r_66 = NULL,s_66 = NULL;
  ATerm w_28;
  w_28 = t;
  {
    ATerm t_66 = NULL;
    ATerm u_66 = NULL;
    t = term_z_28;
    {
      t_66 = t;
      {
        if(((r_66 != NULL) && (r_66 != t_66)))
          _fail(t_66);
        else
          r_66 = t_66;
        {
          t = term_i_17;
          {
            u_66 = t;
            if(((s_66 != NULL) && (s_66 != u_66)))
              _fail(u_66);
            else
              s_66 = u_66;
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
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_66)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_29, not_null(s_66)));
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
    ATerm a_67 (ATerm t)
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
                ATerm f_29 = t;
                int h_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    LocalPopChoice(h_29);
                  }
                else
                  {
                    t = f_29;
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
          t = _all(t, a_67);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, o_2, p_2);
      return(t);
    }
    t = a_67(t);
    {
      ATerm r_2 (ATerm t)
      {
        ATerm w_2 (ATerm t)
        {
          ATerm z_66 = NULL;
          z_66 = t;
          y_66 :
          if(match_cons(z_66, sym_InitCachedTerms_0))
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
  ATerm e_67 = NULL;
  ATerm k_29;
  k_29 = t;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm f_67 = NULL,g_67 = NULL;
      f_67 = t;
      d_67 :
      if(match_cons(f_67, sym_Program_1))
        {
          g_67 = ATgetArgument(f_67, 0);
          if(((e_67 != NULL) && (e_67 != g_67)))
            _fail(g_67);
          else
            e_67 = g_67;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, x_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(CheckATermList(term_n_29), not_null(e_67)), term_l_29));
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
  ATerm n_67 = NULL,o_67 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm e_3 (ATerm t)
    {
      ATerm u_29 = t;
      if((PushChoice() == 0))
        {
          ATerm f_3 (ATerm t)
          {
            ATerm p_67 = NULL;
            p_67 = t;
            i_67 :
            if(!(match_cons(p_67, sym_Silent_0)))
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
          ATerm q_67 = NULL,r_67 = NULL;
          q_67 = t;
          k_67 :
          if(match_cons(q_67, sym_Runtime_1))
            {
              r_67 = ATgetArgument(q_67, 0);
              if(((o_67 != NULL) && (o_67 != r_67)))
                _fail(r_67);
              else
                o_67 = r_67;
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
            ATerm s_67 = NULL,t_67 = NULL;
            s_67 = t;
            m_67 :
            if(match_cons(s_67, sym_Program_1))
              {
                t_67 = ATgetArgument(s_67, 0);
                if(((n_67 != NULL) && (n_67 != t_67)))
                  _fail(t_67);
                else
                  n_67 = t_67;
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
          t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_x_29), not_null(o_67)), term_v_29), not_null(n_67)));
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
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
  a_68 = t;
  z_67 :
  if(match_cons(a_68, sym__2))
    {
      b_68 = ATgetArgument(a_68, 0);
      c_68 = ATgetArgument(a_68, 1);
      t = SSL_WriteToTextFile(not_null(b_68), not_null(c_68));
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm i_49 (ATerm), ATerm j_49 (ATerm))
{
  ATerm p_68 = NULL,r_68 = NULL,s_68 = NULL;
  p_68 = t;
  j_68 :
  if(match_cons(p_68, sym__2))
    {
      r_68 = ATgetArgument(p_68, 0);
      s_68 = ATgetArgument(p_68, 1);
      {
        ATerm v_68 = NULL;
        t = not_null(r_68);
        {
          ATerm x_68 = NULL;
          t = i_49(t);
          {
            v_68 = t;
            {
              t = not_null(s_68);
              {
                t = j_49(t);
                {
                  x_68 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_68), not_null(x_68));
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
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  e_69 = t;
  d_69 :
  if(match_cons(e_69, sym__2))
    {
      f_69 = ATgetArgument(e_69, 0);
      g_69 = ATgetArgument(e_69, 1);
      t = SSL_WriteToBinaryFile(not_null(f_69), not_null(g_69));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm o_69 = NULL;
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
            ATerm p_69 = NULL,q_69 = NULL;
            p_69 = t;
            l_69 :
            if(match_cons(p_69, sym_Output_1))
              {
                q_69 = ATgetArgument(p_69, 0);
                if(((o_69 != NULL) && (o_69 != q_69)))
                  _fail(q_69);
                else
                  o_69 = q_69;
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
            ATerm r_69 = NULL;
            t = term_b_30;
            {
              r_69 = t;
              if(((o_69 != NULL) && (o_69 != r_69)))
                _fail(r_69);
              else
                o_69 = r_69;
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
        t = not_null(o_69);
        return(t);
      }
      t = split_2(t, t_3, _id);
      return(t);
    }
    t = _2(t, _id, r_3);
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_3 (ATerm t)
          {
            ATerm x_3 (ATerm t)
            {
              ATerm s_69 = NULL;
              s_69 = t;
              n_69 :
              if(!(match_cons(s_69, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, x_3);
            return(t);
          }
          t = _2(t, w_3, WriteToBinaryFile_0);
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm y_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL;
  ATerm f_30;
  f_30 = t;
  t = dtime_0(t);
  t = f_30;
  {
    t = t_73(t);
    {
      ATerm g_30;
      g_30 = t;
      {
        ATerm z_69 = NULL;
        t = dtime_0(t);
        {
          z_69 = t;
          if(((y_69 != NULL) && (y_69 != z_69)))
            _fail(z_69);
          else
            y_69 = z_69;
        }
      }
      t = g_30;
      {
        a_70 = t;
        x_69 :
        if(match_cons(a_70, sym__2))
          {
            b_70 = ATgetArgument(a_70, 0);
            c_70 = ATgetArgument(a_70, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_70)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_69))), not_null(c_70));
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
  ATerm i_70 = NULL;
  i_70 = t;
  t = SSL_ReadFromFile(not_null(i_70));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm))
{
  ATerm n_70 = NULL,p_70 = NULL;
  ATerm h_30;
  h_30 = t;
  {
    ATerm o_70 = NULL;
    t = b_76(t);
    {
      o_70 = t;
      if(((n_70 != NULL) && (n_70 != o_70)))
        _fail(o_70);
      else
        n_70 = o_70;
    }
  }
  t = h_30;
  {
    ATerm q_70 = NULL;
    t = c_76(t);
    {
      q_70 = t;
      if(((p_70 != NULL) && (p_70 != q_70)))
        _fail(q_70);
      else
        p_70 = q_70;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_70), not_null(p_70));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_70 = NULL;
  ATerm i_30;
  i_30 = t;
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          ATerm x_70 = NULL,y_70 = NULL;
          x_70 = t;
          u_70 :
          if(match_cons(x_70, sym_Input_1))
            {
              y_70 = ATgetArgument(x_70, 0);
              if(((w_70 != NULL) && (w_70 != y_70)))
                _fail(y_70);
              else
                w_70 = y_70;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, y_3);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        {
          ATerm z_70 = NULL;
          t = term_z_32;
          {
            z_70 = t;
            if(((w_70 != NULL) && (w_70 != z_70)))
              _fail(z_70);
            else
              w_70 = z_70;
          }
        }
      }
  }
  t = i_30;
  {
    ATerm e_4 (ATerm t)
    {
      t = not_null(w_70);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_71 = NULL;
  d_71 = t;
  c_71 :
  if(!(match_cons(d_71, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_73 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        {
          ATerm e_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(f_33);
            }
          else
            {
              t = e_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, f_4);
  t = s_73(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_71 = NULL;
  f_71 = t;
  t = SSL_table_create(not_null(f_71));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_71 = NULL;
  j_71 = t;
  {
    ATerm g_33;
    g_33 = t;
    {
      t = term_h_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_33, term_i_33, not_null(j_71));
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
  ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
  r_71 = t;
  p_71 :
  if(match_string(r_71, "register-usage-info"))
    t = register_usage_1(t, p_0);
  else
    {
      if(((ATgetType(r_71) == AT_LIST) && ((ATermList) r_71 != ATempty)))
        {
          s_71 = ATgetFirst((ATermList) r_71);
          t_71 = (ATerm) ATgetNext((ATermList) r_71);
          q_71 :
          if(((ATgetType(t_71) == AT_LIST) && ((ATermList) t_71 != ATempty)))
            {
              u_71 = ATgetFirst((ATermList) t_71);
              v_71 = (ATerm) ATgetNext((ATermList) t_71);
              {
                ATerm f_72 = NULL;
                ATerm j_33;
                j_33 = t;
                {
                  t = not_null(s_71);
                  t = n_0(t);
                }
                t = j_33;
                {
                  ATerm g_72 = NULL;
                  t = not_null(u_71);
                  {
                    t = o_0(t);
                    {
                      g_72 = t;
                      if(((f_72 != NULL) && (f_72 != g_72)))
                        _fail(g_72);
                      else
                        f_72 = g_72;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_71)), not_null(f_72));
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
        ATerm a_73 = NULL;
        a_73 = t;
        m_72 :
        if(!(match_string(a_73, "-S")))
          {
            if(!(match_string(a_73, "--silent")))
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
              ATerm b_73 = NULL;
              b_73 = t;
              n_72 :
              if(!(match_string(b_73, "--verbose")))
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
                    ATerm e_73 = NULL;
                    e_73 = t;
                    o_72 :
                    if(!(match_string(e_73, "-v")))
                      {
                        if(!(match_string(e_73, "--version")))
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
                    ATerm c_34 = t;
                    int d_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_4 (ATerm t)
                        {
                          ATerm f_73 = NULL;
                          f_73 = t;
                          p_72 :
                          if(!(match_string(f_73, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm a_5 (ATerm t)
                        {
                          ATerm g_73 = NULL;
                          ATerm k_73 = NULL;
                          k_73 = t;
                          if(((g_73 != NULL) && (g_73 != k_73)))
                            _fail(k_73);
                          else
                            g_73 = k_73;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(g_73));
                          return(t);
                        }
                        ATerm c_5 (ATerm t)
                        {
                          t = term_p_34;
                          return(t);
                        }
                        t = ArgOption_3(t, w_4, a_5, c_5);
                        LocalPopChoice(d_34);
                      }
                    else
                      {
                        t = c_34;
                        {
                          ATerm q_34 = t;
                          int r_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_5 (ATerm t)
                              {
                                ATerm l_73 = NULL;
                                l_73 = t;
                                r_72 :
                                if(!(match_string(l_73, "-i")))
                                  {
                                    if(!(match_string(l_73, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm e_5 (ATerm t)
                              {
                                ATerm m_73 = NULL;
                                ATerm n_73 = NULL;
                                n_73 = t;
                                if(((m_73 != NULL) && (m_73 != n_73)))
                                  _fail(n_73);
                                else
                                  m_73 = n_73;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_73));
                                return(t);
                              }
                              ATerm f_5 (ATerm t)
                              {
                                t = term_s_34;
                                return(t);
                              }
                              t = ArgOption_3(t, d_5, e_5, f_5);
                              LocalPopChoice(r_34);
                            }
                          else
                            {
                              t = q_34;
                              {
                                ATerm t_34 = t;
                                int u_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_5 (ATerm t)
                                    {
                                      ATerm o_73 = NULL;
                                      o_73 = t;
                                      v_72 :
                                      if(!(match_string(o_73, "-o")))
                                        {
                                          if(!(match_string(o_73, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm h_5 (ATerm t)
                                    {
                                      ATerm p_73 = NULL;
                                      ATerm q_73 = NULL;
                                      q_73 = t;
                                      if(((p_73 != NULL) && (p_73 != q_73)))
                                        _fail(q_73);
                                      else
                                        p_73 = q_73;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_73));
                                      return(t);
                                    }
                                    ATerm i_5 (ATerm t)
                                    {
                                      t = term_w_34;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, g_5, h_5, i_5);
                                    LocalPopChoice(u_34);
                                  }
                                else
                                  {
                                    t = t_34;
                                    {
                                      ATerm x_34 = t;
                                      int z_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_5 (ATerm t)
                                          {
                                            ATerm r_73 = NULL;
                                            r_73 = t;
                                            y_72 :
                                            if(!(match_string(r_73, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_5 (ATerm t)
                                          {
                                            t = term_a_35;
                                            return(t);
                                          }
                                          ATerm l_5 (ATerm t)
                                          {
                                            t = term_b_35;
                                            return(t);
                                          }
                                          t = Option_3(t, j_5, k_5, l_5);
                                          LocalPopChoice(z_34);
                                        }
                                      else
                                        {
                                          t = x_34;
                                          {
                                            ATerm m_5 (ATerm t)
                                            {
                                              ATerm u_73 = NULL;
                                              u_73 = t;
                                              z_72 :
                                              if(!(match_string(u_73, "-s")))
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
  ATerm z_73 = NULL;
  z_73 = t;
  t = SSL_table_destroy(not_null(z_73));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_74 = NULL;
  ATerm h_74 (ATerm t)
  {
    t = SSL_exit(not_null(e_74));
    return(t);
  }
  e_74 = t;
  d_74 :
  if(match_cons(e_74, sym_exit_0))
    {
      ATerm e_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_74(t);
          LocalPopChoice(h_35);
        }
      else
        {
          t = e_35;
          {
          }
        }
    }
  else
    t = h_74(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm j_74 = NULL;
  j_74 = t;
  t = SSL_implode_string(not_null(j_74));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_83 (ATerm))
{
  ATerm m_74 (ATerm t)
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_74);
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        {
          t = Nil_0(t);
          t = b_83(t);
        }
      }
    return(t);
  }
  t = m_74(t);
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
        ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
        p_74 = t;
        o_74 :
        if(((ATgetType(p_74) == AT_LIST) && ((ATermList) p_74 != ATempty)))
          {
            q_74 = ATgetFirst((ATermList) p_74);
            r_74 = (ATerm) ATgetNext((ATermList) p_74);
            {
              t = not_null(q_74);
              {
                ATerm p_5 (ATerm t)
                {
                  t = not_null(r_74);
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
  ATerm x_74 = NULL;
  x_74 = t;
  t = SSL_explode_string(not_null(x_74));
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
ATerm long_description_1 (ATerm t, ATerm z_71 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_82 (ATerm))
{
  ATerm d_75 (ATerm t)
  {
    ATerm m_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_35);
      }
    else
      {
        t = m_35;
        t = Cons_2(t, n_82, d_75);
      }
    return(t);
  }
  t = d_75(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL;
  k_75 = t;
  h_75 :
  if(((ATgetType(k_75) == AT_LIST) && ((ATermList) k_75 != ATempty)))
    {
      i_75 = ATgetFirst((ATermList) k_75);
      j_75 = (ATerm) ATgetNext((ATermList) k_75);
      {
        t = not_null(j_75);
        {
          ATerm f_8 (ATerm t)
          {
            ATerm o_75 = NULL;
            ATerm p_75 = NULL;
            t = m_0(t);
            {
              p_75 = t;
              if(((o_75 != NULL) && (o_75 != p_75)))
                _fail(p_75);
              else
                o_75 = p_75;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(o_75)), not_null(i_75));
            return(t);
          }
          t = reverse_1(t, f_8);
        }
      }
    }
  else
    {
      if(((ATermList) k_75 == ATempty))
        {
          {
            t = term_d_26;
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
ATerm short_description_1 (ATerm t, ATerm y_71 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_62 (ATerm))
{
  ATerm w_75 = NULL,x_75 = NULL;
  w_75 = t;
  v_75 :
  if(match_cons(w_75, sym_Program_1))
    {
      x_75 = ATgetArgument(w_75, 0);
      {
        ATerm z_75 = NULL;
        t = not_null(x_75);
        {
          t = a_62(t);
          {
            z_75 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_75));
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
  ATerm j_76 = NULL;
  ATerm h_8 (ATerm t)
  {
    ATerm i_8 (ATerm t)
    {
      ATerm k_76 = NULL;
      k_76 = t;
      if(((j_76 != NULL) && (j_76 != k_76)))
        _fail(k_76);
      else
        j_76 = k_76;
      return(t);
    }
    t = Program_1(t, i_8);
    return(t);
  }
  t = option_defined_1(t, h_8);
  {
    ATerm j_8 (ATerm t)
    {
      ATerm l_76 = NULL;
      ATerm m_76 = NULL;
      t = term_d_26;
      {
        ATerm k_8 (ATerm t)
        {
          t = not_null(j_76);
          return(t);
        }
        t = short_description_1(t, k_8);
        {
          t = concat_strings_0(t);
          {
            m_76 = t;
            if(((l_76 != NULL) && (l_76 != m_76)))
              _fail(m_76);
            else
              l_76 = m_76;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATempty, not_null(l_76)));
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
                  ATerm n_76 = NULL;
                  n_76 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_76)), term_w_35));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_8);
                {
                  ATerm m_8 (ATerm t)
                  {
                    ATerm p_76 = NULL;
                    ATerm q_76 = NULL;
                    t = term_d_26;
                    {
                      ATerm n_8 (ATerm t)
                      {
                        t = not_null(j_76);
                        return(t);
                      }
                      t = long_description_1(t, n_8);
                      {
                        t = concat_strings_0(t);
                        {
                          q_76 = t;
                          if(((p_76 != NULL) && (p_76 != q_76)))
                            _fail(q_76);
                          else
                            p_76 = q_76;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_76)), term_x_35));
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
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  x_76 = t;
  w_76 :
  if(match_cons(x_76, sym__2))
    {
      y_76 = ATgetArgument(x_76, 0);
      z_76 = ATgetArgument(x_76, 1);
      {
        ATerm y_35;
        y_35 = t;
        t = SSL_printnl(not_null(y_76), not_null(z_76));
        t = y_35;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_62 (ATerm))
{
  ATerm g_77 = NULL,h_77 = NULL;
  g_77 = t;
  f_77 :
  if(match_cons(g_77, sym_Undefined_1))
    {
      h_77 = ATgetArgument(g_77, 0);
      {
        ATerm j_77 = NULL;
        t = not_null(h_77);
        {
          t = b_62(t);
          {
            j_77 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_77));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_82 (ATerm))
{
  ATerm n_77 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_82, _id);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = Cons_2(t, _id, n_77);
      }
    return(t);
  }
  t = n_77(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_72 (ATerm))
{
  t = fetch_1(t, x_72);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_77 = NULL;
  s_77 = t;
  o_77 :
  if(!(match_cons(s_77, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_89 (ATerm))
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_89(t);
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
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL;
  v_77 = t;
  u_77 :
  if(match_cons(v_77, sym__2))
    {
      w_77 = ATgetArgument(v_77, 0);
      x_77 = ATgetArgument(v_77, 1);
      t = SSL_table_get(not_null(w_77), not_null(x_77));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
  g_78 = t;
  f_78 :
  if(match_cons(g_78, sym__3))
    {
      h_78 = ATgetArgument(g_78, 0);
      i_78 = ATgetArgument(g_78, 1);
      j_78 = ATgetArgument(g_78, 2);
      {
        ATerm d_36;
        d_36 = t;
        {
          ATerm n_78 = NULL;
          ATerm o_78 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_78), not_null(i_78));
          {
            ATerm g_36 = t;
            int h_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_36);
              }
            else
              {
                t = g_36;
                t = (ATerm) ATempty;
              }
            {
              o_78 = t;
              if(((n_78 != NULL) && (n_78 != o_78)))
                _fail(o_78);
              else
                n_78 = o_78;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_78), not_null(i_78), (ATerm) ATinsert(CheckATermList(not_null(n_78)), not_null(j_78)));
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
ATerm register_usage_1 (ATerm t, ATerm d_72 (ATerm))
{
  ATerm s_78 = NULL;
  ATerm t_78 = NULL;
  t = term_d_26;
  {
    t = d_72(t);
    {
      t_78 = t;
      if(((s_78 != NULL) && (s_78 != t_78)))
        _fail(t_78);
      else
        s_78 = t_78;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_35, term_u_35, not_null(s_78));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm g_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
  z_78 = t;
  y_78 :
  if(match_string(z_78, "register-usage-info"))
    t = register_usage_1(t, l_0);
  else
    {
      if(((ATgetType(z_78) == AT_LIST) && ((ATermList) z_78 != ATempty)))
        {
          a_79 = ATgetFirst((ATermList) z_78);
          b_79 = (ATerm) ATgetNext((ATermList) z_78);
          {
            ATerm e_79 = NULL;
            ATerm i_36;
            i_36 = t;
            {
              t = not_null(a_79);
              t = a_0(t);
            }
            t = i_36;
            {
              ATerm f_79 = NULL;
              t = term_d_26;
              {
                t = g_0(t);
                {
                  f_79 = t;
                  if(((e_79 != NULL) && (e_79 != f_79)))
                    _fail(f_79);
                  else
                    e_79 = f_79;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_79)), not_null(e_79));
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
    ATerm k_79 = NULL;
    k_79 = t;
    j_79 :
    if(!(match_string(k_79, "--help")))
      {
        if(!(match_string(k_79, "-h")))
          {
            if(!(match_string(k_79, "-?")))
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
    t = term_p_36;
    return(t);
  }
  t = Option_3(t, o_8, p_8, q_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL;
  n_79 = t;
  m_79 :
  if(((ATgetType(n_79) == AT_LIST) && ((ATermList) n_79 != ATempty)))
    {
      o_79 = ATgetFirst((ATermList) n_79);
      p_79 = (ATerm) ATgetNext((ATermList) n_79);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_79)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_79)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
  x_79 = t;
  w_79 :
  if(((ATgetType(x_79) == AT_LIST) && ((ATermList) x_79 != ATempty)))
    {
      y_79 = ATgetFirst((ATermList) x_79);
      z_79 = (ATerm) ATgetNext((ATermList) x_79);
      {
        ATerm c_80 = NULL;
        t = not_null(y_79);
        {
          ATerm e_80 = NULL;
          t = v_67(t);
          {
            c_80 = t;
            {
              t = not_null(z_79);
              {
                t = w_67(t);
                {
                  e_80 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_80)), not_null(c_80));
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
  ATerm k_80 = NULL;
  k_80 = t;
  j_80 :
  if(((ATermList) k_80 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm q_36;
  q_36 = t;
  {
    ATerm r_8 (ATerm t)
    {
      t = term_e_37;
      t = b_72(t);
      return(t);
    }
    t = try_1(t, r_8);
  }
  t = q_36;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm m_80 = NULL;
      m_80 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_80));
      return(t);
    }
    ATerm t_8 (ATerm t)
    {
      ATerm f_37 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_37 = t;
          int m_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(m_37);
            }
          else
            {
              t = j_37;
              {
                t = b_72(t);
                t = Cons_2(t, _id, t_8);
              }
            }
          LocalPopChoice(i_37);
        }
      else
        {
          t = f_37;
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
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL;
  ATerm n_37;
  n_37 = t;
  {
    ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL;
    v_80 = t;
    r_80 :
    if(match_cons(v_80, sym__3))
      {
        w_80 = ATgetArgument(v_80, 0);
        x_80 = ATgetArgument(v_80, 1);
        y_80 = ATgetArgument(v_80, 2);
        {
          if(((s_80 != NULL) && (s_80 != w_80)))
            _fail(w_80);
          else
            s_80 = w_80;
          {
            if(((t_80 != NULL) && (t_80 != x_80)))
              _fail(x_80);
            else
              t_80 = x_80;
            {
              if(((u_80 != NULL) && (u_80 != y_80)))
                _fail(y_80);
              else
                u_80 = y_80;
              t = SSL_table_put(not_null(s_80), not_null(t_80), not_null(u_80));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = n_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_72 (ATerm))
{
  ATerm b_81 = NULL;
  ATerm q_37;
  q_37 = t;
  {
    t = term_r_37;
    t = table_put_0(t);
  }
  t = q_37;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm s_37 = t;
      int t_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_72(t);
          LocalPopChoice(t_37);
        }
      else
        {
          t = s_37;
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
                  ATerm c_81 = NULL;
                  c_81 = t;
                  if(((b_81 != NULL) && (b_81 != c_81)))
                    _fail(c_81);
                  else
                    b_81 = c_81;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_81)), term_x_37));
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
ATerm iowrap_3 (ATerm t, ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm))
{
  ATerm a_9 (ATerm t)
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_73(t);
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
      int e_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, j_73);
          LocalPopChoice(e_38);
        }
      else
        {
          t = b_38;
          {
            ATerm f_38 = t;
            int g_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, h_73);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(g_38);
              }
            else
              {
                t = f_38;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_73 (ATerm), ATerm d_73 (ATerm))
{
  t = iowrap_3(t, c_73, d_73, default_usage_0);
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
