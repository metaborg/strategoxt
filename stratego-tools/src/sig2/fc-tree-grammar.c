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
Symbol sym_TreeGrammar_1;
Symbol sym_NonTermRef_2;
Symbol sym_NonTermDec_3;
Symbol sym_Prod_2;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Id_1;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Undefined_0;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_TreeGrammar_1 = ATmakeSymbol("TreeGrammar", 1, ATfalse);
  ATprotectSymbol(sym_TreeGrammar_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_NonTermDec_3 = ATmakeSymbol("NonTermDec", 3, ATfalse);
  ATprotectSymbol(sym_NonTermDec_3);
  sym_Prod_2 = ATmakeSymbol("Prod", 2, ATfalse);
  ATprotectSymbol(sym_Prod_2);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_p_15;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_u_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_j_9;
ATerm term_d_9;
ATerm term_v_8;
ATerm term_r_7;
ATerm term_j_7;
ATerm term_f_7;
ATerm term_x_6;
ATerm term_r_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_f_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
void init_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Arg: ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ProdItem: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a List: ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_f_6, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_w_5);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_m_10);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_w_5);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_w_5);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_w_5);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_r_14, term_w_5);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Prod: ", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a NonTermDec: ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a TreeGrammar: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm if_verbose2_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm fc_Arg_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm fc_ProdItem_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm j_1 (ATerm);
ATerm fc_List_1_0 (ATerm h_67 (ATerm), ATerm);
ATerm u_3 (ATerm u_43, ATerm v_43, ATerm);
ATerm v_3 (ATerm q_47, ATerm r_47, ATerm);
ATerm x_3 (ATerm s_87 (ATerm), ATerm t_464, ATerm u_47, ATerm);
ATerm w_3 (ATerm m_47, ATerm n_47, ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_84 (ATerm), ATerm);
ATerm z_12 (ATerm i_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_3 (ATerm s_47, ATerm);
ATerm z_3 (ATerm w_43, ATerm x_43, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_15 (ATerm k_13, ATerm);
ATerm r_15 (ATerm u_13, ATerm v_13, ATerm x_13, ATerm);
ATerm u_15 (ATerm o_14, ATerm p_14, ATerm q_14, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm);
ATerm t_3 (ATerm f_41, ATerm g_41, ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_4 (ATerm n_41, ATerm o_41, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_4 (ATerm h_25, ATerm i_25, ATerm g_25, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm y_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_4 (ATerm l_23, ATerm m_23, ATerm);
ATerm foldr_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm need_help_1_0 (ATerm d_85 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_71 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm c_4 (ATerm y_26, ATerm z_26, ATerm);
ATerm l_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_89 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm parse_options_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm iowrap_3_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  b_0 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_x_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_5), l_0), term_y_5);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_a_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = b_0;
  return(t);
}
ATerm debug_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,x_0 = NULL,c_1 = NULL;
  r_0 = t;
  t = q_87(t);
  s_0 = t;
  t = term_x_5;
  x_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_0), s_0);
  c_1 = t;
  t = SSL_printnl(x_0, c_1);
  t = r_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  {
    ATerm b_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL;
        t = term_f_6;
        t = get_config_0_0(t);
        s_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_1, term_i_6);
        t = geq_0_0(t);
        t = p_1;
        t = x_82(t);
        ;
        LocalPopChoice(d_6);
      }
    else
      {
        t = b_6;
        t = p_1;
      }
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = debug_1_0(t_0, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_j_6;
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = debug_1_0(v_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm fc_Arg_0_0 (ATerm t)
{
  ATerm l_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL;
      j_3 = t;
      if(match_cons(t, sym_NonTermRef_2))
        {
          i_3 = ATgetArgument(t, 0);
          h_3 = ATgetArgument(t, 1);
          {
            ATerm z_0 = NULL,d_1 = NULL,e_1 = NULL,k_0 = NULL;
            t = SSLgetAnnotations(j_3);
            z_0 = t;
            t = i_3;
            {
              ATerm p_6 = t;
              int q_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_1 = NULL,v_1 = NULL,x_1 = NULL,f_0 = NULL;
                  if(match_cons(t, sym_Id_1))
                    {
                      l_1 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_3);
                  v_1 = t;
                  t = SSL_is_string(l_1);
                  x_1 = t;
                  t = (ATerm) ATmakeAppl(sym_Id_1, x_1);
                  f_0 = t;
                  t = SSLsetAnnotations(f_0, v_1);
                  ;
                  LocalPopChoice(q_6);
                }
              else
                {
                  t = p_6;
                  t = if_verbose2_1_0(q_0, t);
                }
              d_1 = t;
              t = h_3;
              t = fc_List_1_0(fc_Arg_0_0, t);
              e_1 = t;
              t = (ATerm) ATmakeAppl(sym_NonTermRef_2, d_1, e_1);
              k_0 = t;
              t = SSLsetAnnotations(k_0, z_0);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Param_1))
            {
              i_3 = ATgetArgument(t, 0);
              {
                ATerm b_2 = NULL,l_2 = NULL,p_0 = NULL;
                t = SSLgetAnnotations(j_3);
                b_2 = t;
                t = SSL_is_int(i_3);
                l_2 = t;
                t = (ATerm) ATmakeAppl(sym_Param_1, l_2);
                p_0 = t;
                t = SSLsetAnnotations(p_0, b_2);
              }
            }
          else
            {
              if(match_cons(t, sym_String_0))
                {
                  t = j_3;
                }
              else
                {
                  if(!(match_cons(t, sym_Int_0)))
                    _fail(t);
                  t = j_3;
                }
            }
        }
      ;
      LocalPopChoice(o_6);
    }
  else
    {
      t = l_6;
      t = if_verbose2_1_0(u_0, t);
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = debug_1_0(y_0, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_j_6;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = debug_1_0(b_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_r_6;
  return(t);
}
ATerm fc_ProdItem_0_0 (ATerm t)
{
  ATerm s_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_6 = NULL,m_6 = NULL,n_6 = NULL;
      n_6 = t;
      if(match_cons(t, sym_NonTermRef_2))
        {
          m_6 = ATgetArgument(t, 0);
          e_6 = ATgetArgument(t, 1);
          {
            ATerm q_3 = NULL,b_4 = NULL,e_4 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(n_6);
            q_3 = t;
            t = m_6;
            {
              ATerm v_6 = t;
              int w_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_4 = NULL,b_5 = NULL,d_5 = NULL,g_1 = NULL;
                  if(match_cons(t, sym_Id_1))
                    {
                      m_4 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_6);
                  b_5 = t;
                  t = SSL_is_string(m_4);
                  d_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Id_1, d_5);
                  g_1 = t;
                  t = SSLsetAnnotations(g_1, b_5);
                  ;
                  LocalPopChoice(w_6);
                }
              else
                {
                  t = v_6;
                  t = if_verbose2_1_0(w_0, t);
                }
              b_4 = t;
              t = e_6;
              t = fc_List_1_0(fc_Arg_0_0, t);
              e_4 = t;
              t = (ATerm) ATmakeAppl(sym_NonTermRef_2, b_4, e_4);
              h_1 = t;
              t = SSLsetAnnotations(h_1, q_3);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Param_1))
            {
              m_6 = ATgetArgument(t, 0);
              {
                ATerm k_5 = NULL,m_5 = NULL,i_1 = NULL;
                t = SSLgetAnnotations(n_6);
                k_5 = t;
                t = SSL_is_int(m_6);
                m_5 = t;
                t = (ATerm) ATmakeAppl(sym_Param_1, m_5);
                i_1 = t;
                t = SSLsetAnnotations(i_1, k_5);
              }
            }
          else
            {
              if(match_cons(t, sym_String_0))
                {
                  t = n_6;
                }
              else
                {
                  if(!(match_cons(t, sym_Int_0)))
                    _fail(t);
                  t = n_6;
                }
            }
        }
      ;
      LocalPopChoice(u_6);
    }
  else
    {
      t = s_6;
      t = if_verbose2_1_0(a_1, t);
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
ATerm fc_List_1_0 (ATerm h_67 (ATerm), ATerm t)
{
  ATerm y_6 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
      l_7 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = l_7;
        }
      else
        {
          ATerm c_6 = NULL,g_6 = NULL,h_6 = NULL,e_2 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_7 = ATgetFirst((ATermList) t);
              n_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_7);
          c_6 = t;
          t = m_7;
          t = h_67(t);
          g_6 = t;
          t = n_7;
          t = fc_List_1_0(h_67, t);
          h_6 = t;
          t = (ATerm) ATinsert(CheckATermList(h_6), g_6);
          e_2 = t;
          t = SSLsetAnnotations(e_2, c_6);
        }
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = y_6;
      t = if_verbose2_1_0(f_1, t);
    }
  return(t);
}
ATerm u_3 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm p_7 = NULL;
  t = SSL_fputc(u_43, v_43);
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_7);
  return(t);
}
ATerm v_3 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm q_7 = NULL;
  t = SSL_write_term_to_stream_text(q_47, r_47);
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_7);
  return(t);
}
ATerm x_3 (ATerm s_87 (ATerm), ATerm t_464, ATerm u_47, ATerm t)
{
  ATerm u_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_464, term_f_7);
  t = open_stream_0_0(t);
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_7, u_47);
  t = s_87(t);
  t = fclose_0_0(t);
  t = u_47;
  return(t);
}
ATerm w_3 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm v_7 = NULL;
  t = SSL_write_term_to_stream_baf(m_47, n_47);
  v_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_7);
  return(t);
}
ATerm m_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_7 = ATgetArgument(t, 0);
      if(match_cons(h_7, sym_Stream_1))
        {
          e_7 = ATgetArgument(h_7, 0);
        }
      else
        _fail(t);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(e_7, g_7, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_7 = ATgetArgument(t, 0);
      if(match_cons(i_7, sym_Stream_1))
        {
          i_8 = ATgetArgument(i_7, 0);
        }
      else
        _fail(t);
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(i_8, j_8, t);
  f_8 = t;
  t = term_j_7;
  g_8 = t;
  t = f_8;
  if(match_cons(t, sym_Stream_1))
    {
      h_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_7, f_8);
  t = u_3(g_8, h_8, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_7 = NULL,b_8 = NULL,k_8 = NULL,m_8 = NULL,p_8 = NULL,w_8 = NULL,x_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,l_11 = NULL,m_11 = NULL,h_2 = NULL,g_2 = NULL;
  if(((b_8 != NULL) && (b_8 != t)))
    _fail(t);
  else
    b_8 = t;
  if(match_cons(t, sym__2))
    {
      if(((a_9 != NULL) && (a_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_9 = ATgetArgument(t, 0);
      if(((b_9 != NULL) && (b_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(b_8));
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  t = not_null(a_9);
  {
    ATerm k_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_7 != NULL) && (z_7 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_1, t);
        ;
        LocalPopChoice(o_7);
      }
    else
      {
        t = k_7;
        t = term_r_7;
        if(((z_7 != NULL) && (z_7 != t)))
          _fail(t);
        else
          z_7 = t;
      }
    if(((c_9 != NULL) && (c_9 != t)))
      _fail(t);
    else
      c_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), not_null(b_9));
    if(((g_2 != NULL) && (g_2 != t)))
      _fail(t);
    else
      g_2 = t;
    t = SSLsetAnnotations(not_null(g_2), not_null(x_8));
    t = not_null(b_8);
    if(match_cons(t, sym__2))
      {
        if(((m_8 != NULL) && (m_8 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_8 = ATgetArgument(t, 0);
        if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          p_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(b_8));
    if(((k_8 != NULL) && (k_8 != t)))
      _fail(t);
    else
      k_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), (ATerm) ATmakeAppl(sym__2, not_null(z_7), not_null(p_8)));
    if(((h_2 != NULL) && (h_2 != t)))
      _fail(t);
    else
      h_2 = t;
    t = SSLsetAnnotations(not_null(h_2), not_null(k_8));
    if(((w_8 != NULL) && (w_8 != t)))
      _fail(t);
    else
      w_8 = t;
    if(match_cons(t, sym__2))
      {
        if(((l_11 != NULL) && (l_11 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_11 = ATgetArgument(t, 0);
        if(((m_11 != NULL) && (m_11 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          m_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm s_7 = t;
      int t_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_6 = NULL,z_6 = NULL,a_7 = NULL,c_7 = NULL,d_7 = NULL,i_2 = NULL;
          t = SSLgetAnnotations(not_null(w_8));
          t_6 = t;
          t = not_null(l_11);
          t = fetch_1_0(m_1, t);
          z_6 = t;
          t = not_null(m_11);
          if(match_cons(t, sym__2))
            {
              c_7 = ATgetArgument(t, 0);
              d_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_3(n_1, c_7, d_7, t);
          a_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_6, a_7);
          i_2 = t;
          t = SSLsetAnnotations(i_2, t_6);
          ;
          LocalPopChoice(t_7);
        }
      else
        {
          t = s_7;
          {
            ATerm x_7 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(not_null(w_8));
            x_7 = t;
            t = not_null(m_11);
            if(match_cons(t, sym__2))
              {
                d_8 = ATgetArgument(t, 0);
                e_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_3(o_1, d_8, e_8, t);
            c_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), c_8);
            j_2 = t;
            t = SSLsetAnnotations(j_2, x_7);
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
ATerm apply_strategy_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  v_11 = t;
  t = dtime_0_0(t);
  t = v_11;
  t = f_84(t);
  u_11 = t;
  t = dtime_0_0(t);
  r_11 = t;
  t = u_11;
  if(match_cons(t, sym__2))
    {
      s_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_11), (ATerm) ATmakeAppl(sym_Runtime_1, r_11)), t_11);
  return(t);
}
ATerm z_12 (ATerm i_12, ATerm t)
{
  t = SSL_fclose(i_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  p_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_12 = ATgetArgument(t, 0);
      {
        ATerm w_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_12);
            ;
            LocalPopChoice(y_7);
          }
        else
          {
            t = w_7;
            t = z_12(p_12, t);
          }
      }
    }
  else
    {
      t = z_12(p_12, t);
    }
  return(t);
}
ATerm y_3 (ATerm s_47, ATerm t)
{
  t = SSL_read_term_from_stream(s_47);
  return(t);
}
ATerm z_3 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm a_13 = NULL;
  t = SSL_fopen(w_43, x_43);
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_13 = NULL;
  t = SSL_stdin_stream();
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_13 = NULL;
  t = SSL_stdout_stream();
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_13 = NULL;
  t = SSL_stderr_stream();
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_13);
  return(t);
}
ATerm l_15 (ATerm k_13, ATerm t)
{
  ATerm l_13 = NULL;
  t = SSL_explode_term(k_13);
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) == AT_LIST) && !(ATisEmpty(l_8))))
          {
            l_13 = ATgetFirst((ATermList) l_8);
            {
              ATerm n_8 = (ATerm) ATgetNext((ATermList) l_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_15 (ATerm u_13, ATerm v_13, ATerm x_13, ATerm t)
{
  ATerm y_13 = NULL,c_14 = NULL,d_14 = NULL,j_14 = NULL,s_2 = NULL;
  t = SSLgetAnnotations(x_13);
  d_14 = t;
  t = u_13;
  if(match_cons(t, sym_Path_1))
    {
      j_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_14, v_13);
  s_2 = t;
  t = SSLsetAnnotations(s_2, d_14);
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(y_13, c_14, t);
  return(t);
}
ATerm u_15 (ATerm o_14, ATerm p_14, ATerm q_14, ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,b_15 = NULL,t_2 = NULL;
  t = SSLgetAnnotations(q_14);
  w_14 = t;
  t = SSL_is_string(o_14);
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_15, p_14);
  t_2 = t;
  t = SSLsetAnnotations(t_2, w_14);
  if(match_cons(t, sym__2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(u_14, v_14, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      ATerm q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  f_15 = t;
  if(match_cons(t, sym__2))
    {
      g_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_15(f_15, t);
            ;
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            {
              ATerm t_8 = t;
              int u_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_15(g_15, h_15, f_15, t);
                  ;
                  LocalPopChoice(u_8);
                }
              else
                {
                  t = t_8;
                  t = u_15(g_15, h_15, f_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_15(f_15, t);
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_v_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_16 = NULL;
      a_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_16, term_d_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      t = debug_1_0(q_1, t);
      _fail(t);
    }
  w_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(x_15, t);
  v_15 = t;
  t = w_15;
  t = fclose_0_0(t);
  t = v_15;
  return(t);
}
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm v_17 (ATerm t)
  {
    ATerm r_17 = NULL,s_17 = NULL,u_17 = NULL;
    r_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_17 = ATgetFirst((ATermList) t);
        u_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_9 = NULL,m_9 = NULL,w_2 = NULL;
          t = SSLgetAnnotations(r_17);
          f_9 = t;
          t = s_17;
          t = u_71(t);
          m_9 = t;
          t = (ATerm) ATinsert(CheckATermList(u_17), m_9);
          w_2 = t;
          t = SSLsetAnnotations(w_2, f_9);
          ;
          LocalPopChoice(g_9);
        }
      else
        {
          t = e_9;
          {
            ATerm x_9 = NULL,d_10 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(r_17);
            x_9 = t;
            t = u_17;
            t = v_17(t);
            d_10 = t;
            t = (ATerm) ATinsert(CheckATermList(d_10), s_17);
            x_2 = t;
            t = SSLsetAnnotations(x_2, x_9);
          }
        }
    }
    return(t);
  }
  t = v_17(t);
  return(t);
}
ATerm t_3 (ATerm f_41, ATerm g_41, ATerm t)
{
  t = SSL_strcat(f_41, g_41);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_19 = NULL;
      b_19 = t;
      t = SSL_is_string(b_19);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_1, t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm k_19 = NULL,m_19 = NULL,n_19 = NULL;
              k_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_19 = ATgetArgument(t, 0);
                  t = m_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_19 = ATgetArgument(t, 0);
                      t = m_19;
                      {
                        ATerm p_9 = t;
                        int q_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_9);
                          }
                        else
                          {
                            t = p_9;
                            t = debug_1_0(t_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_19 = NULL,s_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_19 = ATgetArgument(t, 0);
                          n_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_19;
                      t = eval_config_0_0(t);
                      r_19 = t;
                      t = n_19;
                      t = eval_config_0_0(t);
                      s_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_19, s_19);
                      t = t_3(r_19, s_19, t);
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
  ATerm w_19 = NULL,x_19 = NULL;
  w_19 = t;
  t = term_r_9;
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, w_19);
  t = c_4(x_19, w_19, t);
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_19 = NULL,z_19 = NULL;
        t = eval_config_0_0(t);
        y_19 = t;
        t = term_r_9;
        z_19 = t;
        t = SSL_table_put(z_19, w_19, y_19);
        t = y_19;
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
      }
  }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  if(match_string(t, "-k"))
    {
      t = d_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_20;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  e_20 = t;
  t = SSL_string_to_int(e_20);
  f_20 = t;
  t = term_u_9;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, f_20);
  t = f_4(g_20, f_20, t);
  t = e_20;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_1, w_1, y_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm i_20 = NULL;
  i_20 = t;
  if(match_string(t, "-S"))
    {
      t = i_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_20;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  t = term_f_6;
  j_20 = t;
  t = term_w_9;
  k_20 = t;
  t = term_y_9;
  t = f_4(j_20, k_20, t);
  t = term_z_9;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm d_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  t = SSL_string_to_int(l_20);
  m_20 = t;
  t = term_f_6;
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_6, m_20);
  t = f_4(n_20, m_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_20);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  t = term_c_10;
  o_20 = t;
  t = term_w_5;
  p_20 = t;
  t = term_e_10;
  t = f_4(o_20, p_20, t);
  t = term_f_10;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_1, a_2, c_2, t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_2, f_2, k_2, t);
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            t = Option_3_0(m_2, n_2, o_2, t);
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm q_20 = NULL;
  t = term_r_9;
  q_20 = t;
  t = SSL_table_put(q_20, n_41, o_41);
  t = (ATerm) ATmakeAppl(sym__3, term_r_9, n_41, o_41);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
      t = term_w_5;
      t = d_0(t);
      v_20 = t;
      t = term_l_10;
      w_20 = t;
      t = term_m_10;
      x_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_10, term_m_10, v_20);
      t = d_4(w_20, x_20, v_20, t);
      _fail(t);
    }
  else
    {
      ATerm a_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_20 = ATgetFirst((ATermList) t);
          u_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_20;
      t = a_0(t);
      t = term_w_5;
      t = c_0(t);
      a_21 = t;
      t = (ATerm) ATinsert(CheckATermList(u_20), a_21);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  if(match_string(t, "-o"))
    {
      t = c_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_21;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  d_21 = t;
  t = term_n_10;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, d_21);
  t = f_4(e_21, d_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_21);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
ATerm d_4 (ATerm h_25, ATerm i_25, ATerm g_25, ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_25, i_25);
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_10 = ATgetArgument(t, 0);
            ATerm s_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_25, i_25);
        t = c_4(h_25, i_25, t);
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = (ATerm) ATempty;
      }
    h_21 = t;
    t = (ATerm) ATinsert(CheckATermList(h_21), g_25);
    i_21 = t;
    t = SSL_table_put(h_25, i_25, i_21);
    t = g_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
      t = term_w_5;
      t = j_0(t);
      t_21 = t;
      t = term_l_10;
      u_21 = t;
      t = term_m_10;
      v_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_10, term_m_10, t_21);
      t = d_4(u_21, v_21, t_21, t);
      _fail(t);
    }
  else
    {
      ATerm z_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_21 = ATgetFirst((ATermList) t);
          q_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_21 = ATgetFirst((ATermList) t);
          s_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_21;
      t = h_0(t);
      t = r_21;
      t = i_0(t);
      z_21 = t;
      t = (ATerm) ATinsert(CheckATermList(s_21), z_21);
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  if(match_string(t, "-i"))
    {
      t = b_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_22;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  c_22 = t;
  t = term_t_10;
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, c_22);
  t = f_4(d_22, c_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_22);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, y_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_5;
  t = whoami_0_0(t);
  e_22 = t;
  t = term_x_5;
  g_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_10), e_22);
  h_22 = t;
  t = SSL_printnl(g_22, h_22);
  t = term_a_6;
  f_22 = t;
  t = SSL_exit(f_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_4 (ATerm l_23, ATerm m_23, ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_23, m_23);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      t = SSL_addr(l_23, m_23);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  j_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_22;
      t = c_78(t);
    }
  else
    {
      ATerm o_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_22 = ATgetFirst((ATermList) t);
          l_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_22;
      t = foldr_2_0(c_78, d_78, t);
      o_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_22, o_22);
      t = d_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(h_11, i_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_22 = NULL,x_10 = NULL,b_11 = NULL;
  t = times_0_0(t);
  b_11 = t;
  t = SSL_explode_term(b_11);
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_10;
  t = foldr_2_0(z_2, b_3, t);
  r_22 = t;
  t = SSL_TicksToSeconds(r_22);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym__2))
    {
      d_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_23;
        if((d_23 != t))
          {
            _fail(t);
          }
        t = c_23;
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = (ATerm) ATmakeAppl(sym__2, d_23, e_23);
        {
          ATerm e_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_23, e_23);
              ;
              LocalPopChoice(f_11);
            }
          else
            {
              t = e_11;
              t = SSL_gtr(d_23, e_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_23, e_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm i_23 = NULL;
  i_23 = t;
  {
    ATerm g_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_23 = NULL;
        t = term_f_6;
        t = get_config_0_0(t);
        k_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_23, term_a_6);
        t = geq_0_0(t);
        t = i_23;
        t = w_82(t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = g_11;
        t = i_23;
      }
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,r_23 = NULL,s_23 = NULL;
  t = run_time_0_0(t);
  o_23 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  p_23 = t;
  t = term_x_5;
  r_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_11), o_23), term_k_11), p_23);
  s_23 = t;
  t = SSL_printnl(r_23, s_23);
  t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_11), o_23), term_k_11), p_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_9;
  t_23 = t;
  t = SSL_exit(t_23);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  c_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_24 = ATgetArgument(t, 0);
          {
            ATerm j_12 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(c_24);
            j_12 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_24);
            a_3 = t;
            t = SSLsetAnnotations(a_3, j_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = fetch_1_0(f_3, t);
    }
  t = d_85(t);
  return(t);
}
ATerm map_1_0 (ATerm k_71 (ATerm), ATerm t)
{
  ATerm t_24 (ATerm t)
  {
    ATerm p_24 = NULL,q_24 = NULL,s_24 = NULL;
    p_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_24;
      }
    else
      {
        ATerm v_12 = NULL,e_13 = NULL,f_13 = NULL,c_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_24 = ATgetFirst((ATermList) t);
            s_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_24);
        v_12 = t;
        t = q_24;
        t = k_71(t);
        e_13 = t;
        t = s_24;
        t = t_24(t);
        f_13 = t;
        t = (ATerm) ATinsert(CheckATermList(f_13), e_13);
        c_3 = t;
        t = SSLsetAnnotations(c_3, v_12);
      }
    return(t);
  }
  t = t_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_24 = ATgetFirst((ATermList) t);
      x_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_25 = NULL,c_25 = NULL;
        ATerm k_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_25)), not_null(c_25));
          return(t);
        }
        t = not_null(x_24);
        t = g_0(t);
        if(((b_25 != NULL) && (b_25 != t)))
          _fail(t);
        else
          b_25 = t;
        t = not_null(w_24);
        t = e_0(t);
        if(((c_25 != NULL) && (c_25 != t)))
          _fail(t);
        else
          c_25 = t;
        t = not_null(x_24);
        t = reverse_acc_2_0(e_0, k_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_5;
      t = g_0(t);
    }
  return(t);
}
ATerm c_4 (ATerm y_26, ATerm z_26, ATerm t)
{
  t = SSL_table_get(y_26, z_26);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,e_3 = NULL;
  l_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_25);
  e_3 = t;
  t = SSLsetAnnotations(e_3, j_25);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_25), term_w_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      t = fetch_1_0(l_3, t);
    }
  t = term_z_11;
  t = echo_0_0(t);
  t = term_l_10;
  e_25 = t;
  t = term_m_10;
  f_25 = t;
  t = term_a_12;
  t = c_4(e_25, f_25, t);
  t = reverse_acc_2_0(_id, n_3, t);
  t = map_1_0(o_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_12 = ATgetFirst((ATermList) t);
                ATerm e_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_25;
          }
        ;
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = (ATerm) ATinsert(ATempty, p_25);
      }
    q_25 = t;
    t = term_r_7;
    r_25 = t;
    t = SSL_printnl(r_25, q_25);
    t = p_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  t = term_f_12;
  v_25 = t;
  t = term_w_5;
  w_25 = t;
  t = term_g_12;
  t = f_4(v_25, w_25, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  t = term_f_12;
  z_25 = t;
  t = term_w_5;
  a_26 = t;
  t = term_g_12;
  t = f_4(z_25, a_26, t);
  t = term_k_12;
  x_25 = t;
  t = term_w_5;
  y_25 = t;
  t = term_l_12;
  t = f_4(x_25, y_25, t);
  t = term_m_12;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_3, r_3, s_3, t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      t = Option_3_0(g_4, i_4, l_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,g_3 = NULL;
  g_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_26 = ATgetFirst((ATermList) t);
      d_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_26);
  b_26 = t;
  t = c_26;
  t = a_61(t);
  e_26 = t;
  t = d_26;
  t = b_61(t);
  f_26 = t;
  t = (ATerm) ATinsert(CheckATermList(f_26), e_26);
  g_3 = t;
  t = SSLsetAnnotations(g_3, b_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,q_26 = NULL,r_26 = NULL,m_3 = NULL;
  if(((l_26 != NULL) && (l_26 != t)))
    _fail(t);
  else
    l_26 = t;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_12;
        t = z_89(t);
        ;
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
      }
    t = not_null(l_26);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_26 != NULL) && (n_26 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_26 = ATgetFirst((ATermList) t);
        if(((o_26 != NULL) && (o_26 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          o_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(l_26));
    if(((m_26 != NULL) && (m_26 != t)))
      _fail(t);
    else
      m_26 = t;
    t = term_w_10;
    if(((r_26 != NULL) && (r_26 != t)))
      _fail(t);
    else
      r_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(n_26));
    t = f_4(not_null(r_26), not_null(n_26), t);
    t = not_null(o_26);
    {
      ATerm d_27 (ATerm t)
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_12 = t;
            int g_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_26 = NULL;
                u_26 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = u_26;
                ;
                LocalPopChoice(g_13);
              }
            else
              {
                t = y_12;
                t = z_89(t);
                t = Cons_2_0(_id, d_27, t);
              }
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            {
              ATerm x_26 = NULL,a_27 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_26 = ATgetFirst((ATermList) t);
                  a_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_27), (ATerm) ATmakeAppl(sym_Undefined_1, x_26));
            }
          }
        return(t);
      }
      t = d_27(t);
      if(((q_26 != NULL) && (q_26 != t)))
        _fail(t);
      else
        q_26 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(q_26)), (ATerm) ATmakeAppl(sym_Program_1, not_null(n_26)));
      if(((m_3 != NULL) && (m_3 != t)))
        _fail(t);
      else
        m_3 = t;
      t = SSLsetAnnotations(not_null(m_3), not_null(m_26));
    }
  }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  if(match_string(t, "--help"))
    {
      t = p_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_27;
        }
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  t = term_q_11;
  q_27 = t;
  t = term_w_5;
  r_27 = t;
  t = term_h_13;
  t = f_4(q_27, r_27, t);
  t = term_i_13;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm v_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  if(((k_27 != NULL) && (k_27 != t)))
    _fail(t);
  else
    k_27 = t;
  t = term_l_10;
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  t = term_m_10;
  if(((n_27 != NULL) && (n_27 != t)))
    _fail(t);
  else
    n_27 = t;
  t = (ATerm) ATempty;
  if(((o_27 != NULL) && (o_27 != t)))
    _fail(t);
  else
    o_27 = t;
  t = SSL_table_put(not_null(m_27), not_null(n_27), not_null(o_27));
  t = not_null(k_27);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm m_13 = t;
      int n_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_89(t);
          ;
          LocalPopChoice(n_13);
        }
      else
        {
          t = m_13;
          {
            ATerm p_13 = t;
            int q_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_4, s_4, t_4, t);
                ;
                LocalPopChoice(q_13);
              }
            else
              {
                t = p_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_27 = NULL;
          y_27 = t;
          {
            ATerm t_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_13 = NULL;
                t = y_27;
                {
                  ATerm a_14 = t;
                  int b_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_14);
                    }
                  else
                    {
                      t = a_14;
                      t = fetch_1_0(v_4, t);
                    }
                  t = y_27;
                  t = default_system_usage_0_0(t);
                  t = term_w_9;
                  o_13 = t;
                  t = SSL_exit(o_13);
                }
                ;
                LocalPopChoice(z_13);
              }
            else
              {
                t = t_13;
                {
                  ATerm w_13 = NULL;
                  t = term_f_12;
                  t = get_config_0_0(t);
                  t = y_27;
                  t = default_system_about_0_0(t);
                  t = term_w_9;
                  w_13 = t;
                  t = SSL_exit(w_13);
                }
              }
          }
          ;
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          {
            ATerm e_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                ATerm w_4 (ATerm t)
                {
                  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,h_4 = NULL;
                  e_28 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      d_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_28);
                  c_28 = t;
                  t = d_28;
                  if(((i_27 != NULL) && (i_27 != t)))
                    _fail(t);
                  else
                    i_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_28);
                  h_4 = t;
                  t = SSLsetAnnotations(h_4, c_28);
                  return(t);
                }
                t = fetch_1_0(w_4, t);
                t = term_x_5;
                if(((a_28 != NULL) && (a_28 != t)))
                  _fail(t);
                else
                  a_28 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_27)), term_g_14);
                if(((b_28 != NULL) && (b_28 != t)))
                  _fail(t);
                else
                  b_28 = t;
                t = SSL_printnl(not_null(a_28), not_null(b_28));
                t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_27)), term_g_14));
                t = default_system_usage_0_0(t);
                t = term_a_6;
                if(((z_27 != NULL) && (z_27 != t)))
                  _fail(t);
                else
                  z_27 = t;
                t = SSL_exit(not_null(z_27));
                ;
                LocalPopChoice(f_14);
              }
            else
              {
                t = e_14;
              }
          }
        }
      if(((j_27 != NULL) && (j_27 != t)))
        _fail(t);
      else
        j_27 = t;
      t = term_l_10;
      if(((l_27 != NULL) && (l_27 != t)))
        _fail(t);
      else
        l_27 = t;
      t = SSL_table_destroy(not_null(l_27));
      t = not_null(j_27);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
  t = parse_options_1_0(f_85, t);
  j_28 = t;
  t = term_h_14;
  m_28 = t;
  t = SSL_table_create(m_28);
  t = term_h_14;
  k_28 = t;
  t = term_i_14;
  l_28 = t;
  t = SSL_table_put(k_28, l_28, j_28);
  t = j_28;
  t = h_85(t);
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_85, t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          ATerm m_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_14);
            }
          else
            {
              t = m_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = if_verbose2_1_0(f_5, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  t = term_r_14;
  n_28 = t;
  t = term_w_5;
  o_28 = t;
  t = term_s_14;
  t = f_4(n_28, o_28, t);
  t = term_t_14;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  p_28 = t;
  t = term_w_10;
  t = get_config_0_0(t);
  q_28 = t;
  t = term_x_5;
  r_28 = t;
  t = (ATerm) ATinsert(ATempty, q_28);
  s_28 = t;
  t = SSL_printnl(r_28, s_28);
  t = p_28;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_84(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm a_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(c_15);
            }
          else
            {
              t = a_15;
              {
                ATerm d_15 = t;
                int e_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(e_15);
                  }
                else
                  {
                    t = d_15;
                    {
                      ATerm i_15 = t;
                      int j_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_5, c_5, e_5, t);
                          ;
                          LocalPopChoice(j_15);
                        }
                      else
                        {
                          t = i_15;
                          {
                            ATerm k_15 = t;
                            int m_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_15);
                              }
                            else
                              {
                                t = k_15;
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
  ATerm z_4 (ATerm t)
  {
    ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
    if(((u_28 != NULL) && (u_28 != t)))
      _fail(t);
    else
      u_28 = t;
    {
      ATerm n_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_28 != NULL) && (t_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_5, t);
          ;
          LocalPopChoice(o_15);
        }
      else
        {
          t = n_15;
          t = term_p_15;
          if(((t_28 != NULL) && (t_28 != t)))
            _fail(t);
          else
            t_28 = t;
        }
      t = not_null(t_28);
      t = ReadFromFile_0_0(t);
      if(((v_28 != NULL) && (v_28 != t)))
        _fail(t);
      else
        v_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_28), not_null(v_28));
      t = apply_strategy_1_0(o_84, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_4, q_84, y_4, z_4, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm g_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,u_4 = NULL;
  l_29 = t;
  if(match_cons(t, sym__2))
    {
      j_29 = ATgetArgument(t, 0);
      k_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_29);
  g_29 = t;
  t = k_29;
  {
    ATerm q_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_31 = NULL,h_27 = NULL,x_28 = NULL,r_4 = NULL;
        if(match_cons(t, sym_TreeGrammar_1))
          {
            f_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_29);
        h_27 = t;
        t = f_31;
        t = fc_List_1_0(i_5, t);
        x_28 = t;
        t = (ATerm) ATmakeAppl(sym_TreeGrammar_1, x_28);
        r_4 = t;
        t = SSLsetAnnotations(r_4, h_27);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = q_15;
        t = if_verbose2_1_0(u_5, t);
      }
    t = (ATerm) ATmakeAppl(sym__2, j_29, k_29);
    u_4 = t;
    t = SSLsetAnnotations(u_4, g_29);
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm t_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,g_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,p_4 = NULL;
      l_32 = t;
      if(match_cons(t, sym_NonTermDec_3))
        {
          m_32 = ATgetArgument(t, 0);
          n_32 = ATgetArgument(t, 1);
          o_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_32);
      g_34 = t;
      t = m_32;
      {
        ATerm z_15 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_34 = NULL,u_35 = NULL,w_35 = NULL,j_4 = NULL;
            if(match_cons(t, sym_Id_1))
              {
                t_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_32);
            u_35 = t;
            t = SSL_is_string(t_34);
            w_35 = t;
            t = (ATerm) ATmakeAppl(sym_Id_1, w_35);
            j_4 = t;
            t = SSLsetAnnotations(j_4, u_35);
            ;
            LocalPopChoice(b_16);
          }
        else
          {
            t = z_15;
            t = if_verbose2_1_0(j_5, t);
          }
        k_34 = t;
        t = SSL_is_int(n_32);
        l_34 = t;
        t = o_32;
        t = fc_List_1_0(n_5, t);
        m_34 = t;
        t = (ATerm) ATmakeAppl(sym_NonTermDec_3, k_34, l_34, m_34);
        p_4 = t;
        t = SSLsetAnnotations(p_4, g_34);
      }
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = t_15;
      t = if_verbose2_1_0(s_5, t);
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = debug_1_0(l_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_j_6;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,g_36 = NULL,j_36 = NULL,k_36 = NULL,n_4 = NULL;
      j_35 = t;
      if(match_cons(t, sym_Prod_2))
        {
          k_35 = ATgetArgument(t, 0);
          l_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_35);
      g_36 = t;
      t = k_35;
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_36 = NULL,x_36 = NULL,z_36 = NULL,k_4 = NULL;
            if(match_cons(t, sym_Id_1))
              {
                r_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_35);
            x_36 = t;
            t = SSL_is_string(r_36);
            z_36 = t;
            t = (ATerm) ATmakeAppl(sym_Id_1, z_36);
            k_4 = t;
            t = SSLsetAnnotations(k_4, x_36);
            ;
            LocalPopChoice(f_16);
          }
        else
          {
            t = e_16;
            t = if_verbose2_1_0(o_5, t);
          }
        j_36 = t;
        t = l_35;
        t = fc_List_1_0(fc_ProdItem_0_0, t);
        k_36 = t;
        t = (ATerm) ATmakeAppl(sym_Prod_2, j_36, k_36);
        n_4 = t;
        t = SSLsetAnnotations(n_4, g_36);
      }
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      t = if_verbose2_1_0(q_5, t);
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = debug_1_0(p_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_j_6;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = debug_1_0(r_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = debug_1_0(t_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = debug_1_0(v_5, t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_i_16;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_5, _fail, default_usage_0_0, t);
  return(t);
}
