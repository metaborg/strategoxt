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
ATerm term_k_34;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_s_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_j_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_z_29;
ATerm term_s_29;
ATerm term_g_29;
ATerm term_y_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_o_25;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_e_9;
void init_constant_terms (void)
{
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym__3, term_w_30, term_x_30, term_e_9);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm m_0 (ATerm);
ATerm n_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm v_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm d_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm spaste_1_0 (ATerm k_84 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm);
ATerm Let_2_0 (ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm);
ATerm v_1 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm b_75 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm RnBinding_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm rename_4_0 (ATerm i_98 (ATerm (ATerm), ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_98 (ATerm (ATerm), ATerm), ATerm);
ATerm n_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm tpaste_1_0 (ATerm g_84 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm j_74 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm i_3 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm t_3 (ATerm);
ATerm x_3 (ATerm);
ATerm r_3 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm);
ATerm diff_1_0 (ATerm q_93 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm);
ATerm for_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm m_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm y_4 (ATerm);
ATerm e_5 (ATerm);
ATerm free_vars_3_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm n_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm Var_1_0 (ATerm s_71 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm u_5 (ATerm);
ATerm i_5 (ATerm);
ATerm o_5 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm _2_0 (ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm l_106 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_102 (ATerm), ATerm);
ATerm b_30 (ATerm r_29, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_112 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm m_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm q_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_112 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm w_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm u_82 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_108 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm parse_options_1_0 (ATerm r_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm v_8 (ATerm);
ATerm iowrap_3_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  b_0 = t;
  t = term_e_9;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm m_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_9 = ATgetArgument(t, 0);
      if(((ATgetType(f_9) != AT_LIST) || !(ATisEmpty(f_9))))
        _fail(t);
      {
        ATerm g_9 = ATgetArgument(t, 1);
        if(((ATgetType(g_9) != AT_LIST) || !(ATisEmpty(g_9))))
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
  ATerm u_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_9 = ATgetArgument(t, 0);
      if(((ATgetType(h_9) == AT_LIST) && !(ATisEmpty(h_9))))
        {
          u_0 = ATgetFirst((ATermList) h_9);
          x_0 = (ATerm) ATgetNext((ATermList) h_9);
        }
      else
        _fail(t);
      {
        ATerm j_9 = ATgetArgument(t, 1);
        if(((ATgetType(j_9) == AT_LIST) && !(ATisEmpty(j_9))))
          {
            w_0 = ATgetFirst((ATermList) j_9);
            y_0 = (ATerm) ATgetNext((ATermList) j_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_0, w_0), (ATerm) ATmakeAppl(sym__2, x_0, y_0));
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  if(match_cons(t, sym__2))
    {
      g_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_1), g_1);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm o_1 = NULL,x_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_1;
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm p_9 = ATgetArgument(t, 0);
            x_1 = ATgetArgument(t, 1);
            a_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(n_9);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_2, x_1, a_2);
      }
    else
      {
        t = m_9;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm q_9 = ATgetArgument(t, 0);
            x_1 = ATgetArgument(t, 1);
            a_2 = ATgetArgument(t, 2);
            b_2 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_2, x_1, a_2, b_2);
      }
  }
  return(t);
}
ATerm v_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if(((ATgetType(r_9) != AT_LIST) || !(ATisEmpty(r_9))))
        _fail(t);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(((ATgetType(s_9) != AT_LIST) || !(ATisEmpty(s_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_9 = ATgetArgument(t, 0);
      if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
        {
          o_2 = ATgetFirst((ATermList) t_9);
          q_2 = (ATerm) ATgetNext((ATermList) t_9);
        }
      else
        _fail(t);
      {
        ATerm u_9 = ATgetArgument(t, 1);
        if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
          {
            p_2 = ATgetFirst((ATermList) u_9);
            r_2 = (ATerm) ATgetNext((ATermList) u_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_2, p_2), (ATerm) ATmakeAppl(sym__2, q_2, r_2));
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm w_2 = NULL,y_2 = NULL;
  if(match_cons(t, sym__2))
    {
      w_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_2), w_2);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm a_3 = NULL,f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      a_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_3;
  {
    ATerm b_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_3);
      }
    else
      {
        t = b_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_10 = ATgetArgument(t, 0);
            f_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_3, f_3);
      }
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if(((ATgetType(k_10) != AT_LIST) || !(ATisEmpty(k_10))))
        _fail(t);
      {
        ATerm l_10 = ATgetArgument(t, 1);
        if(((ATgetType(l_10) != AT_LIST) || !(ATisEmpty(l_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm l_3 = NULL,o_3 = NULL,p_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
        {
          l_3 = ATgetFirst((ATermList) m_10);
          p_3 = (ATerm) ATgetNext((ATermList) m_10);
        }
      else
        _fail(t);
      {
        ATerm q_10 = ATgetArgument(t, 1);
        if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
          {
            o_3 = ATgetFirst((ATermList) q_10);
            s_3 = (ATerm) ATgetNext((ATermList) q_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_3, o_3), (ATerm) ATmakeAppl(sym__2, p_3, s_3));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm n_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_5), n_4);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm l_5 = NULL,g_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5;
  {
    ATerm r_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_6);
      }
    else
      {
        t = r_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_11 = ATgetArgument(t, 0);
            g_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_6, g_6);
      }
  }
  return(t);
}
ATerm p_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_11 = ATgetArgument(t, 0);
      if(((ATgetType(b_11) != AT_LIST) || !(ATisEmpty(b_11))))
        _fail(t);
      {
        ATerm g_11 = ATgetArgument(t, 1);
        if(((ATgetType(g_11) != AT_LIST) || !(ATisEmpty(g_11))))
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
  ATerm l_7 = NULL,u_7 = NULL,b_8 = NULL,k_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if(((ATgetType(h_11) == AT_LIST) && !(ATisEmpty(h_11))))
        {
          l_7 = ATgetFirst((ATermList) h_11);
          b_8 = (ATerm) ATgetNext((ATermList) h_11);
        }
      else
        _fail(t);
      {
        ATerm i_11 = ATgetArgument(t, 1);
        if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
          {
            u_7 = ATgetFirst((ATermList) i_11);
            k_8 = (ATerm) ATgetNext((ATermList) i_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_7, u_7), (ATerm) ATmakeAppl(sym__2, b_8, k_8));
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm r_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      r_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_8), r_8);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm i_9 = NULL,k_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_9;
  {
    ATerm k_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_9);
      }
    else
      {
        t = k_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_11 = ATgetArgument(t, 0);
            k_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_9, k_9);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_0 (ATerm t)
      {
        ATerm l_0 = NULL,o_0 = NULL;
        l_0 = t;
        t = k_84(t);
        o_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_0, o_0);
        t = genzip_4_0(m_0, n_0, p_0, q_0, t);
        return(t);
      }
      t = Let_2_0(k_0, _id, t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              ATerm r_0 = NULL,t_0 = NULL;
              r_0 = t;
              t = k_84(t);
              t_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_0, t_0);
              t = genzip_4_0(v_0, z_0, b_1, d_1, t);
              return(t);
            }
            t = SDef_3_0(_id, s_0, _id, t);
            ;
            LocalPopChoice(w_11);
          }
        else
          {
            t = v_11;
            {
              ATerm c_12 = t;
              int q_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_1 (ATerm t)
                  {
                    ATerm a_1 = NULL,c_1 = NULL;
                    a_1 = t;
                    t = k_84(t);
                    c_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_1, c_1);
                    t = genzip_4_0(i_1, k_1, l_1, m_1, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, e_1, _id, _id, t);
                  ;
                  LocalPopChoice(q_12);
                }
              else
                {
                  t = c_12;
                  {
                    ATerm r_12 = t;
                    int s_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_1 (ATerm t)
                        {
                          ATerm f_1 = NULL,j_1 = NULL;
                          f_1 = t;
                          t = k_84(t);
                          j_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, f_1, j_1);
                          t = genzip_4_0(p_1, q_1, s_1, t_1, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, n_1, _id, _id, t);
                        ;
                        LocalPopChoice(s_12);
                      }
                    else
                      {
                        t = r_12;
                        {
                          ATerm u_1 (ATerm t)
                          {
                            ATerm v_9 = NULL;
                            t = k_84(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                v_9 = ATgetFirst((ATermList) t);
                                {
                                  ATerm t_12 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = v_9;
                            return(t);
                          }
                          t = Rec_2_0(u_1, _id, t);
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
ATerm Rec_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,c_10 = NULL;
  c_10 = t;
  if(match_cons(t, sym_Rec_2))
    {
      x_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_10);
  w_9 = t;
  t = x_9;
  t = z_75(t);
  z_9 = t;
  t = y_9;
  t = a_76(t);
  a_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, z_9, a_10), w_9);
  return(t);
}
ATerm SDef_3_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,o_10 = NULL,p_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  u_10 = t;
  if(match_cons(t, sym_SDef_3))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
      o_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_10);
  h_10 = t;
  t = i_10;
  t = r_77(t);
  p_10 = t;
  t = j_10;
  t = s_77(t);
  s_10 = t;
  t = o_10;
  t = t_77(t);
  t_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, p_10, s_10, t_10), h_10);
  return(t);
}
ATerm Let_2_0 (ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,z_10 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  f_11 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_10 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_11);
  x_10 = t;
  t = z_10;
  t = c_75(t);
  d_11 = t;
  t = c_11;
  t = d_75(t);
  e_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, d_11, e_11), x_10);
  return(t);
}
ATerm sboundin_3_0 (ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(l_84, l_84, t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm y_12 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(n_84, n_84, l_84, t);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = y_12;
            {
              ATerm d_13 = t;
              int e_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(n_84, n_84, n_84, l_84, t);
                  ;
                  LocalPopChoice(e_13);
                }
              else
                {
                  t = d_13;
                  t = Rec_2_0(n_84, l_84, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm l_11 = NULL;
  ATerm f_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_11 = ATgetArgument(t, 0);
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
      t = l_11;
    }
  else
    {
      t = f_13;
      if(match_cons(t, sym_SDefT_4))
        {
          l_11 = ATgetArgument(t, 0);
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
      t = l_11;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm j_11 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      j_11 = ATgetArgument(t, 0);
      {
        ATerm n_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_11;
  t = map_1_0(v_1, t);
  return(t);
}
ATerm SVar_1_0 (ATerm b_75 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  u_11 = t;
  if(match_cons(t, sym_SVar_1))
    {
      s_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_11);
  r_11 = t;
  t = s_11;
  t = b_75(t);
  t_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, t_11), r_11);
  return(t);
}
ATerm DistBinding_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__3))
    {
      z_11 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
      x_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_11;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm a_12 = NULL;
      a_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_12, x_11);
      t = t_98(t);
      return(t);
    }
    ATerm y_1 (ATerm t)
    {
      ATerm b_12 = NULL;
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_12, y_11);
      t = t_98(t);
      return(t);
    }
    t = u_98(w_1, y_1, _id, t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm c_2 (ATerm t)
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
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if(((ATgetType(q_13) == AT_LIST) && !(ATisEmpty(q_13))))
        {
          k_12 = ATgetFirst((ATermList) q_13);
          m_12 = (ATerm) ATgetNext((ATermList) q_13);
        }
      else
        _fail(t);
      {
        ATerm r_13 = ATgetArgument(t, 1);
        if(((ATgetType(r_13) == AT_LIST) && !(ATisEmpty(r_13))))
          {
            l_12 = ATgetFirst((ATermList) r_13);
            n_12 = (ATerm) ATgetNext((ATermList) r_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_12, l_12), (ATerm) ATmakeAppl(sym__2, m_12, n_12));
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_12), o_12);
  return(t);
}
ATerm RnBinding_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12;
  t = n_98(t);
  f_12 = t;
  t = map_1_0(new_0_0, t);
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_12, g_12);
  t = genzip_4_0(c_2, e_2, f_2, _id, t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_12, e_12);
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_13 = ATgetArgument(t, 0);
            ATerm v_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_12;
        {
          ATerm g_2 (ATerm t)
          {
            t = e_12;
            return(t);
          }
          t = at_end_1_0(g_2, t);
        }
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm r_1 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_12, e_12));
          if(match_cons(t, sym__2))
            {
              ATerm w_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_1;
          t = concat_0_0(t);
        }
      }
    i_12 = t;
    t = d_12;
    {
      ATerm h_2 (ATerm t)
      {
        t = g_12;
        return(t);
      }
      t = o_98(h_2, t);
      j_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, j_12, e_12, i_12);
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_13 = ATgetFirst((ATermList) t);
      g_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_13;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_12;
            if((z_12 != t))
              {
                _fail(t);
              }
            t = x_12;
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            t = (ATerm) ATmakeAppl(sym__2, z_12, g_13);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, z_12, g_13);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm k_14 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_99(t);
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        {
          ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
          ATerm i_2 (ATerm t)
          {
            ATerm z_1 = NULL;
            z_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_1, not_null(j_14));
            t = k_14(t);
            return(t);
          }
          if(((h_14 != NULL) && (h_14 != t)))
            _fail(t);
          else
            h_14 = t;
          if(match_cons(t, sym__2))
            {
              if(((i_14 != NULL) && (i_14 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_14 = ATgetArgument(t, 0);
              if(((j_14 != NULL) && (j_14 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                j_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(i_14);
          t = SRTS_all(i_2, t);
        }
      }
    return(t);
  }
  t = k_14(t);
  return(t);
}
ATerm rename_4_0 (ATerm i_98 (ATerm (ATerm), ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_98 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_14 = NULL;
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_14, (ATerm) ATempty);
  {
    ATerm w_14 (ATerm t)
    {
      ATerm j_2 (ATerm t)
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_14 = NULL,t_14 = NULL;
            ATerm k_2 (ATerm t)
            {
              ATerm m_2 = NULL;
              m_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_2, not_null(t_14));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((s_14 != NULL) && (s_14 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_14 = ATgetArgument(t, 0);
                if(((t_14 != NULL) && (t_14 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(s_14);
            t = i_98(k_2, t);
            ;
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            t = RnBinding_2_0(j_98, l_98, t);
            t = DistBinding_2_0(w_14, k_98, t);
          }
        return(t);
      }
      t = env_alltd_1_0(j_2, t);
      return(t);
    }
    t = w_14(t);
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_14 = ATgetArgument(t, 0);
      if(((ATgetType(d_14) != AT_LIST) || !(ATisEmpty(d_14))))
        _fail(t);
      {
        ATerm e_14 = ATgetArgument(t, 1);
        if(((ATgetType(e_14) != AT_LIST) || !(ATisEmpty(e_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_14 = ATgetArgument(t, 0);
      if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
        {
          e_15 = ATgetFirst((ATermList) f_14);
          g_15 = (ATerm) ATgetNext((ATermList) f_14);
        }
      else
        _fail(t);
      {
        ATerm g_14 = ATgetArgument(t, 1);
        if(((ATgetType(g_14) == AT_LIST) && !(ATisEmpty(g_14))))
          {
            f_15 = ATgetFirst((ATermList) g_14);
            h_15 = (ATerm) ATgetNext((ATermList) g_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_15, f_15), (ATerm) ATmakeAppl(sym__2, g_15, h_15));
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  if(match_cons(t, sym__2))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_15), i_15);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm m_15 = NULL,q_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15;
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_14);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_15);
      }
    else
      {
        t = l_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_14 = ATgetArgument(t, 0);
            q_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_15, q_15);
      }
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if(((ATgetType(q_14) != AT_LIST) || !(ATisEmpty(q_14))))
        _fail(t);
      {
        ATerm r_14 = ATgetArgument(t, 1);
        if(((ATgetType(r_14) != AT_LIST) || !(ATisEmpty(r_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_14 = ATgetArgument(t, 0);
      if(((ATgetType(u_14) == AT_LIST) && !(ATisEmpty(u_14))))
        {
          w_15 = ATgetFirst((ATermList) u_14);
          z_15 = (ATerm) ATgetNext((ATermList) u_14);
        }
      else
        _fail(t);
      {
        ATerm v_14 = ATgetArgument(t, 1);
        if(((ATgetType(v_14) == AT_LIST) && !(ATisEmpty(v_14))))
          {
            x_15 = ATgetFirst((ATermList) v_14);
            a_16 = (ATerm) ATgetNext((ATermList) v_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_15, x_15), (ATerm) ATmakeAppl(sym__2, z_15, a_16));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_16), b_16);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm e_16 = NULL,h_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_16;
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_14);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_16);
      }
    else
      {
        t = x_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_15 = ATgetArgument(t, 0);
            h_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_16, h_16);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(g_84, _id, t);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm d_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              ATerm x_2 = NULL,c_3 = NULL;
              x_2 = t;
              t = g_84(t);
              c_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_2, c_3);
              t = genzip_4_0(n_2, s_2, t_2, u_2, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, l_2, _id, t);
            ;
            LocalPopChoice(k_15);
          }
        else
          {
            t = d_15;
            {
              ATerm v_2 (ATerm t)
              {
                ATerm m_3 = NULL,q_3 = NULL;
                m_3 = t;
                t = g_84(t);
                q_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_3, q_3);
                t = genzip_4_0(z_2, b_3, d_3, e_3, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, v_2, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm j_74 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  r_16 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      p_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_16);
  o_16 = t;
  t = p_16;
  t = j_74(t);
  q_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, q_16), o_16);
  return(t);
}
ATerm RDefT_4_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  g_17 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
      a_17 = ATgetArgument(t, 2);
      b_17 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_17);
  x_16 = t;
  t = y_16;
  t = a_74(t);
  c_17 = t;
  t = z_16;
  t = b_74(t);
  d_17 = t;
  t = a_17;
  t = c_74(t);
  e_17 = t;
  t = b_17;
  t = d_74(t);
  f_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, c_17, d_17, e_17, f_17), x_16);
  return(t);
}
ATerm SDefT_4_0 (ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,s_17 = NULL,t_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  y_17 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
      m_17 = ATgetArgument(t, 2);
      n_17 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_17);
  j_17 = t;
  t = k_17;
  t = u_77(t);
  s_17 = t;
  t = l_17;
  t = v_77(t);
  t_17 = t;
  t = m_17;
  t = w_77(t);
  w_17 = t;
  t = n_17;
  t = x_77(t);
  x_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, s_17, t_17, w_17, x_17), j_17);
  return(t);
}
ATerm Scope_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,e_18 = NULL,f_18 = NULL,l_18 = NULL,o_18 = NULL,p_18 = NULL;
  p_18 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_18);
  b_18 = t;
  t = e_18;
  t = m_75(t);
  l_18 = t;
  t = f_18;
  t = n_75(t);
  o_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, l_18, o_18), b_18);
  return(t);
}
ATerm tboundin_3_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm t)
{
  ATerm l_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(j_84, h_84, t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = l_15;
      {
        ATerm o_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(j_84, j_84, j_84, h_84, t);
            ;
            LocalPopChoice(p_15);
          }
        else
          {
            t = o_15;
            {
              ATerm r_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(j_84, j_84, j_84, h_84, t);
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = r_15;
                  t = DynamicRules_1_0(h_84, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm w_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_18);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm l_19 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm y_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      t = l_19;
    }
  else
    {
      t = u_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_19;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm r_19 = NULL;
  ATerm d_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_19 = ATgetArgument(t, 0);
          {
            ATerm g_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_16);
      t = r_19;
    }
  else
    {
      t = d_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_19;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm x_18 = NULL,b_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      b_19 = ATgetArgument(t, 0);
      t = b_19;
      if(match_cons(t, sym_Rule_3))
        {
          x_18 = ATgetArgument(t, 0);
          {
            ATerm j_16 = ATgetArgument(t, 1);
          }
          {
            ATerm k_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = x_18;
      t = tvars_0_0(t);
    }
  else
    {
      ATerm l_16 = t;
      int m_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Scope_2))
            {
              b_19 = ATgetArgument(t, 0);
              {
                ATerm n_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(m_16);
          t = b_19;
        }
      else
        {
          t = l_16;
          if(match_cons(t, sym_DynamicRules_1))
            {
              b_19 = ATgetArgument(t, 0);
              t = b_19;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm s_16 = t;
              int t_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm u_16 = ATgetArgument(t, 0);
                      ATerm v_16 = ATgetArgument(t, 1);
                      d_19 = ATgetArgument(t, 2);
                      {
                        ATerm w_16 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_16);
                  t = d_19;
                  t = map_1_0(j_3, t);
                }
              else
                {
                  t = s_16;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm h_17 = ATgetArgument(t, 0);
                      ATerm i_17 = ATgetArgument(t, 1);
                      d_19 = ATgetArgument(t, 2);
                      {
                        ATerm o_17 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = d_19;
                  t = map_1_0(k_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(h_3, i_3, tboundin_3_0, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm g_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_20);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm q_20 = NULL;
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_20 = ATgetArgument(t, 0);
          {
            ATerm r_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_17);
      t = q_20;
    }
  else
    {
      t = p_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_20;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm w_20 = NULL;
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_20 = ATgetArgument(t, 0);
          {
            ATerm z_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_17);
      t = w_20;
    }
  else
    {
      t = u_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_20;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm a_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = a_18;
      {
        ATerm i_20 = NULL,k_20 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_20 = ATgetArgument(t, 0);
            t = i_20;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm d_18 = t;
            int g_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm h_18 = ATgetArgument(t, 0);
                    ATerm i_18 = ATgetArgument(t, 1);
                    k_20 = ATgetArgument(t, 2);
                    {
                      ATerm j_18 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(g_18);
                t = k_20;
                t = map_1_0(t_3, t);
              }
            else
              {
                t = d_18;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm k_18 = ATgetArgument(t, 0);
                    ATerm m_18 = ATgetArgument(t, 1);
                    k_20 = ATgetArgument(t, 2);
                    {
                      ATerm n_18 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = k_20;
                t = map_1_0(x_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_19 = NULL,d_20 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      d_20 = ATgetArgument(t, 0);
      t = d_20;
      if(match_cons(t, sym_Rule_3))
        {
          z_19 = ATgetArgument(t, 0);
          {
            ATerm q_18 = ATgetArgument(t, 1);
          }
          {
            ATerm r_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_19;
      t = free_vars_3_0(n_3, r_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          d_20 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_20;
    }
  return(t);
}
ATerm union_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  if(match_cons(t, sym__2))
    {
      b_21 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_21;
  {
    ATerm c_21 (ATerm t)
    {
      ATerm t_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_21;
          ;
          LocalPopChoice(u_18);
        }
      else
        {
          t = t_18;
          {
            ATerm v_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_3 = NULL,v_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_3 = ATgetFirst((ATermList) t);
                    v_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = a_21;
                {
                  ATerm y_3 (ATerm t)
                  {
                    ATerm w_3 = NULL;
                    w_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_3, w_3);
                    t = u_93(t);
                    return(t);
                  }
                  t = fetch_1_0(y_3, t);
                  t = v_3;
                  t = c_21(t);
                }
                ;
                LocalPopChoice(y_18);
              }
            else
              {
                t = v_18;
                t = Cons_2_0(_id, c_21, t);
              }
          }
        }
      return(t);
    }
    t = c_21(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_96(t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm f_21 = NULL,g_21 = NULL,j_21 = NULL,k_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_21 = ATgetFirst((ATermList) t);
            g_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_21;
        t = l_96(t);
        j_21 = t;
        t = g_21;
        t = foldr_3_0(j_96, k_96, l_96, t);
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_21, k_21);
        t = k_96(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  if(match_cons(t, sym__2))
    {
      u_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_21;
  {
    ATerm v_21 (ATerm t)
    {
      ATerm c_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(e_19);
        }
      else
        {
          t = c_19;
          {
            ATerm f_19 = t;
            int g_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_3 = NULL,a_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_3 = ATgetFirst((ATermList) t);
                    a_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = t_21;
                {
                  ATerm c_4 (ATerm t)
                  {
                    ATerm b_4 = NULL;
                    b_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_3, b_4);
                    t = q_93(t);
                    return(t);
                  }
                  t = fetch_1_0(c_4, t);
                  t = a_4;
                  t = v_21(t);
                }
                ;
                LocalPopChoice(g_19);
              }
            else
              {
                t = f_19;
                t = Cons_2_0(_id, v_21, t);
              }
          }
        }
      return(t);
    }
    t = v_21(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t)
{
  ATerm x_21 (ATerm t)
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_89(t);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = t_89(t);
        t = _2_0(v_89, x_21, t);
        t = u_89(t);
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if(((ATgetType(j_19) != AT_LIST) || !(ATisEmpty(j_19))))
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) != AT_LIST) || !(ATisEmpty(k_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
        {
          j_22 = ATgetFirst((ATermList) m_19);
          l_22 = (ATerm) ATgetNext((ATermList) m_19);
        }
      else
        _fail(t);
      {
        ATerm n_19 = ATgetArgument(t, 1);
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            k_22 = ATgetFirst((ATermList) n_19);
            m_22 = (ATerm) ATgetNext((ATermList) n_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_22, k_22), (ATerm) ATmakeAppl(sym__2, l_22, m_22));
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_22), n_22);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,f_22 = NULL,g_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_19 = ATgetFirst((ATermList) t);
      if(match_cons(o_19, sym__2))
        {
          z_21 = ATgetArgument(o_19, 0);
          a_22 = ATgetArgument(o_19, 1);
        }
      else
        _fail(t);
      b_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_22);
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_21);
  if(match_cons(t, sym__2))
    {
      if((c_22 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_22, d_22);
  t = genzip_4_0(d_4, e_4, f_4, _id, t);
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_22, b_22);
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            ATerm t_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_22;
        {
          ATerm g_4 (ATerm t)
          {
            t = b_22;
            return(t);
          }
          t = at_end_1_0(g_4, t);
        }
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          ATerm h_4 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, g_22, b_22));
          if(match_cons(t, sym__2))
            {
              ATerm u_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_19) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              h_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_4;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  ATerm v_22 (ATerm t)
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_102(t);
        ;
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = s_102(t);
        t = v_22(t);
      }
    return(t);
  }
  t = v_22(t);
  return(t);
}
ATerm for_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t)
{
  t = u_102(t);
  t = while_not_2_0(v_102, w_102, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_23);
  return(t);
}
ATerm m_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23 = NULL,e_23 = NULL,h_23 = NULL,i_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_23 = ATgetFirst((ATermList) t);
          i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_23;
      if(match_cons(t, sym__2))
        {
          e_23 = ATgetArgument(t, 0);
          h_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_23;
      if((e_23 != t))
        {
          _fail(t);
        }
      t = i_23;
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm w_23 = NULL;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      if((w_23 != ATgetArgument(t, 1)))
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
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 (ATerm t)
      {
        t = _2_0(_id, m_4, t);
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        ATerm c_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(_id, q_4, t);
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = c_20;
            {
              ATerm m_23 = NULL,n_23 = NULL,p_23 = NULL,q_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_23 = ATgetArgument(t, 0);
                  n_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_23;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_23 = ATgetFirst((ATermList) t);
                  q_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_23), p_23), q_23);
            }
          }
        return(t);
      }
      t = for_3_0(i_4, k_4, l_4, t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      t = diff_1_0(r_4, t);
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      if((t_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      if((z_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = union_1_0(c_5, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = union_1_0(f_5, t);
  return(t);
}
ATerm free_vars_3_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm n_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_24 (ATerm t)
  {
    ATerm f_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_100(t);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = f_20;
        {
          ATerm j_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_23 = NULL,a_24 = NULL,o_4 = NULL,p_4 = NULL;
              x_23 = t;
              t = m_100(t);
              a_24 = t;
              t = x_23;
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm j_4 = NULL;
                  t = f_24(t);
                  j_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_4, a_24);
                  t = diff_0_0(t);
                  return(t);
                }
                t = n_100(s_4, f_24, w_4, t);
                o_4 = t;
                t = SSL_explode_term(o_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_20 = ATgetArgument(t, 0);
                    p_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_4;
                t = foldr_3_0(x_4, y_4, _id, t);
              }
              ;
              LocalPopChoice(l_20);
            }
          else
            {
              t = j_20;
              {
                ATerm u_4 = NULL,v_4 = NULL;
                u_4 = t;
                t = SSL_explode_term(u_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_20 = ATgetArgument(t, 0);
                    v_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_4;
                t = foldr_3_0(d_5, e_5, f_24, t);
              }
            }
        }
      }
    return(t);
  }
  t = f_24(t);
  return(t);
}
ATerm Var_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  k_24 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_24);
  h_24 = t;
  t = i_24;
  t = s_71(t);
  j_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, j_24), h_24);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm n_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_25);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm d_26 = NULL;
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_26 = ATgetArgument(t, 0);
          {
            ATerm r_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_20);
      t = d_26;
    }
  else
    {
      t = o_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_26;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm k_26 = NULL;
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_26 = ATgetArgument(t, 0);
          {
            ATerm u_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_20);
      t = k_26;
    }
  else
    {
      t = s_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_26;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm r_26 = NULL;
  ATerm v_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_26 = ATgetArgument(t, 0);
          {
            ATerm y_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_20);
      t = r_26;
    }
  else
    {
      t = v_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_26;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm z_26 = NULL;
  ATerm z_20 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_26 = ATgetArgument(t, 0);
          {
            ATerm e_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_21);
      t = z_26;
    }
  else
    {
      t = z_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_26;
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm k_27 = NULL;
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_27 = ATgetArgument(t, 0);
          {
            ATerm l_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_21);
      t = k_27;
    }
  else
    {
      t = h_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_27;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm r_27 = NULL;
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_27 = ATgetArgument(t, 0);
          {
            ATerm o_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_21);
      t = r_27;
    }
  else
    {
      t = m_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_27;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm x_27 = NULL;
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_27 = ATgetArgument(t, 0);
          {
            ATerm r_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_21);
      t = x_27;
    }
  else
    {
      t = p_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_27;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm s_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = s_21;
      {
        ATerm p_25 = NULL,r_25 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_25 = ATgetArgument(t, 0);
            t = p_25;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm y_21 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm h_22 = ATgetArgument(t, 0);
                    ATerm i_22 = ATgetArgument(t, 1);
                    r_25 = ATgetArgument(t, 2);
                    {
                      ATerm p_22 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(e_22);
                t = r_25;
                t = map_1_0(j_5, t);
              }
            else
              {
                t = y_21;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm q_22 = ATgetArgument(t, 0);
                    ATerm r_22 = ATgetArgument(t, 1);
                    r_25 = ATgetArgument(t, 2);
                    {
                      ATerm s_22 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = r_25;
                t = map_1_0(k_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm d_27 = NULL,e_27 = NULL;
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm y_22 = ATgetArgument(t, 0);
                e_27 = ATgetArgument(t, 1);
                {
                  ATerm z_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_22);
            t = e_27;
            t = map_1_0(p_5, t);
          }
        else
          {
            t = w_22;
            {
              ATerm b_23 = t;
              int c_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      d_27 = ATgetArgument(t, 0);
                      {
                        ATerm f_23 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_23);
                  t = (ATerm) ATinsert(ATempty, d_27);
                }
              else
                {
                  t = b_23;
                  {
                    ATerm g_23 = t;
                    int j_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm k_23 = ATgetArgument(t, 0);
                            e_27 = ATgetArgument(t, 1);
                            {
                              ATerm l_23 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm o_23 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_23);
                        t = e_27;
                        t = map_1_0(q_5, t);
                      }
                    else
                      {
                        t = g_23;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm r_23 = ATgetArgument(t, 0);
                            e_27 = ATgetArgument(t, 1);
                            {
                              ATerm s_23 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm t_23 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = e_27;
                        t = map_1_0(u_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm c_25 = NULL,i_25 = NULL,k_25 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        i_25 = ATgetArgument(t, 0);
        t = i_25;
        if(match_cons(t, sym_Rule_3))
          {
            c_25 = ATgetArgument(t, 0);
            {
              ATerm u_23 = ATgetArgument(t, 1);
            }
            {
              ATerm v_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_25;
        t = free_vars_3_0(h_5, i_5, tboundin_3_0, t);
      }
    else
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                i_25 = ATgetArgument(t, 0);
                {
                  ATerm b_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(z_23);
            t = i_25;
          }
        else
          {
            t = y_23;
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm e_24 = ATgetArgument(t, 0);
                      ATerm g_24 = ATgetArgument(t, 1);
                      k_25 = ATgetArgument(t, 2);
                      {
                        ATerm l_24 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_24);
                  t = k_25;
                  t = map_1_0(m_5, t);
                }
              else
                {
                  t = c_24;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm m_24 = ATgetArgument(t, 0);
                      ATerm n_24 = ATgetArgument(t, 1);
                      k_25 = ATgetArgument(t, 2);
                      {
                        ATerm o_24 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = k_25;
                  t = map_1_0(n_5, t);
                }
            }
          }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, g_5, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, o_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm _2_0 (ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym__2))
    {
      b_28 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_28);
  a_28 = t;
  t = b_28;
  t = b_66(t);
  g_28 = t;
  t = f_28;
  t = c_66(t);
  h_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, g_28, h_28), a_28);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_28, term_p_24);
  t = open_stream_0_0(t);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, m_28);
  t = l_106(t);
  t = fclose_0_0(t);
  t = m_28;
  return(t);
}
ATerm c_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_24 = ATgetArgument(t, 0);
      if(match_cons(q_24, sym_Stream_1))
        {
          t_28 = ATgetArgument(q_24, 0);
        }
      else
        _fail(t);
      u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(t_28, u_28);
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_28);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,z_28 = NULL,a_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_24 = ATgetArgument(t, 0);
      if(match_cons(r_24, sym_Stream_1))
        {
          w_28 = ATgetArgument(r_24, 0);
        }
      else
        _fail(t);
      x_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(w_28, x_28);
  z_28 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), z_28);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_29);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = fetch_1_0(c_6, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = WriteToFile_1_0(d_6, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = WriteToFile_1_0(f_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  r_28 = t;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm s_24 = t;
      int t_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((s_28 != NULL) && (s_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_5, t);
          ;
          LocalPopChoice(t_24);
        }
      else
        {
          t = s_24;
          t = term_u_24;
          if(((s_28 != NULL) && (s_28 != t)))
            _fail(t);
          else
            s_28 = t;
        }
      return(t);
    }
    t = _2_0(v_5, _id, t);
    t = r_28;
    {
      ATerm x_5 (ATerm t)
      {
        ATerm b_5 = NULL;
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_28), b_5);
        return(t);
      }
      t = _2_0(_id, x_5, t);
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(a_6, b_6, t);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            t = _2_0(_id, e_6, t);
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
ATerm apply_strategy_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  b_29 = t;
  t = dtime_0_0(t);
  t = b_29;
  t = y_102(t);
  c_29 = t;
  t = dtime_0_0(t);
  d_29 = t;
  t = c_29;
  if(match_cons(t, sym__2))
    {
      e_29 = ATgetArgument(t, 0);
      f_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_29), (ATerm) ATmakeAppl(sym_Runtime_1, d_29)), f_29);
  return(t);
}
ATerm b_30 (ATerm r_29, ATerm t)
{
  t = SSL_fclose(r_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL;
  y_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_29 = ATgetArgument(t, 0);
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_29);
            ;
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            t = b_30(y_29, t);
          }
      }
    }
  else
    {
      t = b_30(y_29, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_30 = NULL;
  t = SSL_stdin_stream();
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_30 = NULL;
  t = SSL_stdout_stream();
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_30 = NULL;
  t = SSL_stderr_stream();
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_30);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm m_30 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_30;
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = SSL_is_string(q_30);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_24 = ATgetArgument(t, 0);
      ATerm a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_5 = NULL,s_5 = NULL;
        r_5 = t;
        t = SSL_explode_term(r_5);
        if(match_cons(t, sym__2))
          {
            ATerm e_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_25 = ATgetArgument(t, 1);
              if(((ATgetType(f_25) == AT_LIST) && !(ATisEmpty(f_25))))
                {
                  s_5 = ATgetFirst((ATermList) f_25);
                  {
                    ATerm g_25 = (ATerm) ATgetNext((ATermList) f_25);
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
        LocalPopChoice(d_25);
      }
    else
      {
        t = b_25;
        {
          ATerm h_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
              t = _2_0(h_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_30 = ATgetArgument(t, 0);
                  k_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(j_30, k_30);
              l_30 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, l_30);
              ;
              LocalPopChoice(j_25);
            }
          else
            {
              t = h_25;
              {
                ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
                t = _2_0(j_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_30 = ATgetArgument(t, 0);
                    o_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(n_30, o_30);
                p_30 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, p_30);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,u_30 = NULL;
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_30 = NULL;
      v_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_30, term_o_25);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm t_5 = NULL;
        t_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = t_5;
        _fail(t);
      }
    }
  r_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_30);
  s_30 = t;
  t = r_30;
  t = fclose_0_0(t);
  t = s_30;
  return(t);
}
ATerm fetch_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm c_31 (ATerm t)
  {
    ATerm q_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_91, _id, t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = q_25;
        t = Cons_2_0(_id, c_31, t);
      }
    return(t);
  }
  t = c_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm f_31 = NULL,g_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_31 = ATgetFirst((ATermList) t);
            g_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_31;
        {
          ATerm k_6 (ATerm t)
          {
            t = g_31;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_6, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm m_31 (ATerm t)
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_31, t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_91(t);
      }
    return(t);
  }
  t = m_31(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm p_31 = NULL;
  p_31 = t;
  t = SSL_explode_string(p_31);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm q_31 = NULL;
  q_31 = t;
  t = SSL_explode_string(q_31);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_31 = NULL;
  t = _2_0(l_6, m_6, t);
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_31 = NULL,t_31 = NULL;
        if(match_cons(t, sym__2))
          {
            s_31 = ATgetArgument(t, 0);
            t_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_31;
        {
          ATerm n_6 (ATerm t)
          {
            t = t_31;
            return(t);
          }
          t = at_end_1_0(n_6, t);
        }
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        {
          ATerm y_5 = NULL,z_5 = NULL;
          y_5 = t;
          t = SSL_explode_term(y_5);
          if(match_cons(t, sym__2))
            {
              ATerm z_25 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_25) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_5;
          t = concat_0_0(t);
        }
      }
    o_31 = t;
    t = SSL_implode_string(o_31);
  }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_32 = NULL;
      d_32 = t;
      t = SSL_is_string(d_32);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = c_26;
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_6, t);
            ;
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            {
              ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
              h_32 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_32 = ATgetArgument(t, 0);
                  t = i_32;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_32 = ATgetArgument(t, 0);
                      t = i_32;
                      {
                        ATerm h_26 = t;
                        int i_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_32);
                            {
                              ATerm j_26 = t;
                              int l_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_6 = NULL;
                                  t = eval_config_0_0(t);
                                  v_6 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_32, v_6);
                                  t = v_6;
                                  ;
                                  LocalPopChoice(l_26);
                                }
                              else
                                {
                                  t = j_26;
                                }
                            }
                            ;
                            LocalPopChoice(i_26);
                          }
                        else
                          {
                            t = h_26;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_32), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = i_32;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_32 = NULL,o_32 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_32 = ATgetArgument(t, 0);
                          j_32 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_32;
                      t = eval_config_0_0(t);
                      n_32 = t;
                      t = j_32;
                      t = eval_config_0_0(t);
                      o_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_32, o_32);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_112 (ATerm), ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_32 = NULL,v_32 = NULL;
      t_32 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_7 = NULL;
            t = eval_config_0_0(t);
            c_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_7);
            t = c_7;
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
          }
        v_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_32, term_q_26);
        t = geq_0_0(t);
        t = t_32;
        t = m_112(t);
      }
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  if(match_string(t, "-k"))
    {
      t = x_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_32;
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  y_32 = t;
  t = SSL_string_to_int(y_32);
  z_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_32);
  t = y_32;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_6, q_6, r_6, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  if(match_string(t, "-S"))
    {
      t = b_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_33;
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_u_26;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  c_33 = t;
  t = SSL_string_to_int(c_33);
  d_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_33);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_33);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_26;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_6, t_6, u_6, t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm c_27 = t;
        int f_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_6, x_6, y_6, t);
            ;
            LocalPopChoice(f_27);
          }
        else
          {
            t = c_27;
            t = Option_3_0(z_6, a_7, b_7, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_33 = NULL;
      t = term_e_9;
      t = d_0(t);
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_27, term_h_27, j_33);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_33 = ATgetFirst((ATermList) t);
          i_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_33;
      t = a_0(t);
      t = term_e_9;
      t = c_0(t);
      m_33 = t;
      t = (ATerm) ATinsert(CheckATermList(i_33), m_33);
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  if(match_string(t, "-o"))
    {
      t = o_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_33;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), p_33);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_33);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_7, e_7, f_7, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  if(match_cons(t, sym__3))
    {
      s_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
      u_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_33, t_33);
  {
    ATerm j_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_27 = ATgetArgument(t, 0);
            ATerm n_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_33, t_33);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = j_27;
        t = (ATerm) ATempty;
      }
    v_33 = t;
    t = SSL_table_put(s_33, t_33, (ATerm) ATinsert(CheckATermList(v_33), u_33));
    t = (ATerm) ATmakeAppl(sym__3, s_33, t_33, u_33);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_34 = NULL;
      t = term_e_9;
      t = j_0(t);
      h_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_27, term_h_27, h_34);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_34 = ATgetFirst((ATermList) t);
          e_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_34 = ATgetFirst((ATermList) t);
          g_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_34;
      t = h_0(t);
      t = f_34;
      t = i_0(t);
      l_34 = t;
      t = (ATerm) ATinsert(CheckATermList(g_34), l_34);
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  if(match_string(t, "-i"))
    {
      t = n_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_34;
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_34);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_34);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_7, h_7, m_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_9;
  t = whoami_0_0(t);
  p_34 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), p_34));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        t = eval_config_0_0(t);
        i_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_7);
        t = i_7;
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_96(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      {
        ATerm s_34 = NULL,u_34 = NULL,x_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_34 = ATgetFirst((ATermList) t);
            u_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_34;
        t = foldr_2_0(h_96, i_96, t);
        x_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_34, x_34);
        t = i_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      o_7 = ATgetArgument(t, 0);
      p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(o_7, p_7);
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = SSL_addr(o_7, p_7);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_35 = NULL,j_7 = NULL,k_7 = NULL;
  t = times_0_0(t);
  j_7 = t;
  t = SSL_explode_term(j_7);
  if(match_cons(t, sym__2))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7;
  t = foldr_2_0(n_7, q_7, t);
  a_35 = t;
  t = SSL_TicksToSeconds(a_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
  l_35 = t;
  if(match_cons(t, sym__2))
    {
      m_35 = ATgetArgument(t, 0);
      n_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_35;
        if((m_35 != t))
          {
            _fail(t);
          }
        t = l_35;
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = l_35;
        {
          ATerm c_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_35, n_35);
              ;
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
              t = SSL_gtr(m_35, n_35);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_112 (ATerm), ATerm t)
{
  ATerm e_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_35 = NULL,s_35 = NULL;
      q_35 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_8 = NULL;
            t = eval_config_0_0(t);
            e_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_8);
            t = e_8;
            ;
            LocalPopChoice(o_28);
          }
        else
          {
            t = k_28;
          }
        s_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_35, term_p_28);
        t = geq_0_0(t);
        t = q_35;
        t = l_112(t);
      }
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = e_28;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  t = run_time_0_0(t);
  u_35 = t;
  t = term_e_9;
  t = whoami_0_0(t);
  v_35 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_35), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_35));
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_29), u_35), term_y_28), v_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_8 = NULL;
            t = eval_config_0_0(t);
            i_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), i_8);
            t = i_8;
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
          }
      }
      ;
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm s_7 (ATerm t)
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              {
                ATerm n_29 = t;
                int o_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(o_29);
                  }
                else
                  {
                    t = n_29;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(s_7, t);
      }
    }
  t = w_103(t);
  return(t);
}
ATerm map_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  ATerm w_35 (ATerm t)
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        t = Cons_2_0(h_91, w_35, t);
      }
    return(t);
  }
  t = w_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_35 = ATgetFirst((ATermList) t);
      z_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_36 = NULL,e_36 = NULL;
        t = z_35;
        t = g_0(t);
        d_36 = t;
        t = y_35;
        t = e_0(t);
        e_36 = t;
        t = z_35;
        {
          ATerm t_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_36), e_36);
            return(t);
          }
          t = reverse_acc_2_0(e_0, t_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_9;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  i_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_36);
  f_36 = t;
  t = g_36;
  t = u_82(t);
  h_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_36), f_36);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_36), term_s_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 = NULL;
            t = eval_config_0_0(t);
            n_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_8);
            t = n_8;
            ;
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
          }
      }
      ;
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm v_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(v_7, t);
      }
    }
  t = term_z_29;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, w_7, t);
  t = map_1_0(x_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,u_36 = NULL;
  u_36 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_36);
  p_36 = t;
  t = q_36;
  t = v_82(t);
  r_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_36), p_36);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  a_37 = t;
  {
    ATerm a_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_30 = ATgetFirst((ATermList) t);
                ATerm h_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_37;
          }
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = a_30;
        t = (ATerm) ATinsert(ATempty, a_37);
      }
    b_37 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_37);
    t = a_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm i_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL;
        t = eval_config_0_0(t);
        s_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_8);
        t = s_8;
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = i_30;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_30;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_31;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_b_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_7, z_7, a_8, t);
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      t = Option_3_0(c_8, d_8, f_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  n_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_37 = ATgetFirst((ATermList) t);
      k_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_37);
  f_37 = t;
  t = j_37;
  t = q_70(t);
  l_37 = t;
  t = k_37;
  t = r_70(t);
  m_37 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(m_37), l_37), f_37);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_37);
  t = (ATerm) ATmakeAppl(sym_Program_1, s_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_31;
        t = s_108(t);
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
      }
    t = r_37;
    {
      ATerm h_8 (ATerm t)
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_31 = t;
            int r_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_31);
              }
            else
              {
                t = n_31;
                t = s_108(t);
                t = Cons_2_0(_id, h_8, t);
              }
            ;
            LocalPopChoice(l_31);
          }
        else
          {
            t = k_31;
            {
              ATerm u_37 = NULL,v_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_37 = ATgetFirst((ATermList) t);
                  v_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_37), (ATerm) ATmakeAppl(sym_Undefined_1, u_37));
            }
          }
        return(t);
      }
      t = Cons_2_0(g_8, h_8, t);
    }
  }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm h_38 = NULL;
  h_38 = t;
  if(match_string(t, "--help"))
    {
      t = h_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_38;
        }
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_31;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm p_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_108 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  e_38 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = e_38;
  {
    ATerm j_8 (ATerm t)
    {
      ATerm w_31 = t;
      int x_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_108(t);
          ;
          LocalPopChoice(x_31);
        }
      else
        {
          t = w_31;
          {
            ATerm y_31 = t;
            int z_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_8, m_8, o_8, t);
                ;
                LocalPopChoice(z_31);
              }
            else
              {
                t = y_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_8, t);
    {
      ATerm a_32 = t;
      int b_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_38 = NULL;
          m_38 = t;
          {
            ATerm c_32 = t;
            int e_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_38;
                {
                  ATerm f_32 = t;
                  int g_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm k_32 = t;
                        int l_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_9 = NULL;
                            t = eval_config_0_0(t);
                            o_9 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), o_9);
                            t = o_9;
                            ;
                            LocalPopChoice(l_32);
                          }
                        else
                          {
                            t = k_32;
                          }
                      }
                      ;
                      LocalPopChoice(g_32);
                    }
                  else
                    {
                      t = f_32;
                      t = fetch_1_0(p_8, t);
                    }
                  t = m_38;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(e_32);
              }
            else
              {
                t = c_32;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm m_32 = t;
                  int p_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_10 = NULL;
                      t = eval_config_0_0(t);
                      e_10 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), e_10);
                      t = e_10;
                      ;
                      LocalPopChoice(p_32);
                    }
                  else
                    {
                      t = m_32;
                    }
                  t = m_38;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(b_32);
        }
      else
        {
          t = a_32;
          {
            ATerm q_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_8 (ATerm t)
                {
                  ATerm t_8 (ATerm t)
                  {
                    if(((f_38 != NULL) && (f_38 != t)))
                      _fail(t);
                    else
                      f_38 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_8, t);
                  return(t);
                }
                t = fetch_1_0(q_8, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_38)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_q_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_38)), term_s_32));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(r_32);
              }
            else
              {
                t = q_32;
              }
          }
        }
      g_38 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = g_38;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t)
{
  ATerm p_38 = NULL;
  t = parse_options_1_0(y_103, t);
  p_38 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), p_38);
  t = p_38;
  t = a_104(t);
  {
    ATerm u_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_103, t);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = u_32;
        {
          ATerm a_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_104(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_33);
            }
          else
            {
              t = a_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_33;
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  q_38 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL;
        t = eval_config_0_0(t);
        n_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_10);
        t = n_10;
        ;
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
      }
    r_38 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, r_38));
    t = q_38;
  }
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = if_verbose2_1_0(b_9, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm t)
{
  ATerm u_8 (ATerm t)
  {
    ATerm n_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_103(t);
        ;
        LocalPopChoice(q_33);
      }
    else
      {
        t = n_33;
        {
          ATerm r_33 = t;
          int w_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(w_33);
            }
          else
            {
              t = r_33;
              {
                ATerm x_33 = t;
                int y_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(y_33);
                  }
                else
                  {
                    t = x_33;
                    {
                      ATerm z_33 = t;
                      int a_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_8, z_8, a_9, t);
                          ;
                          LocalPopChoice(a_34);
                        }
                      else
                        {
                          t = z_33;
                          {
                            ATerm b_34 = t;
                            int c_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_34);
                              }
                            else
                              {
                                t = b_34;
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
  ATerm w_8 (ATerm t)
  {
    ATerm s_38 = NULL,t_38 = NULL,y_10 = NULL;
    s_38 = t;
    {
      ATerm i_34 = t;
      int j_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_38 != NULL) && (t_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_9, t);
          ;
          LocalPopChoice(j_34);
        }
      else
        {
          t = i_34;
          t = term_k_34;
          t_38 = t;
        }
      t = not_null(t_38);
      t = ReadFromFile_0_0(t);
      y_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_38, y_10);
      t = apply_strategy_1_0(h_103, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(u_8, j_103, v_8, w_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm d_9 (ATerm t)
  {
    t = _2_0(_id, strename_0_0, t);
    return(t);
  }
  t = iowrap_3_0(d_9, _fail, default_usage_0_0, t);
  return(t);
}
