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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  init_constant_terms();
}
ATerm term_h_49;
ATerm term_g_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_u_48;
ATerm term_s_48;
ATerm term_j_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_f_47;
ATerm term_w_46;
ATerm term_p_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_f_46;
ATerm term_y_45;
ATerm term_w_45;
ATerm term_u_45;
ATerm term_s_45;
ATerm term_t_44;
ATerm term_j_44;
ATerm term_y_43;
ATerm term_q_43;
ATerm term_m_43;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_m_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_y_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_i_40;
ATerm term_d_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_f_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_x_38;
ATerm term_t_38;
ATerm term_o_38;
ATerm term_k_38;
ATerm term_h_38;
ATerm term_e_38;
ATerm term_x_37;
ATerm term_p_37;
ATerm term_l_37;
ATerm term_e_37;
ATerm term_b_37;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_l_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_u_34;
ATerm term_m_34;
ATerm term_g_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_t_33;
ATerm term_r_33;
ATerm term_n_33;
ATerm term_v_32;
ATerm term_j_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_t_31;
ATerm term_r_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_a_30;
ATerm term_y_29;
ATerm term_f_29;
ATerm term_z_28;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_l_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_l_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_u_23;
ATerm term_r_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_o_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_j_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_o_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_w_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_y_13;
void init_constant_terms (void)
{
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_w_20);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.\n", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_a_32);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_r_33);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_y_19);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_y_19);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_y_19);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_y_19);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym__2, term_p_39, term_y_19);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_y_13);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym__2, term_i_40, term_y_19);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__2, term_o_40, term_y_19);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(sym__2, term_t_40, term_y_19);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym__2, term_u_42, term_v_42);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym__3, term_u_42, term_v_42, (ATerm) ATempty);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9beta8", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_s_45);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_o_22);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_n_19, term_y_13);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("<ssl/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_79 (ATerm), ATerm o_79 (ATerm));
ATerm crush_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_86 (ATerm));
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm p_93 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm ac2abox_0 (ATerm);
ATerm s2c_0 (ATerm);
ATerm stratego_cf_0 (ATerm);
ATerm canonicalize_0 (ATerm);
ATerm back_end_0 (ATerm);
ATerm optimize2_0 (ATerm);
ATerm compile_match_0 (ATerm);
ATerm inline_0 (ATerm);
ATerm fusion_0 (ATerm);
ATerm optimize1_0 (ATerm);
ATerm optimize_0 (ATerm);
ATerm rename_defs_0 (ATerm);
ATerm stratego_nf_0 (ATerm);
ATerm extract_0 (ATerm);
ATerm extract_all_0 (ATerm);
ATerm output_frontend_0 (ATerm);
ATerm if_keep2_1 (ATerm, ATerm i_87 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm j_87 (ATerm));
ATerm AddMain_1 (ATerm, ATerm g_65 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm z_93 (ATerm));
ATerm add_main_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_65 (ATerm));
ATerm xtc_exit_0 (ATerm);
ATerm xtc_io_exit_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm h_65 (ATerm));
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm q_0 (ATerm));
ATerm output_ast_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm dep_name_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm x_93 (ATerm), ATerm y_93 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm d_90 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm o_93 (ATerm));
ATerm assert_1 (ATerm, ATerm q_83 (ATerm));
ATerm obsolete_1 (ATerm, ATerm e_84 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm a_60 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm q_93 (ATerm), ATerm r_93 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm v_86 (ATerm));
ATerm basename_1 (ATerm, ATerm j_82 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm n_83 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm m_83 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm e_93 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm h_93 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_86 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm p_84 (ATerm), ATerm q_84 (ATerm));
ATerm debug_1 (ATerm, ATerm x_83 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_65 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm x_86 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm w_86 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm y_86 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm a_79 (ATerm), ATerm b_79 (ATerm));
ATerm union_1 (ATerm, ATerm w_78 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm h_90 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm extend_config_0 (ATerm);
ATerm table_remove_0 (ATerm);
ATerm toggle_config_0 (ATerm);
ATerm post_extend_config_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm z_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm r_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm y_83 (ATerm));
ATerm Undefined_1 (ATerm, ATerm s_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_88 (ATerm));
ATerm parse_options_1 (ATerm, ATerm y_88 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm o_53 (ATerm), ATerm p_53 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_54 (ATerm), ATerm y_54 (ATerm));
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm xtc_find_path_0 (ATerm);
ATerm init_sc_config_0 (ATerm);
ATerm command_line_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_exit(not_null(e_0));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  c_1 :
  if(match_cons(v_1, sym__2))
    {
      w_1 = ATgetArgument(v_1, 0);
      x_1 = ATgetArgument(v_1, 1);
      {
        ATerm v_13;
        v_13 = t;
        t = SSL_printnl(not_null(w_1), not_null(x_1));
        t = v_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_79 (ATerm), ATerm o_79 (ATerm))
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_79(t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        ATerm b_3 = NULL,d_3 = NULL,f_3 = NULL;
        b_3 = t;
        a_3 :
        if(((ATgetType(b_3) == AT_LIST) && !(ATisEmpty(b_3))))
          {
            d_3 = ATgetFirst((ATermList) b_3);
            f_3 = (ATerm) ATgetNext((ATermList) b_3);
            {
              ATerm k_3 = NULL;
              ATerm l_3 = NULL;
              t = not_null(f_3);
              {
                t = foldr_2(t, n_79, o_79);
                {
                  l_3 = t;
                  if(((k_3 != NULL) && (k_3 != l_3)))
                    _fail(l_3);
                  else
                    k_3 = l_3;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), not_null(k_3));
                t = o_79(t);
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
ATerm crush_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm u_3 = NULL;
  ATerm w_3 = NULL;
  u_3 = t;
  {
    ATerm x_3 = NULL;
    ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
    t = not_null(u_3);
    {
      x_3 = t;
      {
        t = SSL_explode_term(not_null(x_3));
        {
          z_3 = t;
          s_3 :
          if(match_cons(z_3, sym__2))
            {
              a_4 = ATgetArgument(z_3, 0);
              b_4 = ATgetArgument(z_3, 1);
              if(((w_3 != NULL) && (w_3 != b_4)))
                _fail(b_4);
              else
                w_3 = b_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_3);
      t = foldr_2(t, l_78, m_78);
    }
  }
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = term_y_13;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_14;
      d_14 = t;
      {
        ATerm g_4 = NULL;
        ATerm h_4 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            h_4 = t;
            if(((g_4 != NULL) && (g_4 != h_4)))
              _fail(h_4);
            else
              g_4 = h_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), term_j_14);
          t = geq_0(t);
        }
      }
      t = d_14;
      t = u_86(t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      {
      }
    }
  return(t);
}
ATerm link_object_code_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL;
  n_4 = t;
  m_4 :
  if(match_cons(n_4, sym_FILE_1))
    {
      o_4 = ATgetArgument(n_4, 0);
      {
        ATerm q_4 = NULL;
        ATerm r_4 = NULL;
        ATerm c_0 (ATerm t)
        {
          ATerm f_0 (ATerm t)
          {
            t = term_k_14;
            return(t);
          }
          t = say_1(t, f_0);
          return(t);
        }
        t = if_verbose2_1(t, c_0);
        {
          ATerm s_4 = NULL;
          ATerm m_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_o_14;
              t = get_config_0(t);
              LocalPopChoice(n_14);
            }
          else
            {
              t = m_14;
              {
                ATerm s_0 (ATerm t)
                {
                  t = term_p_14;
                  return(t);
                }
                t = get_outfile_1(t, s_0);
              }
            }
          {
            r_4 = t;
            {
              if(((q_4 != NULL) && (q_4 != r_4)))
                _fail(r_4);
              else
                q_4 = r_4;
              {
                ATerm t_4 = NULL;
                t = term_u_14;
                {
                  t = get_config_0(t);
                  {
                    t_4 = t;
                    if(((s_4 != NULL) && (s_4 != t_4)))
                      _fail(t_4);
                    else
                      s_4 = t_4;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(s_4)), not_null(q_4)), term_o_14), not_null(o_4)));
                  {
                    t = if_verbose3_1(t, debug_0);
                    t = call_0(t);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_4));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm c_to_object_code_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_FILE_1))
    {
      d_5 = ATgetArgument(c_5, 0);
      {
        ATerm f_5 = NULL;
        ATerm g_5 = NULL;
        ATerm t_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            t = term_w_14;
            return(t);
          }
          t = say_1(t, u_0);
          return(t);
        }
        t = if_verbose2_1(t, t_0);
        {
          ATerm h_5 = NULL;
          ATerm v_0 (ATerm t)
          {
            t = term_z_14;
            return(t);
          }
          t = get_outfile_1(t, v_0);
          {
            g_5 = t;
            {
              if(((f_5 != NULL) && (f_5 != g_5)))
                _fail(g_5);
              else
                f_5 = g_5;
              {
                ATerm i_5 = NULL,k_5 = NULL;
                ATerm j_5 = NULL;
                t = term_a_15;
                {
                  t = get_config_0(t);
                  {
                    j_5 = t;
                    if(((i_5 != NULL) && (i_5 != j_5)))
                      _fail(j_5);
                    else
                      i_5 = j_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(f_5)), term_o_14), not_null(d_5)), term_b_15));
                  {
                    ATerm c_15 = t;
                    int d_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(d_15);
                      }
                    else
                      {
                        t = c_15;
                        t = conc_more_lists_0(t);
                      }
                    {
                      k_5 = t;
                      if(((h_5 != NULL) && (h_5 != k_5)))
                        _fail(k_5);
                      else
                        h_5 = k_5;
                    }
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_14, not_null(h_5));
                  {
                    t = if_verbose3_1(t, debug_0);
                    t = call_0(t);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_5));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm c_compile_0 (ATerm t)
{
  ATerm j_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_15;
      n_15 = t;
      {
        t = term_b_15;
        t = get_config_0(t);
      }
      t = n_15;
      LocalPopChoice(m_15);
    }
  else
    {
      t = j_15;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            ATerm q_5 = NULL;
            ATerm r_5 = NULL;
            r_5 = t;
            if(((q_5 != NULL) && (q_5 != r_5)))
              _fail(r_5);
            else
              q_5 = r_5;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(CheckATermList(not_null(q_5)), term_p_15));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, y_0);
          return(t);
        }
        ATerm x_0 (ATerm t)
        {
          t = c_to_object_code_0(t);
          t = link_object_code_0(t);
          return(t);
        }
        t = profile_p__2(t, w_0, x_0);
      }
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym__2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      t = SSL_rename(not_null(w_5), not_null(x_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm k_6 = NULL,l_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym_FILE_1))
    {
      l_6 = ATgetArgument(k_6, 0);
      {
        ATerm q_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_6 = NULL;
            t = r_0(t);
            {
              n_6 = t;
              f_6 :
              if(match_cons(n_6, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), term_w_15);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(l_6);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_w_15;
            LocalPopChoice(v_15);
          }
        else
          {
            t = q_15;
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_6 = NULL;
                  ATerm q_6 = NULL;
                  t = r_0(t);
                  {
                    q_6 = t;
                    {
                      if(((p_6 != NULL) && (p_6 != q_6)))
                        _fail(q_6);
                      else
                        p_6 = q_6;
                      {
                        ATerm z_15 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm b_16 = t;
                            int e_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(e_16);
                              }
                            else
                              {
                                t = b_16;
                                {
                                  ATerm r_6 = NULL;
                                  r_6 = t;
                                  if(((l_6 != NULL) && (l_6 != r_6)))
                                    _fail(r_6);
                                  else
                                    l_6 = r_6;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = z_15;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), not_null(p_6));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_6));
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = x_15;
                  {
                    ATerm t_6 = NULL;
                    t = r_0(t);
                    {
                      t_6 = t;
                      if(((l_6 != NULL) && (l_6 != t_6)))
                        _fail(t_6);
                      else
                        l_6 = t_6;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_6));
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
ATerm xtc_transform_1 (ATerm t, ATerm p_93 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, p_93, z_0);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    t = term_f_16;
    return(t);
  }
  t = xtc_transform_1(t, a_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_g_16;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm c_7 = NULL;
    ATerm d_7 = NULL;
    t = term_i_16;
    {
      t = xtc_find_0(t);
      {
        d_7 = t;
        if(((c_7 != NULL) && (c_7 != d_7)))
          _fail(d_7);
        else
          c_7 = d_7;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_7)), term_j_16);
    return(t);
  }
  t = xtc_transform_2(t, b_1, d_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = term_k_16;
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm i_7 = NULL,k_7 = NULL;
    ATerm p_16;
    p_16 = t;
    {
      ATerm j_7 = NULL;
      t = pass_verbose_0(t);
      {
        j_7 = t;
        if(((i_7 != NULL) && (i_7 != j_7)))
          _fail(j_7);
        else
          i_7 = j_7;
      }
    }
    t = p_16;
    {
      ATerm n_7 = NULL;
      t = term_q_16;
      {
        t = get_config_0(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm l_7 = NULL;
            ATerm m_7 = NULL;
            m_7 = t;
            if(((l_7 != NULL) && (l_7 != m_7)))
              _fail(m_7);
            else
              l_7 = m_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_7)), term_q_16);
            return(t);
          }
          t = map_1(t, g_1);
          {
            n_7 = t;
            if(((k_7 != NULL) && (k_7 != n_7)))
              _fail(n_7);
            else
              k_7 = n_7;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_7)), (ATerm) ATinsert(ATempty, term_r_16)), not_null(i_7));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, e_1, f_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_s_16;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm s_7 = NULL;
    ATerm t_7 = NULL;
    t = pass_verbose_0(t);
    {
      t_7 = t;
      if(((s_7 != NULL) && (s_7 != t_7)))
        _fail(t_7);
      else
        s_7 = t_7;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, h_1, i_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_u_16;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm w_7 = NULL;
    ATerm x_7 = NULL;
    t = pass_verbose_0(t);
    {
      x_7 = t;
      if(((w_7 != NULL) && (w_7 != x_7)))
        _fail(x_7);
      else
        w_7 = x_7;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, j_1, k_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = term_v_16;
      return(t);
    }
    t = debug_1(t, m_1);
    return(t);
  }
  t = if_verbose2_1(t, l_1);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm a_8 = NULL;
        ATerm b_8 = NULL;
        b_8 = t;
        if(((a_8 != NULL) && (a_8 != b_8)))
          _fail(b_8);
        else
          a_8 = b_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_w_16));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, p_1);
      return(t);
    }
    ATerm o_1 (ATerm t)
    {
      t = canonicalize_0(t);
      {
        t = stratego_cf_0(t);
        {
          t = s2c_0(t);
          {
            t = ac2abox_0(t);
            {
              ATerm q_1 (ATerm t)
              {
                t = term_f_16;
                return(t);
              }
              t = xtc_transform_1(t, q_1);
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = term_x_16;
                    return(t);
                  }
                  t = get_outfile_1(t, s_1);
                  return(t);
                }
                t = rename_to_1(t, r_1);
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, n_1, o_1);
  }
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = term_y_16;
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    ATerm e_8 = NULL;
    ATerm f_8 = NULL;
    t = pass_verbose_0(t);
    {
      f_8 = t;
      if(((e_8 != NULL) && (e_8 != f_8)))
        _fail(f_8);
      else
        e_8 = f_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(e_8)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, t_1, u_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm i_8 = NULL;
    ATerm j_8 = NULL;
    t = pass_verbose_0(t);
    {
      j_8 = t;
      if(((i_8 != NULL) && (i_8 != j_8)))
        _fail(j_8);
      else
        i_8 = j_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(i_8)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_e_17;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm m_8 = NULL;
    ATerm n_8 = NULL;
    t = pass_verbose_0(t);
    {
      n_8 = t;
      if(((m_8 != NULL) && (m_8 != n_8)))
        _fail(n_8);
      else
        m_8 = n_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(m_8)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, a_2, b_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_g_17;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm q_8 = NULL;
    ATerm r_8 = NULL;
    t = pass_verbose_0(t);
    {
      r_8 = t;
      if(((q_8 != NULL) && (q_8 != r_8)))
        _fail(r_8);
      else
        q_8 = r_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, c_2, d_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    t = term_m_17;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm u_8 = NULL;
    ATerm v_8 = NULL;
    t = pass_verbose_0(t);
    {
      v_8 = t;
      if(((u_8 != NULL) && (u_8 != v_8)))
        _fail(v_8);
      else
        u_8 = v_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm h_2 (ATerm t)
    {
      t = term_n_17;
      return(t);
    }
    t = debug_1(t, h_2);
    return(t);
  }
  t = if_verbose2_1(t, g_2);
  {
    ATerm i_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        ATerm y_8 = NULL;
        ATerm z_8 = NULL;
        z_8 = t;
        if(((y_8 != NULL) && (y_8 != z_8)))
          _fail(z_8);
        else
          y_8 = z_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_o_17));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, k_2);
      return(t);
    }
    ATerm j_2 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_17;
            v_17 = t;
            {
              ATerm w_17 = t;
              if((PushChoice() == 0))
                {
                  t = term_x_17;
                  t = get_config_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = w_17;
                }
            }
            t = v_17;
            t = fusion_0(t);
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            {
            }
          }
        {
          t = inline_0(t);
          {
            t = compile_match_0(t);
            t = optimize2_0(t);
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, i_2, j_2);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = term_y_17;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm c_9 = NULL;
    ATerm d_9 = NULL;
    t = pass_verbose_0(t);
    {
      d_9 = t;
      if(((c_9 != NULL) && (c_9 != d_9)))
        _fail(d_9);
      else
        c_9 = d_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(c_9)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, l_2, m_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = term_z_17;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm g_9 = NULL;
    ATerm h_9 = NULL;
    t = pass_verbose_0(t);
    {
      h_9 = t;
      if(((g_9 != NULL) && (g_9 != h_9)))
        _fail(h_9);
      else
        g_9 = h_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(g_9)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, n_2, o_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_e_18;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm k_9 = NULL;
    ATerm l_9 = NULL;
    t = pass_verbose_0(t);
    {
      l_9 = t;
      if(((k_9 != NULL) && (k_9 != l_9)))
        _fail(l_9);
      else
        k_9 = l_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_f_18;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm o_9 = NULL;
    ATerm p_9 = NULL;
    t = pass_verbose_0(t);
    {
      p_9 = t;
      if(((o_9 != NULL) && (o_9 != p_9)))
        _fail(p_9);
      else
        o_9 = p_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm s_9 = NULL;
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_18;
      i_18 = t;
      {
        t = term_o_18;
        t = get_config_0(t);
      }
      t = i_18;
      {
        ATerm p_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = extract_all_0(t);
            LocalPopChoice(x_18);
          }
        else
          {
            t = p_18;
            {
              t = (ATerm) ATinsert(ATempty, term_y_18);
              t = fatal_error_0(t);
            }
          }
        {
          ATerm t_2 (ATerm t)
          {
            ATerm t_9 = NULL;
            ATerm u_2 (ATerm t)
            {
              t = term_z_18;
              return(t);
            }
            t = get_outfile_1(t, u_2);
            {
              t_9 = t;
              if(((s_9 != NULL) && (s_9 != t_9)))
                _fail(t_9);
              else
                s_9 = t_9;
            }
            return(t);
          }
          t = copy_to_1(t, t_2);
          {
            ATerm v_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_a_19);
              return(t);
            }
            t = say_1(t, v_2);
            t = xtc_io_exit_0(t);
          }
        }
      }
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      {
      }
    }
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm i_87 (ATerm))
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_19;
      m_19 = t;
      {
        ATerm w_9 = NULL;
        ATerm x_9 = NULL;
        t = term_n_19;
        {
          t = get_config_0(t);
          {
            x_9 = t;
            if(((w_9 != NULL) && (w_9 != x_9)))
              _fail(x_9);
            else
              w_9 = x_9;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), term_j_14);
          t = geq_0(t);
        }
      }
      t = m_19;
      t = i_87(t);
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
      }
    }
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm d_10 = NULL;
  ATerm w_2 (ATerm t)
  {
    t = term_o_19;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm b_10 = NULL;
    ATerm c_10 = NULL;
    t = pass_verbose_0(t);
    {
      c_10 = t;
      if(((b_10 != NULL) && (b_10 != c_10)))
        _fail(c_10);
      else
        b_10 = c_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(b_10)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, w_2, x_2);
  {
    ATerm y_2 (ATerm t)
    {
      ATerm z_2 (ATerm t)
      {
        ATerm e_10 = NULL;
        ATerm c_3 (ATerm t)
        {
          t = term_p_19;
          return(t);
        }
        t = get_outfile_1(t, c_3);
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
        return(t);
      }
      t = copy_to_1(t, z_2);
      {
        ATerm e_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_10)), term_s_19);
          return(t);
        }
        t = say_1(t, e_3);
      }
      return(t);
    }
    t = if_keep2_1(t, y_2);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm j_87 (ATerm))
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_19;
      w_19 = t;
      {
        ATerm i_10 = NULL;
        ATerm j_10 = NULL;
        t = term_n_19;
        {
          t = get_config_0(t);
          {
            j_10 = t;
            if(((i_10 != NULL) && (i_10 != j_10)))
              _fail(j_10);
            else
              i_10 = j_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), term_x_19);
          t = geq_0(t);
        }
      }
      t = w_19;
      t = j_87(t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      {
      }
    }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_Specification_1))
    {
      p_10 = ATgetArgument(o_10, 0);
      {
        ATerm r_10 = NULL;
        ATerm s_10 = NULL;
        t = term_y_19;
        {
          t = g_65(t);
          {
            s_10 = t;
            if(((r_10 != NULL) && (r_10 != s_10)))
              _fail(s_10);
            else
              r_10 = s_10;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(p_10)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_z_19, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_10)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm z_93 (ATerm))
{
  t = read_from_0(t);
  {
    t = z_93(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm x_10 = NULL,z_10 = NULL;
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_20;
      c_20 = t;
      {
        ATerm y_10 = NULL;
        t = term_d_20;
        {
          t = get_config_0(t);
          {
            y_10 = t;
            {
              if(((x_10 != NULL) && (x_10 != y_10)))
                _fail(y_10);
              else
                x_10 = y_10;
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm h_3 (ATerm t)
                  {
                    t = term_l_20;
                    return(t);
                  }
                  t = debug_1(t, h_3);
                  return(t);
                }
                t = if_verbose2_1(t, g_3);
              }
            }
          }
        }
      }
      t = c_20;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm j_3 (ATerm t)
          {
            t = not_null(x_10);
            return(t);
          }
          t = AddMain_1(t, j_3);
          return(t);
        }
        t = xtc_io_transform_1(t, i_3);
      }
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
      }
    }
  {
    ATerm m_3 (ATerm t)
    {
      ATerm n_3 (ATerm t)
      {
        ATerm a_11 = NULL;
        ATerm o_3 (ATerm t)
        {
          t = term_q_20;
          return(t);
        }
        t = get_outfile_1(t, o_3);
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
        return(t);
      }
      t = copy_to_1(t, n_3);
      {
        ATerm p_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_10)), term_r_20);
          return(t);
        }
        t = say_1(t, p_3);
      }
      return(t);
    }
    t = if_keep3_1(t, m_3);
  }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm))
{
  ATerm d_11 (ATerm t)
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_65(t);
        t = d_11(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = x_65(t);
      }
    return(t);
  }
  t = d_11(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_65 (ATerm))
{
  t = repeat_2(t, z_65, _id);
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm h_11 = NULL;
  ATerm j_11 = NULL,k_11 = NULL;
  h_11 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm u_20;
      u_20 = t;
      {
        ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
        t = term_x_20;
        {
          t = table_get_0(t);
          {
            l_11 = t;
            g_11 :
            if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
              {
                m_11 = ATgetFirst((ATermList) l_11);
                n_11 = (ATerm) ATgetNext((ATermList) l_11);
                {
                  if(((k_11 != NULL) && (k_11 != m_11)))
                    _fail(m_11);
                  else
                    k_11 = m_11;
                  {
                    if(((j_11 != NULL) && (j_11 != n_11)))
                      _fail(n_11);
                    else
                      j_11 = n_11;
                    {
                      t = not_null(k_11);
                      {
                        ATerm r_3 (ATerm t)
                        {
                          ATerm y_20 = t;
                          int b_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = remove_file_0(t);
                              LocalPopChoice(b_21);
                            }
                          else
                            {
                              t = y_20;
                              {
                              }
                            }
                          return(t);
                        }
                        t = map_1(t, r_3);
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
      t = u_20;
      {
        ATerm t_3 (ATerm t)
        {
          t = term_v_20;
          return(t);
        }
        t = end_scope_1(t, t_3);
      }
      return(t);
    }
    t = repeat_2(t, q_3, _id);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_14;
        t = get_config_0(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = term_w_15;
      }
    return(t);
  }
  t = copy_to_1(t, v_3);
  {
    t = term_y_13;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm s_11 = NULL,u_11 = NULL;
  ATerm i_21;
  i_21 = t;
  {
    ATerm t_11 = NULL;
    t = h_65(t);
    {
      t_11 = t;
      if(((s_11 != NULL) && (s_11 != t_11)))
        _fail(t_11);
      else
        s_11 = t_11;
    }
  }
  t = i_21;
  {
    ATerm v_11 = NULL;
    t = term_j_21;
    {
      t = get_config_0(t);
      {
        v_11 = t;
        if(((u_11 != NULL) && (u_11 != v_11)))
          _fail(v_11);
        else
          u_11 = v_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_11), not_null(s_11));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_stderr_0))
    {
      ATerm e_12 = NULL,g_12 = NULL;
      ATerm k_21;
      k_21 = t;
      {
        ATerm f_12 = NULL;
        t = SSLgetAnnotations(not_null(c_12));
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
      }
      t = k_21;
      {
        ATerm h_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(e_12));
        {
          h_12 = t;
          if(((g_12 != NULL) && (g_12 != h_12)))
            _fail(h_12);
          else
            g_12 = h_12;
        }
        t = not_null(g_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm p_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym_stdout_0))
    {
      ATerm r_12 = NULL,t_12 = NULL;
      ATerm l_21;
      l_21 = t;
      {
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(p_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
      }
      t = l_21;
      {
        ATerm u_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(r_12));
        {
          u_12 = t;
          if(((t_12 != NULL) && (t_12 != u_12)))
            _fail(u_12);
          else
            t_12 = u_12;
        }
        t = not_null(t_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm g_13 = NULL,h_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym_FILE_1))
    {
      h_13 = ATgetArgument(g_13, 0);
      {
        ATerm m_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_13 = NULL;
            ATerm k_13 = NULL;
            t = q_0(t);
            {
              k_13 = t;
              {
                if(((j_13 != NULL) && (j_13 != k_13)))
                  _fail(k_13);
                else
                  j_13 = k_13;
                {
                  ATerm r_21 = t;
                  int v_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(v_21);
                    }
                  else
                    {
                      t = r_21;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(j_13));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_13));
            LocalPopChoice(q_21);
          }
        else
          {
            t = m_21;
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_13 = NULL;
                  ATerm n_13 = NULL;
                  t = q_0(t);
                  {
                    n_13 = t;
                    {
                      if(((m_13 != NULL) && (m_13 != n_13)))
                        _fail(n_13);
                      else
                        m_13 = n_13;
                      {
                        ATerm y_21 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm z_21 = t;
                            int a_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(a_22);
                              }
                            else
                              {
                                t = z_21;
                                {
                                  ATerm b_22 = t;
                                  int c_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(c_22);
                                    }
                                  else
                                    {
                                      t = b_22;
                                      {
                                        ATerm o_13 = NULL;
                                        o_13 = t;
                                        if(((h_13 != NULL) && (h_13 != o_13)))
                                          _fail(o_13);
                                        else
                                          h_13 = o_13;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = y_21;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(m_13));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_13));
                  LocalPopChoice(x_21);
                }
              else
                {
                  t = w_21;
                  {
                    ATerm q_13 = NULL;
                    t = q_0(t);
                    {
                      q_13 = t;
                      if(((h_13 != NULL) && (h_13 != q_13)))
                        _fail(q_13);
                      else
                        h_13 = q_13;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_13));
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
ATerm output_ast_0 (ATerm t)
{
  ATerm z_13 = NULL;
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_22;
      f_22 = t;
      {
        t = term_g_22;
        t = get_config_0(t);
      }
      t = f_22;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm a_14 = NULL;
          ATerm c_4 (ATerm t)
          {
            t = term_h_22;
            return(t);
          }
          t = get_outfile_1(t, c_4);
          {
            a_14 = t;
            if(((z_13 != NULL) && (z_13 != a_14)))
              _fail(a_14);
            else
              z_13 = a_14;
          }
          return(t);
        }
        t = copy_to_1(t, y_3);
        {
          ATerm i_22;
          i_22 = t;
          {
            t = (ATerm) ATinsert(ATempty, term_j_22);
            t = echo_0(t);
          }
          t = i_22;
          t = xtc_io_exit_0(t);
        }
      }
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
      }
    }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm e_14 = NULL;
  ATerm f_14 = NULL,h_14 = NULL;
  ATerm g_14 = NULL;
  t = term_n_19;
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = term_o_22;
      }
    {
      g_14 = t;
      if(((f_14 != NULL) && (f_14 != g_14)))
        _fail(g_14);
      else
        f_14 = g_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), term_o_22);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          h_14 = t;
          if(((e_14 != NULL) && (e_14 != h_14)))
            _fail(h_14);
          else
            e_14 = h_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_14)), term_n_19);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  t = SSL_int_to_string(not_null(l_14));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm q_14 = NULL;
  ATerm r_14 = NULL,t_14 = NULL;
  ATerm s_14 = NULL;
  t = term_i_14;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = term_o_22;
      }
    {
      s_14 = t;
      if(((r_14 != NULL) && (r_14 != s_14)))
        _fail(s_14);
      else
        r_14 = s_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), term_o_22);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          t_14 = t;
          if(((q_14 != NULL) && (q_14 != t_14)))
            _fail(t_14);
          else
            q_14 = t_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_14)), term_i_14);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm x_14 = NULL;
  ATerm y_14 = NULL;
  ATerm t_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_14;
      t = get_config_0(t);
      LocalPopChoice(z_22);
    }
  else
    {
      t = t_22;
      {
        t = term_j_21;
        t = get_config_0(t);
      }
    }
  {
    y_14 = t;
    if(((x_14 != NULL) && (x_14 != y_14)))
      _fail(y_14);
    else
      x_14 = y_14;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_14)), term_a_23);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym_stdin_0))
    {
      ATerm h_15 = NULL;
      ATerm i_15 = NULL;
      t = term_b_23;
      {
        t = ReadFromFile_0(t);
        {
          i_15 = t;
          if(((h_15 != NULL) && (h_15 != i_15)))
            _fail(i_15);
          else
            h_15 = i_15;
        }
      }
      t = not_null(h_15);
    }
  else
    {
      if(match_cons(f_15, sym_FILE_1))
        {
          g_15 = ATgetArgument(f_15, 0);
          {
            ATerm k_15 = NULL;
            ATerm l_15 = NULL;
            t = not_null(g_15);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  l_15 = t;
                  if(((k_15 != NULL) && (k_15 != l_15)))
                    _fail(l_15);
                  else
                    k_15 = l_15;
                }
              }
            }
            t = not_null(k_15);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym__2))
    {
      t_15 = ATgetArgument(s_15, 0);
      u_15 = ATgetArgument(s_15, 1);
      t = SSL_WriteToBinaryFile(not_null(t_15), not_null(u_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm a_16 = NULL;
  ATerm c_16 = NULL;
  a_16 = t;
  {
    ATerm d_16 = NULL;
    t = xtc_new_file_0(t);
    {
      d_16 = t;
      {
        if(((c_16 != NULL) && (c_16 != d_16)))
          _fail(d_16);
        else
          c_16 = d_16;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), not_null(a_16));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(c_16);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_16));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm x_93 (ATerm), ATerm y_93 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, x_93, y_93);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  t = SSL_close_file(not_null(h_16));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym__2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      t = SSL_execvp(not_null(n_16), not_null(o_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm t_16 = NULL;
  t_16 = t;
  t = SSL_waitpid(not_null(t_16));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm d_17 = NULL;
  ATerm f_17 = NULL;
  d_17 = t;
  {
    t = fork_0(t);
    {
      f_17 = t;
      {
        ATerm f_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_17 = NULL;
            h_17 = t;
            z_16 :
            if(match_int(h_17, 0))
              {
                t = not_null(d_17);
                t = d_90(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(k_23);
          }
        else
          {
            t = f_23;
            {
              ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
              t = not_null(f_17);
              {
                t = waitpid_0(t);
                {
                  i_17 = t;
                  b_17 :
                  if(match_cons(i_17, sym_WaitStatus_3))
                    {
                      j_17 = ATgetArgument(i_17, 0);
                      k_17 = ATgetArgument(i_17, 1);
                      l_17 = ATgetArgument(i_17, 2);
                      c_17 :
                      if(match_int(j_17, 0))
                        {
                          t = not_null(d_17);
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
          }
      }
    }
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym__2))
    {
      t_17 = ATgetArgument(s_17, 0);
      u_17 = ATgetArgument(s_17, 1);
      {
        ATerm d_4 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(u_17));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, d_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm o_93 (ATerm))
{
  ATerm a_18 = NULL;
  ATerm l_23;
  l_23 = t;
  {
    ATerm b_18 = NULL;
    t = o_93(t);
    {
      t = xtc_find_0(t);
      {
        b_18 = t;
        if(((a_18 != NULL) && (a_18 != b_18)))
          _fail(b_18);
        else
          a_18 = b_18;
      }
    }
  }
  t = l_23;
  {
    ATerm m_23;
    m_23 = t;
    {
      ATerm c_18 = NULL;
      ATerm d_18 = NULL;
      d_18 = t;
      if(((c_18 != NULL) && (c_18 != d_18)))
        _fail(d_18);
      else
        c_18 = d_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), not_null(c_18));
        t = call_0(t);
      }
    }
    t = m_23;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm q_83 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      {
        ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
        ATerm n_23;
        n_23 = t;
        {
          ATerm t_18 = NULL;
          ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
          t = q_83(t);
          {
            t_18 = t;
            {
              if(((q_18 != NULL) && (q_18 != t_18)))
                _fail(t_18);
              else
                q_18 = t_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_18), not_null(m_18), not_null(n_18));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_23 = t;
                    int p_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), term_w_20);
                        t = table_get_0(t);
                        LocalPopChoice(p_23);
                      }
                    else
                      {
                        t = o_23;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_18 = t;
                      j_18 :
                      if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
                        {
                          v_18 = ATgetFirst((ATermList) u_18);
                          w_18 = (ATerm) ATgetNext((ATermList) u_18);
                          {
                            if(((r_18 != NULL) && (r_18 != v_18)))
                              _fail(v_18);
                            else
                              r_18 = v_18;
                            {
                              if(((s_18 != NULL) && (s_18 != w_18)))
                                _fail(w_18);
                              else
                                s_18 = w_18;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_18), term_w_20, (ATerm) ATinsert(CheckATermList(not_null(s_18)), (ATerm) ATinsert(CheckATermList(not_null(r_18)), not_null(m_18))));
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
        t = n_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm q_23;
  q_23 = t;
  {
    t = e_84(t);
    {
      ATerm e_4 (ATerm t)
      {
        t = term_r_23;
        return(t);
      }
      t = debug_1(t, e_4);
    }
  }
  t = q_23;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
      g_19 = t;
      b_19 :
      if(match_cons(g_19, sym__2))
        {
          h_19 = ATgetArgument(g_19, 0);
          i_19 = ATgetArgument(g_19, 1);
          {
            if(((f_19 != NULL) && (f_19 != h_19)))
              _fail(h_19);
            else
              f_19 = h_19;
            if(((e_19 != NULL) && (e_19 != i_19)))
              _fail(i_19);
            else
              e_19 = i_19;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_23);
      t = SSL_open_file(not_null(f_19), not_null(e_19));
    }
  else
    {
      t = s_23;
      {
        ATerm j_19 = NULL;
        ATerm k_19 = NULL;
        ATerm f_4 (ATerm t)
        {
          t = term_u_23;
          return(t);
        }
        t = obsolete_1(t, f_4);
        {
          j_19 = t;
          {
            if(((f_19 != NULL) && (f_19 != j_19)))
              _fail(j_19);
            else
              f_19 = j_19;
            {
              ATerm v_23;
              v_23 = t;
              {
                ATerm l_19 = NULL;
                t = term_e_24;
                {
                  l_19 = t;
                  if(((k_19 != NULL) && (k_19 != l_19)))
                    _fail(l_19);
                  else
                    k_19 = l_19;
                }
              }
              t = v_23;
              t = SSL_open_file(not_null(f_19), not_null(k_19));
            }
          }
        }
      }
    }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm q_19 = NULL;
  ATerm r_19 = NULL;
  t = term_y_19;
  {
    t = new_0(t);
    {
      r_19 = t;
      if(((q_19 != NULL) && (q_19 != r_19)))
        _fail(r_19);
      else
        q_19 = r_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_19), term_f_24);
    {
      t = conc_strings_0(t);
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm v_19 = NULL;
  t = new_file_0(t);
  {
    v_19 = t;
    {
      ATerm i_24;
      i_24 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), term_e_24);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), term_y_19);
            {
              ATerm i_4 (ATerm t)
              {
                t = term_v_20;
                return(t);
              }
              t = assert_1(t, i_4);
            }
          }
        }
      }
      t = i_24;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_stdin_0))
    {
      ATerm h_20 = NULL;
      ATerm i_20 = NULL;
      ATerm j_20 = NULL;
      t = xtc_new_file_0(t);
      {
        i_20 = t;
        {
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
          {
            ATerm k_20 = NULL;
            t = p_0(t);
            {
              k_20 = t;
              if(((j_20 != NULL) && (j_20 != k_20)))
                _fail(k_20);
              else
                j_20 = k_20;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_20)), term_o_14));
              {
                ATerm j_24 = t;
                int k_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(k_24);
                  }
                else
                  {
                    t = j_24;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(h_20);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_20));
    }
  else
    {
      if(match_cons(f_20, sym_FILE_1))
        {
          g_20 = ATgetArgument(f_20, 0);
          {
            ATerm m_20 = NULL;
            ATerm n_20 = NULL;
            t = not_null(g_20);
            {
              ATerm o_20 = NULL;
              t = xtc_new_file_0(t);
              {
                n_20 = t;
                {
                  if(((m_20 != NULL) && (m_20 != n_20)))
                    _fail(n_20);
                  else
                    m_20 = n_20;
                  {
                    ATerm p_20 = NULL;
                    t = p_0(t);
                    {
                      p_20 = t;
                      if(((o_20 != NULL) && (o_20 != p_20)))
                        _fail(p_20);
                      else
                        o_20 = p_20;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_20)), term_o_14), not_null(g_20)), term_l_24));
                      {
                        ATerm n_24 = t;
                        int p_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(p_24);
                          }
                        else
                          {
                            t = n_24;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(m_20);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_20));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm a_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_stdin_0))
    {
      ATerm c_21 = NULL,e_21 = NULL;
      ATerm q_24;
      q_24 = t;
      {
        ATerm d_21 = NULL;
        t = SSLgetAnnotations(not_null(a_21));
        {
          d_21 = t;
          if(((c_21 != NULL) && (c_21 != d_21)))
            _fail(d_21);
          else
            c_21 = d_21;
        }
      }
      t = q_24;
      {
        ATerm f_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(c_21));
        {
          f_21 = t;
          if(((e_21 != NULL) && (e_21 != f_21)))
            _fail(f_21);
          else
            e_21 = f_21;
        }
        t = not_null(e_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm o_21 = NULL,p_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_FILE_1))
    {
      p_21 = ATgetArgument(o_21, 0);
      {
        ATerm s_21 = NULL,u_21 = NULL;
        ATerm t_21 = NULL;
        t = SSLgetAnnotations(not_null(o_21));
        {
          t_21 = t;
          if(((s_21 != NULL) && (s_21 != t_21)))
            _fail(t_21);
          else
            s_21 = t_21;
        }
        {
          t = not_null(p_21);
          {
            ATerm k_22 = NULL;
            t = a_60(t);
            {
              u_21 = t;
              {
                ATerm l_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(u_21)), not_null(s_21));
                {
                  l_22 = t;
                  if(((k_22 != NULL) && (k_22 != l_22)))
                    _fail(l_22);
                  else
                    k_22 = l_22;
                }
                t = not_null(k_22);
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
ATerm xtc_transform_2 (ATerm t, ATerm q_93 (ATerm), ATerm r_93 (ATerm))
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(y_24);
        }
      else
        {
          t = x_24;
          t = stdin_0(t);
        }
      LocalPopChoice(w_24);
      t = xtc_transform_file_2(t, q_93, r_93);
    }
  else
    {
      t = v_24;
      t = xtc_transform_term_2(t, q_93, r_93);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_25;
      h_25 = t;
      {
        ATerm r_22 = NULL;
        ATerm s_22 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            s_22 = t;
            if(((r_22 != NULL) && (r_22 != s_22)))
              _fail(s_22);
            else
              r_22 = s_22;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), term_x_19);
          t = geq_0(t);
        }
      }
      t = h_25;
      t = v_86(t);
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
      }
    }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm j_82 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 (ATerm t)
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, y_22);
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              {
                ATerm v_25 = t;
                int w_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_4 (ATerm t)
                    {
                      ATerm w_22 = NULL;
                      w_22 = t;
                      u_22 :
                      if(!(match_int(w_22, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, j_4, _id);
                    LocalPopChoice(w_25);
                  }
                else
                  {
                    t = v_25;
                    {
                      ATerm k_4 (ATerm t)
                      {
                        ATerm x_22 = NULL;
                        x_22 = t;
                        v_22 :
                        if(!(match_int(x_22, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, k_4, j_82);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = y_22(t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        {
        }
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm get_infile_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym_FILE_1))
    {
      e_23 = ATgetArgument(d_23, 0);
      {
        ATerm g_23 = NULL,h_23 = NULL;
        ATerm i_23 = NULL;
        t = not_null(e_23);
        {
          ATerm j_23 = NULL;
          t = basename_1(t, _id);
          {
            i_23 = t;
            {
              if(((g_23 != NULL) && (g_23 != i_23)))
                _fail(i_23);
              else
                g_23 = i_23;
              {
                ATerm l_4 (ATerm t)
                {
                  ATerm p_4 (ATerm t)
                  {
                    t = term_x_25;
                    return(t);
                  }
                  t = debug_1(t, p_4);
                  return(t);
                }
                t = if_verbose3_1(t, l_4);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_25, not_null(g_23));
                  {
                    t = set_config_0(t);
                    {
                      ATerm z_25 = t;
                      int b_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_o_14;
                          {
                            t = get_config_0(t);
                            t = basename_1(t, _id);
                          }
                          LocalPopChoice(b_26);
                        }
                      else
                        {
                          t = z_25;
                          t = not_null(g_23);
                        }
                      {
                        j_23 = t;
                        {
                          if(((h_23 != NULL) && (h_23 != j_23)))
                            _fail(j_23);
                          else
                            h_23 = j_23;
                          {
                            ATerm u_4 (ATerm t)
                            {
                              ATerm v_4 (ATerm t)
                              {
                                t = term_c_26;
                                return(t);
                              }
                              t = debug_1(t, v_4);
                              return(t);
                            }
                            t = if_verbose3_1(t, u_4);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_j_21, not_null(h_23));
                              t = set_config_0(t);
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_23));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_0 (ATerm t)
{
  t = get_infile_0(t);
  {
    ATerm w_4 (ATerm t)
    {
      t = term_d_26;
      return(t);
    }
    ATerm x_4 (ATerm t)
    {
      ATerm w_23 = NULL,y_23 = NULL,a_24 = NULL,c_24 = NULL;
      ATerm e_26;
      e_26 = t;
      {
        ATerm x_23 = NULL;
        t = dep_name_0(t);
        {
          x_23 = t;
          if(((w_23 != NULL) && (w_23 != x_23)))
            _fail(x_23);
          else
            w_23 = x_23;
        }
      }
      t = e_26;
      {
        ATerm j_26;
        j_26 = t;
        {
          ATerm z_23 = NULL;
          t = pass_verbose_0(t);
          {
            z_23 = t;
            if(((y_23 != NULL) && (y_23 != z_23)))
              _fail(z_23);
            else
              y_23 = z_23;
          }
        }
        t = j_26;
        {
          ATerm k_26;
          k_26 = t;
          {
            ATerm b_24 = NULL;
            t = pass_keep_0(t);
            {
              b_24 = t;
              if(((a_24 != NULL) && (a_24 != b_24)))
                _fail(b_24);
              else
                a_24 = b_24;
            }
          }
          t = k_26;
          {
            ATerm d_24 = NULL;
            t = term_l_26;
            {
              t = get_config_0(t);
              {
                d_24 = t;
                if(((c_24 != NULL) && (c_24 != d_24)))
                  _fail(d_24);
                else
                  c_24 = d_24;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_24)), not_null(y_23)), not_null(c_24)), not_null(w_23));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, w_4, x_4);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      t = term_s_26;
      return(t);
    }
    t = debug_1(t, z_4);
    return(t);
  }
  t = if_verbose2_1(t, y_4);
  {
    ATerm a_5 (ATerm t)
    {
      ATerm l_5 (ATerm t)
      {
        ATerm m_24 = NULL;
        ATerm o_24 = NULL;
        o_24 = t;
        if(((m_24 != NULL) && (m_24 != o_24)))
          _fail(o_24);
        else
          m_24 = o_24;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(CheckATermList(not_null(m_24)), term_t_26));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, l_5);
      return(t);
    }
    ATerm e_5 (ATerm t)
    {
      t = parse_0(t);
      {
        t = output_ast_0(t);
        {
          t = add_main_0(t);
          {
            t = frontend_0(t);
            {
              t = output_frontend_0(t);
              {
                t = extract_0(t);
                {
                  t = stratego_nf_0(t);
                  t = rename_defs_0(t);
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, a_5, e_5);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  s_24 = t;
  r_24 :
  if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
    {
      t_24 = ATgetFirst((ATermList) s_24);
      u_24 = (ATerm) ATgetNext((ATermList) s_24);
      t = not_null(u_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  z_24 :
  if(match_cons(a_25, sym__2))
    {
      b_25 = ATgetArgument(a_25, 0);
      c_25 = ATgetArgument(a_25, 1);
      {
        ATerm w_26;
        w_26 = t;
        {
          ATerm f_25 = NULL;
          ATerm g_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_25), not_null(c_25));
          {
            ATerm x_26 = t;
            int a_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(a_27);
              }
            else
              {
                t = x_26;
                t = (ATerm) ATempty;
              }
            {
              g_25 = t;
              if(((f_25 != NULL) && (f_25 != g_25)))
                _fail(g_25);
              else
                f_25 = g_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_25), not_null(c_25), not_null(f_25));
            t = table_put_0(t);
          }
        }
        t = w_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  ATerm b_27;
  b_27 = t;
  {
    ATerm q_25 = NULL;
    ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
    t = n_83(t);
    {
      q_25 = t;
      {
        if(((p_25 != NULL) && (p_25 != q_25)))
          _fail(q_25);
        else
          p_25 = q_25;
        {
          ATerm d_27 = t;
          int e_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_25), term_w_20);
              t = table_get_0(t);
              LocalPopChoice(e_27);
            }
          else
            {
              t = d_27;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_25 = t;
            m_25 :
            if(((ATgetType(r_25) == AT_LIST) && !(ATisEmpty(r_25))))
              {
                s_25 = ATgetFirst((ATermList) r_25);
                t_25 = (ATerm) ATgetNext((ATermList) r_25);
                {
                  if(((o_25 != NULL) && (o_25 != s_25)))
                    _fail(s_25);
                  else
                    o_25 = s_25;
                  {
                    if(((n_25 != NULL) && (n_25 != t_25)))
                      _fail(t_25);
                    else
                      n_25 = t_25;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_25), term_w_20, not_null(n_25));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(o_25);
                          {
                            ATerm m_5 (ATerm t)
                            {
                              ATerm u_25 = NULL;
                              u_25 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_25), not_null(u_25));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, m_5);
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
  t = b_27;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  t = SSL_remove(not_null(a_26));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm f_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_65(t);
      t = t_65(t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = f_27;
      {
        t = t_65(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm m_83 (ATerm))
{
  ATerm f_26 = NULL;
  ATerm n_27;
  n_27 = t;
  {
    ATerm g_26 = NULL;
    ATerm h_26 = NULL;
    t = m_83(t);
    {
      g_26 = t;
      {
        if(((f_26 != NULL) && (f_26 != g_26)))
          _fail(g_26);
        else
          f_26 = g_26;
        {
          ATerm i_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_26), term_w_20);
          {
            ATerm o_27 = t;
            int p_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_27);
              }
            else
              {
                t = o_27;
                t = (ATerm) ATempty;
              }
            {
              i_26 = t;
              if(((h_26 != NULL) && (h_26 != i_26)))
                _fail(i_26);
              else
                h_26 = i_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_26), term_w_20, (ATerm) ATinsert(CheckATermList(not_null(h_26)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_27;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm e_93 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL;
  ATerm n_5 (ATerm t)
  {
    t = term_v_20;
    return(t);
  }
  t = begin_scope_1(t, n_5);
  {
    ATerm o_5 (ATerm t)
    {
      ATerm q_27;
      q_27 = t;
      {
        ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
        ATerm r_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_20;
            t = table_get_0(t);
            LocalPopChoice(w_27);
          }
        else
          {
            t = r_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          p_26 = t;
          m_26 :
          if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
            {
              q_26 = ATgetFirst((ATermList) p_26);
              r_26 = (ATerm) ATgetNext((ATermList) p_26);
              {
                if(((o_26 != NULL) && (o_26 != q_26)))
                  _fail(q_26);
                else
                  o_26 = q_26;
                {
                  if(((n_26 != NULL) && (n_26 != r_26)))
                    _fail(r_26);
                  else
                    n_26 = r_26;
                  {
                    t = not_null(o_26);
                    {
                      ATerm p_5 (ATerm t)
                      {
                        ATerm x_27 = t;
                        int y_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(y_27);
                          }
                        else
                          {
                            t = x_27;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, p_5);
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
      t = q_27;
      {
        ATerm s_5 (ATerm t)
        {
          t = term_v_20;
          return(t);
        }
        t = end_scope_1(t, s_5);
      }
      return(t);
    }
    t = restore_always_2(t, e_93, o_5);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm h_93 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm z_27 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL;
        ATerm v_26 = NULL;
        t = term_l_24;
        {
          t = get_config_0(t);
          {
            v_26 = t;
            if(((u_26 != NULL) && (u_26 != v_26)))
              _fail(v_26);
            else
              u_26 = v_26;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_26));
        LocalPopChoice(g_28);
      }
    else
      {
        t = z_27;
        t = term_b_23;
      }
    t = h_93(t);
    return(t);
  }
  t = xtc_temp_files_1(t, t_5);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    t = front_end_0(t);
    {
      t = optimize_0(t);
      {
        t = back_end_0(t);
        t = c_compile_0(t);
      }
    }
    return(t);
  }
  t = xtc_input_1(t, y_5);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_28;
      j_28 = t;
      {
        ATerm y_26 = NULL;
        ATerm z_26 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            z_26 = t;
            if(((y_26 != NULL) && (y_26 != z_26)))
              _fail(z_26);
            else
              y_26 = z_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_26), term_o_22);
          t = geq_0(t);
        }
      }
      t = j_28;
      t = t_86(t);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
      }
    }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  t = SSL_TicksToSeconds(not_null(c_27));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym__4))
    {
      i_27 = ATgetArgument(h_27, 0);
      j_27 = ATgetArgument(h_27, 1);
      k_27 = ATgetArgument(h_27, 2);
      l_27 = ATgetArgument(h_27, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(l_27));
        t = add_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym__2))
    {
      u_27 = ATgetArgument(t_27, 0);
      v_27 = ATgetArgument(t_27, 1);
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_27), not_null(v_27));
            LocalPopChoice(l_28);
          }
        else
          {
            t = k_28;
            t = SSL_addr(not_null(u_27), not_null(v_27));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm self_children_user_time_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym__4))
    {
      c_28 = ATgetArgument(b_28, 0);
      d_28 = ATgetArgument(b_28, 1);
      e_28 = ATgetArgument(b_28, 2);
      f_28 = ATgetArgument(b_28, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), not_null(e_28));
        t = add_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  n_28 = t;
  m_28 :
  if(match_cons(n_28, sym__2))
    {
      o_28 = ATgetArgument(n_28, 0);
      p_28 = ATgetArgument(n_28, 1);
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(o_28), not_null(p_28));
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            t = SSL_subtr(not_null(o_28), not_null(p_28));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_times_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,h_29 = NULL,i_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  c_29 = t;
  y_28 :
  if(match_cons(c_29, sym__2))
    {
      d_29 = ATgetArgument(c_29, 0);
      n_29 = ATgetArgument(c_29, 1);
      a_29 :
      if(match_cons(d_29, sym__4))
        {
          e_29 = ATgetArgument(d_29, 0);
          h_29 = ATgetArgument(d_29, 1);
          i_29 = ATgetArgument(d_29, 2);
          m_29 = ATgetArgument(d_29, 3);
          b_29 :
          if(match_cons(n_29, sym__4))
            {
              o_29 = ATgetArgument(n_29, 0);
              p_29 = ATgetArgument(n_29, 1);
              q_29 = ATgetArgument(n_29, 2);
              r_29 = ATgetArgument(n_29, 3);
              {
                ATerm c_30 = NULL,e_30 = NULL,g_30 = NULL,i_30 = NULL;
                ATerm s_28;
                s_28 = t;
                {
                  ATerm d_30 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), not_null(o_29));
                  {
                    t = subt_0(t);
                    {
                      d_30 = t;
                      if(((c_30 != NULL) && (c_30 != d_30)))
                        _fail(d_30);
                      else
                        c_30 = d_30;
                    }
                  }
                }
                t = s_28;
                {
                  ATerm t_28;
                  t_28 = t;
                  {
                    ATerm f_30 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(p_29));
                    {
                      t = subt_0(t);
                      {
                        f_30 = t;
                        if(((e_30 != NULL) && (e_30 != f_30)))
                          _fail(f_30);
                        else
                          e_30 = f_30;
                      }
                    }
                  }
                  t = t_28;
                  {
                    ATerm u_28;
                    u_28 = t;
                    {
                      ATerm h_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), not_null(q_29));
                      {
                        t = subt_0(t);
                        {
                          h_30 = t;
                          if(((g_30 != NULL) && (g_30 != h_30)))
                            _fail(h_30);
                          else
                            g_30 = h_30;
                        }
                      }
                    }
                    t = u_28;
                    {
                      ATerm j_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_29), not_null(r_29));
                      {
                        t = subt_0(t);
                        {
                          j_30 = t;
                          if(((i_30 != NULL) && (i_30 != j_30)))
                            _fail(j_30);
                          else
                            i_30 = j_30;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(c_30), not_null(e_30), not_null(g_30), not_null(i_30));
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
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2 (ATerm t, ATerm p_84 (ATerm), ATerm q_84 (ATerm))
{
  ATerm t_30 = NULL;
  ATerm v_28;
  v_28 = t;
  {
    ATerm u_30 = NULL;
    t = times_0(t);
    {
      u_30 = t;
      if(((t_30 != NULL) && (t_30 != u_30)))
        _fail(u_30);
      else
        t_30 = u_30;
    }
  }
  t = v_28;
  {
    t = q_84(t);
    {
      ATerm w_28;
      w_28 = t;
      {
        ATerm v_30 = NULL,x_30 = NULL,z_30 = NULL;
        ATerm w_30 = NULL;
        t = times_0(t);
        {
          w_30 = t;
          if(((v_30 != NULL) && (v_30 != w_30)))
            _fail(w_30);
          else
            v_30 = w_30;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_30), not_null(t_30));
          {
            t = diff_times_0(t);
            {
              ATerm x_28;
              x_28 = t;
              {
                ATerm y_30 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    y_30 = t;
                    if(((x_30 != NULL) && (x_30 != y_30)))
                      _fail(y_30);
                    else
                      x_30 = y_30;
                  }
                }
              }
              t = x_28;
              {
                ATerm a_31 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    a_31 = t;
                    if(((z_30 != NULL) && (z_30 != a_31)))
                      _fail(a_31);
                    else
                      z_30 = a_31;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_30)), term_f_29), not_null(x_30)), term_z_28);
                  t = p_84(t);
                }
              }
            }
          }
        }
      }
      t = w_28;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_83 (ATerm))
{
  ATerm g_29;
  g_29 = t;
  {
    ATerm h_31 = NULL,j_31 = NULL;
    ATerm j_29;
    j_29 = t;
    {
      ATerm i_31 = NULL;
      t = x_83(t);
      {
        i_31 = t;
        if(((h_31 != NULL) && (h_31 != i_31)))
          _fail(i_31);
        else
          h_31 = i_31;
      }
    }
    t = j_29;
    {
      ATerm k_31 = NULL;
      k_31 = t;
      if(((j_31 != NULL) && (j_31 != k_31)))
        _fail(k_31);
      else
        j_31 = k_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_31)), not_null(h_31)));
        t = printnl_0(t);
      }
    }
  }
  t = g_29;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  t = SSL_is_string(not_null(o_31));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      {
        ATerm s_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 (ATerm t)
            {
              ATerm u_29 = t;
              int v_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(v_29);
                }
              else
                {
                  t = u_29;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, z_5);
            LocalPopChoice(t_29);
          }
        else
          {
            t = s_29;
            {
              ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
              x_31 = t;
              w_31 :
              if(match_cons(x_31, sym_Path_1))
                {
                  y_31 = ATgetArgument(x_31, 0);
                  t = not_null(y_31);
                }
              else
                {
                  if(match_cons(x_31, sym_Var_1))
                    {
                      y_31 = ATgetArgument(x_31, 0);
                      {
                        t = not_null(y_31);
                        {
                          ATerm w_29 = t;
                          int x_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_29);
                            }
                          else
                            {
                              t = w_29;
                              {
                                ATerm a_6 (ATerm t)
                                {
                                  t = term_y_29;
                                  return(t);
                                }
                                t = debug_1(t, a_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_31, sym_Prefix_2))
                        {
                          y_31 = ATgetArgument(x_31, 0);
                          z_31 = ATgetArgument(x_31, 1);
                          {
                            ATerm e_32 = NULL,g_32 = NULL;
                            ATerm z_29;
                            z_29 = t;
                            {
                              ATerm f_32 = NULL;
                              t = not_null(y_31);
                              {
                                t = eval_config_0(t);
                                {
                                  f_32 = t;
                                  if(((e_32 != NULL) && (e_32 != f_32)))
                                    _fail(f_32);
                                  else
                                    e_32 = f_32;
                                }
                              }
                            }
                            t = z_29;
                            {
                              ATerm h_32 = NULL;
                              t = not_null(z_31);
                              {
                                t = eval_config_0(t);
                                {
                                  h_32 = t;
                                  if(((g_32 != NULL) && (g_32 != h_32)))
                                    _fail(h_32);
                                  else
                                    g_32 = h_32;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_32), not_null(g_32));
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
  ATerm p_32 = NULL;
  p_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_30, not_null(p_32));
    {
      t = table_get_0(t);
      {
        ATerm b_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm l_30;
              l_30 = t;
              {
                ATerm r_32 = NULL;
                ATerm s_32 = NULL;
                s_32 = t;
                if(((r_32 != NULL) && (r_32 != s_32)))
                  _fail(s_32);
                else
                  r_32 = s_32;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_30, not_null(p_32), not_null(r_32));
                  t = table_put_0(t);
                }
              }
              t = l_30;
            }
            LocalPopChoice(k_30);
          }
        else
          {
            t = b_30;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm sc_announce_0 (ATerm t)
{
  t = if_verbose2_1(t, sc_version_0);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm m_30;
  m_30 = t;
  {
    t = error_0(t);
    {
      t = term_o_22;
      t = exit_0(t);
    }
  }
  t = m_30;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_30;
      p_30 = t;
      {
        ATerm x_32 = NULL;
        ATerm y_32 = NULL;
        t = term_q_30;
        {
          t = get_config_0(t);
          {
            y_32 = t;
            if(((x_32 != NULL) && (x_32 != y_32)))
              _fail(y_32);
            else
              x_32 = y_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_31), term_f_31), term_e_31), term_d_31), term_c_31), term_b_31), term_s_30), not_null(x_32)), term_r_30));
          t = printnl_0(t);
        }
      }
      t = p_30;
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      {
        ATerm z_32 = NULL;
        z_32 = t;
        w_32 :
        if(!(match_string(z_32, "0.9beta8")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_65(t);
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym__2))
    {
      e_33 = ATgetArgument(d_33, 0);
      f_33 = ATgetArgument(d_33, 1);
      t = SSL_copy(not_null(e_33), not_null(f_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  t = SSL_table_keys(not_null(k_33));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_6 (ATerm t)
      {
        ATerm s_33 = NULL;
        ATerm u_33 = NULL;
        s_33 = t;
        {
          ATerm v_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(s_33));
          {
            t = table_get_0(t);
            {
              v_33 = t;
              if(((u_33 != NULL) && (u_33 != v_33)))
                _fail(v_33);
              else
                u_33 = v_33;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_33), not_null(u_33));
        }
        return(t);
      }
      t = map_1(t, b_6);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm n_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_31;
      q_31 = t;
      {
        ATerm a_34 = NULL;
        ATerm b_34 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            b_34 = t;
            if(((a_34 != NULL) && (a_34 != b_34)))
              _fail(b_34);
            else
              a_34 = b_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), term_r_31);
          t = geq_0(t);
        }
      }
      t = q_31;
      t = x_86(t);
      LocalPopChoice(p_31);
    }
  else
    {
      t = n_31;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm s_31;
  s_31 = t;
  {
    ATerm e_34 = NULL;
    ATerm f_34 = NULL;
    f_34 = t;
    if(((e_34 != NULL) && (e_34 != f_34)))
      _fail(f_34);
    else
      e_34 = f_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_15, not_null(e_34));
      t = printnl_0(t);
    }
  }
  t = s_31;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm l_34 = NULL;
  ATerm n_34 = NULL,o_34 = NULL;
  l_34 = t;
  {
    ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_t_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_34)));
    {
      t = table_get_0(t);
      {
        p_34 = t;
        j_34 :
        if(((ATgetType(p_34) == AT_LIST) && !(ATisEmpty(p_34))))
          {
            q_34 = ATgetFirst((ATermList) p_34);
            t_34 = (ATerm) ATgetNext((ATermList) p_34);
            k_34 :
            if(match_cons(q_34, sym__2))
              {
                r_34 = ATgetArgument(q_34, 0);
                s_34 = ATgetArgument(q_34, 1);
                {
                  if(((n_34 != NULL) && (n_34 != r_34)))
                    _fail(r_34);
                  else
                    n_34 = r_34;
                  if(((o_34 != NULL) && (o_34 != s_34)))
                    _fail(s_34);
                  else
                    o_34 = s_34;
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
    t = not_null(o_34);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym__2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      {
        ATerm f_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_t_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(b_35)));
        {
          t = table_get_0(t);
          {
            ATerm c_6 (ATerm t)
            {
              ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
              g_35 = t;
              y_34 :
              if(match_cons(g_35, sym__2))
                {
                  h_35 = ATgetArgument(g_35, 0);
                  i_35 = ATgetArgument(g_35, 1);
                  {
                    if(((c_35 != NULL) && (c_35 != h_35)))
                      _fail(h_35);
                    else
                      c_35 = h_35;
                    if(((f_35 != NULL) && (f_35 != i_35)))
                      _fail(i_35);
                    else
                      f_35 = i_35;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, c_6);
          }
        }
        t = not_null(f_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_32;
      {
        t = table_get_0(t);
        {
          ATerm d_6 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, d_6);
        }
      }
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_32;
      i_32 = t;
      {
        ATerm m_35 = NULL;
        ATerm n_35 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            n_35 = t;
            if(((m_35 != NULL) && (m_35 != n_35)))
              _fail(n_35);
            else
              m_35 = n_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_35), term_j_32);
          t = geq_0(t);
        }
      }
      t = i_32;
      t = w_86(t);
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
      }
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  q_35 :
  if(match_cons(r_35, sym__2))
    {
      s_35 = ATgetArgument(r_35, 0);
      t_35 = ATgetArgument(r_35, 1);
      {
        ATerm k_32;
        k_32 = t;
        {
          ATerm l_32 = t;
          int m_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_35), not_null(t_35));
              LocalPopChoice(m_32);
            }
          else
            {
              t = l_32;
              t = SSL_gtr(not_null(s_35), not_null(t_35));
            }
        }
        t = k_32;
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
  ATerm z_35 = NULL;
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
      a_36 = t;
      y_35 :
      if(match_cons(a_36, sym__2))
        {
          b_36 = ATgetArgument(a_36, 0);
          c_36 = ATgetArgument(a_36, 1);
          {
            if(((z_35 != NULL) && (z_35 != b_36)))
              _fail(b_36);
            else
              z_35 = b_36;
            if(((z_35 != NULL) && (z_35 != c_36)))
              _fail(c_36);
            else
              z_35 = c_36;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm q_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_32;
      u_32 = t;
      {
        ATerm f_36 = NULL;
        ATerm g_36 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            g_36 = t;
            if(((f_36 != NULL) && (f_36 != g_36)))
              _fail(g_36);
            else
              f_36 = g_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), term_v_32);
          t = geq_0(t);
        }
      }
      t = u_32;
      t = y_86(t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = q_32;
      {
      }
    }
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  j_36 :
  if(match_cons(n_36, sym__2))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      if(((o_36 != NULL) && (o_36 != p_36)))
        _fail(p_36);
      else
        o_36 = p_36;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_79 (ATerm), ATerm b_79 (ATerm))
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  u_36 :
  if(((ATgetType(v_36) == AT_LIST) && !(ATisEmpty(v_36))))
    {
      w_36 = ATgetFirst((ATermList) v_36);
      x_36 = (ATerm) ATgetNext((ATermList) v_36);
      {
        t = b_79(t);
        {
          ATerm e_6 (ATerm t)
          {
            ATerm a_37 = NULL;
            a_37 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_36), not_null(a_37));
              t = a_79(t);
            }
            return(t);
          }
          t = fetch_1(t, e_6);
        }
        t = not_null(x_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym__2))
    {
      h_37 = ATgetArgument(g_37, 0);
      i_37 = ATgetArgument(g_37, 1);
      {
        t = not_null(h_37);
        {
          ATerm m_37 (ATerm t)
          {
            ATerm a_33 = t;
            int b_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(i_37);
                LocalPopChoice(b_33);
              }
            else
              {
                t = a_33;
                {
                  ATerm g_33 = t;
                  int h_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_6 (ATerm t)
                      {
                        t = not_null(i_37);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_78, g_6);
                      t = m_37(t);
                      LocalPopChoice(h_33);
                    }
                  else
                    {
                      t = g_33;
                      t = Cons_2(t, _id, m_37);
                    }
                }
              }
            return(t);
          }
          t = m_37(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_append_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  r_37 = t;
  q_37 :
  if(match_cons(r_37, sym__3))
    {
      s_37 = ATgetArgument(r_37, 0);
      t_37 = ATgetArgument(r_37, 1);
      u_37 = ATgetArgument(r_37, 2);
      {
        ATerm i_33;
        i_33 = t;
        {
          ATerm y_37 = NULL;
          ATerm z_37 = NULL,b_38 = NULL;
          ATerm a_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_37), not_null(t_37));
          {
            ATerm j_33 = t;
            int l_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_33);
              }
            else
              {
                t = j_33;
                t = (ATerm) ATempty;
              }
            {
              a_38 = t;
              if(((z_37 != NULL) && (z_37 != a_38)))
                _fail(a_38);
              else
                z_37 = a_38;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_37), not_null(u_37));
            {
              t = union_1(t, eq_0);
              {
                b_38 = t;
                if(((y_37 != NULL) && (y_37 != b_38)))
                  _fail(b_38);
                else
                  y_37 = b_38;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_37), not_null(t_37), not_null(y_37));
            t = table_put_0(t);
          }
        }
        t = i_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm h_90 (ATerm))
{
  ATerm n_38 = NULL,q_38 = NULL,r_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym__2))
    {
      q_38 = ATgetArgument(n_38, 0);
      r_38 = ATgetArgument(n_38, 1);
      {
        t = not_null(r_38);
        {
          ATerm h_6 (ATerm t)
          {
            ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
            u_38 = t;
            l_38 :
            if(match_cons(u_38, sym__2))
              {
                v_38 = ATgetArgument(u_38, 0);
                w_38 = ATgetArgument(u_38, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(q_38), not_null(v_38), not_null(w_38));
                  t = h_90(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  t = SSL_ReadFromFile(not_null(c_39));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm h_39 = NULL;
  ATerm l_39 = NULL;
  h_39 = t;
  {
    ATerm m_33;
    m_33 = t;
    {
      ATerm m_39 = NULL;
      t = term_n_33;
      {
        m_39 = t;
        if(((l_39 != NULL) && (l_39 != m_39)))
          _fail(m_39);
        else
          l_39 = m_39;
      }
    }
    t = m_33;
    {
      t = SSL_open_file(not_null(h_39), not_null(l_39));
      t = SSL_close_file(not_null(h_39));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm c_40 = NULL;
  ATerm e_40 = NULL;
  c_40 = t;
  {
    ATerm o_33 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_31, (ATerm) ATmakeAppl(sym_Imported_1, not_null(c_40)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_33;
      }
    {
      ATerm p_33;
      p_33 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_31, term_r_33, (ATerm) ATinsert(ATempty, not_null(c_40)));
        t = table_put_0(t);
      }
      t = p_33;
      {
        ATerm i_6 (ATerm t)
        {
          ATerm m_6 (ATerm t)
          {
            t = term_t_33;
            return(t);
          }
          t = debug_1(t, m_6);
          return(t);
        }
        t = if_verbose4_1(t, i_6);
        {
          ATerm w_33 = t;
          int x_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(x_33);
            }
          else
            {
              t = w_33;
              t = (ATerm) ATempty;
            }
          {
            ATerm o_6 (ATerm t)
            {
              ATerm s_6 (ATerm t)
              {
                t = term_y_33;
                return(t);
              }
              t = say_1(t, s_6);
              return(t);
            }
            t = if_verbose6_1(t, o_6);
            {
              ATerm f_40 = NULL;
              f_40 = t;
              if(((e_40 != NULL) && (e_40 != f_40)))
                _fail(f_40);
              else
                e_40 = f_40;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_t_31, not_null(e_40));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm u_6 (ATerm t)
                    {
                      ATerm v_6 (ATerm t)
                      {
                        t = term_z_33;
                        return(t);
                      }
                      t = say_1(t, v_6);
                      return(t);
                    }
                    t = if_verbose6_1(t, u_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_t_31, (ATerm)ATmakeAppl(sym_Imported_1, not_null(c_40)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm w_6 (ATerm t)
                          {
                            ATerm x_6 (ATerm t)
                            {
                              t = term_y_33;
                              return(t);
                            }
                            t = say_1(t, x_6);
                            return(t);
                          }
                          t = if_verbose4_1(t, w_6);
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
ATerm getenv_0 (ATerm t)
{
  ATerm j_40 = NULL;
  j_40 = t;
  t = SSL_getenv(not_null(j_40));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_34;
      t = get_config_0(t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm h_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_34;
            t = getenv_0(t);
            LocalPopChoice(i_34);
          }
        else
          {
            t = h_34;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    ATerm z_6 (ATerm t)
    {
      t = term_u_34;
      return(t);
    }
    t = debug_1(t, z_6);
    return(t);
  }
  t = if_verbose5_1(t, y_6);
  {
    ATerm v_34;
    v_34 = t;
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_35;
          t = table_get_0(t);
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = v_34;
    {
      ATerm a_7 (ATerm t)
      {
        ATerm b_7 (ATerm t)
        {
          t = term_e_35;
          return(t);
        }
        t = debug_1(t, b_7);
        return(t);
      }
      t = if_verbose5_1(t, a_7);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_7 (ATerm t)
      {
        ATerm f_7 (ATerm t)
        {
          t = term_l_35;
          return(t);
        }
        t = debug_1(t, f_7);
        return(t);
      }
      t = if_verbose5_1(t, e_7);
      {
        t = xtc_load_0(t);
        {
          ATerm o_35 = t;
          int p_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(p_35);
            }
          else
            {
              t = o_35;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm g_7 (ATerm t)
            {
              ATerm h_7 (ATerm t)
              {
                t = term_l_35;
                return(t);
              }
              t = debug_1(t, h_7);
              return(t);
            }
            t = if_verbose5_1(t, g_7);
          }
        }
      }
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      {
        ATerm r_40 = NULL;
        ATerm s_40 = NULL;
        s_40 = t;
        if(((r_40 != NULL) && (r_40 != s_40)))
          _fail(s_40);
        else
          r_40 = s_40;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_35), not_null(r_40)), term_u_35);
          {
            t = error_0(t);
            {
              ATerm o_7 (ATerm t)
              {
                t = term_t_31;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm p_7 (ATerm t)
                    {
                      t = term_w_35;
                      return(t);
                    }
                    t = debug_1(t, p_7);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, o_7);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_40 = NULL;
  x_40 = t;
  t = SSL_string_to_int(not_null(x_40));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  r_41 = t;
  p_41 :
  if(match_string(r_41, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
        {
          s_41 = ATgetFirst((ATermList) r_41);
          t_41 = (ATerm) ATgetNext((ATermList) r_41);
          q_41 :
          if(((ATgetType(t_41) == AT_LIST) && !(ATisEmpty(t_41))))
            {
              u_41 = ATgetFirst((ATermList) t_41);
              v_41 = (ATerm) ATgetNext((ATermList) t_41);
              {
                ATerm z_41 = NULL;
                ATerm x_35;
                x_35 = t;
                {
                  t = not_null(s_41);
                  t = l_0(t);
                }
                t = x_35;
                {
                  ATerm a_42 = NULL;
                  t = not_null(u_41);
                  {
                    t = m_0(t);
                    {
                      a_42 = t;
                      if(((z_41 != NULL) && (z_41 != a_42)))
                        _fail(a_42);
                      else
                        z_41 = a_42;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_41)), not_null(z_41));
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
ATerm extend_config_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
  i_42 = t;
  h_42 :
  if(match_cons(i_42, sym__2))
    {
      j_42 = ATgetArgument(i_42, 0);
      k_42 = ATgetArgument(i_42, 1);
      {
        ATerm n_42 = NULL;
        ATerm o_42 = NULL,q_42 = NULL;
        ATerm p_42 = NULL;
        t = not_null(j_42);
        {
          ATerm d_36 = t;
          int e_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(e_36);
            }
          else
            {
              t = d_36;
              t = (ATerm) ATempty;
            }
          {
            p_42 = t;
            if(((o_42 != NULL) && (o_42 != p_42)))
              _fail(p_42);
            else
              o_42 = p_42;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), not_null(o_42));
          {
            ATerm h_36 = t;
            int i_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(i_36);
              }
            else
              {
                t = h_36;
                t = conc_more_lists_0(t);
              }
            {
              q_42 = t;
              if(((n_42 != NULL) && (n_42 != q_42)))
                _fail(q_42);
              else
                n_42 = q_42;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_30, not_null(j_42), not_null(n_42));
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
ATerm table_remove_0 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL;
  ATerm k_36;
  k_36 = t;
  {
    ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
    n_43 = t;
    i_43 :
    if(match_cons(n_43, sym__2))
      {
        o_43 = ATgetArgument(n_43, 0);
        p_43 = ATgetArgument(n_43, 1);
        {
          if(((j_43 != NULL) && (j_43 != o_43)))
            _fail(o_43);
          else
            j_43 = o_43;
          {
            if(((k_43 != NULL) && (k_43 != p_43)))
              _fail(p_43);
            else
              k_43 = p_43;
            t = SSL_table_remove(not_null(j_43), not_null(k_43));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_36;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym__2))
    {
      u_43 = ATgetArgument(t_43, 0);
      v_43 = ATgetArgument(t_43, 1);
      {
        ATerm l_36 = t;
        int m_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(u_43);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_a_30, not_null(u_43));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(m_36);
          }
        else
          {
            t = l_36;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_43), not_null(v_43));
              t = set_config_0(t);
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
ATerm post_extend_config_0 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  c_44 :
  if(match_cons(d_44, sym__2))
    {
      e_44 = ATgetArgument(d_44, 0);
      f_44 = ATgetArgument(d_44, 1);
      {
        ATerm a_45 = NULL;
        ATerm b_45 = NULL,d_45 = NULL;
        ATerm c_45 = NULL;
        t = not_null(e_44);
        {
          ATerm q_36 = t;
          int r_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(r_36);
            }
          else
            {
              t = q_36;
              t = (ATerm) ATempty;
            }
          {
            c_45 = t;
            if(((b_45 != NULL) && (b_45 != c_45)))
              _fail(c_45);
            else
              b_45 = c_45;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_45), not_null(f_44));
          {
            ATerm s_36 = t;
            int t_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(t_36);
              }
            else
              {
                t = s_36;
                t = conc_more_lists_0(t);
              }
            {
              d_45 = t;
              if(((a_45 != NULL) && (a_45 != d_45)))
                _fail(d_45);
              else
                a_45 = d_45;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_30, not_null(e_44), not_null(a_45));
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
ATerm sc_options_0 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_7 (ATerm t)
      {
        ATerm u_46 = NULL;
        u_46 = t;
        h_45 :
        if(!(match_string(u_46, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_7 (ATerm t)
      {
        ATerm v_46 = NULL;
        ATerm y_46 = NULL;
        y_46 = t;
        if(((v_46 != NULL) && (v_46 != y_46)))
          _fail(y_46);
        else
          v_46 = y_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_24, not_null(v_46));
          t = set_config_0(t);
        }
        t = term_y_19;
        return(t);
      }
      ATerm u_7 (ATerm t)
      {
        t = term_b_37;
        return(t);
      }
      t = ArgOption_3(t, q_7, r_7, u_7);
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_7 (ATerm t)
            {
              ATerm z_46 = NULL;
              z_46 = t;
              n_45 :
              if(!(match_string(z_46, "-o")))
                {
                  if(!(match_string(z_46, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm y_7 (ATerm t)
            {
              ATerm a_47 = NULL;
              ATerm b_47 = NULL;
              b_47 = t;
              if(((a_47 != NULL) && (a_47 != b_47)))
                _fail(b_47);
              else
                a_47 = b_47;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_o_14, not_null(a_47));
                t = set_config_0(t);
              }
              t = term_y_19;
              return(t);
            }
            ATerm z_7 (ATerm t)
            {
              t = term_e_37;
              return(t);
            }
            t = ArgOption_3(t, v_7, y_7, z_7);
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            {
              ATerm j_37 = t;
              int k_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_8 (ATerm t)
                  {
                    ATerm c_47 = NULL;
                    c_47 = t;
                    p_45 :
                    if(!(match_string(c_47, "-I")))
                      {
                        if(!(match_string(c_47, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm d_8 (ATerm t)
                  {
                    ATerm d_47 = NULL;
                    ATerm e_47 = NULL;
                    e_47 = t;
                    if(((d_47 != NULL) && (d_47 != e_47)))
                      _fail(e_47);
                    else
                      d_47 = e_47;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_l_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_47)), term_l_26));
                      t = extend_config_0(t);
                    }
                    t = term_y_19;
                    return(t);
                  }
                  ATerm g_8 (ATerm t)
                  {
                    t = term_l_37;
                    return(t);
                  }
                  t = ArgOption_3(t, c_8, d_8, g_8);
                  LocalPopChoice(k_37);
                }
              else
                {
                  t = j_37;
                  {
                    ATerm n_37 = t;
                    int o_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_8 (ATerm t)
                        {
                          ATerm k_47 = NULL;
                          k_47 = t;
                          r_45 :
                          if(!(match_string(k_47, "--main")))
                            {
                              if(!(match_string(k_47, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm k_8 (ATerm t)
                        {
                          ATerm l_47 = NULL;
                          ATerm m_47 = NULL;
                          m_47 = t;
                          if(((l_47 != NULL) && (l_47 != m_47)))
                            _fail(m_47);
                          else
                            l_47 = m_47;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_d_20, not_null(l_47));
                            t = set_config_0(t);
                          }
                          t = term_y_19;
                          return(t);
                        }
                        ATerm l_8 (ATerm t)
                        {
                          t = term_p_37;
                          return(t);
                        }
                        t = ArgOption_3(t, h_8, k_8, l_8);
                        LocalPopChoice(o_37);
                      }
                    else
                      {
                        t = n_37;
                        {
                          ATerm v_37 = t;
                          int w_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_8 (ATerm t)
                              {
                                ATerm n_47 = NULL;
                                n_47 = t;
                                t_45 :
                                if(!(match_string(n_47, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm p_8 (ATerm t)
                              {
                                ATerm o_47 = NULL;
                                ATerm p_47 = NULL;
                                p_47 = t;
                                if(((o_47 != NULL) && (o_47 != p_47)))
                                  _fail(p_47);
                                else
                                  o_47 = p_47;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATempty, not_null(o_47)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_y_19;
                                return(t);
                              }
                              ATerm s_8 (ATerm t)
                              {
                                t = term_x_37;
                                return(t);
                              }
                              t = ArgOption_3(t, o_8, p_8, s_8);
                              LocalPopChoice(w_37);
                            }
                          else
                            {
                              t = v_37;
                              {
                                ATerm c_38 = t;
                                int d_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_8 (ATerm t)
                                    {
                                      ATerm q_47 = NULL;
                                      q_47 = t;
                                      v_45 :
                                      if(!(match_string(q_47, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm w_8 (ATerm t)
                                    {
                                      ATerm r_47 = NULL;
                                      ATerm s_47 = NULL;
                                      s_47 = t;
                                      if(((r_47 != NULL) && (r_47 != s_47)))
                                        _fail(s_47);
                                      else
                                        r_47 = s_47;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_a_15, (ATerm) ATinsert(ATempty, not_null(r_47)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_y_19;
                                      return(t);
                                    }
                                    ATerm x_8 (ATerm t)
                                    {
                                      t = term_e_38;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, t_8, w_8, x_8);
                                    LocalPopChoice(d_38);
                                  }
                                else
                                  {
                                    t = c_38;
                                    {
                                      ATerm f_38 = t;
                                      int g_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_9 (ATerm t)
                                          {
                                            ATerm t_47 = NULL;
                                            t_47 = t;
                                            x_45 :
                                            if(!(match_string(t_47, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm b_9 (ATerm t)
                                          {
                                            ATerm u_47 = NULL;
                                            ATerm v_47 = NULL;
                                            v_47 = t;
                                            if(((u_47 != NULL) && (u_47 != v_47)))
                                              _fail(v_47);
                                            else
                                              u_47 = v_47;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_u_14, (ATerm) ATinsert(ATempty, not_null(u_47)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_y_19;
                                            return(t);
                                          }
                                          ATerm e_9 (ATerm t)
                                          {
                                            t = term_h_38;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, a_9, b_9, e_9);
                                          LocalPopChoice(g_38);
                                        }
                                      else
                                        {
                                          t = f_38;
                                          {
                                            ATerm i_38 = t;
                                            int j_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm f_9 (ATerm t)
                                                {
                                                  ATerm w_47 = NULL;
                                                  w_47 = t;
                                                  z_45 :
                                                  if(!(match_string(w_47, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm i_9 (ATerm t)
                                                {
                                                  t = term_k_38;
                                                  t = set_config_0(t);
                                                  t = term_y_19;
                                                  return(t);
                                                }
                                                ATerm j_9 (ATerm t)
                                                {
                                                  t = term_o_38;
                                                  return(t);
                                                }
                                                t = Option_3(t, f_9, i_9, j_9);
                                                LocalPopChoice(j_38);
                                              }
                                            else
                                              {
                                                t = i_38;
                                                {
                                                  ATerm p_38 = t;
                                                  int s_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_9 (ATerm t)
                                                      {
                                                        ATerm x_47 = NULL;
                                                        x_47 = t;
                                                        a_46 :
                                                        if(!(match_string(x_47, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm n_9 (ATerm t)
                                                      {
                                                        t = term_t_38;
                                                        t = set_config_0(t);
                                                        t = term_y_19;
                                                        return(t);
                                                      }
                                                      ATerm q_9 (ATerm t)
                                                      {
                                                        t = term_x_38;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, m_9, n_9, q_9);
                                                      LocalPopChoice(s_38);
                                                    }
                                                  else
                                                    {
                                                      t = p_38;
                                                      {
                                                        ATerm y_38 = t;
                                                        int z_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm r_9 (ATerm t)
                                                            {
                                                              ATerm y_47 = NULL;
                                                              y_47 = t;
                                                              b_46 :
                                                              if(!(match_string(y_47, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm u_9 (ATerm t)
                                                            {
                                                              t = term_a_39;
                                                              t = set_config_0(t);
                                                              t = term_y_19;
                                                              return(t);
                                                            }
                                                            ATerm v_9 (ATerm t)
                                                            {
                                                              t = term_b_39;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, r_9, u_9, v_9);
                                                            LocalPopChoice(z_38);
                                                          }
                                                        else
                                                          {
                                                            t = y_38;
                                                            {
                                                              ATerm d_39 = t;
                                                              int e_39 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_9 (ATerm t)
                                                                  {
                                                                    ATerm z_47 = NULL;
                                                                    z_47 = t;
                                                                    c_46 :
                                                                    if(!(match_string(z_47, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm z_9 (ATerm t)
                                                                  {
                                                                    ATerm f_48 = NULL;
                                                                    ATerm g_48 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      g_48 = t;
                                                                      if(((f_48 != NULL) && (f_48 != g_48)))
                                                                        _fail(g_48);
                                                                      else
                                                                        f_48 = g_48;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_n_19, not_null(f_48));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_y_19;
                                                                    return(t);
                                                                  }
                                                                  ATerm a_10 (ATerm t)
                                                                  {
                                                                    t = term_f_39;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, y_9, z_9, a_10);
                                                                  LocalPopChoice(e_39);
                                                                }
                                                              else
                                                                {
                                                                  t = d_39;
                                                                  {
                                                                    ATerm g_39 = t;
                                                                    int i_39 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm f_10 (ATerm t)
                                                                        {
                                                                          ATerm h_48 = NULL;
                                                                          h_48 = t;
                                                                          e_46 :
                                                                          if(!(match_string(h_48, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm g_10 (ATerm t)
                                                                        {
                                                                          t = term_j_39;
                                                                          t = toggle_config_0(t);
                                                                          t = term_y_19;
                                                                          return(t);
                                                                        }
                                                                        ATerm h_10 (ATerm t)
                                                                        {
                                                                          t = term_k_39;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, f_10, g_10, h_10);
                                                                        LocalPopChoice(i_39);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_39;
                                                                        {
                                                                          ATerm n_39 = t;
                                                                          int o_39 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm k_10 (ATerm t)
                                                                              {
                                                                                ATerm i_48 = NULL;
                                                                                i_48 = t;
                                                                                g_46 :
                                                                                if(!(match_string(i_48, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm l_10 (ATerm t)
                                                                              {
                                                                                t = term_q_39;
                                                                                t = set_config_0(t);
                                                                                t = term_y_19;
                                                                                return(t);
                                                                              }
                                                                              ATerm m_10 (ATerm t)
                                                                              {
                                                                                t = term_r_39;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, k_10, l_10, m_10);
                                                                              LocalPopChoice(o_39);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_39;
                                                                              {
                                                                                ATerm s_39 = t;
                                                                                int t_39 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm q_10 (ATerm t)
                                                                                    {
                                                                                      ATerm n_48 = NULL;
                                                                                      n_48 = t;
                                                                                      h_46 :
                                                                                      if(!(match_string(n_48, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm t_10 (ATerm t)
                                                                                    {
                                                                                      ATerm o_48 = NULL;
                                                                                      ATerm p_48 = NULL;
                                                                                      p_48 = t;
                                                                                      if(((o_48 != NULL) && (o_48 != p_48)))
                                                                                        _fail(p_48);
                                                                                      else
                                                                                        o_48 = p_48;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_u_39, (ATerm) ATinsert(ATempty, not_null(o_48)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_y_19;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm u_10 (ATerm t)
                                                                                    {
                                                                                      t = term_v_39;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, q_10, t_10, u_10);
                                                                                    LocalPopChoice(t_39);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_39;
                                                                                    {
                                                                                      ATerm w_39 = t;
                                                                                      int x_39 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm v_10 (ATerm t)
                                                                                          {
                                                                                            ATerm z_48 = NULL;
                                                                                            z_48 = t;
                                                                                            j_46 :
                                                                                            if(!(match_string(z_48, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm w_10 (ATerm t)
                                                                                          {
                                                                                            ATerm a_49 = NULL;
                                                                                            ATerm b_49 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              b_49 = t;
                                                                                              if(((a_49 != NULL) && (a_49 != b_49)))
                                                                                                _fail(b_49);
                                                                                              else
                                                                                                a_49 = b_49;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_i_14, not_null(a_49));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_y_19;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm b_11 (ATerm t)
                                                                                          {
                                                                                            t = term_y_39;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, v_10, w_10, b_11);
                                                                                          LocalPopChoice(x_39);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_39;
                                                                                          {
                                                                                            ATerm z_39 = t;
                                                                                            int a_40 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm c_11 (ATerm t)
                                                                                                {
                                                                                                  ATerm c_49 = NULL;
                                                                                                  c_49 = t;
                                                                                                  q_46 :
                                                                                                  if(!(match_string(c_49, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(c_49, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm e_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_b_40;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_y_19;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm f_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_d_40;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, c_11, e_11, f_11);
                                                                                                LocalPopChoice(a_40);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = z_39;
                                                                                                {
                                                                                                  ATerm g_40 = t;
                                                                                                  int h_40 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm i_11 (ATerm t)
                                                                                                      {
                                                                                                        ATerm d_49 = NULL;
                                                                                                        d_49 = t;
                                                                                                        r_46 :
                                                                                                        if(!(match_string(d_49, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(d_49, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm o_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_k_40;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_y_19;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm p_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_l_40;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, i_11, o_11, p_11);
                                                                                                      LocalPopChoice(h_40);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_40;
                                                                                                      {
                                                                                                        ATerm m_40 = t;
                                                                                                        int n_40 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm q_11 (ATerm t)
                                                                                                            {
                                                                                                              ATerm e_49 = NULL;
                                                                                                              e_49 = t;
                                                                                                              s_46 :
                                                                                                              if(!(match_string(e_49, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm r_11 (ATerm t)
                                                                                                            {
                                                                                                              t = term_p_40;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_y_19;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm w_11 (ATerm t)
                                                                                                            {
                                                                                                              t = term_q_40;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, q_11, r_11, w_11);
                                                                                                            LocalPopChoice(n_40);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = m_40;
                                                                                                            {
                                                                                                              ATerm x_11 (ATerm t)
                                                                                                              {
                                                                                                                ATerm f_49 = NULL;
                                                                                                                f_49 = t;
                                                                                                                t_46 :
                                                                                                                if(!(match_string(f_49, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(f_49, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm y_11 (ATerm t)
                                                                                                              {
                                                                                                                t = term_u_40;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_y_19;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm z_11 (ATerm t)
                                                                                                              {
                                                                                                                t = term_v_40;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, x_11, y_11, z_11);
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
  ATerm r_49 = NULL;
  r_49 = t;
  t = SSL_table_destroy(not_null(r_49));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
  v_49 = t;
  u_49 :
  if(((ATgetType(v_49) == AT_LIST) && ATisEmpty(v_49)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_49) == AT_LIST) && !(ATisEmpty(v_49))))
        {
          w_49 = ATgetFirst((ATermList) v_49);
          x_49 = (ATerm) ATgetNext((ATermList) v_49);
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
  ATerm w_40;
  w_40 = t;
  {
    ATerm a_50 = NULL;
    ATerm d_50 = NULL;
    ATerm y_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(z_40);
      }
    else
      {
        t = y_40;
        {
          ATerm b_50 = NULL;
          ATerm c_50 = NULL;
          c_50 = t;
          if(((b_50 != NULL) && (b_50 != c_50)))
            _fail(c_50);
          else
            b_50 = c_50;
          t = (ATerm) ATinsert(ATempty, not_null(b_50));
        }
      }
    {
      d_50 = t;
      if(((a_50 != NULL) && (a_50 != d_50)))
        _fail(d_50);
      else
        a_50 = d_50;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_15, not_null(a_50));
      t = printnl_0(t);
    }
  }
  t = w_40;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_41), term_c_31), term_l_41), term_k_41), term_j_41), term_c_31), term_i_41), term_h_41), term_g_41), term_f_41), term_e_41), term_d_41), term_c_41), term_b_41), term_a_41);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm g_50 (ATerm t)
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        t = Cons_2(t, z_72, g_50);
      }
    return(t);
  }
  t = g_50(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  p_50 = t;
  m_50 :
  if(((ATgetType(p_50) == AT_LIST) && !(ATisEmpty(p_50))))
    {
      n_50 = ATgetFirst((ATermList) p_50);
      o_50 = (ATerm) ATgetNext((ATermList) p_50);
      {
        ATerm s_50 = NULL;
        t = not_null(o_50);
        {
          ATerm w_41;
          w_41 = t;
          {
            ATerm t_50 = NULL,v_50 = NULL,x_50 = NULL;
            ATerm x_41;
            x_41 = t;
            {
              ATerm u_50 = NULL;
              t = j_0(t);
              {
                u_50 = t;
                if(((t_50 != NULL) && (t_50 != u_50)))
                  _fail(u_50);
                else
                  t_50 = u_50;
              }
            }
            t = x_41;
            {
              ATerm w_50 = NULL;
              t = not_null(n_50);
              {
                t = i_0(t);
                {
                  w_50 = t;
                  if(((v_50 != NULL) && (v_50 != w_50)))
                    _fail(w_50);
                  else
                    v_50 = w_50;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_50)), not_null(v_50));
                {
                  x_50 = t;
                  if(((s_50 != NULL) && (s_50 != x_50)))
                    _fail(x_50);
                  else
                    s_50 = x_50;
                }
              }
            }
          }
          t = w_41;
          {
            ATerm a_12 (ATerm t)
            {
              t = not_null(s_50);
              return(t);
            }
            t = reverse_acc_2(t, i_0, a_12);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_50) == AT_LIST) && ATisEmpty(p_50)))
        {
          {
            t = term_y_19;
            t = j_0(t);
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
  ATerm d_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm e_51 = NULL;
  ATerm f_51 = NULL;
  t = term_y_19;
  {
    t = h_0(t);
    {
      f_51 = t;
      if(((e_51 != NULL) && (e_51 != f_51)))
        _fail(f_51);
      else
        e_51 = f_51;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_42), not_null(e_51)), term_e_42), term_c_31), term_d_42), term_c_31), term_c_42), term_b_42), term_c_31), term_y_41);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm m_51 = NULL,n_51 = NULL;
  m_51 = t;
  l_51 :
  if(match_cons(m_51, sym_Program_1))
    {
      n_51 = ATgetArgument(m_51, 0);
      {
        ATerm q_51 = NULL,s_51 = NULL;
        ATerm r_51 = NULL;
        t = SSLgetAnnotations(not_null(m_51));
        {
          r_51 = t;
          if(((q_51 != NULL) && (q_51 != r_51)))
            _fail(r_51);
          else
            q_51 = r_51;
        }
        {
          t = not_null(n_51);
          {
            ATerm j_52 = NULL;
            t = r_59(t);
            {
              s_51 = t;
              {
                ATerm k_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_51)), not_null(q_51));
                {
                  k_52 = t;
                  if(((j_52 != NULL) && (j_52 != k_52)))
                    _fail(k_52);
                  else
                    j_52 = k_52;
                }
                t = not_null(j_52);
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
  ATerm j_53 = NULL;
  ATerm g_42 = t;
  int l_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_53 = NULL;
      t = term_m_42;
      {
        t = get_config_0(t);
        {
          k_53 = t;
          if(((j_53 != NULL) && (j_53 != k_53)))
            _fail(k_53);
          else
            j_53 = k_53;
        }
      }
      LocalPopChoice(l_42);
    }
  else
    {
      t = g_42;
      {
        ATerm i_12 (ATerm t)
        {
          ATerm j_12 (ATerm t)
          {
            ATerm l_53 = NULL;
            l_53 = t;
            if(((j_53 != NULL) && (j_53 != l_53)))
              _fail(l_53);
            else
              j_53 = l_53;
            return(t);
          }
          t = Program_1(t, j_12);
          return(t);
        }
        t = fetch_1(t, i_12);
      }
    }
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 (ATerm t)
        {
          t = not_null(j_53);
          return(t);
        }
        t = short_description_1(t, k_12);
        t = echo_0(t);
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        {
        }
      }
    {
      t = term_t_42;
      {
        t = echo_0(t);
        {
          t = term_w_42;
          {
            t = table_get_0(t);
            {
              ATerm l_12 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, l_12);
              {
                ATerm m_12 (ATerm t)
                {
                  ATerm m_53 = NULL;
                  ATerm n_53 = NULL;
                  n_53 = t;
                  if(((m_53 != NULL) && (m_53 != n_53)))
                    _fail(n_53);
                  else
                    m_53 = n_53;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_53)), term_x_42);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_12);
                {
                  ATerm y_42 = t;
                  int z_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_53 = NULL;
                      ATerm r_53 = NULL;
                      ATerm n_12 (ATerm t)
                      {
                        t = not_null(j_53);
                        return(t);
                      }
                      t = long_description_1(t, n_12);
                      {
                        r_53 = t;
                        if(((q_53 != NULL) && (q_53 != r_53)))
                          _fail(r_53);
                        else
                          q_53 = r_53;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(q_53)), term_c_31);
                        t = echo_0(t);
                      }
                      LocalPopChoice(z_42);
                    }
                  else
                    {
                      t = y_42;
                      {
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
ATerm debug_0 (ATerm t)
{
  ATerm a_43;
  a_43 = t;
  {
    ATerm x_53 = NULL;
    ATerm y_53 = NULL;
    y_53 = t;
    if(((x_53 != NULL) && (x_53 != y_53)))
      _fail(y_53);
    else
      x_53 = y_53;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATempty, not_null(x_53)));
      t = printnl_0(t);
    }
  }
  t = a_43;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_83 (ATerm))
{
  ATerm b_43;
  b_43 = t;
  {
    t = y_83(t);
    t = debug_0(t);
  }
  t = b_43;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm f_54 = NULL,g_54 = NULL;
  f_54 = t;
  e_54 :
  if(match_cons(f_54, sym_Undefined_1))
    {
      g_54 = ATgetArgument(f_54, 0);
      {
        ATerm j_54 = NULL,l_54 = NULL;
        ATerm k_54 = NULL;
        t = SSLgetAnnotations(not_null(f_54));
        {
          k_54 = t;
          if(((j_54 != NULL) && (j_54 != k_54)))
            _fail(k_54);
          else
            j_54 = k_54;
        }
        {
          t = not_null(g_54);
          {
            ATerm n_54 = NULL;
            t = s_59(t);
            {
              l_54 = t;
              {
                ATerm o_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_54)), not_null(j_54));
                {
                  o_54 = t;
                  if(((n_54 != NULL) && (n_54 != o_54)))
                    _fail(o_54);
                  else
                    n_54 = o_54;
                }
                t = not_null(n_54);
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
ATerm fetch_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm t_54 (ATerm t)
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_73, _id);
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        t = Cons_2(t, _id, t_54);
      }
    return(t);
  }
  t = t_54(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_87 (ATerm))
{
  t = fetch_1(t, w_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_55 = NULL;
  a_55 = t;
  z_54 :
  if(match_cons(a_55, sym_Help_0))
    {
      ATerm c_55 = NULL,e_55 = NULL;
      ATerm e_43;
      e_43 = t;
      {
        ATerm d_55 = NULL;
        t = SSLgetAnnotations(not_null(a_55));
        {
          d_55 = t;
          if(((c_55 != NULL) && (c_55 != d_55)))
            _fail(d_55);
          else
            c_55 = d_55;
        }
      }
      t = e_43;
      {
        ATerm f_55 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_55));
        {
          f_55 = t;
          if(((e_55 != NULL) && (e_55 != f_55)))
            _fail(f_55);
          else
            e_55 = f_55;
        }
        t = not_null(e_55);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
  l_55 = t;
  k_55 :
  if(match_cons(l_55, sym__2))
    {
      m_55 = ATgetArgument(l_55, 0);
      n_55 = ATgetArgument(l_55, 1);
      t = SSL_table_get(not_null(m_55), not_null(n_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  u_55 = t;
  t_55 :
  if(match_cons(u_55, sym__3))
    {
      v_55 = ATgetArgument(u_55, 0);
      w_55 = ATgetArgument(u_55, 1);
      x_55 = ATgetArgument(u_55, 2);
      {
        ATerm f_43;
        f_43 = t;
        {
          ATerm b_56 = NULL;
          ATerm c_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_55), not_null(w_55));
          {
            ATerm g_43 = t;
            int h_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_43);
              }
            else
              {
                t = g_43;
                t = (ATerm) ATempty;
              }
            {
              c_56 = t;
              if(((b_56 != NULL) && (b_56 != c_56)))
                _fail(c_56);
              else
                b_56 = c_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_55), not_null(w_55), (ATerm) ATinsert(CheckATermList(not_null(b_56)), not_null(x_55)));
            t = table_put_0(t);
          }
        }
        t = f_43;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_89 (ATerm))
{
  ATerm g_56 = NULL;
  ATerm h_56 = NULL;
  t = term_y_19;
  {
    t = b_89(t);
    {
      h_56 = t;
      if(((g_56 != NULL) && (g_56 != h_56)))
        _fail(h_56);
      else
        g_56 = h_56;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_42, term_v_42, not_null(g_56));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
  n_56 = t;
  m_56 :
  if(match_string(n_56, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(n_56) == AT_LIST) && !(ATisEmpty(n_56))))
        {
          o_56 = ATgetFirst((ATermList) n_56);
          p_56 = (ATerm) ATgetNext((ATermList) n_56);
          {
            ATerm s_56 = NULL;
            ATerm l_43;
            l_43 = t;
            {
              t = not_null(o_56);
              t = a_0(t);
            }
            t = l_43;
            {
              ATerm t_56 = NULL;
              t = term_y_19;
              {
                t = d_0(t);
                {
                  t_56 = t;
                  if(((s_56 != NULL) && (s_56 != t_56)))
                    _fail(t_56);
                  else
                    s_56 = t_56;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_56)), not_null(s_56));
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
  ATerm q_12 (ATerm t)
  {
    ATerm y_56 = NULL;
    y_56 = t;
    x_56 :
    if(!(match_string(y_56, "--help")))
      {
        if(!(match_string(y_56, "-h")))
          {
            if(!(match_string(y_56, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_12 (ATerm t)
  {
    t = term_k_40;
    {
      t = set_config_0(t);
      t = term_m_43;
    }
    return(t);
  }
  ATerm w_12 (ATerm t)
  {
    t = term_q_43;
    return(t);
  }
  t = Option_3(t, q_12, v_12, w_12);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
  b_57 = t;
  a_57 :
  if(((ATgetType(b_57) == AT_LIST) && !(ATisEmpty(b_57))))
    {
      c_57 = ATgetFirst((ATermList) b_57);
      d_57 = (ATerm) ATgetNext((ATermList) b_57);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_57)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_57)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_88 (ATerm))
{
  ATerm r_43;
  r_43 = t;
  {
    ATerm w_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_43;
        t = z_88(t);
        LocalPopChoice(x_43);
      }
    else
      {
        t = w_43;
        {
        }
      }
  }
  t = r_43;
  {
    ATerm x_12 (ATerm t)
    {
      ATerm l_57 = NULL;
      ATerm z_43;
      z_43 = t;
      {
        ATerm j_57 = NULL;
        ATerm k_57 = NULL;
        k_57 = t;
        if(((j_57 != NULL) && (j_57 != k_57)))
          _fail(k_57);
        else
          j_57 = k_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_42, not_null(j_57));
          t = set_config_0(t);
        }
      }
      t = z_43;
      {
        ATerm m_57 = NULL;
        m_57 = t;
        if(((l_57 != NULL) && (l_57 != m_57)))
          _fail(m_57);
        else
          l_57 = m_57;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_57));
      }
      return(t);
    }
    ATerm y_12 (ATerm t)
    {
      ATerm a_44 = t;
      int b_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_44 = t;
          int h_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_44);
            }
          else
            {
              t = g_44;
              {
                t = z_88(t);
                t = Cons_2(t, _id, y_12);
              }
            }
          LocalPopChoice(b_44);
        }
      else
        {
          t = a_44;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_12, y_12);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm r_57 = NULL;
  ATerm i_44;
  i_44 = t;
  {
    t = term_j_44;
    t = table_put_0(t);
  }
  t = i_44;
  {
    ATerm z_12 (ATerm t)
    {
      ATerm k_44 = t;
      int l_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_88(t);
          LocalPopChoice(l_44);
        }
      else
        {
          t = k_44;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_12);
    {
      ATerm m_44 = t;
      int n_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_44;
          o_44 = t;
          {
            ATerm p_44 = t;
            int q_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_40;
                t = get_config_0(t);
                LocalPopChoice(q_44);
              }
            else
              {
                t = p_44;
                t = fetch_1(t, Help_0);
              }
          }
          t = o_44;
          {
            t = system_usage_0(t);
            {
              t = term_y_13;
              t = exit_0(t);
            }
          }
          LocalPopChoice(n_44);
        }
      else
        {
          t = m_44;
          {
            ATerm r_44 = t;
            int s_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_13 (ATerm t)
                {
                  ATerm b_13 (ATerm t)
                  {
                    ATerm s_57 = NULL;
                    s_57 = t;
                    if(((r_57 != NULL) && (r_57 != s_57)))
                      _fail(s_57);
                    else
                      r_57 = s_57;
                    return(t);
                  }
                  t = Undefined_1(t, b_13);
                  return(t);
                }
                t = fetch_1(t, a_13);
                {
                  ATerm c_13 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_57)), term_t_44);
                    return(t);
                  }
                  t = say_1(t, c_13);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_o_22;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(s_44);
              }
            else
              {
                t = r_44;
                {
                }
              }
          }
        }
      {
        ATerm u_44;
        u_44 = t;
        {
          t = term_u_42;
          t = table_destroy_0(t);
        }
        t = u_44;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  ATerm v_44;
  v_44 = t;
  {
    ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
    z_57 = t;
    v_57 :
    if(match_cons(z_57, sym__3))
      {
        a_58 = ATgetArgument(z_57, 0);
        b_58 = ATgetArgument(z_57, 1);
        c_58 = ATgetArgument(z_57, 2);
        {
          if(((w_57 != NULL) && (w_57 != a_58)))
            _fail(a_58);
          else
            w_57 = a_58;
          {
            if(((x_57 != NULL) && (x_57 != b_58)))
              _fail(b_58);
            else
              x_57 = b_58;
            {
              if(((y_57 != NULL) && (y_57 != c_58)))
                _fail(c_58);
              else
                y_57 = c_58;
              t = SSL_table_put(not_null(w_57), not_null(x_57), not_null(y_57));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_44;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL;
  g_58 = t;
  f_58 :
  if(match_cons(g_58, sym__2))
    {
      h_58 = ATgetArgument(g_58, 0);
      i_58 = ATgetArgument(g_58, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_30, not_null(h_58), not_null(i_58));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
      {
        ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL;
        o_58 = t;
        n_58 :
        if(((ATgetType(o_58) == AT_LIST) && !(ATisEmpty(o_58))))
          {
            p_58 = ATgetFirst((ATermList) o_58);
            q_58 = (ATerm) ATgetNext((ATermList) o_58);
            {
              t = not_null(p_58);
              {
                ATerm d_13 (ATerm t)
                {
                  t = not_null(q_58);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_13);
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
  ATerm a_59 = NULL;
  ATerm c_59 = NULL;
  a_59 = t;
  {
    ATerm d_59 = NULL;
    ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
    t = not_null(a_59);
    {
      d_59 = t;
      {
        t = SSL_explode_term(not_null(d_59));
        {
          f_59 = t;
          y_58 :
          if(match_cons(f_59, sym__2))
            {
              g_59 = ATgetArgument(f_59, 0);
              h_59 = ATgetArgument(f_59, 1);
              z_58 :
              if(match_string(g_59, ""))
                {
                  if(((c_59 != NULL) && (c_59 != h_59)))
                    _fail(h_59);
                  else
                    c_59 = h_59;
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
      t = not_null(c_59);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm p_59 = NULL;
  p_59 = t;
  o_59 :
  if(((ATgetType(p_59) == AT_LIST) && ATisEmpty(p_59)))
    {
      {
        ATerm t_59 = NULL,v_59 = NULL;
        ATerm y_44;
        y_44 = t;
        {
          ATerm u_59 = NULL;
          t = SSLgetAnnotations(not_null(p_59));
          {
            u_59 = t;
            if(((t_59 != NULL) && (t_59 != u_59)))
              _fail(u_59);
            else
              t_59 = u_59;
          }
        }
        t = y_44;
        {
          ATerm w_59 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_59));
          {
            w_59 = t;
            if(((v_59 != NULL) && (v_59 != w_59)))
              _fail(w_59);
            else
              v_59 = w_59;
          }
          t = not_null(v_59);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm b_60 (ATerm t)
  {
    ATerm z_44 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_60);
        LocalPopChoice(e_45);
      }
    else
      {
        t = z_44;
        {
          t = Nil_0(t);
          t = o_73(t);
        }
      }
    return(t);
  }
  t = b_60(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL;
  e_60 = t;
  d_60 :
  if(match_cons(e_60, sym__2))
    {
      f_60 = ATgetArgument(e_60, 0);
      g_60 = ATgetArgument(e_60, 1);
      {
        t = not_null(f_60);
        {
          ATerm e_13 (ATerm t)
          {
            t = not_null(g_60);
            return(t);
          }
          t = at_end_1(t, e_13);
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
  ATerm f_45 = t;
  int g_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(g_45);
    }
  else
    {
      t = f_45;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm o_53 (ATerm), ATerm p_53 (ATerm))
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL;
  q_60 = t;
  p_60 :
  if(match_cons(q_60, sym__2))
    {
      r_60 = ATgetArgument(q_60, 0);
      s_60 = ATgetArgument(q_60, 1);
      {
        ATerm w_60 = NULL,y_60 = NULL;
        ATerm x_60 = NULL;
        t = SSLgetAnnotations(not_null(q_60));
        {
          x_60 = t;
          if(((w_60 != NULL) && (w_60 != x_60)))
            _fail(x_60);
          else
            w_60 = x_60;
        }
        {
          t = not_null(r_60);
          {
            ATerm a_61 = NULL;
            t = o_53(t);
            {
              y_60 = t;
              {
                t = not_null(s_60);
                {
                  ATerm c_61 = NULL;
                  t = p_53(t);
                  {
                    a_61 = t;
                    {
                      ATerm d_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_60), not_null(a_61)), not_null(w_60));
                      {
                        d_61 = t;
                        if(((c_61 != NULL) && (c_61 != d_61)))
                          _fail(d_61);
                        else
                          c_61 = d_61;
                      }
                      t = not_null(c_61);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm k_61 = NULL;
  k_61 = t;
  t = SSL_implode_string(not_null(k_61));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_54 (ATerm), ATerm y_54 (ATerm))
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  t_61 = t;
  s_61 :
  if(((ATgetType(t_61) == AT_LIST) && !(ATisEmpty(t_61))))
    {
      u_61 = ATgetFirst((ATermList) t_61);
      v_61 = (ATerm) ATgetNext((ATermList) t_61);
      {
        ATerm z_61 = NULL,b_62 = NULL;
        ATerm a_62 = NULL;
        t = SSLgetAnnotations(not_null(t_61));
        {
          a_62 = t;
          if(((z_61 != NULL) && (z_61 != a_62)))
            _fail(a_62);
          else
            z_61 = a_62;
        }
        {
          t = not_null(u_61);
          {
            ATerm d_62 = NULL;
            t = x_54(t);
            {
              b_62 = t;
              {
                t = not_null(v_61);
                {
                  ATerm f_62 = NULL;
                  t = y_54(t);
                  {
                    d_62 = t;
                    {
                      ATerm g_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_62)), not_null(b_62)), not_null(z_61));
                      {
                        g_62 = t;
                        if(((f_62 != NULL) && (f_62 != g_62)))
                          _fail(g_62);
                        else
                          f_62 = g_62;
                      }
                      t = not_null(f_62);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm n_62 = NULL;
  n_62 = t;
  t = SSL_explode_string(not_null(n_62));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm k_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_62 (ATerm t)
        {
          ATerm m_45 = t;
          int o_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, s_62);
              LocalPopChoice(o_45);
            }
          else
            {
              t = m_45;
              {
                ATerm i_13 (ATerm t)
                {
                  ATerm r_62 = NULL;
                  r_62 = t;
                  q_62 :
                  if(!(match_int(r_62, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm l_13 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, i_13, l_13);
              }
            }
          return(t);
        }
        t = s_62(t);
        LocalPopChoice(l_45);
      }
    else
      {
        t = k_45;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm xtc_find_path_0 (ATerm t)
{
  t = xtc_find_0(t);
  t = get_path_0(t);
  return(t);
}
ATerm init_sc_config_0 (ATerm t)
{
  ATerm q_45;
  q_45 = t;
  {
    ATerm g_63 = NULL,i_63 = NULL,k_63 = NULL,m_63 = NULL,q_63 = NULL,u_63 = NULL,y_63 = NULL,c_64 = NULL;
    t = term_u_45;
    {
      t = set_config_0(t);
      {
        t = term_w_45;
        {
          t = set_config_0(t);
          {
            t = term_y_45;
            {
              t = set_config_0(t);
              {
                ATerm d_46;
                d_46 = t;
                {
                  ATerm h_63 = NULL;
                  t = term_f_46;
                  {
                    t = xtc_find_path_0(t);
                    {
                      h_63 = t;
                      if(((g_63 != NULL) && (g_63 != h_63)))
                        _fail(h_63);
                      else
                        g_63 = h_63;
                    }
                  }
                }
                t = d_46;
                {
                  ATerm i_46;
                  i_46 = t;
                  {
                    ATerm j_63 = NULL;
                    t = term_k_46;
                    {
                      t = xtc_find_path_0(t);
                      {
                        j_63 = t;
                        if(((i_63 != NULL) && (i_63 != j_63)))
                          _fail(j_63);
                        else
                          i_63 = j_63;
                      }
                    }
                  }
                  t = i_46;
                  {
                    ATerm l_63 = NULL;
                    t = term_l_46;
                    {
                      t = xtc_find_path_0(t);
                      {
                        l_63 = t;
                        if(((k_63 != NULL) && (k_63 != l_63)))
                          _fail(l_63);
                        else
                          k_63 = l_63;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_l_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_63)), term_l_26), not_null(i_63)), term_l_26), not_null(g_63)), term_l_26));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATempty, term_n_46), term_m_46));
                          {
                            t = set_config_0(t);
                            {
                              ATerm o_46;
                              o_46 = t;
                              {
                                ATerm n_63 = NULL,p_63 = NULL;
                                ATerm o_63 = NULL;
                                t = term_p_46;
                                {
                                  t = xtc_find_path_0(t);
                                  {
                                    o_63 = t;
                                    if(((n_63 != NULL) && (n_63 != o_63)))
                                      _fail(o_63);
                                    else
                                      n_63 = o_63;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_63), term_w_46);
                                  {
                                    t = conc_strings_0(t);
                                    {
                                      p_63 = t;
                                      if(((m_63 != NULL) && (m_63 != p_63)))
                                        _fail(p_63);
                                      else
                                        m_63 = p_63;
                                    }
                                  }
                                }
                              }
                              t = o_46;
                              {
                                ATerm x_46;
                                x_46 = t;
                                {
                                  ATerm r_63 = NULL,t_63 = NULL;
                                  ATerm s_63 = NULL;
                                  t = term_p_46;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      s_63 = t;
                                      if(((r_63 != NULL) && (r_63 != s_63)))
                                        _fail(s_63);
                                      else
                                        r_63 = s_63;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_63), term_w_46);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        t_63 = t;
                                        if(((q_63 != NULL) && (q_63 != t_63)))
                                          _fail(t_63);
                                        else
                                          q_63 = t_63;
                                      }
                                    }
                                  }
                                }
                                t = x_46;
                                {
                                  ATerm v_63 = NULL,x_63 = NULL;
                                  ATerm w_63 = NULL;
                                  t = term_f_47;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      w_63 = t;
                                      if(((v_63 != NULL) && (v_63 != w_63)))
                                        _fail(w_63);
                                      else
                                        v_63 = w_63;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_63), term_w_46);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        x_63 = t;
                                        if(((u_63 != NULL) && (u_63 != x_63)))
                                          _fail(x_63);
                                        else
                                          u_63 = x_63;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_a_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_63)), term_l_26), not_null(q_63)), term_l_26), not_null(m_63)), term_l_26));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm g_47;
                                        g_47 = t;
                                        {
                                          ATerm z_63 = NULL,b_64 = NULL;
                                          ATerm a_64 = NULL;
                                          t = term_p_46;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              a_64 = t;
                                              if(((z_63 != NULL) && (z_63 != a_64)))
                                                _fail(a_64);
                                              else
                                                z_63 = a_64;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_63), term_h_47);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                b_64 = t;
                                                if(((y_63 != NULL) && (y_63 != b_64)))
                                                  _fail(b_64);
                                                else
                                                  y_63 = b_64;
                                              }
                                            }
                                          }
                                        }
                                        t = g_47;
                                        {
                                          ATerm d_64 = NULL,f_64 = NULL;
                                          ATerm e_64 = NULL;
                                          t = term_f_47;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              e_64 = t;
                                              if(((d_64 != NULL) && (d_64 != e_64)))
                                                _fail(e_64);
                                              else
                                                d_64 = e_64;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_64), term_h_47);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                f_64 = t;
                                                if(((c_64 != NULL) && (c_64 != f_64)))
                                                  _fail(f_64);
                                                else
                                                  c_64 = f_64;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_u_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_48), term_b_48), not_null(c_64)), term_i_47), term_a_48), term_j_47), not_null(y_63)), term_i_47));
                                            t = set_config_0(t);
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
  t = q_45;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm d_48 = t;
      int e_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_64 = NULL;
          t = term_o_40;
          {
            t = get_config_0(t);
            {
              ATerm v_64 = NULL;
              t = term_j_48;
              {
                t = xtc_find_0(t);
                {
                  v_64 = t;
                  if(((u_64 != NULL) && (u_64 != v_64)))
                    _fail(v_64);
                  else
                    u_64 = v_64;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_64), term_w_15);
                {
                  t = copy_file_0(t);
                  {
                    t = term_y_13;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
          LocalPopChoice(e_48);
        }
      else
        {
          t = d_48;
          {
          }
        }
      {
        ATerm k_48 = t;
        int l_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_40;
            {
              t = get_config_0(t);
              {
                t = sc_version_0(t);
                {
                  t = term_y_13;
                  t = exit_0(t);
                }
              }
            }
            LocalPopChoice(l_48);
          }
        else
          {
            t = k_48;
            {
            }
          }
        {
          ATerm m_48 = t;
          int q_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_48;
              r_48 = t;
              {
                t = term_l_24;
                t = get_config_0(t);
              }
              t = r_48;
              LocalPopChoice(q_48);
            }
          else
            {
              t = m_48;
              {
                t = (ATerm) ATinsert(ATempty, term_s_48);
                t = fatal_error_0(t);
              }
            }
          {
            t = if_verbose2_1(t, sc_version_0);
            {
              ATerm p_13 (ATerm t)
              {
                ATerm t_48;
                t_48 = t;
                {
                  t = term_l_24;
                  {
                    t = get_config_0(t);
                    {
                      ATerm r_13 (ATerm t)
                      {
                        t = term_u_48;
                        return(t);
                      }
                      t = debug_1(t, r_13);
                    }
                  }
                }
                t = t_48;
                return(t);
              }
              t = if_verbose1_1(t, p_13);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm sc_0 (ATerm t)
{
  ATerm v_48 = t;
  int w_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm s_13 (ATerm t)
        {
          ATerm t_13 (ATerm t)
          {
            ATerm a_65 = NULL;
            ATerm b_65 = NULL;
            b_65 = t;
            if(((a_65 != NULL) && (a_65 != b_65)))
              _fail(b_65);
            else
              a_65 = b_65;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(CheckATermList(not_null(a_65)), term_x_48));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, t_13);
          return(t);
        }
        t = profile_p__2(t, s_13, compile_0);
        {
          ATerm u_13 (ATerm t)
          {
            ATerm c_65 = NULL;
            ATerm d_65 = NULL;
            t = run_time_0(t);
            {
              d_65 = t;
              if(((c_65 != NULL) && (c_65 != d_65)))
                _fail(d_65);
              else
                c_65 = d_65;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_49), not_null(c_65)), term_y_48));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, u_13);
          {
            t = term_y_13;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(w_48);
    }
  else
    {
      t = v_48;
      {
        ATerm e_65 = NULL;
        ATerm f_65 = NULL;
        t = run_time_0(t);
        {
          f_65 = t;
          if(((e_65 != NULL) && (e_65 != f_65)))
            _fail(f_65);
          else
            e_65 = f_65;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_49), not_null(e_65)), term_h_49));
          {
            t = printnl_0(t);
            {
              t = term_o_22;
              t = exit_0(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sc_0(t);
  return(t);
}
