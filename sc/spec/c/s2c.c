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
Symbol sym_Match_2;
Symbol sym_TraceAll_0;
Symbol sym_Trace_1;
Symbol sym_Include_1;
Symbol sym_InitCachedTerms_0;
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
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Match_2 = ATmakeSymbol("Match", 2, ATfalse);
  ATprotectSymbol(sym_Match_2);
  sym_TraceAll_0 = ATmakeSymbol("TraceAll", 0, ATfalse);
  ATprotectSymbol(sym_TraceAll_0);
  sym_Trace_1 = ATmakeSymbol("Trace", 1, ATfalse);
  ATprotectSymbol(sym_Trace_1);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_InitCachedTerms_0 = ATmakeSymbol("InitCachedTerms", 0, ATfalse);
  ATprotectSymbol(sym_InitCachedTerms_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
ATerm term_j_38;
ATerm term_z_37;
ATerm term_r_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_i_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_j_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_w_32;
ATerm term_c_31;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_a_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_e_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_a_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_w_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_k_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_j_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_n_10;
ATerm term_a_8;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_p_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_b_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_u_5;
ATerm term_t_5;
void init_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_Dummy_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_6);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym__2, term_b_6, term_g_6);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_6);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Id_1, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_7, (ATerm) ATempty);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Id_1, term_n_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_TypeId_1, term_s_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_t_7, (ATerm) ATempty);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_u_7, term_a_8);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Id_1, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Id_1, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Id_1, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Id_1, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_IntConst_1, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Id_1, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Id_1, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Id_1, term_d_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_u_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Id_1, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Id_1, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, term_b_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Id_1, term_l_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Id_1, term_y_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Id_1, term_d_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Id_1, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Id_1, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Id_1, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Id_1, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_17, (ATerm) ATempty);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_r_17, term_a_8);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Id_1, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Id_1, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_18, (ATerm) ATempty);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_d_18, term_a_8);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Id_1, term_i_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_18, (ATerm) ATempty);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_p_18, term_a_8);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Id_1, term_l_14);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Id_1, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Id_1, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Id_1, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_19, (ATerm) ATempty);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_h_19, term_a_8);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Id_1, term_p_19);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Id_1, term_f_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Id_1, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Id_1, term_l_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_i_17);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Id_1, term_r_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_20, (ATerm) ATempty);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Equal_2, term_x_20, term_y_14);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Id_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, term_i_17);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Id_1, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATempty);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_r_21, term_y_14);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_21, (ATerm) ATempty);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Id_1, term_f_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Id_1, term_m_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_v_18);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Return_1, term_i_17);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Id_1, term_s_24);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_i_17, term_a_8);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_7, term_r_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Id_1, term_f_26);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Id_1, term_h_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_7, (ATerm) ATempty);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_m_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Id_1, term_z_26);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_u_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_27, (ATerm) ATempty);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_28, (ATerm) ATempty);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Some_1, term_r_28);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_7, term_s_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Op_2, term_t_29, (ATerm) ATempty);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_w_25);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_e_33, term_j_16);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_16);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym__2, term_j_34, term_w_25);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_w_34, term_w_25);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym__2, term_u_36, term_v_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_w_25);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__3, term_u_36, term_v_36, (ATerm) ATempty);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm z_112 (ATerm), ATerm a_113 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm h_94 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm r_91 (ATerm), ATerm s_91 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_91 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm p_77 (ATerm));
ATerm Real_1 (ATerm, ATerm w_2 (ATerm));
ATerm Str_1 (ATerm, ATerm v_2 (ATerm));
ATerm Int_1 (ATerm, ATerm u_2 (ATerm));
ATerm Anno_2 (ATerm, ATerm s_2 (ATerm), ATerm t_2 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm u_74 (ATerm), ATerm v_74 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm Var_1 (ATerm, ATerm r_2 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm w_0 (ATerm), ATerm a_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm y_105 (ATerm));
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm c_81 (ATerm));
ATerm FunCall_2 (ATerm, ATerm g_84 (ATerm), ATerm h_84 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm s_92 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm r_92 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm u_108 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm e_118 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm q_0 (ATerm));
ATerm escape_1 (ATerm, ATerm q_108 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm z_117 (ATerm));
ATerm restore_always_2 (ATerm, ATerm n_91 (ATerm), ATerm o_91 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm y_117 (ATerm));
ATerm scope_2 (ATerm, ATerm a_118 (ATerm), ATerm b_118 (ATerm));
ATerm assert_1 (ATerm, ATerm c_118 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_99 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_109 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm s_111 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm b_71 (ATerm), ATerm c_71 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_110 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_106 (ATerm), ATerm y_106 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_105 (ATerm), ATerm j_105 (ATerm));
ATerm crush_2 (ATerm, ATerm g_104 (ATerm), ATerm h_104 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_111 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_110 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_113 (ATerm));
ATerm map_1 (ATerm, ATerm u_98 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_113 (ATerm));
ATerm Program_1 (ATerm, ATerm s_78 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_109 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_99 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_112 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_91 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_113 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_72 (ATerm), ATerm l_72 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_113 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_113 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm u_110 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_111 (ATerm), ATerm b_111 (ATerm));
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
        ATerm x_5 = NULL;
        ATerm c_6 = NULL,e_6 = NULL;
        ATerm d_6 = NULL;
        t = not_null(v_4);
        {
          ATerm p_5 = t;
          int q_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(q_5);
            }
          else
            {
              t = p_5;
              t = (ATerm) ATempty;
            }
          {
            d_6 = t;
            if(((c_6 != NULL) && (c_6 != d_6)))
              _fail(d_6);
            else
              c_6 = d_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), not_null(j_5));
          {
            ATerm r_5 = t;
            int s_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(s_5);
              }
            else
              {
                t = r_5;
                t = conc_more_lists_0(t);
              }
            {
              e_6 = t;
              if(((x_5 != NULL) && (x_5 != e_6)))
                _fail(e_6);
              else
                x_5 = e_6;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_5, not_null(v_4), not_null(x_5));
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
ATerm Option_2 (ATerm t, ATerm z_112 (ATerm), ATerm a_113 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = term_u_5;
    return(t);
  }
  t = Option_3(t, z_112, a_113, c_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm v_5 = t;
  int w_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_0 (ATerm t)
      {
        ATerm q_6 = NULL;
        q_6 = t;
        j_6 :
        if(!(match_string(q_6, "--trace-all   trace all strategies")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        t = term_y_5;
        {
          ATerm t_0 (ATerm t)
          {
            t = term_z_5;
            return(t);
          }
          t = debug_1(t, t_0);
          {
            ATerm a_6;
            a_6 = t;
            {
              t = term_h_6;
              {
                ATerm u_0 (ATerm t)
                {
                  t = term_i_6;
                  return(t);
                }
                t = assert_1(t, u_0);
              }
            }
            t = a_6;
          }
        }
        return(t);
      }
      t = Option_2(t, e_0, r_0);
      LocalPopChoice(w_5);
    }
  else
    {
      t = v_5;
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              ATerm r_6 = NULL;
              r_6 = t;
              k_6 :
              if(!(match_string(r_6, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_0 (ATerm t)
            {
              ATerm s_6 = NULL;
              s_6 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_6), term_p_6);
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = term_t_6;
                    return(t);
                  }
                  t = assert_1(t, z_0);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(s_6));
              }
              return(t);
            }
            ATerm y_0 (ATerm t)
            {
              t = term_z_6;
              return(t);
            }
            t = ArgOption_3(t, v_0, x_0, y_0);
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
            {
              ATerm b_1 (ATerm t)
              {
                ATerm u_6 = NULL;
                u_6 = t;
                n_6 :
                if(!(match_string(u_6, "--C-include")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_1 (ATerm t)
              {
                ATerm x_6 = NULL;
                ATerm a_7;
                a_7 = t;
                {
                  ATerm v_6 = NULL;
                  ATerm w_6 = NULL;
                  w_6 = t;
                  if(((v_6 != NULL) && (v_6 != w_6)))
                    _fail(w_6);
                  else
                    v_6 = w_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATempty, not_null(v_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = a_7;
                {
                  ATerm y_6 = NULL;
                  y_6 = t;
                  if(((x_6 != NULL) && (x_6 != y_6)))
                    _fail(y_6);
                  else
                    x_6 = y_6;
                  t = (ATerm) ATmakeAppl(sym_Include_1, not_null(x_6));
                }
                return(t);
              }
              ATerm d_1 (ATerm t)
              {
                t = term_c_7;
                return(t);
              }
              t = ArgOption_3(t, b_1, c_1, d_1);
            }
          }
      }
    }
  return(t);
}
ATerm InitTermId_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym__3))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      h_7 = ATgetArgument(e_7, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(g_7))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_7)), term_i_7, not_null(h_7))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm o_7 = NULL;
  ATerm q_7 = NULL;
  o_7 = t;
  {
    ATerm r_7 = NULL;
    t = not_null(o_7);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          ATerm e_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = reverse_acc_2(t, _id, e_1);
          {
            r_7 = t;
            if(((q_7 != NULL) && (q_7 != r_7)))
              _fail(r_7);
            else
              q_7 = r_7;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_m_7, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_7, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_m_7)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(q_7)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym__3))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      z_7 = ATgetArgument(w_7, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_7)), term_a_8)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm h_8 = NULL;
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      t = (ATerm) ATempty;
    }
  {
    ATerm i_8 = NULL,k_8 = NULL,m_8 = NULL;
    ATerm d_8;
    d_8 = t;
    {
      ATerm j_8 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        j_8 = t;
        if(((i_8 != NULL) && (i_8 != j_8)))
          _fail(j_8);
        else
          i_8 = j_8;
      }
    }
    t = d_8;
    {
      ATerm l_8 = NULL;
      t = InitTermIds_0(t);
      {
        l_8 = t;
        if(((k_8 != NULL) && (k_8 != l_8)))
          _fail(l_8);
        else
          k_8 = l_8;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_8), (ATerm) ATinsert(ATempty, not_null(k_8)));
        {
          ATerm e_8 = t;
          int f_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(f_8);
            }
          else
            {
              t = e_8;
              t = conc_more_lists_0(t);
            }
          {
            m_8 = t;
            if(((h_8 != NULL) && (h_8 != m_8)))
              _fail(m_8);
            else
              h_8 = m_8;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(h_8));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm h_94 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    ATerm g_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_94(t);
        LocalPopChoice(n_8);
      }
    else
      {
        t = g_8;
        t = _one(t, q_8);
      }
    return(t);
  }
  t = q_8(t);
  return(t);
}
ATerm Csimplify_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  ATerm b_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(c_10)), not_null(w_9));
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(c_10), not_null(d_10));
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(d_10));
    {
      ATerm o_8 = t;
      int p_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = conc_two_lists_0(t);
          LocalPopChoice(p_8);
        }
      else
        {
          t = o_8;
          t = conc_more_lists_0(t);
        }
    }
    return(t);
  }
  ATerm e_11 (ATerm t)
  {
    ATerm r_10 = NULL;
    ATerm s_10 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), not_null(f_10));
    {
      ATerm r_8 = t;
      int s_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = conc_two_lists_0(t);
          LocalPopChoice(s_8);
        }
      else
        {
          t = r_8;
          t = conc_more_lists_0(t);
        }
      {
        s_10 = t;
        if(((r_10 != NULL) && (r_10 != s_10)))
          _fail(s_10);
        else
          r_10 = s_10;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(r_10), not_null(g_10));
    return(t);
  }
  ATerm f_11 (ATerm t)
  {
    ATerm x_10 = NULL,z_10 = NULL;
    ATerm t_8;
    t_8 = t;
    {
      ATerm y_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), not_null(f_10));
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = conc_two_lists_0(t);
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            t = conc_more_lists_0(t);
          }
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
      }
    }
    t = t_8;
    {
      ATerm a_11 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_10), not_null(h_10));
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = conc_two_lists_0(t);
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            t = conc_more_lists_0(t);
          }
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(x_10), not_null(z_10));
    }
    return(t);
  }
  b_10 = t;
  z_8 :
  if(match_cons(b_10, sym_IfElse_3))
    {
      c_10 = ATgetArgument(b_10, 0);
      d_10 = ATgetArgument(b_10, 1);
      w_9 = ATgetArgument(b_10, 2);
      a_9 :
      if(match_cons(w_9, sym_Compound_2))
        {
          x_9 = ATgetArgument(w_9, 0);
          y_9 = ATgetArgument(w_9, 1);
          b_9 :
          if(((ATgetType(y_9) == AT_LIST) && ATisEmpty(y_9)))
            {
              c_9 :
              if(((ATgetType(x_9) == AT_LIST) && ATisEmpty(x_9)))
                {
                  d_9 :
                  if(match_cons(d_10, sym_Compound_2))
                    {
                      e_10 = ATgetArgument(d_10, 0);
                      h_10 = ATgetArgument(d_10, 1);
                      e_9 :
                      if(((ATgetType(h_10) == AT_LIST) && ATisEmpty(h_10)))
                        {
                          f_9 :
                          if(((ATgetType(e_10) == AT_LIST) && ATisEmpty(e_10)))
                            {
                              {
                                ATerm y_8 = t;
                                int i_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = b_11(t);
                                    LocalPopChoice(i_10);
                                  }
                                else
                                  {
                                    t = y_8;
                                    t = c_11(t);
                                  }
                              }
                            }
                          else
                            {
                              t = c_11(t);
                            }
                        }
                      else
                        {
                          g_9 :
                          t = c_11(t);
                        }
                    }
                  else
                    {
                      t = c_11(t);
                    }
                }
              else
                {
                  h_9 :
                  if(match_cons(d_10, sym_Compound_2))
                    {
                      e_10 = ATgetArgument(d_10, 0);
                      h_10 = ATgetArgument(d_10, 1);
                      i_9 :
                      if(((ATgetType(e_10) == AT_LIST) && ATisEmpty(e_10)))
                        {
                          j_9 :
                          if(((ATgetType(h_10) == AT_LIST) && ATisEmpty(h_10)))
                            {
                              t = b_11(t);
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
              l_9 :
              if(match_cons(d_10, sym_Compound_2))
                {
                  e_10 = ATgetArgument(d_10, 0);
                  h_10 = ATgetArgument(d_10, 1);
                  m_9 :
                  if(((ATgetType(e_10) == AT_LIST) && ATisEmpty(e_10)))
                    {
                      n_9 :
                      if(((ATgetType(h_10) == AT_LIST) && ATisEmpty(h_10)))
                        {
                          t = b_11(t);
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
          o_9 :
          if(match_cons(d_10, sym_Compound_2))
            {
              e_10 = ATgetArgument(d_10, 0);
              h_10 = ATgetArgument(d_10, 1);
              p_9 :
              if(((ATgetType(e_10) == AT_LIST) && ATisEmpty(e_10)))
                {
                  q_9 :
                  if(((ATgetType(h_10) == AT_LIST) && ATisEmpty(h_10)))
                    {
                      t = b_11(t);
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
      if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
        {
          c_10 = ATgetFirst((ATermList) b_10);
          d_10 = (ATerm) ATgetNext((ATermList) b_10);
          r_9 :
          if(match_cons(c_10, sym_Compound_2))
            {
              z_9 = ATgetArgument(c_10, 0);
              a_10 = ATgetArgument(c_10, 1);
              s_9 :
              if(((ATgetType(z_9) == AT_LIST) && ATisEmpty(z_9)))
                {
                  t = d_11(t);
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
          if(match_cons(b_10, sym_Compound_2))
            {
              c_10 = ATgetArgument(b_10, 0);
              d_10 = ATgetArgument(b_10, 1);
              t_9 :
              if(((ATgetType(d_10) == AT_LIST) && !(ATisEmpty(d_10))))
                {
                  e_10 = ATgetFirst((ATermList) d_10);
                  h_10 = (ATerm) ATgetNext((ATermList) d_10);
                  u_9 :
                  if(match_cons(e_10, sym_Compound_2))
                    {
                      f_10 = ATgetArgument(e_10, 0);
                      g_10 = ATgetArgument(e_10, 1);
                      v_9 :
                      if(((ATgetType(h_10) == AT_LIST) && ATisEmpty(h_10)))
                        {
                          {
                            ATerm j_10 = t;
                            int k_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = e_11(t);
                                LocalPopChoice(k_10);
                              }
                            else
                              {
                                t = j_10;
                                t = f_11(t);
                              }
                          }
                        }
                      else
                        {
                          t = f_11(t);
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
ATerm repeat_2 (ATerm t, ATerm r_91 (ATerm), ATerm s_91 (ATerm))
{
  ATerm j_11 (ATerm t)
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_91(t);
        t = j_11(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = s_91(t);
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_91 (ATerm))
{
  t = repeat_2(t, u_91, _id);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm r_11 = NULL;
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  r_11 = t;
  {
    ATerm w_11 = NULL;
    ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
    t = not_null(r_11);
    {
      w_11 = t;
      {
        t = SSL_explode_term(not_null(w_11));
        {
          y_11 = t;
          n_11 :
          if(match_cons(y_11, sym__2))
            {
              z_11 = ATgetArgument(y_11, 0);
              a_12 = ATgetArgument(y_11, 1);
              o_11 :
              if(match_string(z_11, ""))
                {
                  p_11 :
                  if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
                    {
                      b_12 = ATgetFirst((ATermList) a_12);
                      c_12 = (ATerm) ATgetNext((ATermList) a_12);
                      q_11 :
                      if(((ATgetType(c_12) == AT_LIST) && !(ATisEmpty(c_12))))
                        {
                          d_12 = ATgetFirst((ATermList) c_12);
                          e_12 = (ATerm) ATgetNext((ATermList) c_12);
                          {
                            if(((t_11 != NULL) && (t_11 != b_12)))
                              _fail(b_12);
                            else
                              t_11 = b_12;
                            {
                              if(((v_11 != NULL) && (v_11 != d_12)))
                                _fail(d_12);
                              else
                                v_11 = d_12;
                              if(((u_11 != NULL) && (u_11 != e_12)))
                                _fail(e_12);
                              else
                                u_11 = e_12;
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
    t = not_null(v_11);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm m_12 = NULL;
  ATerm o_12 = NULL;
  m_12 = t;
  {
    ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
    t = term_b_6;
    {
      ATerm f_1 (ATerm t)
      {
        t = term_n_10;
        return(t);
      }
      t = rewrite_1(t, f_1);
      {
        p_12 = t;
        k_12 :
        if(match_cons(p_12, sym_Defined_2))
          {
            q_12 = ATgetArgument(p_12, 0);
            r_12 = ATgetArgument(p_12, 1);
            l_12 :
            if(match_string(q_12, "h_0"))
              {
                if(((o_12 != NULL) && (o_12 != r_12)))
                  _fail(r_12);
                else
                  o_12 = r_12;
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
    t = not_null(o_12);
  }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm z_12 = NULL,a_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym_BuildDefault_1))
    {
      a_13 = ATgetArgument(z_12, 0);
      {
        ATerm d_13 = NULL,f_13 = NULL;
        ATerm e_13 = NULL;
        t = SSLgetAnnotations(not_null(z_12));
        {
          e_13 = t;
          if(((d_13 != NULL) && (d_13 != e_13)))
            _fail(e_13);
          else
            d_13 = e_13;
        }
        {
          t = not_null(a_13);
          {
            ATerm h_13 = NULL;
            t = p_77(t);
            {
              f_13 = t;
              {
                ATerm i_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(f_13)), not_null(d_13));
                {
                  i_13 = t;
                  if(((h_13 != NULL) && (h_13 != i_13)))
                    _fail(i_13);
                  else
                    h_13 = i_13;
                }
                t = not_null(h_13);
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
ATerm Real_1 (ATerm t, ATerm w_2 (ATerm))
{
  ATerm w_13 = NULL,x_13 = NULL;
  w_13 = t;
  v_13 :
  if(match_cons(w_13, sym_Real_1))
    {
      x_13 = ATgetArgument(w_13, 0);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_14 = NULL,c_14 = NULL;
            ATerm b_14 = NULL;
            t = SSLgetAnnotations(not_null(w_13));
            {
              b_14 = t;
              if(((a_14 != NULL) && (a_14 != b_14)))
                _fail(b_14);
              else
                a_14 = b_14;
            }
            {
              t = not_null(x_13);
              {
                ATerm e_14 = NULL;
                t = w_2(t);
                {
                  c_14 = t;
                  {
                    ATerm f_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(c_14)), not_null(a_14));
                    {
                      f_14 = t;
                      if(((e_14 != NULL) && (e_14 != f_14)))
                        _fail(f_14);
                      else
                        e_14 = f_14;
                    }
                    t = not_null(e_14);
                  }
                }
              }
            }
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm i_14 = NULL,k_14 = NULL;
              ATerm j_14 = NULL;
              t = SSLgetAnnotations(not_null(w_13));
              {
                j_14 = t;
                if(((i_14 != NULL) && (i_14 != j_14)))
                  _fail(j_14);
                else
                  i_14 = j_14;
              }
              {
                t = not_null(x_13);
                {
                  ATerm m_14 = NULL;
                  t = w_2(t);
                  {
                    k_14 = t;
                    {
                      ATerm n_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(k_14)), not_null(i_14));
                      {
                        n_14 = t;
                        if(((m_14 != NULL) && (m_14 != n_14)))
                          _fail(n_14);
                        else
                          m_14 = n_14;
                      }
                      t = not_null(m_14);
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
ATerm Str_1 (ATerm t, ATerm v_2 (ATerm))
{
  ATerm f_15 = NULL,g_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym_Str_1))
    {
      g_15 = ATgetArgument(f_15, 0);
      {
        ATerm q_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_15 = NULL,l_15 = NULL;
            ATerm k_15 = NULL;
            t = SSLgetAnnotations(not_null(f_15));
            {
              k_15 = t;
              if(((j_15 != NULL) && (j_15 != k_15)))
                _fail(k_15);
              else
                j_15 = k_15;
            }
            {
              t = not_null(g_15);
              {
                ATerm n_15 = NULL;
                t = v_2(t);
                {
                  l_15 = t;
                  {
                    ATerm o_15 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(l_15)), not_null(j_15));
                    {
                      o_15 = t;
                      if(((n_15 != NULL) && (n_15 != o_15)))
                        _fail(o_15);
                      else
                        n_15 = o_15;
                    }
                    t = not_null(n_15);
                  }
                }
              }
            }
            LocalPopChoice(t_10);
          }
        else
          {
            t = q_10;
            {
              ATerm r_15 = NULL,t_15 = NULL;
              ATerm s_15 = NULL;
              t = SSLgetAnnotations(not_null(f_15));
              {
                s_15 = t;
                if(((r_15 != NULL) && (r_15 != s_15)))
                  _fail(s_15);
                else
                  r_15 = s_15;
              }
              {
                t = not_null(g_15);
                {
                  ATerm v_15 = NULL;
                  t = v_2(t);
                  {
                    t_15 = t;
                    {
                      ATerm w_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(t_15)), not_null(r_15));
                      {
                        w_15 = t;
                        if(((v_15 != NULL) && (v_15 != w_15)))
                          _fail(w_15);
                        else
                          v_15 = w_15;
                      }
                      t = not_null(v_15);
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
ATerm Int_1 (ATerm t, ATerm u_2 (ATerm))
{
  ATerm o_16 = NULL,p_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym_Int_1))
    {
      p_16 = ATgetArgument(o_16, 0);
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_16 = NULL,u_16 = NULL;
            ATerm t_16 = NULL;
            t = SSLgetAnnotations(not_null(o_16));
            {
              t_16 = t;
              if(((s_16 != NULL) && (s_16 != t_16)))
                _fail(t_16);
              else
                s_16 = t_16;
            }
            {
              t = not_null(p_16);
              {
                ATerm w_16 = NULL;
                t = u_2(t);
                {
                  u_16 = t;
                  {
                    ATerm x_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(u_16)), not_null(s_16));
                    {
                      x_16 = t;
                      if(((w_16 != NULL) && (w_16 != x_16)))
                        _fail(x_16);
                      else
                        w_16 = x_16;
                    }
                    t = not_null(w_16);
                  }
                }
              }
            }
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            {
              ATerm a_17 = NULL,c_17 = NULL;
              ATerm b_17 = NULL;
              t = SSLgetAnnotations(not_null(o_16));
              {
                b_17 = t;
                if(((a_17 != NULL) && (a_17 != b_17)))
                  _fail(b_17);
                else
                  a_17 = b_17;
              }
              {
                t = not_null(p_16);
                {
                  ATerm e_17 = NULL;
                  t = u_2(t);
                  {
                    c_17 = t;
                    {
                      ATerm f_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(c_17)), not_null(a_17));
                      {
                        f_17 = t;
                        if(((e_17 != NULL) && (e_17 != f_17)))
                          _fail(f_17);
                        else
                          e_17 = f_17;
                      }
                      t = not_null(e_17);
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
ATerm Anno_2 (ATerm t, ATerm s_2 (ATerm), ATerm t_2 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_Anno_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        ATerm w_10 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_18 = NULL,h_18 = NULL;
            ATerm g_18 = NULL;
            t = SSLgetAnnotations(not_null(z_17));
            {
              g_18 = t;
              if(((f_18 != NULL) && (f_18 != g_18)))
                _fail(g_18);
              else
                f_18 = g_18;
            }
            {
              t = not_null(a_18);
              {
                ATerm j_18 = NULL;
                t = s_2(t);
                {
                  h_18 = t;
                  {
                    t = not_null(b_18);
                    {
                      ATerm l_18 = NULL;
                      t = t_2(t);
                      {
                        j_18 = t;
                        {
                          ATerm m_18 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(h_18), not_null(j_18)), not_null(f_18));
                          {
                            m_18 = t;
                            if(((l_18 != NULL) && (l_18 != m_18)))
                              _fail(m_18);
                            else
                              l_18 = m_18;
                          }
                          t = not_null(l_18);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(g_11);
          }
        else
          {
            t = w_10;
            {
              ATerm q_18 = NULL,s_18 = NULL;
              ATerm r_18 = NULL;
              t = SSLgetAnnotations(not_null(z_17));
              {
                r_18 = t;
                if(((q_18 != NULL) && (q_18 != r_18)))
                  _fail(r_18);
                else
                  q_18 = r_18;
              }
              {
                t = not_null(a_18);
                {
                  ATerm u_18 = NULL;
                  t = s_2(t);
                  {
                    s_18 = t;
                    {
                      t = not_null(b_18);
                      {
                        ATerm w_18 = NULL;
                        t = t_2(t);
                        {
                          u_18 = t;
                          {
                            ATerm x_18 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(s_18), not_null(u_18)), not_null(q_18));
                            {
                              x_18 = t;
                              if(((w_18 != NULL) && (w_18 != x_18)))
                                _fail(x_18);
                              else
                                w_18 = x_18;
                            }
                            t = not_null(w_18);
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
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        ATerm l_19 = NULL;
        l_19 = t;
        i_19 :
        if(!(match_string(l_19, "Nil")))
          {
            _fail(t);
          }
        return(t);
      }
      t = Op_2(t, g_1, Nil_0);
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm m_19 = NULL;
              m_19 = t;
              j_19 :
              if(!(match_string(m_19, "Cons")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              ATerm j_1 (ATerm t)
              {
                t = Cons_2(t, proper_list_0, Nil_0);
                return(t);
              }
              t = Cons_2(t, _id, j_1);
              return(t);
            }
            t = Op_2(t, h_1, i_1);
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm k_1 (ATerm t)
              {
                ATerm m_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_19 = NULL;
                    n_19 = t;
                    k_19 :
                    if(!(match_string(n_19, "Nil")))
                      {
                        if(!(match_string(n_19, "Cons")))
                          {
                            _fail(t);
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_11;
                  }
                return(t);
              }
              t = Op_2(t, k_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm u_74 (ATerm), ATerm v_74 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym_Op_2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      {
        ATerm a_20 = NULL,c_20 = NULL;
        ATerm b_20 = NULL;
        t = SSLgetAnnotations(not_null(u_19));
        {
          b_20 = t;
          if(((a_20 != NULL) && (a_20 != b_20)))
            _fail(b_20);
          else
            a_20 = b_20;
        }
        {
          t = not_null(v_19);
          {
            ATerm e_20 = NULL;
            t = u_74(t);
            {
              c_20 = t;
              {
                t = not_null(w_19);
                {
                  ATerm g_20 = NULL;
                  t = v_74(t);
                  {
                    e_20 = t;
                    {
                      ATerm h_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(c_20), not_null(e_20)), not_null(a_20));
                      {
                        h_20 = t;
                        if(((g_20 != NULL) && (g_20 != h_20)))
                          _fail(h_20);
                        else
                          g_20 = h_20;
                      }
                      t = not_null(g_20);
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
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t_20 :
  if(match_cons(u_20, sym__2))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      {
        ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
        ATerm c_21 = NULL;
        t = not_null(v_20);
        {
          ATerm s_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_1 (ATerm t)
              {
                t = map_1(t, Cache_0);
                return(t);
              }
              t = Op_2(t, _id, l_1);
              t = proper_list_0(t);
              LocalPopChoice(x_11);
            }
          else
            {
              t = s_11;
              {
                ATerm f_12 = t;
                int g_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Anno_2(t, Cache_0, Cache_0);
                    LocalPopChoice(g_12);
                  }
                else
                  {
                    t = f_12;
                    {
                      ATerm h_12 = t;
                      int i_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Int_1(t, _id);
                          LocalPopChoice(i_12);
                        }
                      else
                        {
                          t = h_12;
                          {
                            ATerm j_12 = t;
                            int n_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Str_1(t, _id);
                                LocalPopChoice(n_12);
                              }
                            else
                              {
                                t = j_12;
                                {
                                  ATerm s_12 = t;
                                  int t_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Real_1(t, _id);
                                      LocalPopChoice(t_12);
                                    }
                                  else
                                    {
                                      t = s_12;
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
            ATerm d_21 = NULL,f_21 = NULL;
            t = new_0(t);
            {
              c_21 = t;
              {
                if(((z_20 != NULL) && (z_20 != c_21)))
                  _fail(c_21);
                else
                  z_20 = c_21;
                {
                  ATerm e_21 = NULL;
                  e_21 = t;
                  if(((d_21 != NULL) && (d_21 != e_21)))
                    _fail(e_21);
                  else
                    d_21 = e_21;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(d_21));
                    {
                      ATerm g_21 = NULL,i_21 = NULL;
                      t = conc_strings_0(t);
                      {
                        f_21 = t;
                        {
                          if(((a_21 != NULL) && (a_21 != f_21)))
                            _fail(f_21);
                          else
                            a_21 = f_21;
                          {
                            ATerm v_12;
                            v_12 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), (ATerm) ATmakeAppl(sym_Defined_2, term_w_12, not_null(a_21)));
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_x_12;
                                  return(t);
                                }
                                t = assert_1(t, m_1);
                              }
                            }
                            t = v_12;
                            {
                              ATerm h_21 = NULL;
                              ATerm b_13 = t;
                              int c_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  LocalPopChoice(c_13);
                                }
                              else
                                {
                                  t = b_13;
                                  t = (ATerm) ATempty;
                                }
                              {
                                h_21 = t;
                                if(((g_21 != NULL) && (g_21 != h_21)))
                                  _fail(h_21);
                                else
                                  g_21 = h_21;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(g_21)), (ATerm) ATmakeAppl(sym__3, not_null(z_20), not_null(a_21), not_null(w_20)));
                                {
                                  i_21 = t;
                                  {
                                    if(((b_21 != NULL) && (b_21 != i_21)))
                                      _fail(i_21);
                                    else
                                      b_21 = i_21;
                                    {
                                      ATerm g_13;
                                      g_13 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATmakeAppl(sym_Defined_2, term_j_13, not_null(b_21)));
                                        {
                                          ATerm n_1 (ATerm t)
                                          {
                                            t = term_n_10;
                                            return(t);
                                          }
                                          t = assert_1(t, n_1);
                                        }
                                      }
                                      t = g_13;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(a_21));
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
  ATerm x_21 = NULL;
  x_21 = t;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_22 = NULL;
        ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
        t = not_null(x_21);
        {
          ATerm o_1 (ATerm t)
          {
            t = term_x_12;
            return(t);
          }
          t = rewrite_1(t, o_1);
          {
            b_22 = t;
            s_21 :
            if(match_cons(b_22, sym_Defined_2))
              {
                c_22 = ATgetArgument(b_22, 0);
                d_22 = ATgetArgument(b_22, 1);
                t_21 :
                if(match_string(c_22, "f_0"))
                  {
                    if(((a_22 != NULL) && (a_22 != d_22)))
                      _fail(d_22);
                    else
                      a_22 = d_22;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(a_22));
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          ATerm g_22 = NULL;
          ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
          t = not_null(x_21);
          {
            ATerm p_1 (ATerm t)
            {
              t = term_x_12;
              return(t);
            }
            t = rewrite_1(t, p_1);
            {
              h_22 = t;
              v_21 :
              if(match_cons(h_22, sym_Defined_2))
                {
                  i_22 = ATgetArgument(h_22, 0);
                  j_22 = ATgetArgument(h_22, 1);
                  w_21 :
                  if(match_string(i_22, "b_0"))
                    {
                      if(((g_22 != NULL) && (g_22 != j_22)))
                        _fail(j_22);
                      else
                        g_22 = j_22;
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
          t = not_null(g_22);
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm q_22 = NULL,s_22 = NULL;
        ATerm o_13;
        o_13 = t;
        {
          ATerm r_22 = NULL;
          r_22 = t;
          if(((q_22 != NULL) && (q_22 != r_22)))
            _fail(r_22);
          else
            q_22 = r_22;
        }
        t = o_13;
        {
          ATerm t_22 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm p_13 = t;
            int q_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = ConstructList_0(t);
                LocalPopChoice(q_13);
              }
            else
              {
                t = p_13;
                {
                  ATerm r_13 = t;
                  int s_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ConstructTerm_0(t);
                      LocalPopChoice(s_13);
                    }
                  else
                    {
                      t = r_13;
                      {
                      }
                    }
                }
              }
            {
              t_22 = t;
              if(((s_22 != NULL) && (s_22 != t_22)))
                _fail(t_22);
              else
                s_22 = t_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_22), not_null(s_22));
            {
              ATerm t_13 = t;
              int u_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  LocalPopChoice(u_13);
                }
              else
                {
                  t = t_13;
                  t = Snd_0(t);
                }
            }
          }
        }
      }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm r_2 (ATerm))
{
  ATerm g_23 = NULL,h_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym_Var_1))
    {
      h_23 = ATgetArgument(g_23, 0);
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_23 = NULL,m_23 = NULL;
            ATerm l_23 = NULL;
            t = SSLgetAnnotations(not_null(g_23));
            {
              l_23 = t;
              if(((k_23 != NULL) && (k_23 != l_23)))
                _fail(l_23);
              else
                k_23 = l_23;
            }
            {
              t = not_null(h_23);
              {
                ATerm o_23 = NULL;
                t = r_2(t);
                {
                  m_23 = t;
                  {
                    ATerm p_23 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_23)), not_null(k_23));
                    {
                      p_23 = t;
                      if(((o_23 != NULL) && (o_23 != p_23)))
                        _fail(p_23);
                      else
                        o_23 = p_23;
                    }
                    t = not_null(o_23);
                  }
                }
              }
            }
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            {
              ATerm s_23 = NULL,u_23 = NULL;
              ATerm t_23 = NULL;
              t = SSLgetAnnotations(not_null(g_23));
              {
                t_23 = t;
                if(((s_23 != NULL) && (s_23 != t_23)))
                  _fail(t_23);
                else
                  s_23 = t_23;
              }
              {
                t = not_null(h_23);
                {
                  ATerm w_23 = NULL;
                  t = r_2(t);
                  {
                    u_23 = t;
                    {
                      ATerm x_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_23)), not_null(s_23));
                      {
                        x_23 = t;
                        if(((w_23 != NULL) && (w_23 != x_23)))
                          _fail(x_23);
                        else
                          w_23 = x_23;
                      }
                      t = not_null(w_23);
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
ATerm real_to_string_0 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  t = SSL_real_to_string(not_null(h_24));
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
  n_24 = t;
  l_24 :
  if(match_cons(n_24, sym__2))
    {
      o_24 = ATgetArgument(n_24, 0);
      p_24 = ATgetArgument(n_24, 1);
      m_24 :
      if(((ATgetType(o_24) == AT_LIST) && ATisEmpty(o_24)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(p_24));
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
ATerm Cons_T_2 (ATerm t, ATerm w_0 (ATerm), ATerm a_1 (ATerm))
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  z_24 = t;
  x_24 :
  if(match_cons(z_24, sym__2))
    {
      a_25 = ATgetArgument(z_24, 0);
      d_25 = ATgetArgument(z_24, 1);
      y_24 :
      if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
        {
          b_25 = ATgetFirst((ATermList) a_25);
          c_25 = (ATerm) ATgetNext((ATermList) a_25);
          {
            ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
            ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_25), not_null(d_25));
            {
              t = w_0(t);
              {
                l_25 = t;
                w_24 :
                if(match_cons(l_25, sym__2))
                  {
                    m_25 = ATgetArgument(l_25, 0);
                    n_25 = ATgetArgument(l_25, 1);
                    {
                      ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
                      if(((j_25 != NULL) && (j_25 != m_25)))
                        _fail(m_25);
                      else
                        j_25 = m_25;
                      {
                        if(((h_25 != NULL) && (h_25 != n_25)))
                          _fail(n_25);
                        else
                          h_25 = n_25;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(h_25));
                          {
                            t = a_1(t);
                            {
                              o_25 = t;
                              v_24 :
                              if(match_cons(o_25, sym__2))
                                {
                                  p_25 = ATgetArgument(o_25, 0);
                                  q_25 = ATgetArgument(o_25, 1);
                                  {
                                    if(((k_25 != NULL) && (k_25 != p_25)))
                                      _fail(p_25);
                                    else
                                      k_25 = p_25;
                                    if(((i_25 != NULL) && (i_25 != q_25)))
                                      _fail(q_25);
                                    else
                                      i_25 = q_25;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_25)), not_null(j_25)), not_null(i_25));
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
ATerm thread_map_1 (ATerm t, ATerm y_105 (ATerm))
{
  ATerm u_25 (ATerm t)
  {
    ATerm d_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, y_105, u_25);
        LocalPopChoice(g_14);
      }
    else
      {
        t = d_14;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = u_25(t);
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym__2))
    {
      z_25 = ATgetArgument(y_25, 0);
      a_26 = ATgetArgument(y_25, 1);
      {
        ATerm d_26 = NULL;
        ATerm e_26 = NULL;
        t = new_0(t);
        {
          e_26 = t;
          if(((d_26 != NULL) && (d_26 != e_26)))
            _fail(e_26);
          else
            d_26 = e_26;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_26)), term_a_8), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(a_26))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(z_25), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_26)))));
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
  ATerm k_26 = NULL;
  k_26 = t;
  {
    ATerm n_26 = NULL,o_26 = NULL;
    t = not_null(k_26);
    {
      ATerm q_1 (ATerm t)
      {
        t = term_h_14;
        return(t);
      }
      t = rewrite_1(t, q_1);
      {
        n_26 = t;
        i_26 :
        if(match_cons(n_26, sym_Defined_1))
          {
            o_26 = ATgetArgument(n_26, 0);
            j_26 :
            if(!(match_string(o_26, "m_0")))
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
    t = term_l_14;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  u_26 = t;
  s_26 :
  if(match_cons(u_26, sym__2))
    {
      v_26 = ATgetArgument(u_26, 0);
      x_26 = ATgetArgument(u_26, 1);
      t_26 :
      if(match_cons(v_26, sym_Var_1))
        {
          w_26 = ATgetArgument(v_26, 0);
          {
            ATerm a_27 = NULL;
            t = not_null(w_26);
            {
              t = Initialized_0(t);
              {
                a_27 = t;
                r_26 :
                if(!(match_string(a_27, "NULL")))
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_26)), not_null(x_26));
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ConstructTerm_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  q_27 = t;
  o_27 :
  if(match_cons(q_27, sym_Anno_2))
    {
      r_27 = ATgetArgument(q_27, 0);
      p_27 = ATgetArgument(q_27, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_27)), not_null(r_27))));
    }
  else
    {
      if(match_cons(q_27, sym_Op_2))
        {
          r_27 = ATgetArgument(q_27, 0);
          p_27 = ATgetArgument(q_27, 1);
          {
            ATerm w_27 = NULL;
            ATerm x_27 = NULL,z_27 = NULL;
            ATerm y_27 = NULL;
            t = not_null(p_27);
            {
              t = length_0(t);
              {
                y_27 = t;
                if(((x_27 != NULL) && (x_27 != y_27)))
                  _fail(y_27);
                else
                  x_27 = y_27;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_27), not_null(x_27));
              {
                t = ConstructorName_0(t);
                {
                  z_27 = t;
                  if(((w_27 != NULL) && (w_27 != z_27)))
                    _fail(z_27);
                  else
                    w_27 = z_27;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(CheckATermList(not_null(p_27)), (ATerm) ATmakeAppl(sym_Id_1, not_null(w_27)))));
          }
        }
      else
        {
          if(match_cons(q_27, sym_BuildDefault_1))
            {
              r_27 = ATgetArgument(q_27, 0);
              t = not_null(r_27);
            }
          else
            {
              if(match_cons(q_27, sym_Var_1))
                {
                  r_27 = ATgetArgument(q_27, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_27))));
                }
              else
                {
                  if(match_cons(q_27, sym_Str_1))
                    {
                      r_27 = ATgetArgument(q_27, 0);
                      {
                        ATerm d_28 = NULL;
                        ATerm e_28 = NULL;
                        t = not_null(r_27);
                        {
                          t = string_as_chars_1(t, escape_chars_0);
                          {
                            t = string_as_chars_1(t, double_quote_chars_0);
                            {
                              e_28 = t;
                              if(((d_28 != NULL) && (d_28 != e_28)))
                                _fail(e_28);
                              else
                                d_28 = e_28;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_15), term_y_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(d_28))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(q_27, sym_Real_1))
                        {
                          r_27 = ATgetArgument(q_27, 0);
                          {
                            ATerm g_28 = NULL;
                            ATerm h_28 = NULL;
                            t = not_null(r_27);
                            {
                              t = real_to_string_0(t);
                              {
                                h_28 = t;
                                if(((g_28 != NULL) && (g_28 != h_28)))
                                  _fail(h_28);
                                else
                                  g_28 = h_28;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(g_28)))));
                          }
                        }
                      else
                        {
                          if(match_cons(q_27, sym_Int_1))
                            {
                              r_27 = ATgetArgument(q_27, 0);
                              {
                                ATerm j_28 = NULL;
                                ATerm k_28 = NULL;
                                t = not_null(r_27);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    k_28 = t;
                                    if(((j_28 != NULL) && (j_28 != k_28)))
                                      _fail(k_28);
                                    else
                                      j_28 = k_28;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(j_28)))));
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
ATerm Id_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm c_29 = NULL,d_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym_Id_1))
    {
      d_29 = ATgetArgument(c_29, 0);
      {
        ATerm g_29 = NULL,i_29 = NULL;
        ATerm h_29 = NULL;
        t = SSLgetAnnotations(not_null(c_29));
        {
          h_29 = t;
          if(((g_29 != NULL) && (g_29 != h_29)))
            _fail(h_29);
          else
            g_29 = h_29;
        }
        {
          t = not_null(d_29);
          {
            ATerm k_29 = NULL;
            t = c_81(t);
            {
              i_29 = t;
              {
                ATerm l_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(i_29)), not_null(g_29));
                {
                  l_29 = t;
                  if(((k_29 != NULL) && (k_29 != l_29)))
                    _fail(l_29);
                  else
                    k_29 = l_29;
                }
                t = not_null(k_29);
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
ATerm FunCall_2 (ATerm t, ATerm g_84 (ATerm), ATerm h_84 (ATerm))
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  v_29 :
  if(match_cons(w_29, sym_FunCall_2))
    {
      x_29 = ATgetArgument(w_29, 0);
      y_29 = ATgetArgument(w_29, 1);
      {
        ATerm c_30 = NULL,e_30 = NULL;
        ATerm d_30 = NULL;
        t = SSLgetAnnotations(not_null(w_29));
        {
          d_30 = t;
          if(((c_30 != NULL) && (c_30 != d_30)))
            _fail(d_30);
          else
            c_30 = d_30;
        }
        {
          t = not_null(x_29);
          {
            ATerm g_30 = NULL;
            t = g_84(t);
            {
              e_30 = t;
              {
                t = not_null(y_29);
                {
                  ATerm i_30 = NULL;
                  t = h_84(t);
                  {
                    g_30 = t;
                    {
                      ATerm j_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(e_30), not_null(g_30)), not_null(c_30));
                      {
                        j_30 = t;
                        if(((i_30 != NULL) && (i_30 != j_30)))
                          _fail(j_30);
                        else
                          i_30 = j_30;
                      }
                      t = not_null(i_30);
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
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  d_31 :
  if(match_cons(n_31, sym_Op_2))
    {
      o_31 = ATgetArgument(n_31, 0);
      p_31 = ATgetArgument(n_31, 1);
      e_31 :
      if(match_string(o_31, "Cons"))
        {
          f_31 :
          if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
            {
              j_31 = ATgetFirst((ATermList) p_31);
              k_31 = (ATerm) ATgetNext((ATermList) p_31);
              g_31 :
              if(((ATgetType(k_31) == AT_LIST) && !(ATisEmpty(k_31))))
                {
                  l_31 = ATgetFirst((ATermList) k_31);
                  m_31 = (ATerm) ATgetNext((ATermList) k_31);
                  h_31 :
                  if(((ATgetType(m_31) == AT_LIST) && ATisEmpty(m_31)))
                    {
                      {
                        ATerm s_31 = NULL;
                        ATerm f_32 = NULL;
                        t = not_null(l_31);
                        {
                          ATerm i_15 = t;
                          int m_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
                              t_31 = t;
                              u_30 :
                              if(match_cons(t_31, sym_TypeCast_2))
                                {
                                  u_31 = ATgetArgument(t_31, 0);
                                  b_32 = ATgetArgument(t_31, 1);
                                  v_30 :
                                  if(match_cons(u_31, sym_TypeName_2))
                                    {
                                      v_31 = ATgetArgument(u_31, 0);
                                      a_32 = ATgetArgument(u_31, 1);
                                      w_30 :
                                      if(match_cons(v_31, sym_TypeSpec_3))
                                        {
                                          w_31 = ATgetArgument(v_31, 0);
                                          x_31 = ATgetArgument(v_31, 1);
                                          z_31 = ATgetArgument(v_31, 2);
                                          x_30 :
                                          if(((ATgetType(w_31) == AT_LIST) && ATisEmpty(w_31)))
                                            {
                                              y_30 :
                                              if(match_cons(x_31, sym_TypeId_1))
                                                {
                                                  y_31 = ATgetArgument(x_31, 0);
                                                  z_30 :
                                                  if(match_string(y_31, "ATerm"))
                                                    {
                                                      a_31 :
                                                      if(((ATgetType(z_31) == AT_LIST) && ATisEmpty(z_31)))
                                                        {
                                                          b_31 :
                                                          if(match_cons(a_32, sym_None_0))
                                                            {
                                                              t = not_null(b_32);
                                                              {
                                                                ATerm p_15 = t;
                                                                int q_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm r_1 (ATerm t)
                                                                    {
                                                                      ATerm d_32 = NULL;
                                                                      d_32 = t;
                                                                      s_30 :
                                                                      if(!(match_string(d_32, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, r_1);
                                                                    LocalPopChoice(q_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = p_15;
                                                                    {
                                                                      ATerm s_1 (ATerm t)
                                                                      {
                                                                        ATerm u_1 (ATerm t)
                                                                        {
                                                                          ATerm e_32 = NULL;
                                                                          e_32 = t;
                                                                          t_30 :
                                                                          if(!(match_string(e_32, "ATinsert")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        t = Id_1(t, u_1);
                                                                        return(t);
                                                                      }
                                                                      ATerm t_1 (ATerm t)
                                                                      {
                                                                        ATerm v_1 (ATerm t)
                                                                        {
                                                                          t = Cons_2(t, _id, Nil_0);
                                                                          return(t);
                                                                        }
                                                                        t = Cons_2(t, _id, v_1);
                                                                        return(t);
                                                                      }
                                                                      t = FunCall_2(t, s_1, t_1);
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
                              LocalPopChoice(m_15);
                            }
                          else
                            {
                              t = i_15;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATempty, not_null(l_31)));
                            }
                          {
                            f_32 = t;
                            if(((s_31 != NULL) && (s_31 != f_32)))
                              _fail(f_32);
                            else
                              s_31 = f_32;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_31)), not_null(s_31))));
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
          if(match_string(o_31, "Nil"))
            {
              i_31 :
              if(((ATgetType(p_31) == AT_LIST) && ATisEmpty(p_31)))
                {
                  t = term_c_16;
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
ATerm bottomup_1 (ATerm t, ATerm s_92 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    t = bottomup_1(t, s_92);
    return(t);
  }
  t = _all(t, w_1);
  t = s_92(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = ConstructList_0(t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructTerm_0(t);
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              {
              }
            }
        }
      }
    return(t);
  }
  t = bottomup_1(t, x_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm r_92 (ATerm))
{
  t = r_92(t);
  {
    ATerm y_1 (ATerm t)
    {
      t = topdown_1(t, r_92);
      return(t);
    }
    t = _all(t, y_1);
  }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
  ATerm b_54 (ATerm t)
  {
    ATerm v_48 = NULL,l_49 = NULL;
    ATerm h_16;
    h_16 = t;
    {
      ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
      t = not_null(d_46);
      {
        ATerm i_16 = t;
        if((PushChoice() == 0))
          {
            ATerm w_48 = NULL;
            w_48 = t;
            l_42 :
            if(!(match_string(w_48, "Nil")))
              {
                if(!(match_string(w_48, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_16;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_45), term_j_16);
          {
            ATerm z_1 (ATerm t)
            {
              ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
              x_48 = t;
              q_42 :
              if(match_cons(x_48, sym__2))
                {
                  y_48 = ATgetArgument(x_48, 0);
                  z_48 = ATgetArgument(x_48, 1);
                  {
                    ATerm c_49 = NULL,g_49 = NULL;
                    ATerm k_16;
                    k_16 = t;
                    {
                      ATerm d_49 = NULL,f_49 = NULL;
                      ATerm e_49 = NULL;
                      t = not_null(z_48);
                      {
                        t = int_to_string_0(t);
                        {
                          e_49 = t;
                          if(((d_49 != NULL) && (d_49 != e_49)))
                            _fail(e_49);
                          else
                            d_49 = e_49;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_48), (ATerm) ATmakeAppl(sym_FunCall_2, term_m_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(d_49))), not_null(c_46))));
                        {
                          ATerm q_16 = t;
                          int r_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              LocalPopChoice(r_16);
                            }
                          else
                            {
                              t = q_16;
                              t = MatchArg2_0(t);
                            }
                          {
                            f_49 = t;
                            if(((c_49 != NULL) && (c_49 != f_49)))
                              _fail(f_49);
                            else
                              c_49 = f_49;
                          }
                        }
                      }
                    }
                    t = k_16;
                    {
                      ATerm h_49 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_48), term_v_16);
                      {
                        t = add_0(t);
                        {
                          h_49 = t;
                          if(((g_49 != NULL) && (g_49 != h_49)))
                            _fail(h_49);
                          else
                            g_49 = h_49;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_49), not_null(g_49));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = thread_map_1(t, z_1);
            {
              i_49 = t;
              s_42 :
              if(match_cons(i_49, sym__2))
                {
                  j_49 = ATgetArgument(i_49, 0);
                  k_49 = ATgetArgument(i_49, 1);
                  if(((v_48 != NULL) && (v_48 != j_49)))
                    _fail(j_49);
                  else
                    v_48 = j_49;
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
    t = h_16;
    {
      ATerm m_49 = NULL,o_49 = NULL;
      ATerm n_49 = NULL;
      t = not_null(m_45);
      {
        t = length_0(t);
        {
          n_49 = t;
          if(((m_49 != NULL) && (m_49 != n_49)))
            _fail(n_49);
          else
            m_49 = n_49;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_46), not_null(m_49));
        {
          t = ConstructorName_0(t);
          {
            o_49 = t;
            if(((l_49 != NULL) && (l_49 != o_49)))
              _fail(o_49);
            else
              l_49 = o_49;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_49))), not_null(c_46))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(v_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
    }
    return(t);
  }
  ATerm c_54 (ATerm t)
  {
    ATerm r_49 = NULL;
    ATerm s_49 = NULL;
    t = not_null(d_46);
    {
      t = real_to_string_0(t);
      {
        s_49 = t;
        if(((r_49 != NULL) && (r_49 != s_49)))
          _fail(s_49);
        else
          r_49 = s_49;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, not_null(c_46))), term_m_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_17, not_null(c_46)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(r_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
    return(t);
  }
  ATerm d_54 (ATerm t)
  {
    ATerm v_49 = NULL;
    ATerm w_49 = NULL;
    t = not_null(d_46);
    {
      t = int_to_string_0(t);
      {
        w_49 = t;
        if(((v_49 != NULL) && (v_49 != w_49)))
          _fail(w_49);
        else
          v_49 = w_49;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, not_null(c_46))), term_u_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_18, not_null(c_46)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(v_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
    return(t);
  }
  ATerm e_54 (ATerm t)
  {
    ATerm c_50 = NULL;
    ATerm d_50 = NULL;
    t = not_null(d_46);
    {
      t = string_as_chars_1(t, escape_chars_0);
      {
        t = string_as_chars_1(t, double_quote_chars_0);
        {
          d_50 = t;
          if(((c_50 != NULL) && (c_50 != d_50)))
            _fail(d_50);
          else
            c_50 = d_50;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_18, not_null(c_46)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_15), term_y_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(c_50)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
    return(t);
  }
  ATerm l_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_46)), term_v_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_46)), not_null(c_46))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, not_null(c_46)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_46)), term_i_7, not_null(c_46))));
    return(t);
  }
  ATerm o_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(m_45), not_null(c_46))), (ATerm) ATmakeAppl(sym_Match_2, not_null(d_46), not_null(c_46))));
    return(t);
  }
  ATerm p_54 (ATerm t)
  {
    t = term_y_18;
    return(t);
  }
  ATerm q_54 (ATerm t)
  {
    t = term_y_18;
    return(t);
  }
  ATerm r_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(f_46), term_i_17);
    return(t);
  }
  ATerm s_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46)))), term_a_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_45)), term_i_7, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_45)), term_i_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_46)), not_null(y_45), not_null(z_45)))));
    return(t);
  }
  ATerm t_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46)))), term_a_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(x_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_46)), not_null(y_45), not_null(z_45)))));
    return(t);
  }
  ATerm u_54 (ATerm t)
  {
    ATerm e_51 = NULL,t_51 = NULL,v_51 = NULL;
    ATerm r_19;
    r_19 = t;
    {
      ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
      t = not_null(v_45);
      {
        ATerm s_19 = t;
        if((PushChoice() == 0))
          {
            ATerm f_51 = NULL;
            f_51 = t;
            d_43 :
            if(!(match_string(f_51, "Nil")))
              {
                if(!(match_string(f_51, "Cons")))
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_45), term_j_16);
          {
            ATerm a_2 (ATerm t)
            {
              ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
              g_51 = t;
              h_43 :
              if(match_cons(g_51, sym__2))
                {
                  h_51 = ATgetArgument(g_51, 0);
                  j_51 = ATgetArgument(g_51, 1);
                  i_43 :
                  if(match_cons(h_51, sym_Var_1))
                    {
                      i_51 = ATgetArgument(h_51, 0);
                      {
                        ATerm m_51 = NULL,o_51 = NULL;
                        ATerm x_19;
                        x_19 = t;
                        {
                          ATerm n_51 = NULL;
                          t = not_null(j_51);
                          {
                            t = int_to_string_0(t);
                            {
                              n_51 = t;
                              if(((m_51 != NULL) && (m_51 != n_51)))
                                _fail(n_51);
                              else
                                m_51 = n_51;
                            }
                          }
                        }
                        t = x_19;
                        {
                          ATerm p_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_51), term_v_16);
                          {
                            t = add_0(t);
                            {
                              p_51 = t;
                              if(((o_51 != NULL) && (o_51 != p_51)))
                                _fail(p_51);
                              else
                                o_51 = p_51;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_51)), term_i_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(m_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46)))))), not_null(o_51));
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
            t = thread_map_1(t, a_2);
            {
              q_51 = t;
              k_43 :
              if(match_cons(q_51, sym__2))
                {
                  r_51 = ATgetArgument(q_51, 0);
                  s_51 = ATgetArgument(q_51, 1);
                  if(((e_51 != NULL) && (e_51 != r_51)))
                    _fail(r_51);
                  else
                    e_51 = r_51;
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
      ATerm y_19;
      y_19 = t;
      {
        ATerm u_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_45), not_null(t_45));
        {
          t = ConstructorName_0(t);
          {
            u_51 = t;
            if(((t_51 != NULL) && (t_51 != u_51)))
              _fail(u_51);
            else
              t_51 = u_51;
          }
        }
      }
      t = y_19;
      {
        ATerm w_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_51), (ATerm) ATinsert(ATempty, not_null(x_45)));
        {
          ATerm z_19 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(d_20);
            }
          else
            {
              t = z_19;
              t = conc_more_lists_0(t);
            }
          {
            w_51 = t;
            if(((v_51 != NULL) && (v_51 != w_51)))
              _fail(w_51);
            else
              v_51 = w_51;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(v_51)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_46)), not_null(y_45), not_null(z_45)))));
      }
    }
    return(t);
  }
  ATerm y_54 (ATerm t)
  {
    ATerm d_52 = NULL;
    ATerm e_52 = NULL;
    t = not_null(v_45);
    {
      t = real_to_string_0(t);
      {
        e_52 = t;
        if(((d_52 != NULL) && (d_52 != e_52)))
          _fail(e_52);
        else
          d_52 = e_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(d_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(x_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_46)), not_null(y_45), not_null(z_45)))));
    return(t);
  }
  ATerm z_54 (ATerm t)
  {
    ATerm l_52 = NULL;
    ATerm m_52 = NULL;
    t = not_null(v_45);
    {
      t = int_to_string_0(t);
      {
        m_52 = t;
        if(((l_52 != NULL) && (l_52 != m_52)))
          _fail(m_52);
        else
          l_52 = m_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(l_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(x_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_46)), not_null(y_45), not_null(z_45)))));
    return(t);
  }
  ATerm a_55 (ATerm t)
  {
    ATerm t_52 = NULL;
    ATerm u_52 = NULL;
    t = not_null(v_45);
    {
      t = string_as_chars_1(t, escape_chars_0);
      {
        t = string_as_chars_1(t, double_quote_chars_0);
        {
          u_52 = t;
          if(((t_52 != NULL) && (t_52 != u_52)))
            _fail(u_52);
          else
            t_52 = u_52;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(t_52)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(x_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_46)), not_null(y_45), not_null(z_45)))));
    return(t);
  }
  ATerm b_55 (ATerm t)
  {
    t = not_null(z_45);
    return(t);
  }
  ATerm c_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), (ATerm) ATmakeAppl(sym_Case_3, not_null(c_46), not_null(z_45), not_null(a_46)));
    return(t);
  }
  ATerm d_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)));
    return(t);
  }
  ATerm e_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_46)), term_v_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_46)), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_46)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_46))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_46)), term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_46)))));
    return(t);
  }
  ATerm f_55 (ATerm t)
  {
    t = not_null(c_46);
    {
      ATerm n_20 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_20;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_46)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_46))));
    return(t);
  }
  ATerm g_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_46)), term_i_7, term_i_17));
    return(t);
  }
  ATerm h_55 (ATerm t)
  {
    ATerm i_53 = NULL;
    ATerm j_53 = NULL;
    t = not_null(f_46);
    {
      t = construct_term_caching_0(t);
      {
        j_53 = t;
        if(((i_53 != NULL) && (i_53 != j_53)))
          _fail(j_53);
        else
          i_53 = j_53;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, not_null(i_53)));
    return(t);
  }
  e_46 = t;
  r_43 :
  if(match_cons(e_46, sym_Let_2))
    {
      f_46 = ATgetArgument(e_46, 0);
      c_46 = ATgetArgument(e_46, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(f_46), (ATerm) ATinsert(ATempty, not_null(c_46)));
    }
  else
    {
      if(match_cons(e_46, sym_Where_1))
        {
          f_46 = ATgetArgument(e_46, 0);
          {
            ATerm j_46 = NULL;
            ATerm k_46 = NULL;
            t = new_0(t);
            {
              k_46 = t;
              if(((j_46 != NULL) && (j_46 != k_46)))
                _fail(k_46);
              else
                j_46 = k_46;
            }
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_46)), term_a_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_46))))), not_null(f_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_46)), term_i_7, term_i_17))));
          }
        }
      else
        {
          if(match_cons(e_46, sym_Test_1))
            {
              f_46 = ATgetArgument(e_46, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(f_46));
            }
          else
            {
              if(match_cons(e_46, sym_Call_2))
                {
                  f_46 = ATgetArgument(e_46, 0);
                  c_46 = ATgetArgument(e_46, 1);
                  s_43 :
                  if(match_cons(f_46, sym_SVar_1))
                    {
                      d_46 = ATgetArgument(f_46, 0);
                      {
                        ATerm o_46 = NULL;
                        ATerm u_46 = NULL;
                        t = not_null(c_46);
                        {
                          ATerm b_2 (ATerm t)
                          {
                            ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
                            p_46 = t;
                            r_41 :
                            if(match_cons(p_46, sym_Call_2))
                              {
                                q_46 = ATgetArgument(p_46, 0);
                                s_46 = ATgetArgument(p_46, 1);
                                s_41 :
                                if(match_cons(q_46, sym_SVar_1))
                                  {
                                    r_46 = ATgetArgument(q_46, 0);
                                    t_41 :
                                    if(((ATgetType(s_46) == AT_LIST) && ATisEmpty(s_46)))
                                      {
                                        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(r_46));
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
                            u_46 = t;
                            if(((o_46 != NULL) && (o_46 != u_46)))
                              _fail(u_46);
                            else
                              o_46 = u_46;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_46)), (ATerm) ATinsert(CheckATermList(not_null(o_46)), term_i_17))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(e_46, sym_Prim_2))
                    {
                      f_46 = ATgetArgument(e_46, 0);
                      c_46 = ATgetArgument(e_46, 1);
                      {
                        ATerm x_46 = NULL;
                        ATerm y_46 = NULL;
                        t = not_null(c_46);
                        {
                          ATerm c_2 (ATerm t)
                          {
                            ATerm d_2 (ATerm t)
                            {
                              ATerm o_20 = t;
                              int p_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = construct_term_0(t);
                                  LocalPopChoice(p_20);
                                }
                              else
                                {
                                  t = o_20;
                                  {
                                  }
                                }
                              return(t);
                            }
                            t = topdown_1(t, d_2);
                            return(t);
                          }
                          t = map_1(t, c_2);
                          {
                            y_46 = t;
                            if(((x_46 != NULL) && (x_46 != y_46)))
                              _fail(y_46);
                            else
                              x_46 = y_46;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), not_null(x_46))));
                      }
                    }
                  else
                    {
                      if(match_cons(e_46, sym_Not_1))
                        {
                          f_46 = ATgetArgument(e_46, 0);
                          {
                            ATerm a_47 = NULL;
                            ATerm b_47 = NULL;
                            t = new_0(t);
                            {
                              b_47 = t;
                              if(((a_47 != NULL) && (a_47 != b_47)))
                                _fail(b_47);
                              else
                                a_47 = b_47;
                            }
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_47)), term_a_8), term_q_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_21), term_m_21), not_null(f_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_47)))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(e_46, sym_LGChoice_2))
                            {
                              f_46 = ATgetArgument(e_46, 0);
                              c_46 = ATgetArgument(e_46, 1);
                              {
                                ATerm e_47 = NULL;
                                ATerm f_47 = NULL;
                                t = new_0(t);
                                {
                                  f_47 = t;
                                  if(((e_47 != NULL) && (e_47 != f_47)))
                                    _fail(f_47);
                                  else
                                    e_47 = f_47;
                                }
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_47)), term_a_8), term_q_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_u_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_47)))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(e_46, sym_GChoice_2))
                                {
                                  f_46 = ATgetArgument(e_46, 0);
                                  c_46 = ATgetArgument(e_46, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(f_46), not_null(c_46));
                                }
                              else
                                {
                                  if(match_cons(e_46, sym_GuardedLChoice_3))
                                    {
                                      f_46 = ATgetArgument(e_46, 0);
                                      c_46 = ATgetArgument(e_46, 1);
                                      z_45 = ATgetArgument(e_46, 2);
                                      {
                                        ATerm m_47 = NULL,n_47 = NULL;
                                        ATerm o_47 = NULL;
                                        ATerm p_47 = NULL;
                                        t = new_0(t);
                                        {
                                          o_47 = t;
                                          {
                                            if(((m_47 != NULL) && (m_47 != o_47)))
                                              _fail(o_47);
                                            else
                                              m_47 = o_47;
                                            {
                                              t = new_0(t);
                                              {
                                                p_47 = t;
                                                if(((n_47 != NULL) && (n_47 != p_47)))
                                                  _fail(p_47);
                                                else
                                                  n_47 = p_47;
                                              }
                                            }
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_47)), term_a_8), term_l_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_47)), term_a_8), term_q_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_47)))))), not_null(f_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(m_47)))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(e_46, sym_LChoice_2))
                                        {
                                          f_46 = ATgetArgument(e_46, 0);
                                          c_46 = ATgetArgument(e_46, 1);
                                          {
                                            ATerm s_47 = NULL,t_47 = NULL;
                                            ATerm u_47 = NULL;
                                            ATerm v_47 = NULL;
                                            t = new_0(t);
                                            {
                                              u_47 = t;
                                              {
                                                if(((s_47 != NULL) && (s_47 != u_47)))
                                                  _fail(u_47);
                                                else
                                                  s_47 = u_47;
                                                {
                                                  t = new_0(t);
                                                  {
                                                    v_47 = t;
                                                    if(((t_47 != NULL) && (t_47 != v_47)))
                                                      _fail(v_47);
                                                    else
                                                      t_47 = v_47;
                                                  }
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_47)), term_a_8), term_l_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_47)), term_a_8), term_q_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_47)))))), not_null(f_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_47)))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(e_46, sym_Choice_2))
                                            {
                                              f_46 = ATgetArgument(e_46, 0);
                                              c_46 = ATgetArgument(e_46, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_46), not_null(c_46));
                                            }
                                          else
                                            {
                                              if(match_cons(e_46, sym_Seq_2))
                                                {
                                                  f_46 = ATgetArgument(e_46, 0);
                                                  c_46 = ATgetArgument(e_46, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_46)), not_null(f_46)));
                                                }
                                              else
                                                {
                                                  if(match_cons(e_46, sym_Scope_2))
                                                    {
                                                      f_46 = ATgetArgument(e_46, 0);
                                                      c_46 = ATgetArgument(e_46, 1);
                                                      {
                                                        ATerm e_48 = NULL;
                                                        ATerm o_22;
                                                        o_22 = t;
                                                        {
                                                          t = not_null(f_46);
                                                          {
                                                            ATerm e_2 (ATerm t)
                                                            {
                                                              ATerm c_48 = NULL;
                                                              c_48 = t;
                                                              {
                                                                ATerm p_22;
                                                                p_22 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_48), term_v_22);
                                                                  {
                                                                    ATerm f_2 (ATerm t)
                                                                    {
                                                                      t = term_h_14;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, f_2);
                                                                  }
                                                                }
                                                                t = p_22;
                                                              }
                                                              return(t);
                                                            }
                                                            t = map_1(t, e_2);
                                                          }
                                                        }
                                                        t = o_22;
                                                        {
                                                          ATerm l_48 = NULL;
                                                          t = not_null(f_46);
                                                          {
                                                            ATerm g_2 (ATerm t)
                                                            {
                                                              ATerm f_48 = NULL;
                                                              f_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_48)), term_a_8), term_w_22);
                                                              return(t);
                                                            }
                                                            t = map_1(t, g_2);
                                                            {
                                                              l_48 = t;
                                                              if(((e_48 != NULL) && (e_48 != l_48)))
                                                                _fail(l_48);
                                                              else
                                                                e_48 = l_48;
                                                            }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, not_null(e_48))), (ATerm) ATinsert(ATempty, not_null(c_46)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(e_46, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(e_46, sym_Id_0))
                                                            {
                                                              t = term_y_18;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(e_46, sym_Match_2))
                                                                {
                                                                  f_46 = ATgetArgument(e_46, 0);
                                                                  c_46 = ATgetArgument(e_46, 1);
                                                                  t_43 :
                                                                  if(match_cons(f_46, sym_Op_2))
                                                                    {
                                                                      d_46 = ATgetArgument(f_46, 0);
                                                                      m_45 = ATgetArgument(f_46, 1);
                                                                      u_43 :
                                                                      if(((ATgetType(m_45) == AT_LIST) && !(ATisEmpty(m_45))))
                                                                        {
                                                                          i_45 = ATgetFirst((ATermList) m_45);
                                                                          j_45 = (ATerm) ATgetNext((ATermList) m_45);
                                                                          v_43 :
                                                                          if(((ATgetType(j_45) == AT_LIST) && !(ATisEmpty(j_45))))
                                                                            {
                                                                              k_45 = ATgetFirst((ATermList) j_45);
                                                                              l_45 = (ATerm) ATgetNext((ATermList) j_45);
                                                                              w_43 :
                                                                              if(((ATgetType(l_45) == AT_LIST) && ATisEmpty(l_45)))
                                                                                {
                                                                                  x_43 :
                                                                                  if(match_string(d_46, "Cons"))
                                                                                    {
                                                                                      ATerm x_22 = t;
                                                                                      int y_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm p_48 = NULL;
                                                                                          ATerm q_48 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(k_45), (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_19, not_null(c_46))))))), (ATerm) ATmakeAppl(sym__2, not_null(i_45), (ATerm) ATmakeAppl(sym_FunCall_2, term_e_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_19, not_null(c_46))))));
                                                                                          {
                                                                                            ATerm h_2 (ATerm t)
                                                                                            {
                                                                                              ATerm z_22 = t;
                                                                                              int a_23 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = MatchArg1_0(t);
                                                                                                  LocalPopChoice(a_23);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = z_22;
                                                                                                  t = MatchArg2_0(t);
                                                                                                }
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, h_2);
                                                                                            {
                                                                                              q_48 = t;
                                                                                              if(((p_48 != NULL) && (p_48 != q_48)))
                                                                                                _fail(q_48);
                                                                                              else
                                                                                                p_48 = q_48;
                                                                                            }
                                                                                          }
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, not_null(c_46))), term_a_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, not_null(c_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(p_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
                                                                                          LocalPopChoice(y_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_22;
                                                                                          t = b_54(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_54(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  y_43 :
                                                                                  t = b_54(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              z_43 :
                                                                              t = b_54(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(m_45) == AT_LIST) && ATisEmpty(m_45)))
                                                                            {
                                                                              a_44 :
                                                                              if(match_string(d_46, "Nil"))
                                                                                {
                                                                                  ATerm b_23 = t;
                                                                                  int c_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, not_null(c_46))), term_a_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, not_null(c_46))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
                                                                                      LocalPopChoice(c_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_23;
                                                                                      t = b_54(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_54(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              b_44 :
                                                                              t = b_54(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(f_46, sym_Real_1))
                                                                        {
                                                                          d_46 = ATgetArgument(f_46, 0);
                                                                          t = c_54(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(f_46, sym_Int_1))
                                                                            {
                                                                              d_46 = ATgetArgument(f_46, 0);
                                                                              t = d_54(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(f_46, sym_Str_1))
                                                                                {
                                                                                  d_46 = ATgetArgument(f_46, 0);
                                                                                  t = e_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(f_46, sym_Var_1))
                                                                                    {
                                                                                      d_46 = ATgetArgument(f_46, 0);
                                                                                      t = l_54(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(f_46, sym_As_2))
                                                                                        {
                                                                                          d_46 = ATgetArgument(f_46, 0);
                                                                                          m_45 = ATgetArgument(f_46, 1);
                                                                                          t = o_54(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(f_46, sym_BuildDefault_1))
                                                                                            {
                                                                                              d_46 = ATgetArgument(f_46, 0);
                                                                                              t = p_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(f_46, sym_Wld_0))
                                                                                                {
                                                                                                  t = q_54(t);
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
                                                                  if(match_cons(e_46, sym_Match_1))
                                                                    {
                                                                      f_46 = ATgetArgument(e_46, 0);
                                                                      t = r_54(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(e_46, sym_Case_3))
                                                                        {
                                                                          f_46 = ATgetArgument(e_46, 0);
                                                                          c_46 = ATgetArgument(e_46, 1);
                                                                          z_45 = ATgetArgument(e_46, 2);
                                                                          c_44 :
                                                                          if(match_cons(f_46, sym_Var_1))
                                                                            {
                                                                              d_46 = ATgetArgument(f_46, 0);
                                                                              d_44 :
                                                                              if(((ATgetType(c_46) == AT_LIST) && !(ATisEmpty(c_46))))
                                                                                {
                                                                                  b_46 = ATgetFirst((ATermList) c_46);
                                                                                  y_45 = (ATerm) ATgetNext((ATermList) c_46);
                                                                                  e_44 :
                                                                                  if(match_cons(b_46, sym_Alt_3))
                                                                                    {
                                                                                      u_45 = ATgetArgument(b_46, 0);
                                                                                      w_45 = ATgetArgument(b_46, 1);
                                                                                      x_45 = ATgetArgument(b_46, 2);
                                                                                      f_44 :
                                                                                      if(match_cons(u_45, sym_Fun_2))
                                                                                        {
                                                                                          v_45 = ATgetArgument(u_45, 0);
                                                                                          t_45 = ATgetArgument(u_45, 1);
                                                                                          g_44 :
                                                                                          if(((ATgetType(w_45) == AT_LIST) && !(ATisEmpty(w_45))))
                                                                                            {
                                                                                              n_45 = ATgetFirst((ATermList) w_45);
                                                                                              p_45 = (ATerm) ATgetNext((ATermList) w_45);
                                                                                              h_44 :
                                                                                              if(((ATgetType(p_45) == AT_LIST) && !(ATisEmpty(p_45))))
                                                                                                {
                                                                                                  q_45 = ATgetFirst((ATermList) p_45);
                                                                                                  s_45 = (ATerm) ATgetNext((ATermList) p_45);
                                                                                                  i_44 :
                                                                                                  if(((ATgetType(s_45) == AT_LIST) && ATisEmpty(s_45)))
                                                                                                    {
                                                                                                      j_44 :
                                                                                                      if(match_cons(q_45, sym_Var_1))
                                                                                                        {
                                                                                                          r_45 = ATgetArgument(q_45, 0);
                                                                                                          k_44 :
                                                                                                          if(match_cons(n_45, sym_Var_1))
                                                                                                            {
                                                                                                              o_45 = ATgetArgument(n_45, 0);
                                                                                                              l_44 :
                                                                                                              if(match_int(t_45, 2))
                                                                                                                {
                                                                                                                  m_44 :
                                                                                                                  if(match_string(v_45, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm d_23 = t;
                                                                                                                      int e_23 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = s_54(t);
                                                                                                                          LocalPopChoice(e_23);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = d_23;
                                                                                                                          t = u_54(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = u_54(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  n_44 :
                                                                                                                  t = u_54(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              o_44 :
                                                                                                              p_44 :
                                                                                                              t = u_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          q_44 :
                                                                                                          r_44 :
                                                                                                          s_44 :
                                                                                                          t = u_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t_44 :
                                                                                                      u_44 :
                                                                                                      v_44 :
                                                                                                      w_44 :
                                                                                                      t = u_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  x_44 :
                                                                                                  y_44 :
                                                                                                  z_44 :
                                                                                                  t = u_54(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(w_45) == AT_LIST) && ATisEmpty(w_45)))
                                                                                                {
                                                                                                  a_45 :
                                                                                                  if(match_int(t_45, 0))
                                                                                                    {
                                                                                                      b_45 :
                                                                                                      if(match_string(v_45, "Nil"))
                                                                                                        {
                                                                                                          ATerm i_23 = t;
                                                                                                          int j_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = t_54(t);
                                                                                                              LocalPopChoice(j_23);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = i_23;
                                                                                                              t = u_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = u_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      c_45 :
                                                                                                      t = u_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  d_45 :
                                                                                                  e_45 :
                                                                                                  t = u_54(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(u_45, sym_Real_1))
                                                                                            {
                                                                                              v_45 = ATgetArgument(u_45, 0);
                                                                                              t = y_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(u_45, sym_Int_1))
                                                                                                {
                                                                                                  v_45 = ATgetArgument(u_45, 0);
                                                                                                  t = z_54(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(u_45, sym_Str_1))
                                                                                                    {
                                                                                                      v_45 = ATgetArgument(u_45, 0);
                                                                                                      t = a_55(t);
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
                                                                                  if(((ATgetType(c_46) == AT_LIST) && ATisEmpty(c_46)))
                                                                                    {
                                                                                      t = b_55(t);
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
                                                                          if(match_cons(e_46, sym_Case_4))
                                                                            {
                                                                              f_46 = ATgetArgument(e_46, 0);
                                                                              c_46 = ATgetArgument(e_46, 1);
                                                                              z_45 = ATgetArgument(e_46, 2);
                                                                              a_46 = ATgetArgument(e_46, 3);
                                                                              t = c_55(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(e_46, sym_Continue_1))
                                                                                {
                                                                                  f_46 = ATgetArgument(e_46, 0);
                                                                                  t = d_55(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(e_46, sym_Assign_2))
                                                                                    {
                                                                                      f_46 = ATgetArgument(e_46, 0);
                                                                                      c_46 = ATgetArgument(e_46, 1);
                                                                                      f_45 :
                                                                                      if(match_cons(f_46, sym_Var_1))
                                                                                        {
                                                                                          d_46 = ATgetArgument(f_46, 0);
                                                                                          g_45 :
                                                                                          if(match_cons(c_46, sym_Var_1))
                                                                                            {
                                                                                              b_46 = ATgetArgument(c_46, 0);
                                                                                              {
                                                                                                ATerm n_23 = t;
                                                                                                int q_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = e_55(t);
                                                                                                    LocalPopChoice(q_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = n_23;
                                                                                                    t = f_55(t);
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = f_55(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(e_46, sym_Assign_1))
                                                                                        {
                                                                                          f_46 = ATgetArgument(e_46, 0);
                                                                                          h_45 :
                                                                                          if(match_cons(f_46, sym_Var_1))
                                                                                            {
                                                                                              d_46 = ATgetArgument(f_46, 0);
                                                                                              t = g_55(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(e_46, sym_Build_1))
                                                                                            {
                                                                                              f_46 = ATgetArgument(e_46, 0);
                                                                                              t = h_55(t);
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
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  v_56 :
  if(match_cons(w_56, sym__2))
    {
      x_56 = ATgetArgument(w_56, 0);
      y_56 = ATgetArgument(w_56, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_r_23), not_null(y_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
  f_57 = t;
  d_57 :
  if(((ATgetType(f_57) == AT_LIST) && !(ATisEmpty(f_57))))
    {
      g_57 = ATgetFirst((ATermList) f_57);
      h_57 = (ATerm) ATgetNext((ATermList) f_57);
      e_57 :
      if(match_int(g_57, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_57)), term_y_23), term_v_23);
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
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
  n_57 = t;
  l_57 :
  if(((ATgetType(n_57) == AT_LIST) && !(ATisEmpty(n_57))))
    {
      o_57 = ATgetFirst((ATermList) n_57);
      p_57 = (ATerm) ATgetNext((ATermList) n_57);
      m_57 :
      if(match_int(o_57, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_57)), term_v_23), term_v_23);
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
  ATerm x_57 = NULL,y_57 = NULL,a_58 = NULL;
  x_57 = t;
  v_57 :
  if(((ATgetType(x_57) == AT_LIST) && !(ATisEmpty(x_57))))
    {
      y_57 = ATgetFirst((ATermList) x_57);
      a_58 = (ATerm) ATgetNext((ATermList) x_57);
      w_57 :
      if(match_int(y_57, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_58)), term_z_23), term_v_23);
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
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm i_2 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, i_2);
      }
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      {
        ATerm g_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(i_24);
          }
        else
          {
            t = g_24;
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
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  i_58 :
  if(match_cons(j_58, sym__2))
    {
      k_58 = ATgetArgument(j_58, 0);
      l_58 = ATgetArgument(j_58, 1);
      {
        ATerm o_58 = NULL,q_58 = NULL;
        ATerm j_24;
        j_24 = t;
        {
          ATerm p_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_k_24), not_null(k_58));
          {
            t = concat_strings_0(t);
            {
              t = string_as_chars_1(t, escape_chars_0);
              {
                t = string_as_chars_1(t, double_quote_chars_0);
                {
                  p_58 = t;
                  if(((o_58 != NULL) && (o_58 != p_58)))
                    _fail(p_58);
                  else
                    o_58 = p_58;
                }
              }
            }
          }
        }
        t = j_24;
        {
          ATerm t_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_q_24), not_null(k_58));
          {
            t = concat_strings_0(t);
            {
              t = string_as_chars_1(t, escape_chars_0);
              {
                t = string_as_chars_1(t, double_quote_chars_0);
                {
                  t_58 = t;
                  if(((q_58 != NULL) && (q_58 != t_58)))
                    _fail(t_58);
                  else
                    q_58 = t_58;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_17), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(q_58))), term_t_24)))), not_null(l_58)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_17), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(o_58))), term_t_24)))));
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
  ATerm g_59 = NULL;
  g_59 = t;
  {
    ATerm j_59 = NULL,k_59 = NULL;
    t = term_b_6;
    {
      ATerm j_2 (ATerm t)
      {
        t = term_i_6;
        return(t);
      }
      t = rewrite_1(t, j_2);
      {
        j_59 = t;
        e_59 :
        if(match_cons(j_59, sym_Defined_1))
          {
            k_59 = ATgetArgument(j_59, 0);
            f_59 :
            if(!(match_string(k_59, "p_0")))
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
    t = not_null(g_59);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm p_59 = NULL;
  p_59 = t;
  {
    ATerm s_59 = NULL,t_59 = NULL;
    t = not_null(p_59);
    {
      ATerm k_2 (ATerm t)
      {
        t = term_t_6;
        return(t);
      }
      t = rewrite_1(t, k_2);
      {
        s_59 = t;
        n_59 :
        if(match_cons(s_59, sym_Defined_1))
          {
            t_59 = ATgetArgument(s_59, 0);
            o_59 :
            if(!(match_string(t_59, "s_0")))
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
    t = not_null(p_59);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  z_59 = t;
  y_59 :
  if(match_cons(z_59, sym_SDef_3))
    {
      a_60 = ATgetArgument(z_59, 0);
      b_60 = ATgetArgument(z_59, 1);
      c_60 = ATgetArgument(z_59, 2);
      {
        ATerm g_60 = NULL,h_60 = NULL;
        ATerm i_60 = NULL;
        t = not_null(b_60);
        {
          ATerm j_60 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            i_60 = t;
            {
              if(((g_60 != NULL) && (g_60 != i_60)))
                _fail(i_60);
              else
                g_60 = i_60;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), not_null(c_60));
                {
                  ATerm u_24 = t;
                  int e_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_2 (ATerm t)
                      {
                        ATerm f_25 = t;
                        int g_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            LocalPopChoice(g_25);
                          }
                        else
                          {
                            t = f_25;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, l_2, _id);
                      t = TracedBody_0(t);
                      LocalPopChoice(e_25);
                    }
                  else
                    {
                      t = u_24;
                      t = PlainBody_0(t);
                    }
                  {
                    j_60 = t;
                    if(((h_60 != NULL) && (h_60 != j_60)))
                      _fail(j_60);
                    else
                      h_60 = j_60;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_u_7, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_60)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(g_60)), term_s_25)))), not_null(h_60));
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
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym__2))
    {
      q_60 = ATgetArgument(p_60, 0);
      r_60 = ATgetArgument(p_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_60)), not_null(q_60)), (ATerm) ATinsert(ATempty, not_null(q_60)));
        {
          ATerm t_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(v_25);
            }
          else
            {
              t = t_25;
              t = conc_more_lists_0(t);
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
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm w_60 = NULL;
  ATerm x_60 = NULL;
  x_60 = t;
  if(((w_60 != NULL) && (w_60 != x_60)))
    _fail(x_60);
  else
    w_60 = x_60;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_23, not_null(w_60));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm u_108 (ATerm))
{
  t = explode_string_0(t);
  {
    t = u_108(t);
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
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL;
  b_61 = t;
  a_61 :
  if(((ATgetType(b_61) == AT_LIST) && !(ATisEmpty(b_61))))
    {
      c_61 = ATgetFirst((ATermList) b_61);
      d_61 = (ATerm) ATgetNext((ATermList) b_61);
      t = not_null(c_61);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL;
  i_61 = t;
  h_61 :
  if(match_cons(i_61, sym__2))
    {
      j_61 = ATgetArgument(i_61, 0);
      k_61 = ATgetArgument(i_61, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_61), not_null(k_61));
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
ATerm rewrite_1 (ATerm t, ATerm e_118 (ATerm))
{
  ATerm q_61 = NULL;
  ATerm s_61 = NULL;
  q_61 = t;
  {
    ATerm a_62 = NULL;
    t = term_w_25;
    {
      t = e_118(t);
      {
        a_62 = t;
        if(((s_61 != NULL) && (s_61 != a_62)))
          _fail(a_62);
        else
          s_61 = a_62;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_61), not_null(q_61));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,t_62 = NULL;
  n_62 = t;
  m_62 :
  if(match_cons(n_62, sym__2))
    {
      o_62 = ATgetArgument(n_62, 0);
      t_62 = ATgetArgument(n_62, 1);
      {
        ATerm x_62 = NULL;
        ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
        t = not_null(n_62);
        {
          ATerm m_2 (ATerm t)
          {
            t = term_b_26;
            return(t);
          }
          t = rewrite_1(t, m_2);
          {
            y_62 = t;
            k_62 :
            if(match_cons(y_62, sym_Defined_2))
              {
                z_62 = ATgetArgument(y_62, 0);
                a_63 = ATgetArgument(y_62, 1);
                l_62 :
                if(match_string(z_62, "j_0"))
                  {
                    if(((x_62 != NULL) && (x_62 != a_63)))
                      _fail(a_63);
                    else
                      x_62 = a_63;
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
        t = not_null(x_62);
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
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  i_63 :
  if(match_cons(j_63, sym_OpDecl_2))
    {
      k_63 = ATgetArgument(j_63, 0);
      l_63 = ATgetArgument(j_63, 1);
      {
        ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,v_63 = NULL;
        ATerm c_26;
        c_26 = t;
        {
          ATerm s_63 = NULL;
          t = not_null(l_63);
          {
            ATerm t_63 = NULL;
            t = Arity_0(t);
            {
              s_63 = t;
              {
                if(((q_63 != NULL) && (q_63 != s_63)))
                  _fail(s_63);
                else
                  q_63 = s_63;
                {
                  ATerm u_63 = NULL;
                  t = int_to_string_0(t);
                  {
                    t_63 = t;
                    {
                      if(((p_63 != NULL) && (p_63 != t_63)))
                        _fail(t_63);
                      else
                        p_63 = t_63;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_63), not_null(q_63));
                        {
                          t = ConstructorName_0(t);
                          {
                            u_63 = t;
                            if(((r_63 != NULL) && (r_63 != u_63)))
                              _fail(u_63);
                            else
                              r_63 = u_63;
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
        t = c_26;
        {
          ATerm w_63 = NULL;
          t = not_null(k_63);
          {
            t = string_as_chars_1(t, double_quote_chars_0);
            {
              w_63 = t;
              if(((v_63 != NULL) && (v_63 != w_63)))
                _fail(w_63);
              else
                v_63 = w_63;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_63)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_63)), term_i_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_26), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(p_63))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(v_63))))))));
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
  ATerm f_64 = NULL;
  ATerm h_64 = NULL;
  f_64 = t;
  {
    ATerm i_64 = NULL,k_64 = NULL;
    ATerm j_64 = NULL;
    t = not_null(f_64);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          j_64 = t;
          if(((i_64 != NULL) && (i_64 != j_64)))
            _fail(j_64);
          else
            i_64 = j_64;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_64), (ATerm) ATinsert(ATempty, term_p_26));
      {
        ATerm q_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = conc_two_lists_0(t);
            LocalPopChoice(y_26);
          }
        else
          {
            t = q_26;
            t = conc_more_lists_0(t);
          }
        {
          k_64 = t;
          if(((h_64 != NULL) && (h_64 != k_64)))
            _fail(k_64);
          else
            h_64 = k_64;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_m_7, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_b_27, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_m_7)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(h_64)));
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
  ATerm u_64 = NULL;
  u_64 = t;
  t = SSL_int_to_string(not_null(u_64));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
  h_65 = t;
  f_65 :
  if(((ATgetType(h_65) == AT_LIST) && !(ATisEmpty(h_65))))
    {
      i_65 = ATgetFirst((ATermList) h_65);
      j_65 = (ATerm) ATgetNext((ATermList) h_65);
      g_65 :
      if(match_int(i_65, 95))
        {
          ATerm l_65 = NULL;
          ATerm m_65 = NULL;
          t = not_null(j_65);
          {
            t = q_0(t);
            {
              m_65 = t;
              if(((l_65 != NULL) && (l_65 != m_65)))
                _fail(m_65);
              else
                l_65 = m_65;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_65)), term_c_27), term_c_27);
        }
      else
        {
          if(match_int(i_65, 45))
            {
              ATerm o_65 = NULL;
              ATerm p_65 = NULL;
              t = not_null(j_65);
              {
                t = q_0(t);
                {
                  p_65 = t;
                  if(((o_65 != NULL) && (o_65 != p_65)))
                    _fail(p_65);
                  else
                    o_65 = p_65;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_65)), term_c_27);
            }
          else
            {
              if(match_int(i_65, 39))
                {
                  ATerm r_65 = NULL;
                  ATerm s_65 = NULL;
                  t = not_null(j_65);
                  {
                    t = q_0(t);
                    {
                      s_65 = t;
                      if(((r_65 != NULL) && (r_65 != s_65)))
                        _fail(s_65);
                      else
                        r_65 = s_65;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(r_65)), term_c_27), term_d_27), term_c_27);
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
ATerm escape_1 (ATerm t, ATerm q_108 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm g_66 (ATerm t)
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_108(t, g_66);
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          {
            ATerm g_27 = t;
            int h_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, g_66);
                LocalPopChoice(h_27);
              }
            else
              {
                t = g_27;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = g_66(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm))
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_105(t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
        l_66 = t;
        k_66 :
        if(((ATgetType(l_66) == AT_LIST) && !(ATisEmpty(l_66))))
          {
            m_66 = ATgetFirst((ATermList) l_66);
            n_66 = (ATerm) ATgetNext((ATermList) l_66);
            {
              ATerm q_66 = NULL,s_66 = NULL;
              ATerm k_27;
              k_27 = t;
              {
                ATerm r_66 = NULL;
                t = not_null(m_66);
                {
                  t = m_105(t);
                  {
                    r_66 = t;
                    if(((q_66 != NULL) && (q_66 != r_66)))
                      _fail(r_66);
                    else
                      q_66 = r_66;
                  }
                }
              }
              t = k_27;
              {
                ATerm t_66 = NULL;
                t = not_null(n_66);
                {
                  t = foldr_3(t, k_105, l_105, m_105);
                  {
                    t_66 = t;
                    if(((s_66 != NULL) && (s_66 != t_66)))
                      _fail(t_66);
                    else
                      s_66 = t_66;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_66), not_null(s_66));
                  t = l_105(t);
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
    t = term_j_16;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_v_16;
    return(t);
  }
  t = foldr_3(t, n_2, add_0, o_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  b_67 = t;
  z_66 :
  if(match_cons(b_67, sym_FunType_2))
    {
      c_67 = ATgetArgument(b_67, 0);
      a_67 = ATgetArgument(b_67, 1);
      {
        t = not_null(c_67);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(b_67, sym_ConstType_1))
        {
          c_67 = ATgetArgument(b_67, 0);
          t = term_j_16;
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
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
  o_67 = t;
  n_67 :
  if(match_cons(o_67, sym_OpDecl_2))
    {
      p_67 = ATgetArgument(o_67, 0);
      q_67 = ATgetArgument(o_67, 1);
      {
        ATerm t_67 = NULL,u_67 = NULL;
        ATerm v_67 = NULL;
        t = not_null(q_67);
        {
          ATerm w_67 = NULL,y_67 = NULL,a_68 = NULL;
          t = Arity_0(t);
          {
            v_67 = t;
            {
              if(((t_67 != NULL) && (t_67 != v_67)))
                _fail(v_67);
              else
                t_67 = v_67;
              {
                ATerm l_27;
                l_27 = t;
                {
                  ATerm x_67 = NULL;
                  t = not_null(p_67);
                  {
                    t = escape_1(t, Cify_1);
                    {
                      x_67 = t;
                      if(((w_67 != NULL) && (w_67 != x_67)))
                        _fail(x_67);
                      else
                        w_67 = x_67;
                    }
                  }
                }
                t = l_27;
                {
                  ATerm z_67 = NULL;
                  t = not_null(t_67);
                  {
                    t = int_to_string_0(t);
                    {
                      z_67 = t;
                      if(((y_67 != NULL) && (y_67 != z_67)))
                        _fail(z_67);
                      else
                        y_67 = z_67;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_67)), term_n_27), not_null(w_67)), term_m_27);
                    {
                      t = concat_strings_0(t);
                      {
                        a_68 = t;
                        {
                          if(((u_67 != NULL) && (u_67 != a_68)))
                            _fail(a_68);
                          else
                            u_67 = a_68;
                          {
                            ATerm s_27;
                            s_27 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_67), not_null(t_67)), (ATerm) ATmakeAppl(sym_Defined_2, term_t_27, not_null(u_67)));
                              {
                                ATerm p_2 (ATerm t)
                                {
                                  t = term_b_26;
                                  return(t);
                                }
                                t = assert_1(t, p_2);
                              }
                            }
                            t = s_27;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_67)), term_a_8)));
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
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
  o_68 = t;
  k_68 :
  if(match_cons(o_68, sym_Signature_1))
    {
      p_68 = ATgetArgument(o_68, 0);
      l_68 :
      if(((ATgetType(p_68) == AT_LIST) && !(ATisEmpty(p_68))))
        {
          q_68 = ATgetFirst((ATermList) p_68);
          s_68 = (ATerm) ATgetNext((ATermList) p_68);
          m_68 :
          if(match_cons(q_68, sym_Constructors_1))
            {
              r_68 = ATgetArgument(q_68, 0);
              n_68 :
              if(((ATgetType(s_68) == AT_LIST) && ATisEmpty(s_68)))
                {
                  {
                    ATerm u_68 = NULL,v_68 = NULL,y_68 = NULL;
                    ATerm b_28;
                    b_28 = t;
                    {
                      ATerm w_68 = NULL;
                      t = not_null(r_68);
                      {
                        ATerm x_68 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          w_68 = t;
                          {
                            if(((u_68 != NULL) && (u_68 != w_68)))
                              _fail(w_68);
                            else
                              u_68 = w_68;
                            {
                              t = not_null(r_68);
                              {
                                t = InitConstructors_0(t);
                                {
                                  x_68 = t;
                                  if(((v_68 != NULL) && (v_68 != x_68)))
                                    _fail(x_68);
                                  else
                                    v_68 = x_68;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = b_28;
                    {
                      ATerm z_68 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_68), (ATerm) ATinsert(ATempty, not_null(v_68)));
                      {
                        ATerm c_28 = t;
                        int f_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(f_28);
                          }
                        else
                          {
                            t = c_28;
                            t = conc_more_lists_0(t);
                          }
                        {
                          z_68 = t;
                          if(((y_68 != NULL) && (y_68 != z_68)))
                            _fail(z_68);
                          else
                            y_68 = z_68;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(y_68));
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
  ATerm v_69 = NULL,g_70 = NULL,h_70 = NULL;
  g_70 = t;
  u_69 :
  if(match_cons(g_70, sym_FunType_2))
    {
      h_70 = ATgetArgument(g_70, 0);
      v_69 = ATgetArgument(g_70, 1);
      {
        ATerm k_70 = NULL;
        ATerm l_70 = NULL;
        t = not_null(h_70);
        {
          t = map_1(t, TranslateType_0);
          {
            l_70 = t;
            if(((k_70 != NULL) && (k_70 != l_70)))
              _fail(l_70);
            else
              k_70 = l_70;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_7, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(k_70)));
      }
    }
  else
    {
      if(match_cons(g_70, sym_ConstType_1))
        {
          h_70 = ATgetArgument(g_70, 0);
          t = term_u_7;
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
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
  g_71 = t;
  d_71 :
  if(match_cons(g_71, sym_VarDec_2))
    {
      h_71 = ATgetArgument(g_71, 0);
      i_71 = ATgetArgument(g_71, 1);
      e_71 :
      if(match_cons(i_71, sym_FunType_2))
        {
          j_71 = ATgetArgument(i_71, 0);
          f_71 = ATgetArgument(i_71, 1);
          {
            ATerm m_71 = NULL;
            ATerm n_71 = NULL;
            t = not_null(j_71);
            {
              t = map_1(t, TranslateType_0);
              {
                n_71 = t;
                if(((m_71 != NULL) && (m_71 != n_71)))
                  _fail(n_71);
                else
                  m_71 = n_71;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_7, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(m_71)))));
          }
        }
      else
        {
          if(match_cons(i_71, sym_ConstType_1))
            {
              j_71 = ATgetArgument(i_71, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_7, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_71)), term_a_8));
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
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL;
  v_71 = t;
  u_71 :
  if(match_cons(v_71, sym_SDef_3))
    {
      w_71 = ATgetArgument(v_71, 0);
      x_71 = ATgetArgument(v_71, 1);
      y_71 = ATgetArgument(v_71, 2);
      {
        ATerm c_72 = NULL;
        ATerm d_72 = NULL;
        t = not_null(x_71);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            d_72 = t;
            if(((c_72 != NULL) && (c_72 != d_72)))
              _fail(d_72);
            else
              c_72 = d_72;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(c_72)), term_u_7))))));
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
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL;
  u_72 = t;
  o_72 :
  if(match_cons(u_72, sym_Specification_1))
    {
      v_72 = ATgetArgument(u_72, 0);
      p_72 :
      if(((ATgetType(v_72) == AT_LIST) && !(ATisEmpty(v_72))))
        {
          w_72 = ATgetFirst((ATermList) v_72);
          y_72 = (ATerm) ATgetNext((ATermList) v_72);
          q_72 :
          if(match_cons(w_72, sym_Signature_1))
            {
              x_72 = ATgetArgument(w_72, 0);
              r_72 :
              if(((ATgetType(y_72) == AT_LIST) && !(ATisEmpty(y_72))))
                {
                  z_72 = ATgetFirst((ATermList) y_72);
                  b_73 = (ATerm) ATgetNext((ATermList) y_72);
                  s_72 :
                  if(match_cons(z_72, sym_Strategies_1))
                    {
                      a_73 = ATgetArgument(z_72, 0);
                      t_72 :
                      if(((ATgetType(b_73) == AT_LIST) && ATisEmpty(b_73)))
                        {
                          {
                            ATerm e_73 = NULL,f_73 = NULL,m_73 = NULL;
                            ATerm i_28;
                            i_28 = t;
                            {
                              ATerm g_73 = NULL;
                              t = not_null(a_73);
                              {
                                ATerm l_73 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  g_73 = t;
                                  {
                                    if(((e_73 != NULL) && (e_73 != g_73)))
                                      _fail(g_73);
                                    else
                                      e_73 = g_73;
                                    {
                                      t = term_b_7;
                                      {
                                        ATerm l_28 = t;
                                        int m_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm q_2 (ATerm t)
                                              {
                                                ATerm h_73 = NULL;
                                                ATerm i_73 = NULL,k_73 = NULL;
                                                ATerm j_73 = NULL;
                                                j_73 = t;
                                                if(((i_73 != NULL) && (i_73 != j_73)))
                                                  _fail(j_73);
                                                else
                                                  i_73 = j_73;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_n_28, not_null(i_73));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      k_73 = t;
                                                      if(((h_73 != NULL) && (h_73 != k_73)))
                                                        _fail(k_73);
                                                      else
                                                        h_73 = k_73;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(h_73));
                                                return(t);
                                              }
                                              t = map_1(t, q_2);
                                            }
                                            LocalPopChoice(m_28);
                                          }
                                        else
                                          {
                                            t = l_28;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          l_73 = t;
                                          if(((f_73 != NULL) && (f_73 != l_73)))
                                            _fail(l_73);
                                          else
                                            f_73 = l_73;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = i_28;
                            {
                              ATerm n_73 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_73)), not_null(e_73)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_28), (ATerm) ATmakeAppl(sym_Signature_1, not_null(x_72))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_28, (ATerm) ATinsert(ATempty, term_t_28)))), not_null(f_73));
                              {
                                t = concat_0(t);
                                {
                                  n_73 = t;
                                  if(((m_73 != NULL) && (m_73 != n_73)))
                                    _fail(n_73);
                                  else
                                    m_73 = n_73;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(m_73));
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
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  w_73 = t;
  v_73 :
  if(((ATgetType(w_73) == AT_LIST) && !(ATisEmpty(w_73))))
    {
      x_73 = ATgetFirst((ATermList) w_73);
      y_73 = (ATerm) ATgetNext((ATermList) w_73);
      t = not_null(y_73);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL;
  e_74 = t;
  d_74 :
  if(match_cons(e_74, sym__2))
    {
      f_74 = ATgetArgument(e_74, 0);
      g_74 = ATgetArgument(e_74, 1);
      {
        ATerm v_28;
        v_28 = t;
        {
          ATerm j_74 = NULL;
          ATerm k_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_74), not_null(g_74));
          {
            ATerm w_28 = t;
            int x_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(x_28);
              }
            else
              {
                t = w_28;
                t = (ATerm) ATempty;
              }
            {
              k_74 = t;
              if(((j_74 != NULL) && (j_74 != k_74)))
                _fail(k_74);
              else
                j_74 = k_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_74), not_null(g_74), not_null(j_74));
            t = table_put_0(t);
          }
        }
        t = v_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm z_117 (ATerm))
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
  ATerm y_28;
  y_28 = t;
  {
    ATerm w_74 = NULL;
    ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
    t = z_117(t);
    {
      w_74 = t;
      {
        if(((t_74 != NULL) && (t_74 != w_74)))
          _fail(w_74);
        else
          t_74 = w_74;
        {
          ATerm z_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_74), term_e_29);
              t = table_get_0(t);
              LocalPopChoice(a_29);
            }
          else
            {
              t = z_28;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            x_74 = t;
            q_74 :
            if(((ATgetType(x_74) == AT_LIST) && !(ATisEmpty(x_74))))
              {
                y_74 = ATgetFirst((ATermList) x_74);
                z_74 = (ATerm) ATgetNext((ATermList) x_74);
                {
                  if(((s_74 != NULL) && (s_74 != y_74)))
                    _fail(y_74);
                  else
                    s_74 = y_74;
                  {
                    if(((r_74 != NULL) && (r_74 != z_74)))
                      _fail(z_74);
                    else
                      r_74 = z_74;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_74), term_e_29, not_null(r_74));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_74);
                          {
                            ATerm x_2 (ATerm t)
                            {
                              ATerm a_75 = NULL;
                              a_75 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_74), not_null(a_75));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, x_2);
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
  t = y_28;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm n_91 (ATerm), ATerm o_91 (ATerm))
{
  ATerm f_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_91(t);
      t = o_91(t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = f_29;
      {
        t = o_91(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm y_117 (ATerm))
{
  ATerm h_75 = NULL;
  ATerm m_29;
  m_29 = t;
  {
    ATerm i_75 = NULL;
    ATerm j_75 = NULL;
    t = y_117(t);
    {
      i_75 = t;
      {
        if(((h_75 != NULL) && (h_75 != i_75)))
          _fail(i_75);
        else
          h_75 = i_75;
        {
          ATerm k_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_75), term_e_29);
          {
            ATerm n_29 = t;
            int o_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_29);
              }
            else
              {
                t = n_29;
                t = (ATerm) ATempty;
              }
            {
              k_75 = t;
              if(((j_75 != NULL) && (j_75 != k_75)))
                _fail(k_75);
              else
                j_75 = k_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_75), term_e_29, (ATerm) ATinsert(CheckATermList(not_null(j_75)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = m_29;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm a_118 (ATerm), ATerm b_118 (ATerm))
{
  t = begin_scope_1(t, a_118);
  {
    ATerm y_2 (ATerm t)
    {
      t = end_scope_1(t, a_118);
      return(t);
    }
    t = restore_always_2(t, b_118, y_2);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_118 (ATerm))
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL;
  s_75 = t;
  r_75 :
  if(match_cons(s_75, sym__2))
    {
      t_75 = ATgetArgument(s_75, 0);
      u_75 = ATgetArgument(s_75, 1);
      {
        ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL;
        ATerm p_29;
        p_29 = t;
        {
          ATerm a_76 = NULL;
          ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL;
          t = c_118(t);
          {
            a_76 = t;
            {
              if(((x_75 != NULL) && (x_75 != a_76)))
                _fail(a_76);
              else
                x_75 = a_76;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_75), not_null(t_75), not_null(u_75));
                {
                  t = table_push_0(t);
                  {
                    ATerm q_29 = t;
                    int r_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_75), term_e_29);
                        t = table_get_0(t);
                        LocalPopChoice(r_29);
                      }
                    else
                      {
                        t = q_29;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      b_76 = t;
                      q_75 :
                      if(((ATgetType(b_76) == AT_LIST) && !(ATisEmpty(b_76))))
                        {
                          c_76 = ATgetFirst((ATermList) b_76);
                          d_76 = (ATerm) ATgetNext((ATermList) b_76);
                          {
                            if(((y_75 != NULL) && (y_75 != c_76)))
                              _fail(c_76);
                            else
                              y_75 = c_76;
                            {
                              if(((z_75 != NULL) && (z_75 != d_76)))
                                _fail(d_76);
                              else
                                z_75 = d_76;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_75), term_e_29, (ATerm) ATinsert(CheckATermList(not_null(z_75)), (ATerm) ATinsert(CheckATermList(not_null(y_75)), not_null(t_75))));
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
        t = p_29;
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
  ATerm j_76 = NULL,k_76 = NULL;
  ATerm s_29;
  s_29 = t;
  {
    ATerm l_76 = NULL;
    ATerm m_76 = NULL;
    t = term_u_29;
    {
      l_76 = t;
      {
        if(((j_76 != NULL) && (j_76 != l_76)))
          _fail(l_76);
        else
          j_76 = l_76;
        {
          t = term_c_16;
          {
            m_76 = t;
            if(((k_76 != NULL) && (k_76 != m_76)))
              _fail(m_76);
            else
              k_76 = m_76;
          }
        }
      }
    }
  }
  t = s_29;
  {
    ATerm z_29;
    z_29 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_76), (ATerm) ATmakeAppl(sym_Defined_2, term_a_30, not_null(k_76)));
      {
        ATerm z_2 (ATerm t)
        {
          t = term_x_12;
          return(t);
        }
        t = assert_1(t, z_2);
      }
    }
    t = z_29;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm s_76 (ATerm t)
    {
      ATerm a_3 (ATerm t)
      {
        t = term_h_14;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        ATerm c_3 (ATerm t)
        {
          ATerm b_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              LocalPopChoice(f_30);
            }
          else
            {
              t = b_30;
              {
                ATerm h_30 = t;
                int k_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    LocalPopChoice(k_30);
                  }
                else
                  {
                    t = h_30;
                    {
                      ATerm l_30 = t;
                      int m_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          LocalPopChoice(m_30);
                        }
                      else
                        {
                          t = l_30;
                          t = TranslateStrat_0(t);
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_2(t, c_3, _id);
        {
          t = _all(t, s_76);
          t = repeat_2(t, Csimplify_0, _id);
        }
        return(t);
      }
      t = scope_2(t, a_3, b_3);
      return(t);
    }
    t = s_76(t);
    {
      ATerm n_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_3 (ATerm t)
          {
            ATerm r_76 = NULL;
            r_76 = t;
            q_76 :
            if(match_cons(r_76, sym_InitCachedTerms_0))
              {
                t = init_cached_terms_0(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, d_3);
          LocalPopChoice(o_30);
        }
      else
        {
          t = n_30;
          {
          }
        }
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm w_76 = NULL;
  ATerm p_30;
  p_30 = t;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm x_76 = NULL,y_76 = NULL;
      x_76 = t;
      v_76 :
      if(match_cons(x_76, sym_Program_1))
        {
          y_76 = ATgetArgument(x_76, 0);
          if(((w_76 != NULL) && (w_76 != y_76)))
            _fail(y_76);
          else
            w_76 = y_76;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_31), not_null(w_76)), term_r_30));
      {
        t = printnl_0(t);
        {
          t = term_v_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  c_77 = t;
  b_77 :
  if(match_cons(c_77, sym__2))
    {
      d_77 = ATgetArgument(c_77, 0);
      e_77 = ATgetArgument(c_77, 1);
      {
        ATerm q_31;
        q_31 = t;
        t = SSL_printnl(not_null(d_77), not_null(e_77));
        t = q_31;
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
  ATerm j_77 = NULL;
  j_77 = t;
  t = SSL_implode_string(not_null(j_77));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_31 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_32);
    }
  else
    {
      t = r_31;
      {
        ATerm o_77 = NULL,q_77 = NULL,r_77 = NULL;
        o_77 = t;
        n_77 :
        if(((ATgetType(o_77) == AT_LIST) && !(ATisEmpty(o_77))))
          {
            q_77 = ATgetFirst((ATermList) o_77);
            r_77 = (ATerm) ATgetNext((ATermList) o_77);
            {
              t = not_null(q_77);
              {
                ATerm f_3 (ATerm t)
                {
                  t = not_null(r_77);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_3);
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
  ATerm b_78 = NULL;
  ATerm d_78 = NULL;
  b_78 = t;
  {
    ATerm e_78 = NULL;
    ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
    t = not_null(b_78);
    {
      e_78 = t;
      {
        t = SSL_explode_term(not_null(e_78));
        {
          g_78 = t;
          z_77 :
          if(match_cons(g_78, sym__2))
            {
              h_78 = ATgetArgument(g_78, 0);
              i_78 = ATgetArgument(g_78, 1);
              a_78 :
              if(match_string(h_78, ""))
                {
                  if(((d_78 != NULL) && (d_78 != i_78)))
                    _fail(i_78);
                  else
                    d_78 = i_78;
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
      t = not_null(d_78);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_99 (ATerm))
{
  ATerm m_78 (ATerm t)
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_78);
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        {
          t = Nil_0(t);
          t = j_99(t);
        }
      }
    return(t);
  }
  t = m_78(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL;
  p_78 = t;
  o_78 :
  if(match_cons(p_78, sym__2))
    {
      q_78 = ATgetArgument(p_78, 0);
      r_78 = ATgetArgument(p_78, 1);
      {
        t = not_null(q_78);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(r_78);
            return(t);
          }
          t = at_end_1(t, g_3);
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
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_78 = NULL;
  y_78 = t;
  t = SSL_explode_string(not_null(y_78));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_109 (ATerm))
{
  ATerm m_32;
  m_32 = t;
  {
    ATerm d_79 = NULL,f_79 = NULL;
    ATerm n_32;
    n_32 = t;
    {
      ATerm e_79 = NULL;
      t = j_109(t);
      {
        e_79 = t;
        if(((d_79 != NULL) && (d_79 != e_79)))
          _fail(e_79);
        else
          d_79 = e_79;
      }
    }
    t = n_32;
    {
      ATerm g_79 = NULL;
      g_79 = t;
      if(((f_79 != NULL) && (f_79 != g_79)))
        _fail(g_79);
      else
        f_79 = g_79;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_79)), not_null(d_79)));
        t = printnl_0(t);
      }
    }
  }
  t = m_32;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_79 = NULL;
  k_79 = t;
  t = SSL_is_string(not_null(k_79));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              ATerm s_32 = t;
              int t_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(t_32);
                }
              else
                {
                  t = s_32;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, h_3);
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            {
              ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL;
              t_79 = t;
              s_79 :
              if(match_cons(t_79, sym_Path_1))
                {
                  u_79 = ATgetArgument(t_79, 0);
                  t = not_null(u_79);
                }
              else
                {
                  if(match_cons(t_79, sym_Var_1))
                    {
                      u_79 = ATgetArgument(t_79, 0);
                      {
                        t = not_null(u_79);
                        {
                          ATerm u_32 = t;
                          int v_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_32);
                            }
                          else
                            {
                              t = u_32;
                              {
                                ATerm i_3 (ATerm t)
                                {
                                  t = term_w_32;
                                  return(t);
                                }
                                t = debug_1(t, i_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_79, sym_Prefix_2))
                        {
                          u_79 = ATgetArgument(t_79, 0);
                          v_79 = ATgetArgument(t_79, 1);
                          {
                            ATerm a_80 = NULL,c_80 = NULL;
                            ATerm x_32;
                            x_32 = t;
                            {
                              ATerm b_80 = NULL;
                              t = not_null(u_79);
                              {
                                t = eval_config_0(t);
                                {
                                  b_80 = t;
                                  if(((a_80 != NULL) && (a_80 != b_80)))
                                    _fail(b_80);
                                  else
                                    a_80 = b_80;
                                }
                              }
                            }
                            t = x_32;
                            {
                              ATerm d_80 = NULL;
                              t = not_null(v_79);
                              {
                                t = eval_config_0(t);
                                {
                                  d_80 = t;
                                  if(((c_80 != NULL) && (c_80 != d_80)))
                                    _fail(d_80);
                                  else
                                    c_80 = d_80;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_80), not_null(c_80));
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
  ATerm l_80 = NULL;
  l_80 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_5, not_null(l_80));
    {
      t = table_get_0(t);
      {
        ATerm y_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm a_33;
              a_33 = t;
              {
                ATerm n_80 = NULL;
                ATerm o_80 = NULL;
                o_80 = t;
                if(((n_80 != NULL) && (n_80 != o_80)))
                  _fail(o_80);
                else
                  n_80 = o_80;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_t_5, not_null(l_80), not_null(n_80));
                  t = table_put_0(t);
                }
              }
              t = a_33;
            }
            LocalPopChoice(z_32);
          }
        else
          {
            t = y_32;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm s_111 (ATerm))
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33;
      d_33 = t;
      {
        ATerm s_80 = NULL;
        ATerm t_80 = NULL;
        t = term_e_33;
        {
          t = get_config_0(t);
          {
            t_80 = t;
            if(((s_80 != NULL) && (s_80 != t_80)))
              _fail(t_80);
            else
              s_80 = t_80;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_80), term_f_33);
          t = geq_0(t);
        }
      }
      t = d_33;
      t = s_111(t);
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
  x_80 = t;
  w_80 :
  if(match_cons(x_80, sym__2))
    {
      y_80 = ATgetArgument(x_80, 0);
      z_80 = ATgetArgument(x_80, 1);
      t = SSL_WriteToTextFile(not_null(y_80), not_null(z_80));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm b_71 (ATerm), ATerm c_71 (ATerm))
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL;
  k_81 = t;
  j_81 :
  if(match_cons(k_81, sym__2))
    {
      l_81 = ATgetArgument(k_81, 0);
      m_81 = ATgetArgument(k_81, 1);
      {
        ATerm q_81 = NULL,s_81 = NULL;
        ATerm r_81 = NULL;
        t = SSLgetAnnotations(not_null(k_81));
        {
          r_81 = t;
          if(((q_81 != NULL) && (q_81 != r_81)))
            _fail(r_81);
          else
            q_81 = r_81;
        }
        {
          t = not_null(l_81);
          {
            ATerm u_81 = NULL;
            t = b_71(t);
            {
              s_81 = t;
              {
                t = not_null(m_81);
                {
                  ATerm w_81 = NULL;
                  t = c_71(t);
                  {
                    u_81 = t;
                    {
                      ATerm x_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_81), not_null(u_81)), not_null(q_81));
                      {
                        x_81 = t;
                        if(((w_81 != NULL) && (w_81 != x_81)))
                          _fail(x_81);
                        else
                          w_81 = x_81;
                      }
                      t = not_null(w_81);
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
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL;
  f_82 = t;
  e_82 :
  if(match_cons(f_82, sym__2))
    {
      g_82 = ATgetArgument(f_82, 0);
      h_82 = ATgetArgument(f_82, 1);
      t = SSL_WriteToBinaryFile(not_null(g_82), not_null(h_82));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_82 = NULL;
  ATerm g_33;
  g_33 = t;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm h_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_3 (ATerm t)
          {
            ATerm q_82 = NULL,r_82 = NULL;
            q_82 = t;
            m_82 :
            if(match_cons(q_82, sym_Output_1))
              {
                r_82 = ATgetArgument(q_82, 0);
                if(((p_82 != NULL) && (p_82 != r_82)))
                  _fail(r_82);
                else
                  p_82 = r_82;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, k_3);
          LocalPopChoice(i_33);
        }
      else
        {
          t = h_33;
          {
            ATerm s_82 = NULL;
            t = term_j_33;
            {
              s_82 = t;
              if(((p_82 != NULL) && (p_82 != s_82)))
                _fail(s_82);
              else
                p_82 = s_82;
            }
          }
        }
      return(t);
    }
    t = _2(t, j_3, _id);
  }
  t = g_33;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm m_3 (ATerm t)
      {
        t = not_null(p_82);
        return(t);
      }
      t = split_2(t, m_3, _id);
      return(t);
    }
    t = _2(t, _id, l_3);
    {
      ATerm k_33 = t;
      int l_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_3 (ATerm t)
          {
            ATerm o_3 (ATerm t)
            {
              ATerm t_82 = NULL;
              t_82 = t;
              o_82 :
              if(!(match_cons(t_82, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, o_3);
            return(t);
          }
          t = _2(t, n_3, WriteToBinaryFile_0);
          LocalPopChoice(l_33);
        }
      else
        {
          t = k_33;
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
ATerm apply_strategy_1 (ATerm t, ATerm n_110 (ATerm))
{
  ATerm z_82 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL;
  ATerm m_33;
  m_33 = t;
  t = dtime_0(t);
  t = m_33;
  {
    t = n_110(t);
    {
      ATerm n_33;
      n_33 = t;
      {
        ATerm a_83 = NULL;
        t = dtime_0(t);
        {
          a_83 = t;
          if(((z_82 != NULL) && (z_82 != a_83)))
            _fail(a_83);
          else
            z_82 = a_83;
        }
      }
      t = n_33;
      {
        b_83 = t;
        y_82 :
        if(match_cons(b_83, sym__2))
          {
            c_83 = ATgetArgument(b_83, 0);
            d_83 = ATgetArgument(b_83, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_83)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_82))), not_null(d_83));
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
  ATerm j_83 = NULL;
  j_83 = t;
  t = SSL_ReadFromFile(not_null(j_83));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_106 (ATerm), ATerm y_106 (ATerm))
{
  ATerm o_83 = NULL,q_83 = NULL;
  ATerm o_33;
  o_33 = t;
  {
    ATerm p_83 = NULL;
    t = x_106(t);
    {
      p_83 = t;
      if(((o_83 != NULL) && (o_83 != p_83)))
        _fail(p_83);
      else
        o_83 = p_83;
    }
  }
  t = o_33;
  {
    ATerm r_83 = NULL;
    t = y_106(t);
    {
      r_83 = t;
      if(((q_83 != NULL) && (q_83 != r_83)))
        _fail(r_83);
      else
        q_83 = r_83;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_83), not_null(q_83));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_83 = NULL;
  ATerm p_33;
  p_33 = t;
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_3 (ATerm t)
        {
          ATerm y_83 = NULL,z_83 = NULL;
          y_83 = t;
          v_83 :
          if(match_cons(y_83, sym_Input_1))
            {
              z_83 = ATgetArgument(y_83, 0);
              if(((x_83 != NULL) && (x_83 != z_83)))
                _fail(z_83);
              else
                x_83 = z_83;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, p_3);
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        {
          ATerm a_84 = NULL;
          t = term_s_33;
          {
            a_84 = t;
            if(((x_83 != NULL) && (x_83 != a_84)))
              _fail(a_84);
            else
              x_83 = a_84;
          }
        }
      }
  }
  t = p_33;
  {
    ATerm q_3 (ATerm t)
    {
      t = not_null(x_83);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm e_84 = NULL;
    e_84 = t;
    d_84 :
    if(!(match_string(e_84, "-v")))
      {
        if(!(match_string(e_84, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_u_33;
    t = set_config_0(t);
    t = term_v_33;
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_w_33;
    return(t);
  }
  t = Option_3(t, r_3, s_3, t_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm j_84 = NULL;
    j_84 = t;
    f_84 :
    if(!(match_string(j_84, "-k")))
      {
        if(!(match_string(j_84, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm x_33;
    x_33 = t;
    {
      ATerm k_84 = NULL;
      ATerm l_84 = NULL;
      t = string_to_int_0(t);
      {
        l_84 = t;
        if(((k_84 != NULL) && (k_84 != l_84)))
          _fail(l_84);
        else
          k_84 = l_84;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_33, not_null(k_84));
        t = set_config_0(t);
      }
    }
    t = x_33;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_z_33;
    return(t);
  }
  t = ArgOption_3(t, u_3, v_3, w_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_84 = NULL;
  o_84 = t;
  t = SSL_string_to_int(not_null(o_84));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        ATerm w_84 = NULL;
        w_84 = t;
        r_84 :
        if(!(match_string(w_84, "-S")))
          {
            if(!(match_string(w_84, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = term_c_34;
        t = set_config_0(t);
        t = term_d_34;
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_e_34;
        return(t);
      }
      t = Option_3(t, x_3, y_3, z_3);
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              ATerm x_84 = NULL;
              x_84 = t;
              s_84 :
              if(!(match_string(x_84, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              ATerm a_85 = NULL;
              ATerm h_34;
              h_34 = t;
              {
                ATerm y_84 = NULL;
                ATerm z_84 = NULL;
                t = string_to_int_0(t);
                {
                  z_84 = t;
                  if(((y_84 != NULL) && (y_84 != z_84)))
                    _fail(z_84);
                  else
                    y_84 = z_84;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_33, not_null(y_84));
                  t = set_config_0(t);
                }
              }
              t = h_34;
              {
                ATerm b_85 = NULL;
                b_85 = t;
                if(((a_85 != NULL) && (a_85 != b_85)))
                  _fail(b_85);
                else
                  a_85 = b_85;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_85));
              }
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = term_i_34;
              return(t);
            }
            t = ArgOption_3(t, a_4, b_4, c_4);
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            {
              ATerm d_4 (ATerm t)
              {
                ATerm c_85 = NULL;
                c_85 = t;
                v_84 :
                if(!(match_string(c_85, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_4 (ATerm t)
              {
                t = term_k_34;
                t = set_config_0(t);
                t = term_l_34;
                return(t);
              }
              ATerm f_4 (ATerm t)
              {
                t = term_m_34;
                return(t);
              }
              t = Option_3(t, d_4, e_4, f_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(q_34);
          }
        else
          {
            t = p_34;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm i_85 = NULL;
    i_85 = t;
    f_85 :
    if(!(match_string(i_85, "-o")))
      {
        if(!(match_string(i_85, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm l_85 = NULL;
    ATerm r_34;
    r_34 = t;
    {
      ATerm j_85 = NULL;
      ATerm k_85 = NULL;
      k_85 = t;
      if(((j_85 != NULL) && (j_85 != k_85)))
        _fail(k_85);
      else
        j_85 = k_85;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_34, not_null(j_85));
        t = set_config_0(t);
      }
    }
    t = r_34;
    {
      ATerm m_85 = NULL;
      m_85 = t;
      if(((l_85 != NULL) && (l_85 != m_85)))
        _fail(m_85);
      else
        l_85 = m_85;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_85));
    }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_t_34;
    return(t);
  }
  t = ArgOption_3(t, g_4, h_4, i_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      {
        ATerm j_4 (ATerm t)
        {
          ATerm q_85 = NULL;
          q_85 = t;
          p_85 :
          if(!(match_string(q_85, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          t = term_x_34;
          t = set_config_0(t);
          t = term_y_34;
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = term_z_34;
          return(t);
        }
        t = Option_3(t, j_4, k_4, l_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL;
  w_85 = t;
  u_85 :
  if(match_string(w_85, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(w_85) == AT_LIST) && !(ATisEmpty(w_85))))
        {
          x_85 = ATgetFirst((ATermList) w_85);
          y_85 = (ATerm) ATgetNext((ATermList) w_85);
          v_85 :
          if(((ATgetType(y_85) == AT_LIST) && !(ATisEmpty(y_85))))
            {
              z_85 = ATgetFirst((ATermList) y_85);
              a_86 = (ATerm) ATgetNext((ATermList) y_85);
              {
                ATerm e_86 = NULL;
                ATerm a_35;
                a_35 = t;
                {
                  t = not_null(x_85);
                  t = l_0(t);
                }
                t = a_35;
                {
                  ATerm f_86 = NULL;
                  t = not_null(z_85);
                  {
                    t = n_0(t);
                    {
                      f_86 = t;
                      if(((e_86 != NULL) && (e_86 != f_86)))
                        _fail(f_86);
                      else
                        e_86 = f_86;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_86)), not_null(e_86));
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
  ATerm m_4 (ATerm t)
  {
    ATerm m_86 = NULL;
    m_86 = t;
    j_86 :
    if(!(match_string(m_86, "-i")))
      {
        if(!(match_string(m_86, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm p_86 = NULL;
    ATerm b_35;
    b_35 = t;
    {
      ATerm n_86 = NULL;
      ATerm o_86 = NULL;
      o_86 = t;
      if(((n_86 != NULL) && (n_86 != o_86)))
        _fail(o_86);
      else
        n_86 = o_86;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_35, not_null(n_86));
        t = set_config_0(t);
      }
    }
    t = b_35;
    {
      ATerm q_86 = NULL;
      q_86 = t;
      if(((p_86 != NULL) && (p_86 != q_86)))
        _fail(q_86);
      else
        p_86 = q_86;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_86));
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_d_35;
    return(t);
  }
  t = ArgOption_3(t, m_4, n_4, o_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm e_35 = t;
  int f_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(f_35);
    }
  else
    {
      t = e_35;
      {
        ATerm g_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(h_35);
          }
        else
          {
            t = g_35;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATempty, term_i_35));
  {
    t = printnl_0(t);
    {
      t = term_v_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_86 = NULL;
  u_86 = t;
  t = SSL_TicksToSeconds(not_null(u_86));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
  z_86 = t;
  y_86 :
  if(match_cons(z_86, sym__2))
    {
      a_87 = ATgetArgument(z_86, 0);
      b_87 = ATgetArgument(z_86, 1);
      {
        ATerm j_35 = t;
        int k_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_87), not_null(b_87));
            LocalPopChoice(k_35);
          }
        else
          {
            t = j_35;
            t = SSL_addr(not_null(a_87), not_null(b_87));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_105 (ATerm), ATerm j_105 (ATerm))
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_105(t);
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      {
        ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
        i_87 = t;
        h_87 :
        if(((ATgetType(i_87) == AT_LIST) && !(ATisEmpty(i_87))))
          {
            j_87 = ATgetFirst((ATermList) i_87);
            k_87 = (ATerm) ATgetNext((ATermList) i_87);
            {
              ATerm n_87 = NULL;
              ATerm o_87 = NULL;
              t = not_null(k_87);
              {
                t = foldr_2(t, i_105, j_105);
                {
                  o_87 = t;
                  if(((n_87 != NULL) && (n_87 != o_87)))
                    _fail(o_87);
                  else
                    n_87 = o_87;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_87), not_null(n_87));
                t = j_105(t);
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
ATerm crush_2 (ATerm t, ATerm g_104 (ATerm), ATerm h_104 (ATerm))
{
  ATerm v_87 = NULL;
  ATerm x_87 = NULL;
  v_87 = t;
  {
    ATerm y_87 = NULL;
    ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
    t = not_null(v_87);
    {
      y_87 = t;
      {
        t = SSL_explode_term(not_null(y_87));
        {
          a_88 = t;
          u_87 :
          if(match_cons(a_88, sym__2))
            {
              b_88 = ATgetArgument(a_88, 0);
              c_88 = ATgetArgument(a_88, 1);
              if(((x_87 != NULL) && (x_87 != c_88)))
                _fail(c_88);
              else
                x_87 = c_88;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_87);
      t = foldr_2(t, g_104, h_104);
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
    ATerm p_4 (ATerm t)
    {
      t = term_j_16;
      return(t);
    }
    t = crush_2(t, p_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL;
  i_88 = t;
  h_88 :
  if(match_cons(i_88, sym__2))
    {
      j_88 = ATgetArgument(i_88, 0);
      k_88 = ATgetArgument(i_88, 1);
      {
        ATerm n_35;
        n_35 = t;
        {
          ATerm o_35 = t;
          int p_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_88), not_null(k_88));
              LocalPopChoice(p_35);
            }
          else
            {
              t = o_35;
              t = SSL_gtr(not_null(j_88), not_null(k_88));
            }
        }
        t = n_35;
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
  ATerm q_88 = NULL;
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL;
      r_88 = t;
      p_88 :
      if(match_cons(r_88, sym__2))
        {
          s_88 = ATgetArgument(r_88, 0);
          t_88 = ATgetArgument(r_88, 1);
          {
            if(((q_88 != NULL) && (q_88 != s_88)))
              _fail(s_88);
            else
              q_88 = s_88;
            if(((q_88 != NULL) && (q_88 != t_88)))
              _fail(t_88);
            else
              q_88 = t_88;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_35);
    }
  else
    {
      t = q_35;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_111 (ATerm))
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_35;
      u_35 = t;
      {
        ATerm w_88 = NULL;
        ATerm x_88 = NULL;
        t = term_e_33;
        {
          t = get_config_0(t);
          {
            x_88 = t;
            if(((w_88 != NULL) && (w_88 != x_88)))
              _fail(x_88);
            else
              w_88 = x_88;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_88), term_v_16);
          t = geq_0(t);
        }
      }
      t = u_35;
      t = r_111(t);
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm b_89 = NULL,d_89 = NULL;
    ATerm v_35;
    v_35 = t;
    {
      ATerm c_89 = NULL;
      t = run_time_0(t);
      {
        c_89 = t;
        if(((b_89 != NULL) && (b_89 != c_89)))
          _fail(c_89);
        else
          b_89 = c_89;
      }
    }
    t = v_35;
    {
      ATerm e_89 = NULL;
      t = term_w_35;
      {
        t = get_config_0(t);
        {
          e_89 = t;
          if(((d_89 != NULL) && (d_89 != e_89)))
            _fail(e_89);
          else
            d_89 = e_89;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_35), not_null(b_89)), term_x_35), not_null(d_89)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_4);
  {
    t = term_j_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_89 = NULL;
  l_89 = t;
  k_89 :
  if(match_cons(l_89, sym_Version_0))
    {
      ATerm n_89 = NULL,p_89 = NULL;
      ATerm z_35;
      z_35 = t;
      {
        ATerm o_89 = NULL;
        t = SSLgetAnnotations(not_null(l_89));
        {
          o_89 = t;
          if(((n_89 != NULL) && (n_89 != o_89)))
            _fail(o_89);
          else
            n_89 = o_89;
        }
      }
      t = z_35;
      {
        ATerm q_89 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_89));
        {
          q_89 = t;
          if(((p_89 != NULL) && (p_89 != q_89)))
            _fail(q_89);
          else
            p_89 = q_89;
        }
        t = not_null(p_89);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_110 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        {
          ATerm c_36 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_36);
            }
          else
            {
              t = c_36;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, r_4);
  t = l_110(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_89 = NULL;
  v_89 = t;
  t = SSL_table_create(not_null(v_89));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_89 = NULL;
  z_89 = t;
  {
    ATerm e_36;
    e_36 = t;
    {
      t = term_f_36;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_36, term_g_36, not_null(z_89));
          t = table_put_0(t);
        }
      }
    }
    t = e_36;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_90 = NULL;
  d_90 = t;
  t = SSL_table_destroy(not_null(d_90));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_90 = NULL;
  ATerm s_90 (ATerm t)
  {
    t = SSL_exit(not_null(l_90));
    return(t);
  }
  ATerm t_90 (ATerm t)
  {
    ATerm o_90 = NULL,q_90 = NULL;
    ATerm h_36;
    h_36 = t;
    {
      ATerm p_90 = NULL;
      t = SSLgetAnnotations(not_null(l_90));
      {
        p_90 = t;
        if(((o_90 != NULL) && (o_90 != p_90)))
          _fail(p_90);
        else
          o_90 = p_90;
      }
    }
    t = h_36;
    {
      ATerm r_90 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_exit_0), not_null(o_90));
      {
        r_90 = t;
        if(((q_90 != NULL) && (q_90 != r_90)))
          _fail(r_90);
        else
          q_90 = r_90;
      }
      t = not_null(q_90);
    }
    return(t);
  }
  l_90 = t;
  k_90 :
  if(match_cons(l_90, sym_exit_0))
    {
      ATerm i_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_90(t);
          LocalPopChoice(j_36);
        }
      else
        {
          t = i_36;
          t = t_90(t);
        }
    }
  else
    {
      t = s_90(t);
    }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
  x_90 = t;
  w_90 :
  if(((ATgetType(x_90) == AT_LIST) && ATisEmpty(x_90)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_90) == AT_LIST) && !(ATisEmpty(x_90))))
        {
          y_90 = ATgetFirst((ATermList) x_90);
          z_90 = (ATerm) ATgetNext((ATermList) x_90);
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
  ATerm k_36;
  k_36 = t;
  {
    ATerm f_91 = NULL;
    ATerm i_91 = NULL;
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        {
          ATerm g_91 = NULL;
          ATerm h_91 = NULL;
          h_91 = t;
          if(((g_91 != NULL) && (g_91 != h_91)))
            _fail(h_91);
          else
            g_91 = h_91;
          t = (ATerm) ATinsert(ATempty, not_null(g_91));
        }
      }
    {
      i_91 = t;
      if(((f_91 != NULL) && (f_91 != i_91)))
        _fail(i_91);
      else
        f_91 = i_91;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_33, not_null(f_91));
      t = printnl_0(t);
    }
  }
  t = k_36;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_113 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_98 (ATerm))
{
  ATerm l_91 (ATerm t)
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        t = Cons_2(t, u_98, l_91);
      }
    return(t);
  }
  t = l_91(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL;
  a_92 = t;
  x_91 :
  if(((ATgetType(a_92) == AT_LIST) && !(ATisEmpty(a_92))))
    {
      y_91 = ATgetFirst((ATermList) a_92);
      z_91 = (ATerm) ATgetNext((ATermList) a_92);
      {
        ATerm d_92 = NULL;
        t = not_null(z_91);
        {
          ATerm p_36;
          p_36 = t;
          {
            ATerm e_92 = NULL,g_92 = NULL,i_92 = NULL;
            ATerm q_36;
            q_36 = t;
            {
              ATerm f_92 = NULL;
              t = k_0(t);
              {
                f_92 = t;
                if(((e_92 != NULL) && (e_92 != f_92)))
                  _fail(f_92);
                else
                  e_92 = f_92;
              }
            }
            t = q_36;
            {
              ATerm h_92 = NULL;
              t = not_null(y_91);
              {
                t = i_0(t);
                {
                  h_92 = t;
                  if(((g_92 != NULL) && (g_92 != h_92)))
                    _fail(h_92);
                  else
                    g_92 = h_92;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_92)), not_null(g_92));
                {
                  i_92 = t;
                  if(((d_92 != NULL) && (d_92 != i_92)))
                    _fail(i_92);
                  else
                    d_92 = i_92;
                }
              }
            }
          }
          t = p_36;
          {
            ATerm s_4 (ATerm t)
            {
              t = not_null(d_92);
              return(t);
            }
            t = reverse_acc_2(t, i_0, s_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_92) == AT_LIST) && ATisEmpty(a_92)))
        {
          {
            t = term_w_25;
            t = k_0(t);
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
  ATerm w_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_113 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm v_92 = NULL,w_92 = NULL;
  v_92 = t;
  u_92 :
  if(match_cons(v_92, sym_Program_1))
    {
      w_92 = ATgetArgument(v_92, 0);
      {
        ATerm z_92 = NULL,b_93 = NULL;
        ATerm a_93 = NULL;
        t = SSLgetAnnotations(not_null(v_92));
        {
          a_93 = t;
          if(((z_92 != NULL) && (z_92 != a_93)))
            _fail(a_93);
          else
            z_92 = a_93;
        }
        {
          t = not_null(w_92);
          {
            ATerm d_93 = NULL;
            t = s_78(t);
            {
              b_93 = t;
              {
                ATerm e_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_93)), not_null(z_92));
                {
                  e_93 = t;
                  if(((d_93 != NULL) && (d_93 != e_93)))
                    _fail(e_93);
                  else
                    d_93 = e_93;
                }
                t = not_null(d_93);
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
  ATerm m_93 = NULL;
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_93 = NULL;
      t = term_w_35;
      {
        t = get_config_0(t);
        {
          n_93 = t;
          if(((m_93 != NULL) && (m_93 != n_93)))
            _fail(n_93);
          else
            m_93 = n_93;
        }
      }
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      {
        ATerm x_4 (ATerm t)
        {
          ATerm y_4 (ATerm t)
          {
            ATerm o_93 = NULL;
            o_93 = t;
            if(((m_93 != NULL) && (m_93 != o_93)))
              _fail(o_93);
            else
              m_93 = o_93;
            return(t);
          }
          t = Program_1(t, y_4);
          return(t);
        }
        t = fetch_1(t, x_4);
      }
    }
  {
    t = term_t_36;
    {
      t = echo_0(t);
      {
        t = term_w_36;
        {
          t = table_get_0(t);
          {
            ATerm z_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, z_4);
            {
              ATerm a_5 (ATerm t)
              {
                ATerm p_93 = NULL;
                ATerm q_93 = NULL;
                q_93 = t;
                if(((p_93 != NULL) && (p_93 != q_93)))
                  _fail(q_93);
                else
                  p_93 = q_93;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_93)), term_x_36);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, a_5);
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
  ATerm y_36;
  y_36 = t;
  {
    ATerm v_93 = NULL;
    ATerm w_93 = NULL;
    w_93 = t;
    if(((v_93 != NULL) && (v_93 != w_93)))
      _fail(w_93);
    else
      v_93 = w_93;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATempty, not_null(v_93)));
      t = printnl_0(t);
    }
  }
  t = y_36;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_109 (ATerm))
{
  ATerm z_36;
  z_36 = t;
  {
    t = k_109(t);
    t = debug_0(t);
  }
  t = z_36;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_78 (ATerm))
{
  ATerm d_94 = NULL,e_94 = NULL;
  d_94 = t;
  c_94 :
  if(match_cons(d_94, sym_Undefined_1))
    {
      e_94 = ATgetArgument(d_94, 0);
      {
        ATerm j_94 = NULL,l_94 = NULL;
        ATerm k_94 = NULL;
        t = SSLgetAnnotations(not_null(d_94));
        {
          k_94 = t;
          if(((j_94 != NULL) && (j_94 != k_94)))
            _fail(k_94);
          else
            j_94 = k_94;
        }
        {
          t = not_null(e_94);
          {
            ATerm n_94 = NULL;
            t = t_78(t);
            {
              l_94 = t;
              {
                ATerm o_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_94)), not_null(j_94));
                {
                  o_94 = t;
                  if(((n_94 != NULL) && (n_94 != o_94)))
                    _fail(o_94);
                  else
                    n_94 = o_94;
                }
                t = not_null(n_94);
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
ATerm fetch_1 (ATerm t, ATerm d_99 (ATerm))
{
  ATerm t_94 (ATerm t)
  {
    ATerm a_37 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_99, _id);
        LocalPopChoice(b_37);
      }
    else
      {
        t = a_37;
        t = Cons_2(t, _id, t_94);
      }
    return(t);
  }
  t = t_94(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_112 (ATerm))
{
  t = fetch_1(t, u_112);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_94 = NULL;
  y_94 = t;
  x_94 :
  if(match_cons(y_94, sym_Help_0))
    {
      ATerm a_95 = NULL,c_95 = NULL;
      ATerm c_37;
      c_37 = t;
      {
        ATerm b_95 = NULL;
        t = SSLgetAnnotations(not_null(y_94));
        {
          b_95 = t;
          if(((a_95 != NULL) && (a_95 != b_95)))
            _fail(b_95);
          else
            a_95 = b_95;
        }
      }
      t = c_37;
      {
        ATerm d_95 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_95));
        {
          d_95 = t;
          if(((c_95 != NULL) && (c_95 != d_95)))
            _fail(d_95);
          else
            c_95 = d_95;
        }
        t = not_null(c_95);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_91 (ATerm))
{
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_91(t);
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL;
  j_95 = t;
  i_95 :
  if(match_cons(j_95, sym__2))
    {
      k_95 = ATgetArgument(j_95, 0);
      l_95 = ATgetArgument(j_95, 1);
      t = SSL_table_get(not_null(k_95), not_null(l_95));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL;
  s_95 = t;
  r_95 :
  if(match_cons(s_95, sym__3))
    {
      t_95 = ATgetArgument(s_95, 0);
      u_95 = ATgetArgument(s_95, 1);
      v_95 = ATgetArgument(s_95, 2);
      {
        ATerm f_37;
        f_37 = t;
        {
          ATerm z_95 = NULL;
          ATerm a_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_95), not_null(u_95));
          {
            ATerm g_37 = t;
            int h_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_37);
              }
            else
              {
                t = g_37;
                t = (ATerm) ATempty;
              }
            {
              a_96 = t;
              if(((z_95 != NULL) && (z_95 != a_96)))
                _fail(a_96);
              else
                z_95 = a_96;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_95), not_null(u_95), (ATerm) ATinsert(CheckATermList(not_null(z_95)), not_null(v_95)));
            t = table_put_0(t);
          }
        }
        t = f_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_113 (ATerm))
{
  ATerm e_96 = NULL;
  ATerm f_96 = NULL;
  t = term_w_25;
  {
    t = z_113(t);
    {
      f_96 = t;
      if(((e_96 != NULL) && (e_96 != f_96)))
        _fail(f_96);
      else
        e_96 = f_96;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_36, term_v_36, not_null(e_96));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL;
  l_96 = t;
  k_96 :
  if(match_string(l_96, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(l_96) == AT_LIST) && !(ATisEmpty(l_96))))
        {
          m_96 = ATgetFirst((ATermList) l_96);
          n_96 = (ATerm) ATgetNext((ATermList) l_96);
          {
            ATerm q_96 = NULL;
            ATerm i_37;
            i_37 = t;
            {
              t = not_null(m_96);
              t = a_0(t);
            }
            t = i_37;
            {
              ATerm r_96 = NULL;
              t = term_w_25;
              {
                t = d_0(t);
                {
                  r_96 = t;
                  if(((q_96 != NULL) && (q_96 != r_96)))
                    _fail(r_96);
                  else
                    q_96 = r_96;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_96)), not_null(q_96));
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
  ATerm b_5 (ATerm t)
  {
    ATerm w_96 = NULL;
    w_96 = t;
    v_96 :
    if(!(match_string(w_96, "--help")))
      {
        if(!(match_string(w_96, "-h")))
          {
            if(!(match_string(w_96, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_k_37;
    {
      t = set_config_0(t);
      t = term_l_37;
    }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_m_37;
    return(t);
  }
  t = Option_3(t, b_5, c_5, d_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL;
  z_96 = t;
  y_96 :
  if(((ATgetType(z_96) == AT_LIST) && !(ATisEmpty(z_96))))
    {
      a_97 = ATgetFirst((ATermList) z_96);
      b_97 = (ATerm) ATgetNext((ATermList) z_96);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_97)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_97)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_72 (ATerm), ATerm l_72 (ATerm))
{
  ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL;
  l_97 = t;
  k_97 :
  if(((ATgetType(l_97) == AT_LIST) && !(ATisEmpty(l_97))))
    {
      m_97 = ATgetFirst((ATermList) l_97);
      n_97 = (ATerm) ATgetNext((ATermList) l_97);
      {
        ATerm r_97 = NULL,t_97 = NULL;
        ATerm s_97 = NULL;
        t = SSLgetAnnotations(not_null(l_97));
        {
          s_97 = t;
          if(((r_97 != NULL) && (r_97 != s_97)))
            _fail(s_97);
          else
            r_97 = s_97;
        }
        {
          t = not_null(m_97);
          {
            ATerm v_97 = NULL;
            t = k_72(t);
            {
              t_97 = t;
              {
                t = not_null(n_97);
                {
                  ATerm x_97 = NULL;
                  t = l_72(t);
                  {
                    v_97 = t;
                    {
                      ATerm y_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_97)), not_null(t_97)), not_null(r_97));
                      {
                        y_97 = t;
                        if(((x_97 != NULL) && (x_97 != y_97)))
                          _fail(y_97);
                        else
                          x_97 = y_97;
                      }
                      t = not_null(x_97);
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
  ATerm i_98 = NULL;
  i_98 = t;
  h_98 :
  if(((ATgetType(i_98) == AT_LIST) && ATisEmpty(i_98)))
    {
      {
        ATerm k_98 = NULL,m_98 = NULL;
        ATerm n_37;
        n_37 = t;
        {
          ATerm l_98 = NULL;
          t = SSLgetAnnotations(not_null(i_98));
          {
            l_98 = t;
            if(((k_98 != NULL) && (k_98 != l_98)))
              _fail(l_98);
            else
              k_98 = l_98;
          }
        }
        t = n_37;
        {
          ATerm n_98 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_98));
          {
            n_98 = t;
            if(((m_98 != NULL) && (m_98 != n_98)))
              _fail(n_98);
            else
              m_98 = n_98;
          }
          t = not_null(m_98);
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
  ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL;
  w_98 = t;
  t_98 :
  if(match_cons(w_98, sym__2))
    {
      x_98 = ATgetArgument(w_98, 0);
      y_98 = ATgetArgument(w_98, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_5, not_null(x_98), not_null(y_98));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_113 (ATerm))
{
  ATerm o_37;
  o_37 = t;
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_37;
        t = x_113(t);
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        {
        }
      }
  }
  t = o_37;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm i_99 = NULL;
      ATerm s_37;
      s_37 = t;
      {
        ATerm g_99 = NULL;
        ATerm h_99 = NULL;
        h_99 = t;
        if(((g_99 != NULL) && (g_99 != h_99)))
          _fail(h_99);
        else
          g_99 = h_99;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_35, not_null(g_99));
          t = set_config_0(t);
        }
      }
      t = s_37;
      {
        ATerm l_99 = NULL;
        l_99 = t;
        if(((i_99 != NULL) && (i_99 != l_99)))
          _fail(l_99);
        else
          i_99 = l_99;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_99));
      }
      return(t);
    }
    ATerm f_5 (ATerm t)
    {
      ATerm t_37 = t;
      int u_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_37);
            }
          else
            {
              t = v_37;
              {
                t = x_113(t);
                t = Cons_2(t, _id, f_5);
              }
            }
          LocalPopChoice(u_37);
        }
      else
        {
          t = t_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_5, f_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL;
  ATerm x_37;
  x_37 = t;
  {
    ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL;
    u_99 = t;
    q_99 :
    if(match_cons(u_99, sym__3))
      {
        v_99 = ATgetArgument(u_99, 0);
        w_99 = ATgetArgument(u_99, 1);
        x_99 = ATgetArgument(u_99, 2);
        {
          if(((r_99 != NULL) && (r_99 != v_99)))
            _fail(v_99);
          else
            r_99 = v_99;
          {
            if(((s_99 != NULL) && (s_99 != w_99)))
              _fail(w_99);
            else
              s_99 = w_99;
            {
              if(((t_99 != NULL) && (t_99 != x_99)))
                _fail(x_99);
              else
                t_99 = x_99;
              t = SSL_table_put(not_null(r_99), not_null(s_99), not_null(t_99));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_113 (ATerm))
{
  ATerm a_100 = NULL;
  ATerm y_37;
  y_37 = t;
  {
    t = term_z_37;
    t = table_put_0(t);
  }
  t = y_37;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm a_38 = t;
      int b_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_113(t);
          LocalPopChoice(b_38);
        }
      else
        {
          t = a_38;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_5);
    {
      ATerm c_38 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_38;
          e_38 = t;
          {
            ATerm f_38 = t;
            int g_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_37;
                t = get_config_0(t);
                LocalPopChoice(g_38);
              }
            else
              {
                t = f_38;
                t = fetch_1(t, Help_0);
              }
          }
          t = e_38;
          {
            t = system_usage_0(t);
            {
              t = term_j_16;
              t = exit_0(t);
            }
          }
          LocalPopChoice(d_38);
        }
      else
        {
          t = c_38;
          {
            ATerm h_38 = t;
            int i_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    ATerm b_100 = NULL;
                    b_100 = t;
                    if(((a_100 != NULL) && (a_100 != b_100)))
                      _fail(b_100);
                    else
                      a_100 = b_100;
                    return(t);
                  }
                  t = Undefined_1(t, i_5);
                  return(t);
                }
                t = fetch_1(t, h_5);
                {
                  ATerm k_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_100)), term_j_38);
                    return(t);
                  }
                  t = say_1(t, k_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_v_16;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(i_38);
              }
            else
              {
                t = h_38;
                {
                }
              }
          }
        }
      {
        ATerm k_38;
        k_38 = t;
        {
          t = term_u_36;
          t = table_destroy_0(t);
        }
        t = k_38;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm u_110 (ATerm))
{
  t = parse_options_1(t, r_110);
  {
    t = store_options_0(t);
    {
      t = t_110(t);
      {
        ATerm l_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_110);
            LocalPopChoice(m_38);
          }
        else
          {
            t = l_38;
            {
              ATerm n_38 = t;
              int o_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_110(t);
                  t = report_success_0(t);
                  LocalPopChoice(o_38);
                }
              else
                {
                  t = n_38;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm))
{
  ATerm l_5 (ATerm t)
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_111(t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, i_111);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_5, k_111, l_111, m_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm r_38;
      r_38 = t;
      {
        ATerm e_100 = NULL;
        ATerm f_100 = NULL;
        t = term_w_35;
        {
          t = get_config_0(t);
          {
            f_100 = t;
            if(((e_100 != NULL) && (e_100 != f_100)))
              _fail(f_100);
            else
              e_100 = f_100;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATempty, not_null(e_100)));
          t = printnl_0(t);
        }
      }
      t = r_38;
      return(t);
    }
    t = if_verbose2_1(t, o_5);
    return(t);
  }
  t = iowrap_4(t, c_111, d_111, e_111, n_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_111 (ATerm), ATerm b_111 (ATerm))
{
  t = iowrap_3(t, a_111, b_111, default_usage_0);
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
