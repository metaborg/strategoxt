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
ATerm term_k_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_q_29;
ATerm term_d_28;
ATerm term_y_27;
ATerm term_w_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_g_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_22;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_m_18;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_p_15;
ATerm term_i_8;
void init_constant_terms (void)
{
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Op_2, term_s_17, (ATerm) ATempty);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_17);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__3, term_l_26, term_m_26, term_i_8);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm isect_1_0 (ATerm u_128 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm d_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm a_129 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm r_131 (ATerm), ATerm);
ATerm diff_1_0 (ATerm w_128 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm);
ATerm for_3_0 (ATerm a_138 (ATerm), ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm CleanupScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm x_120 (ATerm), ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm b_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm i_137 (ATerm), ATerm);
ATerm downup_1_0 (ATerm z_120 (ATerm), ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm o_104 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm t_104 (ATerm), ATerm);
ATerm apply_to_bodies_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm _2_0 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm w_142 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_145 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm j_127 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_127 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_144 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_143 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm w_146 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_126 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_118 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_118 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_148 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm y_148 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_146 (ATerm), ATerm z_146 (ATerm), ATerm a_147 (ATerm), ATerm b_147 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm h_146 (ATerm), ATerm i_146 (ATerm), ATerm j_146 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,h_0 = NULL;
  e_0 = t;
  t = term_i_8;
  t = whoami_0_0(t);
  h_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), h_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_0;
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm l_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      l_0 = ATgetArgument(t, 0);
      {
        ATerm j_8 = ATgetArgument(t, 1);
        if(match_cons(j_8, sym_Scope_2))
          {
            o_0 = ATgetArgument(j_8, 0);
            p_0 = ATgetArgument(j_8, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_0, o_0);
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_8 = ATgetArgument(t, 0);
            ATerm o_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_0;
        {
          ATerm c_0 (ATerm t)
          {
            t = o_0;
            return(t);
          }
          t = at_end_1_0(c_0, t);
        }
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        {
          ATerm v_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, l_0, o_0));
          if(match_cons(t, sym__2))
            {
              ATerm q_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_0;
          t = concat_0_0(t);
        }
      }
    q_0 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, q_0, p_0);
  }
  return(t);
}
ATerm isect_1_0 (ATerm u_128 (ATerm), ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL;
  if(match_cons(t, sym__2))
    {
      x_0 = ATgetArgument(t, 0);
      w_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_0;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm s_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(v_8);
        }
      else
        {
          t = s_8;
          {
            ATerm y_0 = NULL,a_1 = NULL;
            y_0 = t;
            {
              ATerm w_8 = t;
              int e_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm i_9 = ATgetFirst((ATermList) t);
                      a_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_9);
                  {
                    ATerm n_9 = t;
                    int o_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_1 = NULL;
                        t = y_0;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            f_1 = ATgetFirst((ATermList) t);
                            {
                              ATerm p_9 = (ATerm) ATgetNext((ATermList) t);
                            }
                          }
                        else
                          _fail(t);
                        t = w_0;
                        {
                          ATerm j_0 (ATerm t)
                          {
                            ATerm i_1 = NULL;
                            i_1 = t;
                            t = (ATerm) ATmakeAppl(sym__2, f_1, i_1);
                            t = u_128(t);
                            return(t);
                          }
                          t = fetch_1_0(j_0, t);
                          t = y_0;
                          t = Cons_2_0(_id, e_1, t);
                        }
                        ;
                        LocalPopChoice(o_9);
                      }
                    else
                      {
                        t = n_9;
                        t = a_1;
                        t = e_1(t);
                      }
                  }
                }
              else
                {
                  t = w_8;
                  {
                    ATerm o_1 = NULL;
                    t = y_0;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        o_1 = ATgetFirst((ATermList) t);
                        {
                          ATerm q_9 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = w_0;
                    {
                      ATerm r_0 (ATerm t)
                      {
                        ATerm r_1 = NULL;
                        r_1 = t;
                        t = (ATerm) ATmakeAppl(sym__2, o_1, r_1);
                        t = u_128(t);
                        return(t);
                      }
                      t = fetch_1_0(r_0, t);
                      t = y_0;
                      t = Cons_2_0(_id, e_1, t);
                    }
                  }
                }
            }
          }
        }
      return(t);
    }
    t = e_1(t);
  }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      j_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_1);
  h_1 = t;
  t = j_1;
  t = d_108(t);
  k_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, k_1), h_1);
  return(t);
}
ATerm RDefT_4_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,g_2 = NULL,k_2 = NULL,n_2 = NULL,o_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,u_2 = NULL;
  u_2 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      b_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
      k_2 = ATgetArgument(t, 2);
      n_2 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_2);
  a_2 = t;
  t = b_2;
  t = u_107(t);
  o_2 = t;
  t = g_2;
  t = v_107(t);
  q_2 = t;
  t = k_2;
  t = w_107(t);
  r_2 = t;
  t = n_2;
  t = x_107(t);
  s_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, o_2, q_2, r_2, s_2), a_2);
  return(t);
}
ATerm Scope_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  e_3 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  y_2 = t;
  t = a_3;
  t = g_109(t);
  c_3 = t;
  t = b_3;
  t = h_109(t);
  d_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, c_3, d_3), y_2);
  return(t);
}
ATerm tboundin_3_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm t)
{
  ATerm s_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(a_120, y_119, t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = s_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(a_120, a_120, a_120, y_119, t);
            ;
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            {
              ATerm x_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(a_120, a_120, a_120, y_119, t);
                  ;
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = x_9;
                  t = DynamicRules_1_0(y_119, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm t_3 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        t_3 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, t_3);
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_3 = NULL,b_4 = NULL,d_4 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        b_4 = ATgetArgument(t, 0);
        t = b_4;
        if(match_cons(t, sym_Rule_3))
          {
            u_3 = ATgetArgument(t, 0);
            {
              ATerm c_10 = ATgetArgument(t, 1);
            }
            {
              ATerm f_10 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_3;
        t = tvars_0_0(t);
      }
    else
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                b_4 = ATgetArgument(t, 0);
                {
                  ATerm i_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_10);
            t = b_4;
          }
        else
          {
            t = g_10;
            if(match_cons(t, sym_DynamicRules_1))
              {
                b_4 = ATgetArgument(t, 0);
                t = b_4;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm j_10 = t;
                int k_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm p_10 = ATgetArgument(t, 0);
                        ATerm q_10 = ATgetArgument(t, 1);
                        d_4 = ATgetArgument(t, 2);
                        {
                          ATerm r_10 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_10);
                    t = d_4;
                    {
                      ATerm u_0 (ATerm t)
                      {
                        ATerm x_6 = NULL;
                        ATerm s_10 = t;
                        int t_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                x_6 = ATgetArgument(t, 0);
                                {
                                  ATerm u_10 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(t_10);
                            t = x_6;
                          }
                        else
                          {
                            t = s_10;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                x_6 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = x_6;
                          }
                        return(t);
                      }
                      t = map_1_0(u_0, t);
                    }
                  }
                else
                  {
                    t = j_10;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm x_10 = ATgetArgument(t, 0);
                        ATerm z_10 = ATgetArgument(t, 1);
                        d_4 = ATgetArgument(t, 2);
                        {
                          ATerm a_11 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = d_4;
                    {
                      ATerm z_0 (ATerm t)
                      {
                        ATerm l_7 = NULL;
                        ATerm c_11 = t;
                        int d_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                l_7 = ATgetArgument(t, 0);
                                {
                                  ATerm f_11 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_11);
                            t = l_7;
                          }
                        else
                          {
                            t = c_11;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                l_7 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = l_7;
                          }
                        return(t);
                      }
                      t = map_1_0(z_0, t);
                    }
                  }
              }
          }
      }
    return(t);
  }
  t = free_vars_3_0(s_0, t_0, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm a_129 (ATerm), ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7;
  {
    ATerm q_7 (ATerm t)
    {
      ATerm g_11 = t;
      int h_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = o_7;
          ;
          LocalPopChoice(h_11);
        }
      else
        {
          t = g_11;
          {
            ATerm i_11 = t;
            int o_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_1 = NULL,w_1 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    v_1 = ATgetFirst((ATermList) t);
                    w_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_7;
                {
                  ATerm b_1 (ATerm t)
                  {
                    ATerm x_1 = NULL;
                    x_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_1, x_1);
                    t = a_129(t);
                    return(t);
                  }
                  t = fetch_1_0(b_1, t);
                  t = w_1;
                  t = q_7(t);
                }
                ;
                LocalPopChoice(o_11);
              }
            else
              {
                t = i_11;
                t = Cons_2_0(_id, q_7, t);
              }
          }
        }
      return(t);
    }
    t = q_7(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm r_131 (ATerm), ATerm t)
{
  ATerm q_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_131(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = q_11;
      {
        ATerm x_7 = NULL,y_7 = NULL,d_8 = NULL,e_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_7 = ATgetFirst((ATermList) t);
            y_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_7;
        t = r_131(t);
        d_8 = t;
        t = y_7;
        t = foldr_3_0(p_131, q_131, r_131, t);
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, e_8);
        t = q_131(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm w_128 (ATerm), ATerm t)
{
  ATerm p_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      r_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm t_11 = t;
      int u_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(u_11);
        }
      else
        {
          t = t_11;
          {
            ATerm v_11 = t;
            int x_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_2 = NULL,d_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_2 = ATgetFirst((ATermList) t);
                    d_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = p_8;
                {
                  ATerm c_1 (ATerm t)
                  {
                    ATerm e_2 = NULL;
                    e_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_2, e_2);
                    t = w_128(t);
                    return(t);
                  }
                  t = fetch_1_0(c_1, t);
                  t = d_2;
                  t = t_8(t);
                }
                ;
                LocalPopChoice(x_11);
              }
            else
              {
                t = v_11;
                t = Cons_2_0(_id, t_8, t);
              }
          }
        }
      return(t);
    }
    t = t_8(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_11 = ATgetFirst((ATermList) t);
      if(match_cons(z_11, sym__2))
        {
          x_8 = ATgetArgument(z_11, 0);
          y_8 = ATgetArgument(z_11, 1);
        }
      else
        _fail(t);
      z_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_8);
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_8);
  if(match_cons(t, sym__2))
    {
      if((a_9 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_9, b_9);
  {
    ATerm d_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm a_12 = ATgetArgument(t, 0);
          if(((ATgetType(a_12) != AT_LIST) || !(ATisEmpty(a_12))))
            _fail(t);
          {
            ATerm b_12 = ATgetArgument(t, 1);
            if(((ATgetType(b_12) != AT_LIST) || !(ATisEmpty(b_12))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm g_1 (ATerm t)
    {
      ATerm f_9 = NULL,h_9 = NULL,j_9 = NULL,k_9 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm c_12 = ATgetArgument(t, 0);
          if(((ATgetType(c_12) == AT_LIST) && !(ATisEmpty(c_12))))
            {
              f_9 = ATgetFirst((ATermList) c_12);
              j_9 = (ATerm) ATgetNext((ATermList) c_12);
            }
          else
            _fail(t);
          {
            ATerm d_12 = ATgetArgument(t, 1);
            if(((ATgetType(d_12) == AT_LIST) && !(ATisEmpty(d_12))))
              {
                h_9 = ATgetFirst((ATermList) d_12);
                k_9 = (ATerm) ATgetNext((ATermList) d_12);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_9, h_9), (ATerm) ATmakeAppl(sym__2, j_9, k_9));
      return(t);
    }
    ATerm m_1 (ATerm t)
    {
      ATerm l_9 = NULL,m_9 = NULL;
      if(match_cons(t, sym__2))
        {
          l_9 = ATgetArgument(t, 0);
          m_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(m_9), l_9);
      return(t);
    }
    t = genzip_4_0(d_1, g_1, m_1, _id, t);
    d_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_9, z_8);
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm h_12 = ATgetArgument(t, 0);
              ATerm i_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_9;
          {
            ATerm n_1 (ATerm t)
            {
              t = z_8;
              return(t);
            }
            t = at_end_1_0(n_1, t);
          }
          ;
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          {
            ATerm m_2 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, d_9, z_8));
            if(match_cons(t, sym__2))
              {
                ATerm j_12 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_12) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                m_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_2;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm t)
{
  ATerm r_9 (ATerm t)
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_137(t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = y_137(t);
        t = r_9(t);
      }
    return(t);
  }
  t = r_9(t);
  return(t);
}
ATerm for_3_0 (ATerm a_138 (ATerm), ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm t)
{
  t = a_138(t);
  t = while_not_2_0(b_138, c_138, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm y_9 = NULL;
        y_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_9);
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, t_1, t);
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        ATerm u_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              ATerm x_12 = t;
              int z_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_10 = NULL,b_10 = NULL,d_10 = NULL,e_10 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_10 = ATgetFirst((ATermList) t);
                      e_10 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = a_10;
                  if(match_cons(t, sym__2))
                    {
                      b_10 = ATgetArgument(t, 0);
                      d_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_10;
                  if((b_10 != t))
                    {
                      _fail(t);
                    }
                  t = e_10;
                  ;
                  LocalPopChoice(z_12);
                }
              else
                {
                  t = x_12;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, u_1, t);
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = u_12;
            {
              ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_10 = ATgetArgument(t, 0);
                  m_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_10;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_10 = ATgetFirst((ATermList) t);
                  o_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_10), n_10), o_10);
            }
          }
        return(t);
      }
      t = for_3_0(p_1, q_1, s_1, t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm y_1 (ATerm t)
        {
          ATerm v_10 = NULL;
          if(match_cons(t, sym__2))
            {
              v_10 = ATgetArgument(t, 0);
              if((v_10 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(y_1, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_135(t);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_10 = NULL,y_10 = NULL,g_3 = NULL,h_3 = NULL;
              w_10 = t;
              t = s_135(t);
              y_10 = t;
              t = w_10;
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm t_2 = NULL;
                  t = b_11(t);
                  t_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_2, y_10);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm f_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = t_135(z_1, b_11, f_2, t);
                g_3 = t;
                t = SSL_explode_term(g_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_13 = ATgetArgument(t, 0);
                    h_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_3;
                {
                  ATerm h_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm i_2 (ATerm t)
                  {
                    ATerm j_2 (ATerm t)
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
                    t = union_1_0(j_2, t);
                    return(t);
                  }
                  t = foldr_3_0(h_2, i_2, _id, t);
                }
              }
              ;
              LocalPopChoice(e_13);
            }
          else
            {
              t = d_13;
              {
                ATerm o_3 = NULL,p_3 = NULL;
                o_3 = t;
                t = SSL_explode_term(o_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_13 = ATgetArgument(t, 0);
                    p_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_3;
                {
                  ATerm l_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm p_2 (ATerm t)
                  {
                    ATerm v_2 (ATerm t)
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
                    t = union_1_0(v_2, t);
                    return(t);
                  }
                  t = foldr_3_0(l_2, p_2, b_11, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = b_11(t);
  return(t);
}
ATerm CleanupScope_0_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      j_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11;
  {
    ATerm w_2 (ATerm t)
    {
      ATerm n_11 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          n_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, n_11);
      return(t);
    }
    ATerm x_2 (ATerm t)
    {
      ATerm p_11 = NULL,w_11 = NULL,y_11 = NULL;
      if(match_cons(t, sym_LRule_1))
        {
          w_11 = ATgetArgument(t, 0);
          t = w_11;
          if(match_cons(t, sym_Rule_3))
            {
              p_11 = ATgetArgument(t, 0);
              {
                ATerm i_13 = ATgetArgument(t, 1);
              }
              {
                ATerm k_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = p_11;
          t = tvars_0_0(t);
        }
      else
        {
          ATerm l_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Scope_2))
                {
                  w_11 = ATgetArgument(t, 0);
                  {
                    ATerm r_13 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(q_13);
              t = w_11;
            }
          else
            {
              t = l_13;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  w_11 = ATgetArgument(t, 0);
                  t = w_11;
                  t = tvars_0_0(t);
                }
              else
                {
                  ATerm s_13 = t;
                  int t_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          ATerm u_13 = ATgetArgument(t, 0);
                          ATerm v_13 = ATgetArgument(t, 1);
                          y_11 = ATgetArgument(t, 2);
                          {
                            ATerm w_13 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(t_13);
                      t = y_11;
                      {
                        ATerm z_2 (ATerm t)
                        {
                          ATerm g_12 = NULL;
                          ATerm y_13 = t;
                          int a_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  g_12 = ATgetArgument(t, 0);
                                  {
                                    ATerm c_14 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(a_14);
                              t = g_12;
                            }
                          else
                            {
                              t = y_13;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  g_12 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = g_12;
                            }
                          return(t);
                        }
                        t = map_1_0(z_2, t);
                      }
                    }
                  else
                    {
                      t = s_13;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          ATerm e_14 = ATgetArgument(t, 0);
                          ATerm i_14 = ATgetArgument(t, 1);
                          y_11 = ATgetArgument(t, 2);
                          {
                            ATerm k_14 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      t = y_11;
                      {
                        ATerm f_3 (ATerm t)
                        {
                          ATerm m_12 = NULL;
                          ATerm m_14 = t;
                          int o_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  m_12 = ATgetArgument(t, 0);
                                  {
                                    ATerm r_14 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(o_14);
                              t = m_12;
                            }
                          else
                            {
                              t = m_14;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  m_12 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = m_12;
                            }
                          return(t);
                        }
                        t = map_1_0(f_3, t);
                      }
                    }
                }
            }
        }
      return(t);
    }
    t = free_vars_3_0(w_2, x_2, tboundin_3_0, t);
    l_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_11, l_11);
    {
      ATerm i_3 (ATerm t)
      {
        ATerm p_12 = NULL;
        if(match_cons(t, sym__2))
          {
            p_12 = ATgetArgument(t, 0);
            if((p_12 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = isect_1_0(i_3, t);
      m_11 = t;
      {
        ATerm u_14 = t;
        if((PushChoice() == 0))
          {
            if((j_11 != t))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_14;
          }
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_11, k_11);
      }
    }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm x_120 (ATerm), ATerm t)
{
  t = x_120(t);
  {
    ATerm j_3 (ATerm t)
    {
      t = topdown_1_0(x_120, t);
      return(t);
    }
    t = SRTS_all(j_3, t);
  }
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_12)), (ATerm) ATmakeAppl(sym_Seq_2, q_12, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_12)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      s_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_12)), (ATerm) ATmakeAppl(sym_Seq_2, s_12, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, t_12)))));
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm a_13 = NULL,f_13 = NULL,j_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_13;
  if(match_cons(t, sym_Build_1))
    {
      ATerm w_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_13;
  if(match_cons(t, sym_Where_1))
    {
      n_13 = ATgetArgument(t, 0);
      t = n_13;
      if(match_cons(t, sym_Prim_2))
        {
          a_13 = ATgetArgument(t, 0);
          f_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          n_13 = ATgetArgument(t, 0);
          o_13 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, n_13, o_13);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              n_13 = ATgetArgument(t, 0);
              o_13 = ATgetArgument(t, 1);
              p_13 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_125(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = k_125(t);
        t = _2_0(m_125, x_13, t);
        t = l_125(t);
      }
    return(t);
  }
  t = x_13(t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm z_13 = NULL,b_14 = NULL,d_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_15 = ATgetArgument(t, 0);
      if(match_cons(a_15, sym_Build_1))
        {
          ATerm c_15 = ATgetArgument(a_15, 0);
          if(match_cons(c_15, sym_Op_2))
            {
              b_14 = ATgetArgument(c_15, 0);
              z_13 = ATgetArgument(c_15, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm b_15 = ATgetArgument(t, 1);
        if(match_cons(b_15, sym_Match_1))
          {
            ATerm d_15 = ATgetArgument(b_15, 0);
            if(match_cons(d_15, sym_Op_2))
              {
                if((b_14 != ATgetArgument(d_15, 0)))
                  {
                    _fail(ATgetArgument(d_15, 0));
                  }
                d_14 = ATgetArgument(d_15, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, z_13, d_14);
  {
    ATerm k_3 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm e_15 = ATgetArgument(t, 0);
          if(((ATgetType(e_15) != AT_LIST) || !(ATisEmpty(e_15))))
            _fail(t);
          {
            ATerm f_15 = ATgetArgument(t, 1);
            if(((ATgetType(f_15) != AT_LIST) || !(ATisEmpty(f_15))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm l_3 (ATerm t)
    {
      ATerm g_14 = NULL,h_14 = NULL,j_14 = NULL,l_14 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm g_15 = ATgetArgument(t, 0);
          if(((ATgetType(g_15) == AT_LIST) && !(ATisEmpty(g_15))))
            {
              g_14 = ATgetFirst((ATermList) g_15);
              j_14 = (ATerm) ATgetNext((ATermList) g_15);
            }
          else
            _fail(t);
          {
            ATerm h_15 = ATgetArgument(t, 1);
            if(((ATgetType(h_15) == AT_LIST) && !(ATisEmpty(h_15))))
              {
                h_14 = ATgetFirst((ATermList) h_15);
                l_14 = (ATerm) ATgetNext((ATermList) h_15);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_14, h_14), (ATerm) ATmakeAppl(sym__2, j_14, l_14));
      return(t);
    }
    ATerm m_3 (ATerm t)
    {
      ATerm n_14 = NULL,p_14 = NULL;
      if(match_cons(t, sym__2))
        {
          n_14 = ATgetArgument(t, 0);
          p_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(p_14), n_14);
      return(t);
    }
    ATerm q_3 (ATerm t)
    {
      ATerm q_14 = NULL,s_14 = NULL;
      if(match_cons(t, sym__2))
        {
          q_14 = ATgetArgument(t, 0);
          s_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_14), (ATerm) ATmakeAppl(sym_Match_1, s_14));
      return(t);
    }
    t = genzip_4_0(k_3, l_3, m_3, q_3, t);
    f_14 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_14), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_14, z_13)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm t_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_15 = ATgetArgument(t, 0);
      if(match_cons(i_15, sym_Build_1))
        {
          ATerm k_15 = ATgetArgument(i_15, 0);
          if(match_cons(k_15, sym_Op_2))
            {
              t_14 = ATgetArgument(k_15, 0);
              {
                ATerm l_15 = ATgetArgument(k_15, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm j_15 = ATgetArgument(t, 1);
        if(match_cons(j_15, sym_Match_1))
          {
            ATerm m_15 = ATgetArgument(j_15, 0);
            if(match_cons(m_15, sym_Op_2))
              {
                v_14 = ATgetArgument(m_15, 0);
                {
                  ATerm n_15 = ATgetArgument(m_15, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, t_14, v_14);
  {
    ATerm o_15 = t;
    if((PushChoice() == 0))
      {
        ATerm x_14 = NULL;
        if(match_cons(t, sym__2))
          {
            x_14 = ATgetArgument(t, 0);
            if((x_14 != ATgetArgument(t, 1)))
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
        t = o_15;
      }
    t = term_p_15;
  }
  return(t);
}
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm g_18 (ATerm b_17, ATerm c_17, ATerm d_17, ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, b_17, c_17);
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MisMatch_0_0(t);
          ;
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          {
            ATerm s_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = BuildMatchFusion_0_0(t);
                ;
                LocalPopChoice(t_15);
              }
            else
              {
                t = s_15;
                {
                  ATerm u_15 = t;
                  int v_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_17 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          ATerm w_15 = ATgetArgument(t, 0);
                          ATerm x_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_17;
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm y_15 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = c_17;
                      if(match_cons(t, sym_Build_1))
                        {
                          k_17 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      ;
                      LocalPopChoice(v_15);
                    }
                  else
                    {
                      t = u_15;
                      {
                        ATerm z_15 = t;
                        int a_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = BuildPrim_0_0(t);
                            ;
                            LocalPopChoice(a_16);
                          }
                        else
                          {
                            t = z_15;
                            {
                              ATerm o_17 = NULL,q_17 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm b_16 = ATgetArgument(t, 0);
                                  ATerm c_16 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = b_17;
                              if(match_cons(t, sym_Match_1))
                                {
                                  o_17 = ATgetArgument(t, 0);
                                  t = c_17;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      q_17 = ATgetArgument(t, 0);
                                      t = q_17;
                                      if((o_17 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, o_17);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Build_1))
                                        {
                                          q_17 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = q_17;
                                      if((o_17 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, o_17);
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      o_17 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_17;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      q_17 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_17;
                                  if((o_17 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Build_1, o_17);
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
  ATerm u_17 = NULL,w_17 = NULL,y_17 = NULL,z_17 = NULL,c_18 = NULL;
  y_17 = t;
  if(match_cons(t, sym_Seq_2))
    {
      z_17 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_18;
  if(match_cons(t, sym_Seq_2))
    {
      u_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, z_17, u_17);
            {
              ATerm f_16 = t;
              int g_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(g_16);
                }
              else
                {
                  t = f_16;
                  {
                    ATerm h_16 = t;
                    int i_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(i_16);
                      }
                    else
                      {
                        t = h_16;
                        {
                          ATerm j_16 = t;
                          int k_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_4 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm l_16 = ATgetArgument(t, 0);
                                  ATerm m_16 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = z_17;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm n_16 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = u_17;
                              if(match_cons(t, sym_Build_1))
                                {
                                  p_4 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              ;
                              LocalPopChoice(k_16);
                            }
                          else
                            {
                              t = j_16;
                              {
                                ATerm o_16 = t;
                                int p_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(p_16);
                                  }
                                else
                                  {
                                    t = o_16;
                                    {
                                      ATerm t_4 = NULL,v_4 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm q_16 = ATgetArgument(t, 0);
                                          ATerm r_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = z_17;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          t_4 = ATgetArgument(t, 0);
                                          t = u_17;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              v_4 = ATgetArgument(t, 0);
                                              t = v_4;
                                              if((t_4 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, t_4);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  v_4 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = v_4;
                                              if((t_4 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, t_4);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              t_4 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = u_17;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              v_4 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = v_4;
                                          if((t_4 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_4);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              j_4 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, j_4, w_17);
            }
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            t = g_18(z_17, c_18, y_17, t);
          }
      }
    }
  else
    {
      t = g_18(z_17, c_18, y_17, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_122 (ATerm), ATerm t)
{
  ATerm h_18 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_122(t);
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = SRTS_one(h_18, t);
      }
    return(t);
  }
  t = h_18(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if(((ATgetType(u_16) == AT_LIST) && !(ATisEmpty(u_16))))
        {
          ATerm w_16 = ATgetFirst((ATermList) u_16);
          if(match_cons(w_16, sym_SDefT_4))
            {
              j_18 = ATgetArgument(w_16, 0);
              {
                ATerm y_16 = ATgetArgument(w_16, 1);
                if(((ATgetType(y_16) != AT_LIST) || !(ATisEmpty(y_16))))
                  _fail(t);
              }
              {
                ATerm z_16 = ATgetArgument(w_16, 2);
                if(((ATgetType(z_16) != AT_LIST) || !(ATisEmpty(z_16))))
                  _fail(t);
              }
              i_18 = ATgetArgument(w_16, 3);
            }
          else
            _fail(t);
          {
            ATerm x_16 = (ATerm) ATgetNext((ATermList) u_16);
            if(((ATgetType(x_16) != AT_LIST) || !(ATisEmpty(x_16))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm v_16 = ATgetArgument(t, 1);
        if(match_cons(v_16, sym_CallT_3))
          {
            ATerm a_17 = ATgetArgument(v_16, 0);
            if(match_cons(a_17, sym_SVar_1))
              {
                if((j_18 != ATgetArgument(a_17, 0)))
                  {
                    _fail(ATgetArgument(a_17, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm e_17 = ATgetArgument(v_16, 1);
              if(((ATgetType(e_17) != AT_LIST) || !(ATisEmpty(e_17))))
                _fail(t);
            }
            {
              ATerm f_17 = ATgetArgument(v_16, 2);
              if(((ATgetType(f_17) != AT_LIST) || !(ATisEmpty(f_17))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_18;
  {
    ATerm g_17 = t;
    if((PushChoice() == 0))
      {
        ATerm r_3 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm h_17 = ATgetArgument(t, 0);
              if(match_cons(h_17, sym_SVar_1))
                {
                  if((j_18 != ATgetArgument(h_17, 0)))
                    {
                      _fail(ATgetArgument(h_17, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm i_17 = ATgetArgument(t, 1);
                if(((ATgetType(i_17) != AT_LIST) || !(ATisEmpty(i_17))))
                  _fail(t);
              }
              {
                ATerm j_17 = ATgetArgument(t, 2);
                if(((ATgetType(j_17) != AT_LIST) || !(ATisEmpty(j_17))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(r_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_17;
      }
    t = i_18;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      b_19 = ATgetArgument(t, 0);
      t = b_19;
      if(match_cons(t, sym_Seq_2))
        {
          x_18 = ATgetArgument(t, 0);
          t_18 = ATgetArgument(t, 1);
          t = x_18;
          if(match_cons(t, sym_Where_1))
            {
              s_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_18;
          if(match_cons(t, sym_Seq_2))
            {
              u_18 = ATgetArgument(t, 0);
              w_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_18;
          if(match_cons(t, sym_Build_1))
            {
              v_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, s_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_18), w_18)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              x_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          b_19 = ATgetArgument(t, 0);
          t = b_19;
          if(match_cons(t, sym_Test_1))
            {
              x_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              b_19 = ATgetArgument(t, 0);
              t = b_19;
              if(match_cons(t, sym_Not_1))
                {
                  x_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, x_18);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  b_19 = ATgetArgument(t, 0);
                  c_19 = ATgetArgument(t, 1);
                  t = c_19;
                  if((b_19 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      b_19 = ATgetArgument(t, 0);
                      c_19 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_19;
                  if((b_19 != t))
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
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      q_19 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
      t = q_19;
      if(match_cons(t, sym_LChoice_2))
        {
          r_19 = ATgetArgument(t, 0);
          s_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, r_19, (ATerm) ATmakeAppl(sym_LChoice_2, s_19, t_19));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          q_19 = ATgetArgument(t, 0);
          t_19 = ATgetArgument(t, 1);
          t = q_19;
          if(match_cons(t, sym_Seq_2))
            {
              r_19 = ATgetArgument(t, 0);
              s_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, r_19, (ATerm) ATmakeAppl(sym_Seq_2, s_19, t_19));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              q_19 = ATgetArgument(t, 0);
              t_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_19;
          if(match_cons(t, sym_Choice_2))
            {
              r_19 = ATgetArgument(t, 0);
              s_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, r_19, (ATerm) ATmakeAppl(sym_Choice_2, s_19, t_19));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm s_3 (ATerm t)
        {
          ATerm n_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(p_17);
            }
          else
            {
              t = n_17;
            }
          return(t);
        }
        t = Cons_2_0(_id, s_3, t);
      }
      ;
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
      {
        ATerm v_3 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, v_3, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,v_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      v_20 = ATgetArgument(t, 0);
      w_20 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, v_20, w_20);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          v_20 = ATgetArgument(t, 0);
          t = v_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_20 = ATgetFirst((ATermList) t);
              o_20 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, n_20, (ATerm) ATmakeAppl(sym_LChoices_1, o_20));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_p_15;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              v_20 = ATgetArgument(t, 0);
              t = v_20;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_20 = ATgetFirst((ATermList) t);
                  o_20 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_20, (ATerm) ATmakeAppl(sym_Choices_1, o_20));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_p_15;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  v_20 = ATgetArgument(t, 0);
                  t = v_20;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_20 = ATgetFirst((ATermList) t);
                      o_20 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_20, (ATerm) ATmakeAppl(sym_Seqs_1, o_20));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_r_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_20 = ATgetArgument(t, 0);
                      w_20 = ATgetArgument(t, 1);
                      q_20 = ATgetArgument(t, 2);
                      p_20 = ATgetArgument(t, 3);
                      {
                        ATerm k_21 = NULL,l_21 = NULL;
                        t = w_20;
                        {
                          ATerm x_3 (ATerm t)
                          {
                            ATerm m_21 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                m_21 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, m_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_17), term_v_17));
                            return(t);
                          }
                          t = map1_1_0(x_3, t);
                          k_21 = t;
                          t = q_20;
                          {
                            ATerm y_3 (ATerm t)
                            {
                              ATerm x_17 = t;
                              int a_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_21 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      r_21 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_21, term_v_17);
                                  ;
                                  LocalPopChoice(a_18);
                                }
                              else
                                {
                                  t = x_17;
                                }
                              return(t);
                            }
                            t = map1_1_0(y_3, t);
                            l_21 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, v_20, k_21, l_21, p_20);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          v_20 = ATgetArgument(t, 0);
                          w_20 = ATgetArgument(t, 1);
                          q_20 = ATgetArgument(t, 2);
                          p_20 = ATgetArgument(t, 3);
                          {
                            ATerm b_18 = t;
                            int d_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm b_22 = NULL,d_22 = NULL;
                                t = q_20;
                                {
                                  ATerm z_3 (ATerm t)
                                  {
                                    ATerm e_22 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        e_22 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, e_22, term_v_17);
                                    return(t);
                                  }
                                  t = map1_1_0(z_3, t);
                                  b_22 = t;
                                  t = w_20;
                                  {
                                    ATerm a_4 (ATerm t)
                                    {
                                      ATerm e_18 = t;
                                      int f_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm g_22 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              g_22 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, g_22, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_17), term_v_17));
                                          ;
                                          LocalPopChoice(f_18);
                                        }
                                      else
                                        {
                                          t = e_18;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(a_4, t);
                                    d_22 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, v_20, d_22, b_22, p_20);
                                  }
                                }
                                ;
                                LocalPopChoice(d_18);
                              }
                            else
                              {
                                t = b_18;
                                {
                                  ATerm m_22 = NULL,n_22 = NULL;
                                  t = w_20;
                                  {
                                    ATerm c_4 (ATerm t)
                                    {
                                      ATerm o_22 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          o_22 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, o_22, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_17), term_v_17));
                                      return(t);
                                    }
                                    t = map1_1_0(c_4, t);
                                    m_22 = t;
                                    t = q_20;
                                    {
                                      ATerm e_4 (ATerm t)
                                      {
                                        ATerm k_18 = t;
                                        int l_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm q_22 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                q_22 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, q_22, term_v_17);
                                            ;
                                            LocalPopChoice(l_18);
                                          }
                                        else
                                          {
                                            t = k_18;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(e_4, t);
                                      n_22 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, v_20, m_22, n_22, p_20);
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
                              v_20 = ATgetArgument(t, 0);
                              w_20 = ATgetArgument(t, 1);
                              q_20 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, w_20, (ATerm) ATmakeAppl(sym_Op_2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, q_20), v_20)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  v_20 = ATgetArgument(t, 0);
                                  w_20 = ATgetArgument(t, 1);
                                  q_20 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_20)), v_20), (ATerm) ATmakeAppl(sym_Build_1, w_20)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      v_20 = ATgetArgument(t, 0);
                                      w_20 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_20, (ATerm) ATmakeAppl(sym_Match_1, w_20));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          v_20 = ATgetArgument(t, 0);
                                          w_20 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_20), w_20);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              v_20 = ATgetArgument(t, 0);
                                              w_20 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_20), v_20);
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
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      w_23 = ATgetArgument(t, 0);
      t = w_23;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          w_23 = ATgetArgument(t, 0);
          t = w_23;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_r_17;
        }
      else
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  w_23 = ATgetArgument(t, 0);
                  {
                    ATerm p_18 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(o_18);
              t = w_23;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
            }
          else
            {
              t = n_18;
              {
                ATerm q_18 = t;
                int r_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm y_18 = ATgetArgument(t, 0);
                        x_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_18);
                    t = x_23;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                  }
                else
                  {
                    t = q_18;
                    {
                      ATerm z_18 = t;
                      int a_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm d_19 = ATgetArgument(t, 0);
                              x_23 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_19);
                          t = x_23;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          t = z_18;
                          if(match_cons(t, sym_Some_1))
                            {
                              w_23 = ATgetArgument(t, 0);
                              t = w_23;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  w_23 = ATgetArgument(t, 0);
                                  t = w_23;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  ATerm e_19 = t;
                                  int f_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm g_19 = ATgetArgument(t, 0);
                                          x_23 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(f_19);
                                      t = x_23;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      t = e_19;
                                      {
                                        ATerm h_19 = t;
                                        int i_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm j_19 = ATgetArgument(t, 0);
                                                x_23 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(i_19);
                                            t = x_23;
                                            {
                                              ATerm f_4 (ATerm t)
                                              {
                                                if(!(match_cons(t, sym_Fail_0)))
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = fetch_1_0(f_4, t);
                                              t = term_p_15;
                                            }
                                          }
                                        else
                                          {
                                            t = h_19;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                w_23 = ATgetArgument(t, 0);
                                                x_23 = ATgetArgument(t, 1);
                                                t = x_23;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = w_23;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm k_19 = t;
                                                        int l_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = x_23;
                                                            ;
                                                            LocalPopChoice(l_19);
                                                          }
                                                        else
                                                          {
                                                            t = k_19;
                                                            t = w_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = w_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_23;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = x_23;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    w_23 = ATgetArgument(t, 0);
                                                    x_23 = ATgetArgument(t, 1);
                                                    t = x_23;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = w_23;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm m_19 = t;
                                                            int n_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = x_23;
                                                                ;
                                                                LocalPopChoice(n_19);
                                                              }
                                                            else
                                                              {
                                                                t = m_19;
                                                                t = w_23;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = w_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = w_23;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = x_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        w_23 = ATgetArgument(t, 0);
                                                        t = w_23;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            w_23 = ATgetArgument(t, 0);
                                                            x_23 = ATgetArgument(t, 1);
                                                            y_23 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = y_23;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_23, x_23);
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
  ATerm w_24 = NULL,y_24 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      y_24 = ATgetArgument(t, 0);
      t = y_24;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          y_24 = ATgetArgument(t, 0);
          t = y_24;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_p_15;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              y_24 = ATgetArgument(t, 0);
              w_24 = ATgetArgument(t, 1);
              t = w_24;
              if(match_cons(t, sym_Id_0))
                {
                  t = y_24;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm o_19 = t;
                      int p_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_24;
                          ;
                          LocalPopChoice(p_19);
                        }
                      else
                        {
                          t = o_19;
                          t = y_24;
                        }
                    }
                  else
                    {
                      t = y_24;
                    }
                }
              else
                {
                  t = y_24;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = w_24;
                }
            }
          else
            {
              ATerm u_19 = t;
              int v_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      y_24 = ATgetArgument(t, 0);
                      {
                        ATerm w_19 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_19);
                  t = y_24;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = u_19;
                  {
                    ATerm x_19 = t;
                    int y_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm z_19 = ATgetArgument(t, 0);
                            w_24 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_19);
                        t = w_24;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = x_19;
                        {
                          ATerm a_20 = t;
                          int b_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm c_20 = ATgetArgument(t, 0);
                                  w_24 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(b_20);
                              t = w_24;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = a_20;
                              if(match_cons(t, sym_All_1))
                                {
                                  y_24 = ATgetArgument(t, 0);
                                  t = y_24;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      y_24 = ATgetArgument(t, 0);
                                      t = y_24;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          y_24 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = y_24;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_r_17;
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
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            {
              ATerm h_20 = t;
              int i_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(i_20);
                }
              else
                {
                  t = h_20;
                  {
                    ATerm j_20 = t;
                    int k_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(k_20);
                      }
                    else
                      {
                        t = j_20;
                        {
                          ATerm l_20 = t;
                          int m_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(m_20);
                            }
                          else
                            {
                              t = l_20;
                              {
                                ATerm r_20 = t;
                                int s_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_25 = NULL,l_25 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        k_25 = ATgetArgument(t, 0);
                                        l_25 = ATgetArgument(t, 1);
                                        t = k_25;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_25;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            k_25 = ATgetArgument(t, 0);
                                            l_25 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = k_25;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_25;
                                      }
                                    ;
                                    LocalPopChoice(s_20);
                                  }
                                else
                                  {
                                    t = r_20;
                                    {
                                      ATerm t_20 = t;
                                      int u_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(u_20);
                                        }
                                      else
                                        {
                                          t = t_20;
                                          {
                                            ATerm x_20 = t;
                                            int y_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(y_20);
                                              }
                                            else
                                              {
                                                t = x_20;
                                                {
                                                  ATerm p_25 = NULL,q_25 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      p_25 = ATgetArgument(t, 0);
                                                      q_25 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = p_25;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = q_25;
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
ATerm repeat_1_0 (ATerm i_137 (ATerm), ATerm t)
{
  ATerm s_25 (ATerm t)
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_137(t);
        t = s_25(t);
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
      }
    return(t);
  }
  t = s_25(t);
  return(t);
}
ATerm downup_1_0 (ATerm z_120 (ATerm), ATerm t)
{
  t = z_120(t);
  {
    ATerm g_4 (ATerm t)
    {
      t = downup_1_0(z_120, t);
      return(t);
    }
    t = SRTS_all(g_4, t);
    t = z_120(t);
  }
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_26;
  if(match_cons(t, sym_Scope_2))
    {
      x_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
      t = a_26;
      if(match_cons(t, sym_Scope_2))
        {
          b_26 = ATgetArgument(t, 0);
          c_26 = ATgetArgument(t, 1);
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, x_25, (ATerm) ATmakeAppl(sym_Seq_2, a_26, y_25));
                ;
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
                t = (ATerm) ATmakeAppl(sym_Scope_2, b_26, (ATerm) ATmakeAppl(sym_Seq_2, c_26, d_26));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, x_25, (ATerm) ATmakeAppl(sym_Seq_2, a_26, y_25));
        }
    }
  else
    {
      t = a_26;
      if(match_cons(t, sym_Scope_2))
        {
          b_26 = ATgetArgument(t, 0);
          c_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, b_26, (ATerm) ATmakeAppl(sym_Seq_2, c_26, d_26));
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,y_26 = NULL,z_26 = NULL,b_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  g_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
      y_26 = ATgetArgument(t, 2);
      z_26 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_27);
  t_26 = t;
  t = u_26;
  t = o_111(t);
  b_27 = t;
  t = v_26;
  t = p_111(t);
  d_27 = t;
  t = y_26;
  t = q_111(t);
  e_27 = t;
  t = z_26;
  t = r_111(t);
  f_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, b_27, d_27, e_27, f_27), t_26);
  return(t);
}
ATerm SDef_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  q_27 = t;
  if(match_cons(t, sym_SDef_3))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
      m_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  j_27 = t;
  t = k_27;
  t = l_111(t);
  n_27 = t;
  t = l_27;
  t = m_111(t);
  o_27 = t;
  t = m_27;
  t = n_111(t);
  p_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, n_27, o_27, p_27), j_27);
  return(t);
}
ATerm Strategies_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  w_27 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_27);
  t_27 = t;
  t = u_27;
  t = o_104(t);
  v_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, v_27), t_27);
  return(t);
}
ATerm Specification_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
  c_28 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_28);
  z_27 = t;
  t = a_28;
  t = t_104(t);
  b_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, b_28), z_27);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm i_4 (ATerm t)
    {
      ATerm k_4 (ATerm t)
      {
        ATerm m_4 (ATerm t)
        {
          ATerm n_4 (ATerm t)
          {
            ATerm d_21 = t;
            int e_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, y_118, t);
                ;
                LocalPopChoice(e_21);
              }
            else
              {
                t = d_21;
                t = SDefT_4_0(_id, _id, _id, y_118, t);
              }
            return(t);
          }
          t = map_1_0(n_4, t);
          return(t);
        }
        t = Strategies_1_0(m_4, t);
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(k_4, l_4, t);
      return(t);
    }
    t = Cons_2_0(_id, i_4, t);
    return(t);
  }
  t = Specification_1_0(h_4, t);
  return(t);
}
ATerm _2_0 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  k_28 = t;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_28);
  f_28 = t;
  t = g_28;
  t = v_99(t);
  i_28 = t;
  t = h_28;
  t = w_99(t);
  j_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_28, j_28), f_28);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_142 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  if(match_cons(t, sym__2))
    {
      n_28 = ATgetArgument(t, 0);
      o_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_28, term_f_21);
  t = open_stream_0_0(t);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_28, o_28);
  t = w_142(t);
  t = fclose_0_0(t);
  t = o_28;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm g_21 = t;
      int h_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((r_28 != NULL) && (r_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_4, t);
          ;
          LocalPopChoice(h_21);
        }
      else
        {
          t = g_21;
          t = term_i_21;
          if(((r_28 != NULL) && (r_28 != t)))
            _fail(t);
          else
            r_28 = t;
        }
      return(t);
    }
    t = _2_0(o_4, _id, t);
    t = q_28;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm z_4 = NULL;
        z_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), z_4);
        return(t);
      }
      t = _2_0(_id, r_4, t);
      {
        ATerm j_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 (ATerm t)
            {
              ATerm w_4 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(w_4, t);
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              ATerm x_4 (ATerm t)
              {
                ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm o_21 = ATgetArgument(t, 0);
                    if(match_cons(o_21, sym_Stream_1))
                      {
                        s_28 = ATgetArgument(o_21, 0);
                      }
                    else
                      _fail(t);
                    t_28 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(s_28, t_28);
                u_28 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, u_28);
                return(t);
              }
              t = WriteToFile_1_0(x_4, t);
              return(t);
            }
            t = _2_0(s_4, u_4, t);
            ;
            LocalPopChoice(n_21);
          }
        else
          {
            t = j_21;
            {
              ATerm y_4 (ATerm t)
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm p_21 = ATgetArgument(t, 0);
                      if(match_cons(p_21, sym_Stream_1))
                        {
                          v_28 = ATgetArgument(p_21, 0);
                        }
                      else
                        _fail(t);
                      w_28 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(v_28, w_28);
                  x_28 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), x_28);
                  y_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, y_28);
                  return(t);
                }
                t = WriteToFile_1_0(a_5, t);
                return(t);
              }
              t = _2_0(_id, y_4, t);
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
ATerm apply_strategy_1_0 (ATerm y_145 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  z_28 = t;
  t = dtime_0_0(t);
  t = z_28;
  t = y_145(t);
  a_29 = t;
  t = dtime_0_0(t);
  b_29 = t;
  t = a_29;
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      d_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_29), (ATerm) ATmakeAppl(sym_Runtime_1, b_29)), d_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_29 (ATerm l_29, ATerm t)
  {
    t = SSL_fclose(l_29);
    return(t);
  }
  ATerm o_29 = NULL,p_29 = NULL;
  p_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_29 = ATgetArgument(t, 0);
      {
        ATerm q_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_29);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = q_21;
            t = r_29(p_29, t);
          }
      }
    }
  else
    {
      t = r_29(p_29, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_29 = NULL;
  t = SSL_stdin_stream();
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_29 = NULL;
  t = SSL_stdout_stream();
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_29 = NULL;
  t = SSL_stderr_stream();
  u_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_29);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      ATerm u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL,n_5 = NULL;
        l_5 = t;
        t = SSL_explode_term(l_5);
        if(match_cons(t, sym__2))
          {
            ATerm x_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_21 = ATgetArgument(t, 1);
              if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
                {
                  n_5 = ATgetFirst((ATermList) y_21);
                  {
                    ATerm z_21 = (ATerm) ATgetNext((ATermList) y_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        {
          ATerm a_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
              ATerm b_5 (ATerm t)
              {
                ATerm c_30 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    c_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = c_30;
                return(t);
              }
              t = _2_0(b_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  z_29 = ATgetArgument(t, 0);
                  a_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(z_29, a_30);
              b_30 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, b_30);
              ;
              LocalPopChoice(c_22);
            }
          else
            {
              t = a_22;
              {
                ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
                ATerm c_5 (ATerm t)
                {
                  ATerm g_30 = NULL;
                  g_30 = t;
                  t = SSL_is_string(g_30);
                  return(t);
                }
                t = _2_0(c_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    d_30 = ATgetArgument(t, 0);
                    e_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(d_30, e_30);
                f_30 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_30);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  ATerm f_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_30 = NULL;
      l_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_30, term_i_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = f_22;
      {
        ATerm o_5 = NULL;
        o_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = o_5;
        _fail(t);
      }
    }
  h_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(j_30);
  i_30 = t;
  t = h_30;
  t = fclose_0_0(t);
  t = i_30;
  return(t);
}
ATerm fetch_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm q_30 (ATerm t)
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_127, _id, t);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = Cons_2_0(_id, q_30, t);
      }
    return(t);
  }
  t = q_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = l_22;
      {
        ATerm t_30 = NULL,u_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_30 = ATgetFirst((ATermList) t);
            u_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_30;
        {
          ATerm d_5 (ATerm t)
          {
            t = u_30;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_127 (ATerm), ATerm t)
{
  ATerm a_31 (ATerm t)
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_31, t);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_127(t);
      }
    return(t);
  }
  t = a_31(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm c_31 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm d_31 = NULL;
    d_31 = t;
    t = SSL_explode_string(d_31);
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    ATerm e_31 = NULL;
    e_31 = t;
    t = SSL_explode_string(e_31);
    return(t);
  }
  t = _2_0(e_5, f_5, t);
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_31 = NULL,h_31 = NULL;
        if(match_cons(t, sym__2))
          {
            g_31 = ATgetArgument(t, 0);
            h_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_31;
        {
          ATerm g_5 (ATerm t)
          {
            t = h_31;
            return(t);
          }
          t = at_end_1_0(g_5, t);
        }
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        {
          ATerm u_5 = NULL,v_5 = NULL;
          u_5 = t;
          t = SSL_explode_term(u_5);
          if(match_cons(t, sym__2))
            {
              ATerm v_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_22) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_5;
          t = concat_0_0(t);
        }
      }
    c_31 = t;
    t = SSL_implode_string(c_31);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_31 = NULL;
      r_31 = t;
      t = SSL_is_string(r_31);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_5 (ATerm t)
            {
              ATerm a_23 = t;
              int b_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(b_23);
                }
              else
                {
                  t = a_23;
                }
              return(t);
            }
            t = map_1_0(h_5, t);
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            {
              ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
              x_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_31 = ATgetArgument(t, 0);
                  t = y_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_31 = ATgetArgument(t, 0);
                      t = y_31;
                      {
                        ATerm c_23 = t;
                        int d_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_31);
                            {
                              ATerm e_23 = t;
                              int f_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_6 = NULL;
                                  t = eval_config_0_0(t);
                                  n_6 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_31, n_6);
                                  t = n_6;
                                  ;
                                  LocalPopChoice(f_23);
                                }
                              else
                                {
                                  t = e_23;
                                }
                            }
                            ;
                            LocalPopChoice(d_23);
                          }
                        else
                          {
                            t = c_23;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_31), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = y_31;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_32 = NULL,e_32 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_31 = ATgetArgument(t, 0);
                          z_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_31;
                      t = eval_config_0_0(t);
                      d_32 = t;
                      t = z_31;
                      t = eval_config_0_0(t);
                      e_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_32, e_32);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_144 (ATerm), ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_32 = NULL,l_32 = NULL;
      j_32 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_6 = NULL;
            t = eval_config_0_0(t);
            v_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_6);
            t = v_6;
            ;
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
          }
        l_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_32, term_k_23);
        t = geq_0_0(t);
        t = j_32;
        t = a_144(t);
      }
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm n_32 = NULL;
    n_32 = t;
    if(match_string(t, "-k"))
      {
        t = n_32;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = n_32;
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    ATerm o_32 = NULL,p_32 = NULL;
    o_32 = t;
    t = SSL_string_to_int(o_32);
    p_32 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), p_32);
    t = o_32;
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_l_23;
    return(t);
  }
  t = ArgOption_3_0(i_5, j_5, k_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_5 (ATerm t)
      {
        ATerm r_32 = NULL;
        r_32 = t;
        if(match_string(t, "-S"))
          {
            t = r_32;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = r_32;
          }
        return(t);
      }
      ATerm p_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_p_23;
        return(t);
      }
      ATerm q_5 (ATerm t)
      {
        t = term_q_23;
        return(t);
      }
      t = Option_3_0(m_5, p_5, q_5, t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm s_5 (ATerm t)
            {
              ATerm u_32 = NULL,v_32 = NULL;
              u_32 = t;
              t = SSL_string_to_int(u_32);
              v_32 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_32);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, u_32);
              return(t);
            }
            ATerm t_5 (ATerm t)
            {
              t = term_t_23;
              return(t);
            }
            t = ArgOption_3_0(r_5, s_5, t_5, t);
            ;
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm w_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm x_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_23;
                return(t);
              }
              ATerm y_5 (ATerm t)
              {
                t = term_v_23;
                return(t);
              }
              t = Option_3_0(w_5, x_5, y_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_33 = NULL;
      t = term_i_8;
      t = d_0(t);
      a_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_23, term_a_24, a_33);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_32 = ATgetFirst((ATermList) t);
          z_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_32;
      t = a_0(t);
      t = term_i_8;
      t = b_0(t);
      d_33 = t;
      t = (ATerm) ATinsert(CheckATermList(z_32), d_33);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm f_33 = NULL;
    f_33 = t;
    if(match_string(t, "-o"))
      {
        t = f_33;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_33;
      }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    ATerm g_33 = NULL;
    g_33 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_33);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_33);
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_b_24;
    return(t);
  }
  t = ArgOption_3_0(z_5, a_6, b_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,n_33 = NULL;
  if(match_cons(t, sym__3))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
      l_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_24 = ATgetArgument(t, 0);
            ATerm f_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_33, k_33);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = (ATerm) ATempty;
      }
    n_33 = t;
    t = SSL_table_put(j_33, k_33, (ATerm) ATinsert(CheckATermList(n_33), l_33));
    t = (ATerm) ATmakeAppl(sym__3, j_33, k_33, l_33);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_33 = NULL;
      t = term_i_8;
      t = m_0(t);
      z_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_23, term_a_24, z_33);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_33 = ATgetFirst((ATermList) t);
          w_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_33 = ATgetFirst((ATermList) t);
          y_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_33;
      t = i_0(t);
      t = x_33;
      t = k_0(t);
      d_34 = t;
      t = (ATerm) ATinsert(CheckATermList(y_33), d_34);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm f_34 = NULL;
    f_34 = t;
    if(match_string(t, "-i"))
      {
        t = f_34;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = f_34;
      }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    ATerm g_34 = NULL;
    g_34 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_34);
    t = (ATerm) ATmakeAppl(sym_Input_1, g_34);
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_g_24;
    return(t);
  }
  t = ArgOption_3_0(c_6, d_6, e_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_8;
  t = whoami_0_0(t);
  h_34 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_34));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL;
        t = eval_config_0_0(t);
        a_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_7);
        t = a_7;
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_131(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm k_34 = NULL,l_34 = NULL,o_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_34 = ATgetFirst((ATermList) t);
            l_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_34;
        t = foldr_2_0(n_131, o_131, t);
        o_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_34, o_34);
        t = o_131(t);
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
  ATerm r_34 = NULL,b_7 = NULL,c_7 = NULL;
  t = times_0_0(t);
  b_7 = t;
  t = SSL_explode_term(b_7);
  if(match_cons(t, sym__2))
    {
      ATerm l_24 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7;
  {
    ATerm f_6 (ATerm t)
    {
      t = term_o_23;
      return(t);
    }
    ATerm g_6 (ATerm t)
    {
      ATerm f_7 = NULL,r_7 = NULL;
      if(match_cons(t, sym__2))
        {
          f_7 = ATgetArgument(t, 0);
          r_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(f_7, r_7);
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            t = SSL_addr(f_7, r_7);
          }
      }
      return(t);
    }
    t = foldr_2_0(f_6, g_6, t);
    r_34 = t;
    t = SSL_TicksToSeconds(r_34);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  if(match_cons(t, sym__2))
    {
      f_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_35;
        if((f_35 != t))
          {
            _fail(t);
          }
        t = e_35;
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = e_35;
        {
          ATerm q_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_35, g_35);
              ;
              LocalPopChoice(r_24);
            }
          else
            {
              t = q_24;
              t = SSL_gtr(f_35, g_35);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_143 (ATerm), ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_35 = NULL,l_35 = NULL;
      j_35 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 = NULL;
            t = eval_config_0_0(t);
            n_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_8);
            t = n_8;
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
          }
        l_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_35, term_x_24);
        t = geq_0_0(t);
        t = j_35;
        t = z_143(t);
      }
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm n_35 = NULL,o_35 = NULL;
    t = run_time_0_0(t);
    n_35 = t;
    t = term_i_8;
    t = whoami_0_0(t);
    o_35 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), n_35), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), o_35));
    t = (ATerm) ATmakeAppl(sym__2, term_z_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_25), n_35), term_a_25), o_35));
    return(t);
  }
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm w_146 (ATerm), ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL;
            t = eval_config_0_0(t);
            u_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), u_8);
            t = u_8;
            ;
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
          }
      }
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm i_6 (ATerm t)
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                ATerm i_25 = t;
                int j_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_25);
                  }
                else
                  {
                    t = i_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(i_6, t);
      }
    }
  t = w_146(t);
  return(t);
}
ATerm map_1_0 (ATerm y_126 (ATerm), ATerm t)
{
  ATerm p_35 (ATerm t)
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = Cons_2_0(y_126, p_35, t);
      }
    return(t);
  }
  t = p_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_35 = ATgetFirst((ATermList) t);
      s_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_35 = NULL,z_35 = NULL;
        t = s_35;
        t = g_0(t);
        y_35 = t;
        t = r_35;
        t = f_0(t);
        z_35 = t;
        t = s_35;
        {
          ATerm j_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_35), z_35);
            return(t);
          }
          t = reverse_acc_2_0(f_0, j_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm s_118 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  d_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_36);
  a_36 = t;
  t = b_36;
  t = s_118(t);
  c_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, c_36), a_36);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_9 = NULL;
            t = eval_config_0_0(t);
            g_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_9);
            t = g_9;
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
          }
      }
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = o_25;
      {
        ATerm k_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(k_6, t);
      }
    }
  t = term_v_25;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm l_6 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, l_6, t);
    {
      ATerm m_6 (ATerm t)
      {
        ATerm g_36 = NULL;
        g_36 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, g_36), term_w_25);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(m_6, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm t_118 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
  k_36 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_36);
  h_36 = t;
  t = i_36;
  t = t_118(t);
  j_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, j_36), h_36);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  o_36 = t;
  {
    ATerm z_25 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_26 = ATgetFirst((ATermList) t);
                ATerm g_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_36;
          }
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = z_25;
        t = (ATerm) ATinsert(ATempty, o_36);
      }
    p_36 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_36);
    t = o_36;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL;
        t = eval_config_0_0(t);
        t_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_9);
        t = t_9;
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_n_26;
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        t = term_o_26;
        return(t);
      }
      t = Option_3_0(o_6, p_6, q_6, t);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm r_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_p_26;
          return(t);
        }
        ATerm t_6 (ATerm t)
        {
          t = term_q_26;
          return(t);
        }
        t = Option_3_0(r_6, s_6, t_6, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,e_37 = NULL;
  e_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_36 = ATgetFirst((ATermList) t);
      y_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_37);
  t_36 = t;
  t = u_36;
  t = k_104(t);
  z_36 = t;
  t = y_36;
  t = l_104(t);
  a_37 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_37), z_36), t_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_148 (ATerm), ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_26;
        t = z_148(t);
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
      }
    t = i_37;
    {
      ATerm u_6 (ATerm t)
      {
        ATerm j_37 = NULL;
        j_37 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_37);
        t = (ATerm) ATmakeAppl(sym_Program_1, j_37);
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        ATerm x_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_27 = t;
            int h_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_27);
              }
            else
              {
                t = c_27;
                t = z_148(t);
                t = Cons_2_0(_id, w_6, t);
              }
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = x_26;
            {
              ATerm l_37 = NULL,m_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_37 = ATgetFirst((ATermList) t);
                  m_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_37), (ATerm) ATmakeAppl(sym_Undefined_1, l_37));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_6, w_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm y_148 (ATerm), ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_37;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm i_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_148(t);
          ;
          LocalPopChoice(r_27);
        }
      else
        {
          t = i_27;
          {
            ATerm s_27 = t;
            int x_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_6 (ATerm t)
                {
                  ATerm w_37 = NULL;
                  w_37 = t;
                  if(match_string(t, "--help"))
                    {
                      t = w_37;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = w_37;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = w_37;
                        }
                    }
                  return(t);
                }
                ATerm d_7 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_y_27;
                  return(t);
                }
                ATerm e_7 (ATerm t)
                {
                  t = term_d_28;
                  return(t);
                }
                t = Option_3_0(z_6, d_7, e_7, t);
                ;
                LocalPopChoice(x_27);
              }
            else
              {
                t = s_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_6, t);
    {
      ATerm e_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_38 = NULL;
          b_38 = t;
          {
            ATerm m_28 = t;
            int e_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = b_38;
                {
                  ATerm f_29 = t;
                  int g_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm h_29 = t;
                        int i_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_11 = NULL;
                            t = eval_config_0_0(t);
                            e_11 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_11);
                            t = e_11;
                            ;
                            LocalPopChoice(i_29);
                          }
                        else
                          {
                            t = h_29;
                          }
                      }
                      ;
                      LocalPopChoice(g_29);
                    }
                  else
                    {
                      t = f_29;
                      {
                        ATerm g_7 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(g_7, t);
                      }
                    }
                  t = b_38;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(e_29);
              }
            else
              {
                t = m_28;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm j_29 = t;
                  int k_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_11 = NULL;
                      t = eval_config_0_0(t);
                      r_11 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), r_11);
                      t = r_11;
                      ;
                      LocalPopChoice(k_29);
                    }
                  else
                    {
                      t = j_29;
                    }
                  t = b_38;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(l_28);
        }
      else
        {
          t = e_28;
          {
            ATerm m_29 = t;
            int n_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_7 (ATerm t)
                {
                  ATerm i_7 (ATerm t)
                  {
                    if(((u_37 != NULL) && (u_37 != t)))
                      _fail(t);
                    else
                      u_37 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_7, t);
                  return(t);
                }
                t = fetch_1_0(h_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_37)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_z_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_37)), term_q_29));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(n_29);
              }
            else
              {
                t = m_29;
              }
          }
        }
      v_37 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = v_37;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_146 (ATerm), ATerm z_146 (ATerm), ATerm a_147 (ATerm), ATerm b_147 (ATerm), ATerm t)
{
  ATerm e_38 = NULL;
  t = parse_options_1_0(y_146, t);
  e_38 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), e_38);
  t = e_38;
  t = a_147(t);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_146, t);
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        {
          ATerm x_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_29);
            }
          else
            {
              t = x_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm h_146 (ATerm), ATerm i_146 (ATerm), ATerm j_146 (ATerm), ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm k_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_146(t);
        ;
        LocalPopChoice(m_30);
      }
    else
      {
        t = k_30;
        {
          ATerm n_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(o_30);
            }
          else
            {
              t = n_30;
              {
                ATerm p_30 = t;
                int r_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_30);
                  }
                else
                  {
                    t = p_30;
                    {
                      ATerm s_30 = t;
                      int v_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_7 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm s_7 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_w_30;
                            return(t);
                          }
                          ATerm t_7 (ATerm t)
                          {
                            t = term_x_30;
                            return(t);
                          }
                          t = Option_3_0(n_7, s_7, t_7, t);
                          ;
                          LocalPopChoice(v_30);
                        }
                      else
                        {
                          t = s_30;
                          {
                            ATerm y_30 = t;
                            int z_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_30);
                              }
                            else
                              {
                                t = y_30;
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
  ATerm k_7 (ATerm t)
  {
    ATerm u_7 (ATerm t)
    {
      ATerm f_38 = NULL,g_38 = NULL;
      f_38 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm b_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_12 = NULL;
            t = eval_config_0_0(t);
            v_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_12);
            t = v_12;
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = b_31;
          }
        g_38 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, g_38));
        t = f_38;
      }
      return(t);
    }
    t = if_verbose2_1_0(u_7, t);
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    ATerm h_38 = NULL,i_38 = NULL,y_12 = NULL;
    h_38 = t;
    {
      ATerm i_31 = t;
      int j_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_7, t);
          ;
          LocalPopChoice(j_31);
        }
      else
        {
          t = i_31;
          t = term_k_31;
          i_38 = t;
        }
      t = not_null(i_38);
      t = ReadFromFile_0_0(t);
      y_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_38, y_12);
      t = apply_strategy_1_0(h_146, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_7, j_146, k_7, m_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm z_7 (ATerm t)
    {
      ATerm a_8 (ATerm t)
      {
        ATerm b_8 (ATerm t)
        {
          ATerm c_8 (ATerm t)
          {
            ATerm l_31 = t;
            int m_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Simplify_0_0(t);
                ;
                LocalPopChoice(m_31);
              }
            else
              {
                t = l_31;
                {
                  ATerm n_31 = t;
                  int o_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
                      if(match_cons(t, sym_Seq_2))
                        {
                          o_38 = ATgetArgument(t, 0);
                          p_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_38;
                      if(match_cons(t, sym_Let_2))
                        {
                          q_38 = ATgetArgument(t, 0);
                          r_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Let_2, q_38, (ATerm) ATmakeAppl(sym_Seq_2, o_38, r_38));
                      ;
                      LocalPopChoice(o_31);
                    }
                  else
                    {
                      t = n_31;
                      {
                        ATerm p_31 = t;
                        int q_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = FuseScope_0_0(t);
                            ;
                            LocalPopChoice(q_31);
                          }
                        else
                          {
                            t = p_31;
                            {
                              ATerm s_31 = t;
                              int t_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = WhereSavesCurrentTerm_0_0(t);
                                  ;
                                  LocalPopChoice(t_31);
                                }
                              else
                                {
                                  t = s_31;
                                  {
                                    ATerm u_31 = t;
                                    int v_31 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TestSavesCurrentTerm_0_0(t);
                                        ;
                                        LocalPopChoice(v_31);
                                      }
                                    else
                                      {
                                        t = u_31;
                                        t = WidenScope_0_0(t);
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
          t = repeat_1_0(c_8, t);
          return(t);
        }
        t = downup_1_0(b_8, t);
        {
          ATerm f_8 (ATerm t)
          {
            ATerm g_8 (ATerm t)
            {
              ATerm w_31 = t;
              int a_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Simplify_0_0(t);
                  ;
                  LocalPopChoice(a_32);
                }
              else
                {
                  t = w_31;
                  {
                    ATerm b_32 = t;
                    int c_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
                        if(match_cons(t, sym_Seq_2))
                          {
                            w_38 = ATgetArgument(t, 0);
                            x_38 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = x_38;
                        if(match_cons(t, sym_Let_2))
                          {
                            y_38 = ATgetArgument(t, 0);
                            z_38 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Let_2, y_38, (ATerm) ATmakeAppl(sym_Seq_2, w_38, z_38));
                        ;
                        LocalPopChoice(c_32);
                      }
                    else
                      {
                        t = b_32;
                        {
                          ATerm f_32 = t;
                          int g_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = FuseScope_0_0(t);
                              ;
                              LocalPopChoice(g_32);
                            }
                          else
                            {
                              t = f_32;
                              {
                                ATerm h_32 = t;
                                int i_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = WhereSavesCurrentTerm_0_0(t);
                                    ;
                                    LocalPopChoice(i_32);
                                  }
                                else
                                  {
                                    t = h_32;
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
            t = repeat_1_0(g_8, t);
            return(t);
          }
          t = downup_1_0(f_8, t);
          {
            ATerm h_8 (ATerm t)
            {
              ATerm k_32 = t;
              int m_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CleanupScope_0_0(t);
                  {
                    ATerm q_32 = t;
                    int s_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0_0(t);
                        ;
                        LocalPopChoice(s_32);
                      }
                    else
                      {
                        t = q_32;
                      }
                  }
                  ;
                  LocalPopChoice(m_32);
                }
              else
                {
                  t = k_32;
                }
              return(t);
            }
            t = topdown_1_0(h_8, t);
          }
        }
        return(t);
      }
      t = apply_to_bodies_1_0(a_8, t);
      return(t);
    }
    t = _2_0(_id, z_7, t);
    return(t);
  }
  t = iowrap_3_0(w_7, _fail, default_usage_0_0, t);
  return(t);
}
