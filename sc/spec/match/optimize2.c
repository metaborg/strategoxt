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
ATerm term_a_25;
ATerm term_n_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_u_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_f_17;
ATerm term_v_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_w_9;
void init_constant_terms (void)
{
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Op_2, term_k_12, (ATerm) ATempty);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_l_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__3, term_i_22, term_j_22, term_f_17);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm isect_1_0 (ATerm k_123 (ATerm), ATerm);
ATerm isect_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm c_102 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm q_123 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm);
ATerm crush_3_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm);
ATerm diff_1_0 (ATerm m_123 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm);
ATerm for_3_0 (ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm s_132 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm j_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm CleanupScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm o_115 (ATerm), ATerm);
ATerm simplify_clean_0_0 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm);
ATerm zip_1_0 (ATerm f_120 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm s_116 (ATerm), ATerm);
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
ATerm repeat_1_0 (ATerm y_131 (ATerm), ATerm);
ATerm downup_1_0 (ATerm q_115 (ATerm), ATerm);
ATerm simplify_widen_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm s_98 (ATerm), ATerm);
ATerm apply_to_bodies_1_0 (ATerm p_113 (ATerm), ATerm);
ATerm _2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_122 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_138 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm j_137 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_140 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm v_136 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm d_126 (ATerm), ATerm e_126 (ATerm), ATerm);
ATerm crush_2_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_138 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_141 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_121 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_113 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_121 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm j_142 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm g_118 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm o_143 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_143 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm l_143 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_141 (ATerm), ATerm m_141 (ATerm), ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm p_140 (ATerm), ATerm);
ATerm optimize2_comp_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm isect_1_0 (ATerm k_123 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  if(match_cons(t, sym__2))
    {
      l_1 = ATgetArgument(t, 0);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_1;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm n_6 = t;
      int o_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(o_6);
        }
      else
        {
          t = n_6;
          {
            ATerm n_1 = NULL,s_1 = NULL;
            n_1 = t;
            {
              ATerm p_6 = t;
              int q_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm r_6 = ATgetFirst((ATermList) t);
                      s_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_6);
                  {
                    ATerm s_6 = t;
                    int u_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_1;
                        {
                          ATerm c_0 (ATerm t)
                          {
                            t = k_1;
                            return(t);
                          }
                          t = HdMember_p__2_0(k_123, c_0, t);
                          t = n_1;
                          t = Cons_2_0(_id, g_2, t);
                        }
                        ;
                        LocalPopChoice(u_6);
                      }
                    else
                      {
                        t = s_6;
                        t = s_1;
                        t = g_2(t);
                      }
                  }
                }
              else
                {
                  t = p_6;
                  t = n_1;
                  {
                    ATerm h_0 (ATerm t)
                    {
                      t = k_1;
                      return(t);
                    }
                    t = HdMember_p__2_0(k_123, h_0, t);
                    t = n_1;
                    t = Cons_2_0(_id, g_2, t);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = g_2(t);
  }
  return(t);
}
ATerm isect_0_0 (ATerm t)
{
  ATerm j_0 (ATerm t)
  {
    ATerm k_2 = NULL;
    if(match_cons(t, sym__2))
      {
        k_2 = ATgetArgument(t, 0);
        if((k_2 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = isect_1_0(j_0, t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,q_2 = NULL,r_2 = NULL;
  r_2 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      o_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_2);
  n_2 = t;
  t = o_2;
  t = c_102(t);
  q_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, q_2), n_2);
  return(t);
}
ATerm RDefT_4_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,h_3 = NULL,j_3 = NULL;
  j_3 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      x_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
      a_3 = ATgetArgument(t, 2);
      b_3 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_3);
  w_2 = t;
  t = x_2;
  t = t_101(t);
  c_3 = t;
  t = y_2;
  t = u_101(t);
  d_3 = t;
  t = a_3;
  t = v_101(t);
  e_3 = t;
  t = b_3;
  t = w_101(t);
  h_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, c_3, d_3, e_3, h_3), w_2);
  return(t);
}
ATerm Scope_2_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  u_3 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_3 = ATgetArgument(t, 0);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_3);
  n_3 = t;
  t = p_3;
  t = f_103(t);
  s_3 = t;
  t = r_3;
  t = g_103(t);
  t_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, s_3, t_3), n_3);
  return(t);
}
ATerm tboundin_3_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm t)
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(r_114, p_114, t);
      ;
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      {
        ATerm y_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(r_114, r_114, r_114, p_114, t);
            ;
            LocalPopChoice(z_6);
          }
        else
          {
            t = y_6;
            {
              ATerm a_7 = t;
              int b_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(r_114, r_114, r_114, p_114, t);
                  ;
                  LocalPopChoice(b_7);
                }
              else
                {
                  t = a_7;
                  t = DynamicRules_1_0(p_114, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm y_3 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm c_7 = ATgetArgument(t, 0);
      ATerm d_7 = ATgetArgument(t, 1);
      y_3 = ATgetArgument(t, 2);
      {
        ATerm e_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = y_3;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm u_5 = NULL;
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            u_5 = ATgetArgument(t, 0);
            {
              ATerm h_7 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_7);
        t = u_5;
      }
    else
      {
        t = f_7;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            u_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_5;
      }
    return(t);
  }
  t = map_1_0(l_0, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm t_6 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm i_7 = ATgetArgument(t, 0);
      ATerm j_7 = ATgetArgument(t, 1);
      t_6 = ATgetArgument(t, 2);
      {
        ATerm k_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = t_6;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm v_6 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      v_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6;
  t = tvars_0_0(t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm r_7 = NULL,j_8 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_8 = ATgetArgument(t, 0);
      t = j_8;
      if(match_cons(t, sym_Rule_3))
        {
          r_7 = ATgetArgument(t, 0);
          {
            ATerm l_7 = ATgetArgument(t, 1);
          }
          {
            ATerm m_7 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_7;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_8 = ATgetArgument(t, 0);
          {
            ATerm n_7 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_8;
    }
  return(t);
}
ATerm union_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9;
  {
    ATerm d_9 (ATerm t)
    {
      ATerm o_7 = t;
      int p_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_9;
          ;
          LocalPopChoice(p_7);
        }
      else
        {
          t = o_7;
          {
            ATerm q_7 = t;
            int s_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_0 (ATerm t)
                {
                  t = b_9;
                  return(t);
                }
                t = HdMember_p__2_0(q_123, o_0, t);
                t = d_9(t);
                ;
                LocalPopChoice(s_7);
              }
            else
              {
                t = q_7;
                t = Cons_2_0(_id, d_9, t);
              }
          }
        }
      return(t);
    }
    t = d_9(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm l_9 = NULL;
    if(match_cons(t, sym__2))
      {
        l_9 = ATgetArgument(t, 0);
        if((l_9 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(p_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_126(t);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
        ATerm t_9 = NULL,u_9 = NULL,x_9 = NULL,b_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_9 = ATgetFirst((ATermList) t);
            u_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_9;
        t = h_126(t);
        x_9 = t;
        t = u_9;
        t = foldr_3_0(f_126, g_126, h_126, t);
        b_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_9, b_10);
        t = g_126(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL;
  c_10 = t;
  t = SSL_explode_term(c_10);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10;
  t = foldr_3_0(d_124, e_124, f_124, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_10 = ATgetFirst((ATermList) t);
      f_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_123(t);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm g_10 = NULL;
      g_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_10, g_10);
      t = u_123(t);
      return(t);
    }
    t = fetch_1_0(q_0, t);
    t = f_10;
  }
  return(t);
}
ATerm diff_1_0 (ATerm m_123 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL;
  if(match_cons(t, sym__2))
    {
      i_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10;
  {
    ATerm j_10 (ATerm t)
    {
      ATerm w_7 = t;
      int x_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(x_7);
        }
      else
        {
          t = w_7;
          {
            ATerm y_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_0 (ATerm t)
                {
                  t = h_10;
                  return(t);
                }
                t = HdMember_p__2_0(m_123, r_0, t);
                t = j_10(t);
                ;
                LocalPopChoice(z_7);
              }
            else
              {
                t = y_7;
                t = Cons_2_0(_id, j_10, t);
              }
          }
        }
      return(t);
    }
    t = j_10(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,p_10 = NULL,q_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_8 = ATgetFirst((ATermList) t);
      if(match_cons(a_8, sym__2))
        {
          k_10 = ATgetArgument(a_8, 0);
          l_10 = ATgetArgument(a_8, 1);
        }
      else
        _fail(t);
      p_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_10);
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_10);
  if(match_cons(t, sym__2))
    {
      if((q_10 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_10, s_10);
  t = zip_1_0(_id, t);
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_10, p_10);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm t)
{
  ATerm v_10 (ATerm t)
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_132(t);
        ;
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        t = o_132(t);
        t = v_10(t);
      }
    return(t);
  }
  t = v_10(t);
  return(t);
}
ATerm for_3_0 (ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm s_132 (ATerm), ATerm t)
{
  t = q_132(t);
  t = while_not_2_0(r_132, s_132, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        ATerm e_11 = NULL;
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_11);
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        ATerm v_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, v_0, t);
        return(t);
      }
      ATerm u_0 (ATerm t)
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm h_8 = t;
              int i_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_11 = ATgetFirst((ATermList) t);
                      j_11 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_11;
                  if(match_cons(t, sym__2))
                    {
                      h_11 = ATgetArgument(t, 0);
                      i_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_11;
                  if((h_11 != t))
                    {
                      _fail(t);
                    }
                  t = j_11;
                  ;
                  LocalPopChoice(i_8);
                }
              else
                {
                  t = h_8;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, y_0, t);
            ;
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            {
              ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,s_11 = NULL;
              if(match_cons(t, sym__2))
                {
                  n_11 = ATgetArgument(t, 0);
                  o_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_11;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_11 = ATgetFirst((ATermList) t);
                  s_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_11), p_11), s_11);
            }
          }
        return(t);
      }
      t = for_3_0(s_0, t_0, u_0, t);
      ;
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm z_11 = NULL;
          if(match_cons(t, sym__2))
            {
              z_11 = ATgetArgument(t, 0);
              if((z_11 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(z_0, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm j_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_12 (ATerm t)
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_130(t);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        {
          ATerm m_8 = t;
          int n_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_12 = NULL,c_12 = NULL;
              a_12 = t;
              t = i_130(t);
              c_12 = t;
              t = a_12;
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = c_12;
                    return(t);
                  }
                  t = split_2_0(d_12, c_1, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm b_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = j_130(a_1, d_12, b_1, t);
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(d_1, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(n_8);
            }
          else
            {
              t = m_8;
              {
                ATerm e_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(e_1, union_0_0, d_12, t);
              }
            }
        }
      }
    return(t);
  }
  t = d_12(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm e_12 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        e_12 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, e_12);
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        {
          ATerm q_8 = t;
          int r_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(r_8);
            }
          else
            {
              t = q_8;
              {
                ATerm s_8 = t;
                int t_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(t_8);
                  }
                else
                  {
                    t = s_8;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(f_1, g_1, tboundin_3_0, t);
  return(t);
}
ATerm CleanupScope_0_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      f_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12;
  t = tvars_0_0(t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_12, h_12);
  t = isect_0_0(t);
  i_12 = t;
  {
    ATerm u_8 = t;
    if((PushChoice() == 0))
      {
        if((f_12 != t))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_8;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, i_12, g_12);
  }
  return(t);
}
ATerm topdown_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  t = o_115(t);
  {
    ATerm h_1 (ATerm t)
    {
      t = topdown_1_0(o_115, t);
      return(t);
    }
    t = SRTS_all(h_1, t);
  }
  return(t);
}
ATerm simplify_clean_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      t = CleanupScope_0_0(t);
      t = try_1_0(FuseScope_0_0, t);
      return(t);
    }
    t = try_1_0(j_1, t);
    return(t);
  }
  t = topdown_1_0(i_1, t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = repeat_1_0(Optimize_0_0, t);
    return(t);
  }
  t = downup_1_0(m_1, t);
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12;
  if(match_cons(t, sym_Scope_2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
      t = q_12;
      if(match_cons(t, sym_Scope_2))
        {
          r_12 = ATgetArgument(t, 0);
          s_12 = ATgetArgument(t, 1);
          {
            ATerm v_8 = t;
            int w_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, n_12, (ATerm) ATmakeAppl(sym_Seq_2, q_12, o_12));
                ;
                LocalPopChoice(w_8);
              }
            else
              {
                t = v_8;
                t = (ATerm) ATmakeAppl(sym_Scope_2, r_12, (ATerm) ATmakeAppl(sym_Seq_2, s_12, t_12));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, n_12, (ATerm) ATmakeAppl(sym_Seq_2, q_12, o_12));
        }
    }
  else
    {
      t = q_12;
      if(match_cons(t, sym_Scope_2))
        {
          r_12 = ATgetArgument(t, 0);
          s_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, r_12, (ATerm) ATmakeAppl(sym_Seq_2, s_12, t_12));
    }
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      g_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_13)), (ATerm) ATmakeAppl(sym_Seq_2, g_13, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, h_13)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      i_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_13)), (ATerm) ATmakeAppl(sym_Seq_2, i_13, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_13)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      k_13 = ATgetArgument(t, 0);
      {
        ATerm x_8 = ATgetArgument(t, 1);
        if(match_cons(x_8, sym_Scope_2))
          {
            l_13 = ATgetArgument(x_8, 0);
            m_13 = ATgetArgument(x_8, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_13, l_13);
  t = conc_0_0(t);
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, n_13, m_13);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,w_13 = NULL,y_13 = NULL,z_13 = NULL,c_14 = NULL,d_14 = NULL;
  if(match_cons(t, sym__2))
    {
      w_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_13;
  if(match_cons(t, sym_Build_1))
    {
      ATerm y_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_13;
  if(match_cons(t, sym_Where_1))
    {
      z_13 = ATgetArgument(t, 0);
      t = z_13;
      if(match_cons(t, sym_Prim_2))
        {
          t_13 = ATgetArgument(t, 0);
          u_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          z_13 = ATgetArgument(t, 0);
          c_14 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, z_13, c_14);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              z_13 = ATgetArgument(t, 0);
              c_14 = ATgetArgument(t, 1);
              d_14 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t)
{
  ATerm l_14 (ATerm t)
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_120(t);
        ;
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        t = b_120(t);
        t = _2_0(d_120, l_14, t);
        t = c_120(t);
      }
    return(t);
  }
  t = l_14(t);
  return(t);
}
ATerm zip_1_0 (ATerm f_120 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm e_9 = ATgetArgument(t, 0);
        if(((ATgetType(e_9) != AT_LIST) || !(ATisEmpty(e_9))))
          _fail(t);
        {
          ATerm f_9 = ATgetArgument(t, 1);
          if(((ATgetType(f_9) != AT_LIST) || !(ATisEmpty(f_9))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm g_9 = ATgetArgument(t, 0);
        if(((ATgetType(g_9) == AT_LIST) && !(ATisEmpty(g_9))))
          {
            m_14 = ATgetFirst((ATermList) g_9);
            o_14 = (ATerm) ATgetNext((ATermList) g_9);
          }
        else
          _fail(t);
        {
          ATerm h_9 = ATgetArgument(t, 1);
          if(((ATgetType(h_9) == AT_LIST) && !(ATisEmpty(h_9))))
            {
              n_14 = ATgetFirst((ATermList) h_9);
              p_14 = (ATerm) ATgetNext((ATermList) h_9);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_14, n_14), (ATerm) ATmakeAppl(sym__2, o_14, p_14));
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm q_14 = NULL,r_14 = NULL;
    if(match_cons(t, sym__2))
      {
        q_14 = ATgetArgument(t, 0);
        r_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(r_14), q_14);
    return(t);
  }
  t = genzip_4_0(o_1, p_1, q_1, f_120, t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if(match_cons(i_9, sym_Build_1))
        {
          ATerm k_9 = ATgetArgument(i_9, 0);
          if(match_cons(k_9, sym_Op_2))
            {
              t_14 = ATgetArgument(k_9, 0);
              s_14 = ATgetArgument(k_9, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm j_9 = ATgetArgument(t, 1);
        if(match_cons(j_9, sym_Match_1))
          {
            ATerm m_9 = ATgetArgument(j_9, 0);
            if(match_cons(m_9, sym_Op_2))
              {
                if((t_14 != ATgetArgument(m_9, 0)))
                  {
                    _fail(ATgetArgument(m_9, 0));
                  }
                u_14 = ATgetArgument(m_9, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, s_14, u_14);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm w_14 = NULL,x_14 = NULL;
      if(match_cons(t, sym__2))
        {
          w_14 = ATgetArgument(t, 0);
          x_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_14), (ATerm) ATmakeAppl(sym_Match_1, x_14));
      return(t);
    }
    t = zip_1_0(r_1, t);
    v_14 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_14), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, t_14, s_14)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_9 = ATgetArgument(t, 0);
      if(match_cons(n_9, sym_Build_1))
        {
          ATerm p_9 = ATgetArgument(n_9, 0);
          if(match_cons(p_9, sym_Op_2))
            {
              y_14 = ATgetArgument(p_9, 0);
              {
                ATerm q_9 = ATgetArgument(p_9, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm o_9 = ATgetArgument(t, 1);
        if(match_cons(o_9, sym_Match_1))
          {
            ATerm r_9 = ATgetArgument(o_9, 0);
            if(match_cons(r_9, sym_Op_2))
              {
                z_14 = ATgetArgument(r_9, 0);
                {
                  ATerm s_9 = ATgetArgument(r_9, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, y_14, z_14);
  {
    ATerm v_9 = t;
    if((PushChoice() == 0))
      {
        ATerm a_15 = NULL;
        if(match_cons(t, sym__2))
          {
            a_15 = ATgetArgument(t, 0);
            if((a_15 != ATgetArgument(t, 1)))
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
        t = v_9;
      }
    t = term_w_9;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm a_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(m_10);
          }
        else
          {
            t = a_10;
            {
              ATerm n_10 = t;
              int o_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_15 = NULL,l_15 = NULL,m_15 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      j_15 = ATgetArgument(t, 0);
                      l_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_15;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm r_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_15;
                  if(match_cons(t, sym_Build_1))
                    {
                      m_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(o_10);
                }
              else
                {
                  t = n_10;
                  {
                    ATerm w_10 = t;
                    int x_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(x_10);
                      }
                    else
                      {
                        t = w_10;
                        {
                          ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              p_15 = ATgetArgument(t, 0);
                              r_15 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = p_15;
                          if(match_cons(t, sym_Match_1))
                            {
                              q_15 = ATgetArgument(t, 0);
                              t = r_15;
                              if(match_cons(t, sym_Match_1))
                                {
                                  s_15 = ATgetArgument(t, 0);
                                  t = s_15;
                                  if((q_15 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, q_15);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      s_15 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_15;
                                  if((q_15 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, q_15);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  q_15 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = r_15;
                              if(match_cons(t, sym_Match_1))
                                {
                                  s_15 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = s_15;
                              if((q_15 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, q_15);
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
  ATerm y_15 = NULL,z_15 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_16;
  if(match_cons(t, sym_Seq_2))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_16 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, b_16, y_15);
            t = BMF_0_0(t);
            g_16 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, g_16, z_15);
            ;
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            t = (ATerm) ATmakeAppl(sym__2, b_16, c_16);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, b_16, c_16);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm s_116 (ATerm), ATerm t)
{
  ATerm l_16 (ATerm t)
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_116(t);
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = SRTS_one(l_16, t);
      }
    return(t);
  }
  t = l_16(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
        {
          ATerm f_11 = ATgetFirst((ATermList) c_11);
          if(match_cons(f_11, sym_SDefT_4))
            {
              n_16 = ATgetArgument(f_11, 0);
              {
                ATerm l_11 = ATgetArgument(f_11, 1);
                if(((ATgetType(l_11) != AT_LIST) || !(ATisEmpty(l_11))))
                  _fail(t);
              }
              {
                ATerm m_11 = ATgetArgument(f_11, 2);
                if(((ATgetType(m_11) != AT_LIST) || !(ATisEmpty(m_11))))
                  _fail(t);
              }
              m_16 = ATgetArgument(f_11, 3);
            }
          else
            _fail(t);
          {
            ATerm k_11 = (ATerm) ATgetNext((ATermList) c_11);
            if(((ATgetType(k_11) != AT_LIST) || !(ATisEmpty(k_11))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm d_11 = ATgetArgument(t, 1);
        if(match_cons(d_11, sym_CallT_3))
          {
            ATerm q_11 = ATgetArgument(d_11, 0);
            if(match_cons(q_11, sym_SVar_1))
              {
                if((n_16 != ATgetArgument(q_11, 0)))
                  {
                    _fail(ATgetArgument(q_11, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm r_11 = ATgetArgument(d_11, 1);
              if(((ATgetType(r_11) != AT_LIST) || !(ATisEmpty(r_11))))
                _fail(t);
            }
            {
              ATerm t_11 = ATgetArgument(d_11, 2);
              if(((ATgetType(t_11) != AT_LIST) || !(ATisEmpty(t_11))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_16;
  {
    ATerm u_11 = t;
    if((PushChoice() == 0))
      {
        ATerm t_1 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm v_11 = ATgetArgument(t, 0);
              if(match_cons(v_11, sym_SVar_1))
                {
                  if((n_16 != ATgetArgument(v_11, 0)))
                    {
                      _fail(ATgetArgument(v_11, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm w_11 = ATgetArgument(t, 1);
                if(((ATgetType(w_11) != AT_LIST) || !(ATisEmpty(w_11))))
                  _fail(t);
              }
              {
                ATerm x_11 = ATgetArgument(t, 2);
                if(((ATgetType(x_11) != AT_LIST) || !(ATisEmpty(x_11))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(t_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_11;
      }
    t = m_16;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,c_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      c_17 = ATgetArgument(t, 0);
      t = c_17;
      if(match_cons(t, sym_Seq_2))
        {
          a_17 = ATgetArgument(t, 0);
          w_16 = ATgetArgument(t, 1);
          t = a_17;
          if(match_cons(t, sym_Where_1))
            {
              v_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_16;
          if(match_cons(t, sym_Seq_2))
            {
              x_16 = ATgetArgument(t, 0);
              z_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_16;
          if(match_cons(t, sym_Build_1))
            {
              y_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, v_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_16), z_16)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              a_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          c_17 = ATgetArgument(t, 0);
          t = c_17;
          if(match_cons(t, sym_Test_1))
            {
              a_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              c_17 = ATgetArgument(t, 0);
              t = c_17;
              if(match_cons(t, sym_Not_1))
                {
                  a_17 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, a_17);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  c_17 = ATgetArgument(t, 0);
                  d_17 = ATgetArgument(t, 1);
                  t = d_17;
                  if((c_17 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      c_17 = ATgetArgument(t, 0);
                      d_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_17;
                  if((c_17 != t))
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
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      r_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
      t = r_17;
      if(match_cons(t, sym_LChoice_2))
        {
          s_17 = ATgetArgument(t, 0);
          t_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, s_17, (ATerm) ATmakeAppl(sym_LChoice_2, t_17, u_17));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          r_17 = ATgetArgument(t, 0);
          u_17 = ATgetArgument(t, 1);
          t = r_17;
          if(match_cons(t, sym_Seq_2))
            {
              s_17 = ATgetArgument(t, 0);
              t_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, s_17, (ATerm) ATmakeAppl(sym_Seq_2, t_17, u_17));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              r_17 = ATgetArgument(t, 0);
              u_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_17;
          if(match_cons(t, sym_Choice_2))
            {
              s_17 = ATgetArgument(t, 0);
              t_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, s_17, (ATerm) ATmakeAppl(sym_Choice_2, t_17, u_17));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm u_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(v_1, t);
          return(t);
        }
        t = Cons_2_0(_id, u_1, t);
      }
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = y_11;
      {
        ATerm w_1 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, w_1, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      n_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, n_18, o_18);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          n_18 = ATgetArgument(t, 0);
          t = n_18;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_18 = ATgetFirst((ATermList) t);
              j_18 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_18, (ATerm) ATmakeAppl(sym_LChoices_1, j_18));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_w_9;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              n_18 = ATgetArgument(t, 0);
              t = n_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_18 = ATgetFirst((ATermList) t);
                  j_18 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, i_18, (ATerm) ATmakeAppl(sym_Choices_1, j_18));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_w_9;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  n_18 = ATgetArgument(t, 0);
                  t = n_18;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_18 = ATgetFirst((ATermList) t);
                      j_18 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_18, (ATerm) ATmakeAppl(sym_Seqs_1, j_18));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_j_12;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_18 = ATgetArgument(t, 0);
                      o_18 = ATgetArgument(t, 1);
                      l_18 = ATgetArgument(t, 2);
                      k_18 = ATgetArgument(t, 3);
                      {
                        ATerm b_19 = NULL,c_19 = NULL;
                        t = o_18;
                        {
                          ATerm x_1 (ATerm t)
                          {
                            ATerm d_19 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                d_19 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, d_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_12), term_m_12));
                            return(t);
                          }
                          t = map1_1_0(x_1, t);
                          b_19 = t;
                          t = l_18;
                          {
                            ATerm y_1 (ATerm t)
                            {
                              ATerm z_1 (ATerm t)
                              {
                                ATerm e_19 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    e_19 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, e_19, term_m_12);
                                return(t);
                              }
                              t = try_1_0(z_1, t);
                              return(t);
                            }
                            t = map1_1_0(y_1, t);
                            c_19 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, n_18, b_19, c_19, k_18);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          n_18 = ATgetArgument(t, 0);
                          o_18 = ATgetArgument(t, 1);
                          l_18 = ATgetArgument(t, 2);
                          k_18 = ATgetArgument(t, 3);
                          {
                            ATerm p_12 = t;
                            int u_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_19 = NULL,k_19 = NULL;
                                t = l_18;
                                {
                                  ATerm a_2 (ATerm t)
                                  {
                                    ATerm l_19 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        l_19 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, l_19, term_m_12);
                                    return(t);
                                  }
                                  t = map1_1_0(a_2, t);
                                  j_19 = t;
                                  t = o_18;
                                  {
                                    ATerm b_2 (ATerm t)
                                    {
                                      ATerm c_2 (ATerm t)
                                      {
                                        ATerm m_19 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            m_19 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_12), term_m_12));
                                        return(t);
                                      }
                                      t = try_1_0(c_2, t);
                                      return(t);
                                    }
                                    t = map_1_0(b_2, t);
                                    k_19 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, n_18, k_19, j_19, k_18);
                                  }
                                }
                                ;
                                LocalPopChoice(u_12);
                              }
                            else
                              {
                                t = p_12;
                                {
                                  ATerm r_19 = NULL,s_19 = NULL;
                                  t = o_18;
                                  {
                                    ATerm d_2 (ATerm t)
                                    {
                                      ATerm t_19 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          t_19 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_12), term_m_12));
                                      return(t);
                                    }
                                    t = map1_1_0(d_2, t);
                                    r_19 = t;
                                    t = l_18;
                                    {
                                      ATerm e_2 (ATerm t)
                                      {
                                        ATerm f_2 (ATerm t)
                                        {
                                          ATerm u_19 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              u_19 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, u_19, term_m_12);
                                          return(t);
                                        }
                                        t = try_1_0(f_2, t);
                                        return(t);
                                      }
                                      t = map_1_0(e_2, t);
                                      s_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, n_18, r_19, s_19, k_18);
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
                              n_18 = ATgetArgument(t, 0);
                              o_18 = ATgetArgument(t, 1);
                              l_18 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, o_18, (ATerm) ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, l_18), n_18)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  n_18 = ATgetArgument(t, 0);
                                  o_18 = ATgetArgument(t, 1);
                                  l_18 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, l_18)), n_18), (ATerm) ATmakeAppl(sym_Build_1, o_18)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      n_18 = ATgetArgument(t, 0);
                                      o_18 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_18, (ATerm) ATmakeAppl(sym_Match_1, o_18));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          n_18 = ATgetArgument(t, 0);
                                          o_18 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_18), o_18);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              n_18 = ATgetArgument(t, 0);
                                              o_18 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_18), n_18);
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
  ATerm h_20 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_20;
  {
    ATerm h_2 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(h_2, t);
    t = term_w_9;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_21 = NULL,c_21 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          b_21 = ATgetArgument(t, 0);
          t = b_21;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              b_21 = ATgetArgument(t, 0);
              t = b_21;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_j_12;
            }
          else
            {
              ATerm z_12 = t;
              int a_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      b_21 = ATgetArgument(t, 0);
                      {
                        ATerm b_13 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_13);
                  t = b_21;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = z_12;
                  {
                    ATerm c_13 = t;
                    int d_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm e_13 = ATgetArgument(t, 0);
                            c_21 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_13);
                        t = c_21;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = c_13;
                        {
                          ATerm f_13 = t;
                          int o_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm p_13 = ATgetArgument(t, 0);
                                  c_21 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(o_13);
                              t = c_21;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = f_13;
                              if(match_cons(t, sym_Some_1))
                                {
                                  b_21 = ATgetArgument(t, 0);
                                  t = b_21;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      b_21 = ATgetArgument(t, 0);
                                      t = b_21;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm q_13 = ATgetArgument(t, 0);
                                          c_21 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = c_21;
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
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            {
              ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  e_21 = ATgetArgument(t, 0);
                  f_21 = ATgetArgument(t, 1);
                  t = f_21;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = e_21;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm v_13 = t;
                          int x_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_21;
                              ;
                              LocalPopChoice(x_13);
                            }
                          else
                            {
                              t = v_13;
                              t = e_21;
                            }
                        }
                      else
                        {
                          t = e_21;
                        }
                    }
                  else
                    {
                      t = e_21;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = f_21;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      e_21 = ATgetArgument(t, 0);
                      f_21 = ATgetArgument(t, 1);
                      t = f_21;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = e_21;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm a_14 = t;
                              int b_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = f_21;
                                  ;
                                  LocalPopChoice(b_14);
                                }
                              else
                                {
                                  t = a_14;
                                  t = e_21;
                                }
                            }
                          else
                            {
                              t = e_21;
                            }
                        }
                      else
                        {
                          t = e_21;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = f_21;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          e_21 = ATgetArgument(t, 0);
                          t = e_21;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              e_21 = ATgetArgument(t, 0);
                              f_21 = ATgetArgument(t, 1);
                              g_21 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = g_21;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_21, f_21);
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
  ATerm d_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      f_22 = ATgetArgument(t, 0);
      t = f_22;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          f_22 = ATgetArgument(t, 0);
          t = f_22;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_w_9;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              f_22 = ATgetArgument(t, 0);
              d_22 = ATgetArgument(t, 1);
              t = d_22;
              if(match_cons(t, sym_Id_0))
                {
                  t = f_22;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm e_14 = t;
                      int f_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_22;
                          ;
                          LocalPopChoice(f_14);
                        }
                      else
                        {
                          t = e_14;
                          t = f_22;
                        }
                    }
                  else
                    {
                      t = f_22;
                    }
                }
              else
                {
                  t = f_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = d_22;
                }
            }
          else
            {
              ATerm g_14 = t;
              int h_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      f_22 = ATgetArgument(t, 0);
                      {
                        ATerm i_14 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_14);
                  t = f_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = g_14;
                  {
                    ATerm j_14 = t;
                    int k_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm b_15 = ATgetArgument(t, 0);
                            d_22 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_14);
                        t = d_22;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = j_14;
                        {
                          ATerm c_15 = t;
                          int d_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm e_15 = ATgetArgument(t, 0);
                                  d_22 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(d_15);
                              t = d_22;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = c_15;
                              if(match_cons(t, sym_All_1))
                                {
                                  f_22 = ATgetArgument(t, 0);
                                  t = f_22;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      f_22 = ATgetArgument(t, 0);
                                      t = f_22;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          f_22 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = f_22;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_j_12;
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
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
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
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
            {
              ATerm k_15 = t;
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(n_15);
                }
              else
                {
                  t = k_15;
                  {
                    ATerm o_15 = t;
                    int t_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(t_15);
                      }
                    else
                      {
                        t = o_15;
                        {
                          ATerm u_15 = t;
                          int v_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(v_15);
                            }
                          else
                            {
                              t = u_15;
                              {
                                ATerm w_15 = t;
                                int x_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_22 = NULL,p_22 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        o_22 = ATgetArgument(t, 0);
                                        p_22 = ATgetArgument(t, 1);
                                        t = o_22;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            o_22 = ATgetArgument(t, 0);
                                            p_22 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_22;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_22;
                                      }
                                    ;
                                    LocalPopChoice(x_15);
                                  }
                                else
                                  {
                                    t = w_15;
                                    {
                                      ATerm a_16 = t;
                                      int d_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(d_16);
                                        }
                                      else
                                        {
                                          t = a_16;
                                          {
                                            ATerm e_16 = t;
                                            int f_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(f_16);
                                              }
                                            else
                                              {
                                                t = e_16;
                                                {
                                                  ATerm e_0 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm h_16 = ATgetArgument(t, 0);
                                                      if(!(match_cons(h_16, sym_Wld_0)))
                                                        _fail(t);
                                                      e_0 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = e_0;
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
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
        ATerm k_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                v_22 = ATgetArgument(t, 0);
                w_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_22;
            if(match_cons(t, sym_Let_2))
              {
                x_22 = ATgetArgument(t, 0);
                y_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, x_22, (ATerm) ATmakeAppl(sym_Seq_2, v_22, y_22));
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = k_16;
            {
              ATerm p_16 = t;
              int q_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(q_16);
                }
              else
                {
                  t = p_16;
                  {
                    ATerm r_16 = t;
                    int s_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(s_16);
                      }
                    else
                      {
                        t = r_16;
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
ATerm repeat_1_0 (ATerm y_131 (ATerm), ATerm t)
{
  ATerm c_23 (ATerm t)
  {
    ATerm i_2 (ATerm t)
    {
      t = y_131(t);
      t = c_23(t);
      return(t);
    }
    t = try_1_0(i_2, t);
    return(t);
  }
  t = c_23(t);
  return(t);
}
ATerm downup_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  t = q_115(t);
  {
    ATerm j_2 (ATerm t)
    {
      t = downup_1_0(q_115, t);
      return(t);
    }
    t = SRTS_all(j_2, t);
    t = q_115(t);
  }
  return(t);
}
ATerm simplify_widen_0_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      ATerm t_16 = t;
      int u_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0_0(t);
          ;
          LocalPopChoice(u_16);
        }
      else
        {
          t = t_16;
          t = WidenScope_0_0(t);
        }
      return(t);
    }
    t = repeat_1_0(m_2, t);
    return(t);
  }
  t = downup_1_0(l_2, t);
  return(t);
}
ATerm SDefT_4_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
      g_23 = ATgetArgument(t, 2);
      h_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_23);
  d_23 = t;
  t = e_23;
  t = n_105(t);
  i_23 = t;
  t = f_23;
  t = o_105(t);
  j_23 = t;
  t = g_23;
  t = p_105(t);
  k_23 = t;
  t = h_23;
  t = q_105(t);
  l_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, i_23, j_23, k_23, l_23), d_23);
  return(t);
}
ATerm SDef_3_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  x_23 = t;
  if(match_cons(t, sym_SDef_3))
    {
      r_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
      t_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_23);
  q_23 = t;
  t = r_23;
  t = k_105(t);
  u_23 = t;
  t = s_23;
  t = l_105(t);
  v_23 = t;
  t = t_23;
  t = m_105(t);
  w_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, u_23, v_23, w_23), q_23);
  return(t);
}
ATerm Strategies_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  e_24 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_24);
  b_24 = t;
  t = c_24;
  t = n_98(t);
  d_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, d_24), b_24);
  return(t);
}
ATerm Specification_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  l_24 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_24);
  i_24 = t;
  t = j_24;
  t = s_98(t);
  k_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, k_24), i_24);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm s_2 (ATerm t)
    {
      ATerm t_2 (ATerm t)
      {
        ATerm v_2 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            ATerm b_17 = t;
            int e_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, p_113, t);
                ;
                LocalPopChoice(e_17);
              }
            else
              {
                t = b_17;
                t = SDefT_4_0(_id, _id, _id, p_113, t);
              }
            return(t);
          }
          t = map_1_0(z_2, t);
          return(t);
        }
        t = Strategies_1_0(v_2, t);
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(t_2, u_2, t);
      return(t);
    }
    t = Cons_2_0(_id, s_2, t);
    return(t);
  }
  t = Specification_1_0(p_2, t);
  return(t);
}
ATerm _2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  u_24 = t;
  if(match_cons(t, sym__2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  p_24 = t;
  t = q_24;
  t = a_97(t);
  s_24 = t;
  t = r_24;
  t = b_97(t);
  t_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_24, t_24), p_24);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  y_24 = t;
  t = term_f_17;
  t = whoami_0_0(t);
  z_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), z_24), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = y_24;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm c_25 = NULL,d_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_25 = ATgetFirst((ATermList) t);
            d_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_25;
        {
          ATerm f_3 (ATerm t)
          {
            t = d_25;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL;
  h_25 = t;
  t = SSL_explode_term(h_25);
  if(match_cons(t, sym__2))
    {
      ATerm i_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_25;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  ATerm j_25 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, j_25, t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_122(t);
      }
    return(t);
  }
  t = j_25(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  if(match_cons(t, sym__2))
    {
      l_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_25;
  {
    ATerm g_3 (ATerm t)
    {
      t = k_25;
      return(t);
    }
    t = at_end_1_0(g_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm m_25 = NULL;
  ATerm i_3 (ATerm t)
  {
    ATerm n_25 = NULL;
    n_25 = t;
    t = SSL_explode_string(n_25);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm o_25 = NULL;
    o_25 = t;
    t = SSL_explode_string(o_25);
    return(t);
  }
  t = _2_0(i_3, k_3, t);
  t = conc_0_0(t);
  m_25 = t;
  t = SSL_implode_string(m_25);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_25 = NULL;
      u_25 = t;
      t = SSL_is_string(u_25);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(l_3, t);
            ;
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            {
              ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
              y_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_25 = ATgetArgument(t, 0);
                  t = z_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_25 = ATgetArgument(t, 0);
                      t = z_25;
                      {
                        ATerm v_17 = t;
                        int w_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_17);
                          }
                        else
                          {
                            t = v_17;
                            {
                              ATerm m_3 (ATerm t)
                              {
                                t = term_x_17;
                                return(t);
                              }
                              t = debug_1_0(m_3, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm e_26 = NULL,f_26 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_25 = ATgetArgument(t, 0);
                          a_26 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_25;
                      t = eval_config_0_0(t);
                      e_26 = t;
                      t = a_26;
                      t = eval_config_0_0(t);
                      f_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_26, f_26);
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
  ATerm i_26 = NULL;
  i_26 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_26);
  {
    ATerm o_3 (ATerm t)
    {
      ATerm j_26 = NULL;
      t = eval_config_0_0(t);
      j_26 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_26, j_26);
      t = j_26;
      return(t);
    }
    t = try_1_0(o_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_138 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm k_26 = NULL,l_26 = NULL;
    k_26 = t;
    t = term_y_17;
    t = get_config_0_0(t);
    l_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_26, term_z_17);
    t = geq_0_0(t);
    t = k_26;
    t = n_138(t);
    return(t);
  }
  t = try_1_0(q_3, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm a_18 = ATgetArgument(t, 0);
        if(match_cons(a_18, sym_Stream_1))
          {
            m_26 = ATgetArgument(a_18, 0);
          }
        else
          _fail(t);
        n_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(m_26, n_26);
    o_26 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), o_26);
    p_26 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, p_26);
    return(t);
  }
  t = WriteToFile_1_0(v_3, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_137 (ATerm), ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  if(match_cons(t, sym__2))
    {
      q_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_26, term_b_18);
  t = open_stream_0_0(t);
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_26, r_26);
  t = j_137(t);
  t = fclose_0_0(t);
  t = r_26;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_18 = ATgetArgument(t, 0);
        if(match_cons(c_18, sym_Stream_1))
          {
            t_26 = ATgetArgument(c_18, 0);
          }
        else
          _fail(t);
        u_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(t_26, u_26);
    v_26 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, v_26);
    return(t);
  }
  t = WriteToFile_1_0(w_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  w_26 = t;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                x_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(z_3, t);
          ;
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          t = term_f_18;
          x_26 = t;
        }
      return(t);
    }
    t = _2_0(x_3, _id, t);
    t = w_26;
    {
      ATerm a_4 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          t = not_null(x_26);
          return(t);
        }
        t = split_2_0(b_4, _id, t);
        return(t);
      }
      t = _2_0(_id, a_4, t);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_4 (ATerm t)
            {
              ATerm d_4 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(d_4, t);
              return(t);
            }
            t = _2_0(c_4, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
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
ATerm apply_strategy_1_0 (ATerm l_140 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  y_26 = t;
  t = dtime_0_0(t);
  t = y_26;
  t = l_140(t);
  z_26 = t;
  t = dtime_0_0(t);
  a_27 = t;
  t = z_26;
  if(match_cons(t, sym__2))
    {
      b_27 = ATgetArgument(t, 0);
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_27), (ATerm) ATmakeAppl(sym_Runtime_1, a_27)), c_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_27 (ATerm k_27, ATerm t)
  {
    t = SSL_fclose(k_27);
    return(t);
  }
  ATerm n_27 = NULL,o_27 = NULL;
  o_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_27 = ATgetArgument(t, 0);
      {
        ATerm m_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_27);
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = m_18;
            t = q_27(o_27, t);
          }
      }
    }
  else
    {
      t = q_27(o_27, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm v_136 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  r_27 = t;
  t = v_136(t);
  s_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_27), s_27));
  t = r_27;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_27 = NULL;
  t = SSL_stdin_stream();
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_27 = NULL;
  t = SSL_stdout_stream();
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_27 = NULL;
  t = SSL_stderr_stream();
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_27);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      ATerm r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL,x_0 = NULL;
        w_0 = t;
        t = SSL_explode_term(w_0);
        if(match_cons(t, sym__2))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_18 = ATgetArgument(t, 1);
              if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
                {
                  x_0 = ATgetFirst((ATermList) v_18);
                  {
                    ATerm w_18 = (ATerm) ATgetNext((ATermList) v_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_0;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
              ATerm e_4 (ATerm t)
              {
                ATerm d_28 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    d_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_28;
                return(t);
              }
              t = _2_0(e_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  a_28 = ATgetArgument(t, 0);
                  b_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(a_28, b_28);
              c_28 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, c_28);
              ;
              LocalPopChoice(y_18);
            }
          else
            {
              t = x_18;
              {
                ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
                ATerm f_4 (ATerm t)
                {
                  ATerm h_28 = NULL;
                  h_28 = t;
                  t = SSL_is_string(h_28);
                  return(t);
                }
                t = _2_0(f_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_28 = ATgetArgument(t, 0);
                    f_28 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_28, f_28);
                g_28 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_28);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_28 = NULL;
      l_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_28, term_f_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm g_4 (ATerm t)
        {
          t = term_g_19;
          return(t);
        }
        t = debug_1_0(g_4, t);
        _fail(t);
      }
    }
  i_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(k_28);
  j_28 = t;
  t = i_28;
  t = fclose_0_0(t);
  t = j_28;
  return(t);
}
ATerm split_2_0 (ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  n_28 = t;
  t = a_119(t);
  o_28 = t;
  t = n_28;
  t = b_119(t);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              r_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(h_4, t);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = term_n_19;
        r_28 = t;
      }
    t = q_28;
    {
      ATerm i_4 (ATerm t)
      {
        t = not_null(r_28);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, i_4, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm t_28 = NULL;
    t_28 = t;
    if(match_string(t, "-k"))
      {
        t = t_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = t_28;
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm u_28 = NULL,v_28 = NULL;
    u_28 = t;
    t = SSL_string_to_int(u_28);
    v_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), v_28);
    t = u_28;
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_o_19;
    return(t);
  }
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm x_28 = NULL;
        x_28 = t;
        if(match_string(t, "-S"))
          {
            t = x_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = x_28;
          }
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_w_19;
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        t = term_x_19;
        return(t);
      }
      t = Option_3_0(m_4, n_4, o_4, t);
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm y_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_4 (ATerm t)
            {
              ATerm y_28 = NULL,z_28 = NULL;
              y_28 = t;
              t = SSL_string_to_int(y_28);
              z_28 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_28);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, y_28);
              return(t);
            }
            ATerm r_4 (ATerm t)
            {
              t = term_a_20;
              return(t);
            }
            t = ArgOption_3_0(p_4, q_4, r_4, t);
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = y_19;
            {
              ATerm s_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_b_20;
                return(t);
              }
              ATerm u_4 (ATerm t)
              {
                t = term_c_20;
                return(t);
              }
              t = Option_3_0(s_4, t_4, u_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm b_29 = NULL;
    b_29 = t;
    if(match_string(t, "-o"))
      {
        t = b_29;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = b_29;
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm c_29 = NULL;
    c_29 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), c_29);
    t = (ATerm) ATmakeAppl(sym_Output_1, c_29);
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  t = ArgOption_3_0(w_4, x_4, y_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm g_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = g_20;
      {
        ATerm z_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm a_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_j_20;
          return(t);
        }
        ATerm b_5 (ATerm t)
        {
          t = term_k_20;
          return(t);
        }
        t = Option_3_0(z_4, a_5, b_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  f_29 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = f_29;
      t = register_usage_1_0(m_0, t);
    }
  else
    {
      ATerm n_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_29 = ATgetFirst((ATermList) t);
          h_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_29 = ATgetFirst((ATermList) t);
          j_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_29;
      t = i_0(t);
      t = i_29;
      t = k_0(t);
      n_29 = t;
      t = (ATerm) ATinsert(CheckATermList(j_29), n_29);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm p_29 = NULL;
    p_29 = t;
    if(match_string(t, "-i"))
      {
        t = p_29;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = p_29;
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm q_29 = NULL;
    q_29 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), q_29);
    t = (ATerm) ATmakeAppl(sym_Input_1, q_29);
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_l_20;
    return(t);
  }
  t = ArgOption_3_0(c_5, d_5, e_5, t);
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
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_17;
  t = whoami_0_0(t);
  r_29 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_29));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm d_126 (ATerm), ATerm e_126 (ATerm), ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_126(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm u_29 = NULL,v_29 = NULL,y_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_29 = ATgetFirst((ATermList) t);
            v_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_29;
        t = foldr_2_0(d_126, e_126, t);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_29, y_29);
        t = e_126(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  z_29 = t;
  t = SSL_explode_term(z_29);
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      a_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_30;
  t = foldr_2_0(b_124, c_124, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_30 = NULL;
  t = times_0_0(t);
  {
    ATerm f_5 (ATerm t)
    {
      t = term_v_19;
      return(t);
    }
    ATerm g_5 (ATerm t)
    {
      ATerm c_30 = NULL,d_30 = NULL;
      if(match_cons(t, sym__2))
        {
          c_30 = ATgetArgument(t, 0);
          d_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(c_30, d_30);
            ;
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = SSL_addr(c_30, d_30);
          }
      }
      return(t);
    }
    t = crush_2_0(f_5, g_5, t);
    b_30 = t;
    t = SSL_TicksToSeconds(b_30);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  if(match_cons(t, sym__2))
    {
      n_30 = ATgetArgument(t, 0);
      o_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_30;
        if((n_30 != t))
          {
            _fail(t);
          }
        t = m_30;
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = m_30;
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_30, o_30);
              ;
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              t = SSL_gtr(n_30, o_30);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_30, o_30);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_138 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm r_30 = NULL,s_30 = NULL;
    r_30 = t;
    t = term_y_17;
    t = get_config_0_0(t);
    s_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_30, term_a_21);
    t = geq_0_0(t);
    t = r_30;
    t = m_138(t);
    return(t);
  }
  t = try_1_0(h_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm u_30 = NULL,v_30 = NULL;
    t = run_time_0_0(t);
    u_30 = t;
    t = term_f_17;
    t = whoami_0_0(t);
    v_30 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_30), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_30));
    t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_21), u_30), term_h_21), v_30));
    return(t);
  }
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm j_141 (ATerm), ATerm t)
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
        ATerm j_5 (ATerm t)
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
        t = option_defined_1_0(j_5, t);
      }
    }
  t = j_141(t);
  return(t);
}
ATerm map_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  ATerm x_30 (ATerm t)
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = Cons_2_0(p_121, x_30, t);
      }
    return(t);
  }
  t = x_30(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_30 = ATgetFirst((ATermList) t);
      a_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_31 = NULL,f_31 = NULL;
        t = a_31;
        t = g_0(t);
        e_31 = t;
        t = z_30;
        t = f_0(t);
        f_31 = t;
        t = a_31;
        {
          ATerm k_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_31), f_31);
            return(t);
          }
          t = reverse_acc_2_0(f_0, k_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_17;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, l_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  j_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_31);
  g_31 = t;
  t = h_31;
  t = j_113(t);
  i_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, i_31), g_31);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm m_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(m_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_u_21;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm n_5 (ATerm t)
    {
      ATerm n_31 = NULL;
      n_31 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, n_31), term_v_21);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(n_5, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm k_113 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  r_31 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_31);
  o_31 = t;
  t = p_31;
  t = k_113(t);
  q_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, q_31), o_31);
  return(t);
}
ATerm fetch_1_0 (ATerm z_121 (ATerm), ATerm t)
{
  ATerm v_31 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_121, _id, t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = Cons_2_0(_id, v_31, t);
      }
    return(t);
  }
  t = v_31(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm j_142 (ATerm), ATerm t)
{
  t = fetch_1_0(j_142, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  x_31 = t;
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_22 = ATgetFirst((ATermList) t);
                ATerm b_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_31;
          }
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = (ATerm) ATinsert(ATempty, x_31);
      }
    y_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), y_31);
    t = x_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm g_118 (ATerm), ATerm t)
{
  ATerm c_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_118(t);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = c_22;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm p_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_22;
        return(t);
      }
      ATerm q_5 (ATerm t)
      {
        t = term_l_22;
        return(t);
      }
      t = Option_3_0(o_5, p_5, q_5, t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm r_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_22;
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = term_n_22;
          return(t);
        }
        t = Option_3_0(r_5, s_5, t_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  if(match_cons(t, sym__3))
    {
      e_32 = ATgetArgument(t, 0);
      f_32 = ATgetArgument(t, 1);
      g_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_32, f_32);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_22 = ATgetArgument(t, 0);
            ATerm t_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_32, f_32);
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = (ATerm) ATempty;
      }
    h_32 = t;
    t = SSL_table_put(e_32, f_32, (ATerm) ATinsert(CheckATermList(h_32), g_32));
    t = (ATerm) ATmakeAppl(sym__3, e_32, f_32, g_32);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm o_143 (ATerm), ATerm t)
{
  ATerm m_32 = NULL;
  t = term_f_17;
  t = o_143(t);
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_22, term_z_22, m_32);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
  o_32 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = o_32;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm t_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_32 = ATgetFirst((ATermList) t);
          q_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_32;
      t = a_0(t);
      t = term_f_17;
      t = b_0(t);
      t_32 = t;
      t = (ATerm) ATinsert(CheckATermList(q_32), t_32);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm v_32 = NULL;
    v_32 = t;
    if(match_string(t, "--help"))
      {
        t = v_32;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = v_32;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = v_32;
          }
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_a_23;
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = term_b_23;
    return(t);
  }
  t = Option_3_0(v_5, w_5, x_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL;
  b_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_32 = ATgetFirst((ATermList) t);
      y_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_33);
  w_32 = t;
  t = x_32;
  t = j_98(t);
  z_32 = t;
  t = y_32;
  t = k_98(t);
  a_33 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_33), z_32), w_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_143 (ATerm), ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  {
    ATerm y_5 (ATerm t)
    {
      t = term_n_23;
      t = m_143(t);
      return(t);
    }
    t = try_1_0(y_5, t);
    t = i_33;
    {
      ATerm z_5 (ATerm t)
      {
        ATerm j_33 = NULL;
        j_33 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_33);
        t = (ATerm) ATmakeAppl(sym_Program_1, j_33);
        return(t);
      }
      ATerm a_6 (ATerm t)
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_23);
              }
            else
              {
                t = y_23;
                t = m_143(t);
                t = Cons_2_0(_id, a_6, t);
              }
            ;
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            {
              ATerm l_33 = NULL,m_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_33 = ATgetFirst((ATermList) t);
                  m_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_33), (ATerm) ATmakeAppl(sym_Undefined_1, l_33));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_5, a_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm l_143 (ATerm), ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_33;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm a_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_143(t);
          ;
          LocalPopChoice(f_24);
        }
      else
        {
          t = a_24;
          {
            ATerm g_24 = t;
            int h_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(h_24);
              }
            else
              {
                t = g_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_6, t);
    {
      ATerm c_6 (ATerm t)
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_33 = NULL;
            z_33 = t;
            {
              ATerm o_24 = t;
              int v_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_33;
                  {
                    ATerm w_24 = t;
                    int x_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_l_21;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(x_24);
                      }
                    else
                      {
                        t = w_24;
                        {
                          ATerm d_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(d_6, t);
                        }
                      }
                    t = z_33;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(v_24);
                }
              else
                {
                  t = o_24;
                  t = term_j_22;
                  t = get_config_0_0(t);
                  t = z_33;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            {
              ATerm e_6 (ATerm t)
              {
                ATerm f_6 (ATerm t)
                {
                  t_33 = t;
                  return(t);
                }
                t = Undefined_1_0(f_6, t);
                return(t);
              }
              t = option_defined_1_0(e_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_33)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_33)), term_a_25));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(c_6, t);
      u_33 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = u_33;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_141 (ATerm), ATerm m_141 (ATerm), ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm t)
{
  ATerm v_4 = NULL;
  t = parse_options_1_0(l_141, t);
  v_4 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), v_4);
  t = v_4;
  t = n_141(t);
  {
    ATerm b_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_141, t);
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = b_25;
        {
          ATerm f_25 = t;
          int g_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_141(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_25);
            }
          else
            {
              t = f_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_141(t);
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(a_141, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_6, c_141, d_141, h_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm j_6 (ATerm t)
    {
      ATerm c_34 = NULL,d_34 = NULL;
      c_34 = t;
      t = term_q_20;
      t = get_config_0_0(t);
      d_34 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, d_34));
      t = c_34;
      return(t);
    }
    t = if_verbose2_1_0(j_6, t);
    return(t);
  }
  t = iowrap_4_0(u_140, v_140, w_140, i_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm t)
{
  t = iowrap_3_0(s_140, t_140, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm p_140 (ATerm), ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    t = _2_0(_id, p_140, t);
    return(t);
  }
  t = iowrap_2_0(k_6, _fail, t);
  return(t);
}
ATerm optimize2_comp_0_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm m_6 (ATerm t)
    {
      t = simplify_widen_0_0(t);
      t = simplify_0_0(t);
      t = simplify_clean_0_0(t);
      return(t);
    }
    t = apply_to_bodies_1_0(m_6, t);
    return(t);
  }
  t = iowrap_1_0(l_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = optimize2_comp_0_0(t);
  return(t);
}
