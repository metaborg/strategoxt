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
Symbol sym_Imports_1;
Symbol sym_Strategies_1;
Symbol sym_Module_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Str_1;
Symbol sym_CallNoArgs_1;
Symbol sym_Choice_2;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Build_1;
Symbol sym_LChoice_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_3;
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
Symbol sym_Undefined_0;
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
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_e_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_k_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_h_15;
ATerm term_y_14;
ATerm term_a_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_s_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_e_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_o_9;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_t_7;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_t_4;
ATerm term_r_4;
void init_constant_terms (void)
{
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-param", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_6);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_p_6);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_s_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("if-verbose2", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_8);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("integers", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("verbose", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym__3, term_t_15, term_u_15, term_r_4);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm x_90 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm k_0 (ATerm);
ATerm p_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm create_call_0_0 (ATerm);
ATerm to_fc_Body_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm to_fc_SDef_0_0 (ATerm);
ATerm tg_to_format_checker_0_0 (ATerm);
ATerm _2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm b_7 (ATerm t_6, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_109 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm y_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_109 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm need_help_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm w_81 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_101 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm parse_options_1_0 (ATerm m_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm iowrap_3_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_0 = NULL,m_0 = NULL;
  l_0 = t;
  t = term_r_4;
  t = whoami_0_0(t);
  m_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), m_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = l_0;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm o_0 = NULL;
  o_0 = t;
  t = SSL_explode_string(o_0);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm n_0 = NULL;
  t = map_1_0(c_0, t);
  t = concat_0_0(t);
  n_0 = t;
  t = SSL_implode_string(n_0);
  return(t);
}
ATerm map_with_index_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  ATerm t_0 = NULL;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_4, t_0);
  {
    ATerm a_2 (ATerm t)
    {
      ATerm k_1 = NULL,n_1 = NULL,t_1 = NULL,z_1 = NULL;
      if(match_cons(t, sym__2))
        {
          k_1 = ATgetArgument(t, 0);
          n_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_1;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm w_0 = NULL,y_0 = NULL,a_1 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_1 = ATgetFirst((ATermList) t);
              z_1 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, k_1, t_1);
          t = x_90(t);
          w_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_1, term_t_4);
          {
            ATerm u_4 = t;
            int v_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(k_1, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(v_4);
              }
            else
              {
                t = u_4;
                t = SSL_addr(k_1, (ATerm) ATmakeInt(1));
              }
            y_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_0, z_1);
            t = a_2(t);
            a_1 = t;
            t = (ATerm) ATinsert(CheckATermList(a_1), w_0);
          }
        }
      return(t);
    }
    t = a_2(t);
  }
  return(t);
}
ATerm while_not_2_0 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm y_4 = t;
    int m_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_102(t);
        ;
        LocalPopChoice(m_5);
      }
    else
      {
        t = y_4;
        t = j_102(t);
        t = j_2(t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm for_3_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm t)
{
  t = l_102(t);
  t = while_not_2_0(m_102, n_102, t);
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm k_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      k_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_2, m_2, (ATerm) ATempty);
  return(t);
}
ATerm k_0 (ATerm t)
{
  ATerm n_2 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm s_5 = ATgetArgument(t, 0);
      if(((ATgetType(s_5) != AT_INT) || (ATgetInt((ATermInt) s_5) != 0)))
        _fail(t);
      {
        ATerm t_5 = ATgetArgument(t, 1);
      }
      n_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_2;
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__3))
    {
      p_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
      r_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_2, term_t_4);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, p_2, term_t_4);
  {
    ATerm e_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(p_2, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(m_6);
      }
    else
      {
        t = e_6;
        t = SSL_subtr(p_2, (ATerm) ATmakeInt(1));
      }
    t_2 = t;
    t = (ATerm) ATmakeAppl(sym__3, t_2, q_2, (ATerm) ATinsert(CheckATermList(r_2), q_2));
  }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(e_0, k_0, p_0, t);
  return(t);
}
ATerm create_call_0_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,k_3 = NULL,m_3 = NULL;
  e_3 = t;
  if(match_cons(t, sym_Param_1))
    {
      f_3 = ATgetArgument(t, 0);
      {
        ATerm p_1 = NULL;
        t = SSL_int_to_string(f_3);
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_6, p_1);
        t = conc_strings_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_String_0))
        {
          t = term_q_6;
        }
      else
        {
          if(match_cons(t, sym_Int_0))
            {
              t = term_u_6;
            }
          else
            {
              if(match_cons(t, sym_NonTermRef_2))
                {
                  f_3 = ATgetArgument(t, 0);
                  m_3 = ATgetArgument(t, 1);
                  {
                    ATerm p_3 = NULL,q_3 = NULL;
                    t = f_3;
                    if(match_cons(t, sym_Id_1))
                      {
                        k_3 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_v_6, k_3);
                    t = conc_strings_0_0(t);
                    p_3 = t;
                    t = m_3;
                    t = map_1_0(create_call_0_0, t);
                    q_3 = t;
                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_3), q_3);
                  }
                }
              else
                {
                  ATerm w_3 = NULL;
                  if(match_cons(t, sym_Prod_2))
                    {
                      f_3 = ATgetArgument(t, 0);
                      m_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_3;
                  if(match_cons(t, sym_Id_1))
                    {
                      k_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_3;
                  t = map_1_0(create_call_0_0, t);
                  w_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_3), w_3);
                }
            }
        }
    }
  return(t);
}
ATerm to_fc_Body_0_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,f_4 = NULL,s_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_4 = ATgetFirst((ATermList) t);
      s_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_4 = ATgetFirst((ATermList) t);
      b_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_4 = NULL,x_4 = NULL;
        t = f_4;
        t = create_call_0_0(t);
        w_4 = t;
        t = (ATerm) ATinsert(CheckATermList(b_4), a_4);
        t = to_fc_Body_0_0(t);
        x_4 = t;
        t = (ATerm) ATmakeAppl(sym_Choice_2, w_4, x_4);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_4;
      t = create_call_0_0(t);
    }
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL;
  v_1 = t;
  t = SSL_explode_term(v_1);
  if(match_cons(t, sym__2))
    {
      ATerm z_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_7 = ATgetArgument(t, 1);
        if(((ATgetType(a_7) == AT_LIST) && !(ATisEmpty(a_7))))
          {
            w_1 = ATgetFirst((ATermList) a_7);
            {
              ATerm f_7 = (ATerm) ATgetNext((ATermList) a_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_1;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  t = SSL_int_to_string(g_5);
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_6, i_5);
  t = conc_strings_0_0(t);
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_5);
  return(t);
}
ATerm to_fc_SDef_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm g_7 = ATgetArgument(t, 0);
      if(match_cons(g_7, sym_Id_1))
        {
          z_4 = ATgetArgument(g_7, 0);
        }
      else
        _fail(t);
      a_5 = ATgetArgument(t, 1);
      b_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, z_4);
  t = conc_strings_0_0(t);
  c_5 = t;
  t = b_5;
  t = to_fc_Body_0_0(t);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, term_r_4);
  t = copy_0_0(t);
  t = map_with_index_1_0(q_0, t);
  t = map_1_0(r_0, t);
  e_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_7), z_4), term_h_7);
  t = concat_strings_0_0(t);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, c_5, e_5, (ATerm) ATmakeAppl(sym_LChoice_2, d_5, (ATerm) ATmakeAppl(sym_Call_2, term_t_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, term_b_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_5))))))));
  return(t);
}
ATerm tg_to_format_checker_0_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      j_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5;
  t = map_1_0(to_fc_SDef_0_0, t);
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, k_5)), (ATerm) ATmakeAppl(sym_Imports_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), term_f_8), term_d_8))));
  return(t);
}
ATerm _2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  r_5 = t;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_5);
  l_5 = t;
  t = n_5;
  t = t_64(t);
  p_5 = t;
  t = o_5;
  t = u_64(t);
  q_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, p_5, q_5), l_5);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_5, term_l_8);
  t = open_stream_0_0(t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_5, v_5);
  t = g_99(t);
  t = fclose_0_0(t);
  t = v_5;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = fetch_1_0(b_1, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = WriteToFile_1_0(c_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if(match_cons(m_8, sym_Stream_1))
        {
          z_5 = ATgetArgument(m_8, 0);
        }
      else
        _fail(t);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(z_5, a_6);
  b_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_6);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = WriteToFile_1_0(e_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL,f_6 = NULL,g_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if(match_cons(n_8, sym_Stream_1))
        {
          c_6 = ATgetArgument(n_8, 0);
        }
      else
        _fail(t);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(c_6, d_6);
  f_6 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), f_6);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_6);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  x_5 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm o_8 = t;
      int p_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((y_5 != NULL) && (y_5 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_0, t);
          ;
          LocalPopChoice(p_8);
        }
      else
        {
          t = o_8;
          t = term_r_8;
          if(((y_5 != NULL) && (y_5 != t)))
            _fail(t);
          else
            y_5 = t;
        }
      return(t);
    }
    t = _2_0(s_0, _id, t);
    t = x_5;
    {
      ATerm v_0 (ATerm t)
      {
        ATerm x_1 = NULL;
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_5), x_1);
        return(t);
      }
      t = _2_0(_id, v_0, t);
      {
        ATerm v_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(x_0, z_0, t);
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = v_8;
            t = _2_0(_id, d_1, t);
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
ATerm apply_strategy_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  h_6 = t;
  t = dtime_0_0(t);
  t = h_6;
  t = r_82(t);
  i_6 = t;
  t = dtime_0_0(t);
  j_6 = t;
  t = i_6;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_6), (ATerm) ATmakeAppl(sym_Runtime_1, j_6)), l_6);
  return(t);
}
ATerm b_7 (ATerm t_6, ATerm t)
{
  t = SSL_fclose(t_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  x_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_6 = ATgetArgument(t, 0);
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_6);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            t = b_7(x_6, t);
          }
      }
    }
  else
    {
      t = b_7(x_6, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_7 = NULL;
  t = SSL_stdin_stream();
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_7 = NULL;
  t = SSL_stdout_stream();
  d_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_7 = NULL;
  t = SSL_stderr_stream();
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_7);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm q_7 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      q_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm v_7 = NULL;
  v_7 = t;
  t = SSL_is_string(v_7);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      ATerm c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_2 = NULL,w_2 = NULL;
        v_2 = t;
        t = SSL_explode_term(v_2);
        if(match_cons(t, sym__2))
          {
            ATerm f_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_9 = ATgetArgument(t, 1);
              if(((ATgetType(g_9) == AT_LIST) && !(ATisEmpty(g_9))))
                {
                  w_2 = ATgetFirst((ATermList) g_9);
                  {
                    ATerm i_9 = (ATerm) ATgetNext((ATermList) g_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = w_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = w_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        {
          ATerm j_9 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
              t = _2_0(f_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  n_7 = ATgetArgument(t, 0);
                  o_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(n_7, o_7);
              p_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, p_7);
              ;
              LocalPopChoice(k_9);
            }
          else
            {
              t = j_9;
              {
                ATerm r_7 = NULL,s_7 = NULL,u_7 = NULL;
                t = _2_0(g_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    r_7 = ATgetArgument(t, 0);
                    s_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(r_7, s_7);
                u_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, u_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7 = NULL;
      z_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_7, term_o_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      {
        ATerm x_2 = NULL;
        x_2 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = x_2;
        _fail(t);
      }
    }
  w_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(y_7);
  x_7 = t;
  t = w_7;
  t = fclose_0_0(t);
  t = x_7;
  return(t);
}
ATerm fetch_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_89, _id, t);
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        t = Cons_2_0(_id, e_8, t);
      }
    return(t);
  }
  t = e_8(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_9);
    }
  else
    {
      t = t_9;
      {
        ATerm j_8 = NULL,k_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_8 = ATgetFirst((ATermList) t);
            k_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_8;
        {
          ATerm h_1 (ATerm t)
          {
            t = k_8;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(h_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_8, t);
        ;
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_89(t);
      }
    return(t);
  }
  t = q_8(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  t = SSL_explode_string(t_8);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm u_8 = NULL;
  u_8 = t;
  t = SSL_explode_string(u_8);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm s_8 = NULL;
  t = _2_0(i_1, j_1, t);
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 = NULL,x_8 = NULL;
        if(match_cons(t, sym__2))
          {
            w_8 = ATgetArgument(t, 0);
            x_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_8;
        {
          ATerm l_1 (ATerm t)
          {
            t = x_8;
            return(t);
          }
          t = at_end_1_0(l_1, t);
        }
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        {
          ATerm i_3 = NULL,j_3 = NULL;
          i_3 = t;
          t = SSL_explode_term(i_3);
          if(match_cons(t, sym__2))
            {
              ATerm b_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              j_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_3;
          t = concat_0_0(t);
        }
      }
    s_8 = t;
    t = SSL_implode_string(s_8);
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm c_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = c_10;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_9 = NULL;
      h_9 = t;
      t = SSL_is_string(h_9);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = g_10;
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            {
              ATerm l_9 = NULL,p_9 = NULL,q_9 = NULL;
              l_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_9 = ATgetArgument(t, 0);
                  t = p_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_9 = ATgetArgument(t, 0);
                      t = p_9;
                      {
                        ATerm u_10 = t;
                        int v_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_9);
                            {
                              ATerm x_10 = t;
                              int y_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_4 = NULL;
                                  t = eval_config_0_0(t);
                                  q_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_9, q_4);
                                  t = q_4;
                                  ;
                                  LocalPopChoice(y_10);
                                }
                              else
                                {
                                  t = x_10;
                                }
                            }
                            ;
                            LocalPopChoice(v_10);
                          }
                        else
                          {
                            t = u_10;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_9), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = p_9;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_9 = NULL,v_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_9 = ATgetArgument(t, 0);
                          q_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_9;
                      t = eval_config_0_0(t);
                      u_9 = t;
                      t = q_9;
                      t = eval_config_0_0(t);
                      v_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm z_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_10 = NULL,f_10 = NULL;
      d_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm e_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_6 = NULL;
            t = eval_config_0_0(t);
            y_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_6);
            t = y_6;
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = e_11;
          }
        f_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, term_h_11);
        t = geq_0_0(t);
        t = d_10;
        t = p_109(t);
      }
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = z_10;
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  if(match_string(t, "-k"))
    {
      t = h_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_10;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  j_10 = t;
  t = SSL_string_to_int(j_10);
  k_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), k_10);
  t = j_10;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_1, q_1, r_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  if(match_string(t, "-S"))
    {
      t = m_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_10;
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_p_11;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm b_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL;
  n_10 = t;
  t = SSL_string_to_int(n_10);
  o_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_10);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_10);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm e_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_11;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_1, u_1, y_1, t);
      ;
      LocalPopChoice(a_12);
    }
  else
    {
      t = u_11;
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_2, c_2, d_2, t);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            t = Option_3_0(e_2, f_2, g_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_10 = NULL;
      t = term_r_4;
      t = d_0(t);
      t_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_12, term_i_12, t_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm a_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_10 = ATgetFirst((ATermList) t);
          s_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_10;
      t = a_0(t);
      t = term_r_4;
      t = b_0(t);
      a_11 = t;
      t = (ATerm) ATinsert(CheckATermList(s_10), a_11);
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  if(match_string(t, "-o"))
    {
      t = c_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_11;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), d_11);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_11);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_2, i_2, l_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__3))
    {
      k_11 = ATgetArgument(t, 0);
      l_11 = ATgetArgument(t, 1);
      m_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_11, l_11);
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_12 = ATgetArgument(t, 0);
            ATerm q_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_11, l_11);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = (ATerm) ATempty;
      }
    n_11 = t;
    t = SSL_table_put(k_11, l_11, (ATerm) ATinsert(CheckATermList(n_11), m_11));
    t = (ATerm) ATmakeAppl(sym__3, k_11, l_11, m_11);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_11 = NULL;
      t = term_r_4;
      t = j_0(t);
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_12, term_i_12, z_11);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_11 = ATgetFirst((ATermList) t);
          w_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_11 = ATgetFirst((ATermList) t);
          y_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_11;
      t = h_0(t);
      t = x_11;
      t = i_0(t);
      d_12 = t;
      t = (ATerm) ATinsert(CheckATermList(y_11), d_12);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  if(match_string(t, "-i"))
    {
      t = f_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_12;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_12);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_12);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_2, s_2, u_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_4;
  t = whoami_0_0(t);
  h_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_12));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL;
        t = eval_config_0_0(t);
        j_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_7);
        t = j_7;
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_95(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm k_12 = NULL,l_12 = NULL,o_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_12 = ATgetFirst((ATermList) t);
            l_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_12;
        t = foldr_2_0(q_95, r_95, t);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_12, o_12);
        t = r_95(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_8, h_8);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = SSL_addr(g_8, h_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_12 = NULL,k_7 = NULL,m_7 = NULL;
  t = times_0_0(t);
  k_7 = t;
  t = SSL_explode_term(k_7);
  if(match_cons(t, sym__2))
    {
      ATerm z_12 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7;
  t = foldr_2_0(y_2, z_2, t);
  r_12 = t;
  t = SSL_TicksToSeconds(r_12);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_13;
        if((d_13 != t))
          {
            _fail(t);
          }
        t = c_13;
        ;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = c_13;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_13, e_13);
              ;
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              t = SSL_gtr(d_13, e_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_13, e_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm i_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_13 = NULL,j_13 = NULL;
      h_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 = NULL;
            t = eval_config_0_0(t);
            l_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_10);
            t = l_10;
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = o_13;
          }
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_13, term_t_4);
        t = geq_0_0(t);
        t = h_13;
        t = o_109(t);
      }
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = i_13;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  t = run_time_0_0(t);
  l_13 = t;
  t = term_r_4;
  t = whoami_0_0(t);
  m_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_13), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), m_13));
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_14), l_13), term_t_13), m_13));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm b_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = b_14;
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm k_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_10 = NULL;
            t = eval_config_0_0(t);
            w_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_10);
            t = w_10;
            ;
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
          }
      }
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = k_14;
      t = fetch_1_0(b_3, t);
    }
  t = p_83(t);
  return(t);
}
ATerm map_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  ATerm n_13 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = Cons_2_0(z_88, n_13, t);
      }
    return(t);
  }
  t = n_13(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_13 = ATgetFirst((ATermList) t);
      q_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_13 = NULL,v_13 = NULL;
        t = q_13;
        t = g_0(t);
        u_13 = t;
        t = p_13;
        t = f_0(t);
        v_13 = t;
        t = q_13;
        {
          ATerm c_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_13), v_13);
            return(t);
          }
          t = reverse_acc_2_0(f_0, c_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_4;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  z_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_13);
  w_13 = t;
  t = x_13;
  t = w_81(t);
  y_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_13), w_13);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_14), term_y_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_11 = NULL;
            t = eval_config_0_0(t);
            f_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_11);
            t = f_11;
            ;
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
          }
      }
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = b_15;
      t = fetch_1_0(d_3, t);
    }
  t = term_h_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, g_3, t);
  t = map_1_0(h_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  g_14 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_14);
  d_14 = t;
  t = e_14;
  t = x_81(t);
  f_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, f_14), d_14);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_15 = ATgetFirst((ATermList) t);
                ATerm p_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_14;
          }
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        t = (ATerm) ATinsert(ATempty, l_14);
      }
    m_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_14);
    t = l_14;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_11 = NULL;
        t = eval_config_0_0(t);
        j_11 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_11);
        t = j_11;
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_w_15;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_16;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_3, n_3, o_3, t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      t = Option_3_0(r_3, s_3, t_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  v_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_14 = ATgetFirst((ATermList) t);
      s_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_14);
  q_14 = t;
  t = r_14;
  t = i_69(t);
  t_14 = t;
  t = s_14;
  t = j_69(t);
  u_14 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(u_14), t_14), q_14);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm a_15 = NULL;
  a_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_15);
  t = (ATerm) ATmakeAppl(sym_Program_1, a_15);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  {
    ATerm h_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_16;
        t = n_101(t);
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = h_16;
      }
    t = z_14;
    {
      ATerm v_3 (ATerm t)
      {
        ATerm l_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_16);
              }
            else
              {
                t = o_16;
                t = n_101(t);
                t = Cons_2_0(_id, v_3, t);
              }
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = l_16;
            {
              ATerm c_15 = NULL,d_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_15 = ATgetFirst((ATermList) t);
                  d_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_15), (ATerm) ATmakeAppl(sym_Undefined_1, c_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_3, v_3, t);
    }
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm n_15 = NULL;
  n_15 = t;
  if(match_string(t, "--help"))
    {
      t = n_15;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_15;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_15;
        }
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_16;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_s_16;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = k_15;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm t_16 = t;
      int u_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_101(t);
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
                t = Option_3_0(y_3, z_3, c_4, t);
                ;
                LocalPopChoice(w_16);
              }
            else
              {
                t = v_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_3, t);
    {
      ATerm x_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_15 = NULL;
          s_15 = t;
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = s_15;
                {
                  ATerm b_17 = t;
                  int c_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm d_17 = t;
                        int e_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_15 = NULL;
                            t = eval_config_0_0(t);
                            x_15 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), x_15);
                            t = x_15;
                            ;
                            LocalPopChoice(e_17);
                          }
                        else
                          {
                            t = d_17;
                          }
                      }
                      ;
                      LocalPopChoice(c_17);
                    }
                  else
                    {
                      t = b_17;
                      t = fetch_1_0(d_4, t);
                    }
                  t = s_15;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm f_17 = t;
                  int g_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_16 = NULL;
                      t = eval_config_0_0(t);
                      i_16 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), i_16);
                      t = i_16;
                      ;
                      LocalPopChoice(g_17);
                    }
                  else
                    {
                      t = f_17;
                    }
                  t = s_15;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_16);
        }
      else
        {
          t = x_16;
          {
            ATerm h_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm g_4 (ATerm t)
                  {
                    if(((l_15 != NULL) && (l_15 != t)))
                      _fail(t);
                    else
                      l_15 = t;
                    return(t);
                  }
                  t = Undefined_1_0(g_4, t);
                  return(t);
                }
                t = fetch_1_0(e_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_15)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_s_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_15)), term_j_17));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = h_17;
              }
          }
        }
      m_15 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = m_15;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t)
{
  ATerm v_15 = NULL;
  t = parse_options_1_0(r_83, t);
  v_15 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), v_15);
  t = v_15;
  t = t_83(t);
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_83, t);
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_83(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = if_verbose2_1_0(n_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_17;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm y_15 = NULL,a_16 = NULL;
  y_15 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_16 = NULL;
        t = eval_config_0_0(t);
        m_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_16);
        t = m_16;
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
      }
    a_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, a_16));
    t = y_15;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_83(t);
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              {
                ATerm w_17 = t;
                int x_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_17);
                  }
                else
                  {
                    t = w_17;
                    {
                      ATerm y_17 = t;
                      int z_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_4, l_4, m_4, t);
                          ;
                          LocalPopChoice(z_17);
                        }
                      else
                        {
                          t = y_17;
                          {
                            ATerm a_18 = t;
                            int b_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_18);
                              }
                            else
                              {
                                t = a_18;
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
  ATerm j_4 (ATerm t)
  {
    ATerm b_16 = NULL,c_16 = NULL,p_16 = NULL;
    b_16 = t;
    {
      ATerm c_18 = t;
      int d_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_16 != NULL) && (c_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_4, t);
          ;
          LocalPopChoice(d_18);
        }
      else
        {
          t = c_18;
          t = term_e_18;
          c_16 = t;
        }
      t = not_null(c_16);
      t = ReadFromFile_0_0(t);
      p_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_16, p_16);
      t = apply_strategy_1_0(a_83, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_4, c_83, i_4, j_4, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = _2_0(_id, tg_to_format_checker_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_4, _fail, default_usage_0_0, t);
  return(t);
}
