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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_p_17;
ATerm term_f_17;
ATerm term_n_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_k_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_a_11;
ATerm term_o_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_q_9;
ATerm term_g_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_u_8;
ATerm term_m_8;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_u_6;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_e_4;
ATerm term_d_4;
ATerm term_c_4;
ATerm term_b_4;
ATerm term_a_4;
ATerm term_z_3;
ATerm term_w_3;
void init_constant_terms (void)
{
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_3);
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(sym_Call_2, term_z_3, (ATerm) ATempty);
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_4);
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(sym_Call_2, term_c_4, (ATerm) ATempty);
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_4);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_4);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_5);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_5);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_bagof", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_5);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_g_9);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_9);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_h_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_v_13, term_h_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_h_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_e_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__3, term_z_14, term_e_15, (ATerm) ATempty);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm n_74 (ATerm));
ATerm Call_2 (ATerm, ATerm c_75 (ATerm), ATerm d_75 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm));
ATerm unzip_1 (ATerm, ATerm v_91 (ATerm));
ATerm alltd_1 (ATerm, ATerm r_99 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm u_100 (ATerm), ATerm v_100 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_100 (ATerm));
ATerm downup2_2 (ATerm, ATerm u_97 (ATerm), ATerm v_97 (ATerm));
ATerm _2 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm y_83 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_81 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_87 (ATerm), ATerm n_87 (ATerm));
ATerm crush_2 (ATerm, ATerm b_89 (ATerm), ATerm c_89 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_81 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_83 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_86 (ATerm), ATerm b_86 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_83 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_93 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_80 (ATerm));
ATerm map_1 (ATerm, ATerm y_92 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_80 (ATerm));
ATerm Program_1 (ATerm, ATerm m_70 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_93 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_81 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_101 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_80 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_75 (ATerm), ATerm y_75 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_80 (ATerm));
ATerm iowrap_4 (ATerm, ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_82 (ATerm), ATerm n_82 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_82 (ATerm));
ATerm canonicalize_0 (ATerm);
ATerm main_0 (ATerm);
ATerm mark_fresh_vars_0 (ATerm t)
{
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0 (ATerm t)
{
  ATerm d_1 = NULL;
  ATerm i_1 = NULL;
  d_1 = t;
  {
    ATerm j_1 = NULL;
    t = new_0(t);
    {
      j_1 = t;
      if(((i_1 != NULL) && (i_1 != j_1)))
        _fail(j_1);
      else
        i_1 = j_1;
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_1)), (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_1), (ATerm)ATempty, not_null(d_1))));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm r_2 = NULL,s_2 = NULL;
  r_2 = t;
  q_2 :
  if(match_cons(r_2, sym_SVar_1))
    {
      s_2 = ATgetArgument(r_2, 0);
      {
        ATerm v_2 = NULL,x_2 = NULL;
        ATerm w_2 = NULL;
        t = SSLgetAnnotations(not_null(r_2));
        {
          w_2 = t;
          if(((v_2 != NULL) && (v_2 != w_2)))
            _fail(w_2);
          else
            v_2 = w_2;
        }
        {
          t = not_null(s_2);
          {
            ATerm z_2 = NULL;
            t = n_74(t);
            {
              x_2 = t;
              {
                ATerm a_3 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(x_2)), not_null(v_2));
                {
                  a_3 = t;
                  if(((z_2 != NULL) && (z_2 != a_3)))
                    _fail(a_3);
                  else
                    z_2 = a_3;
                }
                t = not_null(z_2);
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
ATerm Call_2 (ATerm t, ATerm c_75 (ATerm), ATerm d_75 (ATerm))
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  l_3 = t;
  k_3 :
  if(match_cons(l_3, sym_Call_2))
    {
      m_3 = ATgetArgument(l_3, 0);
      n_3 = ATgetArgument(l_3, 1);
      {
        ATerm r_3 = NULL,t_3 = NULL;
        ATerm s_3 = NULL;
        t = SSLgetAnnotations(not_null(l_3));
        {
          s_3 = t;
          if(((r_3 != NULL) && (r_3 != s_3)))
            _fail(s_3);
          else
            r_3 = s_3;
        }
        {
          t = not_null(m_3);
          {
            ATerm v_3 = NULL;
            t = c_75(t);
            {
              t_3 = t;
              {
                t = not_null(n_3);
                {
                  ATerm x_3 = NULL;
                  t = d_75(t);
                  {
                    v_3 = t;
                    {
                      ATerm y_3 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(t_3), not_null(v_3)), not_null(r_3));
                      {
                        y_3 = t;
                        if(((x_3 != NULL) && (x_3 != y_3)))
                          _fail(y_3);
                        else
                          x_3 = y_3;
                      }
                      t = not_null(x_3);
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
ATerm CreateDef1_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  j_4 = t;
  f_4 :
  if(match_cons(j_4, sym_Let_2))
    {
      k_4 = ATgetArgument(j_4, 0);
      l_4 = ATgetArgument(j_4, 1);
      g_4 :
      if(match_cons(l_4, sym_Call_2))
        {
          m_4 = ATgetArgument(l_4, 0);
          o_4 = ATgetArgument(l_4, 1);
          h_4 :
          if(match_cons(m_4, sym_SVar_1))
            {
              n_4 = ATgetArgument(m_4, 0);
              i_4 :
              if(((ATermList) o_4 == ATempty))
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_4)), (ATerm) ATempty), not_null(k_4));
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
ATerm CallFailFun_0 (ATerm t)
{
  ATerm u_4 = NULL;
  u_4 = t;
  t_4 :
  if(match_cons(u_4, sym_Fail_0))
    {
      t = term_a_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym_Id_0))
    {
      t = term_d_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
  e_5 = t;
  b_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      i_5 = ATgetArgument(e_5, 1);
      c_5 :
      if(match_cons(f_5, sym__2))
        {
          g_5 = ATgetArgument(f_5, 0);
          h_5 = ATgetArgument(f_5, 1);
          d_5 :
          if(match_cons(i_5, sym__2))
            {
              j_5 = ATgetArgument(i_5, 0);
              k_5 = ATgetArgument(i_5, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_5)), not_null(g_5)), (ATerm) ATinsert(CheckATermList(not_null(k_5)), not_null(h_5)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(((ATgetType(s_5) == AT_LIST) && ((ATermList) s_5 != ATempty)))
    {
      t_5 = ATgetFirst((ATermList) s_5);
      u_5 = (ATerm) ATgetNext((ATermList) s_5);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(u_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  z_5 :
  if(((ATermList) a_6 == ATempty))
    {
      t = term_e_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm p_4 = t;
    int q_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_91(t);
        LocalPopChoice(q_4);
      }
    else
      {
        t = p_4;
        {
          t = m_91(t);
          {
            t = _2(t, o_91, c_6);
            t = n_91(t);
          }
        }
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm v_91 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, v_91);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm r_99 (ATerm))
{
  ATerm d_6 (ATerm t)
  {
    ATerm r_4 = t;
    int s_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_99(t);
        LocalPopChoice(s_4);
      }
    else
      {
        t = r_4;
        t = _all(t, d_6);
      }
    return(t);
  }
  t = d_6(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  ATerm d_10 (ATerm t)
  {
    t = not_null(d_8);
    return(t);
  }
  ATerm e_10 (ATerm t)
  {
    t = not_null(e_8);
    return(t);
  }
  ATerm f_10 (ATerm t)
  {
    ATerm d_9 = NULL;
    ATerm e_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), not_null(a_8));
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
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_9), not_null(b_8));
    return(t);
  }
  ATerm g_10 (ATerm t)
  {
    t = not_null(e_8);
    return(t);
  }
  ATerm h_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_w_4, (ATerm) ATinsert(ATempty, not_null(d_8)));
    return(t);
  }
  ATerm i_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_a_5, (ATerm) ATinsert(ATempty, not_null(d_8)));
    return(t);
  }
  ATerm j_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_m_5, (ATerm) ATinsert(ATempty, not_null(d_8)));
    return(t);
  }
  ATerm k_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_o_5, (ATerm) ATinsert(ATempty, not_null(d_8)));
    return(t);
  }
  ATerm l_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_q_5, (ATerm) ATinsert(ATempty, not_null(d_8)));
    return(t);
  }
  ATerm m_10 (ATerm t)
  {
    ATerm n_9 = NULL;
    ATerm o_9 = NULL;
    t = not_null(e_8);
    {
      ATerm r_10 (ATerm t)
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_0 (ATerm t)
            {
              ATerm x_5 = t;
              int y_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  LocalPopChoice(y_5);
                }
              else
                {
                  t = x_5;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm b_0 (ATerm t)
            {
              t = try_1(t, r_10);
              return(t);
            }
            t = Cons_2(t, a_0, b_0);
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            t = Cons_2(t, _id, r_10);
          }
        return(t);
      }
      t = r_10(t);
      {
        o_9 = t;
        if(((n_9 != NULL) && (n_9 != o_9)))
          _fail(o_9);
        else
          n_9 = o_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(d_8), not_null(n_9));
    return(t);
  }
  ATerm n_10 (ATerm t)
  {
    ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
    ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
    t = not_null(e_8);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm f_0 (ATerm t)
        {
          ATerm b_6 = t;
          int e_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              LocalPopChoice(e_6);
            }
          else
            {
              t = b_6;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, f_0);
        {
          ATerm f_6 = t;
          int g_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              LocalPopChoice(g_6);
            }
          else
            {
              t = f_6;
              {
                ATerm h_6 = t;
                int i_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_6 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm m_0 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = Call_2(t, m_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = j_6;
                      }
                    t = CreateDef2_0(t);
                    LocalPopChoice(i_6);
                  }
                else
                  {
                    t = h_6;
                    {
                      ATerm n_0 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, n_0);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, e_0);
      {
        u_9 = t;
        d_7 :
        if(match_cons(u_9, sym__2))
          {
            v_9 = ATgetArgument(u_9, 0);
            w_9 = ATgetArgument(u_9, 1);
            {
              ATerm x_9 = NULL;
              if(((r_9 != NULL) && (r_9 != v_9)))
                _fail(v_9);
              else
                r_9 = v_9;
              {
                if(((s_9 != NULL) && (s_9 != w_9)))
                  _fail(w_9);
                else
                  s_9 = w_9;
                {
                  t = not_null(s_9);
                  {
                    t = concat_0(t);
                    {
                      x_9 = t;
                      {
                        if(((t_9 != NULL) && (t_9 != x_9)))
                          _fail(x_9);
                        else
                          t_9 = x_9;
                        {
                          ATerm k_6 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = k_6;
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
      }
    }
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_9), (ATerm) ATmakeAppl(sym_Call_2, not_null(d_8), not_null(r_9)));
    return(t);
  }
  c_8 = t;
  e_7 :
  if(match_cons(c_8, sym_SDef_4))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      v_7 = ATgetArgument(c_8, 2);
      u_7 = ATgetArgument(c_8, 3);
      f_7 :
      if(((ATgetType(d_8) == AT_LIST) && ((ATermList) d_8 != ATempty)))
        {
          z_7 = ATgetFirst((ATermList) d_8);
          t_7 = (ATerm) ATgetNext((ATermList) d_8);
          g_7 :
          if(match_cons(z_7, sym_DontInline_0))
            {
              h_7 :
              if(((ATermList) t_7 == ATempty))
                {
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_8), not_null(v_7), not_null(u_7));
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
      if(match_cons(c_8, sym_Rec_2))
        {
          d_8 = ATgetArgument(c_8, 0);
          e_8 = ATgetArgument(c_8, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_8), (ATerm)ATempty, not_null(e_8))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_8)), (ATerm) ATempty));
        }
      else
        {
          if(match_cons(c_8, sym_SDef_3))
            {
              d_8 = ATgetArgument(c_8, 0);
              e_8 = ATgetArgument(c_8, 1);
              v_7 = ATgetArgument(c_8, 2);
              i_7 :
              if(((ATermList) e_8 == ATempty))
                {
                  j_7 :
                  if(match_cons(v_7, sym_Rec_2))
                    {
                      w_7 = ATgetArgument(v_7, 0);
                      x_7 = ATgetArgument(v_7, 1);
                      {
                        ATerm n_8 = NULL;
                        ATerm s_8 = NULL;
                        t = not_null(x_7);
                        {
                          ATerm o_0 (ATerm t)
                          {
                            ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
                            o_8 = t;
                            v_6 :
                            if(match_cons(o_8, sym_Call_2))
                              {
                                p_8 = ATgetArgument(o_8, 0);
                                r_8 = ATgetArgument(o_8, 1);
                                w_6 :
                                if(match_cons(p_8, sym_SVar_1))
                                  {
                                    q_8 = ATgetArgument(p_8, 0);
                                    x_6 :
                                    if(((ATermList) r_8 == ATempty))
                                      {
                                        {
                                          if(((w_7 != NULL) && (w_7 != q_8)))
                                            _fail(q_8);
                                          else
                                            w_7 = q_8;
                                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_8)), (ATerm) ATempty);
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
                          t = alltd_1(t, o_0);
                          {
                            s_8 = t;
                            if(((n_8 != NULL) && (n_8 != s_8)))
                              _fail(s_8);
                            else
                              n_8 = s_8;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_8), (ATerm)ATempty, not_null(n_8));
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
              if(match_cons(c_8, sym_Seq_2))
                {
                  d_8 = ATgetArgument(c_8, 0);
                  e_8 = ATgetArgument(c_8, 1);
                  k_7 :
                  if(match_cons(e_8, sym_Seq_2))
                    {
                      a_8 = ATgetArgument(e_8, 0);
                      b_8 = ATgetArgument(e_8, 1);
                      l_7 :
                      if(match_cons(d_8, sym_Where_1))
                        {
                          z_7 = ATgetArgument(d_8, 0);
                          m_7 :
                          if(match_cons(a_8, sym_Build_1))
                            {
                              y_7 = ATgetArgument(a_8, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_7)), not_null(b_8)));
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(d_8, sym_Id_0))
                            {
                              t = e_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(e_8, sym_Build_1))
                        {
                          a_8 = ATgetArgument(e_8, 0);
                          n_7 :
                          if(match_cons(d_8, sym_Where_1))
                            {
                              z_7 = ATgetArgument(d_8, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_7), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_8)));
                            }
                          else
                            {
                              if(match_cons(d_8, sym_Id_0))
                                {
                                  t = e_10(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(e_8, sym_Id_0))
                            {
                              o_7 :
                              if(match_cons(d_8, sym_Id_0))
                                {
                                  ATerm l_6 = t;
                                  int m_6 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = d_10(t);
                                      LocalPopChoice(m_6);
                                    }
                                  else
                                    {
                                      t = l_6;
                                      t = e_10(t);
                                    }
                                }
                              else
                                {
                                  t = d_10(t);
                                }
                            }
                          else
                            {
                              p_7 :
                              if(match_cons(d_8, sym_Id_0))
                                {
                                  t = e_10(t);
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
                  if(match_cons(c_8, sym_Scope_2))
                    {
                      d_8 = ATgetArgument(c_8, 0);
                      e_8 = ATgetArgument(c_8, 1);
                      q_7 :
                      if(match_cons(e_8, sym_Scope_2))
                        {
                          a_8 = ATgetArgument(e_8, 0);
                          b_8 = ATgetArgument(e_8, 1);
                          r_7 :
                          if(((ATermList) d_8 == ATempty))
                            {
                              {
                                ATerm n_6 = t;
                                int o_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = f_10(t);
                                    LocalPopChoice(o_6);
                                  }
                                else
                                  {
                                    t = n_6;
                                    t = g_10(t);
                                  }
                              }
                            }
                          else
                            {
                              t = f_10(t);
                            }
                        }
                      else
                        {
                          s_7 :
                          if(((ATermList) d_8 == ATempty))
                            {
                              t = g_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(c_8, sym_Thread_1))
                        {
                          d_8 = ATgetArgument(c_8, 0);
                          t = h_10(t);
                        }
                      else
                        {
                          if(match_cons(c_8, sym_Some_1))
                            {
                              d_8 = ATgetArgument(c_8, 0);
                              t = i_10(t);
                            }
                          else
                            {
                              if(match_cons(c_8, sym_One_1))
                                {
                                  d_8 = ATgetArgument(c_8, 0);
                                  t = j_10(t);
                                }
                              else
                                {
                                  if(match_cons(c_8, sym_All_1))
                                    {
                                      d_8 = ATgetArgument(c_8, 0);
                                      t = k_10(t);
                                    }
                                  else
                                    {
                                      if(match_cons(c_8, sym_Bagof_1))
                                        {
                                          d_8 = ATgetArgument(c_8, 0);
                                          t = l_10(t);
                                        }
                                      else
                                        {
                                          if(match_cons(c_8, sym_Call_2))
                                            {
                                              d_8 = ATgetArgument(c_8, 0);
                                              e_8 = ATgetArgument(c_8, 1);
                                              {
                                                ATerm p_6 = t;
                                                int q_6 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_10(t);
                                                    LocalPopChoice(q_6);
                                                  }
                                                else
                                                  {
                                                    t = p_6;
                                                    t = n_10(t);
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
            }
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm u_100 (ATerm), ATerm v_100 (ATerm))
{
  ATerm v_10 (ATerm t)
  {
    ATerm r_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_100(t);
        t = v_10(t);
        LocalPopChoice(s_6);
      }
    else
      {
        t = r_6;
        t = v_100(t);
      }
    return(t);
  }
  t = v_10(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_100 (ATerm))
{
  t = repeat_2(t, x_100, _id);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm u_97 (ATerm), ATerm v_97 (ATerm))
{
  ATerm w_10 (ATerm t)
  {
    t = u_97(t);
    {
      t = _all(t, w_10);
      t = v_97(t);
    }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm))
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
  d_11 = t;
  c_11 :
  if(match_cons(d_11, sym__2))
    {
      e_11 = ATgetArgument(d_11, 0);
      f_11 = ATgetArgument(d_11, 1);
      {
        ATerm j_11 = NULL,l_11 = NULL;
        ATerm k_11 = NULL;
        t = SSLgetAnnotations(not_null(d_11));
        {
          k_11 = t;
          if(((j_11 != NULL) && (j_11 != k_11)))
            _fail(k_11);
          else
            j_11 = k_11;
        }
        {
          t = not_null(e_11);
          {
            ATerm n_11 = NULL;
            t = p_57(t);
            {
              l_11 = t;
              {
                t = not_null(f_11);
                {
                  ATerm p_11 = NULL;
                  t = q_57(t);
                  {
                    n_11 = t;
                    {
                      ATerm q_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_11), not_null(n_11)), not_null(j_11));
                      {
                        q_11 = t;
                        if(((p_11 != NULL) && (p_11 != q_11)))
                          _fail(q_11);
                        else
                          p_11 = q_11;
                      }
                      t = not_null(p_11);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm y_11 = NULL;
  ATerm t_6;
  t_6 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm z_11 = NULL,a_12 = NULL;
      z_11 = t;
      x_11 :
      if(match_cons(z_11, sym_Program_1))
        {
          a_12 = ATgetArgument(z_11, 0);
          if(((y_11 != NULL) && (y_11 != a_12)))
            _fail(a_12);
          else
            y_11 = a_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_6), not_null(y_11)), term_y_6));
      {
        t = printnl_0(t);
        {
          t = term_a_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym__2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        ATerm b_7;
        b_7 = t;
        t = SSL_printnl(not_null(f_12), not_null(g_12));
        t = b_7;
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
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym__2))
    {
      n_12 = ATgetArgument(m_12, 0);
      o_12 = ATgetArgument(m_12, 1);
      {
        t = not_null(n_12);
        {
          ATerm q_0 (ATerm t)
          {
            t = not_null(o_12);
            return(t);
          }
          t = at_end_1(t, q_0);
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
ATerm debug_1 (ATerm t, ATerm y_83 (ATerm))
{
  ATerm c_7;
  c_7 = t;
  {
    ATerm u_12 = NULL,w_12 = NULL;
    ATerm f_8;
    f_8 = t;
    {
      ATerm v_12 = NULL;
      t = y_83(t);
      {
        v_12 = t;
        if(((u_12 != NULL) && (u_12 != v_12)))
          _fail(v_12);
        else
          u_12 = v_12;
      }
    }
    t = f_8;
    {
      ATerm x_12 = NULL;
      x_12 = t;
      if(((w_12 != NULL) && (w_12 != x_12)))
        _fail(x_12);
      else
        w_12 = x_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_12)), not_null(u_12)));
        t = printnl_0(t);
      }
    }
  }
  t = c_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm b_13 = NULL;
  b_13 = t;
  t = SSL_is_string(not_null(b_13));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_0);
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
              k_13 = t;
              j_13 :
              if(match_cons(k_13, sym_Path_1))
                {
                  l_13 = ATgetArgument(k_13, 0);
                  t = not_null(l_13);
                }
              else
                {
                  if(match_cons(k_13, sym_Var_1))
                    {
                      l_13 = ATgetArgument(k_13, 0);
                      {
                        t = not_null(l_13);
                        {
                          ATerm k_8 = t;
                          int l_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_8);
                            }
                          else
                            {
                              t = k_8;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_m_8;
                                  return(t);
                                }
                                t = debug_1(t, s_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_13, sym_Prefix_2))
                        {
                          l_13 = ATgetArgument(k_13, 0);
                          m_13 = ATgetArgument(k_13, 1);
                          {
                            ATerm r_13 = NULL,t_13 = NULL;
                            ATerm t_8;
                            t_8 = t;
                            {
                              ATerm s_13 = NULL;
                              t = not_null(l_13);
                              {
                                t = eval_config_0(t);
                                {
                                  s_13 = t;
                                  if(((r_13 != NULL) && (r_13 != s_13)))
                                    _fail(s_13);
                                  else
                                    r_13 = s_13;
                                }
                              }
                            }
                            t = t_8;
                            {
                              ATerm u_13 = NULL;
                              t = not_null(m_13);
                              {
                                t = eval_config_0(t);
                                {
                                  u_13 = t;
                                  if(((t_13 != NULL) && (t_13 != u_13)))
                                    _fail(u_13);
                                  else
                                    t_13 = u_13;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), not_null(t_13));
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
  ATerm c_14 = NULL;
  c_14 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_8, not_null(c_14));
    {
      t = table_get_0(t);
      {
        ATerm t_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm v_8;
            v_8 = t;
            {
              ATerm e_14 = NULL;
              ATerm f_14 = NULL;
              f_14 = t;
              if(((e_14 != NULL) && (e_14 != f_14)))
                _fail(f_14);
              else
                e_14 = f_14;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_u_8, not_null(c_14), not_null(e_14));
                t = table_put_0(t);
              }
            }
            t = v_8;
          }
          return(t);
        }
        t = try_1(t, t_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm w_8;
    w_8 = t;
    {
      ATerm j_14 = NULL;
      ATerm k_14 = NULL;
      t = term_x_8;
      {
        t = get_config_0(t);
        {
          k_14 = t;
          if(((j_14 != NULL) && (j_14 != k_14)))
            _fail(k_14);
          else
            j_14 = k_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), term_y_8);
        t = geq_0(t);
      }
    }
    t = w_8;
    t = i_81(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, term_z_8));
  {
    t = printnl_0(t);
    {
      t = term_a_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_TicksToSeconds(not_null(n_14));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  r_14 :
  if(match_cons(s_14, sym__2))
    {
      t_14 = ATgetArgument(s_14, 0);
      u_14 = ATgetArgument(s_14, 1);
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_14), not_null(u_14));
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            t = SSL_addr(not_null(t_14), not_null(u_14));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_87 (ATerm), ATerm n_87 (ATerm))
{
  ATerm c_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_87(t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = c_9;
      {
        ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
        b_15 = t;
        a_15 :
        if(((ATgetType(b_15) == AT_LIST) && ((ATermList) b_15 != ATempty)))
          {
            c_15 = ATgetFirst((ATermList) b_15);
            d_15 = (ATerm) ATgetNext((ATermList) b_15);
            {
              ATerm g_15 = NULL;
              ATerm h_15 = NULL;
              t = not_null(d_15);
              {
                t = foldr_2(t, m_87, n_87);
                {
                  h_15 = t;
                  if(((g_15 != NULL) && (g_15 != h_15)))
                    _fail(h_15);
                  else
                    g_15 = h_15;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_15), not_null(g_15));
                t = n_87(t);
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
ATerm crush_2 (ATerm t, ATerm b_89 (ATerm), ATerm c_89 (ATerm))
{
  ATerm o_15 = NULL;
  ATerm q_15 = NULL;
  o_15 = t;
  {
    ATerm r_15 = NULL;
    ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
    t = not_null(o_15);
    {
      r_15 = t;
      {
        t = SSL_explode_term(not_null(r_15));
        {
          t_15 = t;
          n_15 :
          if(match_cons(t_15, sym__2))
            {
              u_15 = ATgetArgument(t_15, 0);
              v_15 = ATgetArgument(t_15, 1);
              if(((q_15 != NULL) && (q_15 != v_15)))
                _fail(v_15);
              else
                q_15 = v_15;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_15);
      t = foldr_2(t, b_89, c_89);
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
    ATerm v_0 (ATerm t)
    {
      t = term_g_9;
      return(t);
    }
    t = crush_2(t, v_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  b_16 = t;
  a_16 :
  if(match_cons(b_16, sym__2))
    {
      c_16 = ATgetArgument(b_16, 0);
      d_16 = ATgetArgument(b_16, 1);
      {
        ATerm h_9;
        h_9 = t;
        {
          ATerm i_9 = t;
          int j_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_16), not_null(d_16));
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
              t = SSL_gtr(not_null(c_16), not_null(d_16));
            }
        }
        t = h_9;
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
  ATerm j_16 = NULL;
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
      k_16 = t;
      i_16 :
      if(match_cons(k_16, sym__2))
        {
          l_16 = ATgetArgument(k_16, 0);
          m_16 = ATgetArgument(k_16, 1);
          {
            if(((j_16 != NULL) && (j_16 != l_16)))
              _fail(l_16);
            else
              j_16 = l_16;
            if(((j_16 != NULL) && (j_16 != m_16)))
              _fail(m_16);
            else
              j_16 = m_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm m_9;
    m_9 = t;
    {
      ATerm p_16 = NULL;
      ATerm q_16 = NULL;
      t = term_x_8;
      {
        t = get_config_0(t);
        {
          q_16 = t;
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), term_a_7);
        t = geq_0(t);
      }
    }
    t = m_9;
    t = h_81(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm u_16 = NULL,w_16 = NULL;
    ATerm p_9;
    p_9 = t;
    {
      ATerm v_16 = NULL;
      t = run_time_0(t);
      {
        v_16 = t;
        if(((u_16 != NULL) && (u_16 != v_16)))
          _fail(v_16);
        else
          u_16 = v_16;
      }
    }
    t = p_9;
    {
      ATerm x_16 = NULL;
      t = term_q_9;
      {
        t = get_config_0(t);
        {
          x_16 = t;
          if(((w_16 != NULL) && (w_16 != x_16)))
            _fail(x_16);
          else
            w_16 = x_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_9), not_null(u_16)), term_y_9), not_null(w_16)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_0);
  {
    t = term_g_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      t = SSL_WriteToTextFile(not_null(d_17), not_null(e_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym__2))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      t = SSL_WriteToBinaryFile(not_null(l_17), not_null(m_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm u_17 = NULL;
  ATerm a_10;
  a_10 = t;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm b_10 = t;
      int c_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm v_17 = NULL,w_17 = NULL;
            v_17 = t;
            r_17 :
            if(match_cons(v_17, sym_Output_1))
              {
                w_17 = ATgetArgument(v_17, 0);
                if(((u_17 != NULL) && (u_17 != w_17)))
                  _fail(w_17);
                else
                  u_17 = w_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, z_0);
          LocalPopChoice(c_10);
        }
      else
        {
          t = b_10;
          {
            ATerm x_17 = NULL;
            t = term_o_10;
            {
              x_17 = t;
              if(((u_17 != NULL) && (u_17 != x_17)))
                _fail(x_17);
              else
                u_17 = x_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_0, _id);
  }
  t = a_10;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = not_null(u_17);
        return(t);
      }
      t = split_2(t, b_1, _id);
      return(t);
    }
    t = _2(t, _id, a_1);
    {
      ATerm p_10 = t;
      int q_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            ATerm e_1 (ATerm t)
            {
              ATerm y_17 = NULL;
              y_17 = t;
              t_17 :
              if(!(match_cons(y_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, e_1);
            return(t);
          }
          t = _2(t, c_1, WriteToBinaryFile_0);
          LocalPopChoice(q_10);
        }
      else
        {
          t = p_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm i_83 (ATerm))
{
  ATerm e_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  ATerm s_10;
  s_10 = t;
  t = dtime_0(t);
  t = s_10;
  {
    t = i_83(t);
    {
      ATerm t_10;
      t_10 = t;
      {
        ATerm f_18 = NULL;
        t = dtime_0(t);
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
      }
      t = t_10;
      {
        g_18 = t;
        d_18 :
        if(match_cons(g_18, sym__2))
          {
            h_18 = ATgetArgument(g_18, 0);
            i_18 = ATgetArgument(g_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_18))), not_null(i_18));
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
  ATerm o_18 = NULL;
  o_18 = t;
  t = SSL_ReadFromFile(not_null(o_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_86 (ATerm), ATerm b_86 (ATerm))
{
  ATerm t_18 = NULL,v_18 = NULL;
  ATerm u_10;
  u_10 = t;
  {
    ATerm u_18 = NULL;
    t = a_86(t);
    {
      u_18 = t;
      if(((t_18 != NULL) && (t_18 != u_18)))
        _fail(u_18);
      else
        t_18 = u_18;
    }
  }
  t = u_10;
  {
    ATerm w_18 = NULL;
    t = b_86(t);
    {
      w_18 = t;
      if(((v_18 != NULL) && (v_18 != w_18)))
        _fail(w_18);
      else
        v_18 = w_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), not_null(v_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_19 = NULL;
  ATerm x_10;
  x_10 = t;
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          ATerm d_19 = NULL,e_19 = NULL;
          d_19 = t;
          a_19 :
          if(match_cons(d_19, sym_Input_1))
            {
              e_19 = ATgetArgument(d_19, 0);
              if(((c_19 != NULL) && (c_19 != e_19)))
                _fail(e_19);
              else
                c_19 = e_19;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, f_1);
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        {
          ATerm f_19 = NULL;
          t = term_a_11;
          {
            f_19 = t;
            if(((c_19 != NULL) && (c_19 != f_19)))
              _fail(f_19);
            else
              c_19 = f_19;
          }
        }
      }
  }
  t = x_10;
  {
    ATerm g_1 (ATerm t)
    {
      t = not_null(c_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, g_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym_Version_0))
    {
      ATerm o_19 = NULL,q_19 = NULL;
      ATerm b_11;
      b_11 = t;
      {
        ATerm p_19 = NULL;
        t = SSLgetAnnotations(not_null(m_19));
        {
          p_19 = t;
          if(((o_19 != NULL) && (o_19 != p_19)))
            _fail(p_19);
          else
            o_19 = p_19;
        }
      }
      t = b_11;
      {
        ATerm r_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_19));
        {
          r_19 = t;
          if(((q_19 != NULL) && (q_19 != r_19)))
            _fail(r_19);
          else
            q_19 = r_19;
        }
        t = not_null(q_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_83 (ATerm))
{
  ATerm h_1 (ATerm t)
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        {
          ATerm i_11 = t;
          int m_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(m_11);
            }
          else
            {
              t = i_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, h_1);
  t = g_83(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  t = SSL_table_create(not_null(w_19));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  {
    ATerm o_11;
    o_11 = t;
    {
      t = term_r_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_11, term_s_11, not_null(a_20));
          t = table_put_0(t);
        }
      }
    }
    t = o_11;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_20 = NULL;
  e_20 = t;
  t = SSL_string_to_int(not_null(e_20));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  m_20 = t;
  k_20 :
  if(match_string(m_20, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(m_20) == AT_LIST) && ((ATermList) m_20 != ATempty)))
        {
          n_20 = ATgetFirst((ATermList) m_20);
          o_20 = (ATerm) ATgetNext((ATermList) m_20);
          l_20 :
          if(((ATgetType(o_20) == AT_LIST) && ((ATermList) o_20 != ATempty)))
            {
              p_20 = ATgetFirst((ATermList) o_20);
              q_20 = (ATerm) ATgetNext((ATermList) o_20);
              {
                ATerm u_20 = NULL;
                ATerm t_11;
                t_11 = t;
                {
                  t = not_null(n_20);
                  t = j_0(t);
                }
                t = t_11;
                {
                  ATerm v_20 = NULL;
                  t = not_null(p_20);
                  {
                    t = k_0(t);
                    {
                      v_20 = t;
                      if(((u_20 != NULL) && (u_20 != v_20)))
                        _fail(v_20);
                      else
                        u_20 = v_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_20)), not_null(u_20));
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
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm m_21 = NULL;
        m_21 = t;
        z_20 :
        if(!(match_string(m_21, "-i")))
          {
            if(!(match_string(m_21, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm p_21 = NULL;
        ATerm w_11;
        w_11 = t;
        {
          ATerm n_21 = NULL;
          ATerm o_21 = NULL;
          o_21 = t;
          if(((n_21 != NULL) && (n_21 != o_21)))
            _fail(o_21);
          else
            n_21 = o_21;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(n_21));
            t = set_config_0(t);
          }
        }
        t = w_11;
        {
          ATerm q_21 = NULL;
          q_21 = t;
          if(((p_21 != NULL) && (p_21 != q_21)))
            _fail(q_21);
          else
            p_21 = q_21;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_21));
        }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = ArgOption_3(t, k_1, l_1, m_1);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm r_21 = NULL;
              r_21 = t;
              c_21 :
              if(!(match_string(r_21, "-o")))
                {
                  if(!(match_string(r_21, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              ATerm u_21 = NULL;
              ATerm j_12;
              j_12 = t;
              {
                ATerm s_21 = NULL;
                ATerm t_21 = NULL;
                t_21 = t;
                if(((s_21 != NULL) && (s_21 != t_21)))
                  _fail(t_21);
                else
                  s_21 = t_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_12, not_null(s_21));
                  t = set_config_0(t);
                }
              }
              t = j_12;
              {
                ATerm v_21 = NULL;
                v_21 = t;
                if(((u_21 != NULL) && (u_21 != v_21)))
                  _fail(v_21);
                else
                  u_21 = v_21;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_21));
              }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              t = term_p_12;
              return(t);
            }
            t = ArgOption_3(t, n_1, o_1, p_1);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm q_12 = t;
              int r_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    ATerm w_21 = NULL;
                    w_21 = t;
                    f_21 :
                    if(!(match_string(w_21, "-S")))
                      {
                        if(!(match_string(w_21, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm r_1 (ATerm t)
                  {
                    t = term_s_12;
                    t = set_config_0(t);
                    t = term_t_12;
                    return(t);
                  }
                  ATerm s_1 (ATerm t)
                  {
                    t = term_y_12;
                    return(t);
                  }
                  t = Option_3(t, q_1, r_1, s_1);
                  LocalPopChoice(r_12);
                }
              else
                {
                  t = q_12;
                  {
                    ATerm z_12 = t;
                    int a_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          ATerm x_21 = NULL;
                          x_21 = t;
                          g_21 :
                          if(!(match_string(x_21, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm u_1 (ATerm t)
                        {
                          ATerm a_22 = NULL;
                          ATerm c_13;
                          c_13 = t;
                          {
                            ATerm y_21 = NULL;
                            ATerm z_21 = NULL;
                            t = string_to_int_0(t);
                            {
                              z_21 = t;
                              if(((y_21 != NULL) && (y_21 != z_21)))
                                _fail(z_21);
                              else
                                y_21 = z_21;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(y_21));
                              t = set_config_0(t);
                            }
                          }
                          t = c_13;
                          {
                            ATerm b_22 = NULL;
                            b_22 = t;
                            if(((a_22 != NULL) && (a_22 != b_22)))
                              _fail(b_22);
                            else
                              a_22 = b_22;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_22));
                          }
                          return(t);
                        }
                        ATerm v_1 (ATerm t)
                        {
                          t = term_d_13;
                          return(t);
                        }
                        t = ArgOption_3(t, t_1, u_1, v_1);
                        LocalPopChoice(a_13);
                      }
                    else
                      {
                        t = z_12;
                        {
                          ATerm e_13 = t;
                          int f_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_1 (ATerm t)
                              {
                                ATerm c_22 = NULL;
                                c_22 = t;
                                j_21 :
                                if(!(match_string(c_22, "-v")))
                                  {
                                    if(!(match_string(c_22, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm x_1 (ATerm t)
                              {
                                t = term_i_13;
                                t = set_config_0(t);
                                t = term_n_13;
                                return(t);
                              }
                              ATerm y_1 (ATerm t)
                              {
                                t = term_o_13;
                                return(t);
                              }
                              t = Option_3(t, w_1, x_1, y_1);
                              LocalPopChoice(f_13);
                            }
                          else
                            {
                              t = e_13;
                              {
                                ATerm p_13 = t;
                                int q_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_1 (ATerm t)
                                    {
                                      ATerm d_22 = NULL;
                                      d_22 = t;
                                      k_21 :
                                      if(!(match_string(d_22, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm a_2 (ATerm t)
                                    {
                                      t = term_w_13;
                                      t = set_config_0(t);
                                      t = term_x_13;
                                      return(t);
                                    }
                                    ATerm b_2 (ATerm t)
                                    {
                                      t = term_y_13;
                                      return(t);
                                    }
                                    t = Option_3(t, z_1, a_2, b_2);
                                    LocalPopChoice(q_13);
                                  }
                                else
                                  {
                                    t = p_13;
                                    {
                                      ATerm c_2 (ATerm t)
                                      {
                                        ATerm e_22 = NULL;
                                        e_22 = t;
                                        l_21 :
                                        if(!(match_string(e_22, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm d_2 (ATerm t)
                                      {
                                        t = term_a_14;
                                        t = set_config_0(t);
                                        t = term_b_14;
                                        return(t);
                                      }
                                      ATerm e_2 (ATerm t)
                                      {
                                        t = term_d_14;
                                        return(t);
                                      }
                                      t = Option_3(t, c_2, d_2, e_2);
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
  ATerm m_22 = NULL;
  m_22 = t;
  t = SSL_table_destroy(not_null(m_22));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_22 = NULL;
  ATerm b_23 (ATerm t)
  {
    t = SSL_exit(not_null(u_22));
    return(t);
  }
  ATerm c_23 (ATerm t)
  {
    ATerm x_22 = NULL,z_22 = NULL;
    ATerm g_14;
    g_14 = t;
    {
      ATerm y_22 = NULL;
      t = SSLgetAnnotations(not_null(u_22));
      {
        y_22 = t;
        if(((x_22 != NULL) && (x_22 != y_22)))
          _fail(y_22);
        else
          x_22 = y_22;
      }
    }
    t = g_14;
    {
      ATerm a_23 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_exit_0), not_null(x_22));
      {
        a_23 = t;
        if(((z_22 != NULL) && (z_22 != a_23)))
          _fail(a_23);
        else
          z_22 = a_23;
      }
      t = not_null(z_22);
    }
    return(t);
  }
  u_22 = t;
  t_22 :
  if(match_cons(u_22, sym_exit_0))
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_23(t);
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          t = c_23(t);
        }
    }
  else
    {
      t = b_23(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_23 = NULL;
  g_23 = t;
  t = SSL_implode_string(not_null(g_23));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_93 (ATerm))
{
  ATerm j_23 (ATerm t)
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_23);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        {
          t = Nil_0(t);
          t = m_93(t);
        }
      }
    return(t);
  }
  t = j_23(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
        m_23 = t;
        l_23 :
        if(((ATgetType(m_23) == AT_LIST) && ((ATermList) m_23 != ATempty)))
          {
            n_23 = ATgetFirst((ATermList) m_23);
            o_23 = (ATerm) ATgetNext((ATermList) m_23);
            {
              t = not_null(n_23);
              {
                ATerm f_2 (ATerm t)
                {
                  t = not_null(o_23);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_2);
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
  ATerm u_23 = NULL;
  u_23 = t;
  t = SSL_explode_string(not_null(u_23));
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
ATerm long_description_1 (ATerm t, ATerm h_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_92 (ATerm))
{
  ATerm x_23 (ATerm t)
  {
    ATerm q_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = q_14;
        t = Cons_2(t, y_92, x_23);
      }
    return(t);
  }
  t = x_23(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  g_24 = t;
  d_24 :
  if(((ATgetType(g_24) == AT_LIST) && ((ATermList) g_24 != ATempty)))
    {
      e_24 = ATgetFirst((ATermList) g_24);
      f_24 = (ATerm) ATgetNext((ATermList) g_24);
      {
        ATerm j_24 = NULL;
        t = not_null(f_24);
        {
          ATerm w_14;
          w_14 = t;
          {
            ATerm k_24 = NULL,m_24 = NULL,o_24 = NULL;
            ATerm x_14;
            x_14 = t;
            {
              ATerm l_24 = NULL;
              t = i_0(t);
              {
                l_24 = t;
                if(((k_24 != NULL) && (k_24 != l_24)))
                  _fail(l_24);
                else
                  k_24 = l_24;
              }
            }
            t = x_14;
            {
              ATerm n_24 = NULL;
              t = not_null(e_24);
              {
                t = h_0(t);
                {
                  n_24 = t;
                  if(((m_24 != NULL) && (m_24 != n_24)))
                    _fail(n_24);
                  else
                    m_24 = n_24;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_24)), not_null(m_24));
                {
                  o_24 = t;
                  if(((j_24 != NULL) && (j_24 != o_24)))
                    _fail(o_24);
                  else
                    j_24 = o_24;
                }
              }
            }
          }
          t = w_14;
          {
            ATerm g_2 (ATerm t)
            {
              t = not_null(j_24);
              return(t);
            }
            t = reverse_acc_2(t, h_0, g_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) g_24 == ATempty))
        {
          {
            t = term_h_13;
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
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm z_24 = NULL,a_25 = NULL;
  z_24 = t;
  y_24 :
  if(match_cons(z_24, sym_Program_1))
    {
      a_25 = ATgetArgument(z_24, 0);
      {
        ATerm d_25 = NULL,f_25 = NULL;
        ATerm e_25 = NULL;
        t = SSLgetAnnotations(not_null(z_24));
        {
          e_25 = t;
          if(((d_25 != NULL) && (d_25 != e_25)))
            _fail(e_25);
          else
            d_25 = e_25;
        }
        {
          t = not_null(a_25);
          {
            ATerm h_25 = NULL;
            t = m_70(t);
            {
              f_25 = t;
              {
                ATerm i_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_25)), not_null(d_25));
                {
                  i_25 = t;
                  if(((h_25 != NULL) && (h_25 != i_25)))
                    _fail(i_25);
                  else
                    h_25 = i_25;
                }
                t = not_null(h_25);
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
  ATerm r_25 = NULL;
  ATerm i_2 (ATerm t)
  {
    ATerm j_2 (ATerm t)
    {
      ATerm s_25 = NULL;
      s_25 = t;
      if(((r_25 != NULL) && (r_25 != s_25)))
        _fail(s_25);
      else
        r_25 = s_25;
      return(t);
    }
    t = Program_1(t, j_2);
    return(t);
  }
  t = option_defined_1(t, i_2);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm t_25 = NULL;
      ATerm u_25 = NULL;
      t = term_h_13;
      {
        ATerm l_2 (ATerm t)
        {
          t = not_null(r_25);
          return(t);
        }
        t = short_description_1(t, l_2);
        {
          t = concat_strings_0(t);
          {
            u_25 = t;
            if(((t_25 != NULL) && (t_25 != u_25)))
              _fail(u_25);
            else
              t_25 = u_25;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(t_25)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, term_y_14));
      {
        t = printnl_0(t);
        {
          t = term_f_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_2 (ATerm t)
                {
                  ATerm v_25 = NULL;
                  v_25 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_25)), term_i_15));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_2);
                {
                  ATerm n_2 (ATerm t)
                  {
                    ATerm x_25 = NULL;
                    ATerm y_25 = NULL;
                    t = term_h_13;
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = not_null(r_25);
                        return(t);
                      }
                      t = long_description_1(t, o_2);
                      {
                        t = concat_strings_0(t);
                        {
                          y_25 = t;
                          if(((x_25 != NULL) && (x_25 != y_25)))
                            _fail(y_25);
                          else
                            x_25 = y_25;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_25)), term_j_15));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_2);
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
ATerm Undefined_1 (ATerm t, ATerm n_70 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_cons(i_26, sym_Undefined_1))
    {
      j_26 = ATgetArgument(i_26, 0);
      {
        ATerm m_26 = NULL,o_26 = NULL;
        ATerm n_26 = NULL;
        t = SSLgetAnnotations(not_null(i_26));
        {
          n_26 = t;
          if(((m_26 != NULL) && (m_26 != n_26)))
            _fail(n_26);
          else
            m_26 = n_26;
        }
        {
          t = not_null(j_26);
          {
            ATerm q_26 = NULL;
            t = n_70(t);
            {
              o_26 = t;
              {
                ATerm r_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_26)), not_null(m_26));
                {
                  r_26 = t;
                  if(((q_26 != NULL) && (q_26 != r_26)))
                    _fail(r_26);
                  else
                    q_26 = r_26;
                }
                t = not_null(q_26);
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
ATerm fetch_1 (ATerm t, ATerm g_93 (ATerm))
{
  ATerm w_26 (ATerm t)
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_93, _id);
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        t = Cons_2(t, _id, w_26);
      }
    return(t);
  }
  t = w_26(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_81 (ATerm))
{
  t = fetch_1(t, f_81);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym_Help_0))
    {
      ATerm d_27 = NULL,f_27 = NULL;
      ATerm m_15;
      m_15 = t;
      {
        ATerm e_27 = NULL;
        t = SSLgetAnnotations(not_null(b_27));
        {
          e_27 = t;
          if(((d_27 != NULL) && (d_27 != e_27)))
            _fail(e_27);
          else
            d_27 = e_27;
        }
      }
      t = m_15;
      {
        ATerm g_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_27));
        {
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
        }
        t = not_null(f_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_101 (ATerm))
{
  ATerm p_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_101(t);
      LocalPopChoice(s_15);
    }
  else
    {
      t = p_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym__2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      t = SSL_table_get(not_null(n_27), not_null(o_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym__3))
    {
      w_27 = ATgetArgument(v_27, 0);
      x_27 = ATgetArgument(v_27, 1);
      y_27 = ATgetArgument(v_27, 2);
      {
        ATerm w_15;
        w_15 = t;
        {
          ATerm c_28 = NULL;
          ATerm d_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), not_null(x_27));
          {
            ATerm x_15 = t;
            int y_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_15);
              }
            else
              {
                t = x_15;
                t = (ATerm) ATempty;
              }
            {
              d_28 = t;
              if(((c_28 != NULL) && (c_28 != d_28)))
                _fail(d_28);
              else
                c_28 = d_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_27), not_null(x_27), (ATerm) ATinsert(CheckATermList(not_null(c_28)), not_null(y_27)));
            t = table_put_0(t);
          }
        }
        t = w_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm h_28 = NULL;
  ATerm i_28 = NULL;
  t = term_h_13;
  {
    t = l_80(t);
    {
      i_28 = t;
      if(((h_28 != NULL) && (h_28 != i_28)))
        _fail(i_28);
      else
        h_28 = i_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_e_15, not_null(h_28));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
  o_28 = t;
  n_28 :
  if(match_string(o_28, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_28) == AT_LIST) && ((ATermList) o_28 != ATempty)))
        {
          p_28 = ATgetFirst((ATermList) o_28);
          q_28 = (ATerm) ATgetNext((ATermList) o_28);
          {
            ATerm t_28 = NULL;
            ATerm z_15;
            z_15 = t;
            {
              t = not_null(p_28);
              t = c_0(t);
            }
            t = z_15;
            {
              ATerm u_28 = NULL;
              t = term_h_13;
              {
                t = d_0(t);
                {
                  u_28 = t;
                  if(((t_28 != NULL) && (t_28 != u_28)))
                    _fail(u_28);
                  else
                    t_28 = u_28;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_28)), not_null(t_28));
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
  ATerm p_2 (ATerm t)
  {
    ATerm z_28 = NULL;
    z_28 = t;
    y_28 :
    if(!(match_string(z_28, "--help")))
      {
        if(!(match_string(z_28, "-h")))
          {
            if(!(match_string(z_28, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_e_16;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_f_16;
    return(t);
  }
  t = Option_3(t, p_2, t_2, u_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  b_29 :
  if(((ATgetType(c_29) == AT_LIST) && ((ATermList) c_29 != ATempty)))
    {
      d_29 = ATgetFirst((ATermList) c_29);
      e_29 = (ATerm) ATgetNext((ATermList) c_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_75 (ATerm), ATerm y_75 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
  o_29 = t;
  n_29 :
  if(((ATgetType(o_29) == AT_LIST) && ((ATermList) o_29 != ATempty)))
    {
      p_29 = ATgetFirst((ATermList) o_29);
      q_29 = (ATerm) ATgetNext((ATermList) o_29);
      {
        ATerm u_29 = NULL,w_29 = NULL;
        ATerm v_29 = NULL;
        t = SSLgetAnnotations(not_null(o_29));
        {
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
        }
        {
          t = not_null(p_29);
          {
            ATerm y_29 = NULL;
            t = x_75(t);
            {
              w_29 = t;
              {
                t = not_null(q_29);
                {
                  ATerm a_30 = NULL;
                  t = y_75(t);
                  {
                    y_29 = t;
                    {
                      ATerm b_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_29)), not_null(w_29)), not_null(u_29));
                      {
                        b_30 = t;
                        if(((a_30 != NULL) && (a_30 != b_30)))
                          _fail(b_30);
                        else
                          a_30 = b_30;
                      }
                      t = not_null(a_30);
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
  ATerm l_30 = NULL;
  l_30 = t;
  k_30 :
  if(((ATermList) l_30 == ATempty))
    {
      {
        ATerm n_30 = NULL,p_30 = NULL;
        ATerm g_16;
        g_16 = t;
        {
          ATerm o_30 = NULL;
          t = SSLgetAnnotations(not_null(l_30));
          {
            o_30 = t;
            if(((n_30 != NULL) && (n_30 != o_30)))
              _fail(o_30);
            else
              n_30 = o_30;
          }
        }
        t = g_16;
        {
          ATerm q_30 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_30));
          {
            q_30 = t;
            if(((p_30 != NULL) && (p_30 != q_30)))
              _fail(q_30);
            else
              p_30 = q_30;
          }
          t = not_null(p_30);
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
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym__2))
    {
      x_30 = ATgetArgument(w_30, 0);
      y_30 = ATgetArgument(w_30, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_8, not_null(x_30), not_null(y_30));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm h_16;
  h_16 = t;
  {
    ATerm y_2 (ATerm t)
    {
      t = term_n_16;
      t = j_80(t);
      return(t);
    }
    t = try_1(t, y_2);
  }
  t = h_16;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm g_31 = NULL;
      ATerm o_16;
      o_16 = t;
      {
        ATerm e_31 = NULL;
        ATerm f_31 = NULL;
        f_31 = t;
        if(((e_31 != NULL) && (e_31 != f_31)))
          _fail(f_31);
        else
          e_31 = f_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_9, not_null(e_31));
          t = set_config_0(t);
        }
      }
      t = o_16;
      {
        ATerm h_31 = NULL;
        h_31 = t;
        if(((g_31 != NULL) && (g_31 != h_31)))
          _fail(h_31);
        else
          g_31 = h_31;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_31));
      }
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      ATerm r_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_16);
            }
          else
            {
              t = t_16;
              {
                t = j_80(t);
                t = Cons_2(t, _id, c_3);
              }
            }
          LocalPopChoice(s_16);
        }
      else
        {
          t = r_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_3, c_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  ATerm z_16;
  z_16 = t;
  {
    ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
    q_31 = t;
    m_31 :
    if(match_cons(q_31, sym__3))
      {
        r_31 = ATgetArgument(q_31, 0);
        s_31 = ATgetArgument(q_31, 1);
        t_31 = ATgetArgument(q_31, 2);
        {
          if(((n_31 != NULL) && (n_31 != r_31)))
            _fail(r_31);
          else
            n_31 = r_31;
          {
            if(((o_31 != NULL) && (o_31 != s_31)))
              _fail(s_31);
            else
              o_31 = s_31;
            {
              if(((p_31 != NULL) && (p_31 != t_31)))
                _fail(t_31);
              else
                p_31 = t_31;
              t = SSL_table_put(not_null(n_31), not_null(o_31), not_null(p_31));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm w_31 = NULL;
  ATerm a_17;
  a_17 = t;
  {
    t = term_f_17;
    t = table_put_0(t);
  }
  t = a_17;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm g_17 = t;
      int h_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_80(t);
          LocalPopChoice(h_17);
        }
      else
        {
          t = g_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_3);
    {
      ATerm e_3 (ATerm t)
      {
        ATerm i_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_g_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(n_17);
          }
        else
          {
            t = i_17;
            {
              ATerm f_3 (ATerm t)
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm x_31 = NULL;
                  x_31 = t;
                  if(((w_31 != NULL) && (w_31 != x_31)))
                    _fail(x_31);
                  else
                    w_31 = x_31;
                  return(t);
                }
                t = Undefined_1(t, g_3);
                return(t);
              }
              t = option_defined_1(t, f_3);
              {
                ATerm o_17;
                o_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_31)), term_p_17));
                  t = printnl_0(t);
                }
                t = o_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_3);
      {
        ATerm q_17;
        q_17 = t;
        {
          t = term_z_14;
          t = table_destroy_0(t);
        }
        t = q_17;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm s_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_82(t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = s_17;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, h_3);
  {
    t = store_options_0(t);
    {
      t = x_82(t);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_82);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            {
              ATerm c_18 = t;
              int j_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, u_82);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(j_18);
                }
              else
                {
                  t = c_18;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm q_82 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm j_3 (ATerm t)
    {
      ATerm k_18;
      k_18 = t;
      {
        ATerm a_32 = NULL;
        ATerm b_32 = NULL;
        t = term_q_9;
        {
          t = get_config_0(t);
          {
            b_32 = t;
            if(((a_32 != NULL) && (a_32 != b_32)))
              _fail(b_32);
            else
              a_32 = b_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(a_32)));
          t = printnl_0(t);
        }
      }
      t = k_18;
      return(t);
    }
    t = if_verbose2_1(t, j_3);
    return(t);
  }
  t = iowrap_4(t, o_82, p_82, q_82, i_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_82 (ATerm), ATerm n_82 (ATerm))
{
  t = iowrap_3(t, m_82, n_82, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    t = _2(t, _id, j_82);
    return(t);
  }
  t = iowrap_2(t, o_3, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm u_3 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, q_3, u_3);
    t = mark_fresh_vars_0(t);
    return(t);
  }
  t = iowrap_1(t, p_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
