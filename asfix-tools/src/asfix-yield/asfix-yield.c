#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_parsetree_2;
Symbol sym_amb_1;
Symbol sym_appl_2;
Symbol sym_flatlex_2;
Symbol sym_AsFixCharacter_1;
Symbol sym_NatCon_1;
Symbol sym_term_9;
Symbol sym_prod_9;
Symbol sym_id_1;
Symbol sym_appl_3;
Symbol sym_list_3;
Symbol sym_lex_2;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
  ATprotectSymbol(sym_flatlex_2);
  sym_AsFixCharacter_1 = ATmakeSymbol("AsFixCharacter", 1, ATfalse);
  ATprotectSymbol(sym_AsFixCharacter_1);
  sym_NatCon_1 = ATmakeSymbol("NatCon", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_1);
  sym_term_9 = ATmakeSymbol("term", 9, ATfalse);
  ATprotectSymbol(sym_term_9);
  sym_prod_9 = ATmakeSymbol("prod", 9, ATfalse);
  ATprotectSymbol(sym_prod_9);
  sym_id_1 = ATmakeSymbol("id", 1, ATfalse);
  ATprotectSymbol(sym_id_1);
  sym_appl_3 = ATmakeSymbol("appl", 3, ATfalse);
  ATprotectSymbol(sym_appl_3);
  sym_list_3 = ATmakeSymbol("list", 3, ATfalse);
  ATprotectSymbol(sym_list_3);
  sym_lex_2 = ATmakeSymbol("lex", 2, ATfalse);
  ATprotectSymbol(sym_lex_2);
  init_constant_terms();
}
ATerm term_k_13;
ATerm term_a_13;
ATerm term_m_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_o_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_u_8;
ATerm term_q_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_p_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_s_5;
ATerm term_p_5;
ATerm term_n_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_b_5;
ATerm term_z_4;
ATerm term_w_4;
ATerm term_t_4;
ATerm term_n_4;
ATerm term_a_3;
ATerm term_y_2;
void init_constant_terms (void)
{
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_3));
  term_a_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(sym__2, term_i_5, term_j_5);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym__2, term_y_5, term_z_5);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_5);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym__2, term_p_6, term_j_5);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_j_5);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_f_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_j_5);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__3, term_e_9, term_f_9, (ATerm) ATempty);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm literal_1 (ATerm, ATerm e_55 (ATerm));
