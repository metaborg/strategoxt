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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Prim_2;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
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
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Overlay_3;
Symbol sym_Mod_2;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_SRDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
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
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_return_0;
Symbol sym_exit_0;
Symbol sym_PpIf_4;
Symbol sym_OldFunction1_3;
Symbol sym_OldFunction2_3;
Symbol sym_TypedefDeclarator1_3;
Symbol sym_TypedefDeclarator2_3;
Symbol sym_IdDecl_3;
Symbol sym_FunDecl_3;
Symbol sym_NoTypeSpecifier_0;
Symbol sym_FunDef_3;
Symbol sym_TypeQualifiers_1;
Symbol sym_OldFun_2;
Symbol sym_TranslationUnit_1;
Symbol sym_Goto_1;
Symbol sym_Continue_0;
Symbol sym_Break_0;
Symbol sym_Return_1;
Symbol sym_Exit_1;
Symbol sym_While_2;
Symbol sym_DoWhile_2;
Symbol sym_For_4;
Symbol sym_If_2;
Symbol sym_IfElse_3;
Symbol sym_Switch_2;
Symbol sym_Stat_1;
Symbol sym_Compound_2;
Symbol sym_Label_2;
Symbol sym_Case_2;
Symbol sym_Default_1;
Symbol sym_Id_1;
Symbol sym_TypeId_1;
Symbol sym_DeclSpec_5;
Symbol sym_DQualifiers_3;
Symbol sym_TypeSpec_3;
Symbol sym_IdDeclInit_2;
Symbol sym_DeclInit_2;
Symbol sym_ArrayInit_1;
Symbol sym_ArrayInitIncomplete_1;
Symbol sym_AssignInit_1;
Symbol sym_Declaration_2;
Symbol sym_Declaration2_2;
Symbol sym_Const_0;
Symbol sym_Volatile_0;
Symbol sym_Int_0;
Symbol sym_Char_0;
Symbol sym_Short_0;
Symbol sym_Long_0;
Symbol sym_Float_0;
Symbol sym_Double_0;
Symbol sym_Signed_0;
Symbol sym_Unsigned_0;
Symbol sym_Void_0;
Symbol sym_Typedef_0;
Symbol sym_Extern_0;
Symbol sym_Static_0;
Symbol sym_Auto_0;
Symbol sym_Register_0;
Symbol sym_Comma_2;
Symbol sym_EmptyExp_0;
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
Symbol sym_Assign_3;
Symbol sym_IfExp_3;
Symbol sym_LOr_2;
Symbol sym_LAnd_2;
Symbol sym_IncOr_2;
Symbol sym_ExOr_2;
Symbol sym_And_2;
Symbol sym_Equal_2;
Symbol sym_NotEqual_2;
Symbol sym_Lt_2;
Symbol sym_Gt_2;
Symbol sym_Le_2;
Symbol sym_Ge_2;
Symbol sym_ShiftLeft_2;
Symbol sym_ShiftRight_2;
Symbol sym_Add_2;
Symbol sym_Subt_2;
Symbol sym_Mul_2;
Symbol sym_Div_2;
Symbol sym_Mod_2;
Symbol sym_TypeCast_2;
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
Symbol sym_ArrayIndex_2;
Symbol sym_FunCall_2;
Symbol sym_Field_2;
Symbol sym_DerefMember_2;
Symbol sym_PostIncr_1;
Symbol sym_PostDecr_1;
Symbol sym_StringLit_1;
Symbol sym_IntConst_1;
Symbol sym_FloatConst_1;
Symbol sym_OctConst_1;
Symbol sym_HexConst_1;
Symbol sym_CharConst_1;
Symbol sym_BitFieldSize_2;
Symbol sym_MemDecl_2;
Symbol sym_MemDecl_2;
Symbol sym_Union_2;
Symbol sym_UnionId_1;
Symbol sym_Struct_2;
Symbol sym_StructId_1;
Symbol sym_EnumVal_1;
Symbol sym_Enumerator_2;
Symbol sym_Enum_2;
Symbol sym_EnumId_1;
Symbol sym_TypeName_2;
Symbol sym_ParamDecl_2;
Symbol sym_ParamDeclTD_2;
Symbol sym_DeclBracket_1;
Symbol sym_DeclBracket_1;
Symbol sym_DeclBracket_1;
Symbol sym_FunType_2;
Symbol sym_ArrayDecl_2;
Symbol sym_ParamListVarArgs_1;
Symbol sym_ParamList_1;
Symbol sym_Pointer_2;
Symbol sym_PointerOf_1;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
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
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
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
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_return_0 = ATmakeSymbol("return", 0, ATfalse);
  ATprotectSymbol(sym_return_0);
  sym_exit_0 = ATmakeSymbol("exit", 0, ATfalse);
  ATprotectSymbol(sym_exit_0);
  sym_PpIf_4 = ATmakeSymbol("PpIf", 4, ATfalse);
  ATprotectSymbol(sym_PpIf_4);
  sym_OldFunction1_3 = ATmakeSymbol("OldFunction1", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction1_3);
  sym_OldFunction2_3 = ATmakeSymbol("OldFunction2", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction2_3);
  sym_TypedefDeclarator1_3 = ATmakeSymbol("TypedefDeclarator1", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator1_3);
  sym_TypedefDeclarator2_3 = ATmakeSymbol("TypedefDeclarator2", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator2_3);
  sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
  ATprotectSymbol(sym_IdDecl_3);
  sym_FunDecl_3 = ATmakeSymbol("FunDecl", 3, ATfalse);
  ATprotectSymbol(sym_FunDecl_3);
  sym_NoTypeSpecifier_0 = ATmakeSymbol("NoTypeSpecifier", 0, ATfalse);
  ATprotectSymbol(sym_NoTypeSpecifier_0);
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_TypeQualifiers_1 = ATmakeSymbol("TypeQualifiers", 1, ATfalse);
  ATprotectSymbol(sym_TypeQualifiers_1);
  sym_OldFun_2 = ATmakeSymbol("OldFun", 2, ATfalse);
  ATprotectSymbol(sym_OldFun_2);
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
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
  sym_While_2 = ATmakeSymbol("While", 2, ATfalse);
  ATprotectSymbol(sym_While_2);
  sym_DoWhile_2 = ATmakeSymbol("DoWhile", 2, ATfalse);
  ATprotectSymbol(sym_DoWhile_2);
  sym_For_4 = ATmakeSymbol("For", 4, ATfalse);
  ATprotectSymbol(sym_For_4);
  sym_If_2 = ATmakeSymbol("If", 2, ATfalse);
  ATprotectSymbol(sym_If_2);
  sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
  ATprotectSymbol(sym_IfElse_3);
  sym_Switch_2 = ATmakeSymbol("Switch", 2, ATfalse);
  ATprotectSymbol(sym_Switch_2);
  sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
  ATprotectSymbol(sym_Stat_1);
  sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
  ATprotectSymbol(sym_Compound_2);
  sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
  ATprotectSymbol(sym_Label_2);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Default_1 = ATmakeSymbol("Default", 1, ATfalse);
  ATprotectSymbol(sym_Default_1);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
  ATprotectSymbol(sym_TypeId_1);
  sym_DeclSpec_5 = ATmakeSymbol("DeclSpec", 5, ATfalse);
  ATprotectSymbol(sym_DeclSpec_5);
  sym_DQualifiers_3 = ATmakeSymbol("DQualifiers", 3, ATfalse);
  ATprotectSymbol(sym_DQualifiers_3);
  sym_TypeSpec_3 = ATmakeSymbol("TypeSpec", 3, ATfalse);
  ATprotectSymbol(sym_TypeSpec_3);
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
  sym_Declaration_2 = ATmakeSymbol("Declaration", 2, ATfalse);
  ATprotectSymbol(sym_Declaration_2);
  sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
  ATprotectSymbol(sym_Declaration2_2);
  sym_Const_0 = ATmakeSymbol("Const", 0, ATfalse);
  ATprotectSymbol(sym_Const_0);
  sym_Volatile_0 = ATmakeSymbol("Volatile", 0, ATfalse);
  ATprotectSymbol(sym_Volatile_0);
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
  sym_Comma_2 = ATmakeSymbol("Comma", 2, ATfalse);
  ATprotectSymbol(sym_Comma_2);
  sym_EmptyExp_0 = ATmakeSymbol("EmptyExp", 0, ATfalse);
  ATprotectSymbol(sym_EmptyExp_0);
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
  sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
  ATprotectSymbol(sym_Assign_3);
  sym_IfExp_3 = ATmakeSymbol("IfExp", 3, ATfalse);
  ATprotectSymbol(sym_IfExp_3);
  sym_LOr_2 = ATmakeSymbol("LOr", 2, ATfalse);
  ATprotectSymbol(sym_LOr_2);
  sym_LAnd_2 = ATmakeSymbol("LAnd", 2, ATfalse);
  ATprotectSymbol(sym_LAnd_2);
  sym_IncOr_2 = ATmakeSymbol("IncOr", 2, ATfalse);
  ATprotectSymbol(sym_IncOr_2);
  sym_ExOr_2 = ATmakeSymbol("ExOr", 2, ATfalse);
  ATprotectSymbol(sym_ExOr_2);
  sym_And_2 = ATmakeSymbol("And", 2, ATfalse);
  ATprotectSymbol(sym_And_2);
  sym_Equal_2 = ATmakeSymbol("Equal", 2, ATfalse);
  ATprotectSymbol(sym_Equal_2);
  sym_NotEqual_2 = ATmakeSymbol("NotEqual", 2, ATfalse);
  ATprotectSymbol(sym_NotEqual_2);
  sym_Lt_2 = ATmakeSymbol("Lt", 2, ATfalse);
  ATprotectSymbol(sym_Lt_2);
  sym_Gt_2 = ATmakeSymbol("Gt", 2, ATfalse);
  ATprotectSymbol(sym_Gt_2);
  sym_Le_2 = ATmakeSymbol("Le", 2, ATfalse);
  ATprotectSymbol(sym_Le_2);
  sym_Ge_2 = ATmakeSymbol("Ge", 2, ATfalse);
  ATprotectSymbol(sym_Ge_2);
  sym_ShiftLeft_2 = ATmakeSymbol("ShiftLeft", 2, ATfalse);
  ATprotectSymbol(sym_ShiftLeft_2);
  sym_ShiftRight_2 = ATmakeSymbol("ShiftRight", 2, ATfalse);
  ATprotectSymbol(sym_ShiftRight_2);
  sym_Add_2 = ATmakeSymbol("Add", 2, ATfalse);
  ATprotectSymbol(sym_Add_2);
  sym_Subt_2 = ATmakeSymbol("Subt", 2, ATfalse);
  ATprotectSymbol(sym_Subt_2);
  sym_Mul_2 = ATmakeSymbol("Mul", 2, ATfalse);
  ATprotectSymbol(sym_Mul_2);
  sym_Div_2 = ATmakeSymbol("Div", 2, ATfalse);
  ATprotectSymbol(sym_Div_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_TypeCast_2 = ATmakeSymbol("TypeCast", 2, ATfalse);
  ATprotectSymbol(sym_TypeCast_2);
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
  sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
  ATprotectSymbol(sym_StringLit_1);
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
  sym_BitFieldSize_2 = ATmakeSymbol("BitFieldSize", 2, ATfalse);
  ATprotectSymbol(sym_BitFieldSize_2);
  sym_MemDecl_2 = ATmakeSymbol("MemDecl", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl_2);
  sym_MemDecl_2 = ATmakeSymbol("MemDecl", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl_2);
  sym_Union_2 = ATmakeSymbol("Union", 2, ATfalse);
  ATprotectSymbol(sym_Union_2);
  sym_UnionId_1 = ATmakeSymbol("UnionId", 1, ATfalse);
  ATprotectSymbol(sym_UnionId_1);
  sym_Struct_2 = ATmakeSymbol("Struct", 2, ATfalse);
  ATprotectSymbol(sym_Struct_2);
  sym_StructId_1 = ATmakeSymbol("StructId", 1, ATfalse);
  ATprotectSymbol(sym_StructId_1);
  sym_EnumVal_1 = ATmakeSymbol("EnumVal", 1, ATfalse);
  ATprotectSymbol(sym_EnumVal_1);
  sym_Enumerator_2 = ATmakeSymbol("Enumerator", 2, ATfalse);
  ATprotectSymbol(sym_Enumerator_2);
  sym_Enum_2 = ATmakeSymbol("Enum", 2, ATfalse);
  ATprotectSymbol(sym_Enum_2);
  sym_EnumId_1 = ATmakeSymbol("EnumId", 1, ATfalse);
  ATprotectSymbol(sym_EnumId_1);
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl_2);
  sym_ParamDeclTD_2 = ATmakeSymbol("ParamDeclTD", 2, ATfalse);
  ATprotectSymbol(sym_ParamDeclTD_2);
  sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket_1);
  sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket_1);
  sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ArrayDecl_2 = ATmakeSymbol("ArrayDecl", 2, ATfalse);
  ATprotectSymbol(sym_ArrayDecl_2);
  sym_ParamListVarArgs_1 = ATmakeSymbol("ParamListVarArgs", 1, ATfalse);
  ATprotectSymbol(sym_ParamListVarArgs_1);
  sym_ParamList_1 = ATmakeSymbol("ParamList", 1, ATfalse);
  ATprotectSymbol(sym_ParamList_1);
  sym_Pointer_2 = ATmakeSymbol("Pointer", 2, ATfalse);
  ATprotectSymbol(sym_Pointer_2);
  sym_PointerOf_1 = ATmakeSymbol("PointerOf", 1, ATfalse);
  ATprotectSymbol(sym_PointerOf_1);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  init_constant_terms();
}
ATerm term_j_20;
ATerm term_o_19;
ATerm term_q_18;
ATerm term_e_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_d_14;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_d_10;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_c_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_u_4;
ATerm term_t_4;
ATerm term_i_4;
ATerm term_h_4;
ATerm term_u_3;
ATerm term_t_3;
ATerm term_s_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_l_3;
ATerm term_k_3;
void init_constant_terms (void)
{
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_3);
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(sym_Call_2, term_l_3, (ATerm) ATempty);
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_3);
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeAppl(sym_Call_2, term_s_3, (ATerm) ATempty);
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_4);
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue));
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_4);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_4);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_4);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_bagof", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_5);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_v_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_c_11);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_c_11);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_c_11);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym__3, term_q_16, term_x_16, (ATerm) ATempty);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm g_63 (ATerm));
ATerm Call_2 (ATerm, ATerm v_63 (ATerm), ATerm w_63 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm));
ATerm unzip_1 (ATerm, ATerm i_89 (ATerm));
ATerm alltd_1 (ATerm, ATerm y_82 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm u_79 (ATerm), ATerm v_79 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_79 (ATerm));
ATerm downup2_2 (ATerm, ATerm b_81 (ATerm), ATerm c_81 (ATerm));
ATerm _2 (ATerm, ATerm m_60 (ATerm), ATerm n_60 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_87 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_97 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_100 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_98 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_95 (ATerm), ATerm b_95 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm l_93 (ATerm), ATerm m_93 (ATerm));
ATerm crush_2 (ATerm, ATerm j_92 (ATerm), ATerm k_92 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_100 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_102 (ATerm));
ATerm map_1 (ATerm, ATerm x_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_102 (ATerm));
ATerm Program_1 (ATerm, ATerm j_67 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_97 (ATerm));
ATerm Undefined_1 (ATerm, ATerm k_67 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_87 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_101 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_102 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_61 (ATerm), ATerm w_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_102 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_102 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm h_99 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_99 (ATerm), ATerm e_99 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_99 (ATerm));
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
    ATerm x_1 = NULL;
    t = new_0(t);
    {
      x_1 = t;
      if(((i_1 != NULL) && (i_1 != x_1)))
        _fail(x_1);
      else
        i_1 = x_1;
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_1)), (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_1), (ATerm)ATempty, not_null(d_1))));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm u_2 = NULL,v_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym_SVar_1))
    {
      v_2 = ATgetArgument(u_2, 0);
      {
        ATerm z_2 = NULL,b_3 = NULL;
        ATerm a_3 = NULL;
        t = SSLgetAnnotations(not_null(u_2));
        {
          a_3 = t;
          if(((z_2 != NULL) && (z_2 != a_3)))
            _fail(a_3);
          else
            z_2 = a_3;
        }
        {
          t = not_null(v_2);
          {
            ATerm d_3 = NULL;
            t = g_63(t);
            {
              b_3 = t;
              {
                ATerm e_3 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_3)), not_null(z_2));
                {
                  e_3 = t;
                  if(((d_3 != NULL) && (d_3 != e_3)))
                    _fail(e_3);
                  else
                    d_3 = e_3;
                }
                t = not_null(d_3);
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
ATerm Call_2 (ATerm t, ATerm v_63 (ATerm), ATerm w_63 (ATerm))
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
  p_3 = t;
  o_3 :
  if(match_cons(p_3, sym_Call_2))
    {
      q_3 = ATgetArgument(p_3, 0);
      r_3 = ATgetArgument(p_3, 1);
      {
        ATerm v_3 = NULL,x_3 = NULL;
        ATerm w_3 = NULL;
        t = SSLgetAnnotations(not_null(p_3));
        {
          w_3 = t;
          if(((v_3 != NULL) && (v_3 != w_3)))
            _fail(w_3);
          else
            v_3 = w_3;
        }
        {
          t = not_null(q_3);
          {
            ATerm z_3 = NULL;
            t = v_63(t);
            {
              x_3 = t;
              {
                t = not_null(r_3);
                {
                  ATerm b_4 = NULL;
                  t = w_63(t);
                  {
                    z_3 = t;
                    {
                      ATerm c_4 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(x_3), not_null(z_3)), not_null(v_3));
                      {
                        c_4 = t;
                        if(((b_4 != NULL) && (b_4 != c_4)))
                          _fail(c_4);
                        else
                          b_4 = c_4;
                      }
                      t = not_null(b_4);
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
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  n_4 = t;
  j_4 :
  if(match_cons(n_4, sym_Let_2))
    {
      o_4 = ATgetArgument(n_4, 0);
      p_4 = ATgetArgument(n_4, 1);
      k_4 :
      if(match_cons(p_4, sym_Call_2))
        {
          q_4 = ATgetArgument(p_4, 0);
          s_4 = ATgetArgument(p_4, 1);
          l_4 :
          if(match_cons(q_4, sym_SVar_1))
            {
              r_4 = ATgetArgument(q_4, 0);
              m_4 :
              if(((ATgetType(s_4) == AT_LIST) && ATisEmpty(s_4)))
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_4)), (ATerm) ATempty), not_null(o_4));
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
  ATerm y_4 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym_Fail_0))
    {
      t = term_m_3;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_Id_0))
    {
      t = term_t_3;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  i_5 = t;
  f_5 :
  if(match_cons(i_5, sym__2))
    {
      j_5 = ATgetArgument(i_5, 0);
      m_5 = ATgetArgument(i_5, 1);
      g_5 :
      if(match_cons(j_5, sym__2))
        {
          k_5 = ATgetArgument(j_5, 0);
          l_5 = ATgetArgument(j_5, 1);
          h_5 :
          if(match_cons(m_5, sym__2))
            {
              n_5 = ATgetArgument(m_5, 0);
              o_5 = ATgetArgument(m_5, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_5)), not_null(k_5)), (ATerm) ATinsert(CheckATermList(not_null(o_5)), not_null(l_5)));
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
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  v_5 :
  if(((ATgetType(w_5) == AT_LIST) && !(ATisEmpty(w_5))))
    {
      x_5 = ATgetFirst((ATermList) w_5);
      y_5 = (ATerm) ATgetNext((ATermList) w_5);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(y_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm e_6 = NULL;
  e_6 = t;
  d_6 :
  if(((ATgetType(e_6) == AT_LIST) && ATisEmpty(e_6)))
    {
      t = term_u_3;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm))
{
  ATerm g_6 (ATerm t)
  {
    ATerm y_3 = t;
    int a_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_88(t);
        LocalPopChoice(a_4);
      }
    else
      {
        t = y_3;
        {
          t = z_88(t);
          {
            t = _2(t, b_89, g_6);
            t = a_89(t);
          }
        }
      }
    return(t);
  }
  t = g_6(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm i_89 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, i_89);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm y_82 (ATerm))
{
  ATerm h_6 (ATerm t)
  {
    ATerm d_4 = t;
    int e_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_82(t);
        LocalPopChoice(e_4);
      }
    else
      {
        t = d_4;
        t = _all(t, h_6);
      }
    return(t);
  }
  t = h_6(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
  ATerm h_10 (ATerm t)
  {
    t = not_null(h_8);
    return(t);
  }
  ATerm i_10 (ATerm t)
  {
    t = not_null(i_8);
    return(t);
  }
  ATerm j_10 (ATerm t)
  {
    ATerm h_9 = NULL;
    ATerm i_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), not_null(e_8));
    {
      ATerm f_4 = t;
      int g_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = conc_two_lists_0(t);
          LocalPopChoice(g_4);
        }
      else
        {
          t = f_4;
          t = conc_more_lists_0(t);
        }
      {
        i_9 = t;
        if(((h_9 != NULL) && (h_9 != i_9)))
          _fail(i_9);
        else
          h_9 = i_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_9), not_null(f_8));
    return(t);
  }
  ATerm k_10 (ATerm t)
  {
    t = not_null(i_8);
    return(t);
  }
  ATerm l_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_i_4, (ATerm) ATinsert(ATempty, not_null(h_8)));
    return(t);
  }
  ATerm m_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_u_4, (ATerm) ATinsert(ATempty, not_null(h_8)));
    return(t);
  }
  ATerm n_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_w_4, (ATerm) ATinsert(ATempty, not_null(h_8)));
    return(t);
  }
  ATerm o_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_a_5, (ATerm) ATinsert(ATempty, not_null(h_8)));
    return(t);
  }
  ATerm p_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_e_5, (ATerm) ATinsert(ATempty, not_null(h_8)));
    return(t);
  }
  ATerm q_10 (ATerm t)
  {
    ATerm r_9 = NULL;
    ATerm s_9 = NULL;
    t = not_null(i_8);
    {
      ATerm v_10 (ATerm t)
      {
        ATerm p_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              ATerm r_5 = t;
              int s_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  LocalPopChoice(s_5);
                }
              else
                {
                  t = r_5;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm c_0 (ATerm t)
            {
              ATerm t_5 = t;
              int u_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_10(t);
                  LocalPopChoice(u_5);
                }
              else
                {
                  t = t_5;
                  {
                  }
                }
              return(t);
            }
            t = Cons_2(t, b_0, c_0);
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            t = Cons_2(t, _id, v_10);
          }
        return(t);
      }
      t = v_10(t);
      {
        s_9 = t;
        if(((r_9 != NULL) && (r_9 != s_9)))
          _fail(s_9);
        else
          r_9 = s_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(h_8), not_null(r_9));
    return(t);
  }
  ATerm r_10 (ATerm t)
  {
    ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
    ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
    t = not_null(i_8);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm z_5 = t;
        int a_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = t;
            int c_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CallIdFun_0(t);
                LocalPopChoice(c_6);
              }
            else
              {
                t = b_6;
                t = CallFailFun_0(t);
              }
            LocalPopChoice(a_6);
          }
        else
          {
            t = z_5;
            {
            }
          }
        {
          ATerm f_6 = t;
          int i_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              LocalPopChoice(i_6);
            }
          else
            {
              t = f_6;
              {
                ATerm j_6 = t;
                int k_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_6 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm f_0 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = Call_2(t, f_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = l_6;
                      }
                    t = CreateDef2_0(t);
                    LocalPopChoice(k_6);
                  }
                else
                  {
                    t = j_6;
                    {
                      ATerm m_0 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, m_0);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, e_0);
      {
        y_9 = t;
        h_7 :
        if(match_cons(y_9, sym__2))
          {
            z_9 = ATgetArgument(y_9, 0);
            a_10 = ATgetArgument(y_9, 1);
            {
              ATerm b_10 = NULL;
              if(((v_9 != NULL) && (v_9 != z_9)))
                _fail(z_9);
              else
                v_9 = z_9;
              {
                if(((w_9 != NULL) && (w_9 != a_10)))
                  _fail(a_10);
                else
                  w_9 = a_10;
                {
                  t = not_null(w_9);
                  {
                    t = concat_0(t);
                    {
                      b_10 = t;
                      {
                        if(((x_9 != NULL) && (x_9 != b_10)))
                          _fail(b_10);
                        else
                          x_9 = b_10;
                        {
                          ATerm m_6 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = m_6;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_9), (ATerm) ATmakeAppl(sym_Call_2, not_null(h_8), not_null(v_9)));
    return(t);
  }
  g_8 = t;
  i_7 :
  if(match_cons(g_8, sym_SDef_4))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      z_7 = ATgetArgument(g_8, 2);
      y_7 = ATgetArgument(g_8, 3);
      j_7 :
      if(((ATgetType(h_8) == AT_LIST) && !(ATisEmpty(h_8))))
        {
          d_8 = ATgetFirst((ATermList) h_8);
          x_7 = (ATerm) ATgetNext((ATermList) h_8);
          k_7 :
          if(match_cons(d_8, sym_DontInline_0))
            {
              l_7 :
              if(((ATgetType(x_7) == AT_LIST) && ATisEmpty(x_7)))
                {
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_8), not_null(z_7), not_null(y_7));
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
      if(match_cons(g_8, sym_Rec_2))
        {
          h_8 = ATgetArgument(g_8, 0);
          i_8 = ATgetArgument(g_8, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_8), (ATerm)ATempty, not_null(i_8))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_8)), (ATerm) ATempty));
        }
      else
        {
          if(match_cons(g_8, sym_SDef_3))
            {
              h_8 = ATgetArgument(g_8, 0);
              i_8 = ATgetArgument(g_8, 1);
              z_7 = ATgetArgument(g_8, 2);
              m_7 :
              if(((ATgetType(i_8) == AT_LIST) && ATisEmpty(i_8)))
                {
                  n_7 :
                  if(match_cons(z_7, sym_Rec_2))
                    {
                      a_8 = ATgetArgument(z_7, 0);
                      b_8 = ATgetArgument(z_7, 1);
                      {
                        ATerm r_8 = NULL;
                        ATerm w_8 = NULL;
                        t = not_null(b_8);
                        {
                          ATerm n_0 (ATerm t)
                          {
                            ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
                            s_8 = t;
                            z_6 :
                            if(match_cons(s_8, sym_Call_2))
                              {
                                t_8 = ATgetArgument(s_8, 0);
                                v_8 = ATgetArgument(s_8, 1);
                                a_7 :
                                if(match_cons(t_8, sym_SVar_1))
                                  {
                                    u_8 = ATgetArgument(t_8, 0);
                                    b_7 :
                                    if(((ATgetType(v_8) == AT_LIST) && ATisEmpty(v_8)))
                                      {
                                        {
                                          if(((a_8 != NULL) && (a_8 != u_8)))
                                            _fail(u_8);
                                          else
                                            a_8 = u_8;
                                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_8)), (ATerm) ATempty);
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
                          t = alltd_1(t, n_0);
                          {
                            w_8 = t;
                            if(((r_8 != NULL) && (r_8 != w_8)))
                              _fail(w_8);
                            else
                              r_8 = w_8;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_8), (ATerm)ATempty, not_null(r_8));
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
              if(match_cons(g_8, sym_Seq_2))
                {
                  h_8 = ATgetArgument(g_8, 0);
                  i_8 = ATgetArgument(g_8, 1);
                  o_7 :
                  if(match_cons(i_8, sym_Seq_2))
                    {
                      e_8 = ATgetArgument(i_8, 0);
                      f_8 = ATgetArgument(i_8, 1);
                      p_7 :
                      if(match_cons(h_8, sym_Where_1))
                        {
                          d_8 = ATgetArgument(h_8, 0);
                          q_7 :
                          if(match_cons(e_8, sym_Build_1))
                            {
                              c_8 = ATgetArgument(e_8, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_8)), not_null(f_8)));
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(h_8, sym_Id_0))
                            {
                              t = i_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(i_8, sym_Build_1))
                        {
                          e_8 = ATgetArgument(i_8, 0);
                          r_7 :
                          if(match_cons(h_8, sym_Where_1))
                            {
                              d_8 = ATgetArgument(h_8, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_8), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_8)));
                            }
                          else
                            {
                              if(match_cons(h_8, sym_Id_0))
                                {
                                  t = i_10(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(i_8, sym_Id_0))
                            {
                              s_7 :
                              if(match_cons(h_8, sym_Id_0))
                                {
                                  ATerm n_6 = t;
                                  int o_6 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_10(t);
                                      LocalPopChoice(o_6);
                                    }
                                  else
                                    {
                                      t = n_6;
                                      t = i_10(t);
                                    }
                                }
                              else
                                {
                                  t = h_10(t);
                                }
                            }
                          else
                            {
                              t_7 :
                              if(match_cons(h_8, sym_Id_0))
                                {
                                  t = i_10(t);
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
                  if(match_cons(g_8, sym_Scope_2))
                    {
                      h_8 = ATgetArgument(g_8, 0);
                      i_8 = ATgetArgument(g_8, 1);
                      u_7 :
                      if(match_cons(i_8, sym_Scope_2))
                        {
                          e_8 = ATgetArgument(i_8, 0);
                          f_8 = ATgetArgument(i_8, 1);
                          v_7 :
                          if(((ATgetType(h_8) == AT_LIST) && ATisEmpty(h_8)))
                            {
                              {
                                ATerm p_6 = t;
                                int q_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = j_10(t);
                                    LocalPopChoice(q_6);
                                  }
                                else
                                  {
                                    t = p_6;
                                    t = k_10(t);
                                  }
                              }
                            }
                          else
                            {
                              t = j_10(t);
                            }
                        }
                      else
                        {
                          w_7 :
                          if(((ATgetType(h_8) == AT_LIST) && ATisEmpty(h_8)))
                            {
                              t = k_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(g_8, sym_Thread_1))
                        {
                          h_8 = ATgetArgument(g_8, 0);
                          t = l_10(t);
                        }
                      else
                        {
                          if(match_cons(g_8, sym_Some_1))
                            {
                              h_8 = ATgetArgument(g_8, 0);
                              t = m_10(t);
                            }
                          else
                            {
                              if(match_cons(g_8, sym_One_1))
                                {
                                  h_8 = ATgetArgument(g_8, 0);
                                  t = n_10(t);
                                }
                              else
                                {
                                  if(match_cons(g_8, sym_All_1))
                                    {
                                      h_8 = ATgetArgument(g_8, 0);
                                      t = o_10(t);
                                    }
                                  else
                                    {
                                      if(match_cons(g_8, sym_Bagof_1))
                                        {
                                          h_8 = ATgetArgument(g_8, 0);
                                          t = p_10(t);
                                        }
                                      else
                                        {
                                          if(match_cons(g_8, sym_Call_2))
                                            {
                                              h_8 = ATgetArgument(g_8, 0);
                                              i_8 = ATgetArgument(g_8, 1);
                                              {
                                                ATerm r_6 = t;
                                                int s_6 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = q_10(t);
                                                    LocalPopChoice(s_6);
                                                  }
                                                else
                                                  {
                                                    t = r_6;
                                                    t = r_10(t);
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
ATerm repeat_2 (ATerm t, ATerm u_79 (ATerm), ATerm v_79 (ATerm))
{
  ATerm z_10 (ATerm t)
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_79(t);
        t = z_10(t);
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        t = v_79(t);
      }
    return(t);
  }
  t = z_10(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_79 (ATerm))
{
  t = repeat_2(t, x_79, _id);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm b_81 (ATerm), ATerm c_81 (ATerm))
{
  ATerm a_11 (ATerm t)
  {
    t = b_81(t);
    {
      t = _all(t, a_11);
      t = c_81(t);
    }
    return(t);
  }
  t = a_11(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_60 (ATerm), ATerm n_60 (ATerm))
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym__2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      {
        ATerm n_11 = NULL,p_11 = NULL;
        ATerm o_11 = NULL;
        t = SSLgetAnnotations(not_null(h_11));
        {
          o_11 = t;
          if(((n_11 != NULL) && (n_11 != o_11)))
            _fail(o_11);
          else
            n_11 = o_11;
        }
        {
          t = not_null(i_11);
          {
            ATerm r_11 = NULL;
            t = m_60(t);
            {
              p_11 = t;
              {
                t = not_null(j_11);
                {
                  ATerm t_11 = NULL;
                  t = n_60(t);
                  {
                    r_11 = t;
                    {
                      ATerm u_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_11), not_null(r_11)), not_null(n_11));
                      {
                        u_11 = t;
                        if(((t_11 != NULL) && (t_11 != u_11)))
                          _fail(u_11);
                        else
                          t_11 = u_11;
                      }
                      t = not_null(t_11);
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
  ATerm c_12 = NULL;
  ATerm v_6;
  v_6 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm d_12 = NULL,e_12 = NULL;
      d_12 = t;
      b_12 :
      if(match_cons(d_12, sym_Program_1))
        {
          e_12 = ATgetArgument(d_12, 0);
          if(((c_12 != NULL) && (c_12 != e_12)))
            _fail(e_12);
          else
            c_12 = e_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, o_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_6), not_null(c_12)), term_x_6));
      {
        t = printnl_0(t);
        {
          t = term_c_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym__2))
    {
      j_12 = ATgetArgument(i_12, 0);
      k_12 = ATgetArgument(i_12, 1);
      {
        ATerm d_7;
        d_7 = t;
        t = SSL_printnl(not_null(j_12), not_null(k_12));
        t = d_7;
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
  ATerm p_12 = NULL;
  p_12 = t;
  t = SSL_implode_string(not_null(p_12));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      {
        ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
        u_12 = t;
        t_12 :
        if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
          {
            v_12 = ATgetFirst((ATermList) u_12);
            w_12 = (ATerm) ATgetNext((ATermList) u_12);
            {
              t = not_null(v_12);
              {
                ATerm p_0 (ATerm t)
                {
                  t = not_null(w_12);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_0);
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
  ATerm g_13 = NULL;
  ATerm i_13 = NULL;
  g_13 = t;
  {
    ATerm j_13 = NULL;
    ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
    t = not_null(g_13);
    {
      j_13 = t;
      {
        t = SSL_explode_term(not_null(j_13));
        {
          l_13 = t;
          e_13 :
          if(match_cons(l_13, sym__2))
            {
              m_13 = ATgetArgument(l_13, 0);
              n_13 = ATgetArgument(l_13, 1);
              f_13 :
              if(match_string(m_13, ""))
                {
                  if(((i_13 != NULL) && (i_13 != n_13)))
                    _fail(n_13);
                  else
                    i_13 = n_13;
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
      t = not_null(i_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_87 (ATerm))
{
  ATerm r_13 (ATerm t)
  {
    ATerm g_7 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_13);
        LocalPopChoice(j_8);
      }
    else
      {
        t = g_7;
        {
          t = Nil_0(t);
          t = m_87(t);
        }
      }
    return(t);
  }
  t = r_13(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym__2))
    {
      v_13 = ATgetArgument(u_13, 0);
      w_13 = ATgetArgument(u_13, 1);
      {
        t = not_null(v_13);
        {
          ATerm q_0 (ATerm t)
          {
            t = not_null(w_13);
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
ATerm conc_0 (ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  t = SSL_explode_string(not_null(b_14));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_97 (ATerm))
{
  ATerm o_8;
  o_8 = t;
  {
    ATerm g_14 = NULL,i_14 = NULL;
    ATerm p_8;
    p_8 = t;
    {
      ATerm h_14 = NULL;
      t = m_97(t);
      {
        h_14 = t;
        if(((g_14 != NULL) && (g_14 != h_14)))
          _fail(h_14);
        else
          g_14 = h_14;
      }
    }
    t = p_8;
    {
      ATerm j_14 = NULL;
      j_14 = t;
      if(((i_14 != NULL) && (i_14 != j_14)))
        _fail(j_14);
      else
        i_14 = j_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_14)), not_null(g_14)));
        t = printnl_0(t);
      }
    }
  }
  t = o_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_is_string(not_null(n_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = q_8;
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              ATerm a_9 = t;
              int b_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(b_9);
                }
              else
                {
                  t = a_9;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, r_0);
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
              w_14 = t;
              v_14 :
              if(match_cons(w_14, sym_Path_1))
                {
                  x_14 = ATgetArgument(w_14, 0);
                  t = not_null(x_14);
                }
              else
                {
                  if(match_cons(w_14, sym_Var_1))
                    {
                      x_14 = ATgetArgument(w_14, 0);
                      {
                        t = not_null(x_14);
                        {
                          ATerm c_9 = t;
                          int d_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_9);
                            }
                          else
                            {
                              t = c_9;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_e_9;
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
                      if(match_cons(w_14, sym_Prefix_2))
                        {
                          x_14 = ATgetArgument(w_14, 0);
                          y_14 = ATgetArgument(w_14, 1);
                          {
                            ATerm d_15 = NULL,f_15 = NULL;
                            ATerm f_9;
                            f_9 = t;
                            {
                              ATerm e_15 = NULL;
                              t = not_null(x_14);
                              {
                                t = eval_config_0(t);
                                {
                                  e_15 = t;
                                  if(((d_15 != NULL) && (d_15 != e_15)))
                                    _fail(e_15);
                                  else
                                    d_15 = e_15;
                                }
                              }
                            }
                            t = f_9;
                            {
                              ATerm g_15 = NULL;
                              t = not_null(y_14);
                              {
                                t = eval_config_0(t);
                                {
                                  g_15 = t;
                                  if(((f_15 != NULL) && (f_15 != g_15)))
                                    _fail(g_15);
                                  else
                                    f_15 = g_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_15), not_null(f_15));
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
  ATerm o_15 = NULL;
  o_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_g_9, not_null(o_15));
    {
      t = table_get_0(t);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm l_9;
              l_9 = t;
              {
                ATerm q_15 = NULL;
                ATerm r_15 = NULL;
                r_15 = t;
                if(((q_15 != NULL) && (q_15 != r_15)))
                  _fail(r_15);
                else
                  q_15 = r_15;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_g_9, not_null(o_15), not_null(q_15));
                  t = table_put_0(t);
                }
              }
              t = l_9;
            }
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_100 (ATerm))
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9;
      o_9 = t;
      {
        ATerm v_15 = NULL;
        ATerm w_15 = NULL;
        t = term_p_9;
        {
          t = get_config_0(t);
          {
            w_15 = t;
            if(((v_15 != NULL) && (v_15 != w_15)))
              _fail(w_15);
            else
              v_15 = w_15;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), term_q_9);
          t = geq_0(t);
        }
      }
      t = o_9;
      t = j_100(t);
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym__2))
    {
      b_16 = ATgetArgument(a_16, 0);
      c_16 = ATgetArgument(a_16, 1);
      t = SSL_WriteToTextFile(not_null(b_16), not_null(c_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_cons(i_16, sym__2))
    {
      j_16 = ATgetArgument(i_16, 0);
      k_16 = ATgetArgument(i_16, 1);
      t = SSL_WriteToBinaryFile(not_null(j_16), not_null(k_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm s_16 = NULL;
  ATerm t_9;
  t_9 = t;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm u_9 = t;
      int c_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            ATerm t_16 = NULL,u_16 = NULL;
            t_16 = t;
            p_16 :
            if(match_cons(t_16, sym_Output_1))
              {
                u_16 = ATgetArgument(t_16, 0);
                if(((s_16 != NULL) && (s_16 != u_16)))
                  _fail(u_16);
                else
                  s_16 = u_16;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, u_0);
          LocalPopChoice(c_10);
        }
      else
        {
          t = u_9;
          {
            ATerm v_16 = NULL;
            t = term_d_10;
            {
              v_16 = t;
              if(((s_16 != NULL) && (s_16 != v_16)))
                _fail(v_16);
              else
                s_16 = v_16;
            }
          }
        }
      return(t);
    }
    t = _2(t, t_0, _id);
  }
  t = t_9;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm w_0 (ATerm t)
      {
        t = not_null(s_16);
        return(t);
      }
      t = split_2(t, w_0, _id);
      return(t);
    }
    t = _2(t, _id, v_0);
    {
      ATerm e_10 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            ATerm y_0 (ATerm t)
            {
              ATerm w_16 = NULL;
              w_16 = t;
              r_16 :
              if(!(match_cons(w_16, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, y_0);
            return(t);
          }
          t = _2(t, x_0, WriteToBinaryFile_0);
          LocalPopChoice(f_10);
        }
      else
        {
          t = e_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_98 (ATerm))
{
  ATerm c_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  ATerm g_10;
  g_10 = t;
  t = dtime_0(t);
  t = g_10;
  {
    t = q_98(t);
    {
      ATerm s_10;
      s_10 = t;
      {
        ATerm d_17 = NULL;
        t = dtime_0(t);
        {
          d_17 = t;
          if(((c_17 != NULL) && (c_17 != d_17)))
            _fail(d_17);
          else
            c_17 = d_17;
        }
      }
      t = s_10;
      {
        e_17 = t;
        b_17 :
        if(match_cons(e_17, sym__2))
          {
            f_17 = ATgetArgument(e_17, 0);
            g_17 = ATgetArgument(e_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_17))), not_null(g_17));
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
  ATerm m_17 = NULL;
  m_17 = t;
  t = SSL_ReadFromFile(not_null(m_17));
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_95 (ATerm), ATerm b_95 (ATerm))
{
  ATerm r_17 = NULL,t_17 = NULL;
  ATerm t_10;
  t_10 = t;
  {
    ATerm s_17 = NULL;
    t = a_95(t);
    {
      s_17 = t;
      if(((r_17 != NULL) && (r_17 != s_17)))
        _fail(s_17);
      else
        r_17 = s_17;
    }
  }
  t = t_10;
  {
    ATerm u_17 = NULL;
    t = b_95(t);
    {
      u_17 = t;
      if(((t_17 != NULL) && (t_17 != u_17)))
        _fail(u_17);
      else
        t_17 = u_17;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), not_null(t_17));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_18 = NULL;
  ATerm u_10;
  u_10 = t;
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          ATerm b_18 = NULL,c_18 = NULL;
          b_18 = t;
          y_17 :
          if(match_cons(b_18, sym_Input_1))
            {
              c_18 = ATgetArgument(b_18, 0);
              if(((a_18 != NULL) && (a_18 != c_18)))
                _fail(c_18);
              else
                a_18 = c_18;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, z_0);
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        {
          ATerm d_18 = NULL;
          t = term_y_10;
          {
            d_18 = t;
            if(((a_18 != NULL) && (a_18 != d_18)))
              _fail(d_18);
            else
              a_18 = d_18;
          }
        }
      }
  }
  t = u_10;
  {
    ATerm a_1 (ATerm t)
    {
      t = not_null(a_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm h_18 = NULL;
    h_18 = t;
    g_18 :
    if(!(match_string(h_18, "-v")))
      {
        if(!(match_string(h_18, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_d_11;
    t = set_config_0(t);
    t = term_e_11;
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_f_11;
    return(t);
  }
  t = Option_3(t, b_1, c_1, e_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm k_18 = NULL;
    k_18 = t;
    i_18 :
    if(!(match_string(k_18, "-k")))
      {
        if(!(match_string(k_18, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm k_11;
    k_11 = t;
    {
      ATerm l_18 = NULL;
      ATerm m_18 = NULL;
      t = string_to_int_0(t);
      {
        m_18 = t;
        if(((l_18 != NULL) && (l_18 != m_18)))
          _fail(m_18);
        else
          l_18 = m_18;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(l_18));
        t = set_config_0(t);
      }
    }
    t = k_11;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = term_m_11;
    return(t);
  }
  t = ArgOption_3(t, f_1, g_1, h_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  t = SSL_string_to_int(not_null(p_18));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm x_18 = NULL;
        x_18 = t;
        s_18 :
        if(!(match_string(x_18, "-S")))
          {
            if(!(match_string(x_18, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = term_w_11;
        t = set_config_0(t);
        t = term_x_11;
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = term_y_11;
        return(t);
      }
      t = Option_3(t, j_1, k_1, l_1);
      LocalPopChoice(s_11);
    }
  else
    {
      t = q_11;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm y_18 = NULL;
              y_18 = t;
              t_18 :
              if(!(match_string(y_18, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              ATerm b_19 = NULL;
              ATerm f_12;
              f_12 = t;
              {
                ATerm z_18 = NULL;
                ATerm a_19 = NULL;
                t = string_to_int_0(t);
                {
                  a_19 = t;
                  if(((z_18 != NULL) && (z_18 != a_19)))
                    _fail(a_19);
                  else
                    z_18 = a_19;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(z_18));
                  t = set_config_0(t);
                }
              }
              t = f_12;
              {
                ATerm c_19 = NULL;
                c_19 = t;
                if(((b_19 != NULL) && (b_19 != c_19)))
                  _fail(c_19);
                else
                  b_19 = c_19;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_19));
              }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              t = term_g_12;
              return(t);
            }
            t = ArgOption_3(t, m_1, n_1, o_1);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm p_1 (ATerm t)
              {
                ATerm d_19 = NULL;
                d_19 = t;
                w_18 :
                if(!(match_string(d_19, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_1 (ATerm t)
              {
                t = term_m_12;
                t = set_config_0(t);
                t = term_n_12;
                return(t);
              }
              ATerm r_1 (ATerm t)
              {
                t = term_o_12;
                return(t);
              }
              t = Option_3(t, p_1, q_1, r_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm s_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(x_12);
          }
        else
          {
            t = s_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm j_19 = NULL;
    j_19 = t;
    g_19 :
    if(!(match_string(j_19, "-o")))
      {
        if(!(match_string(j_19, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    ATerm m_19 = NULL;
    ATerm y_12;
    y_12 = t;
    {
      ATerm k_19 = NULL;
      ATerm l_19 = NULL;
      l_19 = t;
      if(((k_19 != NULL) && (k_19 != l_19)))
        _fail(l_19);
      else
        k_19 = l_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(k_19));
        t = set_config_0(t);
      }
    }
    t = y_12;
    {
      ATerm n_19 = NULL;
      n_19 = t;
      if(((m_19 != NULL) && (m_19 != n_19)))
        _fail(n_19);
      else
        m_19 = n_19;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_19));
    }
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = term_a_13;
    return(t);
  }
  t = ArgOption_3(t, s_1, t_1, u_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm v_1 (ATerm t)
        {
          ATerm r_19 = NULL;
          r_19 = t;
          q_19 :
          if(!(match_string(r_19, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_1 (ATerm t)
        {
          t = term_h_13;
          t = set_config_0(t);
          t = term_k_13;
          return(t);
        }
        ATerm y_1 (ATerm t)
        {
          t = term_o_13;
          return(t);
        }
        t = Option_3(t, v_1, w_1, y_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  x_19 = t;
  v_19 :
  if(match_string(x_19, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
        {
          y_19 = ATgetFirst((ATermList) x_19);
          z_19 = (ATerm) ATgetNext((ATermList) x_19);
          w_19 :
          if(((ATgetType(z_19) == AT_LIST) && !(ATisEmpty(z_19))))
            {
              a_20 = ATgetFirst((ATermList) z_19);
              b_20 = (ATerm) ATgetNext((ATermList) z_19);
              {
                ATerm f_20 = NULL;
                ATerm p_13;
                p_13 = t;
                {
                  t = not_null(y_19);
                  t = j_0(t);
                }
                t = p_13;
                {
                  ATerm g_20 = NULL;
                  t = not_null(a_20);
                  {
                    t = k_0(t);
                    {
                      g_20 = t;
                      if(((f_20 != NULL) && (f_20 != g_20)))
                        _fail(g_20);
                      else
                        f_20 = g_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_20)), not_null(f_20));
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
ATerm input_option_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm n_20 = NULL;
    n_20 = t;
    k_20 :
    if(!(match_string(n_20, "-i")))
      {
        if(!(match_string(n_20, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm q_20 = NULL;
    ATerm q_13;
    q_13 = t;
    {
      ATerm o_20 = NULL;
      ATerm p_20 = NULL;
      p_20 = t;
      if(((o_20 != NULL) && (o_20 != p_20)))
        _fail(p_20);
      else
        o_20 = p_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, not_null(o_20));
        t = set_config_0(t);
      }
    }
    t = q_13;
    {
      ATerm r_20 = NULL;
      r_20 = t;
      if(((q_20 != NULL) && (q_20 != r_20)))
        _fail(r_20);
      else
        q_20 = r_20;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_20));
    }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_x_13;
    return(t);
  }
  t = ArgOption_3(t, z_1, a_2, b_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm a_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(c_14);
          }
        else
          {
            t = a_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, term_d_14));
  {
    t = printnl_0(t);
    {
      t = term_c_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_20 = NULL;
  v_20 = t;
  t = SSL_TicksToSeconds(not_null(v_20));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym__2))
    {
      b_21 = ATgetArgument(a_21, 0);
      c_21 = ATgetArgument(a_21, 1);
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_21), not_null(c_21));
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            t = SSL_addr(not_null(b_21), not_null(c_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_93 (ATerm), ATerm m_93 (ATerm))
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_93(t);
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
        j_21 = t;
        i_21 :
        if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
          {
            k_21 = ATgetFirst((ATermList) j_21);
            l_21 = (ATerm) ATgetNext((ATermList) j_21);
            {
              ATerm o_21 = NULL;
              ATerm p_21 = NULL;
              t = not_null(l_21);
              {
                t = foldr_2(t, l_93, m_93);
                {
                  p_21 = t;
                  if(((o_21 != NULL) && (o_21 != p_21)))
                    _fail(p_21);
                  else
                    o_21 = p_21;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), not_null(o_21));
                t = m_93(t);
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
ATerm crush_2 (ATerm t, ATerm j_92 (ATerm), ATerm k_92 (ATerm))
{
  ATerm w_21 = NULL;
  ATerm y_21 = NULL;
  w_21 = t;
  {
    ATerm z_21 = NULL;
    ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
    t = not_null(w_21);
    {
      z_21 = t;
      {
        t = SSL_explode_term(not_null(z_21));
        {
          b_22 = t;
          v_21 :
          if(match_cons(b_22, sym__2))
            {
              c_22 = ATgetArgument(b_22, 0);
              d_22 = ATgetArgument(b_22, 1);
              if(((y_21 != NULL) && (y_21 != d_22)))
                _fail(d_22);
              else
                y_21 = d_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_21);
      t = foldr_2(t, j_92, k_92);
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
    ATerm c_2 (ATerm t)
    {
      t = term_v_11;
      return(t);
    }
    t = crush_2(t, c_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym__2))
    {
      k_22 = ATgetArgument(j_22, 0);
      l_22 = ATgetArgument(j_22, 1);
      {
        ATerm m_14;
        m_14 = t;
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_22), not_null(l_22));
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              t = SSL_gtr(not_null(k_22), not_null(l_22));
            }
        }
        t = m_14;
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
  ATerm r_22 = NULL;
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
      s_22 = t;
      q_22 :
      if(match_cons(s_22, sym__2))
        {
          t_22 = ATgetArgument(s_22, 0);
          u_22 = ATgetArgument(s_22, 1);
          {
            if(((r_22 != NULL) && (r_22 != t_22)))
              _fail(t_22);
            else
              r_22 = t_22;
            if(((r_22 != NULL) && (r_22 != u_22)))
              _fail(u_22);
            else
              r_22 = u_22;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_100 (ATerm))
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_14;
      u_14 = t;
      {
        ATerm x_22 = NULL;
        ATerm y_22 = NULL;
        t = term_p_9;
        {
          t = get_config_0(t);
          {
            y_22 = t;
            if(((x_22 != NULL) && (x_22 != y_22)))
              _fail(y_22);
            else
              x_22 = y_22;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), term_c_7);
          t = geq_0(t);
        }
      }
      t = u_14;
      t = i_100(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm c_23 = NULL,e_23 = NULL;
    ATerm z_14;
    z_14 = t;
    {
      ATerm d_23 = NULL;
      t = run_time_0(t);
      {
        d_23 = t;
        if(((c_23 != NULL) && (c_23 != d_23)))
          _fail(d_23);
        else
          c_23 = d_23;
      }
    }
    t = z_14;
    {
      ATerm f_23 = NULL;
      t = term_a_15;
      {
        t = get_config_0(t);
        {
          f_23 = t;
          if(((e_23 != NULL) && (e_23 != f_23)))
            _fail(f_23);
          else
            e_23 = f_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_15), not_null(c_23)), term_b_15), not_null(e_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_2);
  {
    t = term_v_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym_Version_0))
    {
      ATerm o_23 = NULL,q_23 = NULL;
      ATerm h_15;
      h_15 = t;
      {
        ATerm p_23 = NULL;
        t = SSLgetAnnotations(not_null(m_23));
        {
          p_23 = t;
          if(((o_23 != NULL) && (o_23 != p_23)))
            _fail(p_23);
          else
            o_23 = p_23;
        }
      }
      t = h_15;
      {
        ATerm r_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_23));
        {
          r_23 = t;
          if(((q_23 != NULL) && (q_23 != r_23)))
            _fail(r_23);
          else
            q_23 = r_23;
        }
        t = not_null(q_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_98 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_15);
            }
          else
            {
              t = k_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, e_2);
  t = o_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  t = SSL_table_create(not_null(w_23));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  {
    ATerm m_15;
    m_15 = t;
    {
      t = term_n_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_15, term_p_15, not_null(a_24));
          t = table_put_0(t);
        }
      }
    }
    t = m_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  t = SSL_table_destroy(not_null(e_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_24 = NULL;
  ATerm t_24 (ATerm t)
  {
    t = SSL_exit(not_null(m_24));
    return(t);
  }
  ATerm u_24 (ATerm t)
  {
    ATerm p_24 = NULL,r_24 = NULL;
    ATerm s_15;
    s_15 = t;
    {
      ATerm q_24 = NULL;
      t = SSLgetAnnotations(not_null(m_24));
      {
        q_24 = t;
        if(((p_24 != NULL) && (p_24 != q_24)))
          _fail(q_24);
        else
          p_24 = q_24;
      }
    }
    t = s_15;
    {
      ATerm s_24 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_exit_0), not_null(p_24));
      {
        s_24 = t;
        if(((r_24 != NULL) && (r_24 != s_24)))
          _fail(s_24);
        else
          r_24 = s_24;
      }
      t = not_null(r_24);
    }
    return(t);
  }
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_exit_0))
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_24(t);
          LocalPopChoice(u_15);
        }
      else
        {
          t = t_15;
          t = u_24(t);
        }
    }
  else
    {
      t = t_24(t);
    }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  x_24 :
  if(((ATgetType(y_24) == AT_LIST) && ATisEmpty(y_24)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
        {
          z_24 = ATgetFirst((ATermList) y_24);
          a_25 = (ATerm) ATgetNext((ATermList) y_24);
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
  ATerm x_15;
  x_15 = t;
  {
    ATerm d_25 = NULL;
    ATerm g_25 = NULL;
    ATerm y_15 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(d_16);
      }
    else
      {
        t = y_15;
        {
          ATerm e_25 = NULL;
          ATerm f_25 = NULL;
          f_25 = t;
          if(((e_25 != NULL) && (e_25 != f_25)))
            _fail(f_25);
          else
            e_25 = f_25;
          t = (ATerm) ATinsert(ATempty, not_null(e_25));
        }
      }
    {
      g_25 = t;
      if(((d_25 != NULL) && (d_25 != g_25)))
        _fail(g_25);
      else
        d_25 = g_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_10, not_null(d_25));
      t = printnl_0(t);
    }
  }
  t = x_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_102 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm j_25 (ATerm t)
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = Cons_2(t, x_86, j_25);
      }
    return(t);
  }
  t = j_25(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  s_25 = t;
  p_25 :
  if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
    {
      q_25 = ATgetFirst((ATermList) s_25);
      r_25 = (ATerm) ATgetNext((ATermList) s_25);
      {
        ATerm v_25 = NULL;
        t = not_null(r_25);
        {
          ATerm g_16;
          g_16 = t;
          {
            ATerm w_25 = NULL,y_25 = NULL,a_26 = NULL;
            ATerm l_16;
            l_16 = t;
            {
              ATerm x_25 = NULL;
              t = i_0(t);
              {
                x_25 = t;
                if(((w_25 != NULL) && (w_25 != x_25)))
                  _fail(x_25);
                else
                  w_25 = x_25;
              }
            }
            t = l_16;
            {
              ATerm z_25 = NULL;
              t = not_null(q_25);
              {
                t = h_0(t);
                {
                  z_25 = t;
                  if(((y_25 != NULL) && (y_25 != z_25)))
                    _fail(z_25);
                  else
                    y_25 = z_25;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_25)), not_null(y_25));
                {
                  a_26 = t;
                  if(((v_25 != NULL) && (v_25 != a_26)))
                    _fail(a_26);
                  else
                    v_25 = a_26;
                }
              }
            }
          }
          t = g_16;
          {
            ATerm f_2 (ATerm t)
            {
              t = not_null(v_25);
              return(t);
            }
            t = reverse_acc_2(t, h_0, f_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(s_25) == AT_LIST) && ATisEmpty(s_25)))
        {
          {
            t = term_c_11;
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
  ATerm g_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_102 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_67 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym_Program_1))
    {
      m_26 = ATgetArgument(l_26, 0);
      {
        ATerm p_26 = NULL,r_26 = NULL;
        ATerm q_26 = NULL;
        t = SSLgetAnnotations(not_null(l_26));
        {
          q_26 = t;
          if(((p_26 != NULL) && (p_26 != q_26)))
            _fail(q_26);
          else
            p_26 = q_26;
        }
        {
          t = not_null(m_26);
          {
            ATerm t_26 = NULL;
            t = j_67(t);
            {
              r_26 = t;
              {
                ATerm u_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_26)), not_null(p_26));
                {
                  u_26 = t;
                  if(((t_26 != NULL) && (t_26 != u_26)))
                    _fail(u_26);
                  else
                    t_26 = u_26;
                }
                t = not_null(t_26);
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
  ATerm c_27 = NULL;
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_27 = NULL;
      t = term_a_15;
      {
        t = get_config_0(t);
        {
          d_27 = t;
          if(((c_27 != NULL) && (c_27 != d_27)))
            _fail(d_27);
          else
            c_27 = d_27;
        }
      }
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm h_2 (ATerm t)
        {
          ATerm i_2 (ATerm t)
          {
            ATerm e_27 = NULL;
            e_27 = t;
            if(((c_27 != NULL) && (c_27 != e_27)))
              _fail(e_27);
            else
              c_27 = e_27;
            return(t);
          }
          t = Program_1(t, i_2);
          return(t);
        }
        t = fetch_1(t, h_2);
      }
    }
  {
    t = term_o_16;
    {
      t = echo_0(t);
      {
        t = term_y_16;
        {
          t = table_get_0(t);
          {
            ATerm j_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, j_2);
            {
              ATerm k_2 (ATerm t)
              {
                ATerm f_27 = NULL;
                ATerm g_27 = NULL;
                g_27 = t;
                if(((f_27 != NULL) && (f_27 != g_27)))
                  _fail(g_27);
                else
                  f_27 = g_27;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_27)), term_z_16);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, k_2);
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
  ATerm a_17;
  a_17 = t;
  {
    ATerm l_27 = NULL;
    ATerm m_27 = NULL;
    m_27 = t;
    if(((l_27 != NULL) && (l_27 != m_27)))
      _fail(m_27);
    else
      l_27 = m_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(l_27)));
      t = printnl_0(t);
    }
  }
  t = a_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_97 (ATerm))
{
  ATerm h_17;
  h_17 = t;
  {
    t = n_97(t);
    t = debug_0(t);
  }
  t = h_17;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_67 (ATerm))
{
  ATerm t_27 = NULL,u_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym_Undefined_1))
    {
      u_27 = ATgetArgument(t_27, 0);
      {
        ATerm x_27 = NULL,z_27 = NULL;
        ATerm y_27 = NULL;
        t = SSLgetAnnotations(not_null(t_27));
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
        {
          t = not_null(u_27);
          {
            ATerm b_28 = NULL;
            t = k_67(t);
            {
              z_27 = t;
              {
                ATerm c_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_27)), not_null(x_27));
                {
                  c_28 = t;
                  if(((b_28 != NULL) && (b_28 != c_28)))
                    _fail(c_28);
                  else
                    b_28 = c_28;
                }
                t = not_null(b_28);
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
ATerm fetch_1 (ATerm t, ATerm g_87 (ATerm))
{
  ATerm h_28 (ATerm t)
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_87, _id);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = Cons_2(t, _id, h_28);
      }
    return(t);
  }
  t = h_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_101 (ATerm))
{
  t = fetch_1(t, l_101);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym_Help_0))
    {
      ATerm o_28 = NULL,q_28 = NULL;
      ATerm k_17;
      k_17 = t;
      {
        ATerm p_28 = NULL;
        t = SSLgetAnnotations(not_null(m_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
      }
      t = k_17;
      {
        ATerm r_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_28));
        {
          r_28 = t;
          if(((q_28 != NULL) && (q_28 != r_28)))
            _fail(r_28);
          else
            q_28 = r_28;
        }
        t = not_null(q_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm l_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_79(t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = l_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym__2))
    {
      y_28 = ATgetArgument(x_28, 0);
      z_28 = ATgetArgument(x_28, 1);
      t = SSL_table_get(not_null(y_28), not_null(z_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  q_30 = t;
  p_30 :
  if(match_cons(q_30, sym__3))
    {
      r_30 = ATgetArgument(q_30, 0);
      s_30 = ATgetArgument(q_30, 1);
      t_30 = ATgetArgument(q_30, 2);
      {
        ATerm o_17;
        o_17 = t;
        {
          ATerm x_30 = NULL;
          ATerm y_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_30), not_null(s_30));
          {
            ATerm p_17 = t;
            int q_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_17);
              }
            else
              {
                t = p_17;
                t = (ATerm) ATempty;
              }
            {
              y_30 = t;
              if(((x_30 != NULL) && (x_30 != y_30)))
                _fail(y_30);
              else
                x_30 = y_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_30), not_null(s_30), (ATerm) ATinsert(CheckATermList(not_null(x_30)), not_null(t_30)));
            t = table_put_0(t);
          }
        }
        t = o_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_102 (ATerm))
{
  ATerm c_31 = NULL;
  ATerm d_31 = NULL;
  t = term_c_11;
  {
    t = q_102(t);
    {
      d_31 = t;
      if(((c_31 != NULL) && (c_31 != d_31)))
        _fail(d_31);
      else
        c_31 = d_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_16, term_x_16, not_null(c_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  i_31 :
  if(match_string(j_31, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
        {
          k_31 = ATgetFirst((ATermList) j_31);
          l_31 = (ATerm) ATgetNext((ATermList) j_31);
          {
            ATerm o_31 = NULL;
            ATerm v_17;
            v_17 = t;
            {
              t = not_null(k_31);
              t = a_0(t);
            }
            t = v_17;
            {
              ATerm p_31 = NULL;
              t = term_c_11;
              {
                t = d_0(t);
                {
                  p_31 = t;
                  if(((o_31 != NULL) && (o_31 != p_31)))
                    _fail(p_31);
                  else
                    o_31 = p_31;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_31)), not_null(o_31));
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
  ATerm l_2 (ATerm t)
  {
    ATerm z_31 = NULL;
    z_31 = t;
    y_31 :
    if(!(match_string(z_31, "--help")))
      {
        if(!(match_string(z_31, "-h")))
          {
            if(!(match_string(z_31, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_x_17;
    {
      t = set_config_0(t);
      t = term_z_17;
    }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_e_18;
    return(t);
  }
  t = Option_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  b_32 :
  if(((ATgetType(c_32) == AT_LIST) && !(ATisEmpty(c_32))))
    {
      d_32 = ATgetFirst((ATermList) c_32);
      e_32 = (ATerm) ATgetNext((ATermList) c_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_61 (ATerm), ATerm w_61 (ATerm))
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
    {
      s_32 = ATgetFirst((ATermList) r_32);
      t_32 = (ATerm) ATgetNext((ATermList) r_32);
      {
        ATerm x_32 = NULL,z_32 = NULL;
        ATerm y_32 = NULL;
        t = SSLgetAnnotations(not_null(r_32));
        {
          y_32 = t;
          if(((x_32 != NULL) && (x_32 != y_32)))
            _fail(y_32);
          else
            x_32 = y_32;
        }
        {
          t = not_null(s_32);
          {
            ATerm b_33 = NULL;
            t = v_61(t);
            {
              z_32 = t;
              {
                t = not_null(t_32);
                {
                  ATerm d_33 = NULL;
                  t = w_61(t);
                  {
                    b_33 = t;
                    {
                      ATerm e_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_33)), not_null(z_32)), not_null(x_32));
                      {
                        e_33 = t;
                        if(((d_33 != NULL) && (d_33 != e_33)))
                          _fail(e_33);
                        else
                          d_33 = e_33;
                      }
                      t = not_null(d_33);
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
  ATerm o_33 = NULL;
  o_33 = t;
  n_33 :
  if(((ATgetType(o_33) == AT_LIST) && ATisEmpty(o_33)))
    {
      {
        ATerm q_33 = NULL,s_33 = NULL;
        ATerm f_18;
        f_18 = t;
        {
          ATerm r_33 = NULL;
          t = SSLgetAnnotations(not_null(o_33));
          {
            r_33 = t;
            if(((q_33 != NULL) && (q_33 != r_33)))
              _fail(r_33);
            else
              q_33 = r_33;
          }
        }
        t = f_18;
        {
          ATerm t_33 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_33));
          {
            t_33 = t;
            if(((s_33 != NULL) && (s_33 != t_33)))
              _fail(t_33);
            else
              s_33 = t_33;
          }
          t = not_null(s_33);
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
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
  z_33 = t;
  y_33 :
  if(match_cons(z_33, sym__2))
    {
      a_34 = ATgetArgument(z_33, 0);
      b_34 = ATgetArgument(z_33, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_9, not_null(a_34), not_null(b_34));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_102 (ATerm))
{
  ATerm j_18;
  j_18 = t;
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_18;
        t = o_102(t);
        LocalPopChoice(o_18);
      }
    else
      {
        t = n_18;
        {
        }
      }
  }
  t = j_18;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm j_34 = NULL;
      ATerm r_18;
      r_18 = t;
      {
        ATerm h_34 = NULL;
        ATerm i_34 = NULL;
        i_34 = t;
        if(((h_34 != NULL) && (h_34 != i_34)))
          _fail(i_34);
        else
          h_34 = i_34;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_15, not_null(h_34));
          t = set_config_0(t);
        }
      }
      t = r_18;
      {
        ATerm k_34 = NULL;
        k_34 = t;
        if(((j_34 != NULL) && (j_34 != k_34)))
          _fail(k_34);
        else
          j_34 = k_34;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_34));
      }
      return(t);
    }
    ATerm p_2 (ATerm t)
    {
      ATerm u_18 = t;
      int v_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_19);
            }
          else
            {
              t = e_19;
              {
                t = o_102(t);
                t = Cons_2(t, _id, p_2);
              }
            }
          LocalPopChoice(v_18);
        }
      else
        {
          t = u_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_2, p_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  ATerm h_19;
  h_19 = t;
  {
    ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
    t_34 = t;
    p_34 :
    if(match_cons(t_34, sym__3))
      {
        u_34 = ATgetArgument(t_34, 0);
        v_34 = ATgetArgument(t_34, 1);
        w_34 = ATgetArgument(t_34, 2);
        {
          if(((q_34 != NULL) && (q_34 != u_34)))
            _fail(u_34);
          else
            q_34 = u_34;
          {
            if(((r_34 != NULL) && (r_34 != v_34)))
              _fail(v_34);
            else
              r_34 = v_34;
            {
              if(((s_34 != NULL) && (s_34 != w_34)))
                _fail(w_34);
              else
                s_34 = w_34;
              t = SSL_table_put(not_null(q_34), not_null(r_34), not_null(s_34));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_102 (ATerm))
{
  ATerm z_34 = NULL;
  ATerm i_19;
  i_19 = t;
  {
    t = term_o_19;
    t = table_put_0(t);
  }
  t = i_19;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm p_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_102(t);
          LocalPopChoice(s_19);
        }
      else
        {
          t = p_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_2);
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_20;
          c_20 = t;
          {
            ATerm d_20 = t;
            int e_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_17;
                t = get_config_0(t);
                LocalPopChoice(e_20);
              }
            else
              {
                t = d_20;
                t = fetch_1(t, Help_0);
              }
          }
          t = c_20;
          {
            t = system_usage_0(t);
            {
              t = term_v_11;
              t = exit_0(t);
            }
          }
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm h_20 = t;
            int i_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_2 (ATerm t)
                {
                  ATerm s_2 (ATerm t)
                  {
                    ATerm a_35 = NULL;
                    a_35 = t;
                    if(((z_34 != NULL) && (z_34 != a_35)))
                      _fail(a_35);
                    else
                      z_34 = a_35;
                    return(t);
                  }
                  t = Undefined_1(t, s_2);
                  return(t);
                }
                t = fetch_1(t, r_2);
                {
                  ATerm w_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_34)), term_j_20);
                    return(t);
                  }
                  t = say_1(t, w_2);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(i_20);
              }
            else
              {
                t = h_20;
                {
                }
              }
          }
        }
      {
        ATerm l_20;
        l_20 = t;
        {
          t = term_q_16;
          t = table_destroy_0(t);
        }
        t = l_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm))
{
  t = parse_options_1(t, u_98);
  {
    t = store_options_0(t);
    {
      t = w_98(t);
      {
        ATerm m_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_98);
            LocalPopChoice(s_20);
          }
        else
          {
            t = m_20;
            {
              ATerm t_20 = t;
              int u_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_98(t);
                  t = report_success_0(t);
                  LocalPopChoice(u_20);
                }
              else
                {
                  t = t_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_99(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_99);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, x_2, n_99, o_99, y_2);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm h_99 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm f_3 (ATerm t)
    {
      ATerm y_20;
      y_20 = t;
      {
        ATerm j_35 = NULL;
        ATerm k_35 = NULL;
        t = term_a_15;
        {
          t = get_config_0(t);
          {
            k_35 = t;
            if(((j_35 != NULL) && (j_35 != k_35)))
              _fail(k_35);
            else
              j_35 = k_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(j_35)));
          t = printnl_0(t);
        }
      }
      t = y_20;
      return(t);
    }
    t = if_verbose2_1(t, f_3);
    return(t);
  }
  t = iowrap_4(t, f_99, g_99, h_99, c_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_99 (ATerm), ATerm e_99 (ATerm))
{
  t = iowrap_3(t, d_99, e_99, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    t = _2(t, _id, a_99);
    return(t);
  }
  t = iowrap_2(t, g_3, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm i_3 (ATerm t)
    {
      t = repeat_2(t, Canon_0, _id);
      return(t);
    }
    ATerm j_3 (ATerm t)
    {
      t = repeat_2(t, Canon_0, _id);
      return(t);
    }
    t = downup2_2(t, i_3, j_3);
    return(t);
  }
  t = iowrap_1(t, h_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
