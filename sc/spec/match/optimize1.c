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
ATerm term_n_26;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_s_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_q_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_x_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_l_17;
ATerm term_f_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_v_10;
void init_constant_terms (void)
{
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Op_2, term_s_12, (ATerm) ATempty);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__3, term_q_22, term_c_23, term_l_17);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm simplify_0_0 (ATerm);
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
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
ATerm HdMember_p__2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm);
ATerm union_1_0 (ATerm o_122 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm);
ATerm crush_3_0 (ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm);
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm NarrowScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_114 (ATerm), ATerm);
ATerm simplify_narrow_0_0 (ATerm);
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
ATerm optimize1_comp_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm j_0 (ATerm t)
  {
    t = repeat_1_0(Optimize_0_0, t);
    return(t);
  }
  t = downup_1_0(j_0, t);
  return(t);
}
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  if(match_cons(t, sym__2))
    {
      f_0 = ATgetArgument(t, 0);
      b_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_0;
  {
    ATerm h_0 (ATerm t)
    {
      ATerm h_7 = t;
      int i_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(i_7);
        }
      else
        {
          t = h_7;
          {
            ATerm j_7 = t;
            int k_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_0 (ATerm t)
                {
                  t = b_0;
                  return(t);
                }
                t = HdMember_p__2_0(k_122, w_0, t);
                t = h_0(t);
                ;
                LocalPopChoice(k_7);
              }
            else
              {
                t = j_7;
                t = Cons_2_0(_id, h_0, t);
              }
          }
        }
      return(t);
    }
    t = h_0(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_7 = ATgetFirst((ATermList) t);
      if(match_cons(l_7, sym__2))
        {
          m_0 = ATgetArgument(l_7, 0);
          o_0 = ATgetArgument(l_7, 1);
        }
      else
        _fail(t);
      p_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_0);
  if(match_cons(t, sym__2))
    {
      q_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_0);
  if(match_cons(t, sym__2))
    {
      if((q_0 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_0, s_0);
  t = zip_1_0(_id, t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, p_0);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_131(t);
        ;
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
        t = m_131(t);
        t = v_0(t);
      }
    return(t);
  }
  t = v_0(t);
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
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        ATerm a_1 = NULL;
        a_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_1);
        return(t);
      }
      ATerm y_0 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, b_1, t);
        return(t);
      }
      ATerm z_0 (ATerm t)
      {
        ATerm q_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_1 (ATerm t)
            {
              ATerm t_7 = t;
              int u_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL,h_1 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_1 = ATgetFirst((ATermList) t);
                      h_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = c_1;
                  if(match_cons(t, sym__2))
                    {
                      d_1 = ATgetArgument(t, 0);
                      e_1 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_1;
                  if((d_1 != t))
                    {
                      _fail(t);
                    }
                  t = h_1;
                  ;
                  LocalPopChoice(u_7);
                }
              else
                {
                  t = t_7;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, f_1, t);
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = q_7;
            {
              ATerm n_1 = NULL,p_1 = NULL,s_1 = NULL,u_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  n_1 = ATgetArgument(t, 0);
                  p_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_1;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_1 = ATgetFirst((ATermList) t);
                  u_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_1), s_1), u_1);
            }
          }
        return(t);
      }
      t = for_3_0(x_0, y_0, z_0, t);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm g_1 (ATerm t)
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
        t = diff_1_0(g_1, t);
      }
    }
  return(t);
}
ATerm isect_1_0 (ATerm i_122 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_2;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm v_7 = t;
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
          t = v_7;
          {
            ATerm r_2 = NULL,u_2 = NULL;
            r_2 = t;
            {
              ATerm y_7 = t;
              int z_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm a_8 = ATgetFirst((ATermList) t);
                      u_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_7);
                  {
                    ATerm b_8 = t;
                    int c_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_2;
                        {
                          ATerm i_1 (ATerm t)
                          {
                            t = o_2;
                            return(t);
                          }
                          t = HdMember_p__2_0(i_122, i_1, t);
                          t = r_2;
                          t = Cons_2_0(_id, y_2, t);
                        }
                        ;
                        LocalPopChoice(c_8);
                      }
                    else
                      {
                        t = b_8;
                        t = u_2;
                        t = y_2(t);
                      }
                  }
                }
              else
                {
                  t = y_7;
                  t = r_2;
                  {
                    ATerm j_1 (ATerm t)
                    {
                      t = o_2;
                      return(t);
                    }
                    t = HdMember_p__2_0(i_122, j_1, t);
                    t = r_2;
                    t = Cons_2_0(_id, y_2, t);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = y_2(t);
  }
  return(t);
}
ATerm isect_0_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm a_3 = NULL;
    if(match_cons(t, sym__2))
      {
        a_3 = ATgetArgument(t, 0);
        if((a_3 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = isect_1_0(k_1, t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  e_3 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      c_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  b_3 = t;
  t = c_3;
  t = r_101(t);
  d_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, d_3), b_3);
  return(t);
}
ATerm RDefT_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  v_3 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      l_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
      n_3 = ATgetArgument(t, 2);
      p_3 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_3);
  k_3 = t;
  t = l_3;
  t = i_101(t);
  r_3 = t;
  t = m_3;
  t = j_101(t);
  s_3 = t;
  t = n_3;
  t = k_101(t);
  t_3 = t;
  t = p_3;
  t = l_101(t);
  u_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, r_3, s_3, t_3, u_3), k_3);
  return(t);
}
ATerm Scope_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,j_4 = NULL,g_5 = NULL;
  g_5 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_5);
  y_3 = t;
  t = b_4;
  t = u_102(t);
  d_4 = t;
  t = c_4;
  t = v_102(t);
  j_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, d_4, j_4), y_3);
  return(t);
}
ATerm tboundin_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(o_113, m_113, t);
      ;
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(o_113, o_113, o_113, m_113, t);
            ;
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            {
              ATerm i_8 = t;
              int j_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(o_113, o_113, o_113, m_113, t);
                  ;
                  LocalPopChoice(j_8);
                }
              else
                {
                  t = i_8;
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
  ATerm p_6 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      ATerm l_8 = ATgetArgument(t, 1);
      p_6 = ATgetArgument(t, 2);
      {
        ATerm m_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = p_6;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm a_7 = NULL;
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            a_7 = ATgetArgument(t, 0);
            {
              ATerm p_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_8);
        t = a_7;
      }
    else
      {
        t = n_8;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            a_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_7;
      }
    return(t);
  }
  t = map_1_0(l_1, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm r_7 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      ATerm r_8 = ATgetArgument(t, 1);
      r_7 = ATgetArgument(t, 2);
      {
        ATerm s_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = r_7;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm w_7 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      w_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7;
  t = tvars_0_0(t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm h_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      v_8 = ATgetArgument(t, 0);
      t = v_8;
      if(match_cons(t, sym_Rule_3))
        {
          h_8 = ATgetArgument(t, 0);
          {
            ATerm t_8 = ATgetArgument(t, 1);
          }
          {
            ATerm u_8 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_8;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          v_8 = ATgetArgument(t, 0);
          {
            ATerm w_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_8;
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_9 = ATgetFirst((ATermList) t);
      d_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_122(t);
  {
    ATerm m_1 (ATerm t)
    {
      ATerm l_9 = NULL;
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_9, l_9);
      t = s_122(t);
      return(t);
    }
    t = fetch_1_0(m_1, t);
    t = d_9;
  }
  return(t);
}
ATerm union_1_0 (ATerm o_122 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9;
  {
    ATerm r_9 (ATerm t)
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = o_9;
          ;
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
          {
            ATerm z_8 = t;
            int a_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_1 (ATerm t)
                {
                  t = o_9;
                  return(t);
                }
                t = HdMember_p__2_0(o_122, o_1, t);
                t = r_9(t);
                ;
                LocalPopChoice(a_9);
              }
            else
              {
                t = z_8;
                t = Cons_2_0(_id, r_9, t);
              }
          }
        }
      return(t);
    }
    t = r_9(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm t_9 = NULL;
    if(match_cons(t, sym__2))
      {
        t_9 = ATgetArgument(t, 0);
        if((t_9 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(q_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm t)
{
  ATerm b_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_125(t);
      ;
      LocalPopChoice(e_9);
    }
  else
    {
      t = b_9;
      {
        ATerm f_10 = NULL,g_10 = NULL,s_10 = NULL,z_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_10 = ATgetFirst((ATermList) t);
            g_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_10;
        t = f_125(t);
        s_10 = t;
        t = g_10;
        t = foldr_3_0(d_125, e_125, f_125, t);
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_10, z_10);
        t = e_125(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t)
{
  ATerm d_11 = NULL,f_11 = NULL;
  d_11 = t;
  t = SSL_explode_term(d_11);
  if(match_cons(t, sym__2))
    {
      ATerm f_9 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11;
  t = foldr_3_0(b_123, c_123, d_123, t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm l_11 (ATerm t)
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_129(t);
        ;
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        {
          ATerm i_9 = t;
          int j_9 = stack_ptr;
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
                  ATerm x_1 (ATerm t)
                  {
                    t = k_11;
                    return(t);
                  }
                  t = split_2_0(l_11, x_1, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm w_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = h_129(r_1, l_11, w_1, t);
                {
                  ATerm y_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(y_1, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
              {
                ATerm z_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(z_1, union_0_0, l_11, t);
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
  ATerm a_2 (ATerm t)
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
  ATerm b_2 (ATerm t)
  {
    ATerm k_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = k_9;
        {
          ATerm n_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(p_9);
            }
          else
            {
              t = n_9;
              {
                ATerm s_9 = t;
                int u_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(u_9);
                  }
                else
                  {
                    t = s_9;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(a_2, b_2, tboundin_3_0, t);
  return(t);
}
ATerm NarrowScope_0_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,s_11 = NULL,u_11 = NULL,v_11 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      n_11 = ATgetArgument(t, 0);
      {
        ATerm v_9 = ATgetArgument(t, 1);
        if(match_cons(v_9, sym_Seq_2))
          {
            o_11 = ATgetArgument(v_9, 0);
            p_11 = ATgetArgument(v_9, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_11;
  t = tvars_0_0(t);
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_11, n_11);
  t = isect_0_0(t);
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, u_11);
  t = diff_0_0(t);
  v_11 = t;
  {
    ATerm w_9 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_9;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, u_11, (ATerm) ATmakeAppl(sym_Seq_2, o_11, (ATerm) ATmakeAppl(sym_Scope_2, v_11, p_11)));
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
ATerm simplify_narrow_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    t = try_1_0(NarrowScope_0_0, t);
    return(t);
  }
  t = topdown_1_0(d_2, t);
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12;
  if(match_cons(t, sym_Scope_2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
      t = f_12;
      if(match_cons(t, sym_Scope_2))
        {
          g_12 = ATgetArgument(t, 0);
          h_12 = ATgetArgument(t, 1);
          {
            ATerm x_9 = t;
            int y_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, (ATerm) ATmakeAppl(sym_Seq_2, f_12, d_12));
                ;
                LocalPopChoice(y_9);
              }
            else
              {
                t = x_9;
                t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, (ATerm) ATmakeAppl(sym_Seq_2, f_12, d_12));
        }
    }
  else
    {
      t = f_12;
      if(match_cons(t, sym_Scope_2))
        {
          g_12 = ATgetArgument(t, 0);
          h_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12));
    }
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym_Test_1))
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      x_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  y_12 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_12)), (ATerm) ATmakeAppl(sym_Seq_2, x_12, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_12)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      z_12 = ATgetArgument(t, 0);
      {
        ATerm z_9 = ATgetArgument(t, 1);
        if(match_cons(z_9, sym_Scope_2))
          {
            a_13 = ATgetArgument(z_9, 0);
            b_13 = ATgetArgument(z_9, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_12, a_13);
  t = conc_0_0(t);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, c_13, b_13);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,l_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym__2))
    {
      l_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_13;
  if(match_cons(t, sym_Build_1))
    {
      ATerm a_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_13;
  if(match_cons(t, sym_Where_1))
    {
      o_13 = ATgetArgument(t, 0);
      t = o_13;
      if(match_cons(t, sym_Prim_2))
        {
          i_13 = ATgetArgument(t, 0);
          j_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          o_13 = ATgetArgument(t, 0);
          p_13 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, o_13, p_13);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              o_13 = ATgetArgument(t, 0);
              p_13 = ATgetArgument(t, 1);
              q_13 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t)
{
  ATerm y_13 (ATerm t)
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_118(t);
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        t = y_118(t);
        t = _2_0(a_119, y_13, t);
        t = z_118(t);
      }
    return(t);
  }
  t = y_13(t);
  return(t);
}
ATerm zip_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm d_10 = ATgetArgument(t, 0);
        if(((ATgetType(d_10) != AT_LIST) || !(ATisEmpty(d_10))))
          _fail(t);
        {
          ATerm e_10 = ATgetArgument(t, 1);
          if(((ATgetType(e_10) != AT_LIST) || !(ATisEmpty(e_10))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm z_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm h_10 = ATgetArgument(t, 0);
        if(((ATgetType(h_10) == AT_LIST) && !(ATisEmpty(h_10))))
          {
            z_13 = ATgetFirst((ATermList) h_10);
            d_14 = (ATerm) ATgetNext((ATermList) h_10);
          }
        else
          _fail(t);
        {
          ATerm i_10 = ATgetArgument(t, 1);
          if(((ATgetType(i_10) == AT_LIST) && !(ATisEmpty(i_10))))
            {
              c_14 = ATgetFirst((ATermList) i_10);
              e_14 = (ATerm) ATgetNext((ATermList) i_10);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_13, c_14), (ATerm) ATmakeAppl(sym__2, d_14, e_14));
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm f_14 = NULL,g_14 = NULL;
    if(match_cons(t, sym__2))
      {
        f_14 = ATgetArgument(t, 0);
        g_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(g_14), f_14);
    return(t);
  }
  t = genzip_4_0(e_2, f_2, g_2, c_119, t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if(match_cons(j_10, sym_Build_1))
        {
          ATerm l_10 = ATgetArgument(j_10, 0);
          if(match_cons(l_10, sym_Op_2))
            {
              i_14 = ATgetArgument(l_10, 0);
              h_14 = ATgetArgument(l_10, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm k_10 = ATgetArgument(t, 1);
        if(match_cons(k_10, sym_Match_1))
          {
            ATerm m_10 = ATgetArgument(k_10, 0);
            if(match_cons(m_10, sym_Op_2))
              {
                if((i_14 != ATgetArgument(m_10, 0)))
                  {
                    _fail(ATgetArgument(m_10, 0));
                  }
                j_14 = ATgetArgument(m_10, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, h_14, j_14);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm l_14 = NULL,m_14 = NULL;
      if(match_cons(t, sym__2))
        {
          l_14 = ATgetArgument(t, 0);
          m_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_14), (ATerm) ATmakeAppl(sym_Match_1, m_14));
      return(t);
    }
    t = zip_1_0(h_2, t);
    k_14 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_14), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_14, h_14)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      if(match_cons(n_10, sym_Build_1))
        {
          ATerm p_10 = ATgetArgument(n_10, 0);
          if(match_cons(p_10, sym_Op_2))
            {
              n_14 = ATgetArgument(p_10, 0);
              {
                ATerm q_10 = ATgetArgument(p_10, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm o_10 = ATgetArgument(t, 1);
        if(match_cons(o_10, sym_Match_1))
          {
            ATerm r_10 = ATgetArgument(o_10, 0);
            if(match_cons(r_10, sym_Op_2))
              {
                o_14 = ATgetArgument(r_10, 0);
                {
                  ATerm t_10 = ATgetArgument(r_10, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, n_14, o_14);
  {
    ATerm u_10 = t;
    if((PushChoice() == 0))
      {
        ATerm p_14 = NULL;
        if(match_cons(t, sym__2))
          {
            p_14 = ATgetArgument(t, 0);
            if((p_14 != ATgetArgument(t, 1)))
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
        t = u_10;
      }
    t = term_v_10;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm y_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = y_10;
            {
              ATerm b_11 = t;
              int c_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_14 = NULL,a_15 = NULL,b_15 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      y_14 = ATgetArgument(t, 0);
                      a_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_14;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm e_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_15;
                  if(match_cons(t, sym_Build_1))
                    {
                      b_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = b_11;
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
                          ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              e_15 = ATgetArgument(t, 0);
                              g_15 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = e_15;
                          if(match_cons(t, sym_Match_1))
                            {
                              f_15 = ATgetArgument(t, 0);
                              t = g_15;
                              if(match_cons(t, sym_Match_1))
                                {
                                  h_15 = ATgetArgument(t, 0);
                                  t = h_15;
                                  if((f_15 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, f_15);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      h_15 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = h_15;
                                  if((f_15 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, f_15);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  f_15 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = g_15;
                              if(match_cons(t, sym_Match_1))
                                {
                                  h_15 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = h_15;
                              if((f_15 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, f_15);
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
  ATerm n_15 = NULL,o_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15;
  if(match_cons(t, sym_Seq_2))
    {
      n_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
      {
        ATerm j_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, q_15, n_15);
            t = BMF_0_0(t);
            v_15 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, v_15, o_15);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = j_11;
            t = (ATerm) ATmakeAppl(sym__2, q_15, r_15);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, q_15, r_15);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm a_16 (ATerm t)
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
        t = SRTS_one(a_16, t);
      }
    return(t);
  }
  t = a_16(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm w_11 = ATgetArgument(t, 0);
      if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
        {
          ATerm y_11 = ATgetFirst((ATermList) w_11);
          if(match_cons(y_11, sym_SDefT_4))
            {
              c_16 = ATgetArgument(y_11, 0);
              {
                ATerm a_12 = ATgetArgument(y_11, 1);
                if(((ATgetType(a_12) != AT_LIST) || !(ATisEmpty(a_12))))
                  _fail(t);
              }
              {
                ATerm b_12 = ATgetArgument(y_11, 2);
                if(((ATgetType(b_12) != AT_LIST) || !(ATisEmpty(b_12))))
                  _fail(t);
              }
              b_16 = ATgetArgument(y_11, 3);
            }
          else
            _fail(t);
          {
            ATerm z_11 = (ATerm) ATgetNext((ATermList) w_11);
            if(((ATgetType(z_11) != AT_LIST) || !(ATisEmpty(z_11))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm x_11 = ATgetArgument(t, 1);
        if(match_cons(x_11, sym_CallT_3))
          {
            ATerm e_12 = ATgetArgument(x_11, 0);
            if(match_cons(e_12, sym_SVar_1))
              {
                if((c_16 != ATgetArgument(e_12, 0)))
                  {
                    _fail(ATgetArgument(e_12, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm j_12 = ATgetArgument(x_11, 1);
              if(((ATgetType(j_12) != AT_LIST) || !(ATisEmpty(j_12))))
                _fail(t);
            }
            {
              ATerm k_12 = ATgetArgument(x_11, 2);
              if(((ATgetType(k_12) != AT_LIST) || !(ATisEmpty(k_12))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_16;
  {
    ATerm l_12 = t;
    if((PushChoice() == 0))
      {
        ATerm i_2 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm m_12 = ATgetArgument(t, 0);
              if(match_cons(m_12, sym_SVar_1))
                {
                  if((c_16 != ATgetArgument(m_12, 0)))
                    {
                      _fail(ATgetArgument(m_12, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm n_12 = ATgetArgument(t, 1);
                if(((ATgetType(n_12) != AT_LIST) || !(ATisEmpty(n_12))))
                  _fail(t);
              }
              {
                ATerm o_12 = ATgetArgument(t, 2);
                if(((ATgetType(o_12) != AT_LIST) || !(ATisEmpty(o_12))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(i_2, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_12;
      }
    t = b_16;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,r_16 = NULL,s_16 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      r_16 = ATgetArgument(t, 0);
      t = r_16;
      if(match_cons(t, sym_Seq_2))
        {
          p_16 = ATgetArgument(t, 0);
          l_16 = ATgetArgument(t, 1);
          t = p_16;
          if(match_cons(t, sym_Where_1))
            {
              k_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_16;
          if(match_cons(t, sym_Seq_2))
            {
              m_16 = ATgetArgument(t, 0);
              o_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_16;
          if(match_cons(t, sym_Build_1))
            {
              n_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, k_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_16), o_16)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              p_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          r_16 = ATgetArgument(t, 0);
          t = r_16;
          if(match_cons(t, sym_Test_1))
            {
              p_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              r_16 = ATgetArgument(t, 0);
              t = r_16;
              if(match_cons(t, sym_Not_1))
                {
                  p_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, p_16);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  r_16 = ATgetArgument(t, 0);
                  s_16 = ATgetArgument(t, 1);
                  t = s_16;
                  if((r_16 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      r_16 = ATgetArgument(t, 0);
                      s_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_16;
                  if((r_16 != t))
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
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      g_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
      t = g_17;
      if(match_cons(t, sym_LChoice_2))
        {
          h_17 = ATgetArgument(t, 0);
          i_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, h_17, (ATerm) ATmakeAppl(sym_LChoice_2, i_17, j_17));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          g_17 = ATgetArgument(t, 0);
          j_17 = ATgetArgument(t, 1);
          t = g_17;
          if(match_cons(t, sym_Seq_2))
            {
              h_17 = ATgetArgument(t, 0);
              i_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, h_17, (ATerm) ATmakeAppl(sym_Seq_2, i_17, j_17));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              g_17 = ATgetArgument(t, 0);
              j_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_17;
          if(match_cons(t, sym_Choice_2))
            {
              h_17 = ATgetArgument(t, 0);
              i_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, h_17, (ATerm) ATmakeAppl(sym_Choice_2, i_17, j_17));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm j_2 (ATerm t)
        {
          ATerm l_2 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(l_2, t);
          return(t);
        }
        t = Cons_2_0(_id, j_2, t);
      }
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
        ATerm m_2 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, m_2, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      c_18 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, c_18, d_18);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          c_18 = ATgetArgument(t, 0);
          t = c_18;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_17 = ATgetFirst((ATermList) t);
              y_17 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_17, (ATerm) ATmakeAppl(sym_LChoices_1, y_17));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_v_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              c_18 = ATgetArgument(t, 0);
              t = c_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_17 = ATgetFirst((ATermList) t);
                  y_17 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_17, (ATerm) ATmakeAppl(sym_Choices_1, y_17));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_v_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  c_18 = ATgetArgument(t, 0);
                  t = c_18;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_17 = ATgetFirst((ATermList) t);
                      y_17 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_17, (ATerm) ATmakeAppl(sym_Seqs_1, y_17));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_r_12;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_18 = ATgetArgument(t, 0);
                      d_18 = ATgetArgument(t, 1);
                      a_18 = ATgetArgument(t, 2);
                      z_17 = ATgetArgument(t, 3);
                      {
                        ATerm q_18 = NULL,r_18 = NULL;
                        t = d_18;
                        {
                          ATerm n_2 (ATerm t)
                          {
                            ATerm s_18 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                s_18 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, s_18, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_12), term_u_12));
                            return(t);
                          }
                          t = map1_1_0(n_2, t);
                          q_18 = t;
                          t = a_18;
                          {
                            ATerm p_2 (ATerm t)
                            {
                              ATerm s_2 (ATerm t)
                              {
                                ATerm t_18 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    t_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, t_18, term_u_12);
                                return(t);
                              }
                              t = try_1_0(s_2, t);
                              return(t);
                            }
                            t = map1_1_0(p_2, t);
                            r_18 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, c_18, q_18, r_18, z_17);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          c_18 = ATgetArgument(t, 0);
                          d_18 = ATgetArgument(t, 1);
                          a_18 = ATgetArgument(t, 2);
                          z_17 = ATgetArgument(t, 3);
                          {
                            ATerm d_13 = t;
                            int e_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_18 = NULL,z_18 = NULL;
                                t = a_18;
                                {
                                  ATerm t_2 (ATerm t)
                                  {
                                    ATerm a_19 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        a_19 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, a_19, term_u_12);
                                    return(t);
                                  }
                                  t = map1_1_0(t_2, t);
                                  y_18 = t;
                                  t = d_18;
                                  {
                                    ATerm v_2 (ATerm t)
                                    {
                                      ATerm w_2 (ATerm t)
                                      {
                                        ATerm b_19 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            b_19 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_12), term_u_12));
                                        return(t);
                                      }
                                      t = try_1_0(w_2, t);
                                      return(t);
                                    }
                                    t = map_1_0(v_2, t);
                                    z_18 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, c_18, z_18, y_18, z_17);
                                  }
                                }
                                ;
                                LocalPopChoice(e_13);
                              }
                            else
                              {
                                t = d_13;
                                {
                                  ATerm g_19 = NULL,h_19 = NULL;
                                  t = d_18;
                                  {
                                    ATerm x_2 (ATerm t)
                                    {
                                      ATerm i_19 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          i_19 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, i_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_12), term_u_12));
                                      return(t);
                                    }
                                    t = map1_1_0(x_2, t);
                                    g_19 = t;
                                    t = a_18;
                                    {
                                      ATerm z_2 (ATerm t)
                                      {
                                        ATerm f_3 (ATerm t)
                                        {
                                          ATerm j_19 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              j_19 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, j_19, term_u_12);
                                          return(t);
                                        }
                                        t = try_1_0(f_3, t);
                                        return(t);
                                      }
                                      t = map_1_0(z_2, t);
                                      h_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, c_18, g_19, h_19, z_17);
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
                              c_18 = ATgetArgument(t, 0);
                              d_18 = ATgetArgument(t, 1);
                              a_18 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, d_18, (ATerm) ATmakeAppl(sym_Op_2, term_f_13, (ATerm) ATinsert(ATinsert(ATempty, a_18), c_18)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  c_18 = ATgetArgument(t, 0);
                                  d_18 = ATgetArgument(t, 1);
                                  a_18 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, a_18)), c_18), (ATerm) ATmakeAppl(sym_Build_1, d_18)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      c_18 = ATgetArgument(t, 0);
                                      d_18 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_18, (ATerm) ATmakeAppl(sym_Match_1, d_18));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          c_18 = ATgetArgument(t, 0);
                                          d_18 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_18), d_18);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              c_18 = ATgetArgument(t, 0);
                                              d_18 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_18), c_18);
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
  ATerm w_19 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm g_13 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_19;
  {
    ATerm g_3 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(g_3, t);
    t = term_v_10;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm h_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_20 = NULL,r_20 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          q_20 = ATgetArgument(t, 0);
          t = q_20;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              q_20 = ATgetArgument(t, 0);
              t = q_20;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_r_12;
            }
          else
            {
              ATerm m_13 = t;
              int r_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      q_20 = ATgetArgument(t, 0);
                      {
                        ATerm s_13 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_13);
                  t = q_20;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = m_13;
                  {
                    ATerm t_13 = t;
                    int u_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm v_13 = ATgetArgument(t, 0);
                            r_20 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_13);
                        t = r_20;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = t_13;
                        {
                          ATerm w_13 = t;
                          int x_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm a_14 = ATgetArgument(t, 0);
                                  r_20 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(x_13);
                              t = r_20;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = w_13;
                              if(match_cons(t, sym_Some_1))
                                {
                                  q_20 = ATgetArgument(t, 0);
                                  t = q_20;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      q_20 = ATgetArgument(t, 0);
                                      t = q_20;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm b_14 = ATgetArgument(t, 0);
                                          r_20 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = r_20;
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
      LocalPopChoice(k_13);
    }
  else
    {
      t = h_13;
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  t_20 = ATgetArgument(t, 0);
                  u_20 = ATgetArgument(t, 1);
                  t = u_20;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = t_20;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm s_14 = t;
                          int t_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = u_20;
                              ;
                              LocalPopChoice(t_14);
                            }
                          else
                            {
                              t = s_14;
                              t = t_20;
                            }
                        }
                      else
                        {
                          t = t_20;
                        }
                    }
                  else
                    {
                      t = t_20;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = u_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      t_20 = ATgetArgument(t, 0);
                      u_20 = ATgetArgument(t, 1);
                      t = u_20;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = t_20;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm u_14 = t;
                              int v_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = u_20;
                                  ;
                                  LocalPopChoice(v_14);
                                }
                              else
                                {
                                  t = u_14;
                                  t = t_20;
                                }
                            }
                          else
                            {
                              t = t_20;
                            }
                        }
                      else
                        {
                          t = t_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = u_20;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          t_20 = ATgetArgument(t, 0);
                          t = t_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              t_20 = ATgetArgument(t, 0);
                              u_20 = ATgetArgument(t, 1);
                              v_20 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = v_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_20, u_20);
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
  ATerm s_21 = NULL,u_21 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_21 = ATgetArgument(t, 0);
      t = u_21;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_21 = ATgetArgument(t, 0);
          t = u_21;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_v_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_21 = ATgetArgument(t, 0);
              s_21 = ATgetArgument(t, 1);
              t = s_21;
              if(match_cons(t, sym_Id_0))
                {
                  t = u_21;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm w_14 = t;
                      int x_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_21;
                          ;
                          LocalPopChoice(x_14);
                        }
                      else
                        {
                          t = w_14;
                          t = u_21;
                        }
                    }
                  else
                    {
                      t = u_21;
                    }
                }
              else
                {
                  t = u_21;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = s_21;
                }
            }
          else
            {
              ATerm z_14 = t;
              int c_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      u_21 = ATgetArgument(t, 0);
                      {
                        ATerm d_15 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_15);
                  t = u_21;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = z_14;
                  {
                    ATerm i_15 = t;
                    int j_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm k_15 = ATgetArgument(t, 0);
                            s_21 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_15);
                        t = s_21;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = i_15;
                        {
                          ATerm l_15 = t;
                          int m_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm p_15 = ATgetArgument(t, 0);
                                  s_21 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(m_15);
                              t = s_21;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = l_15;
                              if(match_cons(t, sym_All_1))
                                {
                                  u_21 = ATgetArgument(t, 0);
                                  t = u_21;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      u_21 = ATgetArgument(t, 0);
                                      t = u_21;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          u_21 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = u_21;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_r_12;
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
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        ATerm u_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(w_15);
          }
        else
          {
            t = u_15;
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = x_15;
                  {
                    ATerm z_15 = t;
                    int d_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(d_16);
                      }
                    else
                      {
                        t = z_15;
                        {
                          ATerm e_16 = t;
                          int f_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
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
                                    ATerm d_22 = NULL,e_22 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        d_22 = ATgetArgument(t, 0);
                                        e_22 = ATgetArgument(t, 1);
                                        t = d_22;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            d_22 = ATgetArgument(t, 0);
                                            e_22 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = d_22;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_22;
                                      }
                                    ;
                                    LocalPopChoice(h_16);
                                  }
                                else
                                  {
                                    t = g_16;
                                    {
                                      ATerm i_16 = t;
                                      int j_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(j_16);
                                        }
                                      else
                                        {
                                          t = i_16;
                                          {
                                            ATerm q_16 = t;
                                            int t_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(t_16);
                                              }
                                            else
                                              {
                                                t = q_16;
                                                {
                                                  ATerm r_0 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm u_16 = ATgetArgument(t, 0);
                                                      if(!(match_cons(u_16, sym_Wld_0)))
                                                        _fail(t);
                                                      r_0 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = r_0;
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
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
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
            ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                k_22 = ATgetArgument(t, 0);
                l_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_22;
            if(match_cons(t, sym_Let_2))
              {
                m_22 = ATgetArgument(t, 0);
                n_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, m_22, (ATerm) ATmakeAppl(sym_Seq_2, k_22, n_22));
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
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = z_16;
                  {
                    ATerm b_17 = t;
                    int c_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(c_17);
                      }
                    else
                      {
                        t = b_17;
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
  ATerm r_22 (ATerm t)
  {
    ATerm h_3 (ATerm t)
    {
      t = w_130(t);
      t = r_22(t);
      return(t);
    }
    t = try_1_0(h_3, t);
    return(t);
  }
  t = r_22(t);
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
  ATerm j_3 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      ATerm d_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0_0(t);
          ;
          LocalPopChoice(e_17);
        }
      else
        {
          t = d_17;
          t = WidenScope_0_0(t);
        }
      return(t);
    }
    t = repeat_1_0(o_3, t);
    return(t);
  }
  t = downup_1_0(j_3, t);
  return(t);
}
ATerm SDefT_4_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  b_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
      v_22 = ATgetArgument(t, 2);
      w_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_23);
  s_22 = t;
  t = t_22;
  t = c_105(t);
  x_22 = t;
  t = u_22;
  t = d_105(t);
  y_22 = t;
  t = v_22;
  t = e_105(t);
  z_22 = t;
  t = w_22;
  t = f_105(t);
  a_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, x_22, y_22, z_22, a_23), s_22);
  return(t);
}
ATerm SDef_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  l_23 = t;
  if(match_cons(t, sym_SDef_3))
    {
      f_23 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
      h_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_23);
  e_23 = t;
  t = f_23;
  t = z_104(t);
  i_23 = t;
  t = g_23;
  t = a_105(t);
  j_23 = t;
  t = h_23;
  t = b_105(t);
  k_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, i_23, j_23, k_23), e_23);
  return(t);
}
ATerm Strategies_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  r_23 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_23);
  o_23 = t;
  t = p_23;
  t = c_98(t);
  q_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, q_23), o_23);
  return(t);
}
ATerm Specification_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  x_23 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_23);
  u_23 = t;
  t = v_23;
  t = h_98(t);
  w_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, w_23), u_23);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm m_112 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      ATerm x_3 (ATerm t)
      {
        ATerm a_4 (ATerm t)
        {
          ATerm e_4 (ATerm t)
          {
            ATerm f_17 = t;
            int k_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, m_112, t);
                ;
                LocalPopChoice(k_17);
              }
            else
              {
                t = f_17;
                t = SDefT_4_0(_id, _id, _id, m_112, t);
              }
            return(t);
          }
          t = map_1_0(e_4, t);
          return(t);
        }
        t = Strategies_1_0(a_4, t);
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(x_3, z_3, t);
      return(t);
    }
    t = Cons_2_0(_id, w_3, t);
    return(t);
  }
  t = Specification_1_0(q_3, t);
  return(t);
}
ATerm _2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  f_24 = t;
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_24);
  a_24 = t;
  t = b_24;
  t = p_96(t);
  d_24 = t;
  t = c_24;
  t = q_96(t);
  e_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, d_24, e_24), a_24);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL;
  i_24 = t;
  t = term_l_17;
  t = whoami_0_0(t);
  j_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), j_24), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = i_24;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm m_24 = NULL,n_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_24 = ATgetFirst((ATermList) t);
            n_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_24;
        {
          ATerm f_4 (ATerm t)
          {
            t = n_24;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_4, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  r_24 = t;
  t = SSL_explode_term(r_24);
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_24;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  ATerm t_24 (ATerm t)
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_24, t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_121(t);
      }
    return(t);
  }
  t = t_24(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_24;
  {
    ATerm g_4 (ATerm t)
    {
      t = u_24;
      return(t);
    }
    t = at_end_1_0(g_4, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm w_24 = NULL;
  ATerm h_4 (ATerm t)
  {
    ATerm x_24 = NULL;
    x_24 = t;
    t = SSL_explode_string(x_24);
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm y_24 = NULL;
    y_24 = t;
    t = SSL_explode_string(y_24);
    return(t);
  }
  t = _2_0(h_4, i_4, t);
  t = conc_0_0(t);
  w_24 = t;
  t = SSL_implode_string(w_24);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_25 = NULL;
      e_25 = t;
      t = SSL_is_string(e_25);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(k_4, t);
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            {
              ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
              i_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_25 = ATgetArgument(t, 0);
                  t = j_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_25 = ATgetArgument(t, 0);
                      t = j_25;
                      {
                        ATerm b_18 = t;
                        int e_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(e_18);
                          }
                        else
                          {
                            t = b_18;
                            {
                              ATerm l_4 (ATerm t)
                              {
                                t = term_f_18;
                                return(t);
                              }
                              t = debug_1_0(l_4, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm o_25 = NULL,p_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_25 = ATgetArgument(t, 0);
                          k_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_25;
                      t = eval_config_0_0(t);
                      o_25 = t;
                      t = k_25;
                      t = eval_config_0_0(t);
                      p_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_25, p_25);
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
  ATerm s_25 = NULL;
  s_25 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_25);
  {
    ATerm m_4 (ATerm t)
    {
      ATerm t_25 = NULL;
      t = eval_config_0_0(t);
      t_25 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_25, t_25);
      t = t_25;
      return(t);
    }
    t = try_1_0(m_4, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm u_25 = NULL,v_25 = NULL;
    u_25 = t;
    t = term_g_18;
    t = get_config_0_0(t);
    v_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_25, term_h_18);
    t = geq_0_0(t);
    t = u_25;
    t = o_137(t);
    return(t);
  }
  t = try_1_0(n_4, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_18 = ATgetArgument(t, 0);
        if(match_cons(i_18, sym_Stream_1))
          {
            w_25 = ATgetArgument(i_18, 0);
          }
        else
          _fail(t);
        x_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(w_25, x_25);
    y_25 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), y_25);
    z_25 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, z_25);
    return(t);
  }
  t = WriteToFile_1_0(o_4, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  if(match_cons(t, sym__2))
    {
      a_26 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_26, term_j_18);
  t = open_stream_0_0(t);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_26, b_26);
  t = k_136(t);
  t = fclose_0_0(t);
  t = b_26;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_18 = ATgetArgument(t, 0);
        if(match_cons(k_18, sym_Stream_1))
          {
            d_26 = ATgetArgument(k_18, 0);
          }
        else
          _fail(t);
        e_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(d_26, e_26);
    f_26 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, f_26);
    return(t);
  }
  t = WriteToFile_1_0(p_4, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  g_26 = t;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm l_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                h_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(r_4, t);
          ;
          LocalPopChoice(m_18);
        }
      else
        {
          t = l_18;
          t = term_n_18;
          h_26 = t;
        }
      return(t);
    }
    t = _2_0(q_4, _id, t);
    t = g_26;
    {
      ATerm s_4 (ATerm t)
      {
        ATerm t_4 (ATerm t)
        {
          t = not_null(h_26);
          return(t);
        }
        t = split_2_0(t_4, _id, t);
        return(t);
      }
      t = _2_0(_id, s_4, t);
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 (ATerm t)
            {
              ATerm v_4 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(v_4, t);
              return(t);
            }
            t = _2_0(u_4, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
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
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  i_26 = t;
  t = dtime_0_0(t);
  t = i_26;
  t = m_139(t);
  j_26 = t;
  t = dtime_0_0(t);
  k_26 = t;
  t = j_26;
  if(match_cons(t, sym__2))
    {
      l_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_26), (ATerm) ATmakeAppl(sym_Runtime_1, k_26)), m_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_27 (ATerm u_26, ATerm t)
  {
    t = SSL_fclose(u_26);
    return(t);
  }
  ATerm x_26 = NULL,y_26 = NULL;
  y_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_26 = ATgetArgument(t, 0);
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_26);
            ;
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            t = a_27(y_26, t);
          }
      }
    }
  else
    {
      t = a_27(y_26, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm w_135 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  b_27 = t;
  t = w_135(t);
  c_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_27), c_27));
  t = b_27;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_27 = NULL;
  t = SSL_stdin_stream();
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_27 = NULL;
  t = SSL_stdout_stream();
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_27 = NULL;
  t = SSL_stderr_stream();
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_27);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_18 = ATgetArgument(t, 0);
      ATerm x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL,v_1 = NULL;
        t_1 = t;
        t = SSL_explode_term(t_1);
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_19 = ATgetArgument(t, 1);
              if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
                {
                  v_1 = ATgetFirst((ATermList) f_19);
                  {
                    ATerm k_19 = (ATerm) ATgetNext((ATermList) f_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm l_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
              ATerm w_4 (ATerm t)
              {
                ATerm n_27 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    n_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_27;
                return(t);
              }
              t = _2_0(w_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_27 = ATgetArgument(t, 0);
                  l_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_27, l_27);
              m_27 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_27);
              ;
              LocalPopChoice(m_19);
            }
          else
            {
              t = l_19;
              {
                ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
                ATerm x_4 (ATerm t)
                {
                  ATerm r_27 = NULL;
                  r_27 = t;
                  t = SSL_is_string(r_27);
                  return(t);
                }
                t = _2_0(x_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_27 = ATgetArgument(t, 0);
                    p_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_27, p_27);
                q_27 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_27);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_27 = NULL;
      v_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_27, term_p_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm y_4 (ATerm t)
        {
          t = term_q_19;
          return(t);
        }
        t = debug_1_0(y_4, t);
        _fail(t);
      }
    }
  s_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_27);
  t_27 = t;
  t = s_27;
  t = fclose_0_0(t);
  t = t_27;
  return(t);
}
ATerm split_2_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  x_27 = t;
  t = x_117(t);
  y_27 = t;
  t = x_27;
  t = y_117(t);
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, z_27);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  a_28 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              b_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(z_4, t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = term_t_19;
        b_28 = t;
      }
    t = a_28;
    {
      ATerm a_5 (ATerm t)
      {
        t = not_null(b_28);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, a_5, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm d_28 = NULL;
    d_28 = t;
    if(match_string(t, "-k"))
      {
        t = d_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = d_28;
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    ATerm e_28 = NULL,f_28 = NULL;
    e_28 = t;
    t = SSL_string_to_int(e_28);
    f_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), f_28);
    t = e_28;
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  t = ArgOption_3_0(b_5, c_5, d_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 (ATerm t)
      {
        ATerm h_28 = NULL;
        h_28 = t;
        if(match_string(t, "-S"))
          {
            t = h_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = h_28;
          }
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_z_19;
        return(t);
      }
      ATerm h_5 (ATerm t)
      {
        t = term_a_20;
        return(t);
      }
      t = Option_3_0(e_5, f_5, h_5, t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = v_19;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm j_5 (ATerm t)
            {
              ATerm i_28 = NULL,j_28 = NULL;
              i_28 = t;
              t = SSL_string_to_int(i_28);
              j_28 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_28);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, i_28);
              return(t);
            }
            ATerm k_5 (ATerm t)
            {
              t = term_d_20;
              return(t);
            }
            t = ArgOption_3_0(i_5, j_5, k_5, t);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
              ATerm l_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm m_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_e_20;
                return(t);
              }
              ATerm n_5 (ATerm t)
              {
                t = term_f_20;
                return(t);
              }
              t = Option_3_0(l_5, m_5, n_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm l_28 = NULL;
    l_28 = t;
    if(match_string(t, "-o"))
      {
        t = l_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = l_28;
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm m_28 = NULL;
    m_28 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), m_28);
    t = (ATerm) ATmakeAppl(sym_Output_1, m_28);
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_i_20;
    return(t);
  }
  t = ArgOption_3_0(o_5, q_5, r_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm s_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_l_20;
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_m_20;
          return(t);
        }
        t = Option_3_0(s_5, t_5, u_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  p_28 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = p_28;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm x_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_28 = ATgetFirst((ATermList) t);
          r_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_28 = ATgetFirst((ATermList) t);
          t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_28;
      t = i_0(t);
      t = s_28;
      t = k_0(t);
      x_28 = t;
      t = (ATerm) ATinsert(CheckATermList(t_28), x_28);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm z_28 = NULL;
    z_28 = t;
    if(match_string(t, "-i"))
      {
        t = z_28;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = z_28;
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm a_29 = NULL;
    a_29 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), a_29);
    t = (ATerm) ATmakeAppl(sym_Input_1, a_29);
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = term_n_20;
    return(t);
  }
  t = ArgOption_3_0(v_5, w_5, x_5, t);
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
        ATerm s_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = s_20;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_17;
  t = whoami_0_0(t);
  b_29 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), b_29));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_125(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm e_29 = NULL,f_29 = NULL,i_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_29 = ATgetFirst((ATermList) t);
            f_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_29;
        t = foldr_2_0(b_125, c_125, t);
        i_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_29, i_29);
        t = c_125(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  t = SSL_explode_term(j_29);
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      k_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_29;
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
  ATerm l_29 = NULL;
  t = times_0_0(t);
  {
    ATerm y_5 (ATerm t)
    {
      t = term_y_19;
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      ATerm m_29 = NULL,n_29 = NULL;
      if(match_cons(t, sym__2))
        {
          m_29 = ATgetArgument(t, 0);
          n_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(m_29, n_29);
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = SSL_addr(m_29, n_29);
          }
      }
      return(t);
    }
    t = crush_2_0(y_5, z_5, t);
    l_29 = t;
    t = SSL_TicksToSeconds(l_29);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  if(match_cons(t, sym__2))
    {
      x_29 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_29;
        if((x_29 != t))
          {
            _fail(t);
          }
        t = w_29;
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = w_29;
        {
          ATerm f_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_29, y_29);
              ;
              LocalPopChoice(g_21);
            }
          else
            {
              t = f_21;
              t = SSL_gtr(x_29, y_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_29, y_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_137 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm b_30 = NULL,c_30 = NULL;
    b_30 = t;
    t = term_g_18;
    t = get_config_0_0(t);
    c_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_30, term_h_21);
    t = geq_0_0(t);
    t = b_30;
    t = n_137(t);
    return(t);
  }
  t = try_1_0(a_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm e_30 = NULL,f_30 = NULL;
    t = run_time_0_0(t);
    e_30 = t;
    t = term_l_17;
    t = whoami_0_0(t);
    f_30 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), e_30), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), f_30));
    t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_21), e_30), term_j_21), f_30));
    return(t);
  }
  t = if_verbose1_1_0(b_6, t);
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
        ATerm c_6 (ATerm t)
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
        t = option_defined_1_0(c_6, t);
      }
    }
  t = k_140(t);
  return(t);
}
ATerm map_1_0 (ATerm m_120 (ATerm), ATerm t)
{
  ATerm h_30 (ATerm t)
  {
    ATerm t_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = t_21;
        t = Cons_2_0(m_120, h_30, t);
      }
    return(t);
  }
  t = h_30(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_30 = ATgetFirst((ATermList) t);
      k_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_30 = NULL,p_30 = NULL;
        t = k_30;
        t = g_0(t);
        o_30 = t;
        t = j_30;
        t = e_0(t);
        p_30 = t;
        t = k_30;
        {
          ATerm d_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_30), p_30);
            return(t);
          }
          t = reverse_acc_2_0(e_0, d_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_17;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, e_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_30);
  q_30 = t;
  t = r_30;
  t = g_112(t);
  s_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, s_30), q_30);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      {
        ATerm f_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(f_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_y_21;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm g_6 (ATerm t)
    {
      ATerm w_30 = NULL;
      w_30 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, w_30), term_z_21);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(g_6, t);
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
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  a_31 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_31);
  x_30 = t;
  t = y_30;
  t = h_112(t);
  z_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, z_30), x_30);
  return(t);
}
ATerm fetch_1_0 (ATerm x_120 (ATerm), ATerm t)
{
  ATerm d_31 (ATerm t)
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(x_120, _id, t);
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = Cons_2_0(_id, d_31, t);
      }
    return(t);
  }
  t = d_31(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_141 (ATerm), ATerm t)
{
  t = fetch_1_0(k_141, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL;
  f_31 = t;
  {
    ATerm c_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_22 = ATgetFirst((ATermList) t);
                ATerm h_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_31;
          }
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = c_22;
        t = (ATerm) ATinsert(ATempty, f_31);
      }
    g_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), g_31);
    t = f_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_20;
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
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_117(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm i_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_d_23;
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        t = term_m_23;
        return(t);
      }
      t = Option_3_0(h_6, i_6, j_6, t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm k_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_n_23;
          return(t);
        }
        ATerm m_6 (ATerm t)
        {
          t = term_s_23;
          return(t);
        }
        t = Option_3_0(k_6, l_6, m_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
  if(match_cons(t, sym__3))
    {
      m_31 = ATgetArgument(t, 0);
      n_31 = ATgetArgument(t, 1);
      o_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_31, n_31);
  {
    ATerm t_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_23 = ATgetArgument(t, 0);
            ATerm g_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_31, n_31);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = t_23;
        t = (ATerm) ATempty;
      }
    p_31 = t;
    t = SSL_table_put(m_31, n_31, (ATerm) ATinsert(CheckATermList(p_31), o_31));
    t = (ATerm) ATmakeAppl(sym__3, m_31, n_31, o_31);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_142 (ATerm), ATerm t)
{
  ATerm u_31 = NULL;
  t = term_l_17;
  t = p_142(t);
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_24, term_k_24, u_31);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = w_31;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm b_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_31 = ATgetFirst((ATermList) t);
          y_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_31;
      t = a_0(t);
      t = term_l_17;
      t = c_0(t);
      b_32 = t;
      t = (ATerm) ATinsert(CheckATermList(y_31), b_32);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm d_32 = NULL;
    d_32 = t;
    if(match_string(t, "--help"))
      {
        t = d_32;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = d_32;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = d_32;
          }
      }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_l_24;
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    t = term_o_24;
    return(t);
  }
  t = Option_3_0(n_6, o_6, q_6, t);
  return(t);
}
ATerm Cons_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  j_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_32 = ATgetFirst((ATermList) t);
      g_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_32);
  e_32 = t;
  t = f_32;
  t = y_97(t);
  h_32 = t;
  t = g_32;
  t = z_97(t);
  i_32 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_32), h_32), e_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_142 (ATerm), ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  {
    ATerm r_6 (ATerm t)
    {
      t = term_p_24;
      t = n_142(t);
      return(t);
    }
    t = try_1_0(r_6, t);
    t = p_32;
    {
      ATerm s_6 (ATerm t)
      {
        ATerm q_32 = NULL;
        q_32 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_32);
        t = (ATerm) ATmakeAppl(sym_Program_1, q_32);
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        ATerm q_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_25 = t;
            int b_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_25);
              }
            else
              {
                t = a_25;
                t = n_142(t);
                t = Cons_2_0(_id, t_6, t);
              }
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = q_24;
            {
              ATerm s_32 = NULL,t_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_32 = ATgetFirst((ATermList) t);
                  t_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_32), (ATerm) ATmakeAppl(sym_Undefined_1, s_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(s_6, t_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm m_142 (ATerm), ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_32;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm c_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_142(t);
          ;
          LocalPopChoice(d_25);
        }
      else
        {
          t = c_25;
          {
            ATerm f_25 = t;
            int g_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(g_25);
              }
            else
              {
                t = f_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_6, t);
    {
      ATerm v_6 (ATerm t)
      {
        ATerm h_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_33 = NULL;
            g_33 = t;
            {
              ATerm m_25 = t;
              int n_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_33;
                  {
                    ATerm q_25 = t;
                    int r_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_n_21;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(r_25);
                      }
                    else
                      {
                        t = q_25;
                        {
                          ATerm w_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(w_6, t);
                        }
                      }
                    t = g_33;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(n_25);
                }
              else
                {
                  t = m_25;
                  t = term_c_23;
                  t = get_config_0_0(t);
                  t = g_33;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = h_25;
            {
              ATerm x_6 (ATerm t)
              {
                ATerm y_6 (ATerm t)
                {
                  a_33 = t;
                  return(t);
                }
                t = Undefined_1_0(y_6, t);
                return(t);
              }
              t = option_defined_1_0(x_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_33)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_33)), term_n_26));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(v_6, t);
      b_33 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_33;
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
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_140, t);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        {
          ATerm q_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_140(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_26);
            }
          else
            {
              t = q_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_140(t);
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm b_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(b_140, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(z_6, d_140, e_140, b_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm d_7 (ATerm t)
    {
      ATerm j_33 = NULL,k_33 = NULL;
      j_33 = t;
      t = term_x_20;
      t = get_config_0_0(t);
      k_33 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, k_33));
      t = j_33;
      return(t);
    }
    t = if_verbose2_1_0(d_7, t);
    return(t);
  }
  t = iowrap_4_0(v_139, w_139, x_139, c_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm t)
{
  t = iowrap_3_0(t_139, u_139, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm q_139 (ATerm), ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    t = _2_0(_id, q_139, t);
    return(t);
  }
  t = iowrap_2_0(e_7, _fail, t);
  return(t);
}
ATerm optimize1_comp_0_0 (ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    ATerm g_7 (ATerm t)
    {
      t = simplify_0_0(t);
      t = simplify_widen_0_0(t);
      t = simplify_0_0(t);
      t = simplify_narrow_0_0(t);
      t = simplify_0_0(t);
      return(t);
    }
    t = apply_to_bodies_1_0(g_7, t);
    return(t);
  }
  t = iowrap_1_0(f_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = optimize1_comp_0_0(t);
  return(t);
}
