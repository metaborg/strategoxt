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
Symbol sym_Rules_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_Rule_3;
Symbol sym_RDef_3;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Prim_2;
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
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_26;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_s_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_k_13;
ATerm term_r_6;
void init_constant_terms (void)
{
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Op_2, term_k_18, (ATerm) ATempty);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Call_2, term_w_18, (ATerm) ATempty);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Var_1, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__3, term_c_21, term_z_23, term_r_6);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm j_15 (ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm EvalPrimitive_0_0 (ATerm);
ATerm union_1_0 (ATerm n_92 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm r_15 (ATerm);
ATerm collect_om_1_0 (ATerm i_93 (ATerm), ATerm);
ATerm _2_0 (ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm y_100 (ATerm), ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm d_5 (ATerm x_4, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_16 (ATerm);
ATerm c_16 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_88 (ATerm), ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm h_16 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_17 (ATerm);
ATerm b_17 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_102 (ATerm), ATerm);
ATerm c_17 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_17 (ATerm);
ATerm need_help_1_0 (ATerm y_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm);
ATerm o_17 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_107 (ATerm), ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm t_17 (ATerm);
ATerm u_17 (ATerm);
ATerm parse_options_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm);
ATerm y_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm iowrap_3_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,k_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,v_0 = NULL,w_0 = NULL;
  b_0 = t;
  t = term_r_6;
  t = whoami_0_0(t);
  f_0 = t;
  m_0 = t;
  t = term_k_13;
  k_0 = t;
  t = m_0;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_18), f_0), term_h_18);
  l_0 = t;
  t = SSL_printnl(k_0, l_0);
  w_0 = t;
  t = term_j_18;
  v_0 = t;
  t = SSL_exit(v_0);
  t = b_0;
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm t_0 = NULL;
  t = new_0_0(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_0);
  return(t);
}
ATerm k_15 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm u_0 = NULL,d_1 = NULL,k_1 = NULL;
  u_0 = t;
  t = SSL_explode_term(u_0);
  if(match_cons(t, sym__2))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
          {
            d_1 = ATgetFirst((ATermList) n_18);
            {
              ATerm o_18 = (ATerm) ATgetNext((ATermList) n_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(u_0);
  if(match_cons(t, sym__2))
    {
      ATerm p_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_18 = ATgetArgument(t, 1);
        if(((ATgetType(q_18) == AT_LIST) && !(ATisEmpty(q_18))))
          {
            ATerm r_18 = ATgetFirst((ATermList) q_18);
            ATerm s_18 = (ATerm) ATgetNext((ATermList) q_18);
            if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
              {
                k_1 = ATgetFirst((ATermList) s_18);
                {
                  ATerm t_18 = (ATerm) ATgetNext((ATermList) s_18);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_18, (ATerm) ATinsert(ATinsert(ATempty, k_1), d_1));
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm y_0 = NULL;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_x_18, y_0);
  return(t);
}
ATerm EvalPrimitive_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      o_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_0;
  t = map_1_0(j_15, t);
  q_0 = t;
  t = foldr_2_0(k_15, l_15, t);
  r_0 = t;
  t = q_0;
  t = map_1_0(m_15, t);
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, term_y_18, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_18, (ATerm) ATinsert(ATinsert(ATempty, term_c_19), (ATerm) ATmakeAppl(sym_Op_2, term_a_19, (ATerm) ATinsert(ATinsert(ATempty, r_0), (ATerm) ATmakeAppl(sym_Str_1, o_0))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, o_0, s_0), term_c_19), term_d_19));
  return(t);
}
ATerm union_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_1;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm e_19 = t;
      int f_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_1;
          ;
          LocalPopChoice(f_19);
        }
      else
        {
          t = e_19;
          {
            ATerm g_19 = t;
            int h_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_1 = NULL,m_1 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_1 = ATgetFirst((ATermList) t);
                    m_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_1;
                {
                  ATerm n_15 (ATerm t)
                  {
                    ATerm n_1 = NULL;
                    n_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_1, n_1);
                    t = n_92(t);
                    return(t);
                  }
                  t = fetch_1_0(n_15, t);
                  t = m_1;
                  t = h_1(t);
                }
                ;
                LocalPopChoice(h_19);
              }
            else
              {
                t = g_19;
                t = Cons_2_0(_id, h_1, t);
              }
          }
        }
      return(t);
    }
    t = h_1(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_94(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm w_1 = NULL,x_1 = NULL,j_2 = NULL,k_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_1 = ATgetFirst((ATermList) t);
            x_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_1;
        t = o_94(t);
        j_2 = t;
        t = x_1;
        t = foldr_3_0(m_94, n_94, o_94, t);
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_2, k_2);
        t = n_94(t);
      }
    }
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_15 (ATerm t)
{
  t = union_1_0(r_15, t);
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      if((y_1 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_om_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 = NULL;
      t = i_93(t);
      o_2 = t;
      t = (ATerm) ATinsert(ATempty, o_2);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      {
        ATerm r_1 = NULL,s_1 = NULL;
        r_1 = t;
        t = SSL_explode_term(r_1);
        if(match_cons(t, sym__2))
          {
            ATerm m_19 = ATgetArgument(t, 0);
            s_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_1;
        {
          ATerm q_15 (ATerm t)
          {
            t = collect_om_1_0(i_93, t);
            return(t);
          }
          t = foldr_3_0(o_15, p_15, q_15, t);
        }
      }
    }
  return(t);
}
ATerm _2_0 (ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL,u_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,x_0 = NULL,z_0 = NULL;
  y_2 = t;
  if(match_cons(t, sym__2))
    {
      t_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_2);
  r_2 = t;
  t = t_2;
  t = k_63(t);
  w_2 = t;
  t = u_2;
  t = l_63(t);
  x_2 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_2, x_2);
  x_0 = t;
  t = SSLsetAnnotations(x_0, r_2);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm y_100 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_3, term_n_19);
  t = open_stream_0_0(t);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, c_3);
  t = y_100(t);
  t = fclose_0_0(t);
  t = c_3;
  return(t);
}
ATerm v_15 (ATerm t)
{
  t = fetch_1_0(x_15, t);
  return(t);
}
ATerm w_15 (ATerm t)
{
  t = WriteToFile_1_0(y_15, t);
  return(t);
}
ATerm x_15 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_19 = ATgetArgument(t, 0);
      if(match_cons(o_19, sym_Stream_1))
        {
          k_3 = ATgetArgument(o_19, 0);
        }
      else
        _fail(t);
      l_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(k_3, l_3);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_3);
  return(t);
}
ATerm z_15 (ATerm t)
{
  t = WriteToFile_1_0(a_16, t);
  return(t);
}
ATerm a_16 (ATerm t)
{
  ATerm n_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_19 = ATgetArgument(t, 0);
      if(match_cons(p_19, sym_Stream_1))
        {
          n_3 = ATgetArgument(p_19, 0);
        }
      else
        _fail(t);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(n_3, r_3);
  s_3 = t;
  b_1 = t;
  t = term_q_19;
  a_1 = t;
  t = SSL_fputc(a_1, s_3);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_3);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL;
  h_3 = t;
  {
    ATerm s_15 (ATerm t)
    {
      ATerm r_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_15 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((j_3 != NULL) && (j_3 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_15, t);
          ;
          LocalPopChoice(s_19);
        }
      else
        {
          t = r_19;
          t = term_t_19;
          if(((j_3 != NULL) && (j_3 != t)))
            _fail(t);
          else
            j_3 = t;
        }
      return(t);
    }
    t = _2_0(s_15, _id, t);
    t = h_3;
    {
      ATerm u_15 (ATerm t)
      {
        ATerm z_1 = NULL;
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_3), z_1);
        return(t);
      }
      t = _2_0(_id, u_15, t);
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(v_15, w_15, t);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = _2_0(_id, z_15, t);
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
ATerm apply_strategy_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,b_4 = NULL;
  u_3 = t;
  t = dtime_0_0(t);
  t = u_3;
  t = a_104(t);
  v_3 = t;
  t = dtime_0_0(t);
  x_3 = t;
  t = v_3;
  if(match_cons(t, sym__2))
    {
      y_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_3), (ATerm) ATmakeAppl(sym_Runtime_1, x_3)), b_4);
  return(t);
}
ATerm d_5 (ATerm x_4, ATerm t)
{
  t = SSL_fclose(x_4);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_5 = ATgetArgument(t, 0);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_5);
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = d_5(b_5, t);
          }
      }
    }
  else
    {
      t = d_5(b_5, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_5 = NULL;
  t = SSL_stdin_stream();
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_5 = NULL;
  t = SSL_stdout_stream();
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_5 = NULL;
  t = SSL_stderr_stream();
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_5);
  return(t);
}
ATerm b_16 (ATerm t)
{
  ATerm t_5 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      t_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5;
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm y_5 = NULL;
  y_5 = t;
  t = SSL_is_string(y_5);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      ATerm z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL,g_3 = NULL;
        e_3 = t;
        t = SSL_explode_term(e_3);
        if(match_cons(t, sym__2))
          {
            ATerm c_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_20 = ATgetArgument(t, 1);
              if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
                {
                  g_3 = ATgetFirst((ATermList) d_20);
                  {
                    ATerm e_20 = (ATerm) ATgetNext((ATermList) d_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        {
          ATerm f_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
              t = _2_0(b_16, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_5 = ATgetArgument(t, 0);
                  q_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_5, q_5);
              r_5 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_5);
              ;
              LocalPopChoice(g_20);
            }
          else
            {
              t = f_20;
              {
                ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
                t = _2_0(c_16, _id, t);
                if(match_cons(t, sym__2))
                  {
                    v_5 = ATgetArgument(t, 0);
                    w_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(v_5, w_5);
                x_5 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, x_5);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,c_6 = NULL;
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 = NULL;
      d_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_6, term_j_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm i_3 = NULL,c_1 = NULL,f_1 = NULL,i_1 = NULL,j_1 = NULL;
        i_3 = t;
        t = term_k_20;
        i_1 = t;
        t = term_k_13;
        c_1 = t;
        t = i_1;
        j_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_3), term_k_20);
        f_1 = t;
        t = SSL_printnl(c_1, f_1);
        t = i_3;
        _fail(t);
      }
    }
  z_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(c_6);
  a_6 = t;
  t = z_5;
  t = fclose_0_0(t);
  t = a_6;
  return(t);
}
ATerm fetch_1_0 (ATerm t_88 (ATerm), ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_88, _id, t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = Cons_2_0(_id, i_6, t);
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
        ATerm l_6 = NULL,m_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_6 = ATgetFirst((ATermList) t);
            m_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_6;
        {
          ATerm d_16 (ATerm t)
          {
            t = m_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_16, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_6, t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_88(t);
      }
    return(t);
  }
  t = u_6(t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  ATerm x_6 = NULL;
  x_6 = t;
  t = SSL_explode_string(x_6);
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm y_6 = NULL;
  y_6 = t;
  t = SSL_explode_string(y_6);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm w_6 = NULL;
  t = _2_0(e_16, f_16, t);
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL,b_7 = NULL;
        if(match_cons(t, sym__2))
          {
            a_7 = ATgetArgument(t, 0);
            b_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_7;
        {
          ATerm g_16 (ATerm t)
          {
            t = b_7;
            return(t);
          }
          t = at_end_1_0(g_16, t);
        }
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        {
          ATerm z_3 = NULL,a_4 = NULL;
          z_3 = t;
          t = SSL_explode_term(z_3);
          if(match_cons(t, sym__2))
            {
              ATerm t_20 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_20) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              a_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_4;
          t = concat_0_0(t);
        }
      }
    w_6 = t;
    t = SSL_implode_string(w_6);
  }
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_7 = NULL;
      l_7 = t;
      t = SSL_is_string(l_7);
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_16, t);
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            {
              ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
              p_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_7 = ATgetArgument(t, 0);
                  t = q_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_7 = ATgetArgument(t, 0);
                      t = q_7;
                      {
                        ATerm a_21 = t;
                        int b_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_1 = NULL,p_1 = NULL;
                            p_1 = t;
                            t = term_c_21;
                            o_1 = t;
                            t = SSL_table_get(o_1, q_7);
                            {
                              ATerm d_21 = t;
                              int e_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_5 = NULL,q_1 = NULL,t_1 = NULL;
                                  t = eval_config_0_0(t);
                                  i_5 = t;
                                  t_1 = t;
                                  t = term_c_21;
                                  q_1 = t;
                                  t = SSL_table_put(q_1, q_7, i_5);
                                  t = i_5;
                                  ;
                                  LocalPopChoice(e_21);
                                }
                              else
                                {
                                  t = d_21;
                                }
                            }
                            ;
                            LocalPopChoice(b_21);
                          }
                        else
                          {
                            t = a_21;
                            {
                              ATerm u_1 = NULL,v_1 = NULL,a_2 = NULL,b_2 = NULL;
                              t = term_f_21;
                              a_2 = t;
                              t = term_k_13;
                              u_1 = t;
                              t = a_2;
                              b_2 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, q_7), term_f_21);
                              v_1 = t;
                              t = SSL_printnl(u_1, v_1);
                              t = q_7;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_7 = NULL,z_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_7 = ATgetArgument(t, 0);
                          r_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_7;
                      t = eval_config_0_0(t);
                      y_7 = t;
                      t = r_7;
                      t = eval_config_0_0(t);
                      z_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_7, z_7);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 = NULL,j_8 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
      e_8 = t;
      t = term_i_21;
      e_2 = t;
      t = term_c_21;
      c_2 = t;
      t = e_2;
      f_2 = t;
      t = term_i_21;
      d_2 = t;
      t = SSL_table_get(c_2, d_2);
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,l_2 = NULL;
            t = eval_config_0_0(t);
            j_6 = t;
            i_2 = t;
            t = term_c_21;
            g_2 = t;
            t = i_2;
            l_2 = t;
            t = term_i_21;
            h_2 = t;
            t = SSL_table_put(g_2, h_2, j_6);
            t = j_6;
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
          }
        j_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, term_l_21);
        t = geq_0_0(t);
        t = e_8;
        t = j_102(t);
      }
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
    }
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm l_8 = NULL;
  l_8 = t;
  if(match_string(t, "-k"))
    {
      t = l_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_8;
    }
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,m_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL;
  m_8 = t;
  t = SSL_string_to_int(m_8);
  n_8 = t;
  p_2 = t;
  t = term_c_21;
  m_2 = t;
  t = p_2;
  q_2 = t;
  t = term_m_21;
  n_2 = t;
  t = SSL_table_put(m_2, n_2, n_8);
  t = m_8;
  return(t);
}
ATerm k_16 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_16, j_16, k_16, t);
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  if(match_string(t, "-S"))
    {
      t = p_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_8;
    }
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm s_2 = NULL,v_2 = NULL,z_2 = NULL,a_3 = NULL,d_3 = NULL,o_3 = NULL;
  a_3 = t;
  t = term_c_21;
  s_2 = t;
  t = a_3;
  d_3 = t;
  t = term_i_21;
  v_2 = t;
  t = d_3;
  o_3 = t;
  t = term_o_21;
  z_2 = t;
  t = SSL_table_put(s_2, v_2, z_2);
  t = term_p_21;
  return(t);
}
ATerm n_16 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm o_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,p_3 = NULL,q_3 = NULL,w_3 = NULL,c_4 = NULL;
  r_8 = t;
  t = SSL_string_to_int(r_8);
  s_8 = t;
  w_3 = t;
  t = term_c_21;
  p_3 = t;
  t = w_3;
  c_4 = t;
  t = term_i_21;
  q_3 = t;
  t = SSL_table_put(p_3, q_3, s_8);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_8);
  return(t);
}
ATerm q_16 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm r_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  g_4 = t;
  t = term_c_21;
  d_4 = t;
  t = g_4;
  h_4 = t;
  t = term_s_21;
  e_4 = t;
  t = h_4;
  i_4 = t;
  t = term_r_6;
  f_4 = t;
  t = SSL_table_put(d_4, e_4, f_4);
  t = term_t_21;
  return(t);
}
ATerm t_16 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_16, m_16, n_16, t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_16, p_16, q_16, t);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = Option_3_0(r_16, s_16, t_16, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_8 = NULL;
      t = term_r_6;
      t = d_0(t);
      x_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_21, term_a_22, x_8);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm a_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_8 = ATgetFirst((ATermList) t);
          w_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_8;
      t = a_0(t);
      t = term_r_6;
      t = c_0(t);
      a_9 = t;
      t = (ATerm) ATinsert(CheckATermList(w_8), a_9);
    }
  return(t);
}
ATerm u_16 (ATerm t)
{
  ATerm f_9 = NULL;
  f_9 = t;
  if(match_string(t, "-o"))
    {
      t = f_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_9;
    }
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm g_9 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  g_9 = t;
  l_4 = t;
  t = term_c_21;
  j_4 = t;
  t = l_4;
  m_4 = t;
  t = term_b_22;
  k_4 = t;
  t = SSL_table_put(j_4, k_4, g_9);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_9);
  return(t);
}
ATerm w_16 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_16, v_16, w_16, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,p_9 = NULL,q_9 = NULL,n_4 = NULL,o_4 = NULL;
  if(match_cons(t, sym__3))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
      p_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_9, l_9);
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_22 = ATgetArgument(t, 0);
            ATerm g_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_9, l_9);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = (ATerm) ATempty;
      }
    q_9 = t;
    o_4 = t;
    t = (ATerm) ATinsert(CheckATermList(q_9), p_9);
    n_4 = t;
    t = SSL_table_put(k_9, l_9, n_4);
    t = (ATerm) ATmakeAppl(sym__3, k_9, l_9, p_9);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_10 = NULL;
      t = term_r_6;
      t = j_0(t);
      d_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_21, term_a_22, d_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_9 = ATgetFirst((ATermList) t);
          a_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_10;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_10 = ATgetFirst((ATermList) t);
          c_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_9;
      t = h_0(t);
      t = b_10;
      t = i_0(t);
      h_10 = t;
      t = (ATerm) ATinsert(CheckATermList(c_10), h_10);
    }
  return(t);
}
ATerm x_16 (ATerm t)
{
  ATerm j_10 = NULL;
  j_10 = t;
  if(match_string(t, "-i"))
    {
      t = j_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_10;
    }
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm k_10 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  k_10 = t;
  r_4 = t;
  t = term_c_21;
  p_4 = t;
  t = r_4;
  s_4 = t;
  t = term_h_22;
  q_4 = t;
  t = SSL_table_put(p_4, q_4, k_10);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_10);
  return(t);
}
ATerm z_16 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_16, y_16, z_16, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_10 = NULL,y_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,z_4 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_6;
  t = whoami_0_0(t);
  l_10 = t;
  v_4 = t;
  t = term_k_13;
  t_4 = t;
  t = v_4;
  w_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_22), l_10);
  u_4 = t;
  t = SSL_printnl(t_4, u_4);
  z_4 = t;
  t = term_j_18;
  y_4 = t;
  t = SSL_exit(y_4);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_5 = NULL,g_5 = NULL,j_5 = NULL,k_5 = NULL;
  t = term_k_22;
  j_5 = t;
  t = term_c_21;
  c_5 = t;
  t = j_5;
  k_5 = t;
  t = term_k_22;
  g_5 = t;
  t = SSL_table_get(c_5, g_5);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_7 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
        t = eval_config_0_0(t);
        g_7 = t;
        n_5 = t;
        t = term_c_21;
        l_5 = t;
        t = n_5;
        o_5 = t;
        t = term_k_22;
        m_5 = t;
        t = SSL_table_put(l_5, m_5, g_7);
        t = g_7;
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_94(t);
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      {
        ATerm o_10 = NULL,p_10 = NULL,s_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_10 = ATgetFirst((ATermList) t);
            p_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_10;
        t = foldr_2_0(k_94, l_94, t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_10, s_10);
        t = l_94(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_17 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm b_17 (ATerm t)
{
  ATerm w_7 = NULL,g_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_7 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_7, g_8);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = SSL_addr(w_7, g_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_10 = NULL,h_7 = NULL,i_7 = NULL;
  t = times_0_0(t);
  h_7 = t;
  t = SSL_explode_term(h_7);
  if(match_cons(t, sym__2))
    {
      ATerm r_22 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7;
  t = foldr_2_0(a_17, b_17, t);
  v_10 = t;
  t = SSL_TicksToSeconds(v_10);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_11;
        if((h_11 != t))
          {
            _fail(t);
          }
        t = g_11;
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = g_11;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_11, i_11);
              ;
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = SSL_gtr(h_11, i_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_11, i_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL,n_11 = NULL,s_5 = NULL,u_5 = NULL,b_6 = NULL,e_6 = NULL;
      l_11 = t;
      t = term_i_21;
      b_6 = t;
      t = term_c_21;
      s_5 = t;
      t = b_6;
      e_6 = t;
      t = term_i_21;
      u_5 = t;
      t = SSL_table_get(s_5, u_5);
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_9 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,k_6 = NULL;
            t = eval_config_0_0(t);
            j_9 = t;
            h_6 = t;
            t = term_c_21;
            f_6 = t;
            t = h_6;
            k_6 = t;
            t = term_i_21;
            g_6 = t;
            t = SSL_table_put(f_6, g_6, j_9);
            t = j_9;
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
          }
        n_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_11, term_j_18);
        t = geq_0_0(t);
        t = l_11;
        t = i_102(t);
      }
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
    }
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
  t = run_time_0_0(t);
  p_11 = t;
  t = term_r_6;
  t = whoami_0_0(t);
  q_11 = t;
  p_6 = t;
  t = term_k_13;
  n_6 = t;
  t = p_6;
  q_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_23), p_11), term_a_23), q_11);
  o_6 = t;
  t = SSL_printnl(n_6, o_6);
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_23), p_11), term_a_23), q_11));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL;
  t = report_run_time_0_0(t);
  t_6 = t;
  t = term_o_21;
  s_6 = t;
  t = SSL_exit(s_6);
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6 = NULL,z_6 = NULL,c_7 = NULL,d_7 = NULL;
      t = term_i_23;
      c_7 = t;
      t = term_c_21;
      v_6 = t;
      t = c_7;
      d_7 = t;
      t = term_i_23;
      z_6 = t;
      t = SSL_table_get(v_6, z_6);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_9 = NULL,e_7 = NULL,f_7 = NULL,j_7 = NULL,k_7 = NULL;
            t = eval_config_0_0(t);
            r_9 = t;
            j_7 = t;
            t = term_c_21;
            e_7 = t;
            t = j_7;
            k_7 = t;
            t = term_i_23;
            f_7 = t;
            t = SSL_table_put(e_7, f_7, r_9);
            t = r_9;
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
          }
      }
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      t = fetch_1_0(d_17, t);
    }
  t = y_104(t);
  return(t);
}
ATerm map_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm r_11 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = Cons_2_0(i_88, r_11, t);
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_11 = ATgetFirst((ATermList) t);
      u_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_11 = NULL,z_11 = NULL;
        t = u_11;
        t = g_0(t);
        y_11 = t;
        t = t_11;
        t = e_0(t);
        z_11 = t;
        t = u_11;
        {
          ATerm e_17 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_11), z_11);
            return(t);
          }
          t = reverse_acc_2_0(e_0, e_17, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,m_7 = NULL,n_7 = NULL;
  d_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_12);
  a_12 = t;
  t = b_12;
  t = p_73(t);
  c_12 = t;
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_12);
  m_7 = t;
  t = SSLsetAnnotations(m_7, a_12);
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm g_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_12), term_n_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,f_8 = NULL,h_8 = NULL;
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
      t = term_k_22;
      t_7 = t;
      t = term_c_21;
      o_7 = t;
      t = t_7;
      u_7 = t;
      t = term_k_22;
      s_7 = t;
      t = SSL_table_get(o_7, s_7);
      {
        ATerm q_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_10 = NULL,v_7 = NULL,x_7 = NULL,a_8 = NULL,b_8 = NULL;
            t = eval_config_0_0(t);
            m_10 = t;
            a_8 = t;
            t = term_c_21;
            v_7 = t;
            t = a_8;
            b_8 = t;
            t = term_k_22;
            x_7 = t;
            t = SSL_table_put(v_7, x_7, m_10);
            t = m_10;
            ;
            LocalPopChoice(r_23);
          }
        else
          {
            t = q_23;
          }
      }
      ;
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      t = fetch_1_0(f_17, t);
    }
  t = term_s_23;
  t = echo_0_0(t);
  f_8 = t;
  t = term_z_21;
  c_8 = t;
  t = f_8;
  h_8 = t;
  t = term_a_22;
  d_8 = t;
  t = SSL_table_get(c_8, d_8);
  t = reverse_acc_2_0(_id, g_17, t);
  t = map_1_0(h_17, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,i_8 = NULL,k_8 = NULL;
  k_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_12);
  h_12 = t;
  t = i_12;
  t = q_73(t);
  j_12 = t;
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, j_12);
  i_8 = t;
  t = SSLsetAnnotations(i_8, h_12);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,o_8 = NULL,q_8 = NULL;
  o_12 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_23 = ATgetFirst((ATermList) t);
                ATerm w_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_12;
          }
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = (ATerm) ATinsert(ATempty, o_12);
      }
    p_12 = t;
    q_8 = t;
    t = term_t_19;
    o_8 = t;
    t = SSL_printnl(o_8, p_12);
    t = o_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,y_8 = NULL,z_8 = NULL;
  t = term_k_22;
  y_8 = t;
  t = term_c_21;
  t_8 = t;
  t = y_8;
  z_8 = t;
  t = term_k_22;
  u_8 = t;
  t = SSL_table_get(t_8, u_8);
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
        t = eval_config_0_0(t);
        n_12 = t;
        d_9 = t;
        t = term_c_21;
        b_9 = t;
        t = d_9;
        e_9 = t;
        t = term_k_22;
        c_9 = t;
        t = SSL_table_put(b_9, c_9, n_12);
        t = n_12;
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm i_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,s_9 = NULL;
  n_9 = t;
  t = term_c_21;
  h_9 = t;
  t = n_9;
  o_9 = t;
  t = term_z_23;
  i_9 = t;
  t = o_9;
  s_9 = t;
  t = term_r_6;
  m_9 = t;
  t = SSL_table_put(h_9, i_9, m_9);
  t = term_a_24;
  return(t);
}
ATerm k_17 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm l_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,i_10 = NULL,n_10 = NULL,q_10 = NULL;
  w_9 = t;
  t = term_c_21;
  t_9 = t;
  t = w_9;
  x_9 = t;
  t = term_z_23;
  u_9 = t;
  t = x_9;
  y_9 = t;
  t = term_r_6;
  v_9 = t;
  t = SSL_table_put(t_9, u_9, v_9);
  i_10 = t;
  t = term_c_21;
  e_10 = t;
  t = i_10;
  n_10 = t;
  t = term_c_24;
  f_10 = t;
  t = n_10;
  q_10 = t;
  t = term_r_6;
  g_10 = t;
  t = SSL_table_put(e_10, f_10, g_10);
  t = term_d_24;
  return(t);
}
ATerm n_17 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_17, j_17, k_17, t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      t = Option_3_0(l_17, m_17, n_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,r_10 = NULL,t_10 = NULL;
  z_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_12 = ATgetFirst((ATermList) t);
      w_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_12);
  u_12 = t;
  t = v_12;
  t = z_67(t);
  x_12 = t;
  t = w_12;
  t = a_68(t);
  y_12 = t;
  t_10 = t;
  t = (ATerm) ATinsert(CheckATermList(y_12), x_12);
  r_10 = t;
  t = SSLsetAnnotations(r_10, u_12);
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm e_13 = NULL,u_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  e_13 = t;
  x_10 = t;
  t = term_c_21;
  u_10 = t;
  t = x_10;
  y_10 = t;
  t = term_k_22;
  w_10 = t;
  t = SSL_table_put(u_10, w_10, e_13);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm d_13 = NULL;
  d_13 = t;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_24;
        t = b_107(t);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
      }
    t = d_13;
    {
      ATerm p_17 (ATerm t)
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_24);
              }
            else
              {
                t = m_24;
                t = b_107(t);
                t = Cons_2_0(_id, p_17, t);
              }
            ;
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            {
              ATerm g_13 = NULL,h_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_13 = ATgetFirst((ATermList) t);
                  h_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_13), (ATerm) ATmakeAppl(sym_Undefined_1, g_13));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_17, p_17, t);
    }
  }
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  if(match_string(t, "--help"))
    {
      t = r_13;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_13;
        }
    }
  return(t);
}
ATerm s_17 (ATerm t)
{
  ATerm f_11 = NULL,j_11 = NULL,k_11 = NULL,m_11 = NULL,o_11 = NULL,s_11 = NULL;
  m_11 = t;
  t = term_c_21;
  f_11 = t;
  t = m_11;
  o_11 = t;
  t = term_i_23;
  j_11 = t;
  t = o_11;
  s_11 = t;
  t = term_r_6;
  k_11 = t;
  t = SSL_table_put(f_11, j_11, k_11);
  t = term_o_24;
  return(t);
}
ATerm t_17 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm u_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,e_14 = NULL,f_14 = NULL;
  o_13 = t;
  c_11 = t;
  t = term_z_21;
  z_10 = t;
  t = c_11;
  d_11 = t;
  t = term_a_22;
  a_11 = t;
  t = d_11;
  e_11 = t;
  t = (ATerm) ATempty;
  b_11 = t;
  t = SSL_table_put(z_10, a_11, b_11);
  t = o_13;
  {
    ATerm q_17 (ATerm t)
    {
      ATerm q_24 = t;
      int r_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_107(t);
          ;
          LocalPopChoice(r_24);
        }
      else
        {
          t = q_24;
          {
            ATerm s_24 = t;
            int t_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_17, s_17, t_17, t);
                ;
                LocalPopChoice(t_24);
              }
            else
              {
                t = s_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_17, t);
    {
      ATerm u_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = NULL;
          w_13 = t;
          {
            ATerm w_24 = t;
            int x_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_12 = NULL,s_12 = NULL;
                t = w_13;
                {
                  ATerm y_24 = t;
                  int z_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,e_12 = NULL;
                      t = term_i_23;
                      x_11 = t;
                      t = term_c_21;
                      v_11 = t;
                      t = x_11;
                      e_12 = t;
                      t = term_i_23;
                      w_11 = t;
                      t = SSL_table_get(v_11, w_11);
                      {
                        ATerm a_25 = t;
                        int b_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_14 = NULL,f_12 = NULL,l_12 = NULL,m_12 = NULL,q_12 = NULL;
                            t = eval_config_0_0(t);
                            o_14 = t;
                            m_12 = t;
                            t = term_c_21;
                            f_12 = t;
                            t = m_12;
                            q_12 = t;
                            t = term_i_23;
                            l_12 = t;
                            t = SSL_table_put(f_12, l_12, o_14);
                            t = o_14;
                            ;
                            LocalPopChoice(b_25);
                          }
                        else
                          {
                            t = a_25;
                          }
                      }
                      ;
                      LocalPopChoice(z_24);
                    }
                  else
                    {
                      t = y_24;
                      t = fetch_1_0(u_17, t);
                    }
                  t = w_13;
                  t = default_system_usage_0_0(t);
                  s_12 = t;
                  t = term_o_21;
                  r_12 = t;
                  t = SSL_exit(r_12);
                }
                ;
                LocalPopChoice(x_24);
              }
            else
              {
                t = w_24;
                {
                  ATerm t_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,m_13 = NULL,n_13 = NULL;
                  t = term_z_23;
                  b_13 = t;
                  t = term_c_21;
                  t_12 = t;
                  t = b_13;
                  c_13 = t;
                  t = term_z_23;
                  a_13 = t;
                  t = SSL_table_get(t_12, a_13);
                  {
                    ATerm c_25 = t;
                    int d_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_14 = NULL,f_13 = NULL,i_13 = NULL,j_13 = NULL,l_13 = NULL;
                        t = eval_config_0_0(t);
                        v_14 = t;
                        j_13 = t;
                        t = term_c_21;
                        f_13 = t;
                        t = j_13;
                        l_13 = t;
                        t = term_z_23;
                        i_13 = t;
                        t = SSL_table_put(f_13, i_13, v_14);
                        t = v_14;
                        ;
                        LocalPopChoice(d_25);
                      }
                    else
                      {
                        t = c_25;
                      }
                    t = w_13;
                    t = default_system_about_0_0(t);
                    n_13 = t;
                    t = term_o_21;
                    m_13 = t;
                    t = SSL_exit(m_13);
                  }
                }
              }
          }
          ;
          LocalPopChoice(v_24);
        }
      else
        {
          t = u_24;
          {
            ATerm e_25 = t;
            int f_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,x_13 = NULL,y_13 = NULL;
                ATerm v_17 (ATerm t)
                {
                  ATerm w_17 (ATerm t)
                  {
                    if(((p_13 != NULL) && (p_13 != t)))
                      _fail(t);
                    else
                      p_13 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_17, t);
                  return(t);
                }
                t = fetch_1_0(v_17, t);
                u_13 = t;
                t = term_k_13;
                s_13 = t;
                t = u_13;
                v_13 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), term_g_25);
                t_13 = t;
                t = SSL_printnl(s_13, t_13);
                t = (ATerm) ATmakeAppl(sym__2, term_k_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), term_g_25));
                t = default_system_usage_0_0(t);
                y_13 = t;
                t = term_j_18;
                x_13 = t;
                t = SSL_exit(x_13);
                ;
                LocalPopChoice(f_25);
              }
            else
              {
                t = e_25;
              }
          }
        }
      q_13 = t;
      f_14 = t;
      t = term_z_21;
      e_14 = t;
      t = SSL_table_destroy(e_14);
      t = q_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  t = parse_options_1_0(a_105, t);
  z_13 = t;
  i_14 = t;
  t = term_h_25;
  h_14 = t;
  t = SSL_table_create(h_14);
  l_14 = t;
  t = term_h_25;
  j_14 = t;
  t = l_14;
  m_14 = t;
  t = term_i_25;
  k_14 = t;
  t = SSL_table_put(j_14, k_14, z_13);
  t = z_13;
  t = c_105(t);
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_105, t);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        {
          ATerm l_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_25);
            }
          else
            {
              t = l_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_17 (ATerm t)
{
  t = if_verbose2_1_0(d_18, t);
  return(t);
}
ATerm a_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  ATerm n_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  t = term_c_21;
  n_14 = t;
  t = r_14;
  s_14 = t;
  t = term_n_25;
  p_14 = t;
  t = s_14;
  t_14 = t;
  t = term_r_6;
  q_14 = t;
  t = SSL_table_put(n_14, p_14, q_14);
  t = term_o_25;
  return(t);
}
ATerm c_18 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,u_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  a_14 = t;
  t = term_k_22;
  x_14 = t;
  t = term_c_21;
  u_14 = t;
  t = x_14;
  y_14 = t;
  t = term_k_22;
  w_14 = t;
  t = SSL_table_get(u_14, w_14);
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,d_15 = NULL,e_15 = NULL;
        t = eval_config_0_0(t);
        z_14 = t;
        d_15 = t;
        t = term_c_21;
        a_15 = t;
        t = d_15;
        e_15 = t;
        t = term_k_22;
        b_15 = t;
        t = SSL_table_put(a_15, b_15, z_14);
        t = z_14;
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
      }
    b_14 = t;
    h_15 = t;
    t = term_k_13;
    f_15 = t;
    t = h_15;
    i_15 = t;
    t = (ATerm) ATinsert(ATempty, b_14);
    g_15 = t;
    t = SSL_printnl(f_15, g_15);
    t = a_14;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm t)
{
  ATerm x_17 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_104(t);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              {
                ATerm w_25 = t;
                int x_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_25);
                  }
                else
                  {
                    t = w_25;
                    {
                      ATerm y_25 = t;
                      int z_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_18, b_18, c_18, t);
                          ;
                          LocalPopChoice(z_25);
                        }
                      else
                        {
                          t = y_25;
                          {
                            ATerm a_26 = t;
                            int b_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_26);
                              }
                            else
                              {
                                t = a_26;
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
  ATerm z_17 (ATerm t)
  {
    ATerm c_14 = NULL,d_14 = NULL,c_15 = NULL;
    c_14 = t;
    {
      ATerm c_26 = t;
      int d_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_18 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_14 != NULL) && (d_14 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_18, t);
          ;
          LocalPopChoice(d_26);
        }
      else
        {
          t = c_26;
          t = term_e_26;
          d_14 = t;
        }
      t = not_null(d_14);
      t = ReadFromFile_0_0(t);
      c_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_14, c_15);
      t = apply_strategy_1_0(j_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_17, l_104, y_17, z_17, t);
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = _2_0(_id, g_18, t);
  return(t);
}
ATerm g_18 (ATerm t)
{
  ATerm g_14 = NULL;
  t = collect_om_1_0(EvalPrimitive_0_0, t);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, g_14)));
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_18, _fail, default_usage_0_0, t);
  return(t);
}
