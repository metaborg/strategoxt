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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_l_26;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_o_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_v_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_j_17;
ATerm term_d_13;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_x_10;
void init_constant_terms (void)
{
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Op_2, term_q_12, (ATerm) ATempty);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__3, term_o_22, term_a_23, term_j_17);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm isect_1_0 (ATerm i_122 (ATerm), ATerm);
ATerm isect_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm r_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm o_122 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm);
ATerm crush_3_0 (ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm);
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm CleanupScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_114 (ATerm), ATerm);
ATerm simplify_clean_0_0 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm);
ATerm zip_1_0 (ATerm c_119 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_115 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm F10_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm Optimize_0_0 (ATerm);
ATerm repeat_1_0 (ATerm w_130 (ATerm), ATerm);
ATerm downup_1_0 (ATerm n_114 (ATerm), ATerm);
ATerm simplify_widen_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm c_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm apply_to_bodies_1_0 (ATerm m_112 (ATerm), ATerm);
ATerm _2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm d_121 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_137 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm k_136 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_139 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_135 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm);
ATerm crush_2_0 (ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_137 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm k_140 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_120 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm g_112 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_112 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm x_120 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_141 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm d_117 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_142 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_142 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm m_142 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm q_139 (ATerm), ATerm);
ATerm optimize2_comp_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm isect_1_0 (ATerm i_122 (ATerm), ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL;
  if(match_cons(t, sym__2))
    {
      j_0 = ATgetArgument(t, 0);
      h_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_0;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm f_7 = t;
      int g_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(g_7);
        }
      else
        {
          t = f_7;
          {
            ATerm m_0 = NULL,p_0 = NULL;
            m_0 = t;
            {
              ATerm h_7 = t;
              int i_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm j_7 = ATgetFirst((ATermList) t);
                      p_0 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_7);
                  {
                    ATerm k_7 = t;
                    int l_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_0;
                        {
                          ATerm b_0 (ATerm t)
                          {
                            t = h_0;
                            return(t);
                          }
                          t = HdMember_p__2_0(i_122, b_0, t);
                          t = m_0;
                          t = Cons_2_0(_id, u_0, t);
                        }
                        ;
                        LocalPopChoice(l_7);
                      }
                    else
                      {
                        t = k_7;
                        t = p_0;
                        t = u_0(t);
                      }
                  }
                }
              else
                {
                  t = h_7;
                  t = m_0;
                  {
                    ATerm o_0 (ATerm t)
                    {
                      t = h_0;
                      return(t);
                    }
                    t = HdMember_p__2_0(i_122, o_0, t);
                    t = m_0;
                    t = Cons_2_0(_id, u_0, t);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = u_0(t);
  }
  return(t);
}
ATerm isect_0_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm v_0 = NULL;
    if(match_cons(t, sym__2))
      {
        v_0 = ATgetArgument(t, 0);
        if((v_0 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = isect_1_0(q_0, t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  z_0 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      x_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_0);
  w_0 = t;
  t = x_0;
  t = r_101(t);
  y_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, y_0), w_0);
  return(t);
}
ATerm RDefT_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,n_1 = NULL,p_1 = NULL,s_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      d_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
      h_1 = ATgetArgument(t, 2);
      j_1 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_1);
  c_1 = t;
  t = d_1;
  t = i_101(t);
  k_1 = t;
  t = e_1;
  t = j_101(t);
  l_1 = t;
  t = h_1;
  t = k_101(t);
  n_1 = t;
  t = j_1;
  t = l_101(t);
  p_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, k_1, l_1, n_1, p_1), c_1);
  return(t);
}
ATerm Scope_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,g_2 = NULL,k_2 = NULL,n_2 = NULL,o_2 = NULL,q_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_2);
  b_2 = t;
  t = g_2;
  t = u_102(t);
  n_2 = t;
  t = k_2;
  t = v_102(t);
  o_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, n_2, o_2), b_2);
  return(t);
}
ATerm tboundin_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm m_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(o_113, m_113, t);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = m_7;
      {
        ATerm q_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(o_113, o_113, o_113, m_113, t);
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = q_7;
            {
              ATerm t_7 = t;
              int u_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(o_113, o_113, o_113, m_113, t);
                  ;
                  LocalPopChoice(u_7);
                }
              else
                {
                  t = t_7;
                  t = DynamicRules_1_0(m_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm u_2 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      ATerm x_7 = ATgetArgument(t, 1);
      u_2 = ATgetArgument(t, 2);
      {
        ATerm y_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = u_2;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm y_2 = NULL;
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            y_2 = ATgetArgument(t, 0);
            {
              ATerm b_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_8);
        t = y_2;
      }
    else
      {
        t = z_7;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            y_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_2;
      }
    return(t);
  }
  t = map_1_0(r_0, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm c_3 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      ATerm d_8 = ATgetArgument(t, 1);
      c_3 = ATgetArgument(t, 2);
      {
        ATerm e_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = c_3;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm d_3 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      d_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_3;
  t = tvars_0_0(t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm j_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      n_3 = ATgetArgument(t, 0);
      t = n_3;
      if(match_cons(t, sym_Rule_3))
        {
          j_3 = ATgetArgument(t, 0);
          {
            ATerm i_8 = ATgetArgument(t, 1);
          }
          {
            ATerm l_8 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_3;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          n_3 = ATgetArgument(t, 0);
          {
            ATerm m_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_3;
    }
  return(t);
}
ATerm union_1_0 (ATerm o_122 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm n_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_3;
          ;
          LocalPopChoice(o_8);
        }
      else
        {
          t = n_8;
          {
            ATerm p_8 = t;
            int q_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_0 (ATerm t)
                {
                  t = t_3;
                  return(t);
                }
                t = HdMember_p__2_0(o_122, s_0, t);
                t = v_3(t);
                ;
                LocalPopChoice(q_8);
              }
            else
              {
                t = p_8;
                t = Cons_2_0(_id, v_3, t);
              }
          }
        }
      return(t);
    }
    t = v_3(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm w_3 = NULL;
    if(match_cons(t, sym__2))
      {
        w_3 = ATgetArgument(t, 0);
        if((w_3 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(t_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_125(t);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm b_4 = NULL,c_4 = NULL,g_5 = NULL,u_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_4 = ATgetFirst((ATermList) t);
            c_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_4;
        t = f_125(t);
        g_5 = t;
        t = c_4;
        t = foldr_3_0(d_125, e_125, f_125, t);
        u_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, u_5);
        t = e_125(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t)
{
  ATerm a_6 = NULL,p_6 = NULL;
  a_6 = t;
  t = SSL_explode_term(a_6);
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6;
  t = foldr_3_0(b_123, c_123, d_123, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm t)
{
  ATerm r_6 = NULL,t_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_6 = ATgetFirst((ATermList) t);
      t_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_122(t);
  {
    ATerm a_1 (ATerm t)
    {
      ATerm v_6 = NULL;
      v_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_6, v_6);
      t = s_122(t);
      return(t);
    }
    t = fetch_1_0(a_1, t);
    t = t_6;
  }
  return(t);
}
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm t)
{
  ATerm a_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym__2))
    {
      n_7 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7;
  {
    ATerm p_7 (ATerm t)
    {
      ATerm v_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(w_8);
        }
      else
        {
          t = v_8;
          {
            ATerm x_8 = t;
            int y_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_1 (ATerm t)
                {
                  t = a_7;
                  return(t);
                }
                t = HdMember_p__2_0(k_122, b_1, t);
                t = p_7(t);
                ;
                LocalPopChoice(y_8);
              }
            else
              {
                t = x_8;
                t = Cons_2_0(_id, p_7, t);
              }
          }
        }
      return(t);
    }
    t = p_7(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm r_7 = NULL,w_7 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,j_8 = NULL,k_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_8 = ATgetFirst((ATermList) t);
      if(match_cons(z_8, sym__2))
        {
          r_7 = ATgetArgument(z_8, 0);
          w_7 = ATgetArgument(z_8, 1);
        }
      else
        _fail(t);
      f_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_7);
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_7);
  if(match_cons(t, sym__2))
    {
      if((g_8 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_8, h_8);
  t = zip_1_0(_id, t);
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_8, f_8);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm t)
{
  ATerm u_8 (ATerm t)
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_131(t);
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = m_131(t);
        t = u_8(t);
      }
    return(t);
  }
  t = u_8(t);
  return(t);
}
ATerm for_3_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm t)
{
  t = o_131(t);
  t = while_not_2_0(p_131, q_131, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm c_9 = NULL;
        c_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_9);
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, m_1, t);
        return(t);
      }
      ATerm i_1 (ATerm t)
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm h_9 = t;
              int i_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_9 = NULL,o_9 = NULL,q_9 = NULL,r_9 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_9 = ATgetFirst((ATermList) t);
                      r_9 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = l_9;
                  if(match_cons(t, sym__2))
                    {
                      o_9 = ATgetArgument(t, 0);
                      q_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_9;
                  if((o_9 != t))
                    {
                      _fail(t);
                    }
                  t = r_9;
                  ;
                  LocalPopChoice(i_9);
                }
              else
                {
                  t = h_9;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, o_1, t);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,p_10 = NULL;
              if(match_cons(t, sym__2))
                {
                  f_10 = ATgetArgument(t, 0);
                  g_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_10;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_10 = ATgetFirst((ATermList) t);
                  p_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_10), h_10), p_10);
            }
          }
        return(t);
      }
      t = for_3_0(f_1, g_1, i_1, t);
      ;
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm q_1 (ATerm t)
        {
          ATerm f_11 = NULL;
          if(match_cons(t, sym__2))
            {
              f_11 = ATgetArgument(t, 0);
              if((f_11 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(q_1, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm l_11 (ATerm t)
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_129(t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm m_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_11 = NULL,k_11 = NULL;
              i_11 = t;
              t = g_129(t);
              k_11 = t;
              t = i_11;
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = k_11;
                    return(t);
                  }
                  t = split_2_0(l_11, u_1, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm t_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = h_129(r_1, l_11, t_1, t);
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(v_1, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(n_9);
            }
          else
            {
              t = m_9;
              {
                ATerm w_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(w_1, union_0_0, l_11, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_11(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm m_11 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        m_11 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, m_11);
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm p_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = p_9;
        {
          ATerm t_9 = t;
          int u_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(u_9);
            }
          else
            {
              t = t_9;
              {
                ATerm v_9 = t;
                int w_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(w_9);
                  }
                else
                  {
                    t = v_9;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(z_1, a_2, tboundin_3_0, t);
  return(t);
}
ATerm CleanupScope_0_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,s_11 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      n_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11;
  t = tvars_0_0(t);
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, p_11);
  t = isect_0_0(t);
  s_11 = t;
  {
    ATerm x_9 = t;
    if((PushChoice() == 0))
      {
        if((n_11 != t))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_9;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, o_11);
  }
  return(t);
}
ATerm topdown_1_0 (ATerm l_114 (ATerm), ATerm t)
{
  t = l_114(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = topdown_1_0(l_114, t);
      return(t);
    }
    t = SRTS_all(c_2, t);
  }
  return(t);
}
ATerm simplify_clean_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      t = CleanupScope_0_0(t);
      t = try_1_0(FuseScope_0_0, t);
      return(t);
    }
    t = try_1_0(e_2, t);
    return(t);
  }
  t = topdown_1_0(d_2, t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = repeat_1_0(Optimize_0_0, t);
    return(t);
  }
  t = downup_1_0(f_2, t);
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      d_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12;
  if(match_cons(t, sym_Scope_2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
      t = d_12;
      if(match_cons(t, sym_Scope_2))
        {
          e_12 = ATgetArgument(t, 0);
          f_12 = ATgetArgument(t, 1);
          {
            ATerm y_9 = t;
            int z_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, a_12, (ATerm) ATmakeAppl(sym_Seq_2, d_12, b_12));
                ;
                LocalPopChoice(z_9);
              }
            else
              {
                t = y_9;
                t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, a_12, (ATerm) ATmakeAppl(sym_Seq_2, d_12, b_12));
        }
    }
  else
    {
      t = d_12;
      if(match_cons(t, sym_Scope_2))
        {
          e_12 = ATgetArgument(t, 0);
          f_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12));
    }
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      t_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_12)), (ATerm) ATmakeAppl(sym_Seq_2, t_12, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_12)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      v_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_12)), (ATerm) ATmakeAppl(sym_Seq_2, v_12, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_12)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      x_12 = ATgetArgument(t, 0);
      {
        ATerm a_10 = ATgetArgument(t, 1);
        if(match_cons(a_10, sym_Scope_2))
          {
            y_12 = ATgetArgument(a_10, 0);
            z_12 = ATgetArgument(a_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_12, y_12);
  t = conc_0_0(t);
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, a_13, z_12);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,j_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_13;
  if(match_cons(t, sym_Build_1))
    {
      ATerm b_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_13;
  if(match_cons(t, sym_Where_1))
    {
      m_13 = ATgetArgument(t, 0);
      t = m_13;
      if(match_cons(t, sym_Prim_2))
        {
          g_13 = ATgetArgument(t, 0);
          h_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          m_13 = ATgetArgument(t, 0);
          n_13 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, m_13, n_13);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              m_13 = ATgetArgument(t, 0);
              n_13 = ATgetArgument(t, 1);
              o_13 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t)
{
  ATerm w_13 (ATerm t)
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_118(t);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = y_118(t);
        t = _2_0(a_119, w_13, t);
        t = z_118(t);
      }
    return(t);
  }
  t = w_13(t);
  return(t);
}
ATerm zip_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm e_10 = ATgetArgument(t, 0);
        if(((ATgetType(e_10) != AT_LIST) || !(ATisEmpty(e_10))))
          _fail(t);
        {
          ATerm i_10 = ATgetArgument(t, 1);
          if(((ATgetType(i_10) != AT_LIST) || !(ATisEmpty(i_10))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,c_14 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_10 = ATgetArgument(t, 0);
        if(((ATgetType(j_10) == AT_LIST) && !(ATisEmpty(j_10))))
          {
            x_13 = ATgetFirst((ATermList) j_10);
            z_13 = (ATerm) ATgetNext((ATermList) j_10);
          }
        else
          _fail(t);
        {
          ATerm k_10 = ATgetArgument(t, 1);
          if(((ATgetType(k_10) == AT_LIST) && !(ATisEmpty(k_10))))
            {
              y_13 = ATgetFirst((ATermList) k_10);
              c_14 = (ATerm) ATgetNext((ATermList) k_10);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_13, y_13), (ATerm) ATmakeAppl(sym__2, z_13, c_14));
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm d_14 = NULL,e_14 = NULL;
    if(match_cons(t, sym__2))
      {
        d_14 = ATgetArgument(t, 0);
        e_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(e_14), d_14);
    return(t);
  }
  t = genzip_4_0(h_2, i_2, j_2, c_119, t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(match_cons(l_10, sym_Build_1))
        {
          ATerm n_10 = ATgetArgument(l_10, 0);
          if(match_cons(n_10, sym_Op_2))
            {
              g_14 = ATgetArgument(n_10, 0);
              f_14 = ATgetArgument(n_10, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm m_10 = ATgetArgument(t, 1);
        if(match_cons(m_10, sym_Match_1))
          {
            ATerm o_10 = ATgetArgument(m_10, 0);
            if(match_cons(o_10, sym_Op_2))
              {
                if((g_14 != ATgetArgument(o_10, 0)))
                  {
                    _fail(ATgetArgument(o_10, 0));
                  }
                h_14 = ATgetArgument(o_10, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, f_14, h_14);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm j_14 = NULL,k_14 = NULL;
      if(match_cons(t, sym__2))
        {
          j_14 = ATgetArgument(t, 0);
          k_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_14), (ATerm) ATmakeAppl(sym_Match_1, k_14));
      return(t);
    }
    t = zip_1_0(l_2, t);
    i_14 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_14), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, g_14, f_14)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if(match_cons(q_10, sym_Build_1))
        {
          ATerm s_10 = ATgetArgument(q_10, 0);
          if(match_cons(s_10, sym_Op_2))
            {
              l_14 = ATgetArgument(s_10, 0);
              {
                ATerm t_10 = ATgetArgument(s_10, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm r_10 = ATgetArgument(t, 1);
        if(match_cons(r_10, sym_Match_1))
          {
            ATerm u_10 = ATgetArgument(r_10, 0);
            if(match_cons(u_10, sym_Op_2))
              {
                m_14 = ATgetArgument(u_10, 0);
                {
                  ATerm v_10 = ATgetArgument(u_10, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, l_14, m_14);
  {
    ATerm w_10 = t;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL;
        if(match_cons(t, sym__2))
          {
            n_14 = ATgetArgument(t, 0);
            if((n_14 != ATgetArgument(t, 1)))
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
        t = w_10;
      }
    t = term_x_10;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm c_11 = t;
              int d_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_14 = NULL,y_14 = NULL,z_14 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      w_14 = ATgetArgument(t, 0);
                      y_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = w_14;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm e_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = y_14;
                  if(match_cons(t, sym_Build_1))
                    {
                      z_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(d_11);
                }
              else
                {
                  t = c_11;
                  {
                    ATerm g_11 = t;
                    int h_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(h_11);
                      }
                    else
                      {
                        t = g_11;
                        {
                          ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              c_15 = ATgetArgument(t, 0);
                              e_15 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = c_15;
                          if(match_cons(t, sym_Match_1))
                            {
                              d_15 = ATgetArgument(t, 0);
                              t = e_15;
                              if(match_cons(t, sym_Match_1))
                                {
                                  f_15 = ATgetArgument(t, 0);
                                  t = f_15;
                                  if((d_15 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, d_15);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      f_15 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_15;
                                  if((d_15 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, d_15);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  d_15 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = e_15;
                              if(match_cons(t, sym_Match_1))
                                {
                                  f_15 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = f_15;
                              if((d_15 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, d_15);
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
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_15;
  if(match_cons(t, sym_Seq_2))
    {
      l_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
      {
        ATerm j_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_15 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, o_15, l_15);
            t = BMF_0_0(t);
            t_15 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, t_15, m_15);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = j_11;
            t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm y_15 (ATerm t)
  {
    ATerm r_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_115(t);
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = r_11;
        t = SRTS_one(y_15, t);
      }
    return(t);
  }
  t = y_15(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
        {
          ATerm w_11 = ATgetFirst((ATermList) u_11);
          if(match_cons(w_11, sym_SDefT_4))
            {
              a_16 = ATgetArgument(w_11, 0);
              {
                ATerm y_11 = ATgetArgument(w_11, 1);
                if(((ATgetType(y_11) != AT_LIST) || !(ATisEmpty(y_11))))
                  _fail(t);
              }
              {
                ATerm z_11 = ATgetArgument(w_11, 2);
                if(((ATgetType(z_11) != AT_LIST) || !(ATisEmpty(z_11))))
                  _fail(t);
              }
              z_15 = ATgetArgument(w_11, 3);
            }
          else
            _fail(t);
          {
            ATerm x_11 = (ATerm) ATgetNext((ATermList) u_11);
            if(((ATgetType(x_11) != AT_LIST) || !(ATisEmpty(x_11))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm v_11 = ATgetArgument(t, 1);
        if(match_cons(v_11, sym_CallT_3))
          {
            ATerm c_12 = ATgetArgument(v_11, 0);
            if(match_cons(c_12, sym_SVar_1))
              {
                if((a_16 != ATgetArgument(c_12, 0)))
                  {
                    _fail(ATgetArgument(c_12, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm h_12 = ATgetArgument(v_11, 1);
              if(((ATgetType(h_12) != AT_LIST) || !(ATisEmpty(h_12))))
                _fail(t);
            }
            {
              ATerm i_12 = ATgetArgument(v_11, 2);
              if(((ATgetType(i_12) != AT_LIST) || !(ATisEmpty(i_12))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_15;
  {
    ATerm j_12 = t;
    if((PushChoice() == 0))
      {
        ATerm m_2 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm k_12 = ATgetArgument(t, 0);
              if(match_cons(k_12, sym_SVar_1))
                {
                  if((a_16 != ATgetArgument(k_12, 0)))
                    {
                      _fail(ATgetArgument(k_12, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm l_12 = ATgetArgument(t, 1);
                if(((ATgetType(l_12) != AT_LIST) || !(ATisEmpty(l_12))))
                  _fail(t);
              }
              {
                ATerm m_12 = ATgetArgument(t, 2);
                if(((ATgetType(m_12) != AT_LIST) || !(ATisEmpty(m_12))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(m_2, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_12;
      }
    t = z_15;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,p_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      p_16 = ATgetArgument(t, 0);
      t = p_16;
      if(match_cons(t, sym_Seq_2))
        {
          n_16 = ATgetArgument(t, 0);
          j_16 = ATgetArgument(t, 1);
          t = n_16;
          if(match_cons(t, sym_Where_1))
            {
              i_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_16;
          if(match_cons(t, sym_Seq_2))
            {
              k_16 = ATgetArgument(t, 0);
              m_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_16;
          if(match_cons(t, sym_Build_1))
            {
              l_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, i_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_16), m_16)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              n_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          p_16 = ATgetArgument(t, 0);
          t = p_16;
          if(match_cons(t, sym_Test_1))
            {
              n_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              p_16 = ATgetArgument(t, 0);
              t = p_16;
              if(match_cons(t, sym_Not_1))
                {
                  n_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, n_16);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  p_16 = ATgetArgument(t, 0);
                  q_16 = ATgetArgument(t, 1);
                  t = q_16;
                  if((p_16 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      p_16 = ATgetArgument(t, 0);
                      q_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_16;
                  if((p_16 != t))
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
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      e_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      t = e_17;
      if(match_cons(t, sym_LChoice_2))
        {
          f_17 = ATgetArgument(t, 0);
          g_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, f_17, (ATerm) ATmakeAppl(sym_LChoice_2, g_17, h_17));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          e_17 = ATgetArgument(t, 0);
          h_17 = ATgetArgument(t, 1);
          t = e_17;
          if(match_cons(t, sym_Seq_2))
            {
              f_17 = ATgetArgument(t, 0);
              g_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, f_17, (ATerm) ATmakeAppl(sym_Seq_2, g_17, h_17));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              e_17 = ATgetArgument(t, 0);
              h_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_17;
          if(match_cons(t, sym_Choice_2))
            {
              f_17 = ATgetArgument(t, 0);
              g_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, f_17, (ATerm) ATmakeAppl(sym_Choice_2, g_17, h_17));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm p_2 (ATerm t)
        {
          ATerm r_2 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(r_2, t);
          return(t);
        }
        t = Cons_2_0(_id, p_2, t);
      }
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm s_2 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, s_2, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,a_18 = NULL,b_18 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      a_18 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, a_18, b_18);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          a_18 = ATgetArgument(t, 0);
          t = a_18;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_17 = ATgetFirst((ATermList) t);
              w_17 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_17, (ATerm) ATmakeAppl(sym_LChoices_1, w_17));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_x_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              a_18 = ATgetArgument(t, 0);
              t = a_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_17 = ATgetFirst((ATermList) t);
                  w_17 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_17, (ATerm) ATmakeAppl(sym_Choices_1, w_17));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_x_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  a_18 = ATgetArgument(t, 0);
                  t = a_18;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_17 = ATgetFirst((ATermList) t);
                      w_17 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_17, (ATerm) ATmakeAppl(sym_Seqs_1, w_17));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_p_12;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_18 = ATgetArgument(t, 0);
                      b_18 = ATgetArgument(t, 1);
                      y_17 = ATgetArgument(t, 2);
                      x_17 = ATgetArgument(t, 3);
                      {
                        ATerm o_18 = NULL,p_18 = NULL;
                        t = b_18;
                        {
                          ATerm t_2 (ATerm t)
                          {
                            ATerm q_18 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                q_18 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, q_18, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_12), term_s_12));
                            return(t);
                          }
                          t = map1_1_0(t_2, t);
                          o_18 = t;
                          t = y_17;
                          {
                            ATerm v_2 (ATerm t)
                            {
                              ATerm w_2 (ATerm t)
                              {
                                ATerm r_18 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    r_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, r_18, term_s_12);
                                return(t);
                              }
                              t = try_1_0(w_2, t);
                              return(t);
                            }
                            t = map1_1_0(v_2, t);
                            p_18 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_18, o_18, p_18, x_17);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          a_18 = ATgetArgument(t, 0);
                          b_18 = ATgetArgument(t, 1);
                          y_17 = ATgetArgument(t, 2);
                          x_17 = ATgetArgument(t, 3);
                          {
                            ATerm b_13 = t;
                            int c_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm w_18 = NULL,x_18 = NULL;
                                t = y_17;
                                {
                                  ATerm x_2 (ATerm t)
                                  {
                                    ATerm y_18 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        y_18 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, y_18, term_s_12);
                                    return(t);
                                  }
                                  t = map1_1_0(x_2, t);
                                  w_18 = t;
                                  t = b_18;
                                  {
                                    ATerm z_2 (ATerm t)
                                    {
                                      ATerm a_3 (ATerm t)
                                      {
                                        ATerm z_18 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            z_18 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_18, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_12), term_s_12));
                                        return(t);
                                      }
                                      t = try_1_0(a_3, t);
                                      return(t);
                                    }
                                    t = map_1_0(z_2, t);
                                    x_18 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, a_18, x_18, w_18, x_17);
                                  }
                                }
                                ;
                                LocalPopChoice(c_13);
                              }
                            else
                              {
                                t = b_13;
                                {
                                  ATerm e_19 = NULL,f_19 = NULL;
                                  t = b_18;
                                  {
                                    ATerm b_3 (ATerm t)
                                    {
                                      ATerm g_19 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          g_19 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, g_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_12), term_s_12));
                                      return(t);
                                    }
                                    t = map1_1_0(b_3, t);
                                    e_19 = t;
                                    t = y_17;
                                    {
                                      ATerm e_3 (ATerm t)
                                      {
                                        ATerm f_3 (ATerm t)
                                        {
                                          ATerm h_19 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              h_19 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, h_19, term_s_12);
                                          return(t);
                                        }
                                        t = try_1_0(f_3, t);
                                        return(t);
                                      }
                                      t = map_1_0(e_3, t);
                                      f_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, a_18, e_19, f_19, x_17);
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
                              a_18 = ATgetArgument(t, 0);
                              b_18 = ATgetArgument(t, 1);
                              y_17 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, b_18, (ATerm) ATmakeAppl(sym_Op_2, term_d_13, (ATerm) ATinsert(ATinsert(ATempty, y_17), a_18)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  a_18 = ATgetArgument(t, 0);
                                  b_18 = ATgetArgument(t, 1);
                                  y_17 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, y_17)), a_18), (ATerm) ATmakeAppl(sym_Build_1, b_18)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      a_18 = ATgetArgument(t, 0);
                                      b_18 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_18, (ATerm) ATmakeAppl(sym_Match_1, b_18));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          a_18 = ATgetArgument(t, 0);
                                          b_18 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_18), b_18);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              a_18 = ATgetArgument(t, 0);
                                              b_18 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_18), a_18);
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
ATerm F10_0_0 (ATerm t)
{
  ATerm u_19 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_19;
  {
    ATerm g_3 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(g_3, t);
    t = term_x_10;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm f_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_20 = NULL,p_20 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          o_20 = ATgetArgument(t, 0);
          t = o_20;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              o_20 = ATgetArgument(t, 0);
              t = o_20;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_p_12;
            }
          else
            {
              ATerm k_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      o_20 = ATgetArgument(t, 0);
                      {
                        ATerm q_13 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_13);
                  t = o_20;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = k_13;
                  {
                    ATerm r_13 = t;
                    int s_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm t_13 = ATgetArgument(t, 0);
                            p_20 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_13);
                        t = p_20;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = r_13;
                        {
                          ATerm u_13 = t;
                          int v_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm a_14 = ATgetArgument(t, 0);
                                  p_20 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(v_13);
                              t = p_20;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = u_13;
                              if(match_cons(t, sym_Some_1))
                                {
                                  o_20 = ATgetArgument(t, 0);
                                  t = o_20;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      o_20 = ATgetArgument(t, 0);
                                      t = o_20;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm b_14 = ATgetArgument(t, 0);
                                          p_20 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = p_20;
                                      if(!(match_cons(t, sym_Fail_0)))
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
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = f_13;
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            {
              ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  r_20 = ATgetArgument(t, 0);
                  s_20 = ATgetArgument(t, 1);
                  t = s_20;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = r_20;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm q_14 = t;
                          int r_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = s_20;
                              ;
                              LocalPopChoice(r_14);
                            }
                          else
                            {
                              t = q_14;
                              t = r_20;
                            }
                        }
                      else
                        {
                          t = r_20;
                        }
                    }
                  else
                    {
                      t = r_20;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = s_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      r_20 = ATgetArgument(t, 0);
                      s_20 = ATgetArgument(t, 1);
                      t = s_20;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = r_20;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm s_14 = t;
                              int t_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = s_20;
                                  ;
                                  LocalPopChoice(t_14);
                                }
                              else
                                {
                                  t = s_14;
                                  t = r_20;
                                }
                            }
                          else
                            {
                              t = r_20;
                            }
                        }
                      else
                        {
                          t = r_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = s_20;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          r_20 = ATgetArgument(t, 0);
                          t = r_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              r_20 = ATgetArgument(t, 0);
                              s_20 = ATgetArgument(t, 1);
                              t_20 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = t_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_20, s_20);
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
  ATerm q_21 = NULL,s_21 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      s_21 = ATgetArgument(t, 0);
      t = s_21;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          s_21 = ATgetArgument(t, 0);
          t = s_21;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_x_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              s_21 = ATgetArgument(t, 0);
              q_21 = ATgetArgument(t, 1);
              t = q_21;
              if(match_cons(t, sym_Id_0))
                {
                  t = s_21;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm u_14 = t;
                      int v_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = q_21;
                          ;
                          LocalPopChoice(v_14);
                        }
                      else
                        {
                          t = u_14;
                          t = s_21;
                        }
                    }
                  else
                    {
                      t = s_21;
                    }
                }
              else
                {
                  t = s_21;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = q_21;
                }
            }
          else
            {
              ATerm x_14 = t;
              int a_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      s_21 = ATgetArgument(t, 0);
                      {
                        ATerm b_15 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_15);
                  t = s_21;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = x_14;
                  {
                    ATerm g_15 = t;
                    int h_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm i_15 = ATgetArgument(t, 0);
                            q_21 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_15);
                        t = q_21;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = g_15;
                        {
                          ATerm j_15 = t;
                          int k_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm n_15 = ATgetArgument(t, 0);
                                  q_21 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_15);
                              t = q_21;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = j_15;
                              if(match_cons(t, sym_All_1))
                                {
                                  s_21 = ATgetArgument(t, 0);
                                  t = s_21;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      s_21 = ATgetArgument(t, 0);
                                      t = s_21;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          s_21 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = s_21;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_p_12;
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
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm s_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = s_15;
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
                  {
                    ATerm x_15 = t;
                    int b_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(b_16);
                      }
                    else
                      {
                        t = x_15;
                        {
                          ATerm c_16 = t;
                          int d_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(d_16);
                            }
                          else
                            {
                              t = c_16;
                              {
                                ATerm e_16 = t;
                                int f_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_22 = NULL,c_22 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        b_22 = ATgetArgument(t, 0);
                                        c_22 = ATgetArgument(t, 1);
                                        t = b_22;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = c_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            b_22 = ATgetArgument(t, 0);
                                            c_22 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = b_22;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = c_22;
                                      }
                                    ;
                                    LocalPopChoice(f_16);
                                  }
                                else
                                  {
                                    t = e_16;
                                    {
                                      ATerm g_16 = t;
                                      int h_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(h_16);
                                        }
                                      else
                                        {
                                          t = g_16;
                                          {
                                            ATerm o_16 = t;
                                            int r_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(r_16);
                                              }
                                            else
                                              {
                                                t = o_16;
                                                {
                                                  ATerm f_0 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm s_16 = ATgetArgument(t, 0);
                                                      if(!(match_cons(s_16, sym_Wld_0)))
                                                        _fail(t);
                                                      f_0 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = f_0;
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
ATerm Optimize_0_0 (ATerm t)
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                i_22 = ATgetArgument(t, 0);
                j_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_22;
            if(match_cons(t, sym_Let_2))
              {
                k_22 = ATgetArgument(t, 0);
                l_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, k_22, (ATerm) ATmakeAppl(sym_Seq_2, i_22, l_22));
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm x_16 = t;
              int y_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(y_16);
                }
              else
                {
                  t = x_16;
                  {
                    ATerm z_16 = t;
                    int a_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(a_17);
                      }
                    else
                      {
                        t = z_16;
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
ATerm repeat_1_0 (ATerm w_130 (ATerm), ATerm t)
{
  ATerm p_22 (ATerm t)
  {
    ATerm h_3 (ATerm t)
    {
      t = w_130(t);
      t = p_22(t);
      return(t);
    }
    t = try_1_0(h_3, t);
    return(t);
  }
  t = p_22(t);
  return(t);
}
ATerm downup_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  t = n_114(t);
  {
    ATerm i_3 (ATerm t)
    {
      t = downup_1_0(n_114, t);
      return(t);
    }
    t = SRTS_all(i_3, t);
    t = n_114(t);
  }
  return(t);
}
ATerm simplify_widen_0_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0_0(t);
          ;
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
          t = WidenScope_0_0(t);
        }
      return(t);
    }
    t = repeat_1_0(l_3, t);
    return(t);
  }
  t = downup_1_0(k_3, t);
  return(t);
}
ATerm SDefT_4_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  z_22 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
      t_22 = ATgetArgument(t, 2);
      u_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_22);
  q_22 = t;
  t = r_22;
  t = c_105(t);
  v_22 = t;
  t = s_22;
  t = d_105(t);
  w_22 = t;
  t = t_22;
  t = e_105(t);
  x_22 = t;
  t = u_22;
  t = f_105(t);
  y_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, v_22, w_22, x_22, y_22), q_22);
  return(t);
}
ATerm SDef_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  j_23 = t;
  if(match_cons(t, sym_SDef_3))
    {
      d_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
      f_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_23);
  c_23 = t;
  t = d_23;
  t = z_104(t);
  g_23 = t;
  t = e_23;
  t = a_105(t);
  h_23 = t;
  t = f_23;
  t = b_105(t);
  i_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, g_23, h_23, i_23), c_23);
  return(t);
}
ATerm Strategies_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  p_23 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_23);
  m_23 = t;
  t = n_23;
  t = c_98(t);
  o_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, o_23), m_23);
  return(t);
}
ATerm Specification_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_23);
  s_23 = t;
  t = t_23;
  t = h_98(t);
  u_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, u_23), s_23);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm m_112 (ATerm), ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      ATerm p_3 (ATerm t)
      {
        ATerm r_3 (ATerm t)
        {
          ATerm s_3 (ATerm t)
          {
            ATerm d_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, m_112, t);
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = d_17;
                t = SDefT_4_0(_id, _id, _id, m_112, t);
              }
            return(t);
          }
          t = map_1_0(s_3, t);
          return(t);
        }
        t = Strategies_1_0(r_3, t);
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(p_3, q_3, t);
      return(t);
    }
    t = Cons_2_0(_id, o_3, t);
    return(t);
  }
  t = Specification_1_0(m_3, t);
  return(t);
}
ATerm _2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  d_24 = t;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_24);
  y_23 = t;
  t = z_23;
  t = p_96(t);
  b_24 = t;
  t = a_24;
  t = q_96(t);
  c_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, b_24, c_24), y_23);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL;
  g_24 = t;
  t = term_j_17;
  t = whoami_0_0(t);
  h_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), h_24), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = g_24;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm k_24 = NULL,l_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_24 = ATgetFirst((ATermList) t);
            l_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_24;
        {
          ATerm x_3 (ATerm t)
          {
            t = l_24;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL;
  p_24 = t;
  t = SSL_explode_term(p_24);
  if(match_cons(t, sym__2))
    {
      ATerm m_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_24;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  ATerm r_24 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_24, t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_121(t);
      }
    return(t);
  }
  t = r_24(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL;
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      s_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_24;
  {
    ATerm y_3 (ATerm t)
    {
      t = s_24;
      return(t);
    }
    t = at_end_1_0(y_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm u_24 = NULL;
  ATerm z_3 (ATerm t)
  {
    ATerm v_24 = NULL;
    v_24 = t;
    t = SSL_explode_string(v_24);
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm w_24 = NULL;
    w_24 = t;
    t = SSL_explode_string(w_24);
    return(t);
  }
  t = _2_0(z_3, a_4, t);
  t = conc_0_0(t);
  u_24 = t;
  t = SSL_implode_string(u_24);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_25 = NULL;
      c_25 = t;
      t = SSL_is_string(c_25);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(d_4, t);
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            {
              ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
              g_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_25 = ATgetArgument(t, 0);
                  t = h_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_25 = ATgetArgument(t, 0);
                      t = h_25;
                      {
                        ATerm z_17 = t;
                        int c_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_18);
                          }
                        else
                          {
                            t = z_17;
                            {
                              ATerm e_4 (ATerm t)
                              {
                                t = term_d_18;
                                return(t);
                              }
                              t = debug_1_0(e_4, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm m_25 = NULL,n_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_25 = ATgetArgument(t, 0);
                          i_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_25;
                      t = eval_config_0_0(t);
                      m_25 = t;
                      t = i_25;
                      t = eval_config_0_0(t);
                      n_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_25, n_25);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_25);
  {
    ATerm f_4 (ATerm t)
    {
      ATerm r_25 = NULL;
      t = eval_config_0_0(t);
      r_25 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_25, r_25);
      t = r_25;
      return(t);
    }
    t = try_1_0(f_4, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm s_25 = NULL,t_25 = NULL;
    s_25 = t;
    t = term_e_18;
    t = get_config_0_0(t);
    t_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_25, term_f_18);
    t = geq_0_0(t);
    t = s_25;
    t = o_137(t);
    return(t);
  }
  t = try_1_0(g_4, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm g_18 = ATgetArgument(t, 0);
        if(match_cons(g_18, sym_Stream_1))
          {
            u_25 = ATgetArgument(g_18, 0);
          }
        else
          _fail(t);
        v_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(u_25, v_25);
    w_25 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), w_25);
    x_25 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, x_25);
    return(t);
  }
  t = WriteToFile_1_0(h_4, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym__2))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_25, term_h_18);
  t = open_stream_0_0(t);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_26, z_25);
  t = k_136(t);
  t = fclose_0_0(t);
  t = z_25;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_18 = ATgetArgument(t, 0);
        if(match_cons(i_18, sym_Stream_1))
          {
            b_26 = ATgetArgument(i_18, 0);
          }
        else
          _fail(t);
        c_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(b_26, c_26);
    d_26 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, d_26);
    return(t);
  }
  t = WriteToFile_1_0(i_4, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  e_26 = t;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                f_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(k_4, t);
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
          t = term_l_18;
          f_26 = t;
        }
      return(t);
    }
    t = _2_0(j_4, _id, t);
    t = e_26;
    {
      ATerm l_4 (ATerm t)
      {
        ATerm m_4 (ATerm t)
        {
          t = not_null(f_26);
          return(t);
        }
        t = split_2_0(m_4, _id, t);
        return(t);
      }
      t = _2_0(_id, l_4, t);
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              ATerm o_4 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(o_4, t);
              return(t);
            }
            t = _2_0(n_4, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm m_139 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  g_26 = t;
  t = dtime_0_0(t);
  t = g_26;
  t = m_139(t);
  h_26 = t;
  t = dtime_0_0(t);
  i_26 = t;
  t = h_26;
  if(match_cons(t, sym__2))
    {
      j_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_26), (ATerm) ATmakeAppl(sym_Runtime_1, i_26)), k_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_26 (ATerm s_26, ATerm t)
  {
    t = SSL_fclose(s_26);
    return(t);
  }
  ATerm v_26 = NULL,w_26 = NULL;
  w_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_26 = ATgetArgument(t, 0);
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_26);
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            t = y_26(w_26, t);
          }
      }
    }
  else
    {
      t = y_26(w_26, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm w_135 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  z_26 = t;
  t = w_135(t);
  a_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_26), a_27));
  t = z_26;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_27 = NULL;
  t = SSL_stdin_stream();
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_27 = NULL;
  t = SSL_stdout_stream();
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_27 = NULL;
  t = SSL_stderr_stream();
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_27);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm f_27 = NULL;
  f_27 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      ATerm v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL,y_1 = NULL;
        x_1 = t;
        t = SSL_explode_term(x_1);
        if(match_cons(t, sym__2))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_19 = ATgetArgument(t, 1);
              if(((ATgetType(d_19) == AT_LIST) && !(ATisEmpty(d_19))))
                {
                  y_1 = ATgetFirst((ATermList) d_19);
                  {
                    ATerm i_19 = (ATerm) ATgetNext((ATermList) d_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
              ATerm p_4 (ATerm t)
              {
                ATerm l_27 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    l_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_27;
                return(t);
              }
              t = _2_0(p_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  i_27 = ATgetArgument(t, 0);
                  j_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(i_27, j_27);
              k_27 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, k_27);
              ;
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              {
                ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
                ATerm q_4 (ATerm t)
                {
                  ATerm p_27 = NULL;
                  p_27 = t;
                  t = SSL_is_string(p_27);
                  return(t);
                }
                t = _2_0(q_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    m_27 = ATgetArgument(t, 0);
                    n_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(m_27, n_27);
                o_27 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, o_27);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_27 = NULL;
      t_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_27, term_n_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm r_4 (ATerm t)
        {
          t = term_o_19;
          return(t);
        }
        t = debug_1_0(r_4, t);
        _fail(t);
      }
    }
  q_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(s_27);
  r_27 = t;
  t = q_27;
  t = fclose_0_0(t);
  t = r_27;
  return(t);
}
ATerm split_2_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  v_27 = t;
  t = x_117(t);
  w_27 = t;
  t = v_27;
  t = y_117(t);
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  y_27 = t;
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              z_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(s_4, t);
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = term_r_19;
        z_27 = t;
      }
    t = y_27;
    {
      ATerm t_4 (ATerm t)
      {
        t = not_null(z_27);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, t_4, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm b_28 = NULL;
    b_28 = t;
    if(match_string(t, "-k"))
      {
        t = b_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = b_28;
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    ATerm c_28 = NULL,d_28 = NULL;
    c_28 = t;
    t = SSL_string_to_int(c_28);
    d_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_28);
    t = c_28;
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_s_19;
    return(t);
  }
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_4 (ATerm t)
      {
        ATerm f_28 = NULL;
        f_28 = t;
        if(match_string(t, "-S"))
          {
            t = f_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = f_28;
          }
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_x_19;
        return(t);
      }
      ATerm z_4 (ATerm t)
      {
        t = term_y_19;
        return(t);
      }
      t = Option_3_0(x_4, y_4, z_4, t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = t_19;
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_5 (ATerm t)
            {
              ATerm g_28 = NULL,h_28 = NULL;
              g_28 = t;
              t = SSL_string_to_int(g_28);
              h_28 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_28);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, g_28);
              return(t);
            }
            ATerm c_5 (ATerm t)
            {
              t = term_b_20;
              return(t);
            }
            t = ArgOption_3_0(a_5, b_5, c_5, t);
            ;
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            {
              ATerm d_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_c_20;
                return(t);
              }
              ATerm f_5 (ATerm t)
              {
                t = term_d_20;
                return(t);
              }
              t = Option_3_0(d_5, e_5, f_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm j_28 = NULL;
    j_28 = t;
    if(match_string(t, "-o"))
      {
        t = j_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = j_28;
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    ATerm k_28 = NULL;
    k_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_28);
    t = (ATerm) ATmakeAppl(sym_Output_1, k_28);
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_g_20;
    return(t);
  }
  t = ArgOption_3_0(h_5, i_5, j_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm k_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_j_20;
          return(t);
        }
        ATerm m_5 (ATerm t)
        {
          t = term_k_20;
          return(t);
        }
        t = Option_3_0(k_5, l_5, m_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  n_28 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_28;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm v_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_28 = ATgetFirst((ATermList) t);
          p_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_28 = ATgetFirst((ATermList) t);
          r_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_28;
      t = i_0(t);
      t = q_28;
      t = k_0(t);
      v_28 = t;
      t = (ATerm) ATinsert(CheckATermList(r_28), v_28);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm x_28 = NULL;
    x_28 = t;
    if(match_string(t, "-i"))
      {
        t = x_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = x_28;
      }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    ATerm y_28 = NULL;
    y_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), y_28);
    t = (ATerm) ATmakeAppl(sym_Input_1, y_28);
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_l_20;
    return(t);
  }
  t = ArgOption_3_0(n_5, o_5, q_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
        ATerm q_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = q_20;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_17;
  t = whoami_0_0(t);
  z_28 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), z_28));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_125(t);
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      {
        ATerm c_29 = NULL,d_29 = NULL,g_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_29 = ATgetFirst((ATermList) t);
            d_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_29;
        t = foldr_2_0(b_125, c_125, t);
        g_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_29, g_29);
        t = c_125(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  h_29 = t;
  t = SSL_explode_term(h_29);
  if(match_cons(t, sym__2))
    {
      ATerm y_20 = ATgetArgument(t, 0);
      i_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_29;
  t = foldr_2_0(z_122, a_123, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_29 = NULL;
  t = times_0_0(t);
  {
    ATerm r_5 (ATerm t)
    {
      t = term_w_19;
      return(t);
    }
    ATerm s_5 (ATerm t)
    {
      ATerm k_29 = NULL,l_29 = NULL;
      if(match_cons(t, sym__2))
        {
          k_29 = ATgetArgument(t, 0);
          l_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(k_29, l_29);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = SSL_addr(k_29, l_29);
          }
      }
      return(t);
    }
    t = crush_2_0(r_5, s_5, t);
    j_29 = t;
    t = SSL_TicksToSeconds(j_29);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_29;
        if((v_29 != t))
          {
            _fail(t);
          }
        t = u_29;
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        t = u_29;
        {
          ATerm d_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_29, w_29);
              ;
              LocalPopChoice(e_21);
            }
          else
            {
              t = d_21;
              t = SSL_gtr(v_29, w_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_29, w_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_137 (ATerm), ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm z_29 = NULL,a_30 = NULL;
    z_29 = t;
    t = term_e_18;
    t = get_config_0_0(t);
    a_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_30, term_f_21);
    t = geq_0_0(t);
    t = z_29;
    t = n_137(t);
    return(t);
  }
  t = try_1_0(t_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm c_30 = NULL,d_30 = NULL;
    t = run_time_0_0(t);
    c_30 = t;
    t = term_j_17;
    t = whoami_0_0(t);
    d_30 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), c_30), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), d_30));
    t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_21), c_30), term_h_21), d_30));
    return(t);
  }
  t = if_verbose1_1_0(v_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm k_140 (ATerm), ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm w_5 (ATerm t)
        {
          ATerm m_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(n_21);
            }
          else
            {
              t = m_21;
              {
                ATerm o_21 = t;
                int p_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(p_21);
                  }
                else
                  {
                    t = o_21;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(w_5, t);
      }
    }
  t = k_140(t);
  return(t);
}
ATerm map_1_0 (ATerm m_120 (ATerm), ATerm t)
{
  ATerm f_30 (ATerm t)
  {
    ATerm r_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_21);
      }
    else
      {
        t = r_21;
        t = Cons_2_0(m_120, f_30, t);
      }
    return(t);
  }
  t = f_30(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_30 = ATgetFirst((ATermList) t);
      i_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_30 = NULL,n_30 = NULL;
        t = i_30;
        t = g_0(t);
        m_30 = t;
        t = h_30;
        t = e_0(t);
        n_30 = t;
        t = i_30;
        {
          ATerm x_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(m_30), n_30);
            return(t);
          }
          t = reverse_acc_2_0(e_0, x_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_17;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, y_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  r_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_30);
  o_30 = t;
  t = p_30;
  t = g_112(t);
  q_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, q_30), o_30);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      {
        ATerm z_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(z_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_w_21;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm b_6 (ATerm t)
    {
      ATerm u_30 = NULL;
      u_30 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, u_30), term_x_21);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(b_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  y_30 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_30);
  v_30 = t;
  t = w_30;
  t = h_112(t);
  x_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, x_30), v_30);
  return(t);
}
ATerm fetch_1_0 (ATerm x_120 (ATerm), ATerm t)
{
  ATerm b_31 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(x_120, _id, t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = Cons_2_0(_id, b_31, t);
      }
    return(t);
  }
  t = b_31(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_141 (ATerm), ATerm t)
{
  t = fetch_1_0(k_141, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  d_31 = t;
  {
    ATerm a_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_22 = ATgetFirst((ATermList) t);
                ATerm f_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_31;
          }
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = a_22;
        t = (ATerm) ATinsert(ATempty, d_31);
      }
    e_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), e_31);
    t = d_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_117(t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm d_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_b_23;
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        t = term_k_23;
        return(t);
      }
      t = Option_3_0(c_6, d_6, e_6, t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      {
        ATerm f_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_l_23;
          return(t);
        }
        ATerm h_6 (ATerm t)
        {
          t = term_q_23;
          return(t);
        }
        t = Option_3_0(f_6, g_6, h_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  if(match_cons(t, sym__3))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
      m_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
  {
    ATerm r_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_23 = ATgetArgument(t, 0);
            ATerm e_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_31, l_31);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATempty;
      }
    n_31 = t;
    t = SSL_table_put(k_31, l_31, (ATerm) ATinsert(CheckATermList(n_31), m_31));
    t = (ATerm) ATmakeAppl(sym__3, k_31, l_31, m_31);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_142 (ATerm), ATerm t)
{
  ATerm s_31 = NULL;
  t = term_j_17;
  t = p_142(t);
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_24, term_i_24, s_31);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = u_31;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm z_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_31 = ATgetFirst((ATermList) t);
          w_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_31;
      t = a_0(t);
      t = term_j_17;
      t = c_0(t);
      z_31 = t;
      t = (ATerm) ATinsert(CheckATermList(w_31), z_31);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm b_32 = NULL;
    b_32 = t;
    if(match_string(t, "--help"))
      {
        t = b_32;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = b_32;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = b_32;
          }
      }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_j_24;
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_m_24;
    return(t);
  }
  t = Option_3_0(i_6, j_6, k_6, t);
  return(t);
}
ATerm Cons_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  h_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_32 = ATgetFirst((ATermList) t);
      e_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_32);
  c_32 = t;
  t = d_32;
  t = y_97(t);
  f_32 = t;
  t = e_32;
  t = z_97(t);
  g_32 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_32), f_32), c_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_142 (ATerm), ATerm t)
{
  ATerm n_32 = NULL;
  n_32 = t;
  {
    ATerm l_6 (ATerm t)
    {
      t = term_n_24;
      t = n_142(t);
      return(t);
    }
    t = try_1_0(l_6, t);
    t = n_32;
    {
      ATerm m_6 (ATerm t)
      {
        ATerm o_32 = NULL;
        o_32 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_32);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_32);
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        ATerm o_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_24);
              }
            else
              {
                t = y_24;
                t = n_142(t);
                t = Cons_2_0(_id, n_6, t);
              }
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = o_24;
            {
              ATerm q_32 = NULL,r_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_32 = ATgetFirst((ATermList) t);
                  r_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_32), (ATerm) ATmakeAppl(sym_Undefined_1, q_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_6, n_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm m_142 (ATerm), ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_32;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm a_25 = t;
      int b_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_142(t);
          ;
          LocalPopChoice(b_25);
        }
      else
        {
          t = a_25;
          {
            ATerm d_25 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(e_25);
              }
            else
              {
                t = d_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_6, t);
    {
      ATerm q_6 (ATerm t)
      {
        ATerm f_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_33 = NULL;
            e_33 = t;
            {
              ATerm k_25 = t;
              int l_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_33;
                  {
                    ATerm o_25 = t;
                    int p_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_l_21;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(p_25);
                      }
                    else
                      {
                        t = o_25;
                        {
                          ATerm s_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(s_6, t);
                        }
                      }
                    t = e_33;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(l_25);
                }
              else
                {
                  t = k_25;
                  t = term_a_23;
                  t = get_config_0_0(t);
                  t = e_33;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = f_25;
            {
              ATerm u_6 (ATerm t)
              {
                ATerm w_6 (ATerm t)
                {
                  y_32 = t;
                  return(t);
                }
                t = Undefined_1_0(w_6, t);
                return(t);
              }
              t = option_defined_1_0(u_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_32)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_32)), term_l_26));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(q_6, t);
      z_32 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm t)
{
  ATerm p_5 = NULL;
  t = parse_options_1_0(m_140, t);
  p_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), p_5);
  t = p_5;
  t = o_140(t);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_140, t);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        {
          ATerm o_26 = t;
          int p_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_140(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_26);
            }
          else
            {
              t = o_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_140(t);
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(b_140, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(x_6, d_140, e_140, y_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm h_33 = NULL,i_33 = NULL;
      h_33 = t;
      t = term_v_20;
      t = get_config_0_0(t);
      i_33 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, i_33));
      t = h_33;
      return(t);
    }
    t = if_verbose2_1_0(b_7, t);
    return(t);
  }
  t = iowrap_4_0(v_139, w_139, x_139, z_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm t)
{
  t = iowrap_3_0(t_139, u_139, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm q_139 (ATerm), ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    t = _2_0(_id, q_139, t);
    return(t);
  }
  t = iowrap_2_0(c_7, _fail, t);
  return(t);
}
ATerm optimize2_comp_0_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm e_7 (ATerm t)
    {
      t = simplify_widen_0_0(t);
      t = simplify_0_0(t);
      t = simplify_clean_0_0(t);
      return(t);
    }
    t = apply_to_bodies_1_0(e_7, t);
    return(t);
  }
  t = iowrap_1_0(d_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = optimize2_comp_0_0(t);
  return(t);
}