ATerm flatlex_2 (ATerm, ATerm p_53 (ATerm), ATerm q_53 (ATerm));
ATerm amb_1 (ATerm, ATerm m_53 (ATerm));
ATerm skip2_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_leaf_0 (ATerm);
ATerm printascii_0 (ATerm);
ATerm asfix_yield2_1 (ATerm, ATerm b_55 (ATerm));
ATerm appl_2 (ATerm, ATerm n_53 (ATerm), ATerm o_53 (ATerm));
ATerm parsetree_2 (ATerm, ATerm k_53 (ATerm), ATerm l_53 (ATerm));
ATerm is_asfix2_0 (ATerm);
ATerm lex_2 (ATerm, ATerm s_54 (ATerm), ATerm t_54 (ATerm));
ATerm list_1 (ATerm, ATerm z_62 (ATerm));
ATerm list_3 (ATerm, ATerm p_54 (ATerm), ATerm q_54 (ATerm), ATerm r_54 (ATerm));
ATerm appl_3 (ATerm, ATerm m_54 (ATerm), ATerm n_54 (ATerm), ATerm o_54 (ATerm));
ATerm at_tail_1 (ATerm, ATerm k_63 (ATerm));
ATerm skip1_1 (ATerm, ATerm o_0 (ATerm));
ATerm print_0 (ATerm);
ATerm leaves_3 (ATerm, ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm l_59 (ATerm, ATerm (ATerm)));
ATerm asfix_yield1_1 (ATerm, ATerm d_55 (ATerm));
ATerm term_9 (ATerm, ATerm t_53 (ATerm), ATerm u_53 (ATerm), ATerm v_53 (ATerm), ATerm w_53 (ATerm), ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm), ATerm a_54 (ATerm), ATerm b_54 (ATerm));
ATerm is_asfix1_0 (ATerm);
ATerm asfix_yield_1 (ATerm, ATerm a_55 (ATerm));
ATerm _2 (ATerm, ATerm a_47 (ATerm), ATerm b_47 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_71 (ATerm), ATerm b_71 (ATerm));
ATerm input_file_0 (ATerm);
ATerm obsolete_1 (ATerm, ATerm c_74 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm g_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_77 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm d_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm w_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_53 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_63 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_73 (ATerm));
ATerm map_1 (ATerm, ATerm x_62 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_55 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_48 (ATerm), ATerm k_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_78 (ATerm));
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm y_3 = NULL;
  y_3 = t;
  t = SSL_exit(not_null(y_3));
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm x_2;
  x_2 = t;
  {
    ATerm m_4 = NULL;
    ATerm r_4 = NULL;
    r_4 = t;
    if(((m_4 != NULL) && (m_4 != r_4)))
      _fail(r_4);
    else
      m_4 = r_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_2, not_null(m_4));
      t = printnl_0(t);
    }
  }
  t = x_2;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm z_2;
  z_2 = t;
  {
    t = error_0(t);
    {
      t = term_a_3;
      t = exit_0(t);
    }
  }
  t = z_2;
  return(t);
}
ATerm literal_1 (ATerm t, ATerm e_55 (ATerm))
{
  t = is_string_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      ATerm v_4 = NULL;
      v_4 = t;
      t = (ATerm) ATinsert(ATempty, not_null(v_4));
      return(t);
    }
    t = split_2(t, e_55, b_0);
    t = print_0(t);
  }
  return(t);
}
ATerm flatlex_2 (ATerm t, ATerm p_53 (ATerm), ATerm q_53 (ATerm))
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym_flatlex_2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      {
        ATerm k_5 = NULL,m_5 = NULL;
        ATerm l_5 = NULL;
        t = SSLgetAnnotations(not_null(e_5));
        {
          l_5 = t;
          if(((k_5 != NULL) && (k_5 != l_5)))
            _fail(l_5);
          else
            k_5 = l_5;
        }
        {
          t = not_null(f_5);
          {
            ATerm o_5 = NULL;
            t = p_53(t);
            {
              m_5 = t;
              {
                t = not_null(g_5);
                {
                  ATerm q_5 = NULL;
                  t = q_53(t);
                  {
                    o_5 = t;
                    {
                      ATerm r_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_flatlex_2, not_null(m_5), not_null(o_5)), not_null(k_5));
                      {
                        r_5 = t;
                        if(((q_5 != NULL) && (q_5 != r_5)))
                          _fail(r_5);
                        else
                          q_5 = r_5;
                      }
                      t = not_null(q_5);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm amb_1 (ATerm t, ATerm m_53 (ATerm))
{
  ATerm c_6 = NULL,d_6 = NULL;
  c_6 = t;
  b_6 :
  if(match_cons(c_6, sym_amb_1))
    {
      d_6 = ATgetArgument(c_6, 0);
      {
        ATerm g_6 = NULL,i_6 = NULL;
        ATerm h_6 = NULL;
        t = SSLgetAnnotations(not_null(c_6));
        {
          h_6 = t;
          if(((g_6 != NULL) && (g_6 != h_6)))
            _fail(h_6);
          else
            g_6 = h_6;
        }
        {
          t = not_null(d_6);
          {
            ATerm k_6 = NULL;
            t = m_53(t);
            {
              i_6 = t;
              {
                ATerm l_6 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(i_6)), not_null(g_6));
                {
                  l_6 = t;
                  if(((k_6 != NULL) && (k_6 != l_6)))
                    _fail(l_6);
                  else
                    k_6 = l_6;
                }
                t = not_null(k_6);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm skip2_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm b_3 = t;
  int c_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        t = at_tail_1(t, p_0);
        return(t);
      }
      t = Cons_2(t, _id, c_0);
      LocalPopChoice(c_3);
    }
  else
    {
      t = b_3;
      {
        ATerm d_3 = t;
        int e_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = list_1(t, p_0);
              return(t);
            }
            t = appl_2(t, _id, e_0);
            LocalPopChoice(e_3);
          }
        else
          {
            t = d_3;
            {
              ATerm f_3 = t;
              int g_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_0 (ATerm t)
                  {
                    t = Cons_2(t, p_0, _id);
                    return(t);
                  }
                  t = amb_1(t, f_0);
                  LocalPopChoice(g_3);
                }
              else
                {
                  t = f_3;
                  {
                    ATerm h_3 = t;
                    int i_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = parsetree_2(t, p_0, _id);
                        LocalPopChoice(i_3);
                      }
                    else
                      {
                        t = h_3;
                        t = flatlex_2(t, _id, p_0);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm is_leaf_0 (ATerm t)
{
  t = _all(t, _fail);
  return(t);
}
ATerm printascii_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
  s_6 = t;
  r_6 :
  if(match_cons(s_6, sym__2))
    {
      t_6 = ATgetArgument(s_6, 0);
      u_6 = ATgetArgument(s_6, 1);
      {
        ATerm j_3;
        j_3 = t;
        t = SSL_printascii(not_null(t_6), not_null(u_6));
        t = j_3;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm asfix_yield2_1 (ATerm t, ATerm b_55 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm k_3 = t;
    int l_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_string_0(t);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm a_7 = NULL;
            a_7 = t;
            t = (ATerm) ATinsert(ATempty, not_null(a_7));
            return(t);
          }
          t = split_2(t, b_55, r_0);
          t = print_0(t);
        }
        LocalPopChoice(l_3);
      }
    else
      {
        t = k_3;
        {
          ATerm s_0 (ATerm t)
          {
            ATerm c_7 = NULL;
            c_7 = t;
            t = (ATerm) ATinsert(ATempty, not_null(c_7));
            return(t);
          }
          t = split_2(t, b_55, s_0);
          t = printascii_0(t);
        }
      }
    return(t);
  }
  t = leaves_3(t, q_0, is_leaf_0, skip2_1);
  return(t);
}
ATerm appl_2 (ATerm t, ATerm n_53 (ATerm), ATerm o_53 (ATerm))
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym_appl_2))
    {
      n_7 = ATgetArgument(m_7, 0);
      o_7 = ATgetArgument(m_7, 1);
      {
        ATerm s_7 = NULL,u_7 = NULL;
        ATerm t_7 = NULL;
        t = SSLgetAnnotations(not_null(m_7));
        {
          t_7 = t;
          if(((s_7 != NULL) && (s_7 != t_7)))
            _fail(t_7);
          else
            s_7 = t_7;
        }
        {
          t = not_null(n_7);
          {
            ATerm w_7 = NULL;
            t = n_53(t);
            {
              u_7 = t;
              {
                t = not_null(o_7);
                {
                  ATerm y_7 = NULL;
                  t = o_53(t);
                  {
                    w_7 = t;
                    {
                      ATerm z_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(u_7), not_null(w_7)), not_null(s_7));
                      {
                        z_7 = t;
                        if(((y_7 != NULL) && (y_7 != z_7)))
                          _fail(z_7);
                        else
                          y_7 = z_7;
                      }
                      t = not_null(y_7);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parsetree_2 (ATerm t, ATerm k_53 (ATerm), ATerm l_53 (ATerm))
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_parsetree_2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      {
        ATerm r_8 = NULL,t_8 = NULL;
        ATerm s_8 = NULL;
        t = SSLgetAnnotations(not_null(l_8));
        {
          s_8 = t;
          if(((r_8 != NULL) && (r_8 != s_8)))
            _fail(s_8);
          else
            r_8 = s_8;
        }
        {
          t = not_null(m_8);
          {
            ATerm v_8 = NULL;
            t = k_53(t);
            {
              t_8 = t;
              {
                t = not_null(n_8);
                {
                  ATerm x_8 = NULL;
                  t = l_53(t);
                  {
                    v_8 = t;
                    {
                      ATerm y_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, not_null(t_8), not_null(v_8)), not_null(r_8));
                      {
                        y_8 = t;
                        if(((x_8 != NULL) && (x_8 != y_8)))
                          _fail(y_8);
                        else
                          x_8 = y_8;
                      }
                      t = not_null(x_8);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_asfix2_0 (ATerm t)
{
  ATerm m_3 = t;
  int n_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parsetree_2(t, _id, _id);
      LocalPopChoice(n_3);
    }
  else
    {
      t = m_3;
      t = appl_2(t, _id, _id);
    }
  return(t);
}
ATerm lex_2 (ATerm t, ATerm s_54 (ATerm), ATerm t_54 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_lex_2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm q_9 = NULL,s_9 = NULL;
        ATerm r_9 = NULL;
        t = SSLgetAnnotations(not_null(k_9));
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
        {
          t = not_null(l_9);
          {
            ATerm u_9 = NULL;
            t = s_54(t);
            {
              s_9 = t;
              {
                t = not_null(m_9);
                {
                  ATerm w_9 = NULL;
                  t = t_54(t);
                  {
                    u_9 = t;
                    {
                      ATerm x_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_2, not_null(s_9), not_null(u_9)), not_null(q_9));
                      {
                        x_9 = t;
                        if(((w_9 != NULL) && (w_9 != x_9)))
                          _fail(x_9);
                        else
                          w_9 = x_9;
                      }
                      t = not_null(w_9);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm z_62 (ATerm))
{
  ATerm d_10 (ATerm t)
  {
    ATerm o_3 = t;
    int p_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_3);
      }
    else
      {
        t = o_3;
        t = Cons_2(t, z_62, d_10);
      }
    return(t);
  }
  t = d_10(t);
  return(t);
}
ATerm list_3 (ATerm t, ATerm p_54 (ATerm), ATerm q_54 (ATerm), ATerm r_54 (ATerm))
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym_list_3))
    {
      m_10 = ATgetArgument(l_10, 0);
      n_10 = ATgetArgument(l_10, 1);
      o_10 = ATgetArgument(l_10, 2);
      {
        ATerm t_10 = NULL,v_10 = NULL;
        ATerm u_10 = NULL;
        t = SSLgetAnnotations(not_null(l_10));
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
        {
          t = not_null(m_10);
          {
            ATerm x_10 = NULL;
            t = p_54(t);
            {
              v_10 = t;
              {
                t = not_null(n_10);
                {
                  ATerm z_10 = NULL;
                  t = q_54(t);
                  {
                    x_10 = t;
                    {
                      t = not_null(o_10);
                      {
                        ATerm b_11 = NULL;
                        t = r_54(t);
                        {
                          z_10 = t;
                          {
                            ATerm c_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_list_3, not_null(v_10), not_null(x_10), not_null(z_10)), not_null(t_10));
                            {
                              c_11 = t;
                              if(((b_11 != NULL) && (b_11 != c_11)))
                                _fail(c_11);
                              else
                                b_11 = c_11;
                            }
                            t = not_null(b_11);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_3 (ATerm t, ATerm m_54 (ATerm), ATerm n_54 (ATerm), ATerm o_54 (ATerm))
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym_appl_3))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      t_11 = ATgetArgument(q_11, 2);
      {
        ATerm y_11 = NULL,a_12 = NULL;
        ATerm z_11 = NULL;
        t = SSLgetAnnotations(not_null(q_11));
        {
          z_11 = t;
          if(((y_11 != NULL) && (y_11 != z_11)))
            _fail(z_11);
          else
            y_11 = z_11;
        }
        {
          t = not_null(r_11);
          {
            ATerm c_12 = NULL;
            t = m_54(t);
            {
              a_12 = t;
              {
                t = not_null(s_11);
                {
                  ATerm e_12 = NULL;
                  t = n_54(t);
                  {
                    c_12 = t;
                    {
                      t = not_null(t_11);
                      {
                        ATerm g_12 = NULL;
                        t = o_54(t);
                        {
                          e_12 = t;
                          {
                            ATerm h_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_3, not_null(a_12), not_null(c_12), not_null(e_12)), not_null(y_11));
                            {
                              h_12 = t;
                              if(((g_12 != NULL) && (g_12 != h_12)))
                                _fail(h_12);
                              else
                                g_12 = h_12;
                            }
                            t = not_null(g_12);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_tail_1 (ATerm t, ATerm k_63 (ATerm))
{
  t = Cons_2(t, _id, k_63);
  return(t);
}
ATerm skip1_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm q_3 = t;
  int r_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, _id, o_0);
      LocalPopChoice(r_3);
    }
  else
    {
      t = q_3;
      {
        ATerm s_3 = t;
        int t_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_9(t, _id, _id, _id, _id, _id, o_0, o_0, o_0, _id);
            LocalPopChoice(t_3);
          }
        else
          {
            t = s_3;
            {
              ATerm u_3 = t;
              int v_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_0 (ATerm t)
                  {
                    t = list_1(t, o_0);
                    return(t);
                  }
                  t = appl_3(t, _id, _id, t_0);
                  LocalPopChoice(v_3);
                }
              else
                {
                  t = u_3;
                  {
                    ATerm w_3 = t;
                    int x_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_0 (ATerm t)
                        {
                          t = list_1(t, o_0);
                          return(t);
                        }
                        t = list_3(t, _id, _id, u_0);
                        LocalPopChoice(x_3);
                      }
                    else
                      {
                        t = w_3;
                        t = lex_2(t, o_0, _id);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym__2))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      {
        ATerm z_3;
        z_3 = t;
        t = SSL_print(not_null(r_12), not_null(s_12));
        t = z_3;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leaves_3 (ATerm t, ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm l_59 (ATerm, ATerm (ATerm)))
{
  ATerm w_12 (ATerm t)
  {
    ATerm a_4 = t;
    int b_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_59(t);
        t = j_59(t);
        LocalPopChoice(b_4);
      }
    else
      {
        t = a_4;
        {
          ATerm c_4 = t;
          int d_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_59(t, w_12);
              LocalPopChoice(d_4);
            }
          else
            {
              t = c_4;
              t = _all(t, w_12);
            }
        }
      }
    return(t);
  }
  t = w_12(t);
  return(t);
}
ATerm asfix_yield1_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      ATerm y_12 = NULL;
      y_12 = t;
      t = (ATerm) ATinsert(ATempty, not_null(y_12));
      return(t);
    }
    t = split_2(t, d_55, w_0);
    t = print_0(t);
    return(t);
  }
  t = leaves_3(t, v_0, is_string_0, skip1_1);
  return(t);
}
ATerm term_9 (ATerm t, ATerm t_53 (ATerm), ATerm u_53 (ATerm), ATerm v_53 (ATerm), ATerm w_53 (ATerm), ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm), ATerm a_54 (ATerm), ATerm b_54 (ATerm))
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_term_9))
    {
      p_13 = ATgetArgument(o_13, 0);
      q_13 = ATgetArgument(o_13, 1);
      r_13 = ATgetArgument(o_13, 2);
      s_13 = ATgetArgument(o_13, 3);
      t_13 = ATgetArgument(o_13, 4);
      u_13 = ATgetArgument(o_13, 5);
      v_13 = ATgetArgument(o_13, 6);
      w_13 = ATgetArgument(o_13, 7);
      x_13 = ATgetArgument(o_13, 8);
      {
        ATerm i_14 = NULL,k_14 = NULL;
        ATerm j_14 = NULL;
        t = SSLgetAnnotations(not_null(o_13));
        {
          j_14 = t;
          if(((i_14 != NULL) && (i_14 != j_14)))
            _fail(j_14);
          else
            i_14 = j_14;
        }
        {
          t = not_null(p_13);
          {
            ATerm m_14 = NULL;
            t = t_53(t);
            {
              k_14 = t;
              {
                t = not_null(q_13);
                {
                  ATerm o_14 = NULL;
                  t = u_53(t);
                  {
                    m_14 = t;
                    {
                      t = not_null(r_13);
                      {
                        ATerm q_14 = NULL;
                        t = v_53(t);
                        {
                          o_14 = t;
                          {
                            t = not_null(s_13);
                            {
                              ATerm s_14 = NULL;
                              t = w_53(t);
                              {
                                q_14 = t;
                                {
                                  t = not_null(t_13);
                                  {
                                    ATerm u_14 = NULL;
                                    t = x_53(t);
                                    {
                                      s_14 = t;
                                      {
                                        t = not_null(u_13);
                                        {
                                          ATerm w_14 = NULL;
                                          t = y_53(t);
                                          {
                                            u_14 = t;
                                            {
                                              t = not_null(v_13);
                                              {
                                                ATerm y_14 = NULL;
                                                t = z_53(t);
                                                {
                                                  w_14 = t;
                                                  {
                                                    t = not_null(w_13);
                                                    {
                                                      ATerm a_15 = NULL;
                                                      t = a_54(t);
                                                      {
                                                        y_14 = t;
                                                        {
                                                          t = not_null(x_13);
                                                          {
                                                            ATerm c_15 = NULL;
                                                            t = b_54(t);
                                                            {
                                                              a_15 = t;
                                                              {
                                                                ATerm d_15 = NULL;
                                                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_term_9, not_null(k_14), not_null(m_14), not_null(o_14), not_null(q_14), not_null(s_14), not_null(u_14), not_null(w_14), not_null(y_14), not_null(a_15)), not_null(i_14));
                                                                {
                                                                  d_15 = t;
                                                                  if(((c_15 != NULL) && (c_15 != d_15)))
                                                                    _fail(d_15);
                                                                  else
                                                                    c_15 = d_15;
                                                                }
                                                                t = not_null(c_15);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_asfix1_0 (ATerm t)
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_9(t, _id, _id, _id, _id, _id, _id, _id, _id, _id);
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      {
        ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
        t_15 = t;
        q_15 :
        if(match_cons(t_15, sym_appl_3))
          {
            u_15 = ATgetArgument(t_15, 0);
            f_16 = ATgetArgument(t_15, 1);
            g_16 = ATgetArgument(t_15, 2);
            r_15 :
            if(match_cons(u_15, sym_prod_9))
              {
                v_15 = ATgetArgument(u_15, 0);
                x_15 = ATgetArgument(u_15, 1);
                y_15 = ATgetArgument(u_15, 2);
                z_15 = ATgetArgument(u_15, 3);
                a_16 = ATgetArgument(u_15, 4);
                b_16 = ATgetArgument(u_15, 5);
                c_16 = ATgetArgument(u_15, 6);
                d_16 = ATgetArgument(u_15, 7);
                e_16 = ATgetArgument(u_15, 8);
                s_15 :
                if(match_cons(v_15, sym_id_1))
                  {
                    w_15 = ATgetArgument(v_15, 0);
                    {
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm asfix_yield_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm g_4 = t;
  int h_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_asfix1_0(t);
      t = asfix_yield1_1(t, a_55);
      LocalPopChoice(h_4);
    }
  else
    {
      t = g_4;
      {
        ATerm i_4 = t;
        int j_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_asfix2_0(t);
            t = asfix_yield2_1(t, a_55);
            LocalPopChoice(j_4);
          }
        else
          {
            t = i_4;
            {
              ATerm k_4 = t;
              int l_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1(t, a_55);
                  LocalPopChoice(l_4);
                }
              else
                {
                  t = k_4;
                  {
                    t = (ATerm) ATinsert(ATempty, term_n_4);
                    t = fatal_error_0(t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_47 (ATerm), ATerm b_47 (ATerm))
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym__2))
    {
      o_16 = ATgetArgument(n_16, 0);
      p_16 = ATgetArgument(n_16, 1);
      {
        ATerm t_16 = NULL,v_16 = NULL;
        ATerm u_16 = NULL;
        t = SSLgetAnnotations(not_null(n_16));
        {
          u_16 = t;
          if(((t_16 != NULL) && (t_16 != u_16)))
            _fail(u_16);
          else
            t_16 = u_16;
        }
        {
          t = not_null(o_16);
          {
            ATerm x_16 = NULL;
            t = a_47(t);
            {
              v_16 = t;
              {
                t = not_null(p_16);
                {
                  ATerm z_16 = NULL;
                  t = b_47(t);
                  {
                    x_16 = t;
                    {
                      ATerm a_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_16), not_null(x_16)), not_null(t_16));
                      {
                        a_17 = t;
                        if(((z_16 != NULL) && (z_16 != a_17)))
                          _fail(a_17);
                        else
                          z_16 = a_17;
                      }
                      t = not_null(z_16);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_17 = NULL;
  h_17 = t;
  t = SSL_ReadFromFile(not_null(h_17));
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_71 (ATerm), ATerm b_71 (ATerm))
{
  ATerm r_17 = NULL,t_17 = NULL;
  ATerm o_4;
  o_4 = t;
  {
    ATerm s_17 = NULL;
    t = a_71(t);
    {
      s_17 = t;
      if(((r_17 != NULL) && (r_17 != s_17)))
        _fail(s_17);
      else
        r_17 = s_17;
    }
  }
  t = o_4;
  {
    ATerm u_17 = NULL;
    t = b_71(t);
    {
      u_17 = t;
      if(((t_17 != NULL) && (t_17 != u_17)))
        _fail(u_17);
      else
        t_17 = u_17;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), not_null(t_17));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_18 = NULL;
  ATerm p_4;
  p_4 = t;
  {
    ATerm q_4 = t;
    int s_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_0 (ATerm t)
        {
          ATerm b_18 = NULL,c_18 = NULL;
          b_18 = t;
          y_17 :
          if(match_cons(b_18, sym_Input_1))
            {
              c_18 = ATgetArgument(b_18, 0);
              if(((a_18 != NULL) && (a_18 != c_18)))
                _fail(c_18);
              else
                a_18 = c_18;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, x_0);
        LocalPopChoice(s_4);
      }
    else
      {
        t = q_4;
        {
          ATerm d_18 = NULL;
          t = term_t_4;
          {
            d_18 = t;
            if(((a_18 != NULL) && (a_18 != d_18)))
              _fail(d_18);
            else
              a_18 = d_18;
          }
        }
      }
  }
  t = p_4;
  {
    ATerm y_0 (ATerm t)
    {
      t = not_null(a_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_0);
  }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm u_4;
  u_4 = t;
  {
    t = c_74(t);
    {
      ATerm z_0 (ATerm t)
      {
        t = term_w_4;
        return(t);
      }
      t = debug_1(t, z_0);
    }
  }
  t = u_4;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  ATerm x_4 = t;
  int y_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
      m_18 = t;
      h_18 :
      if(match_cons(m_18, sym__2))
        {
          n_18 = ATgetArgument(m_18, 0);
          o_18 = ATgetArgument(m_18, 1);
          {
            if(((l_18 != NULL) && (l_18 != n_18)))
              _fail(n_18);
            else
              l_18 = n_18;
            if(((k_18 != NULL) && (k_18 != o_18)))
              _fail(o_18);
            else
              k_18 = o_18;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_4);
      t = SSL_open_file(not_null(l_18), not_null(k_18));
    }
  else
    {
      t = x_4;
      {
        ATerm p_18 = NULL;
        ATerm q_18 = NULL;
        ATerm a_1 (ATerm t)
        {
          t = term_z_4;
          return(t);
        }
        t = obsolete_1(t, a_1);
        {
          p_18 = t;
          {
            if(((l_18 != NULL) && (l_18 != p_18)))
              _fail(p_18);
            else
              l_18 = p_18;
            {
              ATerm a_5;
              a_5 = t;
              {
                ATerm r_18 = NULL;
                t = term_b_5;
                {
                  r_18 = t;
                  if(((q_18 != NULL) && (q_18 != r_18)))
                    _fail(r_18);
                  else
                    q_18 = r_18;
                }
              }
              t = a_5;
              t = SSL_open_file(not_null(l_18), not_null(q_18));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm a_19 (ATerm t)
  {
    ATerm c_5 = t;
    int h_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_63, _id);
        LocalPopChoice(h_5);
      }
    else
      {
        t = c_5;
        t = Cons_2(t, _id, a_19);
      }
    return(t);
  }
  t = a_19(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_77 (ATerm))
{
  t = fetch_1(t, u_77);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm c_19 = NULL;
    c_19 = t;
    b_19 :
    if(!(match_string(c_19, "-v")))
      {
        if(!(match_string(c_19, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_n_5;
    t = set_config_0(t);
    t = term_p_5;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_s_5;
    return(t);
  }
  t = Option_3(t, b_1, c_1, d_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_19 = NULL;
    f_19 = t;
    d_19 :
    if(!(match_string(f_19, "-k")))
      {
        if(!(match_string(f_19, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm t_5;
    t_5 = t;
    {
      ATerm g_19 = NULL;
      ATerm h_19 = NULL;
      t = string_to_int_0(t);
      {
        h_19 = t;
        if(((g_19 != NULL) && (g_19 != h_19)))
          _fail(h_19);
        else
          g_19 = h_19;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_5, not_null(g_19));
        t = set_config_0(t);
      }
    }
    t = t_5;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    t = term_v_5;
    return(t);
  }
  t = ArgOption_3(t, e_1, f_1, g_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_19 = NULL;
  k_19 = t;
  t = SSL_string_to_int(not_null(k_19));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm v_19 = NULL;
        v_19 = t;
        n_19 :
        if(!(match_string(v_19, "-S")))
          {
            if(!(match_string(v_19, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_1 (ATerm t)
      {
        t = term_a_6;
        t = set_config_0(t);
        t = term_e_6;
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        t = term_f_6;
        return(t);
      }
      t = Option_3(t, h_1, i_1, j_1);
      LocalPopChoice(x_5);
    }
  else
    {
      t = w_5;
      {
        ATerm j_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              ATerm w_19 = NULL;
              w_19 = t;
              r_19 :
              if(!(match_string(w_19, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              ATerm z_19 = NULL;
              ATerm n_6;
              n_6 = t;
              {
                ATerm x_19 = NULL;
                ATerm y_19 = NULL;
                t = string_to_int_0(t);
                {
                  y_19 = t;
                  if(((x_19 != NULL) && (x_19 != y_19)))
                    _fail(y_19);
                  else
                    x_19 = y_19;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_5, not_null(x_19));
                  t = set_config_0(t);
                }
              }
              t = n_6;
              {
                ATerm a_20 = NULL;
                a_20 = t;
                if(((z_19 != NULL) && (z_19 != a_20)))
                  _fail(a_20);
                else
                  z_19 = a_20;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_19));
              }
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              t = term_o_6;
              return(t);
            }
            t = ArgOption_3(t, k_1, l_1, m_1);
            LocalPopChoice(m_6);
          }
        else
          {
            t = j_6;
            {
              ATerm n_1 (ATerm t)
              {
                ATerm b_20 = NULL;
                b_20 = t;
                u_19 :
                if(!(match_string(b_20, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_1 (ATerm t)
              {
                t = term_q_6;
                t = set_config_0(t);
                t = term_v_6;
                return(t);
              }
              ATerm p_1 (ATerm t)
              {
                t = term_w_6;
                return(t);
              }
              t = Option_3(t, n_1, o_1, p_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm x_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(y_6);
    }
  else
    {
      t = x_6;
      {
        ATerm z_6 = t;
        int b_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(b_7);
          }
        else
          {
            t = z_6;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm h_20 = NULL;
    h_20 = t;
    e_20 :
    if(!(match_string(h_20, "-o")))
      {
        if(!(match_string(h_20, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm k_20 = NULL;
    ATerm d_7;
    d_7 = t;
    {
      ATerm i_20 = NULL;
      ATerm j_20 = NULL;
      j_20 = t;
      if(((i_20 != NULL) && (i_20 != j_20)))
        _fail(j_20);
      else
        i_20 = j_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, not_null(i_20));
        t = set_config_0(t);
      }
    }
    t = d_7;
    {
      ATerm l_20 = NULL;
      l_20 = t;
      if(((k_20 != NULL) && (k_20 != l_20)))
        _fail(l_20);
      else
        k_20 = l_20;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_20));
    }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_f_7;
    return(t);
  }
  t = ArgOption_3(t, q_1, r_1, s_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm t_1 (ATerm t)
        {
          ATerm p_20 = NULL;
          p_20 = t;
          o_20 :
          if(!(match_string(p_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_1 (ATerm t)
        {
          t = term_j_7;
          t = set_config_0(t);
          t = term_k_7;
          return(t);
        }
        ATerm v_1 (ATerm t)
        {
          t = term_p_7;
          return(t);
        }
        t = Option_3(t, t_1, u_1, v_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  v_20 = t;
  t_20 :
  if(match_string(v_20, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(v_20) == AT_LIST) && !(ATisEmpty(v_20))))
        {
          w_20 = ATgetFirst((ATermList) v_20);
          x_20 = (ATerm) ATgetNext((ATermList) v_20);
          u_20 :
          if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
            {
              y_20 = ATgetFirst((ATermList) x_20);
              z_20 = (ATerm) ATgetNext((ATermList) x_20);
              {
                ATerm d_21 = NULL;
                ATerm q_7;
                q_7 = t;
                {
                  t = not_null(w_20);
                  t = l_0(t);
                }
                t = q_7;
                {
                  ATerm e_21 = NULL;
                  t = not_null(y_20);
                  {
                    t = m_0(t);
                    {
                      e_21 = t;
                      if(((d_21 != NULL) && (d_21 != e_21)))
                        _fail(e_21);
                      else
                        d_21 = e_21;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_20)), not_null(d_21));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm l_21 = NULL;
    l_21 = t;
    i_21 :
    if(!(match_string(l_21, "-i")))
      {
        if(!(match_string(l_21, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm o_21 = NULL;
    ATerm r_7;
    r_7 = t;
    {
      ATerm m_21 = NULL;
      ATerm n_21 = NULL;
      n_21 = t;
      if(((m_21 != NULL) && (m_21 != n_21)))
        _fail(n_21);
      else
        m_21 = n_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(m_21));
        t = set_config_0(t);
      }
    }
    t = r_7;
    {
      ATerm p_21 = NULL;
      p_21 = t;
      if(((o_21 != NULL) && (o_21 != p_21)))
        _fail(p_21);
      else
        o_21 = p_21;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_21));
    }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_x_7;
    return(t);
  }
  t = ArgOption_3(t, w_1, x_1, y_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  t = SSL_table_destroy(not_null(t_21));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  w_21 :
  if(((ATgetType(x_21) == AT_LIST) && ATisEmpty(x_21)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
        {
          y_21 = ATgetFirst((ATermList) x_21);
          z_21 = (ATerm) ATgetNext((ATermList) x_21);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm e_8;
  e_8 = t;
  {
    ATerm c_22 = NULL;
    ATerm f_22 = NULL;
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm d_22 = NULL;
          ATerm e_22 = NULL;
          e_22 = t;
          if(((d_22 != NULL) && (d_22 != e_22)))
            _fail(e_22);
          else
            d_22 = e_22;
          t = (ATerm) ATinsert(ATempty, not_null(d_22));
        }
      }
    {
      f_22 = t;
      if(((c_22 != NULL) && (c_22 != f_22)))
        _fail(f_22);
      else
        c_22 = f_22;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_8, not_null(c_22));
      t = printnl_0(t);
    }
  }
  t = e_8;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_8), term_i_8);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
  q_22 = t;
  n_22 :
  if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
    {
      o_22 = ATgetFirst((ATermList) q_22);
      p_22 = (ATerm) ATgetNext((ATermList) q_22);
      {
        ATerm t_22 = NULL;
        t = not_null(p_22);
        {
          ATerm o_8;
          o_8 = t;
          {
            ATerm u_22 = NULL,w_22 = NULL,y_22 = NULL;
            ATerm p_8;
            p_8 = t;
            {
              ATerm v_22 = NULL;
              t = j_0(t);
              {
                v_22 = t;
                if(((u_22 != NULL) && (u_22 != v_22)))
                  _fail(v_22);
                else
                  u_22 = v_22;
              }
            }
            t = p_8;
            {
              ATerm x_22 = NULL;
              t = not_null(o_22);
              {
                t = i_0(t);
                {
                  x_22 = t;
                  if(((w_22 != NULL) && (w_22 != x_22)))
                    _fail(x_22);
                  else
                    w_22 = x_22;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_22)), not_null(w_22));
                {
                  y_22 = t;
                  if(((t_22 != NULL) && (t_22 != y_22)))
                    _fail(y_22);
                  else
                    t_22 = y_22;
                }
              }
            }
          }
          t = o_8;
          {
            ATerm z_1 (ATerm t)
            {
              t = not_null(t_22);
              return(t);
            }
            t = reverse_acc_2(t, i_0, z_1);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_22) == AT_LIST) && ATisEmpty(q_22)))
        {
          {
            t = term_j_5;
            t = j_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm f_23 = NULL;
  ATerm g_23 = NULL;
  t = term_j_5;
  {
    t = h_0(t);
    {
      g_23 = t;
      if(((f_23 != NULL) && (f_23 != g_23)))
        _fail(g_23);
      else
        f_23 = g_23;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(f_23)), term_q_8);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_53 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_Program_1))
    {
      o_23 = ATgetArgument(n_23, 0);
      {
        ATerm r_23 = NULL,t_23 = NULL;
        ATerm s_23 = NULL;
        t = SSLgetAnnotations(not_null(n_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
        {
          t = not_null(o_23);
          {
            ATerm v_23 = NULL;
            t = d_53(t);
            {
              t_23 = t;
              {
                ATerm w_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_23)), not_null(r_23));
                {
                  w_23 = t;
                  if(((v_23 != NULL) && (v_23 != w_23)))
                    _fail(w_23);
                  else
                    v_23 = w_23;
                }
                t = not_null(v_23);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm f_24 = NULL;
  ATerm w_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL;
      t = term_a_9;
      {
        t = get_config_0(t);
        {
          g_24 = t;
          if(((f_24 != NULL) && (f_24 != g_24)))
            _fail(g_24);
          else
            f_24 = g_24;
        }
      }
      LocalPopChoice(z_8);
    }
  else
    {
      t = w_8;
      {
        ATerm b_2 (ATerm t)
        {
          ATerm c_2 (ATerm t)
          {
            ATerm h_24 = NULL;
            h_24 = t;
            if(((f_24 != NULL) && (f_24 != h_24)))
              _fail(h_24);
            else
              f_24 = h_24;
            return(t);
          }
          t = Program_1(t, c_2);
          return(t);
        }
        t = fetch_1(t, b_2);
      }
    }
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 (ATerm t)
        {
          t = not_null(f_24);
          return(t);
        }
        t = short_description_1(t, d_2);
        t = echo_0(t);
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        {
        }
      }
    {
      t = term_d_9;
      {
        t = echo_0(t);
        {
          t = term_g_9;
          {
            t = table_get_0(t);
            {
              ATerm e_2 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, e_2);
              {
                ATerm f_2 (ATerm t)
                {
                  ATerm i_24 = NULL;
                  ATerm j_24 = NULL;
                  j_24 = t;
                  if(((i_24 != NULL) && (i_24 != j_24)))
                    _fail(j_24);
                  else
                    i_24 = j_24;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_24)), term_h_9);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_2);
                {
                  ATerm i_9 = t;
                  int n_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_24 = NULL;
                      ATerm l_24 = NULL;
                      ATerm g_2 (ATerm t)
                      {
                        t = not_null(f_24);
                        return(t);
                      }
                      t = long_description_1(t, g_2);
                      {
                        l_24 = t;
                        if(((k_24 != NULL) && (k_24 != l_24)))
                          _fail(l_24);
                        else
                          k_24 = l_24;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(k_24)), term_o_9);
                        t = echo_0(t);
                      }
                      LocalPopChoice(n_9);
                    }
                  else
                    {
                      t = i_9;
                      {
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
ATerm debug_0 (ATerm t)
{
  ATerm p_9;
  p_9 = t;
  {
    ATerm r_24 = NULL;
    ATerm s_24 = NULL;
    s_24 = t;
    if(((r_24 != NULL) && (r_24 != s_24)))
      _fail(s_24);
    else
      r_24 = s_24;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_2, (ATerm) ATinsert(ATempty, not_null(r_24)));
      t = printnl_0(t);
    }
  }
  t = p_9;
  return(t);
}
ATerm say_1 (ATerm t, ATerm w_73 (ATerm))
{
  ATerm t_9;
  t_9 = t;
  {
    t = w_73(t);
    t = debug_0(t);
  }
  t = t_9;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_53 (ATerm))
{
  ATerm z_24 = NULL,a_25 = NULL;
  z_24 = t;
  y_24 :
  if(match_cons(z_24, sym_Undefined_1))
    {
      a_25 = ATgetArgument(z_24, 0);
      {
        ATerm d_25 = NULL,f_25 = NULL;
        ATerm e_25 = NULL;
        t = SSLgetAnnotations(not_null(z_24));
        {
          e_25 = t;
          if(((d_25 != NULL) && (d_25 != e_25)))
            _fail(e_25);
          else
            d_25 = e_25;
        }
        {
          t = not_null(a_25);
          {
            ATerm h_25 = NULL;
            t = e_53(t);
            {
              f_25 = t;
              {
                ATerm i_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_25)), not_null(d_25));
                {
                  i_25 = t;
                  if(((h_25 != NULL) && (h_25 != i_25)))
                    _fail(i_25);
                  else
                    h_25 = i_25;
                }
                t = not_null(h_25);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  q_25 :
  if(match_cons(r_25, sym_Help_0))
    {
      ATerm t_25 = NULL,v_25 = NULL;
      ATerm v_9;
      v_9 = t;
      {
        ATerm u_25 = NULL;
        t = SSLgetAnnotations(not_null(r_25));
        {
          u_25 = t;
          if(((t_25 != NULL) && (t_25 != u_25)))
            _fail(u_25);
          else
            t_25 = u_25;
        }
      }
      t = v_9;
      {
        ATerm w_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_25));
        {
          w_25 = t;
          if(((v_25 != NULL) && (v_25 != w_25)))
            _fail(w_25);
          else
            v_25 = w_25;
        }
        t = not_null(v_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  t = SSL_implode_string(not_null(b_26));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
        g_26 = t;
        f_26 :
        if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
          {
            h_26 = ATgetFirst((ATermList) g_26);
            i_26 = (ATerm) ATgetNext((ATermList) g_26);
            {
              t = not_null(h_26);
              {
                ATerm h_2 (ATerm t)
                {
                  t = not_null(i_26);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_2);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm s_26 = NULL;
  ATerm u_26 = NULL;
  s_26 = t;
  {
    ATerm v_26 = NULL;
    ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
    t = not_null(s_26);
    {
      v_26 = t;
      {
        t = SSL_explode_term(not_null(v_26));
        {
          x_26 = t;
          q_26 :
          if(match_cons(x_26, sym__2))
            {
              y_26 = ATgetArgument(x_26, 0);
              z_26 = ATgetArgument(x_26, 1);
              r_26 :
              if(match_string(y_26, ""))
                {
                  if(((u_26 != NULL) && (u_26 != z_26)))
                    _fail(z_26);
                  else
                    u_26 = z_26;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_26);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm d_27 (ATerm t)
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_27);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        {
          t = Nil_0(t);
          t = m_63(t);
        }
      }
    return(t);
  }
  t = d_27(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym__2))
    {
      h_27 = ATgetArgument(g_27, 0);
      i_27 = ATgetArgument(g_27, 1);
      {
        t = not_null(h_27);
        {
          ATerm i_2 (ATerm t)
          {
            t = not_null(i_27);
            return(t);
          }
          t = at_end_1(t, i_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm c_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(e_10);
    }
  else
    {
      t = c_10;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  t = SSL_explode_string(not_null(n_27));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym__2))
    {
      t_27 = ATgetArgument(s_27, 0);
      u_27 = ATgetArgument(s_27, 1);
      {
        ATerm h_10;
        h_10 = t;
        t = SSL_printnl(not_null(t_27), not_null(u_27));
        t = h_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm i_10;
  i_10 = t;
  {
    ATerm a_28 = NULL,c_28 = NULL;
    ATerm j_10;
    j_10 = t;
    {
      ATerm b_28 = NULL;
      t = v_73(t);
      {
        b_28 = t;
        if(((a_28 != NULL) && (a_28 != b_28)))
          _fail(b_28);
        else
          a_28 = b_28;
      }
    }
    t = j_10;
    {
      ATerm d_28 = NULL;
      d_28 = t;
      if(((c_28 != NULL) && (c_28 != d_28)))
        _fail(d_28);
      else
        c_28 = d_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_28)), not_null(a_28)));
        t = printnl_0(t);
      }
    }
  }
  t = i_10;
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm g_28 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = Cons_2(t, x_62, g_28);
      }
    return(t);
  }
  t = g_28(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = SSL_is_string(not_null(i_28));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm w_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 (ATerm t)
            {
              ATerm a_11 = t;
              int d_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(d_11);
                }
              else
                {
                  t = a_11;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, j_2);
            LocalPopChoice(y_10);
          }
        else
          {
            t = w_10;
            {
              ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
              r_28 = t;
              q_28 :
              if(match_cons(r_28, sym_Path_1))
                {
                  s_28 = ATgetArgument(r_28, 0);
                  t = not_null(s_28);
                }
              else
                {
                  if(match_cons(r_28, sym_Var_1))
                    {
                      s_28 = ATgetArgument(r_28, 0);
                      {
                        t = not_null(s_28);
                        {
                          ATerm e_11 = t;
                          int f_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(f_11);
                            }
                          else
                            {
                              t = e_11;
                              {
                                ATerm k_2 (ATerm t)
                                {
                                  t = term_g_11;
                                  return(t);
                                }
                                t = debug_1(t, k_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_28, sym_Prefix_2))
                        {
                          s_28 = ATgetArgument(r_28, 0);
                          t_28 = ATgetArgument(r_28, 1);
                          {
                            ATerm y_28 = NULL,a_29 = NULL;
                            ATerm h_11;
                            h_11 = t;
                            {
                              ATerm z_28 = NULL;
                              t = not_null(s_28);
                              {
                                t = eval_config_0(t);
                                {
                                  z_28 = t;
                                  if(((y_28 != NULL) && (y_28 != z_28)))
                                    _fail(z_28);
                                  else
                                    y_28 = z_28;
                                }
                              }
                            }
                            t = h_11;
                            {
                              ATerm b_29 = NULL;
                              t = not_null(t_28);
                              {
                                t = eval_config_0(t);
                                {
                                  b_29 = t;
                                  if(((a_29 != NULL) && (a_29 != b_29)))
                                    _fail(b_29);
                                  else
                                    a_29 = b_29;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), not_null(a_29));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(j_29));
    {
      t = table_get_0(t);
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm l_11;
              l_11 = t;
              {
                ATerm l_29 = NULL;
                ATerm m_29 = NULL;
                m_29 = t;
                if(((l_29 != NULL) && (l_29 != m_29)))
                  _fail(m_29);
                else
                  l_29 = m_29;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_i_11, not_null(j_29), not_null(l_29));
                  t = table_put_0(t);
                }
              }
              t = l_11;
            }
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_55 (ATerm))
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_55(t);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym__2))
    {
      s_29 = ATgetArgument(r_29, 0);
      t_29 = ATgetArgument(r_29, 1);
      t = SSL_table_get(not_null(s_29), not_null(t_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym__3))
    {
      b_30 = ATgetArgument(a_30, 0);
      c_30 = ATgetArgument(a_30, 1);
      d_30 = ATgetArgument(a_30, 2);
      {
        ATerm o_11;
        o_11 = t;
        {
          ATerm h_30 = NULL;
          ATerm i_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_30), not_null(c_30));
          {
            ATerm u_11 = t;
            int v_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_11);
              }
            else
              {
                t = u_11;
                t = (ATerm) ATempty;
              }
            {
              i_30 = t;
              if(((h_30 != NULL) && (h_30 != i_30)))
                _fail(i_30);
              else
                h_30 = i_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_30), not_null(c_30), (ATerm) ATinsert(CheckATermList(not_null(h_30)), not_null(d_30)));
            t = table_put_0(t);
          }
        }
        t = o_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_78 (ATerm))
{
  ATerm m_30 = NULL;
  ATerm n_30 = NULL;
  t = term_j_5;
  {
    t = z_78(t);
    {
      n_30 = t;
      if(((m_30 != NULL) && (m_30 != n_30)))
        _fail(n_30);
      else
        m_30 = n_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_9, term_f_9, not_null(m_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_string(t_30, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(t_30) == AT_LIST) && !(ATisEmpty(t_30))))
        {
          u_30 = ATgetFirst((ATermList) t_30);
          v_30 = (ATerm) ATgetNext((ATermList) t_30);
          {
            ATerm y_30 = NULL;
            ATerm w_11;
            w_11 = t;
            {
              t = not_null(u_30);
              t = a_0(t);
            }
            t = w_11;
            {
              ATerm z_30 = NULL;
              t = term_j_5;
              {
                t = d_0(t);
                {
                  z_30 = t;
                  if(((y_30 != NULL) && (y_30 != z_30)))
                    _fail(z_30);
                  else
                    y_30 = z_30;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_30)), not_null(y_30));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm e_31 = NULL;
    e_31 = t;
    d_31 :
    if(!(match_string(e_31, "--help")))
      {
        if(!(match_string(e_31, "-h")))
          {
            if(!(match_string(e_31, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_b_12;
    {
      t = set_config_0(t);
      t = term_d_12;
    }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_f_12;
    return(t);
  }
  t = Option_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  h_31 = t;
  g_31 :
  if(((ATgetType(h_31) == AT_LIST) && !(ATisEmpty(h_31))))
    {
      i_31 = ATgetFirst((ATermList) h_31);
      j_31 = (ATerm) ATgetNext((ATermList) h_31);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_31)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_48 (ATerm), ATerm k_48 (ATerm))
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  v_31 :
  if(((ATgetType(w_31) == AT_LIST) && !(ATisEmpty(w_31))))
    {
      x_31 = ATgetFirst((ATermList) w_31);
      y_31 = (ATerm) ATgetNext((ATermList) w_31);
      {
        ATerm c_32 = NULL,e_32 = NULL;
        ATerm d_32 = NULL;
        t = SSLgetAnnotations(not_null(w_31));
        {
          d_32 = t;
          if(((c_32 != NULL) && (c_32 != d_32)))
            _fail(d_32);
          else
            c_32 = d_32;
        }
        {
          t = not_null(x_31);
          {
            ATerm g_32 = NULL;
            t = j_48(t);
            {
              e_32 = t;
              {
                t = not_null(y_31);
                {
                  ATerm i_32 = NULL;
                  t = k_48(t);
                  {
                    g_32 = t;
                    {
                      ATerm j_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_32)), not_null(e_32)), not_null(c_32));
                      {
                        j_32 = t;
                        if(((i_32 != NULL) && (i_32 != j_32)))
                          _fail(j_32);
                        else
                          i_32 = j_32;
                      }
                      t = not_null(i_32);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  s_32 :
  if(((ATgetType(t_32) == AT_LIST) && ATisEmpty(t_32)))
    {
      {
        ATerm v_32 = NULL,x_32 = NULL;
        ATerm i_12;
        i_12 = t;
        {
          ATerm w_32 = NULL;
          t = SSLgetAnnotations(not_null(t_32));
          {
            w_32 = t;
            if(((v_32 != NULL) && (v_32 != w_32)))
              _fail(w_32);
            else
              v_32 = w_32;
          }
        }
        t = i_12;
        {
          ATerm y_32 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_32));
          {
            y_32 = t;
            if(((x_32 != NULL) && (x_32 != y_32)))
              _fail(y_32);
            else
              x_32 = y_32;
          }
          t = not_null(x_32);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  e_33 = t;
  d_33 :
  if(match_cons(e_33, sym__2))
    {
      f_33 = ATgetArgument(e_33, 0);
      g_33 = ATgetArgument(e_33, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_11, not_null(f_33), not_null(g_33));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm j_12;
  j_12 = t;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_12;
        t = x_78(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
        }
      }
  }
  t = j_12;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm p_33 = NULL;
      ATerm n_12;
      n_12 = t;
      {
        ATerm n_33 = NULL;
        ATerm o_33 = NULL;
        o_33 = t;
        if(((n_33 != NULL) && (n_33 != o_33)))
          _fail(o_33);
        else
          n_33 = o_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_9, not_null(n_33));
          t = set_config_0(t);
        }
      }
      t = n_12;
      {
        ATerm q_33 = NULL;
        q_33 = t;
        if(((p_33 != NULL) && (p_33 != q_33)))
          _fail(q_33);
        else
          p_33 = q_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_33));
      }
      return(t);
    }
    ATerm p_2 (ATerm t)
    {
      ATerm o_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_12 = t;
          int v_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_12);
            }
          else
            {
              t = u_12;
              {
                t = x_78(t);
                t = Cons_2(t, _id, p_2);
              }
            }
          LocalPopChoice(t_12);
        }
      else
        {
          t = o_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_2, p_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  ATerm x_12;
  x_12 = t;
  {
    ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
    z_33 = t;
    v_33 :
    if(match_cons(z_33, sym__3))
      {
        a_34 = ATgetArgument(z_33, 0);
        b_34 = ATgetArgument(z_33, 1);
        c_34 = ATgetArgument(z_33, 2);
        {
          if(((w_33 != NULL) && (w_33 != a_34)))
            _fail(a_34);
          else
            w_33 = a_34;
          {
            if(((x_33 != NULL) && (x_33 != b_34)))
              _fail(b_34);
            else
              x_33 = b_34;
            {
              if(((y_33 != NULL) && (y_33 != c_34)))
                _fail(c_34);
              else
                y_33 = c_34;
              t = SSL_table_put(not_null(w_33), not_null(x_33), not_null(y_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_12;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm f_34 = NULL;
  ATerm z_12;
  z_12 = t;
  {
    t = term_a_13;
    t = table_put_0(t);
  }
  t = z_12;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_78(t);
          LocalPopChoice(c_13);
        }
      else
        {
          t = b_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_2);
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_13;
          f_13 = t;
          {
            ATerm g_13 = t;
            int h_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_x_11;
                t = get_config_0(t);
                LocalPopChoice(h_13);
              }
            else
              {
                t = g_13;
                t = fetch_1(t, Help_0);
              }
          }
          t = f_13;
          {
            t = system_usage_0(t);
            {
              t = term_z_5;
              t = exit_0(t);
            }
          }
          LocalPopChoice(e_13);
        }
      else
        {
          t = d_13;
          {
            ATerm i_13 = t;
            int j_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_2 (ATerm t)
                {
                  ATerm s_2 (ATerm t)
                  {
                    ATerm g_34 = NULL;
                    g_34 = t;
                    if(((f_34 != NULL) && (f_34 != g_34)))
                      _fail(g_34);
                    else
                      f_34 = g_34;
                    return(t);
                  }
                  t = Undefined_1(t, s_2);
                  return(t);
                }
                t = fetch_1(t, r_2);
                {
                  ATerm t_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_34)), term_k_13);
                    return(t);
                  }
                  t = say_1(t, t_2);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_a_3;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(j_13);
              }
            else
              {
                t = i_13;
                {
                }
              }
          }
        }
      {
        ATerm l_13;
        l_13 = t;
        {
          t = term_e_9;
          t = table_destroy_0(t);
        }
        t = l_13;
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm l_34 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    ATerm m_13;
    m_13 = t;
    {
      ATerm y_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 (ATerm t)
          {
            ATerm m_34 = NULL,n_34 = NULL;
            m_34 = t;
            j_34 :
            if(match_cons(m_34, sym_Output_1))
              {
                n_34 = ATgetArgument(m_34, 0);
                if(((l_34 != NULL) && (l_34 != n_34)))
                  _fail(n_34);
                else
                  l_34 = n_34;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, u_2);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_34), term_b_5);
            t = open_file_0(t);
          }
          LocalPopChoice(z_13);
        }
      else
        {
          t = y_13;
          {
            ATerm o_34 = NULL;
            t = term_h_8;
            {
              o_34 = t;
              if(((l_34 != NULL) && (l_34 != o_34)))
                _fail(o_34);
              else
                l_34 = o_34;
            }
          }
        }
    }
    t = m_13;
    {
      t = input_file_0(t);
      {
        ATerm v_2 (ATerm t)
        {
          ATerm w_2 (ATerm t)
          {
            t = not_null(l_34);
            return(t);
          }
          t = asfix_yield_1(t, w_2);
          return(t);
        }
        t = _2(t, _id, v_2);
        {
          t = term_z_5;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
