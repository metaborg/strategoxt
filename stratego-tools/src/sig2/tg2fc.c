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
ATerm term_e_17;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_k_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_d_13;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_e_11;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_b_9;
ATerm term_g_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_z_5;
ATerm term_g_5;
ATerm term_w_4;
ATerm term_t_4;
void init_constant_terms (void)
{
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-param", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_5);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_c_6);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_6);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_h_6);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("fc-", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("if-verbose2", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_6);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("integers", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("verbose", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym__3, term_y_15, term_a_16, term_g_5);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm concat_strings_0_0 (ATerm);
ATerm param_name_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm e_84 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm);
ATerm for_3_0 (ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm int_to_int_list_0_0 (ATerm);
ATerm create_call_0_0 (ATerm);
ATerm to_fc_Body_0_0 (ATerm);
ATerm fc_name_0_0 (ATerm);
ATerm to_fc_SDef_0_0 (ATerm);
ATerm tg_to_format_checker_0_0 (ATerm);
ATerm _2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_102 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm n_92 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_75 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm z_91 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm);
ATerm crush_2_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_76 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_82 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm e_75 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_75 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm p_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_94 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm t_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm io_tg2fc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm u_0 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm w_0 = NULL;
    w_0 = t;
    t = SSL_explode_string(w_0);
    return(t);
  }
  t = map_1_0(c_0, t);
  t = concat_0_0(t);
  u_0 = t;
  t = SSL_implode_string(u_0);
  return(t);
}
ATerm param_name_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL;
  x_0 = t;
  t = SSL_int_to_string(x_0);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_4, y_0);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm map_with_index_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  ATerm e_1 = NULL;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_4, e_1);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm i_1 = NULL,l_1 = NULL,n_1 = NULL,t_1 = NULL;
      if(match_cons(t, sym__2))
        {
          i_1 = ATgetArgument(t, 0);
          l_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_1;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm g_2 = NULL,h_2 = NULL,j_2 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_1 = ATgetFirst((ATermList) t);
              t_1 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, i_1, n_1);
          t = e_84(t);
          g_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_1, term_w_4);
          {
            ATerm x_4 = t;
            int z_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(i_1, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(z_4);
              }
            else
              {
                t = x_4;
                t = SSL_addr(i_1, (ATerm) ATmakeInt(1));
              }
            h_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_2, t_1);
            t = k_2(t);
            j_2 = t;
            t = (ATerm) ATinsert(CheckATermList(j_2), g_2);
          }
        }
      return(t);
    }
    t = k_2(t);
  }
  return(t);
}
ATerm while_not_2_0 (ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm a_5 = t;
    int b_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_95(t);
        ;
        LocalPopChoice(b_5);
      }
    else
      {
        t = a_5;
        t = q_95(t);
        t = l_2(t);
      }
    return(t);
  }
  t = l_2(t);
  return(t);
}
ATerm for_3_0 (ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm t)
{
  t = s_95(t);
  t = while_not_2_0(t_95, u_95, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm n_2 = NULL,o_2 = NULL;
    if(match_cons(t, sym__2))
      {
        n_2 = ATgetArgument(t, 0);
        o_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, n_2, o_2, (ATerm) ATempty);
    return(t);
  }
  ATerm k_0 (ATerm t)
  {
    ATerm p_2 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm c_5 = ATgetArgument(t, 0);
        if(((ATgetType(c_5) != AT_INT) || (ATgetInt((ATermInt) c_5) != 0)))
          _fail(t);
        {
          ATerm d_5 = ATgetArgument(t, 1);
        }
        p_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = p_2;
    return(t);
  }
  ATerm l_0 (ATerm t)
  {
    ATerm q_2 = NULL,r_2 = NULL,t_2 = NULL,u_2 = NULL;
    if(match_cons(t, sym__3))
      {
        q_2 = ATgetArgument(t, 0);
        r_2 = ATgetArgument(t, 1);
        t_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, q_2, term_w_4);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, q_2, term_w_4);
    {
      ATerm e_5 = t;
      int f_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(q_2, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(f_5);
        }
      else
        {
          t = e_5;
          t = SSL_subtr(q_2, (ATerm) ATmakeInt(1));
        }
      u_2 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_2, r_2, (ATerm) ATinsert(CheckATermList(t_2), r_2));
    }
    return(t);
  }
  t = for_3_0(e_0, k_0, l_0, t);
  return(t);
}
ATerm int_to_int_list_0_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_2, term_g_5);
  t = copy_0_0(t);
  {
    ATerm m_0 (ATerm t)
    {
      ATerm o_0 = NULL,p_0 = NULL;
      o_0 = t;
      t = SSL_explode_term(o_0);
      if(match_cons(t, sym__2))
        {
          ATerm h_5 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) h_5) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm i_5 = ATgetArgument(t, 1);
            if(((ATgetType(i_5) == AT_LIST) && !(ATisEmpty(i_5))))
              {
                p_0 = ATgetFirst((ATermList) i_5);
                {
                  ATerm y_5 = (ATerm) ATgetNext((ATermList) i_5);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = p_0;
      return(t);
    }
    t = map_with_index_1_0(m_0, t);
  }
  return(t);
}
ATerm create_call_0_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym_Param_1))
    {
      d_3 = ATgetArgument(t, 0);
      t = d_3;
      t = param_name_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_String_0))
        {
          t = term_d_6;
        }
      else
        {
          if(match_cons(t, sym_Int_0))
            {
              t = term_i_6;
            }
          else
            {
              if(match_cons(t, sym_NonTermRef_2))
                {
                  d_3 = ATgetArgument(t, 0);
                  f_3 = ATgetArgument(t, 1);
                  {
                    ATerm l_3 = NULL,m_3 = NULL;
                    t = d_3;
                    if(match_cons(t, sym_Id_1))
                      {
                        e_3 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = e_3;
                    t = fc_name_0_0(t);
                    l_3 = t;
                    t = f_3;
                    t = map_1_0(create_call_0_0, t);
                    m_3 = t;
                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_3), m_3);
                  }
                }
              else
                {
                  ATerm p_3 = NULL;
                  if(match_cons(t, sym_Prod_2))
                    {
                      d_3 = ATgetArgument(t, 0);
                      f_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_3;
                  if(match_cons(t, sym_Id_1))
                    {
                      e_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = f_3;
                  t = map_1_0(create_call_0_0, t);
                  p_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_3), p_3);
                }
            }
        }
    }
  return(t);
}
ATerm to_fc_Body_0_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,i_4 = NULL,l_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_4 = ATgetFirst((ATermList) t);
      l_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_3 = ATgetFirst((ATermList) t);
      v_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_4 = NULL,v_4 = NULL;
        t = i_4;
        t = create_call_0_0(t);
        u_4 = t;
        t = (ATerm) ATinsert(CheckATermList(v_3), u_3);
        t = to_fc_Body_0_0(t);
        v_4 = t;
        t = (ATerm) ATmakeAppl(sym_Choice_2, u_4, v_4);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_4;
      t = create_call_0_0(t);
    }
  return(t);
}
ATerm fc_name_0_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, y_4);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm to_fc_SDef_0_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm m_6 = ATgetArgument(t, 0);
      if(match_cons(m_6, sym_Id_1))
        {
          j_5 = ATgetArgument(m_6, 0);
        }
      else
        _fail(t);
      k_5 = ATgetArgument(t, 1);
      l_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_5;
  t = fc_name_0_0(t);
  m_5 = t;
  t = l_5;
  t = to_fc_Body_0_0(t);
  n_5 = t;
  t = k_5;
  t = int_to_int_list_0_0(t);
  {
    ATerm n_0 (ATerm t)
    {
      ATerm q_5 = NULL;
      t = param_name_0_0(t);
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_5);
      return(t);
    }
    t = map_1_0(n_0, t);
    o_5 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_6), j_5), term_n_6);
    t = concat_strings_0_0(t);
    p_5 = t;
    t = (ATerm) ATmakeAppl(sym_SDef_3, m_5, o_5, (ATerm) ATmakeAppl(sym_LChoice_2, n_5, (ATerm) ATmakeAppl(sym_Call_2, term_q_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, term_a_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_5))))))));
  }
  return(t);
}
ATerm tg_to_format_checker_0_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      r_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5;
  t = map_1_0(to_fc_SDef_0_0, t);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_b_7, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, s_5)), (ATerm) ATmakeAppl(sym_Imports_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_7), term_d_7), term_c_7))));
  return(t);
}
ATerm _2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,a_6 = NULL,b_6 = NULL;
  b_6 = t;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_6);
  t_5 = t;
  t = u_5;
  t = h_61(t);
  w_5 = t;
  t = v_5;
  t = i_61(t);
  a_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, w_5, a_6), t_5);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL;
  f_6 = t;
  t = term_g_5;
  t = whoami_0_0(t);
  g_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), g_6), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = f_6;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      {
        ATerm k_6 = NULL,l_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_6 = ATgetFirst((ATermList) t);
            l_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_6;
        {
          ATerm q_0 (ATerm t)
          {
            t = l_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_0, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL;
  s_6 = t;
  t = SSL_explode_term(s_6);
  if(match_cons(t, sym__2))
    {
      ATerm h_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm i_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_6, t);
        ;
        LocalPopChoice(k_7);
      }
    else
      {
        t = i_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_82(t);
      }
    return(t);
  }
  t = u_6(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6;
  {
    ATerm r_0 (ATerm t)
    {
      t = v_6;
      return(t);
    }
    t = at_end_1_0(r_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm x_6 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm y_6 = NULL;
    y_6 = t;
    t = SSL_explode_string(y_6);
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm z_6 = NULL;
    z_6 = t;
    t = SSL_explode_string(z_6);
    return(t);
  }
  t = _2_0(s_0, t_0, t);
  t = conc_0_0(t);
  x_6 = t;
  t = SSL_implode_string(x_6);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_7 = NULL;
      j_7 = t;
      t = SSL_is_string(j_7);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(v_0, t);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            {
              ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
              r_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_7 = ATgetArgument(t, 0);
                  t = s_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_7 = ATgetArgument(t, 0);
                      t = s_7;
                      {
                        ATerm u_7 = t;
                        int v_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_7);
                          }
                        else
                          {
                            t = u_7;
                            {
                              ATerm z_0 (ATerm t)
                              {
                                t = term_w_7;
                                return(t);
                              }
                              t = debug_1_0(z_0, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm x_7 = NULL,y_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_7 = ATgetArgument(t, 0);
                          t_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_7;
                      t = eval_config_0_0(t);
                      x_7 = t;
                      t = t_7;
                      t = eval_config_0_0(t);
                      y_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_7, y_7);
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
  ATerm b_8 = NULL;
  b_8 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_8);
  {
    ATerm a_1 (ATerm t)
    {
      ATerm c_8 = NULL;
      t = eval_config_0_0(t);
      c_8 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_8, c_8);
      t = c_8;
      return(t);
    }
    t = try_1_0(a_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm d_8 = NULL,e_8 = NULL;
    d_8 = t;
    t = term_z_7;
    t = get_config_0_0(t);
    e_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_8, term_a_8);
    t = geq_0_0(t);
    t = d_8;
    t = m_102(t);
    return(t);
  }
  t = try_1_0(b_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm h_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_8 = ATgetArgument(t, 0);
        if(match_cons(f_8, sym_Stream_1))
          {
            h_8 = ATgetArgument(f_8, 0);
          }
        else
          _fail(t);
        j_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(h_8, j_8);
    k_8 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), k_8);
    l_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
    return(t);
  }
  t = WriteToFile_1_0(c_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_8, term_g_8);
  t = open_stream_0_0(t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_8, p_8);
  t = n_92(t);
  t = fclose_0_0(t);
  t = p_8;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_8 = ATgetArgument(t, 0);
        if(match_cons(i_8, sym_Stream_1))
          {
            r_8 = ATgetArgument(i_8, 0);
          }
        else
          _fail(t);
        s_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(r_8, s_8);
    t_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, t_8);
    return(t);
  }
  t = WriteToFile_1_0(d_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  u_8 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm m_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                v_8 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(g_1, t);
          ;
          LocalPopChoice(n_8);
        }
      else
        {
          t = m_8;
          t = term_b_9;
          v_8 = t;
        }
      return(t);
    }
    t = _2_0(f_1, _id, t);
    t = u_8;
    {
      ATerm h_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          t = not_null(v_8);
          return(t);
        }
        t = split_2_0(m_1, _id, t);
        return(t);
      }
      t = _2_0(_id, h_1, t);
      {
        ATerm c_9 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(p_1, t);
              return(t);
            }
            t = _2_0(o_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(d_9);
          }
        else
          {
            t = c_9;
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
ATerm apply_strategy_1_0 (ATerm z_75 (ATerm), ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  w_8 = t;
  t = dtime_0_0(t);
  t = w_8;
  t = z_75(t);
  x_8 = t;
  t = dtime_0_0(t);
  y_8 = t;
  t = x_8;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_8), (ATerm) ATmakeAppl(sym_Runtime_1, y_8)), a_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_9 (ATerm i_9, ATerm t)
  {
    t = SSL_fclose(i_9);
    return(t);
  }
  ATerm l_9 = NULL,m_9 = NULL;
  m_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_9 = ATgetArgument(t, 0);
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_9);
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            t = o_9(m_9, t);
          }
      }
    }
  else
    {
      t = o_9(m_9, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm z_91 (ATerm), ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  p_9 = t;
  t = z_91(t);
  q_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_9), q_9));
  t = p_9;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  t = SSL_stdin_stream();
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_9 = NULL;
  t = SSL_stdout_stream();
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_9 = NULL;
  t = SSL_stderr_stream();
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_9);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_9 = ATgetArgument(t, 0);
      ATerm h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,k_1 = NULL;
        j_1 = t;
        t = SSL_explode_term(j_1);
        if(match_cons(t, sym__2))
          {
            ATerm n_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_9 = ATgetArgument(t, 1);
              if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
                {
                  k_1 = ATgetFirst((ATermList) u_9);
                  {
                    ATerm w_9 = (ATerm) ATgetNext((ATermList) u_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm x_9 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
              ATerm q_1 (ATerm t)
              {
                ATerm b_10 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_10;
                return(t);
              }
              t = _2_0(q_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_9 = ATgetArgument(t, 0);
                  z_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_9, z_9);
              a_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_10);
              ;
              LocalPopChoice(k_10);
            }
          else
            {
              t = x_9;
              {
                ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
                ATerm r_1 (ATerm t)
                {
                  ATerm f_10 = NULL;
                  f_10 = t;
                  t = SSL_is_string(f_10);
                  return(t);
                }
                t = _2_0(r_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_10 = ATgetArgument(t, 0);
                    d_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_10, d_10);
                e_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_10 = NULL;
      j_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_10, term_s_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_w_10;
          return(t);
        }
        t = debug_1_0(s_1, t);
        _fail(t);
      }
    }
  g_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_10);
  h_10 = t;
  t = g_10;
  t = fclose_0_0(t);
  t = h_10;
  return(t);
}
ATerm split_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  t = j_81(t);
  m_10 = t;
  t = l_10;
  t = k_81(t);
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_10, n_10);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm o_10 = NULL,r_10 = NULL;
  o_10 = t;
  {
    ATerm a_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              r_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(u_1, t);
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = a_11;
        t = term_e_11;
        r_10 = t;
      }
    t = o_10;
    {
      ATerm v_1 (ATerm t)
      {
        t = not_null(r_10);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, v_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm t_10 = NULL;
    t_10 = t;
    if(match_string(t, "-k"))
      {
        t = t_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = t_10;
      }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm u_10 = NULL,v_10 = NULL;
    u_10 = t;
    t = SSL_string_to_int(u_10);
    v_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), v_10);
    t = u_10;
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_k_11;
    return(t);
  }
  t = ArgOption_3_0(w_1, x_1, y_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm x_10 = NULL;
        x_10 = t;
        if(match_string(t, "-S"))
          {
            t = x_10;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = x_10;
          }
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_s_11;
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = term_t_11;
        return(t);
      }
      t = Option_3_0(z_1, a_2, b_2, t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              ATerm y_10 = NULL,z_10 = NULL;
              y_10 = t;
              t = SSL_string_to_int(y_10);
              z_10 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_10);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, y_10);
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = term_e_12;
              return(t);
            }
            t = ArgOption_3_0(c_2, d_2, e_2, t);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm f_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm i_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_f_12;
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_g_12;
                return(t);
              }
              t = Option_3_0(f_2, i_2, m_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm b_11 = NULL;
    b_11 = t;
    if(match_string(t, "-o"))
      {
        t = b_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = b_11;
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm c_11 = NULL;
    c_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), c_11);
    t = (ATerm) ATmakeAppl(sym_Output_1, c_11);
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_j_12;
    return(t);
  }
  t = ArgOption_3_0(s_2, w_2, x_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm y_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_p_12;
          return(t);
        }
        ATerm a_3 (ATerm t)
        {
          t = term_q_12;
          return(t);
        }
        t = Option_3_0(y_2, z_2, a_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  f_11 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = f_11;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm n_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_11 = ATgetFirst((ATermList) t);
          h_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_11 = ATgetFirst((ATermList) t);
          j_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_11;
      t = h_0(t);
      t = i_11;
      t = i_0(t);
      n_11 = t;
      t = (ATerm) ATinsert(CheckATermList(j_11), n_11);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm p_11 = NULL;
    p_11 = t;
    if(match_string(t, "-i"))
      {
        t = p_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = p_11;
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm q_11 = NULL;
    q_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), q_11);
    t = (ATerm) ATmakeAppl(sym_Input_1, q_11);
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_t_12;
    return(t);
  }
  t = ArgOption_3_0(b_3, c_3, g_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm w_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = w_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_5;
  t = whoami_0_0(t);
  r_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_11));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_88(t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm u_11 = NULL,v_11 = NULL,y_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_11 = ATgetFirst((ATermList) t);
            v_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_11;
        t = foldr_2_0(x_88, y_88, t);
        y_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_11, y_11);
        t = y_88(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  z_11 = t;
  t = SSL_explode_term(z_11);
  if(match_cons(t, sym__2))
    {
      ATerm m_13 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12;
  t = foldr_2_0(v_86, w_86, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  t = times_0_0(t);
  {
    ATerm h_3 (ATerm t)
    {
      t = term_o_11;
      return(t);
    }
    ATerm i_3 (ATerm t)
    {
      ATerm c_12 = NULL,d_12 = NULL;
      if(match_cons(t, sym__2))
        {
          c_12 = ATgetArgument(t, 0);
          d_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(c_12, d_12);
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            t = SSL_addr(c_12, d_12);
          }
      }
      return(t);
    }
    t = crush_2_0(h_3, i_3, t);
    b_12 = t;
    t = SSL_TicksToSeconds(b_12);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  m_12 = t;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_12;
        if((n_12 != t))
          {
            _fail(t);
          }
        t = m_12;
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = u_13;
        t = m_12;
        {
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_12, o_12);
              ;
              LocalPopChoice(a_14);
            }
          else
            {
              t = z_13;
              t = SSL_gtr(n_12, o_12);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_12, o_12);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm r_12 = NULL,s_12 = NULL;
    r_12 = t;
    t = term_z_7;
    t = get_config_0_0(t);
    s_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_12, term_w_4);
    t = geq_0_0(t);
    t = r_12;
    t = l_102(t);
    return(t);
  }
  t = try_1_0(j_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm u_12 = NULL,v_12 = NULL;
    t = run_time_0_0(t);
    u_12 = t;
    t = term_g_5;
    t = whoami_0_0(t);
    v_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_12), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_12));
    t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_14), u_12), term_c_14), v_12));
    return(t);
  }
  t = if_verbose1_1_0(k_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm x_76 (ATerm), ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm l_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(n_14);
            }
          else
            {
              t = l_14;
              {
                ATerm r_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(s_14);
                  }
                else
                  {
                    t = r_14;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(n_3, t);
      }
    }
  t = x_76(t);
  return(t);
}
ATerm map_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    ATerm u_14 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = u_14;
        t = Cons_2_0(h_82, x_12, t);
      }
    return(t);
  }
  t = x_12(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_12 = ATgetFirst((ATermList) t);
      a_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_13 = NULL,f_13 = NULL;
        t = a_13;
        t = g_0(t);
        e_13 = t;
        t = z_12;
        t = f_0(t);
        f_13 = t;
        t = a_13;
        {
          ATerm o_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_13), f_13);
            return(t);
          }
          t = reverse_acc_2_0(f_0, o_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_5;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, q_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm e_75 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_13);
  g_13 = t;
  t = h_13;
  t = e_75(t);
  i_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, i_13), g_13);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm r_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(r_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_f_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm s_3 (ATerm t)
    {
      ATerm n_13 = NULL;
      n_13 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, n_13), term_g_15);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(s_3, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_75 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  r_13 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_13);
  o_13 = t;
  t = p_13;
  t = f_75(t);
  q_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, q_13), o_13);
  return(t);
}
ATerm fetch_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm v_13 (ATerm t)
  {
    ATerm h_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_82, _id, t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = h_15;
        t = Cons_2_0(_id, v_13, t);
      }
    return(t);
  }
  t = v_13(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  t = fetch_1_0(r_93, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL;
  x_13 = t;
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_13;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_15 = ATgetFirst((ATermList) t);
                ATerm q_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_13;
          }
        ;
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        t = (ATerm) ATinsert(ATempty, x_13);
      }
    y_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), y_13);
    t = x_13;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm r_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_80(t);
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = r_15;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_b_16;
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_e_16;
        return(t);
      }
      t = Option_3_0(t_3, w_3, x_3, t);
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm y_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_f_16;
          return(t);
        }
        ATerm a_4 (ATerm t)
        {
          t = term_g_16;
          return(t);
        }
        t = Option_3_0(y_3, z_3, a_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__3))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
      g_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_14, f_14);
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_16 = ATgetArgument(t, 0);
            ATerm k_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_14, f_14);
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        t = (ATerm) ATempty;
      }
    h_14 = t;
    t = SSL_table_put(e_14, f_14, (ATerm) ATinsert(CheckATermList(h_14), g_14));
    t = (ATerm) ATmakeAppl(sym__3, e_14, f_14, g_14);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm m_14 = NULL;
  t = term_g_5;
  t = w_94(t);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_16, term_m_16, m_14);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = o_14;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm t_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_14 = ATgetFirst((ATermList) t);
          q_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_14;
      t = a_0(t);
      t = term_g_5;
      t = b_0(t);
      t_14 = t;
      t = (ATerm) ATinsert(CheckATermList(q_14), t_14);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm v_14 = NULL;
    v_14 = t;
    if(match_string(t, "--help"))
      {
        t = v_14;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = v_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = v_14;
          }
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_n_16;
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_o_16;
    return(t);
  }
  t = Option_3_0(b_4, c_4, d_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  b_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_14 = ATgetFirst((ATermList) t);
      y_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_15);
  w_14 = t;
  t = x_14;
  t = q_62(t);
  z_14 = t;
  t = y_14;
  t = r_62(t);
  a_15 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_15), z_14), w_14);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_94 (ATerm), ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  {
    ATerm e_4 (ATerm t)
    {
      t = term_p_16;
      t = u_94(t);
      return(t);
    }
    t = try_1_0(e_4, t);
    t = i_15;
    {
      ATerm f_4 (ATerm t)
      {
        ATerm j_15 = NULL;
        j_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_15);
        t = (ATerm) ATmakeAppl(sym_Program_1, j_15);
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_16 = t;
            int t_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_16);
              }
            else
              {
                t = s_16;
                t = u_94(t);
                t = Cons_2_0(_id, g_4, t);
              }
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              ATerm l_15 = NULL,m_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_15 = ATgetFirst((ATermList) t);
                  m_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_15), (ATerm) ATmakeAppl(sym_Undefined_1, l_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_4, g_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
  s_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_15;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm u_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_94(t);
          ;
          LocalPopChoice(v_16);
        }
      else
        {
          t = u_16;
          {
            ATerm w_16 = t;
            int x_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(x_16);
              }
            else
              {
                t = w_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_4, t);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_15 = NULL;
            z_15 = t;
            {
              ATerm a_17 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_15;
                  {
                    ATerm c_17 = t;
                    int d_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_k_14;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(d_17);
                      }
                    else
                      {
                        t = c_17;
                        {
                          ATerm k_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(k_4, t);
                        }
                      }
                    t = z_15;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = a_17;
                  t = term_a_16;
                  t = get_config_0_0(t);
                  t = z_15;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm m_4 (ATerm t)
              {
                ATerm n_4 (ATerm t)
                {
                  t_15 = t;
                  return(t);
                }
                t = Undefined_1_0(n_4, t);
                return(t);
              }
              t = option_defined_1_0(m_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_15)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_15)), term_e_17));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(j_4, t);
      u_15 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = u_15;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm t)
{
  ATerm x_5 = NULL;
  t = parse_options_1_0(z_76, t);
  x_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), x_5);
  t = x_5;
  t = b_77(t);
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_77, t);
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        {
          ATerm h_17 = t;
          int i_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_77(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_17);
            }
          else
            {
              t = h_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_76(t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(o_76, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_4, q_76, r_76, p_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm r_4 (ATerm t)
    {
      ATerm c_16 = NULL,d_16 = NULL;
      c_16 = t;
      t = term_d_13;
      t = get_config_0_0(t);
      d_16 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, d_16));
      t = c_16;
      return(t);
    }
    t = if_verbose2_1_0(r_4, t);
    return(t);
  }
  t = iowrap_4_0(i_76, j_76, k_76, q_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  t = iowrap_3_0(g_76, h_76, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    t = _2_0(_id, d_76, t);
    return(t);
  }
  t = iowrap_2_0(s_4, _fail, t);
  return(t);
}
ATerm io_tg2fc_0_0 (ATerm t)
{
  t = iowrap_1_0(tg_to_format_checker_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_tg2fc_0_0(t);
  return(t);
}
