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
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToBuild_1;
Symbol sym_FromApp_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_WithAnno_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
Symbol sym_Anno_2;
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
Symbol sym_Cong_2;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Anno_2;
Symbol sym_RootApp_1;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Build_1;
Symbol sym_Path_2;
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
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
  ATprotectSymbol(sym_FromApp_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_WithAnno_2 = ATmakeSymbol("WithAnno", 2, ATfalse);
  ATprotectSymbol(sym_WithAnno_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_n_21;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_p_18;
ATerm term_j_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_p_17;
ATerm term_h_17;
ATerm term_x_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_r_13;
ATerm term_h_13;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_i_11;
ATerm term_k_10;
ATerm term_d_9;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
void init_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Cong_2, term_n_8, (ATerm) ATempty);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Op_2, term_n_8, (ATerm) ATempty);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__3, term_r_13, term_w_17, term_s_7);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm n_0 (ATerm c_0, ATerm);
ATerm t_1 (ATerm p_0, ATerm);
ATerm str_explode_0_0 (ATerm);
ATerm o_0 (ATerm z_1, ATerm);
ATerm v_0 (ATerm n_2, ATerm p_2, ATerm);
ATerm foldr_3_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm);
ATerm h_2 (ATerm);
ATerm b_1 (ATerm m_3, ATerm n_3, ATerm);
ATerm c_1 (ATerm b_4, ATerm e_4, ATerm);
ATerm e_1 (ATerm t_4, ATerm);
ATerm trm_explode_0_0 (ATerm);
ATerm alltd_1_0 (ATerm k_86 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm MetaExplode_0_0 (ATerm);
ATerm f_1 (ATerm w_64 (ATerm), ATerm x_64 (ATerm), ATerm q_6, ATerm l_6, ATerm n_6, ATerm);
ATerm g_1 (ATerm a_103 (ATerm), ATerm t_6, ATerm x_6, ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm l_1 (ATerm b_7, ATerm);
ATerm dtime_0_0 (ATerm);
ATerm m_1 (ATerm c_106 (ATerm), ATerm m_7, ATerm);
ATerm e_8 (ATerm y_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm g_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm o_1 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm l_9, ATerm);
ATerm fetch_1_0 (ATerm t_90 (ATerm), ATerm);
ATerm p_1 (ATerm y_102 (ATerm), ATerm t_9, ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm r_1 (ATerm j_11, ATerm);
ATerm if_verbose2_1_0 (ATerm l_104 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_1 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm z_12, ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm q_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_1 (ATerm s_13, ATerm t_13, ATerm u_13, ATerm);
ATerm v_1 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_14, ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm c_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_104 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm need_help_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm x_1 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm n_17, ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm p_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm c_2 (ATerm r_18, ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm);
ATerm d_2 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm m_19, ATerm i_19, ATerm j_19, ATerm);
ATerm z_5 (ATerm);
ATerm e_2 (ATerm d_109 (ATerm), ATerm t_19, ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm k_6 (ATerm);
ATerm g_2 (ATerm c_109 (ATerm), ATerm m_20, ATerm);
ATerm option_wrap_4_0 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm iowrap_3_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm r_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm n_0 (ATerm c_0, ATerm t)
{
  ATerm e_0 = NULL,k_0 = NULL,l_0 = NULL,m_0 = NULL;
  t = term_s_7;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_t_7;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_7), e_0), term_u_7);
  l_0 = t;
  t = SSL_printnl(k_0, l_0);
  t = term_w_7;
  m_0 = t;
  t = SSL_exit(m_0);
  t = c_0;
  return(t);
}
ATerm t_1 (ATerm p_0, ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL;
  t = p_0;
  r_0 = t;
  t = SSL_explode_term(r_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      t_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_0;
  t = map_1_0(str_explode_0_0, t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, s_0, u_0);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm w_0 = NULL,y_0 = NULL,z_0 = NULL;
  z_0 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      w_0 = ATgetArgument(t, 0);
      {
        ATerm x_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_0), (ATerm) ATempty);
            ;
            LocalPopChoice(z_7);
          }
        else
          {
            t = x_7;
            t = t_1(z_0, t);
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          w_0 = ATgetArgument(t, 0);
          {
            ATerm d_8 = t;
            int f_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_0;
                t = MetaExplode_0_0(t);
                ;
                LocalPopChoice(f_8);
              }
            else
              {
                t = d_8;
                t = t_1(z_0, t);
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              w_0 = ATgetArgument(t, 0);
              {
                ATerm g_8 = t;
                int h_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_0;
                    t = MetaExplode_0_0(t);
                    ;
                    LocalPopChoice(h_8);
                  }
                else
                  {
                    t = g_8;
                    t = t_1(z_0, t);
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm l_8 = t;
                  int m_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_8;
                      ;
                      LocalPopChoice(m_8);
                    }
                  else
                    {
                      t = l_8;
                      t = t_1(z_0, t);
                    }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_0 = ATgetFirst((ATermList) t);
                      y_0 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm s_8 = t;
                        int w_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_1 = NULL,q_1 = NULL;
                            t = w_0;
                            t = str_explode_0_0(t);
                            k_1 = t;
                            t = y_0;
                            t = str_explode_0_0(t);
                            q_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Cong_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, q_1), k_1));
                            ;
                            LocalPopChoice(w_8);
                          }
                        else
                          {
                            t = s_8;
                            t = t_1(z_0, t);
                          }
                      }
                    }
                  else
                    {
                      t = t_1(z_0, t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm o_0 (ATerm z_1, ATerm t)
{
  ATerm a_2 = NULL,f_2 = NULL,j_2 = NULL,m_2 = NULL;
  a_2 = t;
  t = SSL_explode_term(a_2);
  if(match_cons(t, sym__2))
    {
      f_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_2;
  t = map_1_0(trm_explode_0_0, t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, f_2, m_2);
  return(t);
}
ATerm v_0 (ATerm n_2, ATerm p_2, ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL;
  t = n_2;
  t = trm_explode_0_0(t);
  q_2 = t;
  t = p_2;
  t = trm_explode_0_0(t);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, r_2), q_2));
  return(t);
}
ATerm foldr_3_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm k_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_96(t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = k_9;
      {
        ATerm a_3 = NULL,b_3 = NULL,e_3 = NULL,f_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_3 = ATgetFirst((ATermList) t);
            b_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_3;
        t = q_96(t);
        e_3 = t;
        t = b_3;
        t = foldr_3_0(o_96, p_96, q_96, t);
        f_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_3, f_3);
        t = p_96(t);
      }
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm x_3 = NULL,x_2 = NULL,y_2 = NULL,k_3 = NULL,l_3 = NULL;
  x_3 = t;
  x_2 = t;
  t = SSL_explode_term(x_2);
  if(match_cons(t, sym__2))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
          {
            y_2 = ATgetFirst((ATermList) s_9);
            {
              ATerm x_9 = (ATerm) ATgetNext((ATermList) s_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_3;
  k_3 = t;
  t = SSL_explode_term(k_3);
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_9 = ATgetArgument(t, 1);
        if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
          {
            ATerm a_10 = ATgetFirst((ATermList) z_9);
            ATerm b_10 = (ATerm) ATgetNext((ATermList) z_9);
            if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
              {
                l_3 = ATgetFirst((ATermList) b_10);
                {
                  ATerm c_10 = (ATerm) ATgetNext((ATermList) b_10);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, l_3), y_2));
  return(t);
}
ATerm b_1 (ATerm m_3, ATerm n_3, ATerm t)
{
  t = m_3;
  {
    ATerm e_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_3 = NULL;
        if(match_cons(t, sym_meta_listvar_1))
          {
            p_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, p_3)));
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = e_10;
      }
    {
      ATerm b_2 (ATerm t)
      {
        t = n_3;
        {
          ATerm h_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_3 = NULL;
              if(match_cons(t, sym_meta_listvar_1))
                {
                  v_3 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, term_k_10), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, v_3))));
              ;
              LocalPopChoice(j_10);
            }
          else
            {
              t = h_10;
              t = trm_explode_0_0(t);
            }
        }
        return(t);
      }
      t = foldr_3_0(b_2, h_2, trm_explode_0_0, t);
    }
  }
  return(t);
}
ATerm c_1 (ATerm b_4, ATerm e_4, ATerm t)
{
  ATerm f_4 = NULL,j_4 = NULL;
  t = b_4;
  t = trm_explode_0_0(t);
  f_4 = t;
  t = e_4;
  t = MetaExplode_0_0(t);
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym_Anno_2, f_4, j_4);
  return(t);
}
ATerm e_1 (ATerm t_4, ATerm t)
{
  ATerm s_4 = NULL;
  t = SSL_is_string(t_4);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, s_4);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          h_5 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, h_5);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              h_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, term_k_10), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, h_5))));
        }
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 = NULL;
            t_3 = t;
            t = e_1(t_3, t);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            {
              ATerm q_10 = t;
              int s_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_5 = NULL;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      o_5 = ATgetArgument(t, 0);
                      t = o_5;
                      t = MetaExplode_0_0(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          o_5 = ATgetArgument(t, 0);
                          {
                            ATerm t_5 = NULL;
                            t = o_5;
                            t = MetaExplode_0_0(t);
                            t_5 = t;
                            t = (ATerm) ATmakeAppl(sym_RootApp_1, t_5);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              o_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = o_5;
                          t = MetaExplode_0_0(t);
                        }
                    }
                  ;
                  LocalPopChoice(s_10);
                }
              else
                {
                  t = q_10;
                  {
                    ATerm t_10 = t;
                    int u_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_4 = NULL,g_4 = NULL;
                        if(match_cons(t, sym_WithAnno_2))
                          {
                            d_4 = ATgetArgument(t, 0);
                            g_4 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = c_1(d_4, g_4, t);
                        ;
                        LocalPopChoice(u_10);
                      }
                    else
                      {
                        t = t_10;
                        {
                          ATerm v_10 = t;
                          int w_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_4 = NULL,l_4 = NULL;
                              if(match_cons(t, sym_Conc_2))
                                {
                                  k_4 = ATgetArgument(t, 0);
                                  l_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = b_1(k_4, l_4, t);
                              ;
                              LocalPopChoice(w_10);
                            }
                          else
                            {
                              t = v_10;
                              {
                                ATerm x_10 = t;
                                int d_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = term_k_10;
                                    ;
                                    LocalPopChoice(d_11);
                                  }
                                else
                                  {
                                    t = x_10;
                                    {
                                      ATerm e_11 = t;
                                      int f_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_4 = NULL,p_4 = NULL;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              o_4 = ATgetFirst((ATermList) t);
                                              p_4 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = v_0(o_4, p_4, t);
                                          ;
                                          LocalPopChoice(f_11);
                                        }
                                      else
                                        {
                                          t = e_11;
                                          {
                                            ATerm r_4 = NULL;
                                            r_4 = t;
                                            t = o_0(r_4, t);
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
ATerm alltd_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_86(t);
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = SRTS_all(x_5, t);
      }
    return(t);
  }
  t = x_5(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm a_6 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      a_6 = ATgetArgument(t, 0);
      t = a_6;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          a_6 = ATgetArgument(t, 0);
          {
            ATerm e_6 = NULL;
            t = a_6;
            t = trm_explode_0_0(t);
            e_6 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, e_6);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              a_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_6;
          t = str_explode_0_0(t);
        }
    }
  return(t);
}
ATerm MetaExplode_0_0 (ATerm t)
{
  t = alltd_1_0(i_2, t);
  return(t);
}
ATerm f_1 (ATerm w_64 (ATerm), ATerm x_64 (ATerm), ATerm q_6, ATerm l_6, ATerm n_6, ATerm t)
{
  ATerm i_6 = NULL,o_6 = NULL,p_6 = NULL,q_0 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(q_6);
  i_6 = t;
  t = l_6;
  t = w_64(t);
  o_6 = t;
  t = n_6;
  t = x_64(t);
  p_6 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_6, p_6);
  q_0 = t;
  t = SSLsetAnnotations(q_0, i_6);
  return(t);
}
ATerm g_1 (ATerm a_103 (ATerm), ATerm t_6, ATerm x_6, ATerm t)
{
  ATerm z_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_6, term_i_11);
  t = open_stream_0_0(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_6, x_6);
  t = a_103(t);
  t = fclose_0_0(t);
  t = x_6;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = fetch_1_0(v_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm g_6 = NULL,j_6 = NULL;
  if(match_cons(t, sym__2))
    {
      g_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_1(w_2, g_6, j_6, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm m_6 = NULL,u_6 = NULL,v_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      if(match_cons(u_11, sym_Stream_1))
        {
          m_6 = ATgetArgument(u_11, 0);
        }
      else
        _fail(t);
      u_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(m_6, u_6);
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_6);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm o_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_1(c_3, o_8, r_8, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm t_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,g_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_11 = ATgetArgument(t, 0);
      if(match_cons(x_11, sym_Stream_1))
        {
          t_8 = ATgetArgument(x_11, 0);
        }
      else
        _fail(t);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(t_8, z_8);
  a_9 = t;
  t = term_y_11;
  b_9 = t;
  t = a_9;
  g_9 = t;
  t = SSL_fputc(b_9, g_9);
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_9);
  return(t);
}
ATerm l_1 (ATerm b_7, ATerm t)
{
  ATerm c_7 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  u_4 = t;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm z_11 = t;
      int a_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_7 != NULL) && (c_7 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_7 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_2, t);
          ;
          LocalPopChoice(a_12);
        }
      else
        {
          t = z_11;
          t = term_b_12;
          if(((c_7 != NULL) && (c_7 != t)))
            _fail(t);
          else
            c_7 = t;
        }
      return(t);
    }
    t = f_1(k_2, _id, u_4, v_4, w_4, t);
    t = b_7;
    z_4 = t;
    if(match_cons(t, sym__2))
      {
        a_5 = ATgetArgument(t, 0);
        b_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm o_2 (ATerm t)
      {
        ATerm e_5 = NULL;
        ATerm s_2 (ATerm t)
        {
          t = not_null(c_7);
          return(t);
        }
        if(((e_5 != NULL) && (e_5 != t)))
          _fail(t);
        else
          e_5 = t;
        t = o_1(s_2, _id, not_null(e_5), t);
        return(t);
      }
      t = f_1(_id, o_2, z_4, a_5, b_5, t);
      {
        ATerm c_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 = NULL,n_5 = NULL,r_5 = NULL;
            l_5 = t;
            if(match_cons(t, sym__2))
              {
                n_5 = ATgetArgument(t, 0);
                r_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_1(t_2, u_2, l_5, n_5, r_5, t);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = c_12;
            {
              ATerm w_6 = NULL,y_6 = NULL,a_7 = NULL;
              w_6 = t;
              if(match_cons(t, sym__2))
                {
                  y_6 = ATgetArgument(t, 0);
                  a_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_1(_id, z_2, w_6, y_6, a_7, t);
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
ATerm m_1 (ATerm c_106 (ATerm), ATerm m_7, ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  t = dtime_0_0(t);
  t = m_7;
  t = c_106(t);
  n_7 = t;
  t = dtime_0_0(t);
  o_7 = t;
  t = n_7;
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_7), (ATerm) ATmakeAppl(sym_Runtime_1, o_7)), q_7);
  return(t);
}
ATerm e_8 (ATerm y_7, ATerm t)
{
  ATerm a_8 = NULL;
  t = y_7;
  a_8 = t;
  t = SSL_fclose(a_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  c_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_8 = ATgetArgument(t, 0);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_9 = NULL;
            t = b_8;
            p_9 = t;
            t = SSL_fclose(p_9);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = e_8(c_8, t);
          }
      }
    }
  else
    {
      t = e_8(c_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  t = SSL_stdin_stream();
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_8 = NULL;
  t = SSL_stdout_stream();
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  t = SSL_stderr_stream();
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_8);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm p_11 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      p_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm d_12 = NULL;
  d_12 = t;
  t = SSL_is_string(d_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      ATerm j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL,f_10 = NULL,p_10 = NULL;
        d_10 = t;
        f_10 = t;
        t = SSL_explode_term(f_10);
        if(match_cons(t, sym__2))
          {
            ATerm m_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_12 = ATgetArgument(t, 1);
              if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
                {
                  p_10 = ATgetFirst((ATermList) n_12);
                  {
                    ATerm q_12 = (ATerm) ATgetNext((ATermList) n_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_10;
        if(match_cons(t, sym_stderr_0))
          {
            t = p_10;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = p_10;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = p_10;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_8 = NULL,u_8 = NULL,v_8 = NULL,r_10 = NULL,b_11 = NULL,c_11 = NULL;
              r_10 = t;
              if(match_cons(t, sym__2))
                {
                  b_11 = ATgetArgument(t, 0);
                  c_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_1(d_3, _id, r_10, b_11, c_11, t);
              if(match_cons(t, sym__2))
                {
                  q_8 = ATgetArgument(t, 0);
                  u_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(q_8, u_8);
              v_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, v_8);
              ;
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              {
                ATerm x_8 = NULL,y_8 = NULL,c_9 = NULL,q_11 = NULL,r_11 = NULL,w_11 = NULL;
                q_11 = t;
                if(match_cons(t, sym__2))
                  {
                    r_11 = ATgetArgument(t, 0);
                    w_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_1(g_3, _id, q_11, r_11, w_11, t);
                if(match_cons(t, sym__2))
                  {
                    x_8 = ATgetArgument(t, 0);
                    y_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(x_8, y_8);
                c_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,i_9 = NULL;
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9 = NULL;
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, term_w_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm h_12 = NULL;
        h_12 = t;
        t = p_1(h_3, h_12, t);
        _fail(t);
      }
    }
  e_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_9);
  f_9 = t;
  t = e_9;
  t = fclose_0_0(t);
  t = f_9;
  return(t);
}
ATerm o_1 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm l_9, ATerm t)
{
  ATerm m_9 = NULL,q_9 = NULL;
  t = b_98(t);
  m_9 = t;
  t = l_9;
  t = c_98(t);
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, q_9);
  return(t);
}
ATerm fetch_1_0 (ATerm t_90 (ATerm), ATerm t)
{
  ATerm r_9 (ATerm t)
  {
    ATerm x_12 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_12 = NULL,p_12 = NULL,y_12 = NULL;
        o_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_12 = ATgetFirst((ATermList) t);
            y_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_2(t_90, _id, o_12, p_12, y_12, t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = x_12;
        {
          ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
          n_13 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_13 = ATgetFirst((ATermList) t);
              p_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_2(_id, r_9, n_13, o_13, p_13, t);
        }
      }
    return(t);
  }
  t = r_9(t);
  return(t);
}
ATerm p_1 (ATerm y_102 (ATerm), ATerm t_9, ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
  t = y_102(t);
  u_9 = t;
  t = term_t_7;
  v_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_9), u_9);
  w_9 = t;
  t = SSL_printnl(v_9, w_9);
  t = t_9;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_10 = NULL,i_14 = NULL;
      i_10 = t;
      i_14 = t;
      t = SSL_is_string(i_14);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_3, t);
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            {
              ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
              y_10 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_10 = ATgetArgument(t, 0);
                  t = z_10;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_10 = ATgetArgument(t, 0);
                      t = z_10;
                      {
                        ATerm m_13 = t;
                        int q_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_15 = NULL;
                            g_15 = t;
                            t = r_1(g_15, t);
                            ;
                            LocalPopChoice(q_13);
                          }
                        else
                          {
                            t = m_13;
                            {
                              ATerm h_15 = NULL;
                              h_15 = t;
                              t = p_1(j_3, h_15, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,w_16 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_10 = ATgetArgument(t, 0);
                          a_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_10;
                      t = eval_config_0_0(t);
                      k_16 = t;
                      t = a_11;
                      t = eval_config_0_0(t);
                      l_16 = t;
                      t = k_16;
                      m_16 = t;
                      t = l_16;
                      w_16 = t;
                      t = SSL_strcat(m_16, w_16);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_1 (ATerm j_11, ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  t = term_r_13;
  k_11 = t;
  t = j_11;
  l_11 = t;
  t = SSL_table_get(k_11, l_11);
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,s_11 = NULL;
        t = eval_config_0_0(t);
        m_11 = t;
        t = term_r_13;
        n_11 = t;
        t = j_11;
        o_11 = t;
        t = m_11;
        s_11 = t;
        t = SSL_table_put(n_11, o_11, s_11);
        t = m_11;
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_11 = NULL,v_11 = NULL,j_17 = NULL;
      t_11 = t;
      t = term_d_14;
      j_17 = t;
      t = r_1(j_17, t);
      v_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_11, term_e_14);
      t = geq_0_0(t);
      t = t_11;
      t = l_104(t);
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm z_17 = NULL;
  z_17 = t;
  if(match_string(t, "-k"))
    {
      t = z_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_17;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm a_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,k_18 = NULL,q_18 = NULL;
  a_18 = t;
  h_18 = t;
  t = SSL_string_to_int(h_18);
  g_18 = t;
  t = term_r_13;
  i_18 = t;
  t = term_f_14;
  k_18 = t;
  t = g_18;
  q_18 = t;
  t = SSL_table_put(i_18, k_18, q_18);
  t = a_18;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm k_17 = NULL;
  k_17 = t;
  t = v_1(o_3, q_3, r_3, k_17, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  if(match_string(t, "-S"))
    {
      t = v_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_19;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm w_19 = NULL,c_20 = NULL,d_20 = NULL;
  t = term_r_13;
  w_19 = t;
  t = term_d_14;
  c_20 = t;
  t = term_h_14;
  d_20 = t;
  t = SSL_table_put(w_19, c_20, d_20);
  t = term_j_14;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,s_20 = NULL,t_20 = NULL,w_20 = NULL;
  o_20 = t;
  q_20 = t;
  t = SSL_string_to_int(q_20);
  p_20 = t;
  t = term_r_13;
  s_20 = t;
  t = term_d_14;
  t_20 = t;
  t = p_20;
  w_20 = t;
  t = SSL_table_put(s_20, t_20, w_20);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_20);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm j_21 = NULL,m_21 = NULL,p_21 = NULL;
  t = term_r_13;
  j_21 = t;
  t = term_p_14;
  m_21 = t;
  t = term_s_7;
  p_21 = t;
  t = SSL_table_put(j_21, m_21, p_21);
  t = term_q_14;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_19 = NULL;
      p_19 = t;
      t = s_1(s_3, u_3, w_3, p_19, t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_20 = NULL;
            e_20 = t;
            t = v_1(y_3, z_3, a_4, e_20, t);
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            {
              ATerm y_20 = NULL;
              y_20 = t;
              t = s_1(c_4, h_4, i_4, y_20, t);
            }
          }
      }
    }
  return(t);
}
ATerm s_1 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm z_12, ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_13 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
      t = term_s_7;
      t = d_0(t);
      c_13 = t;
      t = term_z_14;
      n_22 = t;
      t = term_a_15;
      o_22 = t;
      t = c_13;
      p_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, c_13);
      t = u_1(n_22, o_22, p_22, t);
      _fail(t);
    }
  else
    {
      ATerm g_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_13 = ATgetFirst((ATermList) t);
          b_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_13;
      t = a_0(t);
      t = term_s_7;
      t = b_0(t);
      g_13 = t;
      t = (ATerm) ATinsert(CheckATermList(b_13), g_13);
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  if(match_string(t, "-o"))
    {
      t = u_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_22;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  v_22 = t;
  t = term_r_13;
  w_22 = t;
  t = term_c_15;
  x_22 = t;
  t = v_22;
  y_22 = t;
  t = SSL_table_put(w_22, x_22, y_22);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_22);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_d_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = v_1(m_4, n_4, q_4, q_22, t);
  return(t);
}
ATerm u_1 (ATerm s_13, ATerm t_13, ATerm u_13, ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_13, t_13);
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL,c_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_15 = ATgetArgument(t, 0);
            ATerm j_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_13;
        b_23 = t;
        t = t_13;
        c_23 = t;
        t = SSL_table_get(b_23, c_23);
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = (ATerm) ATempty;
      }
    v_13 = t;
    t = s_13;
    w_13 = t;
    t = t_13;
    x_13 = t;
    t = (ATerm) ATinsert(CheckATermList(v_13), u_13);
    y_13 = t;
    t = SSL_table_put(w_13, x_13, y_13);
    t = (ATerm) ATmakeAppl(sym__3, s_13, t_13, u_13);
  }
  return(t);
}
ATerm v_1 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm l_14, ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,r_14 = NULL,t_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_14 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
      t = term_s_7;
      t = j_0(t);
      u_14 = t;
      t = term_z_14;
      i_23 = t;
      t = term_a_15;
      j_23 = t;
      t = u_14;
      k_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, u_14);
      t = u_1(i_23, j_23, k_23, t);
      _fail(t);
    }
  else
    {
      ATerm b_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_14 = ATgetFirst((ATermList) t);
          o_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_14 = ATgetFirst((ATermList) t);
          t_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_14;
      t = h_0(t);
      t = r_14;
      t = i_0(t);
      b_15 = t;
      t = (ATerm) ATinsert(CheckATermList(t_14), b_15);
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm p_23 = NULL;
  p_23 = t;
  if(match_string(t, "-i"))
    {
      t = p_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_23;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  q_23 = t;
  t = term_r_13;
  r_23 = t;
  t = term_k_15;
  s_23 = t;
  t = q_23;
  t_23 = t;
  t = SSL_table_put(r_23, s_23, t_23);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_23);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  t = v_1(x_4, y_4, c_5, l_23, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_7;
  t = whoami_0_0(t);
  m_15 = t;
  t = term_t_7;
  n_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_15), m_15);
  o_15 = t;
  t = SSL_printnl(n_15, o_15);
  t = term_w_7;
  p_15 = t;
  t = SSL_exit(p_15);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  t = term_r_15;
  v_23 = t;
  t = r_1(v_23, t);
  return(t);
}
ATerm foldr_2_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm t)
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_96(t);
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        ATerm s_15 = NULL,t_15 = NULL,w_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_15 = ATgetFirst((ATermList) t);
            t_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_15;
        t = foldr_2_0(m_96, n_96, t);
        w_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_15, w_15);
        t = n_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_h_14;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_24, n_24);
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        t = SSL_addr(m_24, n_24);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_16 = NULL,c_24 = NULL,i_24 = NULL,j_24 = NULL;
  t = times_0_0(t);
  c_24 = t;
  i_24 = t;
  t = SSL_explode_term(i_24);
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      j_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_24;
  t = foldr_2_0(d_5, f_5, t);
  a_16 = t;
  t = SSL_TicksToSeconds(a_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_16;
        if((q_16 != t))
          {
            _fail(t);
          }
        t = p_16;
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        {
          ATerm s_24 = NULL,t_24 = NULL;
          t = q_16;
          s_24 = t;
          t = r_16;
          t_24 = t;
          t = p_16;
          {
            ATerm d_16 = t;
            int e_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(s_24, t_24);
                ;
                LocalPopChoice(e_16);
              }
            else
              {
                t = d_16;
                t = SSL_gtr(s_24, t_24);
              }
            t = (ATerm) ATmakeAppl(sym__2, q_16, r_16);
          }
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_16 = NULL,z_16 = NULL,y_24 = NULL;
      u_16 = t;
      t = term_d_14;
      y_24 = t;
      t = r_1(y_24, t);
      z_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_16, term_w_7);
      t = geq_0_0(t);
      t = u_16;
      t = k_104(t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  t = run_time_0_0(t);
  b_17 = t;
  t = term_s_7;
  t = whoami_0_0(t);
  c_17 = t;
  t = term_t_7;
  d_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_16), b_17), term_h_16), c_17);
  e_17 = t;
  t = SSL_printnl(d_17, e_17);
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_16), b_17), term_h_16), c_17));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_14;
  f_17 = t;
  t = SSL_exit(f_17);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm j_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = j_16;
      {
        ATerm o_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_25 = NULL,c_25 = NULL,e_25 = NULL,l_25 = NULL,g_25 = NULL,h_25 = NULL,a_1 = NULL,d_1 = NULL;
            b_25 = t;
            if(match_cons(t, sym_Undefined_1))
              {
                c_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            l_25 = t;
            t = b_25;
            e_25 = t;
            t = SSLgetAnnotations(e_25);
            g_25 = t;
            t = c_25;
            h_25 = t;
            d_1 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_25);
            a_1 = t;
            t = SSLsetAnnotations(a_1, g_25);
            ;
            LocalPopChoice(s_16);
          }
        else
          {
            t = o_16;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm t_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_25 = NULL;
      t = term_x_16;
      a_25 = t;
      t = r_1(a_25, t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = t_16;
      t = fetch_1_0(i_5, t);
    }
  t = a_107(t);
  return(t);
}
ATerm map_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm g_17 (ATerm t)
  {
    ATerm y_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = y_16;
        {
          ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
          n_25 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_25 = ATgetFirst((ATermList) t);
              p_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_2(j_90, g_17, n_25, o_25, p_25, t);
        }
      }
    return(t);
  }
  t = g_17(t);
  return(t);
}
ATerm x_1 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm n_17, ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_17 = ATgetFirst((ATermList) t);
      m_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_17 = NULL,r_17 = NULL,s_25 = NULL;
        t = m_17;
        t = g_0(t);
        q_17 = t;
        t = l_17;
        t = f_0(t);
        r_17 = t;
        t = m_17;
        s_25 = t;
        {
          ATerm j_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_17), r_17);
            return(t);
          }
          t = x_1(f_0, j_5, s_25, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_7;
      t = g_0(t);
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,j_26 = NULL,q_26 = NULL,l_26 = NULL,m_26 = NULL,h_1 = NULL,i_1 = NULL;
  g_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  q_26 = t;
  t = g_26;
  j_26 = t;
  t = SSLgetAnnotations(j_26);
  l_26 = t;
  t = h_26;
  m_26 = t;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_26);
  h_1 = t;
  t = SSLsetAnnotations(h_1, l_26);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm f_18 = NULL,y_26 = NULL;
  f_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_18), term_h_17);
  y_26 = t;
  t = c_2(y_26, t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,t_26 = NULL,u_26 = NULL;
  ATerm i_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_26 = NULL;
      t = term_r_15;
      f_26 = t;
      t = r_1(f_26, t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = i_17;
      t = fetch_1_0(k_5, t);
    }
  t = term_p_17;
  t_26 = t;
  t = c_2(t_26, t);
  t = term_z_14;
  d_18 = t;
  t = term_a_15;
  e_18 = t;
  t = SSL_table_get(d_18, e_18);
  u_26 = t;
  t = x_1(_id, m_5, u_26, t);
  t = map_1_0(p_5, t);
  return(t);
}
ATerm c_2 (ATerm r_18, ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_18 = NULL;
      v_18 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = v_18;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm u_17 = ATgetFirst((ATermList) t);
              ATerm v_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_18;
        }
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      t = (ATerm) ATinsert(ATempty, r_18);
    }
  s_18 = t;
  t = term_b_12;
  t_18 = t;
  t = s_18;
  u_18 = t;
  t = SSL_printnl(t_18, u_18);
  t = r_18;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_27 = NULL,j_27 = NULL;
  t = term_r_15;
  j_27 = t;
  t = r_1(j_27, t);
  l_27 = t;
  t = c_2(l_27, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  t = term_r_13;
  q_27 = t;
  t = term_w_17;
  r_27 = t;
  t = term_s_7;
  s_27 = t;
  t = SSL_table_put(q_27, r_27, s_27);
  t = term_x_17;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
  t = term_r_13;
  x_27 = t;
  t = term_w_17;
  y_27 = t;
  t = term_s_7;
  z_27 = t;
  t = SSL_table_put(x_27, y_27, z_27);
  t = term_r_13;
  a_28 = t;
  t = term_b_18;
  b_28 = t;
  t = term_s_7;
  c_28 = t;
  t = SSL_table_put(a_28, b_28, c_28);
  t = term_c_18;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_27 = NULL;
      m_27 = t;
      t = s_1(q_5, s_5, u_5, m_27, t);
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        ATerm t_27 = NULL;
        t_27 = t;
        t = s_1(v_5, w_5, y_5, t_27, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t)
{
  ATerm m_19 = NULL,i_19 = NULL,j_19 = NULL;
  m_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_19 = ATgetFirst((ATermList) t);
      j_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_2(l_69, m_69, m_19, i_19, j_19, t);
  return(t);
}
ATerm d_2 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm m_19, ATerm i_19, ATerm j_19, ATerm t)
{
  ATerm h_19 = NULL,k_19 = NULL,l_19 = NULL,j_1 = NULL,n_1 = NULL;
  t = SSLgetAnnotations(m_19);
  h_19 = t;
  t = i_19;
  t = l_69(t);
  k_19 = t;
  t = j_19;
  t = m_69(t);
  l_19 = t;
  n_1 = t;
  t = (ATerm) ATinsert(CheckATermList(l_19), k_19);
  j_1 = t;
  t = SSLsetAnnotations(j_1, h_19);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  i_28 = t;
  t = term_r_13;
  j_28 = t;
  t = term_r_15;
  k_28 = t;
  t = i_28;
  l_28 = t;
  t = SSL_table_put(j_28, k_28, l_28);
  t = (ATerm) ATmakeAppl(sym_Program_1, i_28);
  return(t);
}
ATerm e_2 (ATerm d_109 (ATerm), ATerm t_19, ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_18;
      t = d_109(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
    }
  t = t_19;
  d_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_28 = ATgetFirst((ATermList) t);
      f_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm b_6 (ATerm t)
    {
      ATerm w_18 = t;
      int x_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              ;
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              t = d_109(t);
              t = Cons_2_0(_id, b_6, t);
            }
          ;
          LocalPopChoice(x_18);
        }
      else
        {
          t = w_18;
          {
            ATerm n_28 = NULL,o_28 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_28 = ATgetFirst((ATermList) t);
                o_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_28), (ATerm) ATmakeAppl(sym_Undefined_1, n_28));
          }
        }
      return(t);
    }
    t = d_2(z_5, b_6, d_28, e_28, f_28, t);
  }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  if(match_string(t, "--help"))
    {
      t = c_29;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_29;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_29;
        }
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  t = term_r_13;
  d_29 = t;
  t = term_x_16;
  e_29 = t;
  t = term_s_7;
  f_29 = t;
  t = SSL_table_put(d_29, e_29, f_29);
  t = term_a_19;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm g_2 (ATerm c_109 (ATerm), ATerm m_20, ATerm t)
{
  ATerm n_20 = NULL,r_20 = NULL,u_20 = NULL,v_20 = NULL,x_20 = NULL,z_20 = NULL,s_28 = NULL;
  t = term_z_14;
  n_20 = t;
  t = term_a_15;
  r_20 = t;
  t = (ATerm) ATempty;
  u_20 = t;
  t = SSL_table_put(n_20, r_20, u_20);
  t = m_20;
  s_28 = t;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm c_19 = t;
      int d_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_109(t);
          ;
          LocalPopChoice(d_19);
        }
      else
        {
          t = c_19;
          {
            ATerm e_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_28 = NULL;
                y_28 = t;
                t = s_1(d_6, f_6, h_6, y_28, t);
                ;
                LocalPopChoice(f_19);
              }
            else
              {
                t = e_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = e_2(c_6, s_28, t);
    {
      ATerm g_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_21 = NULL;
          q_21 = t;
          {
            ATerm o_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_29 = NULL;
                t = q_21;
                {
                  ATerm r_19 = t;
                  int s_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_29 = NULL;
                      t = term_x_16;
                      p_29 = t;
                      t = r_1(p_29, t);
                      ;
                      LocalPopChoice(s_19);
                    }
                  else
                    {
                      t = r_19;
                      t = fetch_1_0(k_6, t);
                    }
                  t = q_21;
                  t = default_system_usage_0_0(t);
                  t = term_h_14;
                  m_29 = t;
                  t = SSL_exit(m_29);
                }
                ;
                LocalPopChoice(q_19);
              }
            else
              {
                t = o_19;
                {
                  ATerm s_29 = NULL,v_29 = NULL;
                  t = term_w_17;
                  v_29 = t;
                  t = r_1(v_29, t);
                  t = q_21;
                  t = default_system_about_0_0(t);
                  t = term_h_14;
                  s_29 = t;
                  t = SSL_exit(s_29);
                }
              }
          }
          ;
          LocalPopChoice(n_19);
        }
      else
        {
          t = g_19;
          {
            ATerm u_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
                ATerm r_6 (ATerm t)
                {
                  ATerm w_29 = NULL,x_29 = NULL,z_29 = NULL,g_30 = NULL,b_30 = NULL,c_30 = NULL,w_1 = NULL,y_1 = NULL;
                  w_29 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      x_29 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  g_30 = t;
                  t = w_29;
                  z_29 = t;
                  t = SSLgetAnnotations(z_29);
                  b_30 = t;
                  t = x_29;
                  if(((v_20 != NULL) && (v_20 != t)))
                    _fail(t);
                  else
                    v_20 = t;
                  c_30 = t;
                  y_1 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_30);
                  w_1 = t;
                  t = SSLsetAnnotations(w_1, b_30);
                  return(t);
                }
                t = fetch_1_0(r_6, t);
                t = term_t_7;
                r_21 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_20)), term_y_19);
                s_21 = t;
                t = SSL_printnl(r_21, s_21);
                t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_20)), term_y_19));
                t = default_system_usage_0_0(t);
                t = term_w_7;
                t_21 = t;
                t = SSL_exit(t_21);
                ;
                LocalPopChoice(x_19);
              }
            else
              {
                t = u_19;
              }
          }
        }
      x_20 = t;
      t = term_z_14;
      z_20 = t;
      t = SSL_table_destroy(z_20);
      t = x_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,i_30 = NULL;
  i_30 = t;
  t = g_2(c_107, i_30, t);
  z_21 = t;
  t = term_z_19;
  a_22 = t;
  t = SSL_table_create(a_22);
  t = term_z_19;
  b_22 = t;
  t = term_a_20;
  c_22 = t;
  t = z_21;
  d_22 = t;
  t = SSL_table_put(b_22, c_22, d_22);
  t = z_21;
  t = e_107(t);
  {
    ATerm b_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_107, t);
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = b_20;
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = if_verbose2_1_0(i_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  t = term_r_13;
  o_30 = t;
  t = term_i_20;
  p_30 = t;
  t = term_s_7;
  q_30 = t;
  t = SSL_table_put(o_30, p_30, q_30);
  t = term_j_20;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_k_20;
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,s_30 = NULL;
  h_22 = t;
  t = term_r_15;
  s_30 = t;
  t = r_1(s_30, t);
  i_22 = t;
  t = term_t_7;
  j_22 = t;
  t = (ATerm) ATinsert(ATempty, i_22);
  k_22 = t;
  t = SSL_printnl(j_22, k_22);
  t = h_22;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm l_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_106(t);
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = l_20;
        {
          ATerm b_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(c_21);
            }
          else
            {
              t = b_21;
              {
                ATerm d_21 = t;
                int e_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(e_21);
                  }
                else
                  {
                    t = d_21;
                    {
                      ATerm f_21 = t;
                      int g_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_30 = NULL;
                          k_30 = t;
                          t = s_1(f_7, g_7, h_7, k_30, t);
                          ;
                          LocalPopChoice(g_21);
                        }
                      else
                        {
                          t = f_21;
                          {
                            ATerm h_21 = t;
                            int i_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(i_21);
                              }
                            else
                              {
                                t = h_21;
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
  ATerm e_7 (ATerm t)
  {
    ATerm l_22 = NULL,m_22 = NULL,t_30 = NULL,z_30 = NULL,w_30 = NULL;
    l_22 = t;
    {
      ATerm k_21 = t;
      int l_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_22 != NULL) && (m_22 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_22 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_7, t);
          ;
          LocalPopChoice(l_21);
        }
      else
        {
          t = k_21;
          t = term_n_21;
          m_22 = t;
        }
      t = l_22;
      t_30 = t;
      {
        ATerm k_7 (ATerm t)
        {
          t = not_null(m_22);
          t = ReadFromFile_0_0(t);
          return(t);
        }
        t = o_1(_id, k_7, t_30, t);
        w_30 = t;
        t = m_1(l_106, w_30, t);
        z_30 = t;
        t = l_1(z_30, t);
      }
    }
    return(t);
  }
  t = option_wrap_4_0(s_6, n_106, d_7, e_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  a_31 = t;
  if(match_cons(t, sym__2))
    {
      b_31 = ATgetArgument(t, 0);
      c_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_1(_id, MetaExplode_0_0, a_31, b_31, c_31, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  t = n_0(g_31, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(l_7, _fail, r_7, t);
  return(t);
}
