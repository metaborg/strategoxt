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
ATerm term_c_25;
ATerm term_p_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_w_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_s_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_h_17;
ATerm term_x_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_g_10;
void init_constant_terms (void)
{
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Op_2, term_m_12, (ATerm) ATempty);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__3, term_k_22, term_l_22, term_h_17);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm simplify_0_0 (ATerm);
ATerm diff_1_0 (ATerm c_122 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm i_131 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm isect_1_0 (ATerm a_122 (ATerm), ATerm);
ATerm isect_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm k_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm);
ATerm union_1_0 (ATerm g_122 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm);
ATerm crush_3_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm);
ATerm free_vars_3_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm NarrowScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm e_114 (ATerm), ATerm);
ATerm simplify_narrow_0_0 (ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm);
ATerm zip_1_0 (ATerm v_118 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm);
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
ATerm repeat_1_0 (ATerm o_130 (ATerm), ATerm);
ATerm downup_1_0 (ATerm g_114 (ATerm), ATerm);
ATerm simplify_widen_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm a_98 (ATerm), ATerm);
ATerm apply_to_bodies_1_0 (ATerm f_112 (ATerm), ATerm);
ATerm _2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_120 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_137 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm z_135 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_139 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm l_135 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm);
ATerm crush_2_0 (ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_137 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm z_139 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_120 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm z_111 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_112 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm p_120 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm z_140 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm w_116 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm e_142 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_142 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm b_142 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm k_139 (ATerm), ATerm l_139 (ATerm), ATerm m_139 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm i_139 (ATerm), ATerm j_139 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm f_139 (ATerm), ATerm);
ATerm optimize1_comp_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = repeat_1_0(Optimize_0_0, t);
    return(t);
  }
  t = downup_1_0(b_0, t);
  return(t);
}
ATerm diff_1_0 (ATerm c_122 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_1;
  {
    ATerm l_1 (ATerm t)
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
            ATerm q_6 = t;
            int s_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_0 (ATerm t)
                {
                  t = j_1;
                  return(t);
                }
                t = HdMember_p__2_0(c_122, h_0, t);
                t = l_1(t);
                ;
                LocalPopChoice(s_6);
              }
            else
              {
                t = q_6;
                t = Cons_2_0(_id, l_1, t);
              }
          }
        }
      return(t);
    }
    t = l_1(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL,s_1 = NULL,u_1 = NULL,a_2 = NULL,b_2 = NULL,g_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_6 = ATgetFirst((ATermList) t);
      if(match_cons(t_6, sym__2))
        {
          n_1 = ATgetArgument(t_6, 0);
          p_1 = ATgetArgument(t_6, 1);
        }
      else
        _fail(t);
      s_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_1);
  if(match_cons(t, sym__2))
    {
      u_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_1);
  if(match_cons(t, sym__2))
    {
      if((u_1 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_2, a_2);
  t = zip_1_0(_id, t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_2, s_1);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_131(t);
        ;
        LocalPopChoice(v_6);
      }
    else
      {
        t = u_6;
        t = e_131(t);
        t = k_2(t);
      }
    return(t);
  }
  t = k_2(t);
  return(t);
}
ATerm for_3_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm i_131 (ATerm), ATerm t)
{
  t = g_131(t);
  t = while_not_2_0(h_131, i_131, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_0 (ATerm t)
      {
        ATerm s_2 = NULL;
        s_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_2);
        return(t);
      }
      ATerm m_0 (ATerm t)
      {
        ATerm p_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, p_0, t);
        return(t);
      }
      ATerm o_0 (ATerm t)
      {
        ATerm y_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              ATerm a_7 = t;
              int b_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_2 = ATgetFirst((ATermList) t);
                      y_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = v_2;
                  if(match_cons(t, sym__2))
                    {
                      w_2 = ATgetArgument(t, 0);
                      x_2 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_2;
                  if((w_2 != t))
                    {
                      _fail(t);
                    }
                  t = y_2;
                  ;
                  LocalPopChoice(b_7);
                }
              else
                {
                  t = a_7;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, q_0, t);
            ;
            LocalPopChoice(z_6);
          }
        else
          {
            t = y_6;
            {
              ATerm d_3 = NULL,e_3 = NULL,h_3 = NULL,j_3 = NULL;
              if(match_cons(t, sym__2))
                {
                  d_3 = ATgetArgument(t, 0);
                  e_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_3;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_3 = ATgetFirst((ATermList) t);
                  j_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_3), h_3), j_3);
            }
          }
        return(t);
      }
      t = for_3_0(j_0, m_0, o_0, t);
      ;
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      {
        ATerm r_0 (ATerm t)
        {
          ATerm n_3 = NULL;
          if(match_cons(t, sym__2))
            {
              n_3 = ATgetArgument(t, 0);
              if((n_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(r_0, t);
      }
    }
  return(t);
}
ATerm isect_1_0 (ATerm a_122 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm c_7 = t;
      int d_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(d_7);
        }
      else
        {
          t = c_7;
          {
            ATerm t_3 = NULL,v_3 = NULL;
            t_3 = t;
            {
              ATerm e_7 = t;
              int f_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm g_7 = ATgetFirst((ATermList) t);
                      v_3 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_7);
                  {
                    ATerm h_7 = t;
                    int i_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = t_3;
                        {
                          ATerm s_0 (ATerm t)
                          {
                            t = r_3;
                            return(t);
                          }
                          t = HdMember_p__2_0(a_122, s_0, t);
                          t = t_3;
                          t = Cons_2_0(_id, b_4, t);
                        }
                        ;
                        LocalPopChoice(i_7);
                      }
                    else
                      {
                        t = h_7;
                        t = v_3;
                        t = b_4(t);
                      }
                  }
                }
              else
                {
                  t = e_7;
                  t = t_3;
                  {
                    ATerm t_0 (ATerm t)
                    {
                      t = r_3;
                      return(t);
                    }
                    t = HdMember_p__2_0(a_122, t_0, t);
                    t = t_3;
                    t = Cons_2_0(_id, b_4, t);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = b_4(t);
  }
  return(t);
}
ATerm isect_0_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm c_4 = NULL;
    if(match_cons(t, sym__2))
      {
        c_4 = ATgetArgument(t, 0);
        if((c_4 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = isect_1_0(u_0, t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm k_101 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,u_5 = NULL,p_6 = NULL,r_6 = NULL;
  r_6 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      u_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_6);
  j_4 = t;
  t = u_5;
  t = k_101(t);
  p_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, p_6), j_4);
  return(t);
}
ATerm RDefT_4_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm t)
{
  ATerm p_7 = NULL,r_7 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,j_8 = NULL,u_8 = NULL,v_8 = NULL,a_9 = NULL,b_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      r_7 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      g_8 = ATgetArgument(t, 2);
      h_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_9);
  p_7 = t;
  t = r_7;
  t = b_101(t);
  j_8 = t;
  t = f_8;
  t = c_101(t);
  u_8 = t;
  t = g_8;
  t = d_101(t);
  v_8 = t;
  t = h_8;
  t = e_101(t);
  a_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, j_8, u_8, v_8, a_9), p_7);
  return(t);
}
ATerm Scope_2_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
  w_9 = t;
  if(match_cons(t, sym_Scope_2))
    {
      r_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_9);
  q_9 = t;
  t = r_9;
  t = n_102(t);
  u_9 = t;
  t = t_9;
  t = o_102(t);
  v_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, u_9, v_9), q_9);
  return(t);
}
ATerm tboundin_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(h_113, f_113, t);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(h_113, h_113, h_113, f_113, t);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm n_7 = t;
              int o_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(h_113, h_113, h_113, f_113, t);
                  ;
                  LocalPopChoice(o_7);
                }
              else
                {
                  t = n_7;
                  t = DynamicRules_1_0(f_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm d_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm q_7 = ATgetArgument(t, 0);
      ATerm s_7 = ATgetArgument(t, 1);
      d_10 = ATgetArgument(t, 2);
      {
        ATerm t_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = d_10;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm h_10 = NULL;
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            h_10 = ATgetArgument(t, 0);
            {
              ATerm w_7 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_7);
        t = h_10;
      }
    else
      {
        t = u_7;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            h_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_10;
      }
    return(t);
  }
  t = map_1_0(v_0, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm k_10 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      ATerm y_7 = ATgetArgument(t, 1);
      k_10 = ATgetArgument(t, 2);
      {
        ATerm z_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = k_10;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm l_10 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_10;
  t = tvars_0_0(t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm s_10 = NULL,z_10 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      z_10 = ATgetArgument(t, 0);
      t = z_10;
      if(match_cons(t, sym_Rule_3))
        {
          s_10 = ATgetArgument(t, 0);
          {
            ATerm a_8 = ATgetArgument(t, 1);
          }
          {
            ATerm b_8 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_10;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          z_10 = ATgetArgument(t, 0);
          {
            ATerm c_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_10;
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_11 = ATgetFirst((ATermList) t);
      f_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_122(t);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm g_11 = NULL;
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_11, g_11);
      t = k_122(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
    t = f_11;
  }
  return(t);
}
ATerm union_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11;
  {
    ATerm j_11 (ATerm t)
    {
      ATerm d_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_11;
          ;
          LocalPopChoice(e_8);
        }
      else
        {
          t = d_8;
          {
            ATerm i_8 = t;
            int k_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_0 (ATerm t)
                {
                  t = h_11;
                  return(t);
                }
                t = HdMember_p__2_0(g_122, z_0, t);
                t = j_11(t);
                ;
                LocalPopChoice(k_8);
              }
            else
              {
                t = i_8;
                t = Cons_2_0(_id, j_11, t);
              }
          }
        }
      return(t);
    }
    t = j_11(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm k_11 = NULL;
    if(match_cons(t, sym__2))
      {
        k_11 = ATgetArgument(t, 0);
        if((k_11 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(a_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_124(t);
      ;
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
        ATerm n_11 = NULL,o_11 = NULL,u_11 = NULL,v_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_11 = ATgetFirst((ATermList) t);
            o_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_11;
        t = x_124(t);
        u_11 = t;
        t = o_11;
        t = foldr_3_0(v_124, w_124, x_124, t);
        v_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_11, v_11);
        t = w_124(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,z_11 = NULL;
  w_11 = t;
  t = SSL_explode_term(w_11);
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11;
  t = foldr_3_0(t_122, u_122, v_122, t);
  return(t);
}
ATerm free_vars_3_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_12 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_128(t);
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
              ATerm a_12 = NULL,c_12 = NULL;
              a_12 = t;
              t = y_128(t);
              c_12 = t;
              t = a_12;
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = c_12;
                    return(t);
                  }
                  t = split_2_0(d_12, d_1, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = z_128(b_1, d_12, c_1, t);
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(e_1, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(r_8);
            }
          else
            {
              t = q_8;
              {
                ATerm f_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(f_1, union_0_0, d_12, t);
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
  ATerm g_1 (ATerm t)
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
  ATerm h_1 (ATerm t)
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        {
          ATerm w_8 = t;
          int x_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(x_8);
            }
          else
            {
              t = w_8;
              {
                ATerm y_8 = t;
                int z_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(z_8);
                  }
                else
                  {
                    t = y_8;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(g_1, h_1, tboundin_3_0, t);
  return(t);
}
ATerm NarrowScope_0_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      f_12 = ATgetArgument(t, 0);
      {
        ATerm c_9 = ATgetArgument(t, 1);
        if(match_cons(c_9, sym_Seq_2))
          {
            g_12 = ATgetArgument(c_9, 0);
            h_12 = ATgetArgument(c_9, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_12;
  t = tvars_0_0(t);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_12, f_12);
  t = isect_0_0(t);
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_12, j_12);
  t = diff_0_0(t);
  k_12 = t;
  {
    ATerm d_9 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_9;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, j_12, (ATerm) ATmakeAppl(sym_Seq_2, g_12, (ATerm) ATmakeAppl(sym_Scope_2, k_12, h_12)));
  }
  return(t);
}
ATerm topdown_1_0 (ATerm e_114 (ATerm), ATerm t)
{
  t = e_114(t);
  {
    ATerm i_1 (ATerm t)
    {
      t = topdown_1_0(e_114, t);
      return(t);
    }
    t = SRTS_all(i_1, t);
  }
  return(t);
}
ATerm simplify_narrow_0_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = try_1_0(NarrowScope_0_0, t);
    return(t);
  }
  t = topdown_1_0(m_1, t);
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_12;
  if(match_cons(t, sym_Scope_2))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
      t = s_12;
      if(match_cons(t, sym_Scope_2))
        {
          t_12 = ATgetArgument(t, 0);
          u_12 = ATgetArgument(t, 1);
          {
            ATerm e_9 = t;
            int f_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, p_12, (ATerm) ATmakeAppl(sym_Seq_2, s_12, q_12));
                ;
                LocalPopChoice(f_9);
              }
            else
              {
                t = e_9;
                t = (ATerm) ATmakeAppl(sym_Scope_2, t_12, (ATerm) ATmakeAppl(sym_Seq_2, u_12, v_12));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, p_12, (ATerm) ATmakeAppl(sym_Seq_2, s_12, q_12));
        }
    }
  else
    {
      t = s_12;
      if(match_cons(t, sym_Scope_2))
        {
          t_12 = ATgetArgument(t, 0);
          u_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, t_12, (ATerm) ATmakeAppl(sym_Seq_2, u_12, v_12));
    }
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  if(match_cons(t, sym_Test_1))
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      k_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_13)), (ATerm) ATmakeAppl(sym_Seq_2, k_13, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_13)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      m_13 = ATgetArgument(t, 0);
      {
        ATerm g_9 = ATgetArgument(t, 1);
        if(match_cons(g_9, sym_Scope_2))
          {
            n_13 = ATgetArgument(g_9, 0);
            o_13 = ATgetArgument(g_9, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_13, n_13);
  t = conc_0_0(t);
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, p_13, o_13);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,y_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_13;
  if(match_cons(t, sym_Build_1))
    {
      ATerm h_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14;
  if(match_cons(t, sym_Where_1))
    {
      d_14 = ATgetArgument(t, 0);
      t = d_14;
      if(match_cons(t, sym_Prim_2))
        {
          v_13 = ATgetArgument(t, 0);
          w_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          d_14 = ATgetArgument(t, 0);
          e_14 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, d_14, e_14);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              d_14 = ATgetArgument(t, 0);
              e_14 = ATgetArgument(t, 1);
              f_14 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  ATerm n_14 (ATerm t)
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_118(t);
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        t = r_118(t);
        t = _2_0(t_118, n_14, t);
        t = s_118(t);
      }
    return(t);
  }
  t = n_14(t);
  return(t);
}
ATerm zip_1_0 (ATerm v_118 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm k_9 = ATgetArgument(t, 0);
        if(((ATgetType(k_9) != AT_LIST) || !(ATisEmpty(k_9))))
          _fail(t);
        {
          ATerm l_9 = ATgetArgument(t, 1);
          if(((ATgetType(l_9) != AT_LIST) || !(ATisEmpty(l_9))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_9 = ATgetArgument(t, 0);
        if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
          {
            o_14 = ATgetFirst((ATermList) m_9);
            q_14 = (ATerm) ATgetNext((ATermList) m_9);
          }
        else
          _fail(t);
        {
          ATerm n_9 = ATgetArgument(t, 1);
          if(((ATgetType(n_9) == AT_LIST) && !(ATisEmpty(n_9))))
            {
              p_14 = ATgetFirst((ATermList) n_9);
              r_14 = (ATerm) ATgetNext((ATermList) n_9);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_14, p_14), (ATerm) ATmakeAppl(sym__2, q_14, r_14));
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm s_14 = NULL,t_14 = NULL;
    if(match_cons(t, sym__2))
      {
        s_14 = ATgetArgument(t, 0);
        t_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(t_14), s_14);
    return(t);
  }
  t = genzip_4_0(o_1, q_1, r_1, v_118, t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      if(match_cons(o_9, sym_Build_1))
        {
          ATerm s_9 = ATgetArgument(o_9, 0);
          if(match_cons(s_9, sym_Op_2))
            {
              v_14 = ATgetArgument(s_9, 0);
              u_14 = ATgetArgument(s_9, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm p_9 = ATgetArgument(t, 1);
        if(match_cons(p_9, sym_Match_1))
          {
            ATerm x_9 = ATgetArgument(p_9, 0);
            if(match_cons(x_9, sym_Op_2))
              {
                if((v_14 != ATgetArgument(x_9, 0)))
                  {
                    _fail(ATgetArgument(x_9, 0));
                  }
                w_14 = ATgetArgument(x_9, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, u_14, w_14);
  {
    ATerm t_1 (ATerm t)
    {
      ATerm y_14 = NULL,z_14 = NULL;
      if(match_cons(t, sym__2))
        {
          y_14 = ATgetArgument(t, 0);
          z_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_14), (ATerm) ATmakeAppl(sym_Match_1, z_14));
      return(t);
    }
    t = zip_1_0(t_1, t);
    x_14 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_14), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_14, u_14)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(match_cons(y_9, sym_Build_1))
        {
          ATerm a_10 = ATgetArgument(y_9, 0);
          if(match_cons(a_10, sym_Op_2))
            {
              a_15 = ATgetArgument(a_10, 0);
              {
                ATerm b_10 = ATgetArgument(a_10, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm z_9 = ATgetArgument(t, 1);
        if(match_cons(z_9, sym_Match_1))
          {
            ATerm c_10 = ATgetArgument(z_9, 0);
            if(match_cons(c_10, sym_Op_2))
              {
                b_15 = ATgetArgument(c_10, 0);
                {
                  ATerm e_10 = ATgetArgument(c_10, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
  {
    ATerm f_10 = t;
    if((PushChoice() == 0))
      {
        ATerm c_15 = NULL;
        if(match_cons(t, sym__2))
          {
            c_15 = ATgetArgument(t, 0);
            if((c_15 != ATgetArgument(t, 1)))
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
        t = f_10;
      }
    t = term_g_10;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            {
              ATerm o_10 = t;
              int p_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_15 = NULL,n_15 = NULL,o_15 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      l_15 = ATgetArgument(t, 0);
                      n_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_15;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm q_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_15;
                  if(match_cons(t, sym_Build_1))
                    {
                      o_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(p_10);
                }
              else
                {
                  t = o_10;
                  {
                    ATerm r_10 = t;
                    int t_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(t_10);
                      }
                    else
                      {
                        t = r_10;
                        {
                          ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              r_15 = ATgetArgument(t, 0);
                              t_15 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = r_15;
                          if(match_cons(t, sym_Match_1))
                            {
                              s_15 = ATgetArgument(t, 0);
                              t = t_15;
                              if(match_cons(t, sym_Match_1))
                                {
                                  u_15 = ATgetArgument(t, 0);
                                  t = u_15;
                                  if((s_15 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_15);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      u_15 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = u_15;
                                  if((s_15 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_15);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  s_15 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = t_15;
                              if(match_cons(t, sym_Match_1))
                                {
                                  u_15 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = u_15;
                              if((s_15 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, s_15);
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
  ATerm a_16 = NULL,b_16 = NULL,d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_16;
  if(match_cons(t, sym_Seq_2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_16 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, d_16, a_16);
            t = BMF_0_0(t);
            i_16 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, b_16);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            t = (ATerm) ATmakeAppl(sym__2, d_16, e_16);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, d_16, e_16);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm n_16 (ATerm t)
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_115(t);
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        t = SRTS_one(n_16, t);
      }
    return(t);
  }
  t = n_16(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      if(((ATgetType(y_10) == AT_LIST) && !(ATisEmpty(y_10))))
        {
          ATerm b_11 = ATgetFirst((ATermList) y_10);
          if(match_cons(b_11, sym_SDefT_4))
            {
              p_16 = ATgetArgument(b_11, 0);
              {
                ATerm d_11 = ATgetArgument(b_11, 1);
                if(((ATgetType(d_11) != AT_LIST) || !(ATisEmpty(d_11))))
                  _fail(t);
              }
              {
                ATerm l_11 = ATgetArgument(b_11, 2);
                if(((ATgetType(l_11) != AT_LIST) || !(ATisEmpty(l_11))))
                  _fail(t);
              }
              o_16 = ATgetArgument(b_11, 3);
            }
          else
            _fail(t);
          {
            ATerm c_11 = (ATerm) ATgetNext((ATermList) y_10);
            if(((ATgetType(c_11) != AT_LIST) || !(ATisEmpty(c_11))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm a_11 = ATgetArgument(t, 1);
        if(match_cons(a_11, sym_CallT_3))
          {
            ATerm m_11 = ATgetArgument(a_11, 0);
            if(match_cons(m_11, sym_SVar_1))
              {
                if((p_16 != ATgetArgument(m_11, 0)))
                  {
                    _fail(ATgetArgument(m_11, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm p_11 = ATgetArgument(a_11, 1);
              if(((ATgetType(p_11) != AT_LIST) || !(ATisEmpty(p_11))))
                _fail(t);
            }
            {
              ATerm q_11 = ATgetArgument(a_11, 2);
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
  t = o_16;
  {
    ATerm r_11 = t;
    if((PushChoice() == 0))
      {
        ATerm v_1 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm s_11 = ATgetArgument(t, 0);
              if(match_cons(s_11, sym_SVar_1))
                {
                  if((p_16 != ATgetArgument(s_11, 0)))
                    {
                      _fail(ATgetArgument(s_11, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm t_11 = ATgetArgument(t, 1);
                if(((ATgetType(t_11) != AT_LIST) || !(ATisEmpty(t_11))))
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
        t = oncetd_1_0(v_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_11;
      }
    t = o_16;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      e_17 = ATgetArgument(t, 0);
      t = e_17;
      if(match_cons(t, sym_Seq_2))
        {
          c_17 = ATgetArgument(t, 0);
          y_16 = ATgetArgument(t, 1);
          t = c_17;
          if(match_cons(t, sym_Where_1))
            {
              x_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_16;
          if(match_cons(t, sym_Seq_2))
            {
              z_16 = ATgetArgument(t, 0);
              b_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_16;
          if(match_cons(t, sym_Build_1))
            {
              a_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, x_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_17), b_17)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              c_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          e_17 = ATgetArgument(t, 0);
          t = e_17;
          if(match_cons(t, sym_Test_1))
            {
              c_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              e_17 = ATgetArgument(t, 0);
              t = e_17;
              if(match_cons(t, sym_Not_1))
                {
                  c_17 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, c_17);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  e_17 = ATgetArgument(t, 0);
                  f_17 = ATgetArgument(t, 1);
                  t = f_17;
                  if((e_17 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      e_17 = ATgetArgument(t, 0);
                      f_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_17;
                  if((e_17 != t))
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
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      t_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
      t = t_17;
      if(match_cons(t, sym_LChoice_2))
        {
          u_17 = ATgetArgument(t, 0);
          v_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, u_17, (ATerm) ATmakeAppl(sym_LChoice_2, v_17, w_17));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          t_17 = ATgetArgument(t, 0);
          w_17 = ATgetArgument(t, 1);
          t = t_17;
          if(match_cons(t, sym_Seq_2))
            {
              u_17 = ATgetArgument(t, 0);
              v_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, u_17, (ATerm) ATmakeAppl(sym_Seq_2, v_17, w_17));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              t_17 = ATgetArgument(t, 0);
              w_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_17;
          if(match_cons(t, sym_Choice_2))
            {
              u_17 = ATgetArgument(t, 0);
              v_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, u_17, (ATerm) ATmakeAppl(sym_Choice_2, v_17, w_17));
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
        ATerm w_1 (ATerm t)
        {
          ATerm x_1 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(x_1, t);
          return(t);
        }
        t = Cons_2_0(_id, w_1, t);
      }
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = y_11;
      {
        ATerm y_1 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, y_1, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, p_18, q_18);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          p_18 = ATgetArgument(t, 0);
          t = p_18;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_18 = ATgetFirst((ATermList) t);
              l_18 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, k_18, (ATerm) ATmakeAppl(sym_LChoices_1, l_18));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_g_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              p_18 = ATgetArgument(t, 0);
              t = p_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_18 = ATgetFirst((ATermList) t);
                  l_18 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, k_18, (ATerm) ATmakeAppl(sym_Choices_1, l_18));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_g_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  p_18 = ATgetArgument(t, 0);
                  t = p_18;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      k_18 = ATgetFirst((ATermList) t);
                      l_18 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_18, (ATerm) ATmakeAppl(sym_Seqs_1, l_18));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_l_12;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_18 = ATgetArgument(t, 0);
                      q_18 = ATgetArgument(t, 1);
                      n_18 = ATgetArgument(t, 2);
                      m_18 = ATgetArgument(t, 3);
                      {
                        ATerm d_19 = NULL,e_19 = NULL;
                        t = q_18;
                        {
                          ATerm z_1 (ATerm t)
                          {
                            ATerm f_19 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                f_19 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, f_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_12), term_o_12));
                            return(t);
                          }
                          t = map1_1_0(z_1, t);
                          d_19 = t;
                          t = n_18;
                          {
                            ATerm c_2 (ATerm t)
                            {
                              ATerm d_2 (ATerm t)
                              {
                                ATerm g_19 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    g_19 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, g_19, term_o_12);
                                return(t);
                              }
                              t = try_1_0(d_2, t);
                              return(t);
                            }
                            t = map1_1_0(c_2, t);
                            e_19 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, p_18, d_19, e_19, m_18);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          p_18 = ATgetArgument(t, 0);
                          q_18 = ATgetArgument(t, 1);
                          n_18 = ATgetArgument(t, 2);
                          m_18 = ATgetArgument(t, 3);
                          {
                            ATerm r_12 = t;
                            int w_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_19 = NULL,m_19 = NULL;
                                t = n_18;
                                {
                                  ATerm e_2 (ATerm t)
                                  {
                                    ATerm n_19 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        n_19 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, n_19, term_o_12);
                                    return(t);
                                  }
                                  t = map1_1_0(e_2, t);
                                  l_19 = t;
                                  t = q_18;
                                  {
                                    ATerm f_2 (ATerm t)
                                    {
                                      ATerm h_2 (ATerm t)
                                      {
                                        ATerm o_19 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            o_19 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_12), term_o_12));
                                        return(t);
                                      }
                                      t = try_1_0(h_2, t);
                                      return(t);
                                    }
                                    t = map_1_0(f_2, t);
                                    m_19 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, p_18, m_19, l_19, m_18);
                                  }
                                }
                                ;
                                LocalPopChoice(w_12);
                              }
                            else
                              {
                                t = r_12;
                                {
                                  ATerm t_19 = NULL,u_19 = NULL;
                                  t = q_18;
                                  {
                                    ATerm i_2 (ATerm t)
                                    {
                                      ATerm v_19 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          v_19 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_12), term_o_12));
                                      return(t);
                                    }
                                    t = map1_1_0(i_2, t);
                                    t_19 = t;
                                    t = n_18;
                                    {
                                      ATerm j_2 (ATerm t)
                                      {
                                        ATerm l_2 (ATerm t)
                                        {
                                          ATerm w_19 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              w_19 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, w_19, term_o_12);
                                          return(t);
                                        }
                                        t = try_1_0(l_2, t);
                                        return(t);
                                      }
                                      t = map_1_0(j_2, t);
                                      u_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, p_18, t_19, u_19, m_18);
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
                              p_18 = ATgetArgument(t, 0);
                              q_18 = ATgetArgument(t, 1);
                              n_18 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, q_18, (ATerm) ATmakeAppl(sym_Op_2, term_x_12, (ATerm) ATinsert(ATinsert(ATempty, n_18), p_18)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  p_18 = ATgetArgument(t, 0);
                                  q_18 = ATgetArgument(t, 1);
                                  n_18 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, n_18)), p_18), (ATerm) ATmakeAppl(sym_Build_1, q_18)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      p_18 = ATgetArgument(t, 0);
                                      q_18 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_18, (ATerm) ATmakeAppl(sym_Match_1, q_18));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          p_18 = ATgetArgument(t, 0);
                                          q_18 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_18), q_18);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              p_18 = ATgetArgument(t, 0);
                                              q_18 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_18), p_18);
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
  ATerm j_20 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm y_12 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_20;
  {
    ATerm m_2 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(m_2, t);
    t = term_g_10;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_21 = NULL,e_21 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          d_21 = ATgetArgument(t, 0);
          t = d_21;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              d_21 = ATgetArgument(t, 0);
              t = d_21;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_l_12;
            }
          else
            {
              ATerm b_13 = t;
              int c_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      d_21 = ATgetArgument(t, 0);
                      {
                        ATerm d_13 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_13);
                  t = d_21;
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
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm g_13 = ATgetArgument(t, 0);
                            e_21 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_13);
                        t = e_21;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = e_13;
                        {
                          ATerm h_13 = t;
                          int q_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm r_13 = ATgetArgument(t, 0);
                                  e_21 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(q_13);
                              t = e_21;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = h_13;
                              if(match_cons(t, sym_Some_1))
                                {
                                  d_21 = ATgetArgument(t, 0);
                                  t = d_21;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      d_21 = ATgetArgument(t, 0);
                                      t = d_21;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm s_13 = ATgetArgument(t, 0);
                                          e_21 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = e_21;
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
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            {
              ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  g_21 = ATgetArgument(t, 0);
                  h_21 = ATgetArgument(t, 1);
                  t = h_21;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = g_21;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm x_13 = t;
                          int z_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = h_21;
                              ;
                              LocalPopChoice(z_13);
                            }
                          else
                            {
                              t = x_13;
                              t = g_21;
                            }
                        }
                      else
                        {
                          t = g_21;
                        }
                    }
                  else
                    {
                      t = g_21;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = h_21;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      g_21 = ATgetArgument(t, 0);
                      h_21 = ATgetArgument(t, 1);
                      t = h_21;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = g_21;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm a_14 = t;
                              int b_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = h_21;
                                  ;
                                  LocalPopChoice(b_14);
                                }
                              else
                                {
                                  t = a_14;
                                  t = g_21;
                                }
                            }
                          else
                            {
                              t = g_21;
                            }
                        }
                      else
                        {
                          t = g_21;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = h_21;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          g_21 = ATgetArgument(t, 0);
                          t = g_21;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              g_21 = ATgetArgument(t, 0);
                              h_21 = ATgetArgument(t, 1);
                              i_21 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = i_21;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_21, h_21);
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
  ATerm f_22 = NULL,h_22 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      h_22 = ATgetArgument(t, 0);
      t = h_22;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          h_22 = ATgetArgument(t, 0);
          t = h_22;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_g_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              h_22 = ATgetArgument(t, 0);
              f_22 = ATgetArgument(t, 1);
              t = f_22;
              if(match_cons(t, sym_Id_0))
                {
                  t = h_22;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm g_14 = t;
                      int h_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_22;
                          ;
                          LocalPopChoice(h_14);
                        }
                      else
                        {
                          t = g_14;
                          t = h_22;
                        }
                    }
                  else
                    {
                      t = h_22;
                    }
                }
              else
                {
                  t = h_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = f_22;
                }
            }
          else
            {
              ATerm i_14 = t;
              int j_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      h_22 = ATgetArgument(t, 0);
                      {
                        ATerm k_14 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_14);
                  t = h_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = i_14;
                  {
                    ATerm l_14 = t;
                    int m_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm d_15 = ATgetArgument(t, 0);
                            f_22 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(m_14);
                        t = f_22;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = l_14;
                        {
                          ATerm e_15 = t;
                          int f_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm g_15 = ATgetArgument(t, 0);
                                  f_22 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(f_15);
                              t = f_22;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = e_15;
                              if(match_cons(t, sym_All_1))
                                {
                                  h_22 = ATgetArgument(t, 0);
                                  t = h_22;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      h_22 = ATgetArgument(t, 0);
                                      t = h_22;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          h_22 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = h_22;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_l_12;
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
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            {
              ATerm m_15 = t;
              int p_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(p_15);
                }
              else
                {
                  t = m_15;
                  {
                    ATerm q_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(v_15);
                      }
                    else
                      {
                        t = q_15;
                        {
                          ATerm w_15 = t;
                          int x_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(x_15);
                            }
                          else
                            {
                              t = w_15;
                              {
                                ATerm y_15 = t;
                                int z_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_22 = NULL,r_22 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        q_22 = ATgetArgument(t, 0);
                                        r_22 = ATgetArgument(t, 1);
                                        t = q_22;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            q_22 = ATgetArgument(t, 0);
                                            r_22 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = q_22;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_22;
                                      }
                                    ;
                                    LocalPopChoice(z_15);
                                  }
                                else
                                  {
                                    t = y_15;
                                    {
                                      ATerm c_16 = t;
                                      int f_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(f_16);
                                        }
                                      else
                                        {
                                          t = c_16;
                                          {
                                            ATerm g_16 = t;
                                            int h_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(h_16);
                                              }
                                            else
                                              {
                                                t = g_16;
                                                {
                                                  ATerm f_0 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm j_16 = ATgetArgument(t, 0);
                                                      if(!(match_cons(j_16, sym_Wld_0)))
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
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm m_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                x_22 = ATgetArgument(t, 0);
                y_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_22;
            if(match_cons(t, sym_Let_2))
              {
                z_22 = ATgetArgument(t, 0);
                a_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, z_22, (ATerm) ATmakeAppl(sym_Seq_2, x_22, a_23));
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = m_16;
            {
              ATerm r_16 = t;
              int s_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(s_16);
                }
              else
                {
                  t = r_16;
                  {
                    ATerm t_16 = t;
                    int u_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(u_16);
                      }
                    else
                      {
                        t = t_16;
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
ATerm repeat_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm e_23 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      t = o_130(t);
      t = e_23(t);
      return(t);
    }
    t = try_1_0(n_2, t);
    return(t);
  }
  t = e_23(t);
  return(t);
}
ATerm downup_1_0 (ATerm g_114 (ATerm), ATerm t)
{
  t = g_114(t);
  {
    ATerm o_2 (ATerm t)
    {
      t = downup_1_0(g_114, t);
      return(t);
    }
    t = SRTS_all(o_2, t);
    t = g_114(t);
  }
  return(t);
}
ATerm simplify_widen_0_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm q_2 (ATerm t)
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0_0(t);
          ;
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          t = WidenScope_0_0(t);
        }
      return(t);
    }
    t = repeat_1_0(q_2, t);
    return(t);
  }
  t = downup_1_0(p_2, t);
  return(t);
}
ATerm SDefT_4_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      g_23 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
      i_23 = ATgetArgument(t, 2);
      j_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_23);
  f_23 = t;
  t = g_23;
  t = v_104(t);
  k_23 = t;
  t = h_23;
  t = w_104(t);
  l_23 = t;
  t = i_23;
  t = x_104(t);
  m_23 = t;
  t = j_23;
  t = y_104(t);
  n_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, k_23, l_23, m_23, n_23), f_23);
  return(t);
}
ATerm SDef_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
  z_23 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
      v_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_23);
  s_23 = t;
  t = t_23;
  t = s_104(t);
  w_23 = t;
  t = u_23;
  t = t_104(t);
  x_23 = t;
  t = v_23;
  t = u_104(t);
  y_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, w_23, x_23, y_23), s_23);
  return(t);
}
ATerm Strategies_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  g_24 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_24);
  d_24 = t;
  t = e_24;
  t = v_97(t);
  f_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, f_24), d_24);
  return(t);
}
ATerm Specification_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  n_24 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_24);
  k_24 = t;
  t = l_24;
  t = a_98(t);
  m_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, m_24), k_24);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm t_2 (ATerm t)
    {
      ATerm u_2 (ATerm t)
      {
        ATerm a_3 (ATerm t)
        {
          ATerm b_3 (ATerm t)
          {
            ATerm d_17 = t;
            int g_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, f_112, t);
                ;
                LocalPopChoice(g_17);
              }
            else
              {
                t = d_17;
                t = SDefT_4_0(_id, _id, _id, f_112, t);
              }
            return(t);
          }
          t = map_1_0(b_3, t);
          return(t);
        }
        t = Strategies_1_0(a_3, t);
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(u_2, z_2, t);
      return(t);
    }
    t = Cons_2_0(_id, t_2, t);
    return(t);
  }
  t = Specification_1_0(r_2, t);
  return(t);
}
ATerm _2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  w_24 = t;
  if(match_cons(t, sym__2))
    {
      s_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_24);
  r_24 = t;
  t = s_24;
  t = i_96(t);
  u_24 = t;
  t = t_24;
  t = j_96(t);
  v_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, u_24, v_24), r_24);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL;
  a_25 = t;
  t = term_h_17;
  t = whoami_0_0(t);
  b_25 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), b_25), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = a_25;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm e_25 = NULL,f_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_25 = ATgetFirst((ATermList) t);
            f_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_25;
        {
          ATerm c_3 (ATerm t)
          {
            t = f_25;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  j_25 = t;
  t = SSL_explode_term(j_25);
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_25;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_120 (ATerm), ATerm t)
{
  ATerm l_25 (ATerm t)
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_25, t);
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_120(t);
      }
    return(t);
  }
  t = l_25(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  if(match_cons(t, sym__2))
    {
      n_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_25;
  {
    ATerm f_3 (ATerm t)
    {
      t = m_25;
      return(t);
    }
    t = at_end_1_0(f_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_25 = NULL;
  ATerm g_3 (ATerm t)
  {
    ATerm p_25 = NULL;
    p_25 = t;
    t = SSL_explode_string(p_25);
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm q_25 = NULL;
    q_25 = t;
    t = SSL_explode_string(q_25);
    return(t);
  }
  t = _2_0(g_3, i_3, t);
  t = conc_0_0(t);
  o_25 = t;
  t = SSL_implode_string(o_25);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_25 = NULL;
      w_25 = t;
      t = SSL_is_string(w_25);
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(k_3, t);
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            {
              ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
              a_26 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_26 = ATgetArgument(t, 0);
                  t = b_26;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_26 = ATgetArgument(t, 0);
                      t = b_26;
                      {
                        ATerm x_17 = t;
                        int y_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_17);
                          }
                        else
                          {
                            t = x_17;
                            {
                              ATerm l_3 (ATerm t)
                              {
                                t = term_z_17;
                                return(t);
                              }
                              t = debug_1_0(l_3, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm g_26 = NULL,h_26 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_26 = ATgetArgument(t, 0);
                          c_26 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_26;
                      t = eval_config_0_0(t);
                      g_26 = t;
                      t = c_26;
                      t = eval_config_0_0(t);
                      h_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_26, h_26);
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
  ATerm k_26 = NULL;
  k_26 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_26);
  {
    ATerm m_3 (ATerm t)
    {
      ATerm l_26 = NULL;
      t = eval_config_0_0(t);
      l_26 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_26, l_26);
      t = l_26;
      return(t);
    }
    t = try_1_0(m_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_137 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm m_26 = NULL,n_26 = NULL;
    m_26 = t;
    t = term_a_18;
    t = get_config_0_0(t);
    n_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_26, term_b_18);
    t = geq_0_0(t);
    t = m_26;
    t = d_137(t);
    return(t);
  }
  t = try_1_0(o_3, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_18 = ATgetArgument(t, 0);
        if(match_cons(c_18, sym_Stream_1))
          {
            o_26 = ATgetArgument(c_18, 0);
          }
        else
          _fail(t);
        p_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(o_26, p_26);
    q_26 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), q_26);
    r_26 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, r_26);
    return(t);
  }
  t = WriteToFile_1_0(p_3, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_26, term_d_18);
  t = open_stream_0_0(t);
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, t_26);
  t = z_135(t);
  t = fclose_0_0(t);
  t = t_26;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm e_18 = ATgetArgument(t, 0);
        if(match_cons(e_18, sym_Stream_1))
          {
            v_26 = ATgetArgument(e_18, 0);
          }
        else
          _fail(t);
        w_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(v_26, w_26);
    x_26 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, x_26);
    return(t);
  }
  t = WriteToFile_1_0(q_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  y_26 = t;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                z_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(w_3, t);
          ;
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
          t = term_h_18;
          z_26 = t;
        }
      return(t);
    }
    t = _2_0(u_3, _id, t);
    t = y_26;
    {
      ATerm x_3 (ATerm t)
      {
        ATerm y_3 (ATerm t)
        {
          t = not_null(z_26);
          return(t);
        }
        t = split_2_0(y_3, _id, t);
        return(t);
      }
      t = _2_0(_id, x_3, t);
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              ATerm a_4 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(a_4, t);
              return(t);
            }
            t = _2_0(z_3, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
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
ATerm apply_strategy_1_0 (ATerm b_139 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  a_27 = t;
  t = dtime_0_0(t);
  t = a_27;
  t = b_139(t);
  b_27 = t;
  t = dtime_0_0(t);
  c_27 = t;
  t = b_27;
  if(match_cons(t, sym__2))
    {
      d_27 = ATgetArgument(t, 0);
      e_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_27), (ATerm) ATmakeAppl(sym_Runtime_1, c_27)), e_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_27 (ATerm m_27, ATerm t)
  {
    t = SSL_fclose(m_27);
    return(t);
  }
  ATerm p_27 = NULL,q_27 = NULL;
  q_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_27 = ATgetArgument(t, 0);
      {
        ATerm o_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_27);
            ;
            LocalPopChoice(r_18);
          }
        else
          {
            t = o_18;
            t = s_27(q_27, t);
          }
      }
    }
  else
    {
      t = s_27(q_27, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm l_135 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  t_27 = t;
  t = l_135(t);
  u_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_27), u_27));
  t = t_27;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_27 = NULL;
  t = SSL_stdin_stream();
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_27 = NULL;
  t = SSL_stdout_stream();
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_27 = NULL;
  t = SSL_stderr_stream();
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_27);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      ATerm t_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL,x_0 = NULL;
        w_0 = t;
        t = SSL_explode_term(w_0);
        if(match_cons(t, sym__2))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_18 = ATgetArgument(t, 1);
              if(((ATgetType(x_18) == AT_LIST) && !(ATisEmpty(x_18))))
                {
                  x_0 = ATgetFirst((ATermList) x_18);
                  {
                    ATerm y_18 = (ATerm) ATgetNext((ATermList) x_18);
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
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        {
          ATerm z_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
              ATerm d_4 (ATerm t)
              {
                ATerm f_28 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    f_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = f_28;
                return(t);
              }
              t = _2_0(d_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  c_28 = ATgetArgument(t, 0);
                  d_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(c_28, d_28);
              e_28 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, e_28);
              ;
              LocalPopChoice(a_19);
            }
          else
            {
              t = z_18;
              {
                ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
                ATerm e_4 (ATerm t)
                {
                  ATerm j_28 = NULL;
                  j_28 = t;
                  t = SSL_is_string(j_28);
                  return(t);
                }
                t = _2_0(e_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_28 = ATgetArgument(t, 0);
                    h_28 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(g_28, h_28);
                i_28 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_28);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_28 = NULL;
      n_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_28, term_h_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm f_4 (ATerm t)
        {
          t = term_i_19;
          return(t);
        }
        t = debug_1_0(f_4, t);
        _fail(t);
      }
    }
  k_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_28);
  l_28 = t;
  t = k_28;
  t = fclose_0_0(t);
  t = l_28;
  return(t);
}
ATerm split_2_0 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  t = q_117(t);
  q_28 = t;
  t = p_28;
  t = r_117(t);
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_28, r_28);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  s_28 = t;
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              t_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(g_4, t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = term_p_19;
        t_28 = t;
      }
    t = s_28;
    {
      ATerm h_4 (ATerm t)
      {
        t = not_null(t_28);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, h_4, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm v_28 = NULL;
    v_28 = t;
    if(match_string(t, "-k"))
      {
        t = v_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = v_28;
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm w_28 = NULL,x_28 = NULL;
    w_28 = t;
    t = SSL_string_to_int(w_28);
    x_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), x_28);
    t = w_28;
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_q_19;
    return(t);
  }
  t = ArgOption_3_0(i_4, k_4, l_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm z_28 = NULL;
        z_28 = t;
        if(match_string(t, "-S"))
          {
            t = z_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = z_28;
          }
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_y_19;
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        t = term_z_19;
        return(t);
      }
      t = Option_3_0(m_4, n_4, o_4, t);
      ;
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
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
              ATerm a_29 = NULL,b_29 = NULL;
              a_29 = t;
              t = SSL_string_to_int(a_29);
              b_29 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_29);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, a_29);
              return(t);
            }
            ATerm r_4 (ATerm t)
            {
              t = term_c_20;
              return(t);
            }
            t = ArgOption_3_0(p_4, q_4, r_4, t);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm t_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm u_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_d_20;
                return(t);
              }
              ATerm v_4 (ATerm t)
              {
                t = term_e_20;
                return(t);
              }
              t = Option_3_0(t_4, u_4, v_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm d_29 = NULL;
    d_29 = t;
    if(match_string(t, "-o"))
      {
        t = d_29;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = d_29;
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm e_29 = NULL;
    e_29 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), e_29);
    t = (ATerm) ATmakeAppl(sym_Output_1, e_29);
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_h_20;
    return(t);
  }
  t = ArgOption_3_0(w_4, x_4, y_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm i_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = i_20;
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
          t = term_l_20;
          return(t);
        }
        ATerm b_5 (ATerm t)
        {
          t = term_m_20;
          return(t);
        }
        t = Option_3_0(z_4, a_5, b_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  h_29 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = h_29;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm p_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_29 = ATgetFirst((ATermList) t);
          j_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_29 = ATgetFirst((ATermList) t);
          l_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_29;
      t = i_0(t);
      t = k_29;
      t = k_0(t);
      p_29 = t;
      t = (ATerm) ATinsert(CheckATermList(l_29), p_29);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm r_29 = NULL;
    r_29 = t;
    if(match_string(t, "-i"))
      {
        t = r_29;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = r_29;
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm s_29 = NULL;
    s_29 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), s_29);
    t = (ATerm) ATmakeAppl(sym_Input_1, s_29);
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_n_20;
    return(t);
  }
  t = ArgOption_3_0(c_5, d_5, e_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(r_20);
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
  ATerm t_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_17;
  t = whoami_0_0(t);
  t_29 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), t_29));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_124(t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm w_29 = NULL,x_29 = NULL,a_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_29 = ATgetFirst((ATermList) t);
            x_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_29;
        t = foldr_2_0(t_124, u_124, t);
        a_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_29, a_30);
        t = u_124(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  t = SSL_explode_term(b_30);
  if(match_cons(t, sym__2))
    {
      ATerm v_20 = ATgetArgument(t, 0);
      c_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_30;
  t = foldr_2_0(r_122, s_122, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_30 = NULL;
  t = times_0_0(t);
  {
    ATerm f_5 (ATerm t)
    {
      t = term_x_19;
      return(t);
    }
    ATerm g_5 (ATerm t)
    {
      ATerm e_30 = NULL,f_30 = NULL;
      if(match_cons(t, sym__2))
        {
          e_30 = ATgetArgument(t, 0);
          f_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(e_30, f_30);
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            t = SSL_addr(e_30, f_30);
          }
      }
      return(t);
    }
    t = crush_2_0(f_5, g_5, t);
    d_30 = t;
    t = SSL_TicksToSeconds(d_30);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  if(match_cons(t, sym__2))
    {
      p_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_30;
        if((p_30 != t))
          {
            _fail(t);
          }
        t = o_30;
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = o_30;
        {
          ATerm a_21 = t;
          int b_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_30, q_30);
              ;
              LocalPopChoice(b_21);
            }
          else
            {
              t = a_21;
              t = SSL_gtr(p_30, q_30);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_30, q_30);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_137 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm t_30 = NULL,u_30 = NULL;
    t_30 = t;
    t = term_a_18;
    t = get_config_0_0(t);
    u_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_30, term_c_21);
    t = geq_0_0(t);
    t = t_30;
    t = c_137(t);
    return(t);
  }
  t = try_1_0(h_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm w_30 = NULL,x_30 = NULL;
    t = run_time_0_0(t);
    w_30 = t;
    t = term_h_17;
    t = whoami_0_0(t);
    x_30 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), w_30), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), x_30));
    t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_21), w_30), term_j_21), x_30));
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
ATerm need_help_1_0 (ATerm z_139 (ATerm), ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm j_5 (ATerm t)
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                ATerm q_21 = t;
                int r_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(r_21);
                  }
                else
                  {
                    t = q_21;
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
  t = z_139(t);
  return(t);
}
ATerm map_1_0 (ATerm f_120 (ATerm), ATerm t)
{
  ATerm z_30 (ATerm t)
  {
    ATerm s_21 = t;
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
        t = s_21;
        t = Cons_2_0(f_120, z_30, t);
      }
    return(t);
  }
  t = z_30(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_31 = ATgetFirst((ATermList) t);
      c_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_31 = NULL,h_31 = NULL;
        t = c_31;
        t = g_0(t);
        g_31 = t;
        t = b_31;
        t = e_0(t);
        h_31 = t;
        t = c_31;
        {
          ATerm k_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_31), h_31);
            return(t);
          }
          t = reverse_acc_2_0(e_0, k_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_17;
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
ATerm Program_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  l_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_31);
  i_31 = t;
  t = j_31;
  t = z_111(t);
  k_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, k_31), i_31);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
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
  t = term_w_21;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm n_5 (ATerm t)
    {
      ATerm p_31 = NULL;
      p_31 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, p_31), term_x_21);
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
ATerm Undefined_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  t_31 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_31);
  q_31 = t;
  t = r_31;
  t = a_112(t);
  s_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, s_31), q_31);
  return(t);
}
ATerm fetch_1_0 (ATerm p_120 (ATerm), ATerm t)
{
  ATerm x_31 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_120, _id, t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = Cons_2_0(_id, x_31, t);
      }
    return(t);
  }
  t = x_31(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm z_140 (ATerm), ATerm t)
{
  t = fetch_1_0(z_140, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  z_31 = t;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_22 = ATgetFirst((ATermList) t);
                ATerm d_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_31;
          }
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = (ATerm) ATinsert(ATempty, z_31);
      }
    a_32 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), a_32);
    t = z_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  ATerm e_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_116(t);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = e_22;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
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
        t = term_m_22;
        return(t);
      }
      ATerm q_5 (ATerm t)
      {
        t = term_n_22;
        return(t);
      }
      t = Option_3_0(o_5, p_5, q_5, t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
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
          t = term_o_22;
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = term_p_22;
          return(t);
        }
        t = Option_3_0(r_5, s_5, t_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  if(match_cons(t, sym__3))
    {
      g_32 = ATgetArgument(t, 0);
      h_32 = ATgetArgument(t, 1);
      i_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_32, h_32);
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            ATerm v_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_32, h_32);
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = (ATerm) ATempty;
      }
    j_32 = t;
    t = SSL_table_put(g_32, h_32, (ATerm) ATinsert(CheckATermList(j_32), i_32));
    t = (ATerm) ATmakeAppl(sym__3, g_32, h_32, i_32);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm e_142 (ATerm), ATerm t)
{
  ATerm o_32 = NULL;
  t = term_h_17;
  t = e_142(t);
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_22, term_b_23, o_32);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = q_32;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm v_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_32 = ATgetFirst((ATermList) t);
          s_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_32;
      t = a_0(t);
      t = term_h_17;
      t = c_0(t);
      v_32 = t;
      t = (ATerm) ATinsert(CheckATermList(s_32), v_32);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm x_32 = NULL;
    x_32 = t;
    if(match_string(t, "--help"))
      {
        t = x_32;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = x_32;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = x_32;
          }
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_c_23;
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = term_d_23;
    return(t);
  }
  t = Option_3_0(v_5, w_5, x_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  d_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_32 = ATgetFirst((ATermList) t);
      a_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_33);
  y_32 = t;
  t = z_32;
  t = r_97(t);
  b_33 = t;
  t = a_33;
  t = s_97(t);
  c_33 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(c_33), b_33), y_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_142 (ATerm), ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  {
    ATerm y_5 (ATerm t)
    {
      t = term_p_23;
      t = c_142(t);
      return(t);
    }
    t = try_1_0(y_5, t);
    t = k_33;
    {
      ATerm z_5 (ATerm t)
      {
        ATerm l_33 = NULL;
        l_33 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_33);
        t = (ATerm) ATmakeAppl(sym_Program_1, l_33);
        return(t);
      }
      ATerm a_6 (ATerm t)
      {
        ATerm q_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_24 = t;
            int b_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_24);
              }
            else
              {
                t = a_24;
                t = c_142(t);
                t = Cons_2_0(_id, a_6, t);
              }
            ;
            LocalPopChoice(r_23);
          }
        else
          {
            t = q_23;
            {
              ATerm n_33 = NULL,o_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_33 = ATgetFirst((ATermList) t);
                  o_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_33), (ATerm) ATmakeAppl(sym_Undefined_1, n_33));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_5, a_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm b_142 (ATerm), ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
  u_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = u_33;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm c_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_142(t);
          ;
          LocalPopChoice(h_24);
        }
      else
        {
          t = c_24;
          {
            ATerm i_24 = t;
            int j_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(j_24);
              }
            else
              {
                t = i_24;
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
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_34 = NULL;
            b_34 = t;
            {
              ATerm q_24 = t;
              int x_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_34;
                  {
                    ATerm y_24 = t;
                    int z_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_n_21;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(z_24);
                      }
                    else
                      {
                        t = y_24;
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
                    t = b_34;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(x_24);
                }
              else
                {
                  t = q_24;
                  t = term_l_22;
                  t = get_config_0_0(t);
                  t = b_34;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            {
              ATerm e_6 (ATerm t)
              {
                ATerm f_6 (ATerm t)
                {
                  v_33 = t;
                  return(t);
                }
                t = Undefined_1_0(f_6, t);
                return(t);
              }
              t = option_defined_1_0(e_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_33)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_33)), term_c_25));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(c_6, t);
      w_33 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = w_33;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm t)
{
  ATerm s_4 = NULL;
  t = parse_options_1_0(b_140, t);
  s_4 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), s_4);
  t = s_4;
  t = d_140(t);
  {
    ATerm d_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_140, t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = d_25;
        {
          ATerm h_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_140(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_25);
            }
          else
            {
              t = h_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_139(t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(q_139, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_6, s_139, t_139, h_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm k_139 (ATerm), ATerm l_139 (ATerm), ATerm m_139 (ATerm), ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm j_6 (ATerm t)
    {
      ATerm e_34 = NULL,f_34 = NULL;
      e_34 = t;
      t = term_s_20;
      t = get_config_0_0(t);
      f_34 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, f_34));
      t = e_34;
      return(t);
    }
    t = if_verbose2_1_0(j_6, t);
    return(t);
  }
  t = iowrap_4_0(k_139, l_139, m_139, i_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm i_139 (ATerm), ATerm j_139 (ATerm), ATerm t)
{
  t = iowrap_3_0(i_139, j_139, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm f_139 (ATerm), ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    t = _2_0(_id, f_139, t);
    return(t);
  }
  t = iowrap_2_0(k_6, _fail, t);
  return(t);
}
ATerm optimize1_comp_0_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm m_6 (ATerm t)
    {
      t = simplify_0_0(t);
      t = simplify_widen_0_0(t);
      t = simplify_0_0(t);
      t = simplify_narrow_0_0(t);
      t = simplify_0_0(t);
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
  t = optimize1_comp_0_0(t);
  return(t);
}
