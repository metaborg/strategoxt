#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
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
Symbol sym_Scopes_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_r_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_k_36;
ATerm term_g_35;
ATerm term_d_35;
ATerm term_r_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_j_33;
ATerm term_f_32;
ATerm term_l_31;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_e_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_b_27;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_l_22;
ATerm term_x_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_l_9;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATempty);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_j_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__3, term_j_33, term_t_33, term_m_8);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm z_114 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm r_130 (ATerm), ATerm);
ATerm downup_1_0 (ATerm x_113 (ATerm), ATerm);
ATerm filter_1_0 (ATerm l_126 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm);
ATerm Let_2_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm foldr_3_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm);
ATerm diff_1_0 (ATerm f_122 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm c_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm r_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm SuperCombinator_0_0 (ATerm);
ATerm partition_1_0 (ATerm t_126 (ATerm), ATerm);
ATerm LiftFromLet_0_0 (ATerm);
ATerm union_1_0 (ATerm j_122 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm);
ATerm CollectSplit_2_0 (ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm);
ATerm collect_split_1_0 (ATerm e_124 (ATerm), ATerm);
ATerm lift_sdefs_0_0 (ATerm);
ATerm assert_1_0 (ATerm h_126 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm c_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm lift_definitions_0_0 (ATerm);
ATerm _2_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm o_135 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm q_138 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_120 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_120 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_136 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_136 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm o_139 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm q_110 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm r_110 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm r_141 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm q_141 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm), ATerm b_139 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,h_0 = NULL;
  f_0 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  h_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), h_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = f_0;
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm j_0 = NULL,m_0 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      j_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_0)), (ATerm) ATmakeAppl(sym_Seq_2, j_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_0)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      o_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_0)), (ATerm) ATmakeAppl(sym_Seq_2, o_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_0)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      r_0 = ATgetArgument(t, 0);
      {
        ATerm n_8 = ATgetArgument(t, 1);
        if(match_cons(n_8, sym_Scope_2))
          {
            s_0 = ATgetArgument(n_8, 0);
            t_0 = ATgetArgument(n_8, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_0, s_0);
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_8 = ATgetArgument(t, 0);
            ATerm s_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_0;
        {
          ATerm q_0 (ATerm t)
          {
            t = s_0;
            return(t);
          }
          t = at_end_1_0(q_0, t);
        }
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm x_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_0, s_0));
          if(match_cons(t, sym__2))
            {
              ATerm t_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_8) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              x_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_0;
          t = concat_0_0(t);
        }
      }
    u_0 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, u_0, t_0);
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL,m_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym__2))
    {
      m_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_1;
  if(match_cons(t, sym_Build_1))
    {
      ATerm u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_1;
  if(match_cons(t, sym_Where_1))
    {
      q_1 = ATgetArgument(t, 0);
      t = q_1;
      if(match_cons(t, sym_Prim_2))
        {
          i_1 = ATgetArgument(t, 0);
          k_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          q_1 = ATgetArgument(t, 0);
          r_1 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, q_1, r_1);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              q_1 = ATgetArgument(t, 0);
              r_1 = ATgetArgument(t, 1);
              s_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm h_2 = NULL,m_2 = NULL,s_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      if(match_cons(v_8, sym_Build_1))
        {
          ATerm x_8 = ATgetArgument(v_8, 0);
          if(match_cons(x_8, sym_Op_2))
            {
              m_2 = ATgetArgument(x_8, 0);
              h_2 = ATgetArgument(x_8, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm w_8 = ATgetArgument(t, 1);
        if(match_cons(w_8, sym_Match_1))
          {
            ATerm y_8 = ATgetArgument(w_8, 0);
            if(match_cons(y_8, sym_Op_2))
              {
                if((m_2 != ATgetArgument(y_8, 0)))
                  {
                    _fail(ATgetArgument(y_8, 0));
                  }
                s_2 = ATgetArgument(y_8, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, h_2, s_2);
  {
    ATerm v_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm z_8 = ATgetArgument(t, 0);
          if(((ATgetType(z_8) != AT_LIST) || !(ATisEmpty(z_8))))
            _fail(t);
          {
            ATerm a_9 = ATgetArgument(t, 1);
            if(((ATgetType(a_9) != AT_LIST) || !(ATisEmpty(a_9))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm w_0 (ATerm t)
    {
      ATerm y_2 = NULL,c_3 = NULL,f_3 = NULL,g_3 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm b_9 = ATgetArgument(t, 0);
          if(((ATgetType(b_9) == AT_LIST) && !(ATisEmpty(b_9))))
            {
              y_2 = ATgetFirst((ATermList) b_9);
              f_3 = (ATerm) ATgetNext((ATermList) b_9);
            }
          else
            _fail(t);
          {
            ATerm c_9 = ATgetArgument(t, 1);
            if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
              {
                c_3 = ATgetFirst((ATermList) c_9);
                g_3 = (ATerm) ATgetNext((ATermList) c_9);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_2, c_3), (ATerm) ATmakeAppl(sym__2, f_3, g_3));
      return(t);
    }
    ATerm y_0 (ATerm t)
    {
      ATerm i_3 = NULL,j_3 = NULL;
      if(match_cons(t, sym__2))
        {
          i_3 = ATgetArgument(t, 0);
          j_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(j_3), i_3);
      return(t);
    }
    ATerm z_0 (ATerm t)
    {
      ATerm k_3 = NULL,m_3 = NULL;
      if(match_cons(t, sym__2))
        {
          k_3 = ATgetArgument(t, 0);
          m_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_3), (ATerm) ATmakeAppl(sym_Match_1, m_3));
      return(t);
    }
    t = genzip_4_0(v_0, w_0, y_0, z_0, t);
    t_2 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_2), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, m_2, h_2)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm n_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if(match_cons(d_9, sym_Build_1))
        {
          ATerm f_9 = ATgetArgument(d_9, 0);
          if(match_cons(f_9, sym_Op_2))
            {
              n_3 = ATgetArgument(f_9, 0);
              {
                ATerm h_9 = ATgetArgument(f_9, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(match_cons(e_9, sym_Match_1))
          {
            ATerm i_9 = ATgetArgument(e_9, 0);
            if(match_cons(i_9, sym_Op_2))
              {
                p_3 = ATgetArgument(i_9, 0);
                {
                  ATerm j_9 = ATgetArgument(i_9, 1);
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
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_3, p_3);
  {
    ATerm k_9 = t;
    if((PushChoice() == 0))
      {
        ATerm q_3 = NULL;
        if(match_cons(t, sym__2))
          {
            q_3 = ATgetArgument(t, 0);
            if((q_3 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_9;
      }
    t = term_l_9;
  }
  return(t);
}
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm g_11 (ATerm t_9, ATerm a_10, ATerm j_10, ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, t_9, a_10);
    {
      ATerm m_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MisMatch_0_0(t);
          ;
          LocalPopChoice(o_9);
        }
      else
        {
          t = m_9;
          {
            ATerm p_9 = t;
            int q_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = BuildMatchFusion_0_0(t);
                ;
                LocalPopChoice(q_9);
              }
            else
              {
                t = p_9;
                {
                  ATerm s_9 = t;
                  int u_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_10 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          ATerm w_9 = ATgetArgument(t, 0);
                          ATerm x_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_9;
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm y_9 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = a_10;
                      if(match_cons(t, sym_Build_1))
                        {
                          q_10 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      ;
                      LocalPopChoice(u_9);
                    }
                  else
                    {
                      t = s_9;
                      {
                        ATerm z_9 = t;
                        int b_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = BuildPrim_0_0(t);
                            ;
                            LocalPopChoice(b_10);
                          }
                        else
                          {
                            t = z_9;
                            {
                              ATerm u_10 = NULL,w_10 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm c_10 = ATgetArgument(t, 0);
                                  ATerm d_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = t_9;
                              if(match_cons(t, sym_Match_1))
                                {
                                  u_10 = ATgetArgument(t, 0);
                                  t = a_10;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      w_10 = ATgetArgument(t, 0);
                                      t = w_10;
                                      if((u_10 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_10);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Build_1))
                                        {
                                          w_10 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = w_10;
                                      if((u_10 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_10);
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      u_10 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_10;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      w_10 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_10;
                                  if((u_10 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Build_1, u_10);
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
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      d_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11;
  if(match_cons(t, sym_Seq_2))
    {
      a_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, d_11, a_11);
            {
              ATerm g_10 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = g_10;
                  {
                    ATerm i_10 = t;
                    int k_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(k_10);
                      }
                    else
                      {
                        t = i_10;
                        {
                          ATerm l_10 = t;
                          int m_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_2 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm n_10 = ATgetArgument(t, 0);
                                  ATerm o_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = d_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm p_10 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = a_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  a_2 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              ;
                              LocalPopChoice(m_10);
                            }
                          else
                            {
                              t = l_10;
                              {
                                ATerm r_10 = t;
                                int s_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(s_10);
                                  }
                                else
                                  {
                                    t = r_10;
                                    {
                                      ATerm i_2 = NULL,k_2 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm t_10 = ATgetArgument(t, 0);
                                          ATerm v_10 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = d_11;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          i_2 = ATgetArgument(t, 0);
                                          t = a_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              k_2 = ATgetArgument(t, 0);
                                              t = k_2;
                                              if((i_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, i_2);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  k_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = k_2;
                                              if((i_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, i_2);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              i_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = a_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              k_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = k_2;
                                          if((i_2 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_2);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              j_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, j_1, b_11);
            }
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = g_11(d_11, e_11, c_11, t);
          }
      }
    }
  else
    {
      t = g_11(d_11, e_11, c_11, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_114 (ATerm), ATerm t)
{
  ATerm h_11 (ATerm t)
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_114(t);
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = SRTS_one(h_11, t);
      }
    return(t);
  }
  t = h_11(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm z_10 = ATgetArgument(t, 0);
      if(((ATgetType(z_10) == AT_LIST) && !(ATisEmpty(z_10))))
        {
          ATerm k_11 = ATgetFirst((ATermList) z_10);
          if(match_cons(k_11, sym_SDefT_4))
            {
              j_11 = ATgetArgument(k_11, 0);
              {
                ATerm m_11 = ATgetArgument(k_11, 1);
                if(((ATgetType(m_11) != AT_LIST) || !(ATisEmpty(m_11))))
                  _fail(t);
              }
              {
                ATerm n_11 = ATgetArgument(k_11, 2);
                if(((ATgetType(n_11) != AT_LIST) || !(ATisEmpty(n_11))))
                  _fail(t);
              }
              i_11 = ATgetArgument(k_11, 3);
            }
          else
            _fail(t);
          {
            ATerm l_11 = (ATerm) ATgetNext((ATermList) z_10);
            if(((ATgetType(l_11) != AT_LIST) || !(ATisEmpty(l_11))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm f_11 = ATgetArgument(t, 1);
        if(match_cons(f_11, sym_CallT_3))
          {
            ATerm o_11 = ATgetArgument(f_11, 0);
            if(match_cons(o_11, sym_SVar_1))
              {
                if((j_11 != ATgetArgument(o_11, 0)))
                  {
                    _fail(ATgetArgument(o_11, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm p_11 = ATgetArgument(f_11, 1);
              if(((ATgetType(p_11) != AT_LIST) || !(ATisEmpty(p_11))))
                _fail(t);
            }
            {
              ATerm q_11 = ATgetArgument(f_11, 2);
              if(((ATgetType(q_11) != AT_LIST) || !(ATisEmpty(q_11))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_11;
  {
    ATerm x_11 = t;
    if((PushChoice() == 0))
      {
        ATerm a_1 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm a_12 = ATgetArgument(t, 0);
              if(match_cons(a_12, sym_SVar_1))
                {
                  if((j_11 != ATgetArgument(a_12, 0)))
                    {
                      _fail(ATgetArgument(a_12, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm b_12 = ATgetArgument(t, 1);
                if(((ATgetType(b_12) != AT_LIST) || !(ATisEmpty(b_12))))
                  _fail(t);
              }
              {
                ATerm c_12 = ATgetArgument(t, 2);
                if(((ATgetType(c_12) != AT_LIST) || !(ATisEmpty(c_12))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(a_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_11;
      }
    t = i_11;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,y_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      y_11 = ATgetArgument(t, 0);
      t = y_11;
      if(match_cons(t, sym_Seq_2))
        {
          w_11 = ATgetArgument(t, 0);
          s_11 = ATgetArgument(t, 1);
          t = w_11;
          if(match_cons(t, sym_Where_1))
            {
              r_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_11;
          if(match_cons(t, sym_Seq_2))
            {
              t_11 = ATgetArgument(t, 0);
              v_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_11;
          if(match_cons(t, sym_Build_1))
            {
              u_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, r_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_11), v_11)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              w_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          y_11 = ATgetArgument(t, 0);
          t = y_11;
          if(match_cons(t, sym_Test_1))
            {
              w_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              y_11 = ATgetArgument(t, 0);
              t = y_11;
              if(match_cons(t, sym_Not_1))
                {
                  w_11 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, w_11);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  y_11 = ATgetArgument(t, 0);
                  z_11 = ATgetArgument(t, 1);
                  t = z_11;
                  if((y_11 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      y_11 = ATgetArgument(t, 0);
                      z_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_11;
                  if((y_11 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      n_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
      t = n_12;
      if(match_cons(t, sym_LChoice_2))
        {
          o_12 = ATgetArgument(t, 0);
          p_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, o_12, (ATerm) ATmakeAppl(sym_LChoice_2, p_12, q_12));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          n_12 = ATgetArgument(t, 0);
          q_12 = ATgetArgument(t, 1);
          t = n_12;
          if(match_cons(t, sym_Seq_2))
            {
              o_12 = ATgetArgument(t, 0);
              p_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, o_12, (ATerm) ATmakeAppl(sym_Seq_2, p_12, q_12));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              n_12 = ATgetArgument(t, 0);
              q_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_12;
          if(match_cons(t, sym_Choice_2))
            {
              o_12 = ATgetArgument(t, 0);
              p_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, o_12, (ATerm) ATmakeAppl(sym_Choice_2, p_12, q_12));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm b_1 (ATerm t)
        {
          ATerm f_12 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(g_12);
            }
          else
            {
              t = f_12;
            }
          return(t);
        }
        t = Cons_2_0(_id, b_1, t);
      }
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm c_1 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, c_1, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,m_13 = NULL,n_13 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      m_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, m_13, n_13);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          m_13 = ATgetArgument(t, 0);
          t = m_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_13 = ATgetFirst((ATermList) t);
              i_13 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, h_13, (ATerm) ATmakeAppl(sym_LChoices_1, i_13));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_l_9;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              m_13 = ATgetArgument(t, 0);
              t = m_13;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_13 = ATgetFirst((ATermList) t);
                  i_13 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, h_13, (ATerm) ATmakeAppl(sym_Choices_1, i_13));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_l_9;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  m_13 = ATgetArgument(t, 0);
                  t = m_13;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_13 = ATgetFirst((ATermList) t);
                      i_13 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_13, (ATerm) ATmakeAppl(sym_Seqs_1, i_13));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_h_12;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_13 = ATgetArgument(t, 0);
                      n_13 = ATgetArgument(t, 1);
                      k_13 = ATgetArgument(t, 2);
                      j_13 = ATgetArgument(t, 3);
                      {
                        ATerm a_14 = NULL,b_14 = NULL;
                        t = n_13;
                        {
                          ATerm d_1 (ATerm t)
                          {
                            ATerm c_14 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                c_14 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, c_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_12), term_k_12));
                            return(t);
                          }
                          t = map1_1_0(d_1, t);
                          a_14 = t;
                          t = k_13;
                          {
                            ATerm e_1 (ATerm t)
                            {
                              ATerm l_12 = t;
                              int m_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_14 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      e_14 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_14, term_k_12);
                                  ;
                                  LocalPopChoice(m_12);
                                }
                              else
                                {
                                  t = l_12;
                                }
                              return(t);
                            }
                            t = map1_1_0(e_1, t);
                            b_14 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, m_13, a_14, b_14, j_13);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          m_13 = ATgetArgument(t, 0);
                          n_13 = ATgetArgument(t, 1);
                          k_13 = ATgetArgument(t, 2);
                          j_13 = ATgetArgument(t, 3);
                          {
                            ATerm r_12 = t;
                            int s_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_14 = NULL,l_14 = NULL;
                                t = k_13;
                                {
                                  ATerm f_1 (ATerm t)
                                  {
                                    ATerm m_14 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        m_14 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, m_14, term_k_12);
                                    return(t);
                                  }
                                  t = map1_1_0(f_1, t);
                                  k_14 = t;
                                  t = n_13;
                                  {
                                    ATerm g_1 (ATerm t)
                                    {
                                      ATerm t_12 = t;
                                      int u_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_14 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              o_14 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, o_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_12), term_k_12));
                                          ;
                                          LocalPopChoice(u_12);
                                        }
                                      else
                                        {
                                          t = t_12;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(g_1, t);
                                    l_14 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, m_13, l_14, k_14, j_13);
                                  }
                                }
                                ;
                                LocalPopChoice(s_12);
                              }
                            else
                              {
                                t = r_12;
                                {
                                  ATerm u_14 = NULL,v_14 = NULL;
                                  t = n_13;
                                  {
                                    ATerm h_1 (ATerm t)
                                    {
                                      ATerm w_14 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          w_14 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, w_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_12), term_k_12));
                                      return(t);
                                    }
                                    t = map1_1_0(h_1, t);
                                    u_14 = t;
                                    t = k_13;
                                    {
                                      ATerm l_1 (ATerm t)
                                      {
                                        ATerm v_12 = t;
                                        int w_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm y_14 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                y_14 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, y_14, term_k_12);
                                            ;
                                            LocalPopChoice(w_12);
                                          }
                                        else
                                          {
                                            t = v_12;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(l_1, t);
                                      v_14 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, m_13, u_14, v_14, j_13);
                                    }
                                  }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              m_13 = ATgetArgument(t, 0);
                              n_13 = ATgetArgument(t, 1);
                              k_13 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, n_13, (ATerm) ATmakeAppl(sym_Op_2, term_x_12, (ATerm) ATinsert(ATinsert(ATempty, k_13), m_13)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  m_13 = ATgetArgument(t, 0);
                                  n_13 = ATgetArgument(t, 1);
                                  k_13 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, k_13)), m_13), (ATerm) ATmakeAppl(sym_Build_1, n_13)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      m_13 = ATgetArgument(t, 0);
                                      n_13 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_13, (ATerm) ATmakeAppl(sym_Match_1, n_13));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          m_13 = ATgetArgument(t, 0);
                                          n_13 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_13), n_13);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              m_13 = ATgetArgument(t, 0);
                                              n_13 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_13), m_13);
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
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      e_16 = ATgetArgument(t, 0);
      t = e_16;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          e_16 = ATgetArgument(t, 0);
          t = e_16;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_h_12;
        }
      else
        {
          ATerm y_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  e_16 = ATgetArgument(t, 0);
                  {
                    ATerm a_13 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(z_12);
              t = e_16;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
            }
          else
            {
              t = y_12;
              {
                ATerm b_13 = t;
                int c_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm d_13 = ATgetArgument(t, 0);
                        f_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(c_13);
                    t = f_16;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                  }
                else
                  {
                    t = b_13;
                    {
                      ATerm e_13 = t;
                      int f_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm g_13 = ATgetArgument(t, 0);
                              f_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(f_13);
                          t = f_16;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          t = e_13;
                          if(match_cons(t, sym_Some_1))
                            {
                              e_16 = ATgetArgument(t, 0);
                              t = e_16;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  e_16 = ATgetArgument(t, 0);
                                  t = e_16;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  ATerm l_13 = t;
                                  int o_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm p_13 = ATgetArgument(t, 0);
                                          f_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(o_13);
                                      t = f_16;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      t = l_13;
                                      {
                                        ATerm q_13 = t;
                                        int r_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm s_13 = ATgetArgument(t, 0);
                                                f_16 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(r_13);
                                            t = f_16;
                                            {
                                              ATerm n_1 (ATerm t)
                                              {
                                                if(!(match_cons(t, sym_Fail_0)))
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = fetch_1_0(n_1, t);
                                              t = term_l_9;
                                            }
                                          }
                                        else
                                          {
                                            t = q_13;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                e_16 = ATgetArgument(t, 0);
                                                f_16 = ATgetArgument(t, 1);
                                                t = f_16;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = e_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm t_13 = t;
                                                        int u_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = f_16;
                                                            ;
                                                            LocalPopChoice(u_13);
                                                          }
                                                        else
                                                          {
                                                            t = t_13;
                                                            t = e_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = e_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = e_16;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = f_16;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    e_16 = ATgetArgument(t, 0);
                                                    f_16 = ATgetArgument(t, 1);
                                                    t = f_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = e_16;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm v_13 = t;
                                                            int w_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = f_16;
                                                                ;
                                                                LocalPopChoice(w_13);
                                                              }
                                                            else
                                                              {
                                                                t = v_13;
                                                                t = e_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = e_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = e_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = f_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        e_16 = ATgetArgument(t, 0);
                                                        t = e_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            e_16 = ATgetArgument(t, 0);
                                                            f_16 = ATgetArgument(t, 1);
                                                            g_16 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = g_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_16, f_16);
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm r_17 = NULL,v_17 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_17 = ATgetArgument(t, 0);
      t = v_17;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_17 = ATgetArgument(t, 0);
          t = v_17;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_l_9;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              v_17 = ATgetArgument(t, 0);
              r_17 = ATgetArgument(t, 1);
              t = r_17;
              if(match_cons(t, sym_Id_0))
                {
                  t = v_17;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm x_13 = t;
                      int y_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_17;
                          ;
                          LocalPopChoice(y_13);
                        }
                      else
                        {
                          t = x_13;
                          t = v_17;
                        }
                    }
                  else
                    {
                      t = v_17;
                    }
                }
              else
                {
                  t = v_17;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = r_17;
                }
            }
          else
            {
              ATerm z_13 = t;
              int d_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      v_17 = ATgetArgument(t, 0);
                      {
                        ATerm f_14 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_14);
                  t = v_17;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = z_13;
                  {
                    ATerm g_14 = t;
                    int h_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm i_14 = ATgetArgument(t, 0);
                            r_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_14);
                        t = r_17;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = g_14;
                        {
                          ATerm j_14 = t;
                          int n_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm p_14 = ATgetArgument(t, 0);
                                  r_17 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_14);
                              t = r_17;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = j_14;
                              if(match_cons(t, sym_All_1))
                                {
                                  v_17 = ATgetArgument(t, 0);
                                  t = v_17;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      v_17 = ATgetArgument(t, 0);
                                      t = v_17;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          v_17 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = v_17;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_h_12;
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            {
              ATerm x_14 = t;
              int z_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(z_14);
                }
              else
                {
                  t = x_14;
                  {
                    ATerm a_15 = t;
                    int b_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(b_15);
                      }
                    else
                      {
                        t = a_15;
                        {
                          ATerm c_15 = t;
                          int d_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(d_15);
                            }
                          else
                            {
                              t = c_15;
                              {
                                ATerm e_15 = t;
                                int f_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_18 = NULL,k_18 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        j_18 = ATgetArgument(t, 0);
                                        k_18 = ATgetArgument(t, 1);
                                        t = j_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = k_18;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            j_18 = ATgetArgument(t, 0);
                                            k_18 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = j_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = k_18;
                                      }
                                    ;
                                    LocalPopChoice(f_15);
                                  }
                                else
                                  {
                                    t = e_15;
                                    {
                                      ATerm g_15 = t;
                                      int h_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(h_15);
                                        }
                                      else
                                        {
                                          t = g_15;
                                          {
                                            ATerm i_15 = t;
                                            int j_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(j_15);
                                              }
                                            else
                                              {
                                                t = i_15;
                                                {
                                                  ATerm p_18 = NULL,q_18 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      p_18 = ATgetArgument(t, 0);
                                                      q_18 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = p_18;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = q_18;
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
ATerm repeat_1_0 (ATerm r_130 (ATerm), ATerm t)
{
  ATerm u_18 (ATerm t)
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_130(t);
        t = u_18(t);
        ;
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
      }
    return(t);
  }
  t = u_18(t);
  return(t);
}
ATerm downup_1_0 (ATerm x_113 (ATerm), ATerm t)
{
  t = x_113(t);
  {
    ATerm o_1 (ATerm t)
    {
      t = downup_1_0(x_113, t);
      return(t);
    }
    t = SRTS_all(o_1, t);
    t = x_113(t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm l_126 (ATerm), ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm o_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              t = filter_1_0(l_126, t);
              return(t);
            }
            t = Cons_2_0(l_126, t_1, t);
            ;
            LocalPopChoice(p_15);
          }
        else
          {
            t = o_15;
            {
              ATerm y_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_15 = ATgetFirst((ATermList) t);
                  y_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_18;
              t = filter_1_0(l_126, t);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,f_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  j_19 = t;
  if(match_cons(t, sym_Rec_2))
    {
      c_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_19);
  b_19 = t;
  t = c_19;
  t = h_103(t);
  h_19 = t;
  t = f_19;
  t = i_103(t);
  i_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, h_19, i_19), b_19);
  return(t);
}
ATerm SDef_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,p_19 = NULL,r_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
  w_19 = t;
  if(match_cons(t, sym_SDef_3))
    {
      n_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
      r_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_19);
  m_19 = t;
  t = n_19;
  t = z_104(t);
  t_19 = t;
  t = p_19;
  t = a_105(t);
  u_19 = t;
  t = r_19;
  t = b_105(t);
  v_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, t_19, u_19, v_19), m_19);
  return(t);
}
ATerm Let_2_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,b_20 = NULL,c_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  h_20 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_20);
  z_19 = t;
  t = b_20;
  t = k_102(t);
  f_20 = t;
  t = c_20;
  t = l_102(t);
  g_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, f_20, g_20), z_19);
  return(t);
}
ATerm sboundin_3_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm t)
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(a_113, a_113, t);
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(c_113, c_113, a_113, t);
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(c_113, c_113, c_113, a_113, t);
                  ;
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
                  t = Rec_2_0(c_113, a_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm l_20 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      l_20 = ATgetArgument(t, 0);
      {
        ATerm x_15 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_20;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm o_20 = NULL;
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              o_20 = ATgetArgument(t, 0);
              {
                ATerm a_16 = ATgetArgument(t, 1);
              }
              {
                ATerm b_16 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(z_15);
          t = o_20;
        }
      else
        {
          t = y_15;
          if(match_cons(t, sym_SDefT_4))
            {
              o_20 = ATgetArgument(t, 0);
              {
                ATerm c_16 = ATgetArgument(t, 1);
              }
              {
                ATerm d_16 = ATgetArgument(t, 2);
              }
              {
                ATerm h_16 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = o_20;
        }
      return(t);
    }
    t = map_1_0(u_1, t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_124(t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
        ATerm a_21 = NULL,d_21 = NULL,h_21 = NULL,i_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_21 = ATgetFirst((ATermList) t);
            d_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_21;
        t = a_125(t);
        h_21 = t;
        t = d_21;
        t = foldr_3_0(y_124, z_124, a_125, t);
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_21, i_21);
        t = z_124(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  if(match_cons(t, sym__2))
    {
      m_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_21;
  {
    ATerm n_21 (ATerm t)
    {
      ATerm k_16 = t;
      int l_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(l_16);
        }
      else
        {
          t = k_16;
          {
            ATerm m_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_2 = NULL,q_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_2 = ATgetFirst((ATermList) t);
                    q_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = l_21;
                {
                  ATerm v_1 (ATerm t)
                  {
                    ATerm r_2 = NULL;
                    r_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_2, r_2);
                    t = f_122(t);
                    return(t);
                  }
                  t = fetch_1_0(v_1, t);
                  t = q_2;
                  t = n_21(t);
                }
                ;
                LocalPopChoice(n_16);
              }
            else
              {
                t = m_16;
                t = Cons_2_0(_id, n_21, t);
              }
          }
        }
      return(t);
    }
    t = n_21(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm q_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_16 = ATgetFirst((ATermList) t);
      if(match_cons(o_16, sym__2))
        {
          q_21 = ATgetArgument(o_16, 0);
          t_21 = ATgetArgument(o_16, 1);
        }
      else
        _fail(t);
      u_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_21);
  if(match_cons(t, sym__2))
    {
      v_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_21);
  if(match_cons(t, sym__2))
    {
      if((v_21 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_21, w_21);
  {
    ATerm w_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm p_16 = ATgetArgument(t, 0);
          if(((ATgetType(p_16) != AT_LIST) || !(ATisEmpty(p_16))))
            _fail(t);
          {
            ATerm q_16 = ATgetArgument(t, 1);
            if(((ATgetType(q_16) != AT_LIST) || !(ATisEmpty(q_16))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm x_1 (ATerm t)
    {
      ATerm z_21 = NULL,b_22 = NULL,c_22 = NULL,f_22 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm r_16 = ATgetArgument(t, 0);
          if(((ATgetType(r_16) == AT_LIST) && !(ATisEmpty(r_16))))
            {
              z_21 = ATgetFirst((ATermList) r_16);
              c_22 = (ATerm) ATgetNext((ATermList) r_16);
            }
          else
            _fail(t);
          {
            ATerm s_16 = ATgetArgument(t, 1);
            if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
              {
                b_22 = ATgetFirst((ATermList) s_16);
                f_22 = (ATerm) ATgetNext((ATermList) s_16);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_21, b_22), (ATerm) ATmakeAppl(sym__2, c_22, f_22));
      return(t);
    }
    ATerm y_1 (ATerm t)
    {
      ATerm g_22 = NULL,h_22 = NULL;
      if(match_cons(t, sym__2))
        {
          g_22 = ATgetArgument(t, 0);
          h_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(h_22), g_22);
      return(t);
    }
    t = genzip_4_0(w_1, x_1, y_1, _id, t);
    y_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_21, u_21);
    {
      ATerm t_16 = t;
      int u_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm v_16 = ATgetArgument(t, 0);
              ATerm w_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_21;
          {
            ATerm z_1 (ATerm t)
            {
              t = u_21;
              return(t);
            }
            t = at_end_1_0(z_1, t);
          }
          ;
          LocalPopChoice(u_16);
        }
      else
        {
          t = t_16;
          {
            ATerm a_3 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_21, u_21));
            if(match_cons(t, sym__2))
              {
                ATerm x_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) x_16) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                a_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_3;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm t)
{
  ATerm m_22 (ATerm t)
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_131(t);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        t = h_131(t);
        t = m_22(t);
      }
    return(t);
  }
  t = m_22(t);
  return(t);
}
ATerm for_3_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm t)
{
  t = j_131(t);
  t = while_not_2_0(k_131, l_131, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm r_22 = NULL;
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_22);
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, e_2, t);
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              ATerm e_17 = t;
              int f_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_22 = ATgetFirst((ATermList) t);
                      w_22 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = t_22;
                  if(match_cons(t, sym__2))
                    {
                      u_22 = ATgetArgument(t, 0);
                      v_22 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_22;
                  if((u_22 != t))
                    {
                      _fail(t);
                    }
                  t = w_22;
                  ;
                  LocalPopChoice(f_17);
                }
              else
                {
                  t = e_17;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, f_2, t);
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            {
              ATerm b_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  b_23 = ATgetArgument(t, 0);
                  f_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_23;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_23 = ATgetFirst((ATermList) t);
                  h_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_23), g_23), h_23);
            }
          }
        return(t);
      }
      t = for_3_0(b_2, c_2, d_2, t);
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm l_23 = NULL;
          if(match_cons(t, sym__2))
            {
              l_23 = ATgetArgument(t, 0);
              if((l_23 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(g_2, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm c_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_23 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_129(t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_23 = NULL,o_23 = NULL,o_3 = NULL,r_3 = NULL;
              m_23 = t;
              t = b_129(t);
              o_23 = t;
              t = m_23;
              {
                ATerm j_2 (ATerm t)
                {
                  ATerm d_3 = NULL;
                  t = r_23(t);
                  d_3 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_3, o_23);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm l_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = c_129(j_2, r_23, l_2, t);
                o_3 = t;
                t = SSL_explode_term(o_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_17 = ATgetArgument(t, 0);
                    r_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_3;
                {
                  ATerm n_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm o_2 (ATerm t)
                  {
                    ATerm u_2 (ATerm t)
                    {
                      ATerm v_3 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          v_3 = ATgetArgument(t, 0);
                          if((v_3 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(u_2, t);
                    return(t);
                  }
                  t = foldr_3_0(n_2, o_2, _id, t);
                }
              }
              ;
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              {
                ATerm w_3 = NULL,x_3 = NULL;
                w_3 = t;
                t = SSL_explode_term(w_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_17 = ATgetArgument(t, 0);
                    x_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_3;
                {
                  ATerm v_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm w_2 (ATerm t)
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm b_4 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          b_4 = ATgetArgument(t, 0);
                          if((b_4 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(x_2, t);
                    return(t);
                  }
                  t = foldr_3_0(v_2, w_2, r_23, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = r_23(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      t_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_23);
  s_23 = t;
  t = t_23;
  t = r_101(t);
  u_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, u_23), s_23);
  return(t);
}
ATerm RDefT_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,j_24 = NULL,k_24 = NULL,m_24 = NULL,o_24 = NULL,p_24 = NULL;
  p_24 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      b_24 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
      d_24 = ATgetArgument(t, 2);
      e_24 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_24);
  y_23 = t;
  t = b_24;
  t = i_101(t);
  j_24 = t;
  t = c_24;
  t = j_101(t);
  k_24 = t;
  t = d_24;
  t = k_101(t);
  m_24 = t;
  t = e_24;
  t = l_101(t);
  o_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, j_24, k_24, m_24, o_24), y_23);
  return(t);
}
ATerm SDefT_4_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  b_25 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
      v_24 = ATgetArgument(t, 2);
      w_24 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_25);
  s_24 = t;
  t = t_24;
  t = c_105(t);
  x_24 = t;
  t = u_24;
  t = d_105(t);
  y_24 = t;
  t = v_24;
  t = e_105(t);
  z_24 = t;
  t = w_24;
  t = f_105(t);
  a_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, x_24, y_24, z_24, a_25), s_24);
  return(t);
}
ATerm Scope_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,n_25 = NULL;
  n_25 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_25);
  e_25 = t;
  t = f_25;
  t = u_102(t);
  h_25 = t;
  t = g_25;
  t = v_102(t);
  i_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, h_25, i_25), e_25);
  return(t);
}
ATerm tboundin_3_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(y_112, w_112, t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(y_112, y_112, y_112, w_112, t);
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            {
              ATerm q_17 = t;
              int s_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(y_112, y_112, y_112, w_112, t);
                  ;
                  LocalPopChoice(s_17);
                }
              else
                {
                  t = q_17;
                  t = DynamicRules_1_0(w_112, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm u_25 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        u_25 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, u_25);
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm v_25 = NULL,z_25 = NULL,c_26 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        z_25 = ATgetArgument(t, 0);
        t = z_25;
        if(match_cons(t, sym_Rule_3))
          {
            v_25 = ATgetArgument(t, 0);
            {
              ATerm t_17 = ATgetArgument(t, 1);
            }
            {
              ATerm u_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_25;
        t = tvars_0_0(t);
      }
    else
      {
        ATerm w_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                z_25 = ATgetArgument(t, 0);
                {
                  ATerm y_17 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_17);
            t = z_25;
          }
        else
          {
            t = w_17;
            if(match_cons(t, sym_DynamicRules_1))
              {
                z_25 = ATgetArgument(t, 0);
                t = z_25;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm z_17 = t;
                int a_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm b_18 = ATgetArgument(t, 0);
                        ATerm c_18 = ATgetArgument(t, 1);
                        c_26 = ATgetArgument(t, 2);
                        {
                          ATerm d_18 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_18);
                    t = c_26;
                    {
                      ATerm e_3 (ATerm t)
                      {
                        ATerm p_26 = NULL;
                        ATerm e_18 = t;
                        int f_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                p_26 = ATgetArgument(t, 0);
                                {
                                  ATerm g_18 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(f_18);
                            t = p_26;
                          }
                        else
                          {
                            t = e_18;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                p_26 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = p_26;
                          }
                        return(t);
                      }
                      t = map_1_0(e_3, t);
                    }
                  }
                else
                  {
                    t = z_17;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm h_18 = ATgetArgument(t, 0);
                        ATerm i_18 = ATgetArgument(t, 1);
                        c_26 = ATgetArgument(t, 2);
                        {
                          ATerm l_18 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = c_26;
                    {
                      ATerm h_3 (ATerm t)
                      {
                        ATerm w_26 = NULL;
                        ATerm m_18 = t;
                        int n_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                w_26 = ATgetArgument(t, 0);
                                {
                                  ATerm o_18 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(n_18);
                            t = w_26;
                          }
                        else
                          {
                            t = m_18;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                w_26 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = w_26;
                          }
                        return(t);
                      }
                      t = map_1_0(h_3, t);
                    }
                  }
              }
          }
      }
    return(t);
  }
  t = free_vars_3_0(z_2, b_3, tboundin_3_0, t);
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  j_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      ATerm s_18 = ATgetArgument(t, 1);
      ATerm t_18 = ATgetArgument(t, 2);
      ATerm v_18 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  k_27 = t;
  t = j_27;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm l_27 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          l_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, l_27);
      return(t);
    }
    ATerm s_3 (ATerm t)
    {
      ATerm m_27 = NULL,q_27 = NULL,s_27 = NULL;
      if(match_cons(t, sym_LRule_1))
        {
          q_27 = ATgetArgument(t, 0);
          t = q_27;
          if(match_cons(t, sym_Rule_3))
            {
              m_27 = ATgetArgument(t, 0);
              {
                ATerm w_18 = ATgetArgument(t, 1);
              }
              {
                ATerm x_18 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = m_27;
          t = tvars_0_0(t);
        }
      else
        {
          ATerm z_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Scope_2))
                {
                  q_27 = ATgetArgument(t, 0);
                  {
                    ATerm d_19 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(a_19);
              t = q_27;
            }
          else
            {
              t = z_18;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_27 = ATgetArgument(t, 0);
                  t = q_27;
                  t = tvars_0_0(t);
                }
              else
                {
                  ATerm e_19 = t;
                  int g_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          ATerm k_19 = ATgetArgument(t, 0);
                          ATerm l_19 = ATgetArgument(t, 1);
                          s_27 = ATgetArgument(t, 2);
                          {
                            ATerm o_19 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(g_19);
                      t = s_27;
                      {
                        ATerm t_3 (ATerm t)
                        {
                          ATerm a_28 = NULL;
                          ATerm q_19 = t;
                          int s_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  a_28 = ATgetArgument(t, 0);
                                  {
                                    ATerm x_19 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(s_19);
                              t = a_28;
                            }
                          else
                            {
                              t = q_19;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  a_28 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = a_28;
                            }
                          return(t);
                        }
                        t = map_1_0(t_3, t);
                      }
                    }
                  else
                    {
                      t = e_19;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          ATerm y_19 = ATgetArgument(t, 0);
                          ATerm a_20 = ATgetArgument(t, 1);
                          s_27 = ATgetArgument(t, 2);
                          {
                            ATerm d_20 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      t = s_27;
                      {
                        ATerm u_3 (ATerm t)
                        {
                          ATerm g_28 = NULL;
                          ATerm e_20 = t;
                          int i_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  g_28 = ATgetArgument(t, 0);
                                  {
                                    ATerm j_20 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(i_20);
                              t = g_28;
                            }
                          else
                            {
                              t = e_20;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  g_28 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = g_28;
                            }
                          return(t);
                        }
                        t = map_1_0(u_3, t);
                      }
                    }
                }
            }
        }
      return(t);
    }
    t = free_vars_3_0(l_3, s_3, tboundin_3_0, t);
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = j_27;
    {
      ATerm y_3 (ATerm t)
      {
        ATerm j_28 = NULL;
        if(match_cons(t, sym_SVar_1))
          {
            j_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATempty, j_28);
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        ATerm k_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind1_0_0(t);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = k_20;
            {
              ATerm o_28 = NULL,p_28 = NULL;
              ATerm n_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm q_20 = ATgetArgument(t, 0);
                      p_28 = ATgetArgument(t, 1);
                      {
                        ATerm r_20 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_20);
                  t = p_28;
                  {
                    ATerm a_4 (ATerm t)
                    {
                      ATerm v_28 = NULL;
                      ATerm s_20 = t;
                      int t_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              v_28 = ATgetArgument(t, 0);
                              {
                                ATerm u_20 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_20);
                          t = v_28;
                        }
                      else
                        {
                          t = s_20;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              v_28 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = v_28;
                        }
                      return(t);
                    }
                    t = map_1_0(a_4, t);
                  }
                }
              else
                {
                  t = n_20;
                  {
                    ATerm v_20 = t;
                    int w_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Rec_2))
                          {
                            o_28 = ATgetArgument(t, 0);
                            {
                              ATerm x_20 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_20);
                        t = (ATerm) ATinsert(ATempty, o_28);
                      }
                    else
                      {
                        t = v_20;
                        {
                          ATerm y_20 = t;
                          int z_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  ATerm b_21 = ATgetArgument(t, 0);
                                  p_28 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_21 = ATgetArgument(t, 2);
                                  }
                                  {
                                    ATerm e_21 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(z_20);
                              t = p_28;
                              {
                                ATerm c_4 (ATerm t)
                                {
                                  ATerm f_29 = NULL;
                                  ATerm f_21 = t;
                                  int g_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          f_29 = ATgetArgument(t, 0);
                                          {
                                            ATerm j_21 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(g_21);
                                      t = f_29;
                                    }
                                  else
                                    {
                                      t = f_21;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          f_29 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = f_29;
                                    }
                                  return(t);
                                }
                                t = map_1_0(c_4, t);
                              }
                            }
                          else
                            {
                              t = y_20;
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  ATerm k_21 = ATgetArgument(t, 0);
                                  p_28 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_21 = ATgetArgument(t, 2);
                                  }
                                  {
                                    ATerm p_21 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              t = p_28;
                              {
                                ATerm d_4 (ATerm t)
                                {
                                  ATerm m_29 = NULL;
                                  ATerm r_21 = t;
                                  int s_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          m_29 = ATgetArgument(t, 0);
                                          {
                                            ATerm a_22 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(s_21);
                                      t = m_29;
                                    }
                                  else
                                    {
                                      t = r_21;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          m_29 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = m_29;
                                    }
                                  return(t);
                                }
                                t = map_1_0(d_4, t);
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
      t = free_vars_3_0(y_3, z_3, sboundin_3_0, t);
      {
        ATerm e_4 (ATerm t)
        {
          ATerm d_22 = t;
          if((PushChoice() == 0))
            {
              ATerm p_29 = NULL,q_29 = NULL;
              p_29 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue)), p_29);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_29 = ATgetFirst((ATermList) t);
                  {
                    ATerm e_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = q_29;
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm i_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_22) != ATmakeSymbol("b_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = term_m_8;
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_22;
            }
          return(t);
        }
        t = filter_1_0(e_4, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_27;
      }
    }
  }
  return(t);
}
ATerm partition_1_0 (ATerm t_126 (ATerm), ATerm t)
{
  ATerm n_30 (ATerm t)
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_l_22;
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,f_4 = NULL,j_4 = NULL;
              ATerm g_4 (ATerm t)
              {
                t = t_126(t);
                if(((z_29 != NULL) && (z_29 != t)))
                  _fail(t);
                else
                  z_29 = t;
                return(t);
              }
              t = Cons_2_0(g_4, _id, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_22 = ATgetFirst((ATermList) t);
                  a_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_30;
              t = n_30(t);
              b_30 = t;
              t = SSL_explode_term(b_30);
              if(match_cons(t, sym__2))
                {
                  ATerm q_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm s_22 = ATgetArgument(t, 1);
                    if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
                      {
                        f_4 = ATgetFirst((ATermList) s_22);
                        {
                          ATerm x_22 = (ATerm) ATgetNext((ATermList) s_22);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(b_30);
              if(match_cons(t, sym__2))
                {
                  ATerm y_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm z_22 = ATgetArgument(t, 1);
                    if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
                      {
                        ATerm a_23 = ATgetFirst((ATermList) z_22);
                        ATerm c_23 = (ATerm) ATgetNext((ATermList) z_22);
                        if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
                          {
                            j_4 = ATgetFirst((ATermList) c_23);
                            {
                              ATerm d_23 = (ATerm) ATgetNext((ATermList) c_23);
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
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_4), not_null(z_29)), j_4);
              ;
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              {
                ATerm h_30 = NULL,j_30 = NULL,k_30 = NULL,n_4 = NULL,r_4 = NULL;
                ATerm h_4 (ATerm t)
                {
                  if(((h_30 != NULL) && (h_30 != t)))
                    _fail(t);
                  else
                    h_30 = t;
                  return(t);
                }
                t = Cons_2_0(h_4, _id, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm e_23 = ATgetFirst((ATermList) t);
                    j_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_30;
                t = n_30(t);
                k_30 = t;
                t = SSL_explode_term(k_30);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm j_23 = ATgetArgument(t, 1);
                      if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
                        {
                          n_4 = ATgetFirst((ATermList) j_23);
                          {
                            ATerm k_23 = (ATerm) ATgetNext((ATermList) j_23);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(k_30);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm p_23 = ATgetArgument(t, 1);
                      if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
                        {
                          ATerm q_23 = ATgetFirst((ATermList) p_23);
                          ATerm w_23 = (ATerm) ATgetNext((ATermList) p_23);
                          if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
                            {
                              r_4 = ATgetFirst((ATermList) w_23);
                              {
                                ATerm x_23 = (ATerm) ATgetNext((ATermList) w_23);
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
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(CheckATermList(r_4), not_null(h_30)));
              }
            }
        }
      }
    return(t);
  }
  t = n_30(t);
  return(t);
}
ATerm LiftFromLet_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      q_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_30;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      s_30 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, t_30, r_30), s_30);
  {
    ATerm i_4 (ATerm t)
    {
      ATerm k_4 (ATerm t)
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Simplify_0_0(t);
            ;
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            {
              ATerm f_24 = t;
              int g_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
                  if(match_cons(t, sym_Seq_2))
                    {
                      v_30 = ATgetArgument(t, 0);
                      w_30 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = w_30;
                  if(match_cons(t, sym_Let_2))
                    {
                      x_30 = ATgetArgument(t, 0);
                      y_30 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Let_2, x_30, (ATerm) ATmakeAppl(sym_Seq_2, v_30, y_30));
                  ;
                  LocalPopChoice(g_24);
                }
              else
                {
                  t = f_24;
                  {
                    ATerm h_24 = t;
                    int i_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0_0(t);
                        ;
                        LocalPopChoice(i_24);
                      }
                    else
                      {
                        t = h_24;
                        {
                          ATerm l_24 = t;
                          int n_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = WhereSavesCurrentTerm_0_0(t);
                              ;
                              LocalPopChoice(n_24);
                            }
                          else
                            {
                              t = l_24;
                              t = TestSavesCurrentTerm_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1_0(k_4, t);
      return(t);
    }
    t = downup_1_0(i_4, t);
  }
  return(t);
}
ATerm union_1_0 (ATerm j_122 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__2))
    {
      g_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_31;
  {
    ATerm h_31 (ATerm t)
    {
      ATerm q_24 = t;
      int r_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_31;
          ;
          LocalPopChoice(r_24);
        }
      else
        {
          t = q_24;
          {
            ATerm c_25 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_4 = NULL,t_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_4 = ATgetFirst((ATermList) t);
                    t_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_31;
                {
                  ATerm l_4 (ATerm t)
                  {
                    ATerm v_4 = NULL;
                    v_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_4, v_4);
                    t = j_122(t);
                    return(t);
                  }
                  t = fetch_1_0(l_4, t);
                  t = t_4;
                  t = h_31(t);
                }
                ;
                LocalPopChoice(d_25);
              }
            else
              {
                t = c_25;
                t = Cons_2_0(_id, h_31, t);
              }
          }
        }
      return(t);
    }
    t = h_31(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm t)
{
  ATerm i_31 (ATerm t)
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_118(t);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = i_118(t);
        t = _2_0(k_118, i_31, t);
        t = j_118(t);
      }
    return(t);
  }
  t = i_31(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  j_31 = t;
  k_31 = t;
  t = SSL_explode_term(k_31);
  if(match_cons(t, sym__2))
    {
      m_31 = ATgetArgument(t, 0);
      n_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_31);
  o_31 = t;
  t = n_31;
  {
    ATerm m_4 (ATerm t)
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_22;
      return(t);
    }
    ATerm o_4 (ATerm t)
    {
      ATerm w_31 = NULL,x_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_31 = ATgetFirst((ATermList) t);
          x_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
      return(t);
    }
    ATerm p_4 (ATerm t)
    {
      ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm l_25 = ATgetArgument(t, 0);
          if(match_cons(l_25, sym__2))
            {
              y_31 = ATgetArgument(l_25, 0);
              a_32 = ATgetArgument(l_25, 1);
            }
          else
            _fail(t);
          {
            ATerm m_25 = ATgetArgument(t, 1);
            if(match_cons(m_25, sym__2))
              {
                z_31 = ATgetArgument(m_25, 0);
                b_32 = ATgetArgument(m_25, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_31), y_31), (ATerm) ATinsert(CheckATermList(b_32), a_32));
      return(t);
    }
    t = genzip_4_0(m_4, o_4, p_4, h_123, t);
    if(match_cons(t, sym__2))
      {
        p_31 = ATgetArgument(t, 0);
        q_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_mkterm(m_31, p_31);
    r_31 = t;
    t = SSLsetAnnotations(r_31, o_31);
    t = i_123(t);
    if(match_cons(t, sym__2))
      {
        s_31 = ATgetArgument(t, 0);
        t_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = q_31;
    {
      ATerm q_4 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        ATerm w_4 (ATerm t)
        {
          ATerm c_32 = NULL;
          if(match_cons(t, sym__2))
            {
              c_32 = ATgetArgument(t, 0);
              if((c_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = union_1_0(w_4, t);
        return(t);
      }
      t = foldr_2_0(q_4, u_4, t);
      u_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
      {
        ATerm x_4 (ATerm t)
        {
          ATerm d_32 = NULL;
          if(match_cons(t, sym__2))
            {
              d_32 = ATgetArgument(t, 0);
              if((d_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = union_1_0(x_4, t);
        v_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_31, v_31);
      }
    }
  }
  return(t);
}
ATerm collect_split_1_0 (ATerm e_124 (ATerm), ATerm t)
{
  ATerm g_32 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      ATerm o_25 = t;
      int p_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_124(t);
          ;
          LocalPopChoice(p_25);
        }
      else
        {
          t = o_25;
          {
            ATerm e_32 = NULL;
            e_32 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_32, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(g_32, y_4, t);
    return(t);
  }
  t = g_32(t);
  return(t);
}
ATerm lift_sdefs_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      i_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
      k_32 = ATgetArgument(t, 2);
      l_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = l_32;
  t = collect_split_1_0(LiftFromLet_0_0, t);
  if(match_cons(t, sym__2))
    {
      m_32 = ATgetArgument(t, 0);
      n_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_32, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, i_32, j_32, k_32, m_32)));
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_25 = ATgetArgument(t, 0);
            ATerm t_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_32;
        {
          ATerm z_4 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, i_32, j_32, k_32, m_32));
            return(t);
          }
          t = at_end_1_0(z_4, t);
        }
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        {
          ATerm b_5 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_32, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, i_32, j_32, k_32, m_32))));
          if(match_cons(t, sym__2))
            {
              ATerm w_25 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_5;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm h_126 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
  if(match_cons(t, sym__2))
    {
      r_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_126(t);
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_32, r_32, s_32);
  t = table_push_0_0(t);
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_32, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_32 = ATgetFirst((ATermList) t);
        v_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_32, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_32), (ATerm) ATinsert(CheckATermList(u_32), r_32)));
    t = (ATerm) ATmakeAppl(sym__2, r_32, s_32);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  z_32 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_32);
  w_32 = t;
  t = x_32;
  t = c_98(t);
  y_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, y_32), w_32);
  return(t);
}
ATerm Specification_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
  f_33 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_33);
  c_33 = t;
  t = d_33;
  t = h_98(t);
  e_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, e_33), c_33);
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      ATerm e_5 (ATerm t)
      {
        ATerm g_5 (ATerm t)
        {
          ATerm h_5 (ATerm t)
          {
            ATerm i_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                i_33 = ATgetArgument(t, 0);
                k_33 = ATgetArgument(t, 1);
                l_33 = ATgetArgument(t, 2);
                m_33 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, i_33, term_b_26);
            {
              ATerm i_5 (ATerm t)
              {
                t = term_d_26;
                return(t);
              }
              t = assert_1_0(i_5, t);
              t = (ATerm) ATmakeAppl(sym_SDefT_4, i_33, k_33, l_33, m_33);
            }
            return(t);
          }
          t = map_1_0(h_5, t);
          t = map_1_0(lift_sdefs_0_0, t);
          t = concat_0_0(t);
          return(t);
        }
        t = Strategies_1_0(g_5, t);
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(e_5, f_5, t);
      return(t);
    }
    t = Cons_2_0(_id, d_5, t);
    return(t);
  }
  t = Specification_1_0(a_5, t);
  return(t);
}
ATerm _2_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  s_33 = t;
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_33);
  n_33 = t;
  t = o_33;
  t = j_93(t);
  q_33 = t;
  t = p_33;
  t = k_93(t);
  r_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_33, r_33), n_33);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_135 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_33, term_e_26);
  t = open_stream_0_0(t);
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_33, w_33);
  t = o_135(t);
  t = fclose_0_0(t);
  t = w_33;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  y_33 = t;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((z_33 != NULL) && (z_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_5, t);
          ;
          LocalPopChoice(g_26);
        }
      else
        {
          t = f_26;
          t = term_h_26;
          if(((z_33 != NULL) && (z_33 != t)))
            _fail(t);
          else
            z_33 = t;
        }
      return(t);
    }
    t = _2_0(j_5, _id, t);
    t = y_33;
    {
      ATerm l_5 (ATerm t)
      {
        ATerm c_5 = NULL;
        c_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_33), c_5);
        return(t);
      }
      t = _2_0(_id, l_5, t);
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              ATerm o_5 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(o_5, t);
              return(t);
            }
            ATerm n_5 (ATerm t)
            {
              ATerm p_5 (ATerm t)
              {
                ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm k_26 = ATgetArgument(t, 0);
                    if(match_cons(k_26, sym_Stream_1))
                      {
                        a_34 = ATgetArgument(k_26, 0);
                      }
                    else
                      _fail(t);
                    b_34 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(a_34, b_34);
                c_34 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_34);
                return(t);
              }
              t = WriteToFile_1_0(p_5, t);
              return(t);
            }
            t = _2_0(m_5, n_5, t);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
              ATerm q_5 (ATerm t)
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm l_26 = ATgetArgument(t, 0);
                      if(match_cons(l_26, sym_Stream_1))
                        {
                          d_34 = ATgetArgument(l_26, 0);
                        }
                      else
                        _fail(t);
                      e_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(d_34, e_34);
                  f_34 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), f_34);
                  g_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, g_34);
                  return(t);
                }
                t = WriteToFile_1_0(u_5, t);
                return(t);
              }
              t = _2_0(_id, q_5, t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm q_138 (ATerm), ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
  h_34 = t;
  t = dtime_0_0(t);
  t = h_34;
  t = q_138(t);
  i_34 = t;
  t = dtime_0_0(t);
  j_34 = t;
  t = i_34;
  if(match_cons(t, sym__2))
    {
      k_34 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_34), (ATerm) ATmakeAppl(sym_Runtime_1, j_34)), l_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_35 (ATerm t_34, ATerm t)
  {
    t = SSL_fclose(t_34);
    return(t);
  }
  ATerm z_34 = NULL,a_35 = NULL;
  a_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_34 = ATgetArgument(t, 0);
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_34);
            ;
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            t = e_35(a_35, t);
          }
      }
    }
  else
    {
      t = e_35(a_35, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_35 = NULL;
  t = SSL_stdin_stream();
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_35 = NULL;
  t = SSL_stdout_stream();
  h_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_35 = NULL;
  t = SSL_stderr_stream();
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_35);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      ATerm q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_5 = NULL,s_5 = NULL;
        r_5 = t;
        t = SSL_explode_term(r_5);
        if(match_cons(t, sym__2))
          {
            ATerm t_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_26) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_26 = ATgetArgument(t, 1);
              if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
                {
                  s_5 = ATgetFirst((ATermList) u_26);
                  {
                    ATerm v_26 = (ATerm) ATgetNext((ATermList) u_26);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = s_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = s_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = s_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        {
          ATerm x_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
              ATerm v_5 (ATerm t)
              {
                ATerm r_35 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    r_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = r_35;
                return(t);
              }
              t = _2_0(v_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  o_35 = ATgetArgument(t, 0);
                  p_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(o_35, p_35);
              q_35 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, q_35);
              ;
              LocalPopChoice(y_26);
            }
          else
            {
              t = x_26;
              {
                ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
                ATerm w_5 (ATerm t)
                {
                  ATerm v_35 = NULL;
                  v_35 = t;
                  t = SSL_is_string(v_35);
                  return(t);
                }
                t = _2_0(w_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_35 = ATgetArgument(t, 0);
                    t_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(s_35, t_35);
                u_35 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, u_35);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_35 = NULL;
      z_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_35, term_b_27);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm t_5 = NULL;
        t_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = t_5;
        _fail(t);
      }
    }
  w_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(y_35);
  x_35 = t;
  t = w_35;
  t = fclose_0_0(t);
  t = x_35;
  return(t);
}
ATerm fetch_1_0 (ATerm h_120 (ATerm), ATerm t)
{
  ATerm e_36 (ATerm t)
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_120, _id, t);
        ;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = Cons_2_0(_id, e_36, t);
      }
    return(t);
  }
  t = e_36(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm h_36 = NULL,i_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_36 = ATgetFirst((ATermList) t);
            i_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_36;
        {
          ATerm x_5 (ATerm t)
          {
            t = i_36;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_120 (ATerm), ATerm t)
{
  ATerm o_36 (ATerm t)
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_36, t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_120(t);
      }
    return(t);
  }
  t = o_36(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm q_36 = NULL;
  ATerm a_6 (ATerm t)
  {
    ATerm r_36 = NULL;
    r_36 = t;
    t = SSL_explode_string(r_36);
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    ATerm s_36 = NULL;
    s_36 = t;
    t = SSL_explode_string(s_36);
    return(t);
  }
  t = _2_0(a_6, b_6, t);
  {
    ATerm i_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_36 = NULL,v_36 = NULL;
        if(match_cons(t, sym__2))
          {
            u_36 = ATgetArgument(t, 0);
            v_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_36;
        {
          ATerm c_6 (ATerm t)
          {
            t = v_36;
            return(t);
          }
          t = at_end_1_0(c_6, t);
        }
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = i_27;
        {
          ATerm y_5 = NULL,z_5 = NULL;
          y_5 = t;
          t = SSL_explode_term(y_5);
          if(match_cons(t, sym__2))
            {
              ATerm o_27 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_27) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_5;
          t = concat_0_0(t);
        }
      }
    q_36 = t;
    t = SSL_implode_string(q_36);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_37 = NULL;
      f_37 = t;
      t = SSL_is_string(f_37);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = p_27;
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 (ATerm t)
            {
              ATerm v_27 = t;
              int w_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(w_27);
                }
              else
                {
                  t = v_27;
                }
              return(t);
            }
            t = map_1_0(d_6, t);
            ;
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            {
              ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
              j_37 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_37 = ATgetArgument(t, 0);
                  t = k_37;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_37 = ATgetArgument(t, 0);
                      t = k_37;
                      {
                        ATerm x_27 = t;
                        int y_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_37);
                            {
                              ATerm z_27 = t;
                              int b_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_6 = NULL;
                                  t = eval_config_0_0(t);
                                  r_6 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_37, r_6);
                                  t = r_6;
                                  ;
                                  LocalPopChoice(b_28);
                                }
                              else
                                {
                                  t = z_27;
                                }
                            }
                            ;
                            LocalPopChoice(y_27);
                          }
                        else
                          {
                            t = x_27;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_37), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = k_37;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_37 = NULL,q_37 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_37 = ATgetArgument(t, 0);
                          l_37 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_37;
                      t = eval_config_0_0(t);
                      p_37 = t;
                      t = l_37;
                      t = eval_config_0_0(t);
                      q_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_37, q_37);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_136 (ATerm), ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_37 = NULL,x_37 = NULL;
      v_37 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_6 = NULL;
            t = eval_config_0_0(t);
            z_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_6);
            t = z_6;
            ;
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
          }
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_37, term_h_28);
        t = geq_0_0(t);
        t = v_37;
        t = s_136(t);
      }
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm z_37 = NULL;
    z_37 = t;
    if(match_string(t, "-k"))
      {
        t = z_37;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = z_37;
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    ATerm a_38 = NULL,b_38 = NULL;
    a_38 = t;
    t = SSL_string_to_int(a_38);
    b_38 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), b_38);
    t = a_38;
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  t = ArgOption_3_0(e_6, f_6, g_6, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_6 (ATerm t)
      {
        ATerm d_38 = NULL;
        d_38 = t;
        if(match_string(t, "-S"))
          {
            t = d_38;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = d_38;
          }
        return(t);
      }
      ATerm i_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_n_28;
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        t = term_q_28;
        return(t);
      }
      t = Option_3_0(h_6, i_6, j_6, t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm l_6 (ATerm t)
            {
              ATerm e_38 = NULL,f_38 = NULL;
              e_38 = t;
              t = SSL_string_to_int(e_38);
              f_38 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_38);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, e_38);
              return(t);
            }
            ATerm m_6 (ATerm t)
            {
              t = term_t_28;
              return(t);
            }
            t = ArgOption_3_0(k_6, l_6, m_6, t);
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            {
              ATerm n_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm o_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_28;
                return(t);
              }
              ATerm p_6 (ATerm t)
              {
                t = term_w_28;
                return(t);
              }
              t = Option_3_0(n_6, o_6, p_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_38 = NULL;
      t = term_m_8;
      t = d_0(t);
      k_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, k_38);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm n_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_38 = ATgetFirst((ATermList) t);
          j_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_38;
      t = a_0(t);
      t = term_m_8;
      t = c_0(t);
      n_38 = t;
      t = (ATerm) ATinsert(CheckATermList(j_38), n_38);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    ATerm p_38 = NULL;
    p_38 = t;
    if(match_string(t, "-o"))
      {
        t = p_38;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = p_38;
      }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    ATerm r_38 = NULL;
    r_38 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), r_38);
    t = (ATerm) ATmakeAppl(sym_Output_1, r_38);
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = term_z_28;
    return(t);
  }
  t = ArgOption_3_0(q_6, s_6, t_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  if(match_cons(t, sym__3))
    {
      u_38 = ATgetArgument(t, 0);
      v_38 = ATgetArgument(t, 1);
      w_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_38, v_38);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_38, v_38);
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATempty;
      }
    x_38 = t;
    t = SSL_table_put(u_38, v_38, (ATerm) ATinsert(CheckATermList(x_38), w_38));
    t = (ATerm) ATmakeAppl(sym__3, u_38, v_38, w_38);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_39 = NULL;
      t = term_m_8;
      t = l_0(t);
      j_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, j_39);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm n_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_39 = ATgetFirst((ATermList) t);
          g_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_39 = ATgetFirst((ATermList) t);
          i_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_39;
      t = i_0(t);
      t = h_39;
      t = k_0(t);
      n_39 = t;
      t = (ATerm) ATinsert(CheckATermList(i_39), n_39);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm p_39 = NULL;
    p_39 = t;
    if(match_string(t, "-i"))
      {
        t = p_39;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = p_39;
      }
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    ATerm q_39 = NULL;
    q_39 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), q_39);
    t = (ATerm) ATmakeAppl(sym_Input_1, q_39);
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = term_e_29;
    return(t);
  }
  t = ArgOption_3_0(u_6, v_6, w_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_8;
  t = whoami_0_0(t);
  r_39 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_39));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL;
        t = eval_config_0_0(t);
        d_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_7);
        t = d_7;
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_124(t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm u_39 = NULL,v_39 = NULL,i_40 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_39 = ATgetFirst((ATermList) t);
            v_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_39;
        t = foldr_2_0(w_124, x_124, t);
        i_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_39, i_40);
        t = x_124(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_40 = NULL,e_7 = NULL,f_7 = NULL;
  t = times_0_0(t);
  e_7 = t;
  t = SSL_explode_term(e_7);
  if(match_cons(t, sym__2))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7;
  {
    ATerm x_6 (ATerm t)
    {
      t = term_m_28;
      return(t);
    }
    ATerm y_6 (ATerm t)
    {
      ATerm j_7 = NULL,k_7 = NULL;
      if(match_cons(t, sym__2))
        {
          j_7 = ATgetArgument(t, 0);
          k_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm l_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_7, k_7);
            ;
            LocalPopChoice(n_29);
          }
        else
          {
            t = l_29;
            t = SSL_addr(j_7, k_7);
          }
      }
      return(t);
    }
    t = foldr_2_0(x_6, y_6, t);
    m_40 = t;
    t = SSL_TicksToSeconds(m_40);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
  z_40 = t;
  if(match_cons(t, sym__2))
    {
      a_41 = ATgetArgument(t, 0);
      b_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_41;
        if((a_41 != t))
          {
            _fail(t);
          }
        t = z_40;
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = o_29;
        t = z_40;
        {
          ATerm s_29 = t;
          int t_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_41, b_41);
              ;
              LocalPopChoice(t_29);
            }
          else
            {
              t = s_29;
              t = SSL_gtr(a_41, b_41);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_41, b_41);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_136 (ATerm), ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_41 = NULL,g_41 = NULL;
      e_41 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_7 = NULL;
            t = eval_config_0_0(t);
            x_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_7);
            t = x_7;
            ;
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
          }
        g_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_41, term_y_29);
        t = geq_0_0(t);
        t = e_41;
        t = r_136(t);
      }
      ;
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm j_41 = NULL,k_41 = NULL;
    t = run_time_0_0(t);
    j_41 = t;
    t = term_m_8;
    t = whoami_0_0(t);
    k_41 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), j_41), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), k_41));
    t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_30), j_41), term_d_30), k_41));
    return(t);
  }
  t = if_verbose1_1_0(a_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm o_139 (ATerm), ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm i_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_8 = NULL;
            t = eval_config_0_0(t);
            d_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), d_8);
            t = d_8;
            ;
            LocalPopChoice(l_30);
          }
        else
          {
            t = i_30;
          }
      }
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      {
        ATerm b_7 (ATerm t)
        {
          ATerm m_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(o_30);
            }
          else
            {
              t = m_30;
              {
                ATerm p_30 = t;
                int u_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(u_30);
                  }
                else
                  {
                    t = p_30;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(b_7, t);
      }
    }
  t = o_139(t);
  return(t);
}
ATerm map_1_0 (ATerm w_119 (ATerm), ATerm t)
{
  ATerm l_41 (ATerm t)
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = Cons_2_0(w_119, l_41, t);
      }
    return(t);
  }
  t = l_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_41 = ATgetFirst((ATermList) t);
      o_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_41 = NULL,t_41 = NULL;
        t = o_41;
        t = g_0(t);
        s_41 = t;
        t = n_41;
        t = e_0(t);
        t_41 = t;
        t = o_41;
        {
          ATerm c_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(s_41), t_41);
            return(t);
          }
          t = reverse_acc_2_0(e_0, c_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm q_110 (ATerm), ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
  x_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_41);
  u_41 = t;
  t = v_41;
  t = q_110(t);
  w_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, w_41), u_41);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm d_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL;
            t = eval_config_0_0(t);
            k_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_8);
            t = k_8;
            ;
            LocalPopChoice(e_31);
          }
        else
          {
            t = d_31;
          }
      }
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      {
        ATerm g_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(g_7, t);
      }
    }
  t = term_l_31;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm h_7 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, h_7, t);
    {
      ATerm i_7 (ATerm t)
      {
        ATerm a_42 = NULL;
        a_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_42), term_f_32);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(i_7, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  e_42 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_42);
  b_42 = t;
  t = c_42;
  t = r_110(t);
  d_42 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, d_42), b_42);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL;
  i_42 = t;
  {
    ATerm h_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_32 = ATgetFirst((ATermList) t);
                ATerm q_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_42;
          }
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATinsert(ATempty, i_42);
      }
    j_42 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), j_42);
    t = i_42;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_8 = NULL;
        t = eval_config_0_0(t);
        o_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_8);
        t = o_8;
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_u_33;
        return(t);
      }
      ATerm n_7 (ATerm t)
      {
        t = term_m_34;
        return(t);
      }
      t = Option_3_0(l_7, m_7, n_7, t);
      ;
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm o_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm p_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_n_34;
          return(t);
        }
        ATerm q_7 (ATerm t)
        {
          t = term_o_34;
          return(t);
        }
        t = Option_3_0(o_7, p_7, q_7, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
  s_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_42 = ATgetFirst((ATermList) t);
      p_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_42);
  n_42 = t;
  t = o_42;
  t = y_97(t);
  q_42 = t;
  t = p_42;
  t = z_97(t);
  r_42 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(r_42), q_42), n_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_141 (ATerm), ATerm t)
{
  ATerm w_42 = NULL;
  w_42 = t;
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_34;
        t = r_141(t);
        ;
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
      }
    t = w_42;
    {
      ATerm r_7 (ATerm t)
      {
        ATerm x_42 = NULL;
        x_42 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_42);
        t = (ATerm) ATmakeAppl(sym_Program_1, x_42);
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        ATerm s_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_34 = t;
            int w_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(w_34);
              }
            else
              {
                t = v_34;
                t = r_141(t);
                t = Cons_2_0(_id, s_7, t);
              }
            ;
            LocalPopChoice(u_34);
          }
        else
          {
            t = s_34;
            {
              ATerm b_43 = NULL,c_43 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_43 = ATgetFirst((ATermList) t);
                  c_43 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_43), (ATerm) ATmakeAppl(sym_Undefined_1, b_43));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_7, s_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm q_141 (ATerm), ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL;
  j_43 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = j_43;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm x_34 = t;
      int y_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_141(t);
          ;
          LocalPopChoice(y_34);
        }
      else
        {
          t = x_34;
          {
            ATerm b_35 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_7 (ATerm t)
                {
                  ATerm m_43 = NULL;
                  m_43 = t;
                  if(match_string(t, "--help"))
                    {
                      t = m_43;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = m_43;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = m_43;
                        }
                    }
                  return(t);
                }
                ATerm v_7 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_d_35;
                  return(t);
                }
                ATerm w_7 (ATerm t)
                {
                  t = term_g_35;
                  return(t);
                }
                t = Option_3_0(u_7, v_7, w_7, t);
                ;
                LocalPopChoice(c_35);
              }
            else
              {
                t = b_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_7, t);
    {
      ATerm i_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_43 = NULL;
          s_43 = t;
          {
            ATerm l_35 = t;
            int m_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = s_43;
                {
                  ATerm n_35 = t;
                  int a_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm b_36 = t;
                        int c_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_9 = NULL;
                            t = eval_config_0_0(t);
                            g_9 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), g_9);
                            t = g_9;
                            ;
                            LocalPopChoice(c_36);
                          }
                        else
                          {
                            t = b_36;
                          }
                      }
                      ;
                      LocalPopChoice(a_36);
                    }
                  else
                    {
                      t = n_35;
                      {
                        ATerm y_7 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(y_7, t);
                      }
                    }
                  t = s_43;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(m_35);
              }
            else
              {
                t = l_35;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm d_36 = t;
                  int f_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_9 = NULL;
                      t = eval_config_0_0(t);
                      n_9 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), n_9);
                      t = n_9;
                      ;
                      LocalPopChoice(f_36);
                    }
                  else
                    {
                      t = d_36;
                    }
                  t = s_43;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(k_35);
        }
      else
        {
          t = i_35;
          {
            ATerm g_36 = t;
            int j_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_7 (ATerm t)
                {
                  ATerm a_8 (ATerm t)
                  {
                    if(((k_43 != NULL) && (k_43 != t)))
                      _fail(t);
                    else
                      k_43 = t;
                    return(t);
                  }
                  t = Undefined_1_0(a_8, t);
                  return(t);
                }
                t = fetch_1_0(z_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(k_43)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_43)), term_k_36));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(j_36);
              }
            else
              {
                t = g_36;
              }
          }
        }
      l_43 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = l_43;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm t)
{
  ATerm w_43 = NULL;
  t = parse_options_1_0(q_139, t);
  w_43 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), w_43);
  t = w_43;
  t = s_139(t);
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_139, t);
        ;
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        {
          ATerm n_36 = t;
          int p_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_139(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_36);
            }
          else
            {
              t = n_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm), ATerm b_139 (ATerm), ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    ATerm t_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_139(t);
        ;
        LocalPopChoice(w_36);
      }
    else
      {
        t = t_36;
        {
          ATerm x_36 = t;
          int y_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(y_36);
            }
          else
            {
              t = x_36;
              {
                ATerm z_36 = t;
                int a_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(a_37);
                  }
                else
                  {
                    t = z_36;
                    {
                      ATerm b_37 = t;
                      int c_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_8 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm g_8 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_d_37;
                            return(t);
                          }
                          ATerm h_8 (ATerm t)
                          {
                            t = term_e_37;
                            return(t);
                          }
                          t = Option_3_0(f_8, g_8, h_8, t);
                          ;
                          LocalPopChoice(c_37);
                        }
                      else
                        {
                          t = b_37;
                          {
                            ATerm g_37 = t;
                            int h_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(h_37);
                              }
                            else
                              {
                                t = g_37;
                                t = keep_option_0_0(t);
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
  ATerm c_8 (ATerm t)
  {
    ATerm i_8 (ATerm t)
    {
      ATerm x_43 = NULL,z_43 = NULL;
      x_43 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm i_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_9 = NULL;
            t = eval_config_0_0(t);
            r_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_9);
            t = r_9;
            ;
            LocalPopChoice(m_37);
          }
        else
          {
            t = i_37;
          }
        z_43 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, z_43));
        t = x_43;
      }
      return(t);
    }
    t = if_verbose2_1_0(i_8, t);
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    ATerm a_44 = NULL,b_44 = NULL,v_9 = NULL;
    a_44 = t;
    {
      ATerm n_37 = t;
      int o_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_44 != NULL) && (b_44 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_8, t);
          ;
          LocalPopChoice(o_37);
        }
      else
        {
          t = n_37;
          t = term_r_37;
          b_44 = t;
        }
      t = not_null(b_44);
      t = ReadFromFile_0_0(t);
      v_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_44, v_9);
      t = apply_strategy_1_0(z_138, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(b_8, b_139, c_8, e_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm l_8 (ATerm t)
  {
    t = _2_0(_id, lift_definitions_0_0, t);
    return(t);
  }
  t = iowrap_3_0(l_8, _fail, default_usage_0_0, t);
  return(t);
}
