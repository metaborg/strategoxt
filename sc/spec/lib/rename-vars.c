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
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Scope_2;
Symbol sym_Rec_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Undefined_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_34;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_o_32;
ATerm term_k_31;
ATerm term_f_31;
ATerm term_x_30;
ATerm term_m_30;
ATerm term_i_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_t_29;
ATerm term_l_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_x_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_o_24;
ATerm term_u_23;
ATerm term_o_23;
ATerm term_r_9;
void init_constant_terms (void)
{
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__3, term_c_30, term_d_30, term_r_9);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm k_0 (ATerm);
ATerm n_0 (ATerm);
ATerm o_0 (ATerm);
ATerm q_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm x_0 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm spaste_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm);
ATerm Let_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm a_75 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm RnBinding_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm rename_4_0 (ATerm h_98 (ATerm (ATerm), ATerm), ATerm i_98 (ATerm), ATerm j_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_98 (ATerm (ATerm), ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm tpaste_1_0 (ATerm f_84 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm i_74 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm);
ATerm diff_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm f_4 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm);
ATerm for_3_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm free_vars_3_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm r_71 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm _2_0 (ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm b_27 (ATerm t_26, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm s_6 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_91 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm z_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_112 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_112 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm z_7 (ATerm);
ATerm need_help_1_0 (ATerm v_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_82 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm i_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm r_108 (ATerm), ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm parse_options_1_0 (ATerm q_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm);
ATerm e_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm m_9 (ATerm);
ATerm iowrap_3_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm);
ATerm p_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_0 = NULL,p_0 = NULL;
  l_0 = t;
  t = term_r_9;
  t = whoami_0_0(t);
  p_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), p_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = l_0;
  return(t);
}
ATerm k_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_9 = ATgetArgument(t, 0);
      if(((ATgetType(s_9) != AT_LIST) || !(ATisEmpty(s_9))))
        _fail(t);
      {
        ATerm t_9 = ATgetArgument(t, 1);
        if(((ATgetType(t_9) != AT_LIST) || !(ATisEmpty(t_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
        {
          y_0 = ATgetFirst((ATermList) v_9);
          a_1 = (ATerm) ATgetNext((ATermList) v_9);
        }
      else
        _fail(t);
      {
        ATerm w_9 = ATgetArgument(t, 1);
        if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
          {
            z_0 = ATgetFirst((ATermList) w_9);
            b_1 = (ATerm) ATgetNext((ATermList) w_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_0, z_0), (ATerm) ATmakeAppl(sym__2, a_1, b_1));
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_1), d_1);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      h_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_1;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm z_9 = ATgetArgument(t, 0);
            j_1 = ATgetArgument(t, 1);
            k_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(y_9);
        t = (ATerm) ATmakeAppl(sym_SDef_3, m_1, j_1, k_1);
      }
    else
      {
        t = x_9;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm a_10 = ATgetArgument(t, 0);
            j_1 = ATgetArgument(t, 1);
            k_1 = ATgetArgument(t, 2);
            l_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_1, j_1, k_1, l_1);
      }
  }
  return(t);
}
ATerm u_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      if(((ATgetType(b_10) != AT_LIST) || !(ATisEmpty(b_10))))
        _fail(t);
      {
        ATerm c_10 = ATgetArgument(t, 1);
        if(((ATgetType(c_10) != AT_LIST) || !(ATisEmpty(c_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,g_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(((ATgetType(h_10) == AT_LIST) && !(ATisEmpty(h_10))))
        {
          x_1 = ATgetFirst((ATermList) h_10);
          g_2 = (ATerm) ATgetNext((ATermList) h_10);
        }
      else
        _fail(t);
      {
        ATerm i_10 = ATgetArgument(t, 1);
        if(((ATgetType(i_10) == AT_LIST) && !(ATisEmpty(i_10))))
          {
            y_1 = ATgetFirst((ATermList) i_10);
            m_2 = (ATerm) ATgetNext((ATermList) i_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_1, y_1), (ATerm) ATmakeAppl(sym__2, g_2, m_2));
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm n_2 = NULL,s_2 = NULL;
  if(match_cons(t, sym__2))
    {
      n_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_2), n_2);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm z_2 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_2;
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_3);
      }
    else
      {
        t = p_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm t_10 = ATgetArgument(t, 0);
            c_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_3, c_3);
      }
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_10 = ATgetArgument(t, 0);
      if(((ATgetType(v_10) != AT_LIST) || !(ATisEmpty(v_10))))
        _fail(t);
      {
        ATerm w_10 = ATgetArgument(t, 1);
        if(((ATgetType(w_10) != AT_LIST) || !(ATisEmpty(w_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_10 = ATgetArgument(t, 0);
      if(((ATgetType(x_10) == AT_LIST) && !(ATisEmpty(x_10))))
        {
          j_3 = ATgetFirst((ATermList) x_10);
          m_3 = (ATerm) ATgetNext((ATermList) x_10);
        }
      else
        _fail(t);
      {
        ATerm y_10 = ATgetArgument(t, 1);
        if(((ATgetType(y_10) == AT_LIST) && !(ATisEmpty(y_10))))
          {
            k_3 = ATgetFirst((ATermList) y_10);
            n_3 = (ATerm) ATgetNext((ATermList) y_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_3, k_3), (ATerm) ATmakeAppl(sym__2, m_3, n_3));
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym__2))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_3), o_3);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_3;
  {
    ATerm z_10 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_3);
      }
    else
      {
        t = z_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_11 = ATgetArgument(t, 0);
            t_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_3, t_3);
      }
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if(((ATgetType(i_11) != AT_LIST) || !(ATisEmpty(i_11))))
        _fail(t);
      {
        ATerm j_11 = ATgetArgument(t, 1);
        if(((ATgetType(j_11) != AT_LIST) || !(ATisEmpty(j_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if(((ATgetType(k_11) == AT_LIST) && !(ATisEmpty(k_11))))
        {
          c_4 = ATgetFirst((ATermList) k_11);
          h_4 = (ATerm) ATgetNext((ATermList) k_11);
        }
      else
        _fail(t);
      {
        ATerm l_11 = ATgetArgument(t, 1);
        if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
          {
            d_4 = ATgetFirst((ATermList) l_11);
            i_4 = (ATerm) ATgetNext((ATermList) l_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_4, d_4), (ATerm) ATmakeAppl(sym__2, h_4, i_4));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_4), j_4);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm n_4 = NULL,r_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4;
  {
    ATerm q_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_4);
      }
    else
      {
        t = q_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_11 = ATgetArgument(t, 0);
            r_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_4, r_4);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_0 (ATerm t)
      {
        ATerm c_0 = NULL,m_0 = NULL;
        c_0 = t;
        t = j_84(t);
        m_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_0, m_0);
        t = genzip_4_0(k_0, n_0, o_0, q_0, t);
        return(t);
      }
      t = Let_2_0(e_0, _id, t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              ATerm r_0 = NULL,t_0 = NULL;
              r_0 = t;
              t = j_84(t);
              t_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_0, t_0);
              t = genzip_4_0(u_0, v_0, x_0, f_1, t);
              return(t);
            }
            t = SDef_3_0(_id, s_0, _id, t);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm p_12 = t;
              int q_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm w_0 = NULL,c_1 = NULL;
                    w_0 = t;
                    t = j_84(t);
                    c_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_0, c_1);
                    t = genzip_4_0(i_1, n_1, o_1, q_1, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, g_1, _id, _id, t);
                  ;
                  LocalPopChoice(q_12);
                }
              else
                {
                  t = p_12;
                  {
                    ATerm r_12 = t;
                    int s_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_1 (ATerm t)
                        {
                          ATerm p_1 = NULL,z_1 = NULL;
                          p_1 = t;
                          t = j_84(t);
                          z_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, p_1, z_1);
                          t = genzip_4_0(s_1, t_1, u_1, v_1, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, r_1, _id, _id, t);
                        ;
                        LocalPopChoice(s_12);
                      }
                    else
                      {
                        t = r_12;
                        {
                          ATerm w_1 (ATerm t)
                          {
                            ATerm m_6 = NULL;
                            t = j_84(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                m_6 = ATgetFirst((ATermList) t);
                                {
                                  ATerm t_12 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = m_6;
                            return(t);
                          }
                          t = Rec_2_0(w_1, _id, t);
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
ATerm Rec_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,b_7 = NULL,j_7 = NULL,l_7 = NULL,b_8 = NULL,g_8 = NULL;
  g_8 = t;
  if(match_cons(t, sym_Rec_2))
    {
      b_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_8);
  o_6 = t;
  t = b_7;
  t = y_75(t);
  l_7 = t;
  t = j_7;
  t = z_75(t);
  b_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, l_7, b_8), o_6);
  return(t);
}
ATerm SDef_3_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,g_9 = NULL,n_9 = NULL,u_9 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  g_10 = t;
  if(match_cons(t, sym_SDef_3))
    {
      g_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
      u_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_10);
  x_8 = t;
  t = g_9;
  t = q_77(t);
  d_10 = t;
  t = n_9;
  t = r_77(t);
  e_10 = t;
  t = u_9;
  t = s_77(t);
  f_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, d_10, e_10, f_10), x_8);
  return(t);
}
ATerm Let_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  o_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_10);
  j_10 = t;
  t = k_10;
  t = b_75(t);
  m_10 = t;
  t = l_10;
  t = c_75(t);
  n_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, m_10, n_10), j_10);
  return(t);
}
ATerm sboundin_3_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(k_84, k_84, t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm w_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(m_84, m_84, k_84, t);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = w_12;
            {
              ATerm e_13 = t;
              int f_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(m_84, m_84, m_84, k_84, t);
                  ;
                  LocalPopChoice(f_13);
                }
              else
                {
                  t = e_13;
                  t = Rec_2_0(m_84, k_84, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm u_10 = NULL;
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_10 = ATgetArgument(t, 0);
          {
            ATerm i_13 = ATgetArgument(t, 1);
          }
          {
            ATerm j_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_13);
      t = u_10;
    }
  else
    {
      t = g_13;
      if(match_cons(t, sym_SDefT_4))
        {
          u_10 = ATgetArgument(t, 0);
          {
            ATerm k_13 = ATgetArgument(t, 1);
          }
          {
            ATerm l_13 = ATgetArgument(t, 2);
          }
          {
            ATerm m_13 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_10;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      s_10 = ATgetArgument(t, 0);
      {
        ATerm n_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_10;
  t = map_1_0(a_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm a_75 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,g_11 = NULL,h_11 = NULL;
  h_11 = t;
  if(match_cons(t, sym_SVar_1))
    {
      b_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_11);
  a_11 = t;
  t = b_11;
  t = a_75(t);
  g_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, g_11), a_11);
  return(t);
}
ATerm DistBinding_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__3))
    {
      m_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
      o_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_11;
  {
    ATerm b_2 (ATerm t)
    {
      ATerm p_11 = NULL;
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_11, o_11);
      t = s_98(t);
      return(t);
    }
    ATerm c_2 (ATerm t)
    {
      ATerm r_11 = NULL;
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_11, n_11);
      t = s_98(t);
      return(t);
    }
    t = t_98(b_2, c_2, _id, t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_13 = ATgetArgument(t, 0);
      if(((ATgetType(o_13) != AT_LIST) || !(ATisEmpty(o_13))))
        _fail(t);
      {
        ATerm p_13 = ATgetArgument(t, 1);
        if(((ATgetType(p_13) != AT_LIST) || !(ATisEmpty(p_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_13 = ATgetArgument(t, 0);
      if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
        {
          i_12 = ATgetFirst((ATermList) t_13);
          k_12 = (ATerm) ATgetNext((ATermList) t_13);
        }
      else
        _fail(t);
      {
        ATerm u_13 = ATgetArgument(t, 1);
        if(((ATgetType(u_13) == AT_LIST) && !(ATisEmpty(u_13))))
          {
            j_12 = ATgetFirst((ATermList) u_13);
            l_12 = (ATerm) ATgetNext((ATermList) u_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_12, j_12), (ATerm) ATmakeAppl(sym__2, k_12, l_12));
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm m_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      m_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_12), m_12);
  return(t);
}
ATerm RnBinding_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,d_12 = NULL,e_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_11;
  t = m_98(t);
  x_11 = t;
  t = map_1_0(new_0_0, t);
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_11, y_11);
  t = genzip_4_0(d_2, e_2, h_2, _id, t);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_12, w_11);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_14 = ATgetArgument(t, 0);
            ATerm f_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12;
        {
          ATerm i_2 (ATerm t)
          {
            t = w_11;
            return(t);
          }
          t = at_end_1_0(i_2, t);
        }
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          ATerm f_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, d_12, w_11));
          if(match_cons(t, sym__2))
            {
              ATerm i_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_2;
          t = concat_0_0(t);
        }
      }
    e_12 = t;
    t = v_11;
    {
      ATerm j_2 (ATerm t)
      {
        t = y_11;
        return(t);
      }
      t = n_98(j_2, t);
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, h_12, w_11, e_12);
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_13 = ATgetFirst((ATermList) t);
      d_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_13;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_12;
            if((a_13 != t))
              {
                _fail(t);
              }
            t = y_12;
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            t = (ATerm) ATmakeAppl(sym__2, a_13, d_13);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, a_13, d_13);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_99(t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm o_2 = NULL,p_2 = NULL;
          ATerm k_2 (ATerm t)
          {
            ATerm q_2 = NULL;
            q_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_2, not_null(p_2));
            t = q_13(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((o_2 != NULL) && (o_2 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_2 = ATgetArgument(t, 0);
              if(((p_2 != NULL) && (p_2 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                p_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(o_2);
          t = SRTS_all(k_2, t);
        }
      }
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm rename_4_0 (ATerm h_98 (ATerm (ATerm), ATerm), ATerm i_98 (ATerm), ATerm j_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_98 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_13, (ATerm) ATempty);
  {
    ATerm s_13 (ATerm t)
    {
      ATerm l_2 (ATerm t)
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,u_2 = NULL;
            ATerm r_2 (ATerm t)
            {
              ATerm x_2 = NULL;
              x_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_2, not_null(u_2));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((t_2 != NULL) && (t_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_2 = ATgetArgument(t, 0);
                if(((u_2 != NULL) && (u_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(t_2);
            t = h_98(r_2, t);
            ;
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
            t = RnBinding_2_0(i_98, k_98, t);
            t = DistBinding_2_0(s_13, j_98, t);
          }
        return(t);
      }
      t = env_alltd_1_0(l_2, t);
      return(t);
    }
    t = s_13(t);
  }
  return(t);
}
ATerm w_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_14 = ATgetArgument(t, 0);
      if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
        _fail(t);
      {
        ATerm x_14 = ATgetArgument(t, 1);
        if(((ATgetType(x_14) != AT_LIST) || !(ATisEmpty(x_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_14 = ATgetArgument(t, 0);
      if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
        {
          x_13 = ATgetFirst((ATermList) y_14);
          z_13 = (ATerm) ATgetNext((ATermList) y_14);
        }
      else
        _fail(t);
      {
        ATerm z_14 = ATgetArgument(t, 1);
        if(((ATgetType(z_14) == AT_LIST) && !(ATisEmpty(z_14))))
          {
            y_13 = ATgetFirst((ATermList) z_14);
            a_14 = (ATerm) ATgetNext((ATermList) z_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_13, y_13), (ATerm) ATmakeAppl(sym__2, z_13, a_14));
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  if(match_cons(t, sym__2))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_14), b_14);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm e_14 = NULL,g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14;
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_15);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_14);
      }
    else
      {
        t = c_15;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_15 = ATgetArgument(t, 0);
            g_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_14, g_14);
      }
  }
  return(t);
}
ATerm f_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      if(((ATgetType(k_15) != AT_LIST) || !(ATisEmpty(k_15))))
        _fail(t);
      {
        ATerm l_15 = ATgetArgument(t, 1);
        if(((ATgetType(l_15) != AT_LIST) || !(ATisEmpty(l_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
        {
          l_14 = ATgetFirst((ATermList) m_15);
          n_14 = (ATerm) ATgetNext((ATermList) m_15);
        }
      else
        _fail(t);
      {
        ATerm o_15 = ATgetArgument(t, 1);
        if(((ATgetType(o_15) == AT_LIST) && !(ATisEmpty(o_15))))
          {
            m_14 = ATgetFirst((ATermList) o_15);
            o_14 = (ATerm) ATgetNext((ATermList) o_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_14, m_14), (ATerm) ATmakeAppl(sym__2, n_14, o_14));
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_14), p_14);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm w_14 = NULL,a_15 = NULL,b_15 = NULL;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14;
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm s_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_15);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_15);
      }
    else
      {
        t = p_15;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_15 = ATgetArgument(t, 0);
            a_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_15, a_15);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm w_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(f_84, _id, t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = w_15;
      {
        ATerm c_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              ATerm l_3 = NULL,v_3 = NULL;
              l_3 = t;
              t = f_84(t);
              v_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_3, v_3);
              t = genzip_4_0(w_2, y_2, a_3, b_3, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, v_2, _id, t);
            ;
            LocalPopChoice(f_16);
          }
        else
          {
            t = c_16;
            {
              ATerm e_3 (ATerm t)
              {
                ATerm e_4 = NULL,g_4 = NULL;
                e_4 = t;
                t = f_84(t);
                g_4 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_4, g_4);
                t = genzip_4_0(f_3, g_3, h_3, i_3, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, e_3, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm i_74 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  i_15 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      g_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  f_15 = t;
  t = g_15;
  t = i_74(t);
  h_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, h_15), f_15);
  return(t);
}
ATerm RDefT_4_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,r_15 = NULL,t_15 = NULL,v_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,d_16 = NULL,e_16 = NULL;
  e_16 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      r_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
      v_15 = ATgetArgument(t, 2);
      x_15 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_16);
  n_15 = t;
  t = r_15;
  t = z_73(t);
  z_15 = t;
  t = t_15;
  t = a_74(t);
  a_16 = t;
  t = v_15;
  t = b_74(t);
  b_16 = t;
  t = x_15;
  t = c_74(t);
  d_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, z_15, a_16, b_16, d_16), n_15);
  return(t);
}
ATerm SDefT_4_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  r_16 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
      k_16 = ATgetArgument(t, 2);
      l_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_16);
  h_16 = t;
  t = i_16;
  t = t_77(t);
  m_16 = t;
  t = j_16;
  t = u_77(t);
  o_16 = t;
  t = k_16;
  t = v_77(t);
  p_16 = t;
  t = l_16;
  t = w_77(t);
  q_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, m_16, o_16, p_16, q_16), h_16);
  return(t);
}
ATerm Scope_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  b_17 = t;
  if(match_cons(t, sym_Scope_2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_17);
  w_16 = t;
  t = x_16;
  t = l_75(t);
  z_16 = t;
  t = y_16;
  t = m_75(t);
  a_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, z_16, a_17), w_16);
  return(t);
}
ATerm tboundin_3_0 (ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm t)
{
  ATerm g_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(i_84, g_84, t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = g_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(i_84, i_84, i_84, g_84, t);
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm u_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(i_84, i_84, i_84, g_84, t);
                  ;
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = u_16;
                  t = DynamicRules_1_0(g_84, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm i_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_17);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      {
        ATerm n_17 = NULL,p_17 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_17 = ATgetArgument(t, 0);
            t = n_17;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm e_17 = t;
            int f_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm g_17 = ATgetArgument(t, 0);
                    ATerm h_17 = ATgetArgument(t, 1);
                    p_17 = ATgetArgument(t, 2);
                    {
                      ATerm j_17 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(f_17);
                t = p_17;
                t = map_1_0(u_3, t);
              }
            else
              {
                t = e_17;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm k_17 = ATgetArgument(t, 0);
                    ATerm l_17 = ATgetArgument(t, 1);
                    p_17 = ATgetArgument(t, 2);
                    {
                      ATerm m_17 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = p_17;
                t = map_1_0(w_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm w_17 = NULL;
  ATerm o_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_17 = ATgetArgument(t, 0);
          {
            ATerm r_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_17);
      t = w_17;
    }
  else
    {
      t = o_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_17;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm d_18 = NULL;
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_18 = ATgetArgument(t, 0);
          {
            ATerm u_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_17);
      t = d_18;
    }
  else
    {
      t = s_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_18;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(q_3, s_3, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      g_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_18;
  {
    ATerm k_18 (ATerm t)
    {
      ATerm v_17 = t;
      int x_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_18;
          ;
          LocalPopChoice(x_17);
        }
      else
        {
          t = v_17;
          {
            ATerm y_17 = t;
            int z_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_4 = NULL,t_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_4 = ATgetFirst((ATermList) t);
                    t_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_18;
                {
                  ATerm y_3 (ATerm t)
                  {
                    ATerm u_4 = NULL;
                    u_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_4, u_4);
                    t = u_93(t);
                    return(t);
                  }
                  t = fetch_1_0(y_3, t);
                  t = t_4;
                  t = k_18(t);
                }
                ;
                LocalPopChoice(z_17);
              }
            else
              {
                t = y_17;
                t = Cons_2_0(_id, k_18, t);
              }
          }
        }
      return(t);
    }
    t = k_18(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_96(t);
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm n_18 = NULL,o_18 = NULL,s_18 = NULL,t_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_18 = ATgetFirst((ATermList) t);
            o_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_18;
        t = k_96(t);
        s_18 = t;
        t = o_18;
        t = foldr_3_0(i_96, j_96, k_96, t);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_18, t_18);
        t = j_96(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym__2))
    {
      b_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_19;
  {
    ATerm d_19 (ATerm t)
    {
      ATerm c_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(e_18);
        }
      else
        {
          t = c_18;
          {
            ATerm f_18 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_4 = NULL,z_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_4 = ATgetFirst((ATermList) t);
                    z_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_19;
                {
                  ATerm z_3 (ATerm t)
                  {
                    ATerm a_5 = NULL;
                    a_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_4, a_5);
                    t = p_93(t);
                    return(t);
                  }
                  t = fetch_1_0(z_3, t);
                  t = z_4;
                  t = d_19(t);
                }
                ;
                LocalPopChoice(h_18);
              }
            else
              {
                t = f_18;
                t = Cons_2_0(_id, d_19, t);
              }
          }
        }
      return(t);
    }
    t = d_19(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t)
{
  ATerm e_19 (ATerm t)
  {
    ATerm i_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_89(t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = i_18;
        t = s_89(t);
        t = _2_0(u_89, e_19, t);
        t = t_89(t);
      }
    return(t);
  }
  t = e_19(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(((ATgetType(m_18) != AT_LIST) || !(ATisEmpty(m_18))))
        _fail(t);
      {
        ATerm p_18 = ATgetArgument(t, 1);
        if(((ATgetType(p_18) != AT_LIST) || !(ATisEmpty(p_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if(((ATgetType(q_18) == AT_LIST) && !(ATisEmpty(q_18))))
        {
          n_19 = ATgetFirst((ATermList) q_18);
          p_19 = (ATerm) ATgetNext((ATermList) q_18);
        }
      else
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
          {
            o_19 = ATgetFirst((ATermList) r_18);
            u_19 = (ATerm) ATgetNext((ATermList) r_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_19, o_19), (ATerm) ATmakeAppl(sym__2, p_19, u_19));
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm v_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_19), v_19);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_18 = ATgetFirst((ATermList) t);
      if(match_cons(u_18, sym__2))
        {
          g_19 = ATgetArgument(u_18, 0);
          h_19 = ATgetArgument(u_18, 1);
        }
      else
        _fail(t);
      i_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_19);
  if(match_cons(t, sym__2))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_19);
  if(match_cons(t, sym__2))
    {
      if((j_19 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_19, k_19);
  t = genzip_4_0(a_4, b_4, f_4, _id, t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_19, i_19);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_18 = ATgetArgument(t, 0);
            ATerm y_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_19;
        {
          ATerm l_4 (ATerm t)
          {
            t = i_19;
            return(t);
          }
          t = at_end_1_0(l_4, t);
        }
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        {
          ATerm g_5 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, m_19, i_19));
          if(match_cons(t, sym__2))
            {
              ATerm z_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_18) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              g_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_5;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm t)
{
  ATerm c_20 (ATerm t)
  {
    ATerm a_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_102(t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = a_19;
        t = r_102(t);
        t = c_20(t);
      }
    return(t);
  }
  t = c_20(t);
  return(t);
}
ATerm for_3_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t)
{
  t = t_102(t);
  t = while_not_2_0(u_102, v_102, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_20);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = _2_0(_id, v_4, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, w_4, t);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
        ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
        if(match_cons(t, sym__2))
          {
            u_20 = ATgetArgument(t, 0);
            v_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_20;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_20 = ATgetFirst((ATermList) t);
            x_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_20), w_20), x_20);
      }
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_20 = ATgetFirst((ATermList) t);
          q_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_20;
      if(match_cons(t, sym__2))
        {
          o_20 = ATgetArgument(t, 0);
          p_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_20;
      if((o_20 != t))
        {
          _fail(t);
        }
      t = q_20;
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm b_21 = NULL;
  if(match_cons(t, sym__2))
    {
      b_21 = ATgetArgument(t, 0);
      if((b_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_4, o_4, p_4, t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      t = diff_1_0(y_4, t);
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = union_1_0(f_5, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      if((s_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = union_1_0(k_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      if((y_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_21 (ATerm t)
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_100(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          ATerm b_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_21 = NULL,e_21 = NULL,m_5 = NULL,n_5 = NULL;
              c_21 = t;
              t = l_100(t);
              e_21 = t;
              t = c_21;
              {
                ATerm b_5 (ATerm t)
                {
                  ATerm i_5 = NULL;
                  t = h_21(t);
                  i_5 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_5, e_21);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_100(b_5, h_21, c_5, t);
                m_5 = t;
                t = SSL_explode_term(m_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_20 = ATgetArgument(t, 0);
                    n_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_5;
                t = foldr_3_0(d_5, e_5, _id, t);
              }
              ;
              LocalPopChoice(d_20);
            }
          else
            {
              t = b_20;
              {
                ATerm t_5 = NULL,u_5 = NULL;
                t_5 = t;
                t = SSL_explode_term(t_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_20 = ATgetArgument(t, 0);
                    u_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_5;
                t = foldr_3_0(h_5, j_5, h_21, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_21(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm u_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_21);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm g_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = g_20;
      {
        ATerm w_21 = NULL,y_21 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_21 = ATgetArgument(t, 0);
            t = w_21;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm j_20 = t;
            int k_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm m_20 = ATgetArgument(t, 0);
                    ATerm n_20 = ATgetArgument(t, 1);
                    y_21 = ATgetArgument(t, 2);
                    {
                      ATerm r_20 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(k_20);
                t = y_21;
                t = map_1_0(p_5, t);
              }
            else
              {
                t = j_20;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm s_20 = ATgetArgument(t, 0);
                    ATerm t_20 = ATgetArgument(t, 1);
                    y_21 = ATgetArgument(t, 2);
                    {
                      ATerm y_20 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_21;
                t = map_1_0(q_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm f_22 = NULL;
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_22 = ATgetArgument(t, 0);
          {
            ATerm d_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_21);
      t = f_22;
    }
  else
    {
      t = z_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_22;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm n_22 = NULL;
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_22 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_21);
      t = n_22;
    }
  else
    {
      t = f_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_22;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      r_21 = ATgetArgument(t, 0);
      t = r_21;
      if(match_cons(t, sym_Rule_3))
        {
          n_21 = ATgetArgument(t, 0);
          {
            ATerm j_21 = ATgetArgument(t, 1);
          }
          {
            ATerm k_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_21;
      t = free_vars_3_0(l_5, o_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          r_21 = ATgetArgument(t, 0);
          {
            ATerm l_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_21;
    }
  return(t);
}
ATerm Var_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_22);
  r_22 = t;
  t = t_22;
  t = r_71(t);
  u_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, u_22), r_22);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm m_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = m_21;
      {
        ATerm l_23 = NULL;
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm s_21 = ATgetArgument(t, 0);
                ATerm t_21 = ATgetArgument(t, 1);
                l_23 = ATgetArgument(t, 2);
                {
                  ATerm v_21 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_21);
            t = l_23;
            t = map_1_0(v_5, t);
          }
        else
          {
            t = p_21;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm x_21 = ATgetArgument(t, 0);
                ATerm z_21 = ATgetArgument(t, 1);
                l_23 = ATgetArgument(t, 2);
                {
                  ATerm a_22 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = l_23;
            t = map_1_0(w_5, t);
          }
      }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm t_23 = NULL;
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_23 = ATgetArgument(t, 0);
          {
            ATerm d_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_22);
      t = t_23;
    }
  else
    {
      t = b_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_23;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm a_24 = NULL;
  ATerm e_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_24 = ATgetArgument(t, 0);
          {
            ATerm h_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_22);
      t = a_24;
    }
  else
    {
      t = e_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_24;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm e_24 = NULL,f_24 = NULL;
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm m_22 = ATgetArgument(t, 0);
                f_24 = ATgetArgument(t, 1);
                {
                  ATerm o_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_22);
            t = f_24;
            t = map_1_0(a_6, t);
          }
        else
          {
            t = k_22;
            {
              ATerm p_22 = t;
              int q_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      e_24 = ATgetArgument(t, 0);
                      {
                        ATerm s_22 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_22);
                  t = (ATerm) ATinsert(ATempty, e_24);
                }
              else
                {
                  t = p_22;
                  {
                    ATerm w_22 = t;
                    int x_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm y_22 = ATgetArgument(t, 0);
                            f_24 = ATgetArgument(t, 1);
                            {
                              ATerm z_22 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm a_23 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_22);
                        t = f_24;
                        t = map_1_0(b_6, t);
                      }
                    else
                      {
                        t = w_22;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm b_23 = ATgetArgument(t, 0);
                            f_24 = ATgetArgument(t, 1);
                            {
                              ATerm c_23 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm d_23 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = f_24;
                        t = map_1_0(c_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm n_24 = NULL;
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_24 = ATgetArgument(t, 0);
          {
            ATerm g_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_23);
      t = n_24;
    }
  else
    {
      t = e_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_24;
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm v_24 = NULL;
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_24 = ATgetArgument(t, 0);
          {
            ATerm j_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_23);
      t = v_24;
    }
  else
    {
      t = h_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_24;
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm d_25 = NULL;
  ATerm k_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_25 = ATgetArgument(t, 0);
          {
            ATerm n_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_23);
      t = d_25;
    }
  else
    {
      t = k_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_25;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, r_5, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, x_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm _2_0 (ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  l_25 = t;
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  g_25 = t;
  t = h_25;
  t = a_66(t);
  j_25 = t;
  t = i_25;
  t = b_66(t);
  k_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, j_25, k_25), g_25);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,q_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_25, term_o_23);
  t = open_stream_0_0(t);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_25, q_25);
  t = k_106(t);
  t = fclose_0_0(t);
  t = q_25;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = fetch_1_0(i_6, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = WriteToFile_1_0(j_6, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm v_25 = NULL,y_25 = NULL,z_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_23 = ATgetArgument(t, 0);
      if(match_cons(p_23, sym_Stream_1))
        {
          v_25 = ATgetArgument(p_23, 0);
        }
      else
        _fail(t);
      y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(v_25, y_25);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_25);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = WriteToFile_1_0(l_6, t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm a_26 = NULL,c_26 = NULL,e_26 = NULL,f_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_23 = ATgetArgument(t, 0);
      if(match_cons(q_23, sym_Stream_1))
        {
          a_26 = ATgetArgument(q_23, 0);
        }
      else
        _fail(t);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(a_26, c_26);
  e_26 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), e_26);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_26);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  t_25 = t;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm r_23 = t;
      int s_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_6 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((u_25 != NULL) && (u_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_6, t);
          ;
          LocalPopChoice(s_23);
        }
      else
        {
          t = r_23;
          t = term_u_23;
          if(((u_25 != NULL) && (u_25 != t)))
            _fail(t);
          else
            u_25 = t;
        }
      return(t);
    }
    t = _2_0(d_6, _id, t);
    t = t_25;
    {
      ATerm f_6 (ATerm t)
      {
        ATerm z_5 = NULL;
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_25), z_5);
        return(t);
      }
      t = _2_0(_id, f_6, t);
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(g_6, h_6, t);
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            t = _2_0(_id, k_6, t);
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
ATerm apply_strategy_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,l_26 = NULL;
  g_26 = t;
  t = dtime_0_0(t);
  t = g_26;
  t = x_102(t);
  h_26 = t;
  t = dtime_0_0(t);
  i_26 = t;
  t = h_26;
  if(match_cons(t, sym__2))
    {
      j_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_26), (ATerm) ATmakeAppl(sym_Runtime_1, i_26)), l_26);
  return(t);
}
ATerm b_27 (ATerm t_26, ATerm t)
{
  t = SSL_fclose(t_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_26 = NULL,z_26 = NULL;
  z_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_26 = ATgetArgument(t, 0);
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_26);
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            t = b_27(z_26, t);
          }
      }
    }
  else
    {
      t = b_27(z_26, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_27 = NULL;
  t = SSL_stdin_stream();
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_27 = NULL;
  t = SSL_stdout_stream();
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_27 = NULL;
  t = SSL_stderr_stream();
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_27);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm m_27 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_27;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = SSL_is_string(q_27);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      ATerm b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_6 = NULL,q_6 = NULL;
        p_6 = t;
        t = SSL_explode_term(p_6);
        if(match_cons(t, sym__2))
          {
            ATerm g_24 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_24) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_24 = ATgetArgument(t, 1);
              if(((ATgetType(h_24) == AT_LIST) && !(ATisEmpty(h_24))))
                {
                  q_6 = ATgetFirst((ATermList) h_24);
                  {
                    ATerm i_24 = (ATerm) ATgetNext((ATermList) h_24);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = q_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = q_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = q_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
              t = _2_0(n_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_27 = ATgetArgument(t, 0);
                  k_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(j_27, k_27);
              l_27 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, l_27);
              ;
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              {
                ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
                t = _2_0(s_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_27 = ATgetArgument(t, 0);
                    o_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(n_27, o_27);
                p_27 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, p_27);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_27 = NULL;
      u_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_27, term_o_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm r_6 = NULL;
        r_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = r_6;
        _fail(t);
      }
    }
  r_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(t_27);
  s_27 = t;
  t = r_27;
  t = fclose_0_0(t);
  t = s_27;
  return(t);
}
ATerm fetch_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm z_27 (ATerm t)
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_91, _id, t);
        ;
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        t = Cons_2_0(_id, z_27, t);
      }
    return(t);
  }
  t = z_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm c_28 = NULL,g_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_28 = ATgetFirst((ATermList) t);
            g_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_28;
        {
          ATerm t_6 (ATerm t)
          {
            t = g_28;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_6, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  ATerm m_28 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_28, t);
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_91(t);
      }
    return(t);
  }
  t = m_28(t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = SSL_explode_string(s_28);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  t = SSL_explode_string(t_28);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_28 = NULL;
  t = _2_0(u_6, v_6, t);
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_28 = NULL,w_28 = NULL;
        if(match_cons(t, sym__2))
          {
            v_28 = ATgetArgument(t, 0);
            w_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_28;
        {
          ATerm y_6 (ATerm t)
          {
            t = w_28;
            return(t);
          }
          t = at_end_1_0(y_6, t);
        }
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        {
          ATerm w_6 = NULL,x_6 = NULL;
          w_6 = t;
          t = SSL_explode_term(w_6);
          if(match_cons(t, sym__2))
            {
              ATerm y_24 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_24) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              x_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_6;
          t = concat_0_0(t);
        }
      }
    o_28 = t;
    t = SSL_implode_string(o_28);
  }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_29 = NULL;
      h_29 = t;
      t = SSL_is_string(h_29);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_6, t);
            ;
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            {
              ATerm o_29 = NULL,p_29 = NULL,r_29 = NULL;
              o_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_29 = ATgetArgument(t, 0);
                  t = p_29;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_29 = ATgetArgument(t, 0);
                      t = p_29;
                      {
                        ATerm m_25 = t;
                        int n_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_29);
                            {
                              ATerm p_25 = t;
                              int r_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_7 = NULL;
                                  t = eval_config_0_0(t);
                                  t_7 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_29, t_7);
                                  t = t_7;
                                  ;
                                  LocalPopChoice(r_25);
                                }
                              else
                                {
                                  t = p_25;
                                }
                            }
                            ;
                            LocalPopChoice(n_25);
                          }
                        else
                          {
                            t = m_25;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_29), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = p_29;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_29 = NULL,z_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_29 = ATgetArgument(t, 0);
                          r_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_29;
                      t = eval_config_0_0(t);
                      y_29 = t;
                      t = r_29;
                      t = eval_config_0_0(t);
                      z_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_30 = NULL,h_30 = NULL;
      f_30 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 = NULL;
            t = eval_config_0_0(t);
            a_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_8);
            t = a_8;
            ;
            LocalPopChoice(d_26);
          }
        else
          {
            t = b_26;
          }
        h_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_30, term_k_26);
        t = geq_0_0(t);
        t = f_30;
        t = s_112(t);
      }
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  if(match_string(t, "-k"))
    {
      t = j_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_30;
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  k_30 = t;
  t = SSL_string_to_int(k_30);
  l_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), l_30);
  t = k_30;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_7, c_7, d_7, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  if(match_string(t, "-S"))
    {
      t = n_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_30;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_o_26;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  o_30 = t;
  t = SSL_string_to_int(o_30);
  p_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_30);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_30);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_26;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_7, f_7, g_7, t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm w_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_7, i_7, k_7, t);
            ;
            LocalPopChoice(y_26);
          }
        else
          {
            t = w_26;
            t = Option_3_0(m_7, n_7, o_7, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,u_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_30 = NULL;
      t = term_r_9;
      t = d_0(t);
      v_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_f_27, v_30);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm a_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_30 = ATgetFirst((ATermList) t);
          u_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_30;
      t = a_0(t);
      t = term_r_9;
      t = b_0(t);
      a_31 = t;
      t = (ATerm) ATinsert(CheckATermList(u_30), a_31);
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  if(match_string(t, "-o"))
    {
      t = c_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_31;
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), d_31);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_31);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_7, q_7, r_7, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  if(match_cons(t, sym__3))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
      i_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_31, h_31);
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_27 = ATgetArgument(t, 0);
            ATerm w_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_31, h_31);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATempty;
      }
    j_31 = t;
    t = SSL_table_put(g_31, h_31, (ATerm) ATinsert(CheckATermList(j_31), i_31));
    t = (ATerm) ATmakeAppl(sym__3, g_31, h_31, i_31);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_31 = NULL;
      t = term_r_9;
      t = j_0(t);
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_f_27, v_31);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_31 = ATgetFirst((ATermList) t);
          s_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_31 = ATgetFirst((ATermList) t);
          u_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_31;
      t = h_0(t);
      t = t_31;
      t = i_0(t);
      z_31 = t;
      t = (ATerm) ATinsert(CheckATermList(u_31), z_31);
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  if(match_string(t, "-i"))
    {
      t = b_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_32;
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm c_32 = NULL;
  c_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), c_32);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_32);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_7, u_7, v_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_9;
  t = whoami_0_0(t);
  d_32 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), d_32));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm y_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 = NULL;
        t = eval_config_0_0(t);
        f_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_8);
        t = f_8;
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = y_27;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t)
{
  ATerm b_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_96(t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = b_28;
      {
        ATerm g_32 = NULL,h_32 = NULL,k_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_32 = ATgetFirst((ATermList) t);
            h_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_32;
        t = foldr_2_0(g_96, h_96, t);
        k_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_32, k_32);
        t = h_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL;
  if(match_cons(t, sym__2))
    {
      m_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_8, n_8);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = SSL_addr(m_8, n_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_32 = NULL,h_8 = NULL,j_8 = NULL;
  t = times_0_0(t);
  h_8 = t;
  t = SSL_explode_term(h_8);
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8;
  t = foldr_2_0(w_7, x_7, t);
  n_32 = t;
  t = SSL_TicksToSeconds(n_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  if(match_cons(t, sym__2))
    {
      z_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_33;
        if((z_32 != t))
          {
            _fail(t);
          }
        t = y_32;
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = y_32;
        {
          ATerm k_28 = t;
          int l_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_32, a_33);
              ;
              LocalPopChoice(l_28);
            }
          else
            {
              t = k_28;
              t = SSL_gtr(z_32, a_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_32, a_33);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm n_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33 = NULL,f_33 = NULL;
      d_33 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 = NULL;
            t = eval_config_0_0(t);
            c_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_9);
            t = c_9;
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
          }
        f_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_33, term_u_28);
        t = geq_0_0(t);
        t = d_33;
        t = r_112(t);
      }
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = n_28;
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL;
  t = run_time_0_0(t);
  i_33 = t;
  t = term_r_9;
  t = whoami_0_0(t);
  j_33 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), i_33), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), j_33));
  t = (ATerm) ATmakeAppl(sym__2, term_x_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_28), i_33), term_y_28), j_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm g_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_9 = NULL;
            t = eval_config_0_0(t);
            h_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), h_9);
            t = h_9;
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = g_29;
          }
      }
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      t = fetch_1_0(z_7, t);
    }
  t = v_103(t);
  return(t);
}
ATerm map_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm k_33 (ATerm t)
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = Cons_2_0(g_91, k_33, t);
      }
    return(t);
  }
  t = k_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_33 = ATgetFirst((ATermList) t);
      n_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_33 = NULL,s_33 = NULL;
        t = n_33;
        t = g_0(t);
        r_33 = t;
        t = m_33;
        t = f_0(t);
        s_33 = t;
        t = n_33;
        {
          ATerm c_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_33), s_33);
            return(t);
          }
          t = reverse_acc_2_0(f_0, c_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_9;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  w_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_33);
  t_33 = t;
  t = u_33;
  t = t_82(t);
  v_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, v_33), t_33);
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm z_33 = NULL;
  z_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_33), term_l_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm q_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_9 = NULL;
            t = eval_config_0_0(t);
            l_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_9);
            t = l_9;
            ;
            LocalPopChoice(s_29);
          }
        else
          {
            t = q_29;
          }
      }
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      t = fetch_1_0(d_8, t);
    }
  t = term_t_29;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, e_8, t);
  t = map_1_0(i_8, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  d_34 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      b_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_34);
  a_34 = t;
  t = b_34;
  t = u_82(t);
  c_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, c_34), a_34);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  h_34 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_29 = ATgetFirst((ATermList) t);
                ATerm x_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_34;
          }
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATinsert(ATempty, h_34);
      }
    i_34 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), i_34);
    t = h_34;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_9 = NULL;
        t = eval_config_0_0(t);
        q_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_9);
        t = q_9;
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_30;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm p_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_30;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_8, l_8, o_8, t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      t = Option_3_0(p_8, q_8, r_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  r_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_34 = ATgetFirst((ATermList) t);
      o_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_34);
  m_34 = t;
  t = n_34;
  t = p_70(t);
  p_34 = t;
  t = o_34;
  t = q_70(t);
  q_34 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(q_34), p_34), m_34);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_34);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_34);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_108 (ATerm), ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  {
    ATerm t_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_30;
        t = r_108(t);
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = t_30;
      }
    t = w_34;
    {
      ATerm t_8 (ATerm t)
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_31 = t;
            int e_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_31);
              }
            else
              {
                t = b_31;
                t = r_108(t);
                t = Cons_2_0(_id, t_8, t);
              }
            ;
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            {
              ATerm z_34 = NULL,a_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_34 = ATgetFirst((ATermList) t);
                  a_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_35), (ATerm) ATmakeAppl(sym_Undefined_1, z_34));
            }
          }
        return(t);
      }
      t = Cons_2_0(s_8, t_8, t);
    }
  }
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  if(match_string(t, "--help"))
    {
      t = k_35;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_35;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_35;
        }
    }
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_31;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm z_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
  h_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = h_35;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm l_31 = t;
      int m_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_108(t);
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
                t = Option_3_0(v_8, w_8, y_8, t);
                ;
                LocalPopChoice(o_31);
              }
            else
              {
                t = n_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_8, t);
    {
      ATerm p_31 = t;
      int q_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_35 = NULL;
          p_35 = t;
          {
            ATerm w_31 = t;
            int x_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = p_35;
                {
                  ATerm y_31 = t;
                  int a_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm e_32 = t;
                        int f_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_11 = NULL;
                            t = eval_config_0_0(t);
                            e_11 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_11);
                            t = e_11;
                            ;
                            LocalPopChoice(f_32);
                          }
                        else
                          {
                            t = e_32;
                          }
                      }
                      ;
                      LocalPopChoice(a_32);
                    }
                  else
                    {
                      t = y_31;
                      t = fetch_1_0(z_8, t);
                    }
                  t = p_35;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(x_31);
              }
            else
              {
                t = w_31;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm i_32 = t;
                  int j_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_11 = NULL;
                      t = eval_config_0_0(t);
                      u_11 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), u_11);
                      t = u_11;
                      ;
                      LocalPopChoice(j_32);
                    }
                  else
                    {
                      t = i_32;
                    }
                  t = p_35;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(q_31);
        }
      else
        {
          t = p_31;
          {
            ATerm l_32 = t;
            int m_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_9 (ATerm t)
                {
                  ATerm b_9 (ATerm t)
                  {
                    if(((i_35 != NULL) && (i_35 != t)))
                      _fail(t);
                    else
                      i_35 = t;
                    return(t);
                  }
                  t = Undefined_1_0(b_9, t);
                  return(t);
                }
                t = fetch_1_0(a_9, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_35)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_x_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_35)), term_o_32));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(m_32);
              }
            else
              {
                t = l_32;
              }
          }
        }
      j_35 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = j_35;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t)
{
  ATerm s_35 = NULL;
  t = parse_options_1_0(x_103, t);
  s_35 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), s_35);
  t = s_35;
  t = z_103(t);
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_103, t);
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        {
          ATerm r_32 = t;
          int s_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_104(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_32);
            }
          else
            {
              t = r_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = if_verbose2_1_0(m_9, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_32;
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  t_35 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_12 = NULL;
        t = eval_config_0_0(t);
        c_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_12);
        t = c_12;
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
      }
    u_35 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, u_35));
    t = t_35;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t)
{
  ATerm d_9 (ATerm t)
  {
    ATerm x_32 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_103(t);
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = x_32;
        {
          ATerm c_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_33);
            }
          else
            {
              t = c_33;
              {
                ATerm g_33 = t;
                int h_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(h_33);
                  }
                else
                  {
                    t = g_33;
                    {
                      ATerm l_33 = t;
                      int o_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_9, j_9, k_9, t);
                          ;
                          LocalPopChoice(o_33);
                        }
                      else
                        {
                          t = l_33;
                          {
                            ATerm p_33 = t;
                            int q_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_33);
                              }
                            else
                              {
                                t = p_33;
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
  ATerm f_9 (ATerm t)
  {
    ATerm v_35 = NULL,w_35 = NULL,n_12 = NULL;
    v_35 = t;
    {
      ATerm x_33 = t;
      int y_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_35 != NULL) && (w_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_9, t);
          ;
          LocalPopChoice(y_33);
        }
      else
        {
          t = x_33;
          t = term_e_34;
          w_35 = t;
        }
      t = not_null(w_35);
      t = ReadFromFile_0_0(t);
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_35, n_12);
      t = apply_strategy_1_0(g_103, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(d_9, i_103, e_9, f_9, t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = _2_0(_id, strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_9, _fail, default_usage_0_0, t);
  return(t);
}
