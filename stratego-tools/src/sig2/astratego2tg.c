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
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Path_2;
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
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_22;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_j_21;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_r_19;
ATerm term_g_19;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_f_18;
ATerm term_s_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_y_13;
ATerm term_w_12;
ATerm term_q_12;
ATerm term_i_10;
ATerm term_m_8;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_m_7;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_c_6;
void init_constant_terms (void)
{
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_String_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_10);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__3, term_z_19, term_a_20, term_c_6);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm filter_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm build_group_by_pairs_4_0 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm);
ATerm n_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm group_by_3_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm to_dec_prod_item_0_0 (ATerm);
ATerm assert_1_0 (ATerm q_112 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm add_param_rule_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm n_112 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm m_112 (ATerm), ATerm);
ATerm scope_2_0 (ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm to_prod_items_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm to_NonTermDec_0_0 (ATerm);
ATerm union_1_0 (ATerm q_109 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm collect_om_1_0 (ATerm l_110 (ATerm), ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm stratego_ast_to_tg_0_0 (ATerm);
ATerm _2_0 (ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm q_10 (ATerm j_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm u_90 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_108 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm g_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm s_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_108 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm need_help_1_0 (ATerm t_84 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_70 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_70 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_100 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm parse_options_1_0 (ATerm u_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm iowrap_3_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,m_0 = NULL;
  e_0 = t;
  t = term_c_6;
  t = whoami_0_0(t);
  m_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), m_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_0;
  return(t);
}
ATerm filter_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm d_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_6);
    }
  else
    {
      t = d_6;
      {
        ATerm i_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
            {
              t = filter_1_0(h_94, t);
              return(t);
            }
            t = Cons_2_0(h_94, h_0, t);
            ;
            LocalPopChoice(k_6);
          }
        else
          {
            t = i_6;
            {
              ATerm r_0 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_6 = ATgetFirst((ATermList) t);
                  r_0 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_0;
              t = filter_1_0(h_94, t);
            }
          }
      }
    }
  return(t);
}
ATerm build_group_by_pairs_4_0 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t)
{
  ATerm t_0 = NULL,w_0 = NULL;
  t_0 = t;
  t = term_c_6;
  t = u_83(t);
  {
    ATerm l_0 (ATerm t)
    {
      ATerm x_0 = NULL;
      x_0 = t;
      t = r_83(t);
      if((t_0 != t))
        {
          _fail(t);
        }
      t = x_0;
      return(t);
    }
    t = filter_1_0(l_0, t);
    t = map_1_0(s_83, t);
    w_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_0, w_0);
    t = t_83(t);
  }
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = union_1_0(q_0, t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm a_1 = NULL;
  a_1 = t;
  t = (ATerm) ATinsert(ATempty, a_1);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      if((z_0 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm group_by_3_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t)
{
  ATerm y_0 = NULL;
  y_0 = t;
  t = map_1_0(o_83, t);
  t = foldr_3_0(n_0, o_0, p_0, t);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm u_0 (ATerm t)
      {
        t = y_0;
        return(t);
      }
      t = build_group_by_pairs_4_0(o_83, p_83, q_83, u_0, t);
      return(t);
    }
    t = map_1_0(s_0, t);
  }
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          s_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_2;
      if(match_string(t, "String"))
        {
          t = term_s_6;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Int", 0, ATtrue)))
            _fail(t);
          t = term_t_6;
        }
      ;
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      t = to_dec_prod_item_0_0(t);
    }
  return(t);
}
ATerm to_dec_prod_item_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym_Op_2))
    {
      b_2 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
      {
        ATerm l_2 = NULL;
        t = z_1;
        t = map_1_0(v_0, t);
        l_2 = t;
        t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, b_2), l_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Var_1))
        {
          b_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm v_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 = NULL,u_1 = NULL;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Var_1, b_2));
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_1 = ATgetFirst((ATermList) t);
                {
                  ATerm x_6 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = u_1;
            if(match_cons(t, sym_Defined_2))
              {
                ATerm y_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_6) != ATmakeSymbol("c_0", 0, ATtrue)))
                  _fail(t);
                k_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Param_1, k_1);
            ;
            LocalPopChoice(w_6);
          }
        else
          {
            t = v_6;
            t = a_2;
            {
              ATerm c_7 = t;
              if((PushChoice() == 0))
                {
                  ATerm h_2 = NULL,n_2 = NULL;
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Var_1, b_2));
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_2 = ATgetFirst((ATermList) t);
                      {
                        ATerm f_7 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = n_2;
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm j_7 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) j_7) != ATmakeSymbol("c_0", 0, ATtrue)))
                        _fail(t);
                      h_2 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_2;
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = c_7;
                }
              t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, b_2), (ATerm) ATempty);
            }
          }
      }
    }
  return(t);
}
ATerm assert_1_0 (ATerm q_112 (ATerm), ATerm t)
{
  ATerm c_3 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL,i_3 = NULL;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_112(t);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_3, c_3, e_3);
  t = table_push_0_0(t);
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(f_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_3 = ATgetFirst((ATermList) t);
        i_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(f_3, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(i_3), (ATerm) ATinsert(CheckATermList(h_3), c_3)));
    t = (ATerm) ATmakeAppl(sym__2, c_3, e_3);
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm add_param_rule_0_0 (ATerm t)
{
  ATerm j_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      j_3 = ATgetArgument(t, 0);
      {
        ATerm o_7 = ATgetArgument(t, 1);
        if(match_cons(o_7, sym_Var_1))
          {
            l_3 = ATgetArgument(o_7, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, l_3), (ATerm) ATmakeAppl(sym_Defined_2, term_p_7, j_3));
  t = assert_1_0(b_1, t);
  t = (ATerm) ATmakeAppl(sym__2, j_3, (ATerm) ATmakeAppl(sym_Var_1, l_3));
  return(t);
}
ATerm map_with_index_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, r_3);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm h_4 = NULL,i_4 = NULL,m_4 = NULL,n_4 = NULL;
      if(match_cons(t, sym__2))
        {
          h_4 = ATgetArgument(t, 0);
          i_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_4 = ATgetFirst((ATermList) t);
              n_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, h_4, m_4);
          t = b_92(t);
          y_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_4, term_r_7);
          {
            ATerm s_7 = t;
            int t_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(h_4, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(t_7);
              }
            else
              {
                t = s_7;
                t = SSL_addr(h_4, (ATerm) ATmakeInt(1));
              }
            z_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_2, n_4);
            t = o_4(t);
            a_3 = t;
            t = (ATerm) ATinsert(CheckATermList(a_3), y_2);
          }
        }
      return(t);
    }
    t = o_4(t);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_4, t_4);
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_3 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_7 = ATgetArgument(t, 0);
            ATerm z_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_4, t_4);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_8 = ATgetFirst((ATermList) t);
            n_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_3;
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        t = (ATerm) ATempty;
      }
    w_4 = t;
    t = SSL_table_put(s_4, t_4, w_4);
    t = (ATerm) ATmakeAppl(sym__2, s_4, t_4);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm n_112 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  o_5 = t;
  t = n_112(t);
  p_5 = t;
  {
    ATerm e_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(p_5, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_8);
      }
    else
      {
        t = e_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_5 = ATgetFirst((ATermList) t);
        q_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(p_5, (ATerm)ATmakeAppl(sym_Scopes_0), q_5);
    t = r_5;
    {
      ATerm c_1 (ATerm t)
      {
        ATerm s_5 = NULL;
        s_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_5, s_5);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(c_1, t);
      t = o_5;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm t)
{
  ATerm i_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_89(t);
      t = b_89(t);
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = i_8;
      t = b_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_112 (ATerm), ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  t = m_112(t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_5, term_m_8);
  {
    ATerm o_8 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_9 = ATgetArgument(t, 0);
            ATerm o_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_5, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_9);
      }
    else
      {
        t = o_8;
        t = (ATerm) ATempty;
      }
    x_5 = t;
    t = SSL_table_put(w_5, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(x_5), (ATerm) ATempty));
    t = v_5;
  }
  return(t);
}
ATerm scope_2_0 (ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm t)
{
  t = begin_scope_1_0(o_112, t);
  {
    ATerm d_1 (ATerm t)
    {
      t = end_scope_1_0(o_112, t);
      return(t);
    }
    t = restore_always_2_0(p_112, d_1, t);
  }
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm r_6 = NULL;
  if(match_cons(t, sym_ConstType_1))
    {
      r_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6;
  {
    ATerm q_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            u_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_6;
        if(match_string(t, "String"))
          {
            t = term_s_6;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Int", 0, ATtrue)))
              _fail(t);
            t = term_t_6;
          }
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = q_9;
        t = to_dec_prod_item_0_0(t);
      }
  }
  return(t);
}
ATerm to_prod_items_0_0 (ATerm t)
{
  ATerm h_6 = NULL,j_6 = NULL,l_6 = NULL;
  j_6 = t;
  if(match_cons(t, sym_FunType_2))
    {
      l_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
      {
        ATerm p_6 = NULL;
        t = j_6;
        {
          ATerm f_1 (ATerm t)
          {
            t = h_6;
            {
              ATerm u_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_6 = NULL;
                  if(match_cons(t, sym_ConstType_1))
                    {
                      ATerm a_10 = ATgetArgument(t, 0);
                      if(match_cons(a_10, sym_Op_2))
                        {
                          ATerm b_10 = ATgetArgument(a_10, 0);
                          q_6 = ATgetArgument(a_10, 1);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = q_6;
                  LocalPopChoice(z_9);
                  t = map_with_index_1_0(add_param_rule_0_0, t);
                }
              else
                {
                  t = u_9;
                }
              t = l_6;
              t = map_1_0(g_1, t);
              if(((p_6 != NULL) && (p_6 != t)))
                _fail(t);
              else
                p_6 = t;
            }
            return(t);
          }
          t = scope_2_0(e_1, f_1, t);
          t = not_null(p_6);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          l_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_6;
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm e_10 = ATgetArgument(t, 0);
                ATerm f_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(d_10);
            t = (ATerm) ATempty;
          }
        else
          {
            t = c_10;
            if(match_cons(t, sym_Var_1))
              {
                ATerm h_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATempty;
          }
      }
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(u_7, v_7);
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = SSL_addr(u_7, v_7);
      }
  }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
ATerm to_NonTermDec_0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,d_7 = NULL,e_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,n_7 = NULL,q_7 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7;
  if(match_cons(t, sym_ConstType_1))
    {
      g_7 = ATgetArgument(t, 0);
      t = g_7;
    }
  else
    {
      if(match_cons(t, sym_FunType_2))
        {
          ATerm m_10 = ATgetArgument(t, 0);
          h_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_7;
      if(match_cons(t, sym_ConstType_1))
        {
          i_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_7;
    }
  b_7 = t;
  {
    ATerm p_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Op_2))
          {
            n_7 = ATgetArgument(t, 0);
            {
              ATerm v_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_10);
        t = n_7;
      }
    else
      {
        t = p_10;
        if(match_cons(t, sym_Var_1))
          {
            n_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_7;
      }
    t = b_7;
    {
      ATerm w_10 = t;
      int x_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Op_2))
            {
              ATerm d_11 = ATgetArgument(t, 0);
              q_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(x_10);
          t = q_7;
          t = foldr_3_0(h_1, i_1, j_1, t);
        }
      else
        {
          t = w_10;
          if(match_cons(t, sym_Var_1))
            {
              ATerm f_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_i_10;
        }
      d_7 = t;
      t = a_7;
      t = to_prod_items_0_0(t);
      e_7 = t;
      t = (ATerm) ATmakeAppl(sym_NonTermDec_3, (ATerm)ATmakeAppl(sym_Id_1, n_7), d_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Prod_2, (ATerm)ATmakeAppl(sym_Id_1, z_6), e_7)));
    }
  }
  return(t);
}
ATerm union_1_0 (ATerm q_109 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_8;
  {
    ATerm c_8 (ATerm t)
    {
      ATerm k_11 = t;
      int l_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_8;
          ;
          LocalPopChoice(l_11);
        }
      else
        {
          t = k_11;
          {
            ATerm o_11 = t;
            int q_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_3 = NULL,p_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_3 = ATgetFirst((ATermList) t);
                    p_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_8;
                {
                  ATerm l_1 (ATerm t)
                  {
                    ATerm q_3 = NULL;
                    q_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_3, q_3);
                    t = q_109(t);
                    return(t);
                  }
                  t = fetch_1_0(l_1, t);
                  t = p_3;
                  t = c_8(t);
                }
                ;
                LocalPopChoice(q_11);
              }
            else
              {
                t = o_11;
                t = Cons_2_0(_id, c_8, t);
              }
          }
        }
      return(t);
    }
    t = c_8(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_111(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm f_8 = NULL,g_8 = NULL,j_8 = NULL,k_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_8 = ATgetFirst((ATermList) t);
            g_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_8;
        t = l_111(t);
        j_8 = t;
        t = g_8;
        t = foldr_3_0(j_111, k_111, l_111, t);
        k_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, k_8);
        t = k_111(t);
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = union_1_0(p_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm l_4 = NULL;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      if((l_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_om_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm t_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8 = NULL;
      t = l_110(t);
      n_8 = t;
      t = (ATerm) ATinsert(ATempty, n_8);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = t_11;
      {
        ATerm a_4 = NULL,b_4 = NULL;
        a_4 = t;
        t = SSL_explode_term(a_4);
        if(match_cons(t, sym__2))
          {
            ATerm w_11 = ATgetArgument(t, 0);
            b_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_4;
        {
          ATerm o_1 (ATerm t)
          {
            t = collect_om_1_0(l_110, t);
            return(t);
          }
          t = foldr_3_0(m_1, n_1, o_1, t);
        }
      }
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  if(match_cons(t, sym_OpDecl_2))
    {
      ATerm y_11 = ATgetArgument(t, 0);
      ATerm a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
      {
        ATerm b_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_8, r_8);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm s_8 = NULL;
  if(match_cons(t, sym_NonTermDec_3))
    {
      ATerm c_12 = ATgetArgument(t, 0);
      ATerm d_12 = ATgetArgument(t, 1);
      ATerm e_12 = ATgetArgument(t, 2);
      if(((ATgetType(e_12) == AT_LIST) && !(ATisEmpty(e_12))))
        {
          s_8 = ATgetFirst((ATermList) e_12);
          {
            ATerm l_12 = (ATerm) ATgetNext((ATermList) e_12);
            if(((ATgetType(l_12) != AT_LIST) || !(ATisEmpty(l_12))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = s_8;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_12 = ATgetArgument(t, 0);
      if(match_cons(p_12, sym__2))
        {
          t_8 = ATgetArgument(p_12, 0);
          u_8 = ATgetArgument(p_12, 1);
        }
      else
        _fail(t);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_NonTermDec_3, t_8, u_8, v_8);
  return(t);
}
ATerm stratego_ast_to_tg_0_0 (ATerm t)
{
  ATerm p_8 = NULL;
  t = collect_om_1_0(q_1, t);
  t = map_1_0(to_NonTermDec_0_0, t);
  t = group_by_3_0(r_1, s_1, t_1, t);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym_TreeGrammar_1, p_8);
  return(t);
}
ATerm _2_0 (ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_9);
  w_8 = t;
  t = x_8;
  t = q_65(t);
  z_8 = t;
  t = y_8;
  t = r_65(t);
  a_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, z_8, a_9), w_8);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_9, term_q_12);
  t = open_stream_0_0(t);
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_9, f_9);
  t = m_98(t);
  t = fclose_0_0(t);
  t = f_9;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = fetch_1_0(d_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = WriteToFile_1_0(e_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_12 = ATgetArgument(t, 0);
      if(match_cons(r_12, sym_Stream_1))
        {
          j_9 = ATgetArgument(r_12, 0);
        }
      else
        _fail(t);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(j_9, k_9);
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_9);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = WriteToFile_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,p_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_12 = ATgetArgument(t, 0);
      if(match_cons(s_12, sym_Stream_1))
        {
          m_9 = ATgetArgument(s_12, 0);
        }
      else
        _fail(t);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(m_9, n_9);
  p_9 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), p_9);
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_9);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  h_9 = t;
  {
    ATerm v_1 (ATerm t)
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((i_9 != NULL) && (i_9 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_1, t);
          ;
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          t = term_w_12;
          if(((i_9 != NULL) && (i_9 != t)))
            _fail(t);
          else
            i_9 = t;
        }
      return(t);
    }
    t = _2_0(v_1, _id, t);
    t = h_9;
    {
      ATerm x_1 (ATerm t)
      {
        ATerm q_4 = NULL;
        q_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), q_4);
        return(t);
      }
      t = _2_0(_id, x_1, t);
      {
        ATerm x_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(y_1, c_2, t);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = x_12;
            t = _2_0(_id, f_2, t);
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
ATerm apply_strategy_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  s_9 = t;
  t = dtime_0_0(t);
  t = s_9;
  t = v_83(t);
  v_9 = t;
  t = dtime_0_0(t);
  w_9 = t;
  t = v_9;
  if(match_cons(t, sym__2))
    {
      x_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_9), (ATerm) ATmakeAppl(sym_Runtime_1, w_9)), y_9);
  return(t);
}
ATerm q_10 (ATerm j_10, ATerm t)
{
  t = SSL_fclose(j_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL;
  o_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_10 = ATgetArgument(t, 0);
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_10);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            t = q_10(o_10, t);
          }
      }
    }
  else
    {
      t = q_10(o_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  t = SSL_stdin_stream();
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = SSL_stdout_stream();
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t = SSL_stderr_stream();
  t_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_10);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm b_11 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      b_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm h_11 = NULL;
  h_11 = t;
  t = SSL_is_string(h_11);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      ATerm g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL,j_5 = NULL;
        h_5 = t;
        t = SSL_explode_term(h_5);
        if(match_cons(t, sym__2))
          {
            ATerm l_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_13 = ATgetArgument(t, 1);
              if(((ATgetType(m_13) == AT_LIST) && !(ATisEmpty(m_13))))
                {
                  j_5 = ATgetFirst((ATermList) m_13);
                  {
                    ATerm n_13 = (ATerm) ATgetNext((ATermList) m_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = j_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = j_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = j_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = h_13;
        {
          ATerm p_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
              t = _2_0(i_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_10 = ATgetArgument(t, 0);
                  z_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_10, z_10);
              a_11 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_11);
              ;
              LocalPopChoice(s_13);
            }
          else
            {
              t = p_13;
              {
                ATerm c_11 = NULL,e_11 = NULL,g_11 = NULL;
                t = _2_0(j_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_11 = ATgetArgument(t, 0);
                    e_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_11, e_11);
                g_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,m_11 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_11 = NULL;
      n_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_11, term_y_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm m_5 = NULL;
        m_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = m_5;
        _fail(t);
      }
    }
  i_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_11);
  j_11 = t;
  t = i_11;
  t = fclose_0_0(t);
  t = j_11;
  return(t);
}
ATerm fetch_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm u_11 (ATerm t)
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_90, _id, t);
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = Cons_2_0(_id, u_11, t);
      }
    return(t);
  }
  t = u_11(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm x_11 = NULL,z_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_11 = ATgetFirst((ATermList) t);
            z_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_11;
        {
          ATerm k_2 (ATerm t)
          {
            t = z_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  ATerm f_12 (ATerm t)
  {
    ATerm g_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_12, t);
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = g_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_90(t);
      }
    return(t);
  }
  t = f_12(t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  t = SSL_explode_string(i_12);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  t = SSL_explode_string(j_12);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm h_12 = NULL;
  t = _2_0(m_2, o_2, t);
  {
    ATerm l_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL,o_12 = NULL;
        if(match_cons(t, sym__2))
          {
            n_12 = ATgetArgument(t, 0);
            o_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_12;
        {
          ATerm p_2 (ATerm t)
          {
            t = o_12;
            return(t);
          }
          t = at_end_1_0(p_2, t);
        }
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = l_14;
        {
          ATerm e_6 = NULL,f_6 = NULL;
          e_6 = t;
          t = SSL_explode_term(e_6);
          if(match_cons(t, sym__2))
            {
              ATerm o_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_6;
          t = concat_0_0(t);
        }
      }
    h_12 = t;
    t = SSL_implode_string(h_12);
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12 = NULL;
      y_12 = t;
      t = SSL_is_string(y_12);
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_2, t);
            ;
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            {
              ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
              c_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_13 = ATgetArgument(t, 0);
                  t = d_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_13 = ATgetArgument(t, 0);
                      t = d_13;
                      {
                        ATerm c_15 = t;
                        int d_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_13);
                            {
                              ATerm e_15 = t;
                              int g_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_10 = NULL;
                                  t = eval_config_0_0(t);
                                  g_10 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_13, g_10);
                                  t = g_10;
                                  ;
                                  LocalPopChoice(g_15);
                                }
                              else
                                {
                                  t = e_15;
                                }
                            }
                            ;
                            LocalPopChoice(d_15);
                          }
                        else
                          {
                            t = c_15;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_13), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = d_13;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_13 = NULL,j_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_13 = ATgetArgument(t, 0);
                          e_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_13;
                      t = eval_config_0_0(t);
                      i_13 = t;
                      t = e_13;
                      t = eval_config_0_0(t);
                      j_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_13, j_13);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm h_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13 = NULL,q_13 = NULL;
      o_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_11 = NULL;
            t = eval_config_0_0(t);
            p_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_11);
            t = p_11;
            ;
            LocalPopChoice(o_15);
          }
        else
          {
            t = k_15;
          }
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_13, term_r_15);
        t = geq_0_0(t);
        t = o_13;
        t = p_108(t);
      }
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = h_15;
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  if(match_string(t, "-k"))
    {
      t = v_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_13;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL;
  w_13 = t;
  t = SSL_string_to_int(w_13);
  x_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), x_13);
  t = w_13;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_2, t_2, u_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  if(match_string(t, "-S"))
    {
      t = z_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_13;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_t_15;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm b_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  t = SSL_string_to_int(a_14);
  b_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_14);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_14);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_16;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_2, w_2, x_2, t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = e_16;
      {
        ATerm h_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_3, d_3, g_3, t);
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = h_16;
            t = Option_3_0(k_3, m_3, s_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_14 = NULL;
      t = term_c_6;
      t = d_0(t);
      j_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_16, term_m_16, j_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_14 = ATgetFirst((ATermList) t);
          i_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_14;
      t = a_0(t);
      t = term_c_6;
      t = b_0(t);
      m_14 = t;
      t = (ATerm) ATinsert(CheckATermList(i_14), m_14);
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  if(match_string(t, "-o"))
    {
      t = p_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_14;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_14);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_14);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__3))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
      v_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_14, u_14);
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_16 = ATgetArgument(t, 0);
            ATerm r_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_14, u_14);
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = (ATerm) ATempty;
      }
    w_14 = t;
    t = SSL_table_put(t_14, u_14, (ATerm) ATinsert(CheckATermList(w_14), v_14));
    t = (ATerm) ATmakeAppl(sym__3, t_14, u_14, v_14);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,m_15 = NULL,n_15 = NULL,p_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_15 = NULL;
      t = term_c_6;
      t = k_0(t);
      q_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_16, term_m_16, q_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm u_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_15 = ATgetFirst((ATermList) t);
          m_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_15 = ATgetFirst((ATermList) t);
          p_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_15;
      t = i_0(t);
      t = n_15;
      t = j_0(t);
      u_15 = t;
      t = (ATerm) ATinsert(CheckATermList(p_15), u_15);
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm w_15 = NULL;
  w_15 = t;
  if(match_string(t, "-i"))
    {
      t = w_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_15;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), x_15);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_15);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_s_16;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_6;
  t = whoami_0_0(t);
  y_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), y_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_12 = NULL;
        t = eval_config_0_0(t);
        g_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_12);
        t = g_12;
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm t)
{
  ATerm z_16 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_111(t);
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = z_16;
      {
        ATerm b_16 = NULL,c_16 = NULL,f_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_16 = ATgetFirst((ATermList) t);
            c_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_16;
        t = foldr_2_0(h_111, i_111, t);
        f_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_16, f_16);
        t = i_111(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm v_12 = NULL,r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_12, r_13);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = f_17;
        t = SSL_addr(v_12, r_13);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_16 = NULL,k_12 = NULL,m_12 = NULL;
  t = times_0_0(t);
  k_12 = t;
  t = SSL_explode_term(k_12);
  if(match_cons(t, sym__2))
    {
      ATerm j_17 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_12;
  t = foldr_2_0(z_3, c_4, t);
  i_16 = t;
  t = SSL_TicksToSeconds(i_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_16;
        if((u_16 != t))
          {
            _fail(t);
          }
        t = t_16;
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = k_17;
        t = t_16;
        {
          ATerm s_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_16, v_16);
              ;
              LocalPopChoice(y_17);
            }
          else
            {
              t = s_17;
              t = SSL_gtr(u_16, v_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_16, v_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_16 = NULL,a_17 = NULL;
      y_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_14 = NULL;
            t = eval_config_0_0(t);
            z_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_14);
            t = z_14;
            ;
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
          }
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_17, term_r_7);
        t = geq_0_0(t);
        t = y_16;
        t = o_108(t);
      }
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  t = run_time_0_0(t);
  c_17 = t;
  t = term_c_6;
  t = whoami_0_0(t);
  d_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), c_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), d_17));
  t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_18), c_17), term_m_18), d_17));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm s_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(v_18);
          }
        else
          {
            t = s_18;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_15 = NULL;
            t = eval_config_0_0(t);
            f_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_15);
            t = f_15;
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
          }
      }
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      t = fetch_1_0(e_4, t);
    }
  t = t_84(t);
  return(t);
}
ATerm map_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  ATerm e_17 (ATerm t)
  {
    ATerm a_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = a_19;
        t = Cons_2_0(d_90, e_17, t);
      }
    return(t);
  }
  t = e_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_17 = ATgetFirst((ATermList) t);
      h_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_17 = NULL,m_17 = NULL;
        t = h_17;
        t = g_0(t);
        l_17 = t;
        t = g_17;
        t = f_0(t);
        m_17 = t;
        t = h_17;
        {
          ATerm f_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_17), m_17);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  n_17 = t;
  t = o_17;
  t = y_70(t);
  p_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_17), n_17);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm t_17 = NULL;
  t_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_17), term_g_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_15 = NULL;
            t = eval_config_0_0(t);
            l_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_15);
            t = l_15;
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
          }
      }
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      t = fetch_1_0(g_4, t);
    }
  t = term_r_19;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, j_4, t);
  t = map_1_0(k_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  x_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      v_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_17);
  u_17 = t;
  t = v_17;
  t = z_70(t);
  w_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, w_17), u_17);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_19 = ATgetFirst((ATermList) t);
                ATerm v_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_18;
          }
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = (ATerm) ATinsert(ATempty, b_18);
      }
    c_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_18);
    t = b_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_16 = NULL;
        t = eval_config_0_0(t);
        l_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_16);
        t = l_16;
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = w_19;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_20;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_20;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_4, r_4, u_4, t);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      t = Option_3_0(v_4, x_4, y_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  l_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_18 = ATgetFirst((ATermList) t);
      i_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_18);
  g_18 = t;
  t = h_18;
  t = f_70(t);
  j_18 = t;
  t = i_18;
  t = g_70(t);
  k_18 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_18), j_18), g_18);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm r_18 = NULL;
  r_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_18);
  t = (ATerm) ATmakeAppl(sym_Program_1, r_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_100 (ATerm), ATerm t)
{
  ATerm q_18 = NULL;
  q_18 = t;
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_20;
        t = v_100(t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
      }
    t = q_18;
    {
      ATerm a_5 (ATerm t)
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_20);
              }
            else
              {
                t = p_20;
                t = v_100(t);
                t = Cons_2_0(_id, a_5, t);
              }
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            {
              ATerm t_18 = NULL,u_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_18 = ATgetFirst((ATermList) t);
                  u_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(u_18), (ATerm) ATmakeAppl(sym_Undefined_1, t_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_4, a_5, t);
    }
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  if(match_string(t, "--help"))
    {
      t = e_19;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_19;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_19;
        }
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_20;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = b_19;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm t_20 = t;
      int u_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_100(t);
          ;
          LocalPopChoice(u_20);
        }
      else
        {
          t = t_20;
          {
            ATerm v_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_5, d_5, e_5, t);
                ;
                LocalPopChoice(w_20);
              }
            else
              {
                t = v_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_5, t);
    {
      ATerm x_20 = t;
      int y_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_19 = NULL;
          j_19 = t;
          {
            ATerm z_20 = t;
            int a_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_19;
                {
                  ATerm b_21 = t;
                  int c_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm d_21 = t;
                        int e_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_19 = NULL;
                            t = eval_config_0_0(t);
                            x_19 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), x_19);
                            t = x_19;
                            ;
                            LocalPopChoice(e_21);
                          }
                        else
                          {
                            t = d_21;
                          }
                      }
                      ;
                      LocalPopChoice(c_21);
                    }
                  else
                    {
                      t = b_21;
                      t = fetch_1_0(f_5, t);
                    }
                  t = j_19;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(a_21);
              }
            else
              {
                t = z_20;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm f_21 = t;
                  int g_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_20 = NULL;
                      t = eval_config_0_0(t);
                      e_20 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), e_20);
                      t = e_20;
                      ;
                      LocalPopChoice(g_21);
                    }
                  else
                    {
                      t = f_21;
                    }
                  t = j_19;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_20);
        }
      else
        {
          t = x_20;
          {
            ATerm h_21 = t;
            int i_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    if(((c_19 != NULL) && (c_19 != t)))
                      _fail(t);
                    else
                      c_19 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_5, t);
                  return(t);
                }
                t = fetch_1_0(g_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(c_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_19)), term_j_21));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(i_21);
              }
            else
              {
                t = h_21;
              }
          }
        }
      d_19 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = d_19;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm t)
{
  ATerm m_19 = NULL;
  t = parse_options_1_0(v_84, t);
  m_19 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), m_19);
  t = m_19;
  t = x_84(t);
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_84, t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        {
          ATerm m_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_84(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_21);
            }
          else
            {
              t = m_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = if_verbose2_1_0(z_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_21;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  n_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_20 = NULL;
        t = eval_config_0_0(t);
        i_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_20);
        t = i_20;
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
      }
    o_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, o_19));
    t = n_19;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_84(t);
        ;
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        {
          ATerm u_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(v_21);
            }
          else
            {
              t = u_21;
              {
                ATerm w_21 = t;
                int x_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_21);
                  }
                else
                  {
                    t = w_21;
                    {
                      ATerm y_21 = t;
                      int z_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_5, u_5, y_5, t);
                          ;
                          LocalPopChoice(z_21);
                        }
                      else
                        {
                          t = y_21;
                          {
                            ATerm a_22 = t;
                            int b_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_22);
                              }
                            else
                              {
                                t = a_22;
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
  ATerm n_5 (ATerm t)
  {
    ATerm p_19 = NULL,q_19 = NULL,l_20 = NULL;
    p_19 = t;
    {
      ATerm c_22 = t;
      int d_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_19 != NULL) && (q_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_6, t);
          ;
          LocalPopChoice(d_22);
        }
      else
        {
          t = c_22;
          t = term_e_22;
          q_19 = t;
        }
      t = not_null(q_19);
      t = ReadFromFile_0_0(t);
      l_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_19, l_20);
      t = apply_strategy_1_0(e_84, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_5, g_84, l_5, n_5, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = _2_0(_id, stratego_ast_to_tg_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(b_6, _fail, default_usage_0_0, t);
  return(t);
}
