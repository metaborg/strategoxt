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
Symbol sym_CUT_0;
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
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_m_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_y_33;
ATerm term_x_33;
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
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_6);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym__2, term_b_6, term_g_6);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
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
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
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
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
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
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
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
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_e_33, term_j_16);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_16);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_w_25);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_w_25);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_w_25);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
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
ATerm Option_2 (ATerm, ATerm x_111 (ATerm), ATerm y_111 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm g_93 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm q_90 (ATerm), ATerm r_90 (ATerm));
ATerm repeat_1 (ATerm, ATerm t_90 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm n_76 (ATerm));
ATerm Real_1 (ATerm, ATerm w_2 (ATerm));
ATerm Str_1 (ATerm, ATerm v_2 (ATerm));
ATerm Int_1 (ATerm, ATerm u_2 (ATerm));
ATerm Anno_2 (ATerm, ATerm s_2 (ATerm), ATerm t_2 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm s_73 (ATerm), ATerm t_73 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm Var_1 (ATerm, ATerm r_2 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm r_0 (ATerm), ATerm v_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm v_104 (ATerm));
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm a_80 (ATerm));
ATerm FunCall_2 (ATerm, ATerm e_83 (ATerm), ATerm f_83 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm r_91 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm q_91 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm s_107 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_117 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm m_0 (ATerm));
ATerm escape_1 (ATerm, ATerm o_107 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm j_104 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm w_116 (ATerm));
ATerm restore_always_2 (ATerm, ATerm o_90 (ATerm), ATerm p_90 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_116 (ATerm));
ATerm scope_2 (ATerm, ATerm x_116 (ATerm), ATerm y_116 (ATerm));
ATerm assert_1 (ATerm, ATerm z_116 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_98 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_108 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_110 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm z_69 (ATerm), ATerm a_70 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm l_109 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_105 (ATerm), ATerm v_105 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_104 (ATerm), ATerm g_104 (ATerm));
ATerm crush_2 (ATerm, ATerm d_103 (ATerm), ATerm e_103 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_110 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm j_109 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_112 (ATerm));
ATerm map_1 (ATerm, ATerm t_97 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_112 (ATerm));
ATerm Program_1 (ATerm, ATerm q_77 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm i_108 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_77 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_98 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_111 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_90 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_112 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_71 (ATerm), ATerm j_71 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_112 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_112 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm s_109 (ATerm));
ATerm iowrap_4 (ATerm, ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm j_110 (ATerm));
ATerm iowrap_3 (ATerm, ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm));
ATerm iowrap_2 (ATerm, ATerm y_109 (ATerm), ATerm z_109 (ATerm));
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
ATerm Option_2 (ATerm t, ATerm x_111 (ATerm), ATerm y_111 (ATerm))
{
  ATerm d_0 (ATerm t)
  {
    t = term_u_5;
    return(t);
  }
  t = Option_3(t, x_111, y_111, d_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm v_5 = t;
  int w_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 (ATerm t)
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
      ATerm n_0 (ATerm t)
      {
        t = term_y_5;
        {
          ATerm o_0 (ATerm t)
          {
            t = term_z_5;
            return(t);
          }
          t = debug_1(t, o_0);
          {
            ATerm a_6;
            a_6 = t;
            {
              t = term_h_6;
              {
                ATerm p_0 (ATerm t)
                {
                  t = term_i_6;
                  return(t);
                }
                t = assert_1(t, p_0);
              }
            }
            t = a_6;
          }
        }
        return(t);
      }
      t = Option_2(t, f_0, n_0);
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
            ATerm s_0 (ATerm t)
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
            ATerm t_0 (ATerm t)
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
            ATerm x_0 (ATerm t)
            {
              t = term_z_6;
              return(t);
            }
            t = ArgOption_3(t, s_0, t_0, x_0);
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
ATerm oncetd_1 (ATerm t, ATerm g_93 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    ATerm g_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_93(t);
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
ATerm repeat_2 (ATerm t, ATerm q_90 (ATerm), ATerm r_90 (ATerm))
{
  ATerm j_11 (ATerm t)
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_90(t);
        t = j_11(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = r_90(t);
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm t_90 (ATerm))
{
  t = repeat_2(t, t_90, _id);
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
            if(match_string(q_12, "q_0"))
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
ATerm BuildDefault_1 (ATerm t, ATerm n_76 (ATerm))
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
            t = n_76(t);
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
ATerm Op_2 (ATerm t, ATerm s_73 (ATerm), ATerm t_73 (ATerm))
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
            t = s_73(t);
            {
              c_20 = t;
              {
                t = not_null(w_19);
                {
                  ATerm g_20 = NULL;
                  t = t_73(t);
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
                if(match_string(c_22, "h_0"))
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
ATerm Cons_T_2 (ATerm t, ATerm r_0 (ATerm), ATerm v_0 (ATerm))
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
              t = r_0(t);
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
                            t = v_0(t);
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
ATerm thread_map_1 (ATerm t, ATerm v_104 (ATerm))
{
  ATerm u_25 (ATerm t)
  {
    ATerm d_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, v_104, u_25);
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
            if(!(match_string(o_26, "w_0")))
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
ATerm Id_1 (ATerm t, ATerm a_80 (ATerm))
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
            t = a_80(t);
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
ATerm FunCall_2 (ATerm t, ATerm e_83 (ATerm), ATerm f_83 (ATerm))
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
            t = e_83(t);
            {
              e_30 = t;
              {
                t = not_null(y_29);
                {
                  ATerm i_30 = NULL;
                  t = f_83(t);
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
ATerm bottomup_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    t = bottomup_1(t, r_91);
    return(t);
  }
  t = _all(t, w_1);
  t = r_91(t);
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
ATerm topdown_1 (ATerm t, ATerm q_91 (ATerm))
{
  t = q_91(t);
  {
    ATerm y_1 (ATerm t)
    {
      t = topdown_1(t, q_91);
      return(t);
    }
    t = _all(t, y_1);
  }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  ATerm o_54 (ATerm t)
  {
    ATerm x_48 = NULL,n_49 = NULL;
    ATerm h_16;
    h_16 = t;
    {
      ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
      t = not_null(f_46);
      {
        ATerm i_16 = t;
        if((PushChoice() == 0))
          {
            ATerm y_48 = NULL;
            y_48 = t;
            l_42 :
            if(!(match_string(y_48, "Nil")))
              {
                if(!(match_string(y_48, "Cons")))
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_45), term_j_16);
          {
            ATerm z_1 (ATerm t)
            {
              ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
              z_48 = t;
              x_42 :
              if(match_cons(z_48, sym__2))
                {
                  a_49 = ATgetArgument(z_48, 0);
                  b_49 = ATgetArgument(z_48, 1);
                  {
                    ATerm e_49 = NULL,i_49 = NULL;
                    ATerm k_16;
                    k_16 = t;
                    {
                      ATerm f_49 = NULL,h_49 = NULL;
                      ATerm g_49 = NULL;
                      t = not_null(b_49);
                      {
                        t = int_to_string_0(t);
                        {
                          g_49 = t;
                          if(((f_49 != NULL) && (f_49 != g_49)))
                            _fail(g_49);
                          else
                            f_49 = g_49;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_49), (ATerm) ATmakeAppl(sym_FunCall_2, term_m_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(f_49))), not_null(e_46))));
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
                            h_49 = t;
                            if(((e_49 != NULL) && (e_49 != h_49)))
                              _fail(h_49);
                            else
                              e_49 = h_49;
                          }
                        }
                      }
                    }
                    t = k_16;
                    {
                      ATerm j_49 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_49), term_v_16);
                      {
                        t = add_0(t);
                        {
                          j_49 = t;
                          if(((i_49 != NULL) && (i_49 != j_49)))
                            _fail(j_49);
                          else
                            i_49 = j_49;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_49), not_null(i_49));
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
              k_49 = t;
              z_42 :
              if(match_cons(k_49, sym__2))
                {
                  l_49 = ATgetArgument(k_49, 0);
                  m_49 = ATgetArgument(k_49, 1);
                  if(((x_48 != NULL) && (x_48 != l_49)))
                    _fail(l_49);
                  else
                    x_48 = l_49;
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
      ATerm o_49 = NULL,q_49 = NULL;
      ATerm p_49 = NULL;
      t = not_null(o_45);
      {
        t = length_0(t);
        {
          p_49 = t;
          if(((o_49 != NULL) && (o_49 != p_49)))
            _fail(p_49);
          else
            o_49 = p_49;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_46), not_null(o_49));
        {
          t = ConstructorName_0(t);
          {
            q_49 = t;
            if(((n_49 != NULL) && (n_49 != q_49)))
              _fail(q_49);
            else
              n_49 = q_49;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_49))), not_null(e_46))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(x_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
    }
    return(t);
  }
  ATerm p_54 (ATerm t)
  {
    ATerm w_49 = NULL;
    ATerm x_49 = NULL;
    t = not_null(f_46);
    {
      t = real_to_string_0(t);
      {
        x_49 = t;
        if(((w_49 != NULL) && (w_49 != x_49)))
          _fail(x_49);
        else
          w_49 = x_49;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, not_null(e_46))), term_m_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_17, not_null(e_46)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(w_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
    return(t);
  }
  ATerm q_54 (ATerm t)
  {
    ATerm a_50 = NULL;
    ATerm b_50 = NULL;
    t = not_null(f_46);
    {
      t = int_to_string_0(t);
      {
        b_50 = t;
        if(((a_50 != NULL) && (a_50 != b_50)))
          _fail(b_50);
        else
          a_50 = b_50;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, not_null(e_46))), term_u_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_18, not_null(e_46)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_50)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
    return(t);
  }
  ATerm r_54 (ATerm t)
  {
    ATerm e_50 = NULL;
    ATerm f_50 = NULL;
    t = not_null(f_46);
    {
      t = string_as_chars_1(t, escape_chars_0);
      {
        t = string_as_chars_1(t, double_quote_chars_0);
        {
          f_50 = t;
          if(((e_50 != NULL) && (e_50 != f_50)))
            _fail(f_50);
          else
            e_50 = f_50;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_18, not_null(e_46)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_15), term_y_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(e_50)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
    return(t);
  }
  ATerm s_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), term_v_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), not_null(e_46))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, not_null(e_46)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), term_i_7, not_null(e_46))));
    return(t);
  }
  ATerm t_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(o_45), not_null(e_46))), (ATerm) ATmakeAppl(sym_Match_2, not_null(f_46), not_null(e_46))));
    return(t);
  }
  ATerm u_54 (ATerm t)
  {
    t = term_y_18;
    return(t);
  }
  ATerm v_54 (ATerm t)
  {
    t = term_y_18;
    return(t);
  }
  ATerm w_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(h_46), term_i_17);
    return(t);
  }
  ATerm x_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)))), term_a_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_45)), term_i_7, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_45)), term_i_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_46)), not_null(a_46), not_null(b_46)))));
    return(t);
  }
  ATerm y_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)))), term_a_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(z_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_46)), not_null(a_46), not_null(b_46)))));
    return(t);
  }
  ATerm z_54 (ATerm t)
  {
    ATerm g_51 = NULL,v_51 = NULL,x_51 = NULL;
    ATerm r_19;
    r_19 = t;
    {
      ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
      t = not_null(x_45);
      {
        ATerm s_19 = t;
        if((PushChoice() == 0))
          {
            ATerm h_51 = NULL;
            h_51 = t;
            f_43 :
            if(!(match_string(h_51, "Nil")))
              {
                if(!(match_string(h_51, "Cons")))
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_45), term_j_16);
          {
            ATerm a_2 (ATerm t)
            {
              ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL;
              i_51 = t;
              j_43 :
              if(match_cons(i_51, sym__2))
                {
                  j_51 = ATgetArgument(i_51, 0);
                  l_51 = ATgetArgument(i_51, 1);
                  k_43 :
                  if(match_cons(j_51, sym_Var_1))
                    {
                      k_51 = ATgetArgument(j_51, 0);
                      {
                        ATerm o_51 = NULL,q_51 = NULL;
                        ATerm x_19;
                        x_19 = t;
                        {
                          ATerm p_51 = NULL;
                          t = not_null(l_51);
                          {
                            t = int_to_string_0(t);
                            {
                              p_51 = t;
                              if(((o_51 != NULL) && (o_51 != p_51)))
                                _fail(p_51);
                              else
                                o_51 = p_51;
                            }
                          }
                        }
                        t = x_19;
                        {
                          ATerm r_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_51), term_v_16);
                          {
                            t = add_0(t);
                            {
                              r_51 = t;
                              if(((q_51 != NULL) && (q_51 != r_51)))
                                _fail(r_51);
                              else
                                q_51 = r_51;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_51)), term_i_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(o_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)))))), not_null(q_51));
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
              s_51 = t;
              m_43 :
              if(match_cons(s_51, sym__2))
                {
                  t_51 = ATgetArgument(s_51, 0);
                  u_51 = ATgetArgument(s_51, 1);
                  if(((g_51 != NULL) && (g_51 != t_51)))
                    _fail(t_51);
                  else
                    g_51 = t_51;
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
        ATerm w_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_45), not_null(v_45));
        {
          t = ConstructorName_0(t);
          {
            w_51 = t;
            if(((v_51 != NULL) && (v_51 != w_51)))
              _fail(w_51);
            else
              v_51 = w_51;
          }
        }
      }
      t = y_19;
      {
        ATerm y_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_51), (ATerm) ATinsert(ATempty, not_null(z_45)));
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
            y_51 = t;
            if(((x_51 != NULL) && (x_51 != y_51)))
              _fail(y_51);
            else
              x_51 = y_51;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(x_51)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_46)), not_null(a_46), not_null(b_46)))));
      }
    }
    return(t);
  }
  ATerm a_55 (ATerm t)
  {
    ATerm f_52 = NULL;
    ATerm g_52 = NULL;
    t = not_null(x_45);
    {
      t = real_to_string_0(t);
      {
        g_52 = t;
        if(((f_52 != NULL) && (f_52 != g_52)))
          _fail(g_52);
        else
          f_52 = g_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(f_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_46)), not_null(a_46), not_null(b_46)))));
    return(t);
  }
  ATerm b_55 (ATerm t)
  {
    ATerm n_52 = NULL;
    ATerm o_52 = NULL;
    t = not_null(x_45);
    {
      t = int_to_string_0(t);
      {
        o_52 = t;
        if(((n_52 != NULL) && (n_52 != o_52)))
          _fail(o_52);
        else
          n_52 = o_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(n_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_46)), not_null(a_46), not_null(b_46)))));
    return(t);
  }
  ATerm c_55 (ATerm t)
  {
    ATerm v_52 = NULL;
    ATerm w_52 = NULL;
    t = not_null(x_45);
    {
      t = string_as_chars_1(t, escape_chars_0);
      {
        t = string_as_chars_1(t, double_quote_chars_0);
        {
          w_52 = t;
          if(((v_52 != NULL) && (v_52 != w_52)))
            _fail(w_52);
          else
            v_52 = w_52;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(v_52)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_46)), not_null(a_46), not_null(b_46)))));
    return(t);
  }
  ATerm d_55 (ATerm t)
  {
    t = not_null(b_46);
    return(t);
  }
  ATerm e_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_46)), (ATerm) ATmakeAppl(sym_Case_3, not_null(e_46), not_null(b_46), not_null(c_46)));
    return(t);
  }
  ATerm f_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46)));
    return(t);
  }
  ATerm g_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), term_v_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_46)))));
    return(t);
  }
  ATerm h_55 (ATerm t)
  {
    t = not_null(e_46);
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
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_46)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_46))));
    return(t);
  }
  ATerm i_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), term_i_7, term_i_17));
    return(t);
  }
  ATerm j_55 (ATerm t)
  {
    ATerm s_53 = NULL;
    ATerm t_53 = NULL;
    t = not_null(h_46);
    {
      t = construct_term_caching_0(t);
      {
        t_53 = t;
        if(((s_53 != NULL) && (s_53 != t_53)))
          _fail(t_53);
        else
          s_53 = t_53;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, not_null(s_53)));
    return(t);
  }
  g_46 = t;
  t_43 :
  if(match_cons(g_46, sym_Let_2))
    {
      h_46 = ATgetArgument(g_46, 0);
      e_46 = ATgetArgument(g_46, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(h_46), (ATerm) ATinsert(ATempty, not_null(e_46)));
    }
  else
    {
      if(match_cons(g_46, sym_Where_1))
        {
          h_46 = ATgetArgument(g_46, 0);
          {
            ATerm l_46 = NULL;
            ATerm m_46 = NULL;
            t = new_0(t);
            {
              m_46 = t;
              if(((l_46 != NULL) && (l_46 != m_46)))
                _fail(m_46);
              else
                l_46 = m_46;
            }
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_46)), term_a_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_46))))), not_null(h_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_46)), term_i_7, term_i_17))));
          }
        }
      else
        {
          if(match_cons(g_46, sym_Test_1))
            {
              h_46 = ATgetArgument(g_46, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(h_46));
            }
          else
            {
              if(match_cons(g_46, sym_Call_2))
                {
                  h_46 = ATgetArgument(g_46, 0);
                  e_46 = ATgetArgument(g_46, 1);
                  u_43 :
                  if(match_cons(h_46, sym_SVar_1))
                    {
                      f_46 = ATgetArgument(h_46, 0);
                      {
                        ATerm q_46 = NULL;
                        ATerm w_46 = NULL;
                        t = not_null(e_46);
                        {
                          ATerm b_2 (ATerm t)
                          {
                            ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
                            r_46 = t;
                            r_41 :
                            if(match_cons(r_46, sym_Call_2))
                              {
                                s_46 = ATgetArgument(r_46, 0);
                                u_46 = ATgetArgument(r_46, 1);
                                s_41 :
                                if(match_cons(s_46, sym_SVar_1))
                                  {
                                    t_46 = ATgetArgument(s_46, 0);
                                    t_41 :
                                    if(((ATgetType(u_46) == AT_LIST) && ATisEmpty(u_46)))
                                      {
                                        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(t_46));
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
                            w_46 = t;
                            if(((q_46 != NULL) && (q_46 != w_46)))
                              _fail(w_46);
                            else
                              q_46 = w_46;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), (ATerm) ATinsert(CheckATermList(not_null(q_46)), term_i_17))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(g_46, sym_Prim_2))
                    {
                      h_46 = ATgetArgument(g_46, 0);
                      e_46 = ATgetArgument(g_46, 1);
                      {
                        ATerm z_46 = NULL;
                        ATerm a_47 = NULL;
                        t = not_null(e_46);
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
                            a_47 = t;
                            if(((z_46 != NULL) && (z_46 != a_47)))
                              _fail(a_47);
                            else
                              z_46 = a_47;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_46)), not_null(z_46))));
                      }
                    }
                  else
                    {
                      if(match_cons(g_46, sym_Not_1))
                        {
                          h_46 = ATgetArgument(g_46, 0);
                          {
                            ATerm c_47 = NULL;
                            ATerm d_47 = NULL;
                            t = new_0(t);
                            {
                              d_47 = t;
                              if(((c_47 != NULL) && (c_47 != d_47)))
                                _fail(d_47);
                              else
                                c_47 = d_47;
                            }
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_47)), term_a_8), term_q_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_21), term_m_21), not_null(h_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_47)))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(g_46, sym_LGChoice_2))
                            {
                              h_46 = ATgetArgument(g_46, 0);
                              e_46 = ATgetArgument(g_46, 1);
                              {
                                ATerm h_47 = NULL;
                                ATerm i_47 = NULL;
                                t = new_0(t);
                                {
                                  i_47 = t;
                                  if(((h_47 != NULL) && (h_47 != i_47)))
                                    _fail(i_47);
                                  else
                                    h_47 = i_47;
                                }
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_47)), term_a_8), term_q_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_u_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(h_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_47)))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(g_46, sym_GChoice_2))
                                {
                                  h_46 = ATgetArgument(g_46, 0);
                                  e_46 = ATgetArgument(g_46, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(h_46), not_null(e_46));
                                }
                              else
                                {
                                  if(match_cons(g_46, sym_GuardedLChoice_3))
                                    {
                                      h_46 = ATgetArgument(g_46, 0);
                                      e_46 = ATgetArgument(g_46, 1);
                                      b_46 = ATgetArgument(g_46, 2);
                                      {
                                        ATerm o_47 = NULL,p_47 = NULL;
                                        ATerm q_47 = NULL;
                                        ATerm r_47 = NULL;
                                        t = new_0(t);
                                        {
                                          q_47 = t;
                                          {
                                            if(((o_47 != NULL) && (o_47 != q_47)))
                                              _fail(q_47);
                                            else
                                              o_47 = q_47;
                                            {
                                              t = new_0(t);
                                              {
                                                r_47 = t;
                                                if(((p_47 != NULL) && (p_47 != r_47)))
                                                  _fail(r_47);
                                                else
                                                  p_47 = r_47;
                                              }
                                            }
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_47)), term_a_8), term_l_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_47)), term_a_8), term_q_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_47)))))), not_null(h_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_47)))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(g_46, sym_LChoice_2))
                                        {
                                          h_46 = ATgetArgument(g_46, 0);
                                          e_46 = ATgetArgument(g_46, 1);
                                          {
                                            ATerm u_47 = NULL,v_47 = NULL;
                                            ATerm w_47 = NULL;
                                            ATerm x_47 = NULL;
                                            t = new_0(t);
                                            {
                                              w_47 = t;
                                              {
                                                if(((u_47 != NULL) && (u_47 != w_47)))
                                                  _fail(w_47);
                                                else
                                                  u_47 = w_47;
                                                {
                                                  t = new_0(t);
                                                  {
                                                    x_47 = t;
                                                    if(((v_47 != NULL) && (v_47 != x_47)))
                                                      _fail(x_47);
                                                    else
                                                      v_47 = x_47;
                                                  }
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_47)), term_a_8), term_l_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_47)), term_a_8), term_q_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_47)))))), not_null(h_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_17, term_i_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(u_47)))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(g_46, sym_Choice_2))
                                            {
                                              h_46 = ATgetArgument(g_46, 0);
                                              e_46 = ATgetArgument(g_46, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_46), not_null(e_46));
                                            }
                                          else
                                            {
                                              if(match_cons(g_46, sym_Seq_2))
                                                {
                                                  h_46 = ATgetArgument(g_46, 0);
                                                  e_46 = ATgetArgument(g_46, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_46)), not_null(h_46)));
                                                }
                                              else
                                                {
                                                  if(match_cons(g_46, sym_Scope_2))
                                                    {
                                                      h_46 = ATgetArgument(g_46, 0);
                                                      e_46 = ATgetArgument(g_46, 1);
                                                      {
                                                        ATerm k_48 = NULL;
                                                        ATerm o_22;
                                                        o_22 = t;
                                                        {
                                                          t = not_null(h_46);
                                                          {
                                                            ATerm e_2 (ATerm t)
                                                            {
                                                              ATerm i_48 = NULL;
                                                              i_48 = t;
                                                              {
                                                                ATerm p_22;
                                                                p_22 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_48), term_v_22);
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
                                                          ATerm n_48 = NULL;
                                                          t = not_null(h_46);
                                                          {
                                                            ATerm g_2 (ATerm t)
                                                            {
                                                              ATerm l_48 = NULL;
                                                              l_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_48)), term_a_8), term_w_22);
                                                              return(t);
                                                            }
                                                            t = map_1(t, g_2);
                                                            {
                                                              n_48 = t;
                                                              if(((k_48 != NULL) && (k_48 != n_48)))
                                                                _fail(n_48);
                                                              else
                                                                k_48 = n_48;
                                                            }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, not_null(k_48))), (ATerm) ATinsert(ATempty, not_null(e_46)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(g_46, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(g_46, sym_Id_0))
                                                            {
                                                              t = term_y_18;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(g_46, sym_Match_2))
                                                                {
                                                                  h_46 = ATgetArgument(g_46, 0);
                                                                  e_46 = ATgetArgument(g_46, 1);
                                                                  v_43 :
                                                                  if(match_cons(h_46, sym_Op_2))
                                                                    {
                                                                      f_46 = ATgetArgument(h_46, 0);
                                                                      o_45 = ATgetArgument(h_46, 1);
                                                                      w_43 :
                                                                      if(((ATgetType(o_45) == AT_LIST) && !(ATisEmpty(o_45))))
                                                                        {
                                                                          k_45 = ATgetFirst((ATermList) o_45);
                                                                          l_45 = (ATerm) ATgetNext((ATermList) o_45);
                                                                          x_43 :
                                                                          if(((ATgetType(l_45) == AT_LIST) && !(ATisEmpty(l_45))))
                                                                            {
                                                                              m_45 = ATgetFirst((ATermList) l_45);
                                                                              n_45 = (ATerm) ATgetNext((ATermList) l_45);
                                                                              y_43 :
                                                                              if(((ATgetType(n_45) == AT_LIST) && ATisEmpty(n_45)))
                                                                                {
                                                                                  z_43 :
                                                                                  if(match_string(f_46, "Cons"))
                                                                                    {
                                                                                      ATerm x_22 = t;
                                                                                      int y_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm r_48 = NULL;
                                                                                          ATerm s_48 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_45), (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_19, not_null(e_46))))))), (ATerm) ATmakeAppl(sym__2, not_null(k_45), (ATerm) ATmakeAppl(sym_FunCall_2, term_e_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_19, not_null(e_46))))));
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
                                                                                              s_48 = t;
                                                                                              if(((r_48 != NULL) && (r_48 != s_48)))
                                                                                                _fail(s_48);
                                                                                              else
                                                                                                r_48 = s_48;
                                                                                            }
                                                                                          }
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, not_null(e_46))), term_a_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, not_null(e_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(r_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
                                                                                          LocalPopChoice(y_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_22;
                                                                                          t = o_54(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = o_54(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  a_44 :
                                                                                  t = o_54(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              b_44 :
                                                                              t = o_54(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(o_45) == AT_LIST) && ATisEmpty(o_45)))
                                                                            {
                                                                              c_44 :
                                                                              if(match_string(f_46, "Nil"))
                                                                                {
                                                                                  ATerm b_23 = t;
                                                                                  int c_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, not_null(e_46))), term_a_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, not_null(e_46))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, term_i_17))));
                                                                                      LocalPopChoice(c_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_23;
                                                                                      t = o_54(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = o_54(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              d_44 :
                                                                              t = o_54(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(h_46, sym_Real_1))
                                                                        {
                                                                          f_46 = ATgetArgument(h_46, 0);
                                                                          t = p_54(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(h_46, sym_Int_1))
                                                                            {
                                                                              f_46 = ATgetArgument(h_46, 0);
                                                                              t = q_54(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(h_46, sym_Str_1))
                                                                                {
                                                                                  f_46 = ATgetArgument(h_46, 0);
                                                                                  t = r_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(h_46, sym_Var_1))
                                                                                    {
                                                                                      f_46 = ATgetArgument(h_46, 0);
                                                                                      t = s_54(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(h_46, sym_As_2))
                                                                                        {
                                                                                          f_46 = ATgetArgument(h_46, 0);
                                                                                          o_45 = ATgetArgument(h_46, 1);
                                                                                          t = t_54(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(h_46, sym_BuildDefault_1))
                                                                                            {
                                                                                              f_46 = ATgetArgument(h_46, 0);
                                                                                              t = u_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(h_46, sym_Wld_0))
                                                                                                {
                                                                                                  t = v_54(t);
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
                                                                  if(match_cons(g_46, sym_Match_1))
                                                                    {
                                                                      h_46 = ATgetArgument(g_46, 0);
                                                                      t = w_54(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(g_46, sym_Case_3))
                                                                        {
                                                                          h_46 = ATgetArgument(g_46, 0);
                                                                          e_46 = ATgetArgument(g_46, 1);
                                                                          b_46 = ATgetArgument(g_46, 2);
                                                                          e_44 :
                                                                          if(match_cons(h_46, sym_Var_1))
                                                                            {
                                                                              f_46 = ATgetArgument(h_46, 0);
                                                                              f_44 :
                                                                              if(((ATgetType(e_46) == AT_LIST) && !(ATisEmpty(e_46))))
                                                                                {
                                                                                  d_46 = ATgetFirst((ATermList) e_46);
                                                                                  a_46 = (ATerm) ATgetNext((ATermList) e_46);
                                                                                  g_44 :
                                                                                  if(match_cons(d_46, sym_Alt_3))
                                                                                    {
                                                                                      w_45 = ATgetArgument(d_46, 0);
                                                                                      y_45 = ATgetArgument(d_46, 1);
                                                                                      z_45 = ATgetArgument(d_46, 2);
                                                                                      h_44 :
                                                                                      if(match_cons(w_45, sym_Fun_2))
                                                                                        {
                                                                                          x_45 = ATgetArgument(w_45, 0);
                                                                                          v_45 = ATgetArgument(w_45, 1);
                                                                                          i_44 :
                                                                                          if(((ATgetType(y_45) == AT_LIST) && !(ATisEmpty(y_45))))
                                                                                            {
                                                                                              p_45 = ATgetFirst((ATermList) y_45);
                                                                                              r_45 = (ATerm) ATgetNext((ATermList) y_45);
                                                                                              j_44 :
                                                                                              if(((ATgetType(r_45) == AT_LIST) && !(ATisEmpty(r_45))))
                                                                                                {
                                                                                                  s_45 = ATgetFirst((ATermList) r_45);
                                                                                                  u_45 = (ATerm) ATgetNext((ATermList) r_45);
                                                                                                  k_44 :
                                                                                                  if(((ATgetType(u_45) == AT_LIST) && ATisEmpty(u_45)))
                                                                                                    {
                                                                                                      l_44 :
                                                                                                      if(match_cons(s_45, sym_Var_1))
                                                                                                        {
                                                                                                          t_45 = ATgetArgument(s_45, 0);
                                                                                                          m_44 :
                                                                                                          if(match_cons(p_45, sym_Var_1))
                                                                                                            {
                                                                                                              q_45 = ATgetArgument(p_45, 0);
                                                                                                              n_44 :
                                                                                                              if(match_int(v_45, 2))
                                                                                                                {
                                                                                                                  o_44 :
                                                                                                                  if(match_string(x_45, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm d_23 = t;
                                                                                                                      int e_23 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = x_54(t);
                                                                                                                          LocalPopChoice(e_23);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = d_23;
                                                                                                                          t = z_54(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = z_54(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  p_44 :
                                                                                                                  t = z_54(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              q_44 :
                                                                                                              r_44 :
                                                                                                              t = z_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          s_44 :
                                                                                                          t_44 :
                                                                                                          u_44 :
                                                                                                          t = z_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      v_44 :
                                                                                                      w_44 :
                                                                                                      x_44 :
                                                                                                      y_44 :
                                                                                                      t = z_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  z_44 :
                                                                                                  a_45 :
                                                                                                  b_45 :
                                                                                                  t = z_54(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(y_45) == AT_LIST) && ATisEmpty(y_45)))
                                                                                                {
                                                                                                  c_45 :
                                                                                                  if(match_int(v_45, 0))
                                                                                                    {
                                                                                                      d_45 :
                                                                                                      if(match_string(x_45, "Nil"))
                                                                                                        {
                                                                                                          ATerm i_23 = t;
                                                                                                          int j_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = y_54(t);
                                                                                                              LocalPopChoice(j_23);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = i_23;
                                                                                                              t = z_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = z_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      e_45 :
                                                                                                      t = z_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  f_45 :
                                                                                                  g_45 :
                                                                                                  t = z_54(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(w_45, sym_Real_1))
                                                                                            {
                                                                                              x_45 = ATgetArgument(w_45, 0);
                                                                                              t = a_55(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(w_45, sym_Int_1))
                                                                                                {
                                                                                                  x_45 = ATgetArgument(w_45, 0);
                                                                                                  t = b_55(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(w_45, sym_Str_1))
                                                                                                    {
                                                                                                      x_45 = ATgetArgument(w_45, 0);
                                                                                                      t = c_55(t);
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
                                                                                  if(((ATgetType(e_46) == AT_LIST) && ATisEmpty(e_46)))
                                                                                    {
                                                                                      t = d_55(t);
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
                                                                          if(match_cons(g_46, sym_Case_4))
                                                                            {
                                                                              h_46 = ATgetArgument(g_46, 0);
                                                                              e_46 = ATgetArgument(g_46, 1);
                                                                              b_46 = ATgetArgument(g_46, 2);
                                                                              c_46 = ATgetArgument(g_46, 3);
                                                                              t = e_55(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(g_46, sym_Continue_1))
                                                                                {
                                                                                  h_46 = ATgetArgument(g_46, 0);
                                                                                  t = f_55(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(g_46, sym_Assign_2))
                                                                                    {
                                                                                      h_46 = ATgetArgument(g_46, 0);
                                                                                      e_46 = ATgetArgument(g_46, 1);
                                                                                      h_45 :
                                                                                      if(match_cons(h_46, sym_Var_1))
                                                                                        {
                                                                                          f_46 = ATgetArgument(h_46, 0);
                                                                                          i_45 :
                                                                                          if(match_cons(e_46, sym_Var_1))
                                                                                            {
                                                                                              d_46 = ATgetArgument(e_46, 0);
                                                                                              {
                                                                                                ATerm n_23 = t;
                                                                                                int q_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = g_55(t);
                                                                                                    LocalPopChoice(q_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = n_23;
                                                                                                    t = h_55(t);
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = h_55(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(g_46, sym_Assign_1))
                                                                                        {
                                                                                          h_46 = ATgetArgument(g_46, 0);
                                                                                          j_45 :
                                                                                          if(match_cons(h_46, sym_Var_1))
                                                                                            {
                                                                                              f_46 = ATgetArgument(h_46, 0);
                                                                                              t = i_55(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(g_46, sym_Build_1))
                                                                                            {
                                                                                              h_46 = ATgetArgument(g_46, 0);
                                                                                              t = j_55(t);
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
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
  a_57 = t;
  z_56 :
  if(match_cons(a_57, sym__2))
    {
      b_57 = ATgetArgument(a_57, 0);
      c_57 = ATgetArgument(a_57, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_r_23), not_null(c_57)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
  l_57 = t;
  i_57 :
  if(((ATgetType(l_57) == AT_LIST) && !(ATisEmpty(l_57))))
    {
      m_57 = ATgetFirst((ATermList) l_57);
      n_57 = (ATerm) ATgetNext((ATermList) l_57);
      j_57 :
      if(match_int(m_57, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_57)), term_y_23), term_v_23);
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
  ATerm t_57 = NULL,u_57 = NULL,x_57 = NULL;
  t_57 = t;
  r_57 :
  if(((ATgetType(t_57) == AT_LIST) && !(ATisEmpty(t_57))))
    {
      u_57 = ATgetFirst((ATermList) t_57);
      x_57 = (ATerm) ATgetNext((ATermList) t_57);
      s_57 :
      if(match_int(u_57, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_57)), term_v_23), term_v_23);
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
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  g_58 :
  if(((ATgetType(j_58) == AT_LIST) && !(ATisEmpty(j_58))))
    {
      k_58 = ATgetFirst((ATermList) j_58);
      l_58 = (ATerm) ATgetNext((ATermList) j_58);
      i_58 :
      if(match_int(k_58, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_58)), term_z_23), term_v_23);
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
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
  t_58 = t;
  s_58 :
  if(match_cons(t_58, sym__2))
    {
      u_58 = ATgetArgument(t_58, 0);
      v_58 = ATgetArgument(t_58, 1);
      {
        ATerm y_58 = NULL,a_59 = NULL;
        ATerm j_24;
        j_24 = t;
        {
          ATerm z_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_k_24), not_null(u_58));
          {
            t = concat_strings_0(t);
            {
              t = string_as_chars_1(t, escape_chars_0);
              {
                t = string_as_chars_1(t, double_quote_chars_0);
                {
                  z_58 = t;
                  if(((y_58 != NULL) && (y_58 != z_58)))
                    _fail(z_58);
                  else
                    y_58 = z_58;
                }
              }
            }
          }
        }
        t = j_24;
        {
          ATerm b_59 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_q_24), not_null(u_58));
          {
            t = concat_strings_0(t);
            {
              t = string_as_chars_1(t, escape_chars_0);
              {
                t = string_as_chars_1(t, double_quote_chars_0);
                {
                  b_59 = t;
                  if(((a_59 != NULL) && (a_59 != b_59)))
                    _fail(b_59);
                  else
                    a_59 = b_59;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_17), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(a_59))), term_t_24)))), not_null(v_58)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_17), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(y_58))), term_t_24)))));
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
  ATerm i_59 = NULL;
  i_59 = t;
  {
    ATerm l_59 = NULL,m_59 = NULL;
    t = term_b_6;
    {
      ATerm j_2 (ATerm t)
      {
        t = term_i_6;
        return(t);
      }
      t = rewrite_1(t, j_2);
      {
        l_59 = t;
        g_59 :
        if(match_cons(l_59, sym_Defined_1))
          {
            m_59 = ATgetArgument(l_59, 0);
            h_59 :
            if(!(match_string(m_59, "y_0")))
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
    t = not_null(i_59);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm r_59 = NULL;
  r_59 = t;
  {
    ATerm u_59 = NULL,v_59 = NULL;
    t = not_null(r_59);
    {
      ATerm k_2 (ATerm t)
      {
        t = term_t_6;
        return(t);
      }
      t = rewrite_1(t, k_2);
      {
        u_59 = t;
        p_59 :
        if(match_cons(u_59, sym_Defined_1))
          {
            v_59 = ATgetArgument(u_59, 0);
            q_59 :
            if(!(match_string(v_59, "a_1")))
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
    t = not_null(r_59);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
  b_60 = t;
  a_60 :
  if(match_cons(b_60, sym_SDef_3))
    {
      c_60 = ATgetArgument(b_60, 0);
      d_60 = ATgetArgument(b_60, 1);
      e_60 = ATgetArgument(b_60, 2);
      {
        ATerm p_60 = NULL,q_60 = NULL;
        ATerm w_60 = NULL;
        t = not_null(d_60);
        {
          ATerm x_60 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            w_60 = t;
            {
              if(((p_60 != NULL) && (p_60 != w_60)))
                _fail(w_60);
              else
                p_60 = w_60;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_60), not_null(e_60));
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
                    x_60 = t;
                    if(((q_60 != NULL) && (q_60 != x_60)))
                      _fail(x_60);
                    else
                      q_60 = x_60;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_u_7, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_60)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(p_60)), term_s_25)))), not_null(q_60));
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
  ATerm d_61 = NULL,i_61 = NULL,j_61 = NULL;
  d_61 = t;
  c_61 :
  if(match_cons(d_61, sym__2))
    {
      i_61 = ATgetArgument(d_61, 0);
      j_61 = ATgetArgument(d_61, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_61)), not_null(i_61)), (ATerm) ATinsert(ATempty, not_null(i_61)));
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
  ATerm o_61 = NULL;
  ATerm p_61 = NULL;
  p_61 = t;
  if(((o_61 != NULL) && (o_61 != p_61)))
    _fail(p_61);
  else
    o_61 = p_61;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_23, not_null(o_61));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm s_107 (ATerm))
{
  t = explode_string_0(t);
  {
    t = s_107(t);
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
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  t_61 = t;
  s_61 :
  if(((ATgetType(t_61) == AT_LIST) && !(ATisEmpty(t_61))))
    {
      u_61 = ATgetFirst((ATermList) t_61);
      v_61 = (ATerm) ATgetNext((ATermList) t_61);
      t = not_null(u_61);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  b_62 :
  if(match_cons(c_62, sym__2))
    {
      d_62 = ATgetArgument(c_62, 0);
      e_62 = ATgetArgument(c_62, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_62), not_null(e_62));
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
ATerm rewrite_1 (ATerm t, ATerm b_117 (ATerm))
{
  ATerm k_62 = NULL;
  ATerm m_62 = NULL;
  k_62 = t;
  {
    ATerm n_62 = NULL;
    t = term_w_25;
    {
      t = b_117(t);
      {
        n_62 = t;
        if(((m_62 != NULL) && (m_62 != n_62)))
          _fail(n_62);
        else
          m_62 = n_62;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_62), not_null(k_62));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL;
  a_63 = t;
  u_62 :
  if(match_cons(a_63, sym__2))
    {
      b_63 = ATgetArgument(a_63, 0);
      c_63 = ATgetArgument(a_63, 1);
      {
        ATerm i_63 = NULL;
        ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
        t = not_null(a_63);
        {
          ATerm m_2 (ATerm t)
          {
            t = term_b_26;
            return(t);
          }
          t = rewrite_1(t, m_2);
          {
            j_63 = t;
            s_62 :
            if(match_cons(j_63, sym_Defined_2))
              {
                k_63 = ATgetArgument(j_63, 0);
                l_63 = ATgetArgument(j_63, 1);
                t_62 :
                if(match_string(k_63, "u_0"))
                  {
                    if(((i_63 != NULL) && (i_63 != l_63)))
                      _fail(l_63);
                    else
                      i_63 = l_63;
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
        t = not_null(i_63);
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
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL;
  u_63 = t;
  t_63 :
  if(match_cons(u_63, sym_OpDecl_2))
    {
      v_63 = ATgetArgument(u_63, 0);
      w_63 = ATgetArgument(u_63, 1);
      {
        ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,m_64 = NULL;
        ATerm c_26;
        c_26 = t;
        {
          ATerm c_64 = NULL;
          t = not_null(w_63);
          {
            ATerm d_64 = NULL;
            t = Arity_0(t);
            {
              c_64 = t;
              {
                if(((a_64 != NULL) && (a_64 != c_64)))
                  _fail(c_64);
                else
                  a_64 = c_64;
                {
                  ATerm e_64 = NULL;
                  t = int_to_string_0(t);
                  {
                    d_64 = t;
                    {
                      if(((z_63 != NULL) && (z_63 != d_64)))
                        _fail(d_64);
                      else
                        z_63 = d_64;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_63), not_null(a_64));
                        {
                          t = ConstructorName_0(t);
                          {
                            e_64 = t;
                            if(((b_64 != NULL) && (b_64 != e_64)))
                              _fail(e_64);
                            else
                              b_64 = e_64;
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
          ATerm n_64 = NULL;
          t = not_null(v_63);
          {
            t = string_as_chars_1(t, double_quote_chars_0);
            {
              n_64 = t;
              if(((m_64 != NULL) && (m_64 != n_64)))
                _fail(n_64);
              else
                m_64 = n_64;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_64)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_64)), term_i_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_26), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(z_63))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(m_64))))))));
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
  ATerm w_64 = NULL;
  ATerm y_64 = NULL;
  w_64 = t;
  {
    ATerm z_64 = NULL,b_65 = NULL;
    ATerm a_65 = NULL;
    t = not_null(w_64);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          a_65 = t;
          if(((z_64 != NULL) && (z_64 != a_65)))
            _fail(a_65);
          else
            z_64 = a_65;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_64), (ATerm) ATinsert(ATempty, term_p_26));
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
          b_65 = t;
          if(((y_64 != NULL) && (y_64 != b_65)))
            _fail(b_65);
          else
            y_64 = b_65;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_m_7, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_b_27, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_m_7)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(y_64)));
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
  ATerm g_65 = NULL;
  g_65 = t;
  t = SSL_int_to_string(not_null(g_65));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
  r_65 = t;
  p_65 :
  if(((ATgetType(r_65) == AT_LIST) && !(ATisEmpty(r_65))))
    {
      s_65 = ATgetFirst((ATermList) r_65);
      t_65 = (ATerm) ATgetNext((ATermList) r_65);
      q_65 :
      if(match_int(s_65, 95))
        {
          ATerm v_65 = NULL;
          ATerm w_65 = NULL;
          t = not_null(t_65);
          {
            t = m_0(t);
            {
              w_65 = t;
              if(((v_65 != NULL) && (v_65 != w_65)))
                _fail(w_65);
              else
                v_65 = w_65;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_65)), term_c_27), term_c_27);
        }
      else
        {
          if(match_int(s_65, 45))
            {
              ATerm y_65 = NULL;
              ATerm z_65 = NULL;
              t = not_null(t_65);
              {
                t = m_0(t);
                {
                  z_65 = t;
                  if(((y_65 != NULL) && (y_65 != z_65)))
                    _fail(z_65);
                  else
                    y_65 = z_65;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_65)), term_c_27);
            }
          else
            {
              if(match_int(s_65, 39))
                {
                  ATerm b_66 = NULL;
                  ATerm c_66 = NULL;
                  t = not_null(t_65);
                  {
                    t = m_0(t);
                    {
                      c_66 = t;
                      if(((b_66 != NULL) && (b_66 != c_66)))
                        _fail(c_66);
                      else
                        b_66 = c_66;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(b_66)), term_c_27), term_d_27), term_c_27);
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
ATerm escape_1 (ATerm t, ATerm o_107 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm j_66 (ATerm t)
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_107(t, j_66);
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
                t = Cons_2(t, _id, j_66);
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
    t = j_66(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm j_104 (ATerm))
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_104(t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
        o_66 = t;
        n_66 :
        if(((ATgetType(o_66) == AT_LIST) && !(ATisEmpty(o_66))))
          {
            p_66 = ATgetFirst((ATermList) o_66);
            q_66 = (ATerm) ATgetNext((ATermList) o_66);
            {
              ATerm t_66 = NULL,v_66 = NULL;
              ATerm k_27;
              k_27 = t;
              {
                ATerm u_66 = NULL;
                t = not_null(p_66);
                {
                  t = j_104(t);
                  {
                    u_66 = t;
                    if(((t_66 != NULL) && (t_66 != u_66)))
                      _fail(u_66);
                    else
                      t_66 = u_66;
                  }
                }
              }
              t = k_27;
              {
                ATerm w_66 = NULL;
                t = not_null(q_66);
                {
                  t = foldr_3(t, h_104, i_104, j_104);
                  {
                    w_66 = t;
                    if(((v_66 != NULL) && (v_66 != w_66)))
                      _fail(w_66);
                    else
                      v_66 = w_66;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_66), not_null(v_66));
                  t = i_104(t);
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
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL;
  e_67 = t;
  c_67 :
  if(match_cons(e_67, sym_FunType_2))
    {
      f_67 = ATgetArgument(e_67, 0);
      d_67 = ATgetArgument(e_67, 1);
      {
        t = not_null(f_67);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(e_67, sym_ConstType_1))
        {
          f_67 = ATgetArgument(e_67, 0);
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
  ATerm e_68 = NULL,p_68 = NULL,q_68 = NULL;
  e_68 = t;
  d_68 :
  if(match_cons(e_68, sym_OpDecl_2))
    {
      p_68 = ATgetArgument(e_68, 0);
      q_68 = ATgetArgument(e_68, 1);
      {
        ATerm u_68 = NULL,x_68 = NULL;
        ATerm y_68 = NULL;
        t = not_null(q_68);
        {
          ATerm z_68 = NULL,b_69 = NULL,k_69 = NULL;
          t = Arity_0(t);
          {
            y_68 = t;
            {
              if(((u_68 != NULL) && (u_68 != y_68)))
                _fail(y_68);
              else
                u_68 = y_68;
              {
                ATerm l_27;
                l_27 = t;
                {
                  ATerm a_69 = NULL;
                  t = not_null(p_68);
                  {
                    t = escape_1(t, Cify_1);
                    {
                      a_69 = t;
                      if(((z_68 != NULL) && (z_68 != a_69)))
                        _fail(a_69);
                      else
                        z_68 = a_69;
                    }
                  }
                }
                t = l_27;
                {
                  ATerm j_69 = NULL;
                  t = not_null(u_68);
                  {
                    t = int_to_string_0(t);
                    {
                      j_69 = t;
                      if(((b_69 != NULL) && (b_69 != j_69)))
                        _fail(j_69);
                      else
                        b_69 = j_69;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_69)), term_n_27), not_null(z_68)), term_m_27);
                    {
                      t = concat_strings_0(t);
                      {
                        k_69 = t;
                        {
                          if(((x_68 != NULL) && (x_68 != k_69)))
                            _fail(k_69);
                          else
                            x_68 = k_69;
                          {
                            ATerm s_27;
                            s_27 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_68), not_null(u_68)), (ATerm) ATmakeAppl(sym_Defined_2, term_t_27, not_null(x_68)));
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_68)), term_a_8)));
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
  ATerm y_69 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL;
  y_69 = t;
  u_69 :
  if(match_cons(y_69, sym_Signature_1))
    {
      b_70 = ATgetArgument(y_69, 0);
      v_69 :
      if(((ATgetType(b_70) == AT_LIST) && !(ATisEmpty(b_70))))
        {
          c_70 = ATgetFirst((ATermList) b_70);
          e_70 = (ATerm) ATgetNext((ATermList) b_70);
          w_69 :
          if(match_cons(c_70, sym_Constructors_1))
            {
              d_70 = ATgetArgument(c_70, 0);
              x_69 :
              if(((ATgetType(e_70) == AT_LIST) && ATisEmpty(e_70)))
                {
                  {
                    ATerm g_70 = NULL,h_70 = NULL,k_70 = NULL;
                    ATerm b_28;
                    b_28 = t;
                    {
                      ATerm i_70 = NULL;
                      t = not_null(d_70);
                      {
                        ATerm j_70 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          i_70 = t;
                          {
                            if(((g_70 != NULL) && (g_70 != i_70)))
                              _fail(i_70);
                            else
                              g_70 = i_70;
                            {
                              t = not_null(d_70);
                              {
                                t = InitConstructors_0(t);
                                {
                                  j_70 = t;
                                  if(((h_70 != NULL) && (h_70 != j_70)))
                                    _fail(j_70);
                                  else
                                    h_70 = j_70;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = b_28;
                    {
                      ATerm l_70 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_70), (ATerm) ATinsert(ATempty, not_null(h_70)));
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
                          l_70 = t;
                          if(((k_70 != NULL) && (k_70 != l_70)))
                            _fail(l_70);
                          else
                            k_70 = l_70;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(k_70));
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
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
  v_70 = t;
  t_70 :
  if(match_cons(v_70, sym_FunType_2))
    {
      w_70 = ATgetArgument(v_70, 0);
      u_70 = ATgetArgument(v_70, 1);
      {
        ATerm y_70 = NULL;
        ATerm z_70 = NULL;
        t = not_null(w_70);
        {
          t = map_1(t, TranslateType_0);
          {
            z_70 = t;
            if(((y_70 != NULL) && (y_70 != z_70)))
              _fail(z_70);
            else
              y_70 = z_70;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_7, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(y_70)));
      }
    }
  else
    {
      if(match_cons(v_70, sym_ConstType_1))
        {
          w_70 = ATgetArgument(v_70, 0);
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
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL;
  l_71 = t;
  g_71 :
  if(match_cons(l_71, sym_VarDec_2))
    {
      m_71 = ATgetArgument(l_71, 0);
      n_71 = ATgetArgument(l_71, 1);
      h_71 :
      if(match_cons(n_71, sym_FunType_2))
        {
          o_71 = ATgetArgument(n_71, 0);
          k_71 = ATgetArgument(n_71, 1);
          {
            ATerm r_71 = NULL;
            ATerm s_71 = NULL;
            t = not_null(o_71);
            {
              t = map_1(t, TranslateType_0);
              {
                s_71 = t;
                if(((r_71 != NULL) && (r_71 != s_71)))
                  _fail(s_71);
                else
                  r_71 = s_71;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_7, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(r_71)))));
          }
        }
      else
        {
          if(match_cons(n_71, sym_ConstType_1))
            {
              o_71 = ATgetArgument(n_71, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_7, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_71)), term_a_8));
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
  ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL;
  a_72 = t;
  z_71 :
  if(match_cons(a_72, sym_SDef_3))
    {
      b_72 = ATgetArgument(a_72, 0);
      c_72 = ATgetArgument(a_72, 1);
      d_72 = ATgetArgument(a_72, 2);
      {
        ATerm h_72 = NULL;
        ATerm i_72 = NULL;
        t = not_null(c_72);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            i_72 = t;
            if(((h_72 != NULL) && (h_72 != i_72)))
              _fail(i_72);
            else
              h_72 = i_72;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_72)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(h_72)), term_u_7))))));
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
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
  x_72 = t;
  r_72 :
  if(match_cons(x_72, sym_Specification_1))
    {
      y_72 = ATgetArgument(x_72, 0);
      s_72 :
      if(((ATgetType(y_72) == AT_LIST) && !(ATisEmpty(y_72))))
        {
          z_72 = ATgetFirst((ATermList) y_72);
          b_73 = (ATerm) ATgetNext((ATermList) y_72);
          t_72 :
          if(match_cons(z_72, sym_Signature_1))
            {
              a_73 = ATgetArgument(z_72, 0);
              u_72 :
              if(((ATgetType(b_73) == AT_LIST) && !(ATisEmpty(b_73))))
                {
                  c_73 = ATgetFirst((ATermList) b_73);
                  e_73 = (ATerm) ATgetNext((ATermList) b_73);
                  v_72 :
                  if(match_cons(c_73, sym_Strategies_1))
                    {
                      d_73 = ATgetArgument(c_73, 0);
                      w_72 :
                      if(((ATgetType(e_73) == AT_LIST) && ATisEmpty(e_73)))
                        {
                          {
                            ATerm h_73 = NULL,i_73 = NULL,p_73 = NULL;
                            ATerm i_28;
                            i_28 = t;
                            {
                              ATerm j_73 = NULL;
                              t = not_null(d_73);
                              {
                                ATerm o_73 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  j_73 = t;
                                  {
                                    if(((h_73 != NULL) && (h_73 != j_73)))
                                      _fail(j_73);
                                    else
                                      h_73 = j_73;
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
                                                ATerm k_73 = NULL;
                                                ATerm l_73 = NULL,n_73 = NULL;
                                                ATerm m_73 = NULL;
                                                m_73 = t;
                                                if(((l_73 != NULL) && (l_73 != m_73)))
                                                  _fail(m_73);
                                                else
                                                  l_73 = m_73;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_n_28, not_null(l_73));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      n_73 = t;
                                                      if(((k_73 != NULL) && (k_73 != n_73)))
                                                        _fail(n_73);
                                                      else
                                                        k_73 = n_73;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(k_73));
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
                                          o_73 = t;
                                          if(((i_73 != NULL) && (i_73 != o_73)))
                                            _fail(o_73);
                                          else
                                            i_73 = o_73;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = i_28;
                            {
                              ATerm q_73 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_73)), not_null(h_73)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_28), (ATerm) ATmakeAppl(sym_Signature_1, not_null(a_73))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_28, (ATerm) ATinsert(ATempty, term_t_28)))), not_null(i_73));
                              {
                                t = concat_0(t);
                                {
                                  q_73 = t;
                                  if(((p_73 != NULL) && (p_73 != q_73)))
                                    _fail(q_73);
                                  else
                                    p_73 = q_73;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(p_73));
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
  ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL;
  b_74 = t;
  a_74 :
  if(((ATgetType(b_74) == AT_LIST) && !(ATisEmpty(b_74))))
    {
      c_74 = ATgetFirst((ATermList) b_74);
      d_74 = (ATerm) ATgetNext((ATermList) b_74);
      t = not_null(d_74);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL;
  k_74 = t;
  j_74 :
  if(match_cons(k_74, sym__2))
    {
      l_74 = ATgetArgument(k_74, 0);
      m_74 = ATgetArgument(k_74, 1);
      {
        ATerm v_28;
        v_28 = t;
        {
          ATerm p_74 = NULL;
          ATerm q_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_74), not_null(m_74));
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
              q_74 = t;
              if(((p_74 != NULL) && (p_74 != q_74)))
                _fail(q_74);
              else
                p_74 = q_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_74), not_null(m_74), not_null(p_74));
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
ATerm end_scope_1 (ATerm t, ATerm w_116 (ATerm))
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
  ATerm y_28;
  y_28 = t;
  {
    ATerm a_75 = NULL;
    ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL;
    t = w_116(t);
    {
      a_75 = t;
      {
        if(((z_74 != NULL) && (z_74 != a_75)))
          _fail(a_75);
        else
          z_74 = a_75;
        {
          ATerm z_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_74), term_e_29);
              t = table_get_0(t);
              LocalPopChoice(a_29);
            }
          else
            {
              t = z_28;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_75 = t;
            w_74 :
            if(((ATgetType(b_75) == AT_LIST) && !(ATisEmpty(b_75))))
              {
                c_75 = ATgetFirst((ATermList) b_75);
                d_75 = (ATerm) ATgetNext((ATermList) b_75);
                {
                  if(((y_74 != NULL) && (y_74 != c_75)))
                    _fail(c_75);
                  else
                    y_74 = c_75;
                  {
                    if(((x_74 != NULL) && (x_74 != d_75)))
                      _fail(d_75);
                    else
                      x_74 = d_75;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_74), term_e_29, not_null(x_74));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(y_74);
                          {
                            ATerm x_2 (ATerm t)
                            {
                              ATerm e_75 = NULL;
                              e_75 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_74), not_null(e_75));
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
ATerm restore_always_2 (ATerm t, ATerm o_90 (ATerm), ATerm p_90 (ATerm))
{
  ATerm f_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_90(t);
      t = p_90(t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = f_29;
      {
        t = p_90(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_116 (ATerm))
{
  ATerm l_75 = NULL;
  ATerm m_29;
  m_29 = t;
  {
    ATerm m_75 = NULL;
    ATerm n_75 = NULL;
    t = v_116(t);
    {
      m_75 = t;
      {
        if(((l_75 != NULL) && (l_75 != m_75)))
          _fail(m_75);
        else
          l_75 = m_75;
        {
          ATerm o_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_75), term_e_29);
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
              o_75 = t;
              if(((n_75 != NULL) && (n_75 != o_75)))
                _fail(o_75);
              else
                n_75 = o_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_75), term_e_29, (ATerm) ATinsert(CheckATermList(not_null(n_75)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = m_29;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm x_116 (ATerm), ATerm y_116 (ATerm))
{
  t = begin_scope_1(t, x_116);
  {
    ATerm y_2 (ATerm t)
    {
      t = end_scope_1(t, x_116);
      return(t);
    }
    t = restore_always_2(t, y_116, y_2);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_116 (ATerm))
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL;
  w_75 = t;
  v_75 :
  if(match_cons(w_75, sym__2))
    {
      x_75 = ATgetArgument(w_75, 0);
      y_75 = ATgetArgument(w_75, 1);
      {
        ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL;
        ATerm p_29;
        p_29 = t;
        {
          ATerm e_76 = NULL;
          ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL;
          t = z_116(t);
          {
            e_76 = t;
            {
              if(((b_76 != NULL) && (b_76 != e_76)))
                _fail(e_76);
              else
                b_76 = e_76;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(b_76), not_null(x_75), not_null(y_75));
                {
                  t = table_push_0(t);
                  {
                    ATerm q_29 = t;
                    int r_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_76), term_e_29);
                        t = table_get_0(t);
                        LocalPopChoice(r_29);
                      }
                    else
                      {
                        t = q_29;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      f_76 = t;
                      u_75 :
                      if(((ATgetType(f_76) == AT_LIST) && !(ATisEmpty(f_76))))
                        {
                          g_76 = ATgetFirst((ATermList) f_76);
                          h_76 = (ATerm) ATgetNext((ATermList) f_76);
                          {
                            if(((c_76 != NULL) && (c_76 != g_76)))
                              _fail(g_76);
                            else
                              c_76 = g_76;
                            {
                              if(((d_76 != NULL) && (d_76 != h_76)))
                                _fail(h_76);
                              else
                                d_76 = h_76;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(b_76), term_e_29, (ATerm) ATinsert(CheckATermList(not_null(d_76)), (ATerm) ATinsert(CheckATermList(not_null(c_76)), not_null(x_75))));
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
  ATerm o_76 = NULL,p_76 = NULL;
  ATerm s_29;
  s_29 = t;
  {
    ATerm q_76 = NULL;
    ATerm r_76 = NULL;
    t = term_u_29;
    {
      q_76 = t;
      {
        if(((o_76 != NULL) && (o_76 != q_76)))
          _fail(q_76);
        else
          o_76 = q_76;
        {
          t = term_c_16;
          {
            r_76 = t;
            if(((p_76 != NULL) && (p_76 != r_76)))
              _fail(r_76);
            else
              p_76 = r_76;
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
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_76), (ATerm) ATmakeAppl(sym_Defined_2, term_a_30, not_null(p_76)));
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
    ATerm x_76 (ATerm t)
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
          t = _all(t, x_76);
          t = repeat_2(t, Csimplify_0, _id);
        }
        return(t);
      }
      t = scope_2(t, a_3, b_3);
      return(t);
    }
    t = x_76(t);
    {
      ATerm n_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_3 (ATerm t)
          {
            ATerm w_76 = NULL;
            w_76 = t;
            v_76 :
            if(match_cons(w_76, sym_InitCachedTerms_0))
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
  ATerm b_77 = NULL;
  ATerm p_30;
  p_30 = t;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm c_77 = NULL,d_77 = NULL;
      c_77 = t;
      a_77 :
      if(match_cons(c_77, sym_Program_1))
        {
          d_77 = ATgetArgument(c_77, 0);
          if(((b_77 != NULL) && (b_77 != d_77)))
            _fail(d_77);
          else
            b_77 = d_77;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_31), not_null(b_77)), term_r_30));
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
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
  h_77 = t;
  g_77 :
  if(match_cons(h_77, sym__2))
    {
      i_77 = ATgetArgument(h_77, 0);
      j_77 = ATgetArgument(h_77, 1);
      {
        ATerm q_31;
        q_31 = t;
        t = SSL_printnl(not_null(i_77), not_null(j_77));
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
  ATerm o_77 = NULL;
  o_77 = t;
  t = SSL_implode_string(not_null(o_77));
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
        ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL;
        v_77 = t;
        u_77 :
        if(((ATgetType(v_77) == AT_LIST) && !(ATisEmpty(v_77))))
          {
            w_77 = ATgetFirst((ATermList) v_77);
            x_77 = (ATerm) ATgetNext((ATermList) v_77);
            {
              t = not_null(w_77);
              {
                ATerm f_3 (ATerm t)
                {
                  t = not_null(x_77);
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
  ATerm h_78 = NULL;
  ATerm j_78 = NULL;
  h_78 = t;
  {
    ATerm k_78 = NULL;
    ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
    t = not_null(h_78);
    {
      k_78 = t;
      {
        t = SSL_explode_term(not_null(k_78));
        {
          m_78 = t;
          f_78 :
          if(match_cons(m_78, sym__2))
            {
              n_78 = ATgetArgument(m_78, 0);
              o_78 = ATgetArgument(m_78, 1);
              g_78 :
              if(match_string(n_78, ""))
                {
                  if(((j_78 != NULL) && (j_78 != o_78)))
                    _fail(o_78);
                  else
                    j_78 = o_78;
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
      t = not_null(j_78);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm s_78 (ATerm t)
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_78);
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        {
          t = Nil_0(t);
          t = i_98(t);
        }
      }
    return(t);
  }
  t = s_78(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL;
  v_78 = t;
  u_78 :
  if(match_cons(v_78, sym__2))
    {
      w_78 = ATgetArgument(v_78, 0);
      x_78 = ATgetArgument(v_78, 1);
      {
        t = not_null(w_78);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(x_78);
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
  ATerm c_79 = NULL;
  c_79 = t;
  t = SSL_explode_string(not_null(c_79));
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
ATerm debug_1 (ATerm t, ATerm h_108 (ATerm))
{
  ATerm m_32;
  m_32 = t;
  {
    ATerm h_79 = NULL,j_79 = NULL;
    ATerm n_32;
    n_32 = t;
    {
      ATerm i_79 = NULL;
      t = h_108(t);
      {
        i_79 = t;
        if(((h_79 != NULL) && (h_79 != i_79)))
          _fail(i_79);
        else
          h_79 = i_79;
      }
    }
    t = n_32;
    {
      ATerm k_79 = NULL;
      k_79 = t;
      if(((j_79 != NULL) && (j_79 != k_79)))
        _fail(k_79);
      else
        j_79 = k_79;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_79)), not_null(h_79)));
        t = printnl_0(t);
      }
    }
  }
  t = m_32;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_79 = NULL;
  o_79 = t;
  t = SSL_is_string(not_null(o_79));
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
              ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
              x_79 = t;
              w_79 :
              if(match_cons(x_79, sym_Path_1))
                {
                  y_79 = ATgetArgument(x_79, 0);
                  t = not_null(y_79);
                }
              else
                {
                  if(match_cons(x_79, sym_Var_1))
                    {
                      y_79 = ATgetArgument(x_79, 0);
                      {
                        t = not_null(y_79);
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
                      if(match_cons(x_79, sym_Prefix_2))
                        {
                          y_79 = ATgetArgument(x_79, 0);
                          z_79 = ATgetArgument(x_79, 1);
                          {
                            ATerm f_80 = NULL,h_80 = NULL;
                            ATerm x_32;
                            x_32 = t;
                            {
                              ATerm g_80 = NULL;
                              t = not_null(y_79);
                              {
                                t = eval_config_0(t);
                                {
                                  g_80 = t;
                                  if(((f_80 != NULL) && (f_80 != g_80)))
                                    _fail(g_80);
                                  else
                                    f_80 = g_80;
                                }
                              }
                            }
                            t = x_32;
                            {
                              ATerm i_80 = NULL;
                              t = not_null(z_79);
                              {
                                t = eval_config_0(t);
                                {
                                  i_80 = t;
                                  if(((h_80 != NULL) && (h_80 != i_80)))
                                    _fail(i_80);
                                  else
                                    h_80 = i_80;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_80), not_null(h_80));
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
  ATerm q_80 = NULL;
  q_80 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_5, not_null(q_80));
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
                ATerm s_80 = NULL;
                ATerm t_80 = NULL;
                t_80 = t;
                if(((s_80 != NULL) && (s_80 != t_80)))
                  _fail(t_80);
                else
                  s_80 = t_80;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_t_5, not_null(q_80), not_null(s_80));
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
ATerm if_verbose2_1 (ATerm t, ATerm q_110 (ATerm))
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33;
      d_33 = t;
      {
        ATerm x_80 = NULL;
        ATerm y_80 = NULL;
        t = term_e_33;
        {
          t = get_config_0(t);
          {
            y_80 = t;
            if(((x_80 != NULL) && (x_80 != y_80)))
              _fail(y_80);
            else
              x_80 = y_80;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_80), term_f_33);
          t = geq_0(t);
        }
      }
      t = d_33;
      t = q_110(t);
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
  ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL;
  c_81 = t;
  b_81 :
  if(match_cons(c_81, sym__2))
    {
      d_81 = ATgetArgument(c_81, 0);
      e_81 = ATgetArgument(c_81, 1);
      t = SSL_WriteToTextFile(not_null(d_81), not_null(e_81));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm z_69 (ATerm), ATerm a_70 (ATerm))
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL;
  o_81 = t;
  n_81 :
  if(match_cons(o_81, sym__2))
    {
      p_81 = ATgetArgument(o_81, 0);
      q_81 = ATgetArgument(o_81, 1);
      {
        ATerm u_81 = NULL,w_81 = NULL;
        ATerm v_81 = NULL;
        t = SSLgetAnnotations(not_null(o_81));
        {
          v_81 = t;
          if(((u_81 != NULL) && (u_81 != v_81)))
            _fail(v_81);
          else
            u_81 = v_81;
        }
        {
          t = not_null(p_81);
          {
            ATerm y_81 = NULL;
            t = z_69(t);
            {
              w_81 = t;
              {
                t = not_null(q_81);
                {
                  ATerm a_82 = NULL;
                  t = a_70(t);
                  {
                    y_81 = t;
                    {
                      ATerm b_82 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_81), not_null(y_81)), not_null(u_81));
                      {
                        b_82 = t;
                        if(((a_82 != NULL) && (a_82 != b_82)))
                          _fail(b_82);
                        else
                          a_82 = b_82;
                      }
                      t = not_null(a_82);
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
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL;
  j_82 = t;
  i_82 :
  if(match_cons(j_82, sym__2))
    {
      k_82 = ATgetArgument(j_82, 0);
      l_82 = ATgetArgument(j_82, 1);
      t = SSL_WriteToBinaryFile(not_null(k_82), not_null(l_82));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_82 = NULL;
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
            ATerm u_82 = NULL,v_82 = NULL;
            u_82 = t;
            q_82 :
            if(match_cons(u_82, sym_Output_1))
              {
                v_82 = ATgetArgument(u_82, 0);
                if(((t_82 != NULL) && (t_82 != v_82)))
                  _fail(v_82);
                else
                  t_82 = v_82;
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
            ATerm w_82 = NULL;
            t = term_j_33;
            {
              w_82 = t;
              if(((t_82 != NULL) && (t_82 != w_82)))
                _fail(w_82);
              else
                t_82 = w_82;
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
        t = not_null(t_82);
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
              ATerm x_82 = NULL;
              x_82 = t;
              s_82 :
              if(!(match_cons(x_82, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm l_109 (ATerm))
{
  ATerm d_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL;
  ATerm m_33;
  m_33 = t;
  t = dtime_0(t);
  t = m_33;
  {
    t = l_109(t);
    {
      ATerm n_33;
      n_33 = t;
      {
        ATerm g_83 = NULL;
        t = dtime_0(t);
        {
          g_83 = t;
          if(((d_83 != NULL) && (d_83 != g_83)))
            _fail(g_83);
          else
            d_83 = g_83;
        }
      }
      t = n_33;
      {
        h_83 = t;
        c_83 :
        if(match_cons(h_83, sym__2))
          {
            i_83 = ATgetArgument(h_83, 0);
            j_83 = ATgetArgument(h_83, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_83)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_83))), not_null(j_83));
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
  ATerm p_83 = NULL;
  p_83 = t;
  t = SSL_ReadFromFile(not_null(p_83));
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_105 (ATerm), ATerm v_105 (ATerm))
{
  ATerm u_83 = NULL,w_83 = NULL;
  ATerm o_33;
  o_33 = t;
  {
    ATerm v_83 = NULL;
    t = u_105(t);
    {
      v_83 = t;
      if(((u_83 != NULL) && (u_83 != v_83)))
        _fail(v_83);
      else
        u_83 = v_83;
    }
  }
  t = o_33;
  {
    ATerm x_83 = NULL;
    t = v_105(t);
    {
      x_83 = t;
      if(((w_83 != NULL) && (w_83 != x_83)))
        _fail(x_83);
      else
        w_83 = x_83;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_83), not_null(w_83));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_84 = NULL;
  ATerm p_33;
  p_33 = t;
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_3 (ATerm t)
        {
          ATerm e_84 = NULL,f_84 = NULL;
          e_84 = t;
          b_84 :
          if(match_cons(e_84, sym_Input_1))
            {
              f_84 = ATgetArgument(e_84, 0);
              if(((d_84 != NULL) && (d_84 != f_84)))
                _fail(f_84);
              else
                d_84 = f_84;
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
          ATerm g_84 = NULL;
          t = term_s_33;
          {
            g_84 = t;
            if(((d_84 != NULL) && (d_84 != g_84)))
              _fail(g_84);
            else
              d_84 = g_84;
          }
        }
      }
  }
  t = p_33;
  {
    ATerm q_3 (ATerm t)
    {
      t = not_null(d_84);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_3);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_84 = NULL;
  k_84 = t;
  t = SSL_string_to_int(not_null(k_84));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL;
  s_84 = t;
  q_84 :
  if(match_string(s_84, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_84) == AT_LIST) && !(ATisEmpty(s_84))))
        {
          t_84 = ATgetFirst((ATermList) s_84);
          u_84 = (ATerm) ATgetNext((ATermList) s_84);
          r_84 :
          if(((ATgetType(u_84) == AT_LIST) && !(ATisEmpty(u_84))))
            {
              v_84 = ATgetFirst((ATermList) u_84);
              w_84 = (ATerm) ATgetNext((ATermList) u_84);
              {
                ATerm a_85 = NULL;
                ATerm t_33;
                t_33 = t;
                {
                  t = not_null(t_84);
                  t = j_0(t);
                }
                t = t_33;
                {
                  ATerm b_85 = NULL;
                  t = not_null(v_84);
                  {
                    t = k_0(t);
                    {
                      b_85 = t;
                      if(((a_85 != NULL) && (a_85 != b_85)))
                        _fail(b_85);
                      else
                        a_85 = b_85;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_84)), not_null(a_85));
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
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_3 (ATerm t)
      {
        ATerm u_85 = NULL;
        u_85 = t;
        f_85 :
        if(!(match_string(u_85, "-i")))
          {
            if(!(match_string(u_85, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        ATerm x_85 = NULL;
        ATerm w_33;
        w_33 = t;
        {
          ATerm v_85 = NULL;
          ATerm w_85 = NULL;
          w_85 = t;
          if(((v_85 != NULL) && (v_85 != w_85)))
            _fail(w_85);
          else
            v_85 = w_85;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_33, not_null(v_85));
            t = set_config_0(t);
          }
        }
        t = w_33;
        {
          ATerm y_85 = NULL;
          y_85 = t;
          if(((x_85 != NULL) && (x_85 != y_85)))
            _fail(y_85);
          else
            x_85 = y_85;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_85));
        }
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = term_y_33;
        return(t);
      }
      t = ArgOption_3(t, r_3, s_3, t_3);
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm z_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_3 (ATerm t)
            {
              ATerm z_85 = NULL;
              z_85 = t;
              i_85 :
              if(!(match_string(z_85, "-o")))
                {
                  if(!(match_string(z_85, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm v_3 (ATerm t)
            {
              ATerm c_86 = NULL;
              ATerm b_34;
              b_34 = t;
              {
                ATerm a_86 = NULL;
                ATerm b_86 = NULL;
                b_86 = t;
                if(((a_86 != NULL) && (a_86 != b_86)))
                  _fail(b_86);
                else
                  a_86 = b_86;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_34, not_null(a_86));
                  t = set_config_0(t);
                }
              }
              t = b_34;
              {
                ATerm d_86 = NULL;
                d_86 = t;
                if(((c_86 != NULL) && (c_86 != d_86)))
                  _fail(d_86);
                else
                  c_86 = d_86;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_86));
              }
              return(t);
            }
            ATerm w_3 (ATerm t)
            {
              t = term_d_34;
              return(t);
            }
            t = ArgOption_3(t, u_3, v_3, w_3);
            LocalPopChoice(a_34);
          }
        else
          {
            t = z_33;
            {
              ATerm e_34 = t;
              int f_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_3 (ATerm t)
                  {
                    ATerm e_86 = NULL;
                    e_86 = t;
                    l_85 :
                    if(!(match_string(e_86, "-S")))
                      {
                        if(!(match_string(e_86, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm y_3 (ATerm t)
                  {
                    t = term_g_34;
                    t = set_config_0(t);
                    t = term_h_34;
                    return(t);
                  }
                  ATerm z_3 (ATerm t)
                  {
                    t = term_i_34;
                    return(t);
                  }
                  t = Option_3(t, x_3, y_3, z_3);
                  LocalPopChoice(f_34);
                }
              else
                {
                  t = e_34;
                  {
                    ATerm j_34 = t;
                    int k_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_4 (ATerm t)
                        {
                          ATerm f_86 = NULL;
                          f_86 = t;
                          m_85 :
                          if(!(match_string(f_86, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm b_4 (ATerm t)
                        {
                          ATerm i_86 = NULL;
                          ATerm l_34;
                          l_34 = t;
                          {
                            ATerm g_86 = NULL;
                            ATerm h_86 = NULL;
                            t = string_to_int_0(t);
                            {
                              h_86 = t;
                              if(((g_86 != NULL) && (g_86 != h_86)))
                                _fail(h_86);
                              else
                                g_86 = h_86;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_e_33, not_null(g_86));
                              t = set_config_0(t);
                            }
                          }
                          t = l_34;
                          {
                            ATerm j_86 = NULL;
                            j_86 = t;
                            if(((i_86 != NULL) && (i_86 != j_86)))
                              _fail(j_86);
                            else
                              i_86 = j_86;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_86));
                          }
                          return(t);
                        }
                        ATerm c_4 (ATerm t)
                        {
                          t = term_m_34;
                          return(t);
                        }
                        t = ArgOption_3(t, a_4, b_4, c_4);
                        LocalPopChoice(k_34);
                      }
                    else
                      {
                        t = j_34;
                        {
                          ATerm n_34 = t;
                          int o_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_4 (ATerm t)
                              {
                                ATerm k_86 = NULL;
                                k_86 = t;
                                p_85 :
                                if(!(match_string(k_86, "-k")))
                                  {
                                    if(!(match_string(k_86, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm e_4 (ATerm t)
                              {
                                ATerm p_34;
                                p_34 = t;
                                {
                                  ATerm l_86 = NULL;
                                  ATerm m_86 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    m_86 = t;
                                    if(((l_86 != NULL) && (l_86 != m_86)))
                                      _fail(m_86);
                                    else
                                      l_86 = m_86;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_q_34, not_null(l_86));
                                    t = set_config_0(t);
                                  }
                                }
                                t = p_34;
                                return(t);
                              }
                              ATerm f_4 (ATerm t)
                              {
                                t = term_r_34;
                                return(t);
                              }
                              t = ArgOption_3(t, d_4, e_4, f_4);
                              LocalPopChoice(o_34);
                            }
                          else
                            {
                              t = n_34;
                              {
                                ATerm s_34 = t;
                                int t_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_4 (ATerm t)
                                    {
                                      ATerm n_86 = NULL;
                                      n_86 = t;
                                      r_85 :
                                      if(!(match_string(n_86, "-v")))
                                        {
                                          if(!(match_string(n_86, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm h_4 (ATerm t)
                                    {
                                      t = term_v_34;
                                      t = set_config_0(t);
                                      t = term_w_34;
                                      return(t);
                                    }
                                    ATerm i_4 (ATerm t)
                                    {
                                      t = term_x_34;
                                      return(t);
                                    }
                                    t = Option_3(t, g_4, h_4, i_4);
                                    LocalPopChoice(t_34);
                                  }
                                else
                                  {
                                    t = s_34;
                                    {
                                      ATerm y_34 = t;
                                      int z_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_4 (ATerm t)
                                          {
                                            ATerm o_86 = NULL;
                                            o_86 = t;
                                            s_85 :
                                            if(!(match_string(o_86, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm k_4 (ATerm t)
                                          {
                                            t = term_b_35;
                                            t = set_config_0(t);
                                            t = term_c_35;
                                            return(t);
                                          }
                                          ATerm l_4 (ATerm t)
                                          {
                                            t = term_d_35;
                                            return(t);
                                          }
                                          t = Option_3(t, j_4, k_4, l_4);
                                          LocalPopChoice(z_34);
                                        }
                                      else
                                        {
                                          t = y_34;
                                          {
                                            ATerm m_4 (ATerm t)
                                            {
                                              ATerm p_86 = NULL;
                                              p_86 = t;
                                              t_85 :
                                              if(!(match_string(p_86, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm n_4 (ATerm t)
                                            {
                                              t = term_f_35;
                                              t = set_config_0(t);
                                              t = term_g_35;
                                              return(t);
                                            }
                                            ATerm o_4 (ATerm t)
                                            {
                                              t = term_h_35;
                                              return(t);
                                            }
                                            t = Option_3(t, m_4, n_4, o_4);
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
  ATerm y_86 = NULL;
  y_86 = t;
  t = SSL_TicksToSeconds(not_null(y_86));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL;
  d_87 = t;
  c_87 :
  if(match_cons(d_87, sym__2))
    {
      e_87 = ATgetArgument(d_87, 0);
      f_87 = ATgetArgument(d_87, 1);
      {
        ATerm j_35 = t;
        int k_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_87), not_null(f_87));
            LocalPopChoice(k_35);
          }
        else
          {
            t = j_35;
            t = SSL_addr(not_null(e_87), not_null(f_87));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_104 (ATerm), ATerm g_104 (ATerm))
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_104(t);
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      {
        ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL;
        m_87 = t;
        l_87 :
        if(((ATgetType(m_87) == AT_LIST) && !(ATisEmpty(m_87))))
          {
            n_87 = ATgetFirst((ATermList) m_87);
            o_87 = (ATerm) ATgetNext((ATermList) m_87);
            {
              ATerm r_87 = NULL;
              ATerm s_87 = NULL;
              t = not_null(o_87);
              {
                t = foldr_2(t, f_104, g_104);
                {
                  s_87 = t;
                  if(((r_87 != NULL) && (r_87 != s_87)))
                    _fail(s_87);
                  else
                    r_87 = s_87;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_87), not_null(r_87));
                t = g_104(t);
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
ATerm crush_2 (ATerm t, ATerm d_103 (ATerm), ATerm e_103 (ATerm))
{
  ATerm z_87 = NULL;
  ATerm b_88 = NULL;
  z_87 = t;
  {
    ATerm c_88 = NULL;
    ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL;
    t = not_null(z_87);
    {
      c_88 = t;
      {
        t = SSL_explode_term(not_null(c_88));
        {
          e_88 = t;
          y_87 :
          if(match_cons(e_88, sym__2))
            {
              f_88 = ATgetArgument(e_88, 0);
              g_88 = ATgetArgument(e_88, 1);
              if(((b_88 != NULL) && (b_88 != g_88)))
                _fail(g_88);
              else
                b_88 = g_88;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_88);
      t = foldr_2(t, d_103, e_103);
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
  ATerm m_88 = NULL,n_88 = NULL,o_88 = NULL;
  m_88 = t;
  l_88 :
  if(match_cons(m_88, sym__2))
    {
      n_88 = ATgetArgument(m_88, 0);
      o_88 = ATgetArgument(m_88, 1);
      {
        ATerm n_35;
        n_35 = t;
        {
          ATerm o_35 = t;
          int p_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_88), not_null(o_88));
              LocalPopChoice(p_35);
            }
          else
            {
              t = o_35;
              t = SSL_gtr(not_null(n_88), not_null(o_88));
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
  ATerm u_88 = NULL;
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL;
      v_88 = t;
      t_88 :
      if(match_cons(v_88, sym__2))
        {
          w_88 = ATgetArgument(v_88, 0);
          x_88 = ATgetArgument(v_88, 1);
          {
            if(((u_88 != NULL) && (u_88 != w_88)))
              _fail(w_88);
            else
              u_88 = w_88;
            if(((u_88 != NULL) && (u_88 != x_88)))
              _fail(x_88);
            else
              u_88 = x_88;
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
ATerm if_verbose1_1 (ATerm t, ATerm p_110 (ATerm))
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_35;
      u_35 = t;
      {
        ATerm a_89 = NULL;
        ATerm b_89 = NULL;
        t = term_e_33;
        {
          t = get_config_0(t);
          {
            b_89 = t;
            if(((a_89 != NULL) && (a_89 != b_89)))
              _fail(b_89);
            else
              a_89 = b_89;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_89), term_v_16);
          t = geq_0(t);
        }
      }
      t = u_35;
      t = p_110(t);
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
    ATerm f_89 = NULL,h_89 = NULL;
    ATerm v_35;
    v_35 = t;
    {
      ATerm g_89 = NULL;
      t = run_time_0(t);
      {
        g_89 = t;
        if(((f_89 != NULL) && (f_89 != g_89)))
          _fail(g_89);
        else
          f_89 = g_89;
      }
    }
    t = v_35;
    {
      ATerm i_89 = NULL;
      t = term_w_35;
      {
        t = get_config_0(t);
        {
          i_89 = t;
          if(((h_89 != NULL) && (h_89 != i_89)))
            _fail(i_89);
          else
            h_89 = i_89;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_35), not_null(f_89)), term_x_35), not_null(h_89)));
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
  ATerm p_89 = NULL;
  p_89 = t;
  o_89 :
  if(match_cons(p_89, sym_Version_0))
    {
      ATerm r_89 = NULL,t_89 = NULL;
      ATerm z_35;
      z_35 = t;
      {
        ATerm s_89 = NULL;
        t = SSLgetAnnotations(not_null(p_89));
        {
          s_89 = t;
          if(((r_89 != NULL) && (r_89 != s_89)))
            _fail(s_89);
          else
            r_89 = s_89;
        }
      }
      t = z_35;
      {
        ATerm u_89 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_89));
        {
          u_89 = t;
          if(((t_89 != NULL) && (t_89 != u_89)))
            _fail(u_89);
          else
            t_89 = u_89;
        }
        t = not_null(t_89);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm j_109 (ATerm))
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
  t = j_109(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_90 = NULL;
  c_90 = t;
  t = SSL_table_create(not_null(c_90));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_90 = NULL;
  g_90 = t;
  {
    ATerm e_36;
    e_36 = t;
    {
      t = term_f_36;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_36, term_g_36, not_null(g_90));
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
  ATerm k_90 = NULL;
  k_90 = t;
  t = SSL_table_destroy(not_null(k_90));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_90 = NULL;
  ATerm f_91 (ATerm t)
  {
    t = SSL_exit(not_null(y_90));
    return(t);
  }
  ATerm g_91 (ATerm t)
  {
    ATerm b_91 = NULL,d_91 = NULL;
    ATerm h_36;
    h_36 = t;
    {
      ATerm c_91 = NULL;
      t = SSLgetAnnotations(not_null(y_90));
      {
        c_91 = t;
        if(((b_91 != NULL) && (b_91 != c_91)))
          _fail(c_91);
        else
          b_91 = c_91;
      }
    }
    t = h_36;
    {
      ATerm e_91 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_exit_0), not_null(b_91));
      {
        e_91 = t;
        if(((d_91 != NULL) && (d_91 != e_91)))
          _fail(e_91);
        else
          d_91 = e_91;
      }
      t = not_null(d_91);
    }
    return(t);
  }
  y_90 = t;
  x_90 :
  if(match_cons(y_90, sym_exit_0))
    {
      ATerm i_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_91(t);
          LocalPopChoice(j_36);
        }
      else
        {
          t = i_36;
          t = g_91(t);
        }
    }
  else
    {
      t = f_91(t);
    }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL;
  k_91 = t;
  j_91 :
  if(((ATgetType(k_91) == AT_LIST) && ATisEmpty(k_91)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_91) == AT_LIST) && !(ATisEmpty(k_91))))
        {
          l_91 = ATgetFirst((ATermList) k_91);
          m_91 = (ATerm) ATgetNext((ATermList) k_91);
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
    ATerm p_91 = NULL;
    ATerm u_91 = NULL;
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
          ATerm s_91 = NULL;
          ATerm t_91 = NULL;
          t_91 = t;
          if(((s_91 != NULL) && (s_91 != t_91)))
            _fail(t_91);
          else
            s_91 = t_91;
          t = (ATerm) ATinsert(ATempty, not_null(s_91));
        }
      }
    {
      u_91 = t;
      if(((p_91 != NULL) && (p_91 != u_91)))
        _fail(u_91);
      else
        p_91 = u_91;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_33, not_null(p_91));
      t = printnl_0(t);
    }
  }
  t = k_36;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_112 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_97 (ATerm))
{
  ATerm x_91 (ATerm t)
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
        t = Cons_2(t, t_97, x_91);
      }
    return(t);
  }
  t = x_91(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL;
  g_92 = t;
  d_92 :
  if(((ATgetType(g_92) == AT_LIST) && !(ATisEmpty(g_92))))
    {
      e_92 = ATgetFirst((ATermList) g_92);
      f_92 = (ATerm) ATgetNext((ATermList) g_92);
      {
        ATerm j_92 = NULL;
        t = not_null(f_92);
        {
          ATerm p_36;
          p_36 = t;
          {
            ATerm k_92 = NULL,m_92 = NULL,o_92 = NULL;
            ATerm q_36;
            q_36 = t;
            {
              ATerm l_92 = NULL;
              t = i_0(t);
              {
                l_92 = t;
                if(((k_92 != NULL) && (k_92 != l_92)))
                  _fail(l_92);
                else
                  k_92 = l_92;
              }
            }
            t = q_36;
            {
              ATerm n_92 = NULL;
              t = not_null(e_92);
              {
                t = g_0(t);
                {
                  n_92 = t;
                  if(((m_92 != NULL) && (m_92 != n_92)))
                    _fail(n_92);
                  else
                    m_92 = n_92;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_92)), not_null(m_92));
                {
                  o_92 = t;
                  if(((j_92 != NULL) && (j_92 != o_92)))
                    _fail(o_92);
                  else
                    j_92 = o_92;
                }
              }
            }
          }
          t = p_36;
          {
            ATerm s_4 (ATerm t)
            {
              t = not_null(j_92);
              return(t);
            }
            t = reverse_acc_2(t, g_0, s_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(g_92) == AT_LIST) && ATisEmpty(g_92)))
        {
          {
            t = term_w_25;
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
  ATerm w_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm s_112 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm z_92 = NULL,a_93 = NULL;
  z_92 = t;
  y_92 :
  if(match_cons(z_92, sym_Program_1))
    {
      a_93 = ATgetArgument(z_92, 0);
      {
        ATerm d_93 = NULL,f_93 = NULL;
        ATerm e_93 = NULL;
        t = SSLgetAnnotations(not_null(z_92));
        {
          e_93 = t;
          if(((d_93 != NULL) && (d_93 != e_93)))
            _fail(e_93);
          else
            d_93 = e_93;
        }
        {
          t = not_null(a_93);
          {
            ATerm j_93 = NULL;
            t = q_77(t);
            {
              f_93 = t;
              {
                ATerm k_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_93)), not_null(d_93));
                {
                  k_93 = t;
                  if(((j_93 != NULL) && (j_93 != k_93)))
                    _fail(k_93);
                  else
                    j_93 = k_93;
                }
                t = not_null(j_93);
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
  ATerm s_93 = NULL;
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_93 = NULL;
      t = term_w_35;
      {
        t = get_config_0(t);
        {
          t_93 = t;
          if(((s_93 != NULL) && (s_93 != t_93)))
            _fail(t_93);
          else
            s_93 = t_93;
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
            ATerm u_93 = NULL;
            u_93 = t;
            if(((s_93 != NULL) && (s_93 != u_93)))
              _fail(u_93);
            else
              s_93 = u_93;
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
                ATerm v_93 = NULL;
                ATerm w_93 = NULL;
                w_93 = t;
                if(((v_93 != NULL) && (v_93 != w_93)))
                  _fail(w_93);
                else
                  v_93 = w_93;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_93)), term_x_36);
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
    ATerm b_94 = NULL;
    ATerm c_94 = NULL;
    c_94 = t;
    if(((b_94 != NULL) && (b_94 != c_94)))
      _fail(c_94);
    else
      b_94 = c_94;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATempty, not_null(b_94)));
      t = printnl_0(t);
    }
  }
  t = y_36;
  return(t);
}
ATerm say_1 (ATerm t, ATerm i_108 (ATerm))
{
  ATerm z_36;
  z_36 = t;
  {
    t = i_108(t);
    t = debug_0(t);
  }
  t = z_36;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_77 (ATerm))
{
  ATerm j_94 = NULL,k_94 = NULL;
  j_94 = t;
  i_94 :
  if(match_cons(j_94, sym_Undefined_1))
    {
      k_94 = ATgetArgument(j_94, 0);
      {
        ATerm n_94 = NULL,p_94 = NULL;
        ATerm o_94 = NULL;
        t = SSLgetAnnotations(not_null(j_94));
        {
          o_94 = t;
          if(((n_94 != NULL) && (n_94 != o_94)))
            _fail(o_94);
          else
            n_94 = o_94;
        }
        {
          t = not_null(k_94);
          {
            ATerm r_94 = NULL;
            t = r_77(t);
            {
              p_94 = t;
              {
                ATerm s_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_94)), not_null(n_94));
                {
                  s_94 = t;
                  if(((r_94 != NULL) && (r_94 != s_94)))
                    _fail(s_94);
                  else
                    r_94 = s_94;
                }
                t = not_null(r_94);
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
ATerm fetch_1 (ATerm t, ATerm c_98 (ATerm))
{
  ATerm x_94 (ATerm t)
  {
    ATerm a_37 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_98, _id);
        LocalPopChoice(b_37);
      }
    else
      {
        t = a_37;
        t = Cons_2(t, _id, x_94);
      }
    return(t);
  }
  t = x_94(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_111 (ATerm))
{
  t = fetch_1(t, s_111);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_95 = NULL;
  c_95 = t;
  b_95 :
  if(match_cons(c_95, sym_Help_0))
    {
      ATerm e_95 = NULL,g_95 = NULL;
      ATerm c_37;
      c_37 = t;
      {
        ATerm f_95 = NULL;
        t = SSLgetAnnotations(not_null(c_95));
        {
          f_95 = t;
          if(((e_95 != NULL) && (e_95 != f_95)))
            _fail(f_95);
          else
            e_95 = f_95;
        }
      }
      t = c_37;
      {
        ATerm h_95 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_95));
        {
          h_95 = t;
          if(((g_95 != NULL) && (g_95 != h_95)))
            _fail(h_95);
          else
            g_95 = h_95;
        }
        t = not_null(g_95);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_90(t);
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
  ATerm n_95 = NULL,o_95 = NULL,p_95 = NULL;
  n_95 = t;
  m_95 :
  if(match_cons(n_95, sym__2))
    {
      o_95 = ATgetArgument(n_95, 0);
      p_95 = ATgetArgument(n_95, 1);
      t = SSL_table_get(not_null(o_95), not_null(p_95));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL;
  w_95 = t;
  v_95 :
  if(match_cons(w_95, sym__3))
    {
      x_95 = ATgetArgument(w_95, 0);
      y_95 = ATgetArgument(w_95, 1);
      z_95 = ATgetArgument(w_95, 2);
      {
        ATerm f_37;
        f_37 = t;
        {
          ATerm d_96 = NULL;
          ATerm e_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_95), not_null(y_95));
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
              e_96 = t;
              if(((d_96 != NULL) && (d_96 != e_96)))
                _fail(e_96);
              else
                d_96 = e_96;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_95), not_null(y_95), (ATerm) ATinsert(CheckATermList(not_null(d_96)), not_null(z_95)));
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
ATerm register_usage_1 (ATerm t, ATerm x_112 (ATerm))
{
  ATerm i_96 = NULL;
  ATerm j_96 = NULL;
  t = term_w_25;
  {
    t = x_112(t);
    {
      j_96 = t;
      if(((i_96 != NULL) && (i_96 != j_96)))
        _fail(j_96);
      else
        i_96 = j_96;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_36, term_v_36, not_null(i_96));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL;
  p_96 = t;
  o_96 :
  if(match_string(p_96, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(p_96) == AT_LIST) && !(ATisEmpty(p_96))))
        {
          q_96 = ATgetFirst((ATermList) p_96);
          r_96 = (ATerm) ATgetNext((ATermList) p_96);
          {
            ATerm u_96 = NULL;
            ATerm i_37;
            i_37 = t;
            {
              t = not_null(q_96);
              t = a_0(t);
            }
            t = i_37;
            {
              ATerm v_96 = NULL;
              t = term_w_25;
              {
                t = c_0(t);
                {
                  v_96 = t;
                  if(((u_96 != NULL) && (u_96 != v_96)))
                    _fail(v_96);
                  else
                    u_96 = v_96;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_96)), not_null(u_96));
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
    ATerm a_97 = NULL;
    a_97 = t;
    z_96 :
    if(!(match_string(a_97, "--help")))
      {
        if(!(match_string(a_97, "-h")))
          {
            if(!(match_string(a_97, "-?")))
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
  ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL;
  d_97 = t;
  c_97 :
  if(((ATgetType(d_97) == AT_LIST) && !(ATisEmpty(d_97))))
    {
      e_97 = ATgetFirst((ATermList) d_97);
      f_97 = (ATerm) ATgetNext((ATermList) d_97);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_97)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_97)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_71 (ATerm), ATerm j_71 (ATerm))
{
  ATerm p_97 = NULL,q_97 = NULL,s_97 = NULL;
  p_97 = t;
  o_97 :
  if(((ATgetType(p_97) == AT_LIST) && !(ATisEmpty(p_97))))
    {
      q_97 = ATgetFirst((ATermList) p_97);
      s_97 = (ATerm) ATgetNext((ATermList) p_97);
      {
        ATerm y_97 = NULL,a_98 = NULL;
        ATerm z_97 = NULL;
        t = SSLgetAnnotations(not_null(p_97));
        {
          z_97 = t;
          if(((y_97 != NULL) && (y_97 != z_97)))
            _fail(z_97);
          else
            y_97 = z_97;
        }
        {
          t = not_null(q_97);
          {
            ATerm e_98 = NULL;
            t = i_71(t);
            {
              a_98 = t;
              {
                t = not_null(s_97);
                {
                  ATerm g_98 = NULL;
                  t = j_71(t);
                  {
                    e_98 = t;
                    {
                      ATerm h_98 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_98)), not_null(a_98)), not_null(y_97));
                      {
                        h_98 = t;
                        if(((g_98 != NULL) && (g_98 != h_98)))
                          _fail(h_98);
                        else
                          g_98 = h_98;
                      }
                      t = not_null(g_98);
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
  ATerm t_98 = NULL;
  t_98 = t;
  s_98 :
  if(((ATgetType(t_98) == AT_LIST) && ATisEmpty(t_98)))
    {
      {
        ATerm v_98 = NULL,x_98 = NULL;
        ATerm n_37;
        n_37 = t;
        {
          ATerm w_98 = NULL;
          t = SSLgetAnnotations(not_null(t_98));
          {
            w_98 = t;
            if(((v_98 != NULL) && (v_98 != w_98)))
              _fail(w_98);
            else
              v_98 = w_98;
          }
        }
        t = n_37;
        {
          ATerm y_98 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_98));
          {
            y_98 = t;
            if(((x_98 != NULL) && (x_98 != y_98)))
              _fail(y_98);
            else
              x_98 = y_98;
          }
          t = not_null(x_98);
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
  ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL;
  e_99 = t;
  d_99 :
  if(match_cons(e_99, sym__2))
    {
      f_99 = ATgetArgument(e_99, 0);
      g_99 = ATgetArgument(e_99, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_5, not_null(f_99), not_null(g_99));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_112 (ATerm))
{
  ATerm o_37;
  o_37 = t;
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_37;
        t = v_112(t);
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
      ATerm o_99 = NULL;
      ATerm s_37;
      s_37 = t;
      {
        ATerm m_99 = NULL;
        ATerm n_99 = NULL;
        n_99 = t;
        if(((m_99 != NULL) && (m_99 != n_99)))
          _fail(n_99);
        else
          m_99 = n_99;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_35, not_null(m_99));
          t = set_config_0(t);
        }
      }
      t = s_37;
      {
        ATerm p_99 = NULL;
        p_99 = t;
        if(((o_99 != NULL) && (o_99 != p_99)))
          _fail(p_99);
        else
          o_99 = p_99;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_99));
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
                t = v_112(t);
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
  ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL;
  ATerm x_37;
  x_37 = t;
  {
    ATerm y_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL;
    y_99 = t;
    u_99 :
    if(match_cons(y_99, sym__3))
      {
        z_99 = ATgetArgument(y_99, 0);
        a_100 = ATgetArgument(y_99, 1);
        b_100 = ATgetArgument(y_99, 2);
        {
          if(((v_99 != NULL) && (v_99 != z_99)))
            _fail(z_99);
          else
            v_99 = z_99;
          {
            if(((w_99 != NULL) && (w_99 != a_100)))
              _fail(a_100);
            else
              w_99 = a_100;
            {
              if(((x_99 != NULL) && (x_99 != b_100)))
                _fail(b_100);
              else
                x_99 = b_100;
              t = SSL_table_put(not_null(v_99), not_null(w_99), not_null(x_99));
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
ATerm parse_options_1 (ATerm t, ATerm u_112 (ATerm))
{
  ATerm e_100 = NULL;
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
          t = u_112(t);
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
                    ATerm f_100 = NULL;
                    f_100 = t;
                    if(((e_100 != NULL) && (e_100 != f_100)))
                      _fail(f_100);
                    else
                      e_100 = f_100;
                    return(t);
                  }
                  t = Undefined_1(t, i_5);
                  return(t);
                }
                t = fetch_1(t, h_5);
                {
                  ATerm k_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_100)), term_j_38);
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
ATerm option_wrap_4 (ATerm t, ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm s_109 (ATerm))
{
  t = parse_options_1(t, p_109);
  {
    t = store_options_0(t);
    {
      t = r_109(t);
      {
        ATerm l_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_109);
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
                  t = s_109(t);
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
ATerm iowrap_4 (ATerm t, ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm j_110 (ATerm))
{
  ATerm l_5 (ATerm t)
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_110(t);
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
      t = apply_strategy_1(t, g_110);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_5, i_110, j_110, m_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm r_38;
      r_38 = t;
      {
        ATerm i_100 = NULL;
        ATerm j_100 = NULL;
        t = term_w_35;
        {
          t = get_config_0(t);
          {
            j_100 = t;
            if(((i_100 != NULL) && (i_100 != j_100)))
              _fail(j_100);
            else
              i_100 = j_100;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATempty, not_null(i_100)));
          t = printnl_0(t);
        }
      }
      t = r_38;
      return(t);
    }
    t = if_verbose2_1(t, o_5);
    return(t);
  }
  t = iowrap_4(t, a_110, b_110, c_110, n_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm y_109 (ATerm), ATerm z_109 (ATerm))
{
  t = iowrap_3(t, y_109, z_109, default_usage_0);
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
