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
Symbol sym_term_9;
Symbol sym_prod_9;
Symbol sym_id_1;
Symbol sym_appl_3;
Symbol sym_list_3;
Symbol sym_lex_2;
Symbol sym_parsetree_2;
Symbol sym_amb_1;
Symbol sym_appl_2;
Symbol sym_flatlex_2;
Symbol sym_AsFixCharacter_1;
Symbol sym_NatCon_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_l_11;
ATerm term_g_11;
ATerm term_y_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_v_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_w_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_c_6;
ATerm term_y_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_g_5;
ATerm term_a_5;
ATerm term_x_4;
ATerm term_s_4;
ATerm term_l_4;
ATerm term_z_2;
ATerm term_x_2;
void init_constant_terms (void)
{
  ATprotect(&(term_x_2));
  term_x_2 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym__2, term_k_6, term_l_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_h_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym__2, term_v_7, term_h_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_h_7);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_c_9, term_d_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__3, term_c_9, term_d_9, (ATerm) ATempty);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_stdout_0);
}
ATerm exit_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm literal_1 (ATerm, ATerm e_79 (ATerm));
ATerm flatlex_2 (ATerm, ATerm b_47 (ATerm), ATerm c_47 (ATerm));
ATerm amb_1 (ATerm, ATerm y_46 (ATerm));
ATerm skip2_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_leaf_0 (ATerm);
ATerm printascii_0 (ATerm);
ATerm asfix_yield2_1 (ATerm, ATerm b_79 (ATerm));
ATerm appl_2 (ATerm, ATerm z_46 (ATerm), ATerm a_47 (ATerm));
ATerm parsetree_2 (ATerm, ATerm w_46 (ATerm), ATerm x_46 (ATerm));
ATerm is_asfix2_0 (ATerm);
ATerm at_tail_1 (ATerm, ATerm c_70 (ATerm));
ATerm lex_2 (ATerm, ATerm u_46 (ATerm), ATerm v_46 (ATerm));
ATerm list_1 (ATerm, ATerm r_69 (ATerm));
ATerm list_3 (ATerm, ATerm r_46 (ATerm), ATerm s_46 (ATerm), ATerm t_46 (ATerm));
ATerm appl_3 (ATerm, ATerm o_46 (ATerm), ATerm p_46 (ATerm), ATerm q_46 (ATerm));
ATerm skip1_1 (ATerm, ATerm o_0 (ATerm));
ATerm is_string_0 (ATerm);
ATerm print_0 (ATerm);
ATerm leaves_3 (ATerm, ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm, ATerm (ATerm)));
ATerm asfix_yield1_1 (ATerm, ATerm d_79 (ATerm));
ATerm term_9 (ATerm, ATerm v_45 (ATerm), ATerm w_45 (ATerm), ATerm x_45 (ATerm), ATerm y_45 (ATerm), ATerm z_45 (ATerm), ATerm a_46 (ATerm), ATerm b_46 (ATerm), ATerm c_46 (ATerm), ATerm d_46 (ATerm));
ATerm is_asfix1_0 (ATerm);
ATerm asfix_yield_1 (ATerm, ATerm a_79 (ATerm));
ATerm _2 (ATerm, ATerm m_44 (ATerm), ATerm n_44 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_62 (ATerm), ATerm o_62 (ATerm));
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_60 (ATerm));
ATerm obsolete_1 (ATerm, ATerm j_60 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm y_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_57 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_70 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm p_69 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm k_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_47 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_78 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_56 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_52 (ATerm), ATerm f_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_56 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_56 (ATerm));
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
  ATerm w_2;
  w_2 = t;
  {
    ATerm m_4 = NULL;
    ATerm q_4 = NULL;
    q_4 = t;
    if(((m_4 != NULL) && (m_4 != q_4)))
      _fail(q_4);
    else
      m_4 = q_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_2, not_null(m_4));
      t = printnl_0(t);
    }
  }
  t = w_2;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm y_2;
  y_2 = t;
  {
    t = error_0(t);
    {
      t = term_z_2;
      t = exit_0(t);
    }
  }
  t = y_2;
  return(t);
}
ATerm literal_1 (ATerm t, ATerm e_79 (ATerm))
{
  t = is_string_0(t);
  {
    ATerm c_0 (ATerm t)
    {
      ATerm t_4 = NULL;
      t_4 = t;
      t = (ATerm) ATinsert(ATempty, not_null(t_4));
      return(t);
    }
    t = split_2(t, e_79, c_0);
    t = print_0(t);
  }
  return(t);
}
ATerm flatlex_2 (ATerm t, ATerm b_47 (ATerm), ATerm c_47 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_flatlex_2))
    {
      d_5 = ATgetArgument(c_5, 0);
      e_5 = ATgetArgument(c_5, 1);
      {
        ATerm i_5 = NULL,k_5 = NULL;
        ATerm j_5 = NULL;
        t = SSLgetAnnotations(not_null(c_5));
        {
          j_5 = t;
          if(((i_5 != NULL) && (i_5 != j_5)))
            _fail(j_5);
          else
            i_5 = j_5;
        }
        {
          t = not_null(d_5);
          {
            ATerm m_5 = NULL;
            t = b_47(t);
            {
              k_5 = t;
              {
                t = not_null(e_5);
                {
                  ATerm o_5 = NULL;
                  t = c_47(t);
                  {
                    m_5 = t;
                    {
                      ATerm p_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_flatlex_2, not_null(k_5), not_null(m_5)), not_null(i_5));
                      {
                        p_5 = t;
                        if(((o_5 != NULL) && (o_5 != p_5)))
                          _fail(p_5);
                        else
                          o_5 = p_5;
                      }
                      t = not_null(o_5);
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
ATerm amb_1 (ATerm t, ATerm y_46 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_amb_1))
    {
      b_6 = ATgetArgument(a_6, 0);
      {
        ATerm e_6 = NULL,g_6 = NULL;
        ATerm f_6 = NULL;
        t = SSLgetAnnotations(not_null(a_6));
        {
          f_6 = t;
          if(((e_6 != NULL) && (e_6 != f_6)))
            _fail(f_6);
          else
            e_6 = f_6;
        }
        {
          t = not_null(b_6);
          {
            ATerm i_6 = NULL;
            t = y_46(t);
            {
              g_6 = t;
              {
                ATerm j_6 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(g_6)), not_null(e_6));
                {
                  j_6 = t;
                  if(((i_6 != NULL) && (i_6 != j_6)))
                    _fail(j_6);
                  else
                    i_6 = j_6;
                }
                t = not_null(i_6);
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
  ATerm a_3 = t;
  int b_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_0 (ATerm t)
      {
        t = list_1(t, p_0);
        return(t);
      }
      t = appl_2(t, _id, d_0);
      LocalPopChoice(b_3);
    }
  else
    {
      t = a_3;
      {
        ATerm c_3 = t;
        int d_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = Cons_2(t, p_0, _id);
              return(t);
            }
            t = amb_1(t, e_0);
            LocalPopChoice(d_3);
          }
        else
          {
            t = c_3;
            {
              ATerm e_3 = t;
              int f_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = parsetree_2(t, p_0, _id);
                  LocalPopChoice(f_3);
                }
              else
                {
                  t = e_3;
                  {
                    ATerm g_3 = t;
                    int h_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = flatlex_2(t, _id, p_0);
                        LocalPopChoice(h_3);
                      }
                    else
                      {
                        t = g_3;
                        {
                          ATerm f_0 (ATerm t)
                          {
                            t = at_tail_1(t, p_0);
                            return(t);
                          }
                          t = at_tail_1(t, f_0);
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
ATerm is_leaf_0 (ATerm t)
{
  t = _all(t, _fail);
  return(t);
}
ATerm printascii_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym__2))
    {
      r_6 = ATgetArgument(q_6, 0);
      s_6 = ATgetArgument(q_6, 1);
      {
        ATerm i_3;
        i_3 = t;
        t = SSL_printascii(not_null(r_6), not_null(s_6));
        t = i_3;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm asfix_yield2_1 (ATerm t, ATerm b_79 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm j_3 = t;
    int k_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_string_0(t);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm y_6 = NULL;
            y_6 = t;
            t = (ATerm) ATinsert(ATempty, not_null(y_6));
            return(t);
          }
          t = split_2(t, b_79, r_0);
          t = print_0(t);
        }
        LocalPopChoice(k_3);
      }
    else
      {
        t = j_3;
        {
          ATerm s_0 (ATerm t)
          {
            ATerm a_7 = NULL;
            a_7 = t;
            t = (ATerm) ATinsert(ATempty, not_null(a_7));
            return(t);
          }
          t = split_2(t, b_79, s_0);
          t = printascii_0(t);
        }
      }
    return(t);
  }
  t = leaves_3(t, q_0, is_leaf_0, skip2_1);
  return(t);
}
ATerm appl_2 (ATerm t, ATerm z_46 (ATerm), ATerm a_47 (ATerm))
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_appl_2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      {
        ATerm q_7 = NULL,s_7 = NULL;
        ATerm r_7 = NULL;
        t = SSLgetAnnotations(not_null(k_7));
        {
          r_7 = t;
          if(((q_7 != NULL) && (q_7 != r_7)))
            _fail(r_7);
          else
            q_7 = r_7;
        }
        {
          t = not_null(l_7);
          {
            ATerm u_7 = NULL;
            t = z_46(t);
            {
              s_7 = t;
              {
                t = not_null(m_7);
                {
                  ATerm w_7 = NULL;
                  t = a_47(t);
                  {
                    u_7 = t;
                    {
                      ATerm x_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(s_7), not_null(u_7)), not_null(q_7));
                      {
                        x_7 = t;
                        if(((w_7 != NULL) && (w_7 != x_7)))
                          _fail(x_7);
                        else
                          w_7 = x_7;
                      }
                      t = not_null(w_7);
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
ATerm parsetree_2 (ATerm t, ATerm w_46 (ATerm), ATerm x_46 (ATerm))
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym_parsetree_2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      {
        ATerm p_8 = NULL,r_8 = NULL;
        ATerm q_8 = NULL;
        t = SSLgetAnnotations(not_null(j_8));
        {
          q_8 = t;
          if(((p_8 != NULL) && (p_8 != q_8)))
            _fail(q_8);
          else
            p_8 = q_8;
        }
        {
          t = not_null(k_8);
          {
            ATerm t_8 = NULL;
            t = w_46(t);
            {
              r_8 = t;
              {
                t = not_null(l_8);
                {
                  ATerm v_8 = NULL;
                  t = x_46(t);
                  {
                    t_8 = t;
                    {
                      ATerm w_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, not_null(r_8), not_null(t_8)), not_null(p_8));
                      {
                        w_8 = t;
                        if(((v_8 != NULL) && (v_8 != w_8)))
                          _fail(w_8);
                        else
                          v_8 = w_8;
                      }
                      t = not_null(v_8);
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
  ATerm l_3 = t;
  int m_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parsetree_2(t, _id, _id);
      LocalPopChoice(m_3);
    }
  else
    {
      t = l_3;
      t = appl_2(t, _id, _id);
    }
  return(t);
}
ATerm at_tail_1 (ATerm t, ATerm c_70 (ATerm))
{
  t = Cons_2(t, _id, c_70);
  return(t);
}
ATerm lex_2 (ATerm t, ATerm u_46 (ATerm), ATerm v_46 (ATerm))
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym_lex_2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      {
        ATerm o_9 = NULL,q_9 = NULL;
        ATerm p_9 = NULL;
        t = SSLgetAnnotations(not_null(i_9));
        {
          p_9 = t;
          if(((o_9 != NULL) && (o_9 != p_9)))
            _fail(p_9);
          else
            o_9 = p_9;
        }
        {
          t = not_null(j_9);
          {
            ATerm s_9 = NULL;
            t = u_46(t);
            {
              q_9 = t;
              {
                t = not_null(k_9);
                {
                  ATerm u_9 = NULL;
                  t = v_46(t);
                  {
                    s_9 = t;
                    {
                      ATerm v_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_2, not_null(q_9), not_null(s_9)), not_null(o_9));
                      {
                        v_9 = t;
                        if(((u_9 != NULL) && (u_9 != v_9)))
                          _fail(v_9);
                        else
                          u_9 = v_9;
                      }
                      t = not_null(u_9);
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
ATerm list_1 (ATerm t, ATerm r_69 (ATerm))
{
  ATerm b_10 (ATerm t)
  {
    ATerm n_3 = t;
    int o_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_3);
      }
    else
      {
        t = n_3;
        t = Cons_2(t, r_69, b_10);
      }
    return(t);
  }
  t = b_10(t);
  return(t);
}
ATerm list_3 (ATerm t, ATerm r_46 (ATerm), ATerm s_46 (ATerm), ATerm t_46 (ATerm))
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym_list_3))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      m_10 = ATgetArgument(j_10, 2);
      {
        ATerm r_10 = NULL,t_10 = NULL;
        ATerm s_10 = NULL;
        t = SSLgetAnnotations(not_null(j_10));
        {
          s_10 = t;
          if(((r_10 != NULL) && (r_10 != s_10)))
            _fail(s_10);
          else
            r_10 = s_10;
        }
        {
          t = not_null(k_10);
          {
            ATerm v_10 = NULL;
            t = r_46(t);
            {
              t_10 = t;
              {
                t = not_null(l_10);
                {
                  ATerm x_10 = NULL;
                  t = s_46(t);
                  {
                    v_10 = t;
                    {
                      t = not_null(m_10);
                      {
                        ATerm z_10 = NULL;
                        t = t_46(t);
                        {
                          x_10 = t;
                          {
                            ATerm a_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_list_3, not_null(t_10), not_null(v_10), not_null(x_10)), not_null(r_10));
                            {
                              a_11 = t;
                              if(((z_10 != NULL) && (z_10 != a_11)))
                                _fail(a_11);
                              else
                                z_10 = a_11;
                            }
                            t = not_null(z_10);
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
ATerm appl_3 (ATerm t, ATerm o_46 (ATerm), ATerm p_46 (ATerm), ATerm q_46 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_appl_3))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      r_11 = ATgetArgument(o_11, 2);
      {
        ATerm w_11 = NULL,y_11 = NULL;
        ATerm x_11 = NULL;
        t = SSLgetAnnotations(not_null(o_11));
        {
          x_11 = t;
          if(((w_11 != NULL) && (w_11 != x_11)))
            _fail(x_11);
          else
            w_11 = x_11;
        }
        {
          t = not_null(p_11);
          {
            ATerm a_12 = NULL;
            t = o_46(t);
            {
              y_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm c_12 = NULL;
                  t = p_46(t);
                  {
                    a_12 = t;
                    {
                      t = not_null(r_11);
                      {
                        ATerm e_12 = NULL;
                        t = q_46(t);
                        {
                          c_12 = t;
                          {
                            ATerm f_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_3, not_null(y_11), not_null(a_12), not_null(c_12)), not_null(w_11));
                            {
                              f_12 = t;
                              if(((e_12 != NULL) && (e_12 != f_12)))
                                _fail(f_12);
                              else
                                e_12 = f_12;
                            }
                            t = not_null(e_12);
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
ATerm skip1_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm p_3 = t;
  int q_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_9(t, _id, _id, _id, _id, _id, o_0, o_0, o_0, _id);
      LocalPopChoice(q_3);
    }
  else
    {
      t = p_3;
      {
        ATerm r_3 = t;
        int s_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = list_1(t, o_0);
              return(t);
            }
            t = appl_3(t, _id, _id, t_0);
            LocalPopChoice(s_3);
          }
        else
          {
            t = r_3;
            {
              ATerm t_3 = t;
              int u_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_0 (ATerm t)
                  {
                    t = list_1(t, o_0);
                    return(t);
                  }
                  t = list_3(t, _id, _id, u_0);
                  LocalPopChoice(u_3);
                }
              else
                {
                  t = t_3;
                  {
                    ATerm v_3 = t;
                    int w_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = lex_2(t, o_0, _id);
                        LocalPopChoice(w_3);
                      }
                    else
                      {
                        t = v_3;
                        t = at_tail_1(t, o_0);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_12 = NULL;
  n_12 = t;
  t = SSL_is_string(not_null(n_12));
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym__2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      {
        ATerm x_3;
        x_3 = t;
        t = SSL_print(not_null(t_12), not_null(u_12));
        t = x_3;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leaves_3 (ATerm t, ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm, ATerm (ATerm)))
{
  ATerm y_12 (ATerm t)
  {
    ATerm z_3 = t;
    int a_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_76(t);
        t = u_76(t);
        LocalPopChoice(a_4);
      }
    else
      {
        t = z_3;
        {
          ATerm b_4 = t;
          int c_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_76(t, y_12);
              LocalPopChoice(c_4);
            }
          else
            {
              t = b_4;
              t = _all(t, y_12);
            }
        }
      }
    return(t);
  }
  t = y_12(t);
  return(t);
}
ATerm asfix_yield1_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      ATerm a_13 = NULL;
      a_13 = t;
      t = (ATerm) ATinsert(ATempty, not_null(a_13));
      return(t);
    }
    t = split_2(t, d_79, w_0);
    t = print_0(t);
    return(t);
  }
  t = leaves_3(t, v_0, is_string_0, skip1_1);
  return(t);
}
ATerm term_9 (ATerm t, ATerm v_45 (ATerm), ATerm w_45 (ATerm), ATerm x_45 (ATerm), ATerm y_45 (ATerm), ATerm z_45 (ATerm), ATerm a_46 (ATerm), ATerm b_46 (ATerm), ATerm c_46 (ATerm), ATerm d_46 (ATerm))
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym_term_9))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      t_13 = ATgetArgument(q_13, 2);
      u_13 = ATgetArgument(q_13, 3);
      v_13 = ATgetArgument(q_13, 4);
      w_13 = ATgetArgument(q_13, 5);
      x_13 = ATgetArgument(q_13, 6);
      y_13 = ATgetArgument(q_13, 7);
      z_13 = ATgetArgument(q_13, 8);
      {
        ATerm k_14 = NULL,m_14 = NULL;
        ATerm l_14 = NULL;
        t = SSLgetAnnotations(not_null(q_13));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
        {
          t = not_null(r_13);
          {
            ATerm o_14 = NULL;
            t = v_45(t);
            {
              m_14 = t;
              {
                t = not_null(s_13);
                {
                  ATerm q_14 = NULL;
                  t = w_45(t);
                  {
                    o_14 = t;
                    {
                      t = not_null(t_13);
                      {
                        ATerm s_14 = NULL;
                        t = x_45(t);
                        {
                          q_14 = t;
                          {
                            t = not_null(u_13);
                            {
                              ATerm u_14 = NULL;
                              t = y_45(t);
                              {
                                s_14 = t;
                                {
                                  t = not_null(v_13);
                                  {
                                    ATerm w_14 = NULL;
                                    t = z_45(t);
                                    {
                                      u_14 = t;
                                      {
                                        t = not_null(w_13);
                                        {
                                          ATerm y_14 = NULL;
                                          t = a_46(t);
                                          {
                                            w_14 = t;
                                            {
                                              t = not_null(x_13);
                                              {
                                                ATerm a_15 = NULL;
                                                t = b_46(t);
                                                {
                                                  y_14 = t;
                                                  {
                                                    t = not_null(y_13);
                                                    {
                                                      ATerm c_15 = NULL;
                                                      t = c_46(t);
                                                      {
                                                        a_15 = t;
                                                        {
                                                          t = not_null(z_13);
                                                          {
                                                            ATerm e_15 = NULL;
                                                            t = d_46(t);
                                                            {
                                                              c_15 = t;
                                                              {
                                                                ATerm f_15 = NULL;
                                                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_term_9, not_null(m_14), not_null(o_14), not_null(q_14), not_null(s_14), not_null(u_14), not_null(w_14), not_null(y_14), not_null(a_15), not_null(c_15)), not_null(k_14));
                                                                {
                                                                  f_15 = t;
                                                                  if(((e_15 != NULL) && (e_15 != f_15)))
                                                                    _fail(f_15);
                                                                  else
                                                                    e_15 = f_15;
                                                                }
                                                                t = not_null(e_15);
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
  ATerm d_4 = t;
  int e_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_9(t, _id, _id, _id, _id, _id, _id, _id, _id, _id);
      LocalPopChoice(e_4);
    }
  else
    {
      t = d_4;
      {
        ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
        v_15 = t;
        s_15 :
        if(match_cons(v_15, sym_appl_3))
          {
            w_15 = ATgetArgument(v_15, 0);
            h_16 = ATgetArgument(v_15, 1);
            i_16 = ATgetArgument(v_15, 2);
            t_15 :
            if(match_cons(w_15, sym_prod_9))
              {
                x_15 = ATgetArgument(w_15, 0);
                z_15 = ATgetArgument(w_15, 1);
                a_16 = ATgetArgument(w_15, 2);
                b_16 = ATgetArgument(w_15, 3);
                c_16 = ATgetArgument(w_15, 4);
                d_16 = ATgetArgument(w_15, 5);
                e_16 = ATgetArgument(w_15, 6);
                f_16 = ATgetArgument(w_15, 7);
                g_16 = ATgetArgument(w_15, 8);
                u_15 :
                if(match_cons(x_15, sym_id_1))
                  {
                    y_15 = ATgetArgument(x_15, 0);
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
ATerm asfix_yield_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm f_4 = t;
  int g_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_asfix1_0(t);
      t = asfix_yield1_1(t, a_79);
      LocalPopChoice(g_4);
    }
  else
    {
      t = f_4;
      {
        ATerm h_4 = t;
        int i_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_asfix2_0(t);
            t = asfix_yield2_1(t, a_79);
            LocalPopChoice(i_4);
          }
        else
          {
            t = h_4;
            {
              ATerm j_4 = t;
              int k_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1(t, a_79);
                  LocalPopChoice(k_4);
                }
              else
                {
                  t = j_4;
                  {
                    t = (ATerm) ATinsert(ATempty, term_l_4);
                    t = fatal_error_0(t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm m_44 (ATerm), ATerm n_44 (ATerm))
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        ATerm v_16 = NULL,x_16 = NULL;
        ATerm w_16 = NULL;
        t = SSLgetAnnotations(not_null(p_16));
        {
          w_16 = t;
          if(((v_16 != NULL) && (v_16 != w_16)))
            _fail(w_16);
          else
            v_16 = w_16;
        }
        {
          t = not_null(q_16);
          {
            ATerm z_16 = NULL;
            t = m_44(t);
            {
              x_16 = t;
              {
                t = not_null(r_16);
                {
                  ATerm b_17 = NULL;
                  t = n_44(t);
                  {
                    z_16 = t;
                    {
                      ATerm c_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_16), not_null(z_16)), not_null(v_16));
                      {
                        c_17 = t;
                        if(((b_17 != NULL) && (b_17 != c_17)))
                          _fail(c_17);
                        else
                          b_17 = c_17;
                      }
                      t = not_null(b_17);
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
  ATerm j_17 = NULL;
  j_17 = t;
  t = SSL_ReadFromFile(not_null(j_17));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_62 (ATerm), ATerm o_62 (ATerm))
{
  ATerm o_17 = NULL,q_17 = NULL;
  ATerm n_4;
  n_4 = t;
  {
    ATerm p_17 = NULL;
    t = n_62(t);
    {
      p_17 = t;
      if(((o_17 != NULL) && (o_17 != p_17)))
        _fail(p_17);
      else
        o_17 = p_17;
    }
  }
  t = n_4;
  {
    ATerm r_17 = NULL;
    t = o_62(t);
    {
      r_17 = t;
      if(((q_17 != NULL) && (q_17 != r_17)))
        _fail(r_17);
      else
        q_17 = r_17;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), not_null(q_17));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_17 = NULL;
  ATerm o_4;
  o_4 = t;
  {
    ATerm p_4 = t;
    int r_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_0 (ATerm t)
        {
          ATerm y_17 = NULL,z_17 = NULL;
          y_17 = t;
          v_17 :
          if(match_cons(y_17, sym_Input_1))
            {
              z_17 = ATgetArgument(y_17, 0);
              if(((x_17 != NULL) && (x_17 != z_17)))
                _fail(z_17);
              else
                x_17 = z_17;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_0);
        LocalPopChoice(r_4);
      }
    else
      {
        t = p_4;
        {
          ATerm a_18 = NULL;
          t = term_s_4;
          {
            a_18 = t;
            if(((x_17 != NULL) && (x_17 != a_18)))
              _fail(a_18);
            else
              x_17 = a_18;
          }
        }
      }
  }
  t = o_4;
  {
    ATerm y_0 (ATerm t)
    {
      t = not_null(x_17);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_0);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm u_4;
  u_4 = t;
  {
    ATerm f_18 = NULL,h_18 = NULL;
    ATerm v_4;
    v_4 = t;
    {
      ATerm g_18 = NULL;
      t = c_60(t);
      {
        g_18 = t;
        if(((f_18 != NULL) && (f_18 != g_18)))
          _fail(g_18);
        else
          f_18 = g_18;
      }
    }
    t = v_4;
    {
      ATerm i_18 = NULL;
      i_18 = t;
      if(((h_18 != NULL) && (h_18 != i_18)))
        _fail(i_18);
      else
        h_18 = i_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_18)), not_null(f_18)));
        t = printnl_0(t);
      }
    }
  }
  t = u_4;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm w_4;
  w_4 = t;
  {
    t = j_60(t);
    {
      ATerm z_0 (ATerm t)
      {
        t = term_x_4;
        return(t);
      }
      t = debug_1(t, z_0);
    }
  }
  t = w_4;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  ATerm y_4 = t;
  int z_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
      r_18 = t;
      m_18 :
      if(match_cons(r_18, sym__2))
        {
          s_18 = ATgetArgument(r_18, 0);
          t_18 = ATgetArgument(r_18, 1);
          {
            if(((q_18 != NULL) && (q_18 != s_18)))
              _fail(s_18);
            else
              q_18 = s_18;
            {
              if(((p_18 != NULL) && (p_18 != t_18)))
                _fail(t_18);
              else
                p_18 = t_18;
              t = SSL_open_file(not_null(q_18), not_null(p_18));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_4);
    }
  else
    {
      t = y_4;
      {
        ATerm u_18 = NULL;
        ATerm v_18 = NULL;
        ATerm a_1 (ATerm t)
        {
          t = term_a_5;
          return(t);
        }
        t = obsolete_1(t, a_1);
        {
          u_18 = t;
          {
            if(((q_18 != NULL) && (q_18 != u_18)))
              _fail(u_18);
            else
              q_18 = u_18;
            {
              ATerm f_5;
              f_5 = t;
              {
                ATerm w_18 = NULL;
                t = term_g_5;
                {
                  w_18 = t;
                  if(((v_18 != NULL) && (v_18 != w_18)))
                    _fail(w_18);
                  else
                    v_18 = w_18;
                }
              }
              t = f_5;
              t = SSL_open_file(not_null(q_18), not_null(v_18));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm a_19 (ATerm t)
  {
    ATerm h_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_69, _id);
        LocalPopChoice(l_5);
      }
    else
      {
        t = h_5;
        t = Cons_2(t, _id, a_19);
      }
    return(t);
  }
  t = a_19(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_57 (ATerm))
{
  t = fetch_1(t, j_57);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  t = SSL_string_to_int(not_null(c_19));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm k_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  k_19 = t;
  i_19 :
  if(match_string(k_19, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(k_19) == AT_LIST) && ((ATermList) k_19 != ATempty)))
        {
          r_19 = ATgetFirst((ATermList) k_19);
          s_19 = (ATerm) ATgetNext((ATermList) k_19);
          j_19 :
          if(((ATgetType(s_19) == AT_LIST) && ((ATermList) s_19 != ATempty)))
            {
              t_19 = ATgetFirst((ATermList) s_19);
              u_19 = (ATerm) ATgetNext((ATermList) s_19);
              {
                ATerm y_19 = NULL;
                ATerm n_5;
                n_5 = t;
                {
                  t = not_null(r_19);
                  t = l_0(t);
                }
                t = n_5;
                {
                  ATerm z_19 = NULL;
                  t = not_null(t_19);
                  {
                    t = m_0(t);
                    {
                      z_19 = t;
                      if(((y_19 != NULL) && (y_19 != z_19)))
                        _fail(z_19);
                      else
                        y_19 = z_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_19)), not_null(y_19));
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
ATerm io_options_0 (ATerm t)
{
  ATerm q_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 (ATerm t)
      {
        ATerm v_20 = NULL;
        v_20 = t;
        d_20 :
        if(!(match_string(v_20, "-i")))
          {
            if(!(match_string(v_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_1 (ATerm t)
      {
        ATerm y_20 = NULL;
        ATerm s_5;
        s_5 = t;
        {
          ATerm w_20 = NULL;
          ATerm x_20 = NULL;
          x_20 = t;
          if(((w_20 != NULL) && (w_20 != x_20)))
            _fail(x_20);
          else
            w_20 = x_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_t_5, not_null(w_20));
            t = set_config_0(t);
          }
        }
        t = s_5;
        {
          ATerm a_21 = NULL;
          a_21 = t;
          if(((y_20 != NULL) && (y_20 != a_21)))
            _fail(a_21);
          else
            y_20 = a_21;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_20));
        }
        return(t);
      }
      ATerm d_1 (ATerm t)
      {
        t = term_u_5;
        return(t);
      }
      t = ArgOption_3(t, b_1, c_1, d_1);
      LocalPopChoice(r_5);
    }
  else
    {
      t = q_5;
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              ATerm b_21 = NULL;
              b_21 = t;
              j_20 :
              if(!(match_string(b_21, "-o")))
                {
                  if(!(match_string(b_21, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm f_1 (ATerm t)
            {
              ATerm e_21 = NULL;
              ATerm x_5;
              x_5 = t;
              {
                ATerm c_21 = NULL;
                ATerm d_21 = NULL;
                d_21 = t;
                if(((c_21 != NULL) && (c_21 != d_21)))
                  _fail(d_21);
                else
                  c_21 = d_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_5, not_null(c_21));
                  t = set_config_0(t);
                }
              }
              t = x_5;
              {
                ATerm f_21 = NULL;
                f_21 = t;
                if(((e_21 != NULL) && (e_21 != f_21)))
                  _fail(f_21);
                else
                  e_21 = f_21;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_21));
              }
              return(t);
            }
            ATerm g_1 (ATerm t)
            {
              t = term_c_6;
              return(t);
            }
            t = ArgOption_3(t, e_1, f_1, g_1);
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            {
              ATerm d_6 = t;
              int h_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm g_21 = NULL;
                    g_21 = t;
                    m_20 :
                    if(!(match_string(g_21, "-S")))
                      {
                        if(!(match_string(g_21, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm i_1 (ATerm t)
                  {
                    t = term_m_6;
                    t = set_config_0(t);
                    t = term_n_6;
                    return(t);
                  }
                  ATerm j_1 (ATerm t)
                  {
                    t = term_o_6;
                    return(t);
                  }
                  t = Option_3(t, h_1, i_1, j_1);
                  LocalPopChoice(h_6);
                }
              else
                {
                  t = d_6;
                  {
                    ATerm t_6 = t;
                    int u_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_1 (ATerm t)
                        {
                          ATerm h_21 = NULL;
                          h_21 = t;
                          n_20 :
                          if(!(match_string(h_21, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm l_1 (ATerm t)
                        {
                          ATerm k_21 = NULL;
                          ATerm v_6;
                          v_6 = t;
                          {
                            ATerm i_21 = NULL;
                            ATerm j_21 = NULL;
                            t = string_to_int_0(t);
                            {
                              j_21 = t;
                              if(((i_21 != NULL) && (i_21 != j_21)))
                                _fail(j_21);
                              else
                                i_21 = j_21;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_6, not_null(i_21));
                              t = set_config_0(t);
                            }
                          }
                          t = v_6;
                          {
                            ATerm l_21 = NULL;
                            l_21 = t;
                            if(((k_21 != NULL) && (k_21 != l_21)))
                              _fail(l_21);
                            else
                              k_21 = l_21;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_21));
                          }
                          return(t);
                        }
                        ATerm m_1 (ATerm t)
                        {
                          t = term_w_6;
                          return(t);
                        }
                        t = ArgOption_3(t, k_1, l_1, m_1);
                        LocalPopChoice(u_6);
                      }
                    else
                      {
                        t = t_6;
                        {
                          ATerm x_6 = t;
                          int z_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_1 (ATerm t)
                              {
                                ATerm m_21 = NULL;
                                m_21 = t;
                                q_20 :
                                if(!(match_string(m_21, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm o_1 (ATerm t)
                              {
                                ATerm b_7;
                                b_7 = t;
                                {
                                  ATerm n_21 = NULL;
                                  ATerm o_21 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    o_21 = t;
                                    if(((n_21 != NULL) && (n_21 != o_21)))
                                      _fail(o_21);
                                    else
                                      n_21 = o_21;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_c_7, not_null(n_21));
                                    t = set_config_0(t);
                                  }
                                }
                                t = b_7;
                                return(t);
                              }
                              ATerm p_1 (ATerm t)
                              {
                                t = term_d_7;
                                return(t);
                              }
                              t = ArgOption_3(t, n_1, o_1, p_1);
                              LocalPopChoice(z_6);
                            }
                          else
                            {
                              t = x_6;
                              {
                                ATerm e_7 = t;
                                int f_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_1 (ATerm t)
                                    {
                                      ATerm p_21 = NULL;
                                      p_21 = t;
                                      s_20 :
                                      if(!(match_string(p_21, "-v")))
                                        {
                                          if(!(match_string(p_21, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm r_1 (ATerm t)
                                    {
                                      t = term_i_7;
                                      t = set_config_0(t);
                                      t = term_n_7;
                                      return(t);
                                    }
                                    ATerm s_1 (ATerm t)
                                    {
                                      t = term_o_7;
                                      return(t);
                                    }
                                    t = Option_3(t, q_1, r_1, s_1);
                                    LocalPopChoice(f_7);
                                  }
                                else
                                  {
                                    t = e_7;
                                    {
                                      ATerm p_7 = t;
                                      int t_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_1 (ATerm t)
                                          {
                                            ATerm q_21 = NULL;
                                            q_21 = t;
                                            t_20 :
                                            if(!(match_string(q_21, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm u_1 (ATerm t)
                                          {
                                            t = term_y_7;
                                            t = set_config_0(t);
                                            t = term_z_7;
                                            return(t);
                                          }
                                          ATerm v_1 (ATerm t)
                                          {
                                            t = term_a_8;
                                            return(t);
                                          }
                                          t = Option_3(t, t_1, u_1, v_1);
                                          LocalPopChoice(t_7);
                                        }
                                      else
                                        {
                                          t = p_7;
                                          {
                                            ATerm w_1 (ATerm t)
                                            {
                                              ATerm r_21 = NULL;
                                              r_21 = t;
                                              u_20 :
                                              if(!(match_string(r_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm x_1 (ATerm t)
                                            {
                                              t = term_c_8;
                                              t = set_config_0(t);
                                              t = term_d_8;
                                              return(t);
                                            }
                                            ATerm y_1 (ATerm t)
                                            {
                                              t = term_e_8;
                                              return(t);
                                            }
                                            t = Option_3(t, w_1, x_1, y_1);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  t = SSL_table_destroy(not_null(a_22));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm e_22 = NULL;
  e_22 = t;
  t = SSL_implode_string(not_null(e_22));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_70 (ATerm))
{
  ATerm h_22 (ATerm t)
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_22);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          t = Nil_0(t);
          t = e_70(t);
        }
      }
    return(t);
  }
  t = h_22(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = h_8;
      {
        ATerm k_22 = NULL,l_22 = NULL,u_22 = NULL;
        k_22 = t;
        j_22 :
        if(((ATgetType(k_22) == AT_LIST) && ((ATermList) k_22 != ATempty)))
          {
            l_22 = ATgetFirst((ATermList) k_22);
            u_22 = (ATerm) ATgetNext((ATermList) k_22);
            {
              t = not_null(l_22);
              {
                ATerm z_1 (ATerm t)
                {
                  t = not_null(u_22);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_1);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  t = SSL_explode_string(not_null(a_23));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_8), term_n_8);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm f_23 (ATerm t)
  {
    ATerm s_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_8);
      }
    else
      {
        t = s_8;
        t = Cons_2(t, p_69, f_23);
      }
    return(t);
  }
  t = f_23(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  o_23 = t;
  l_23 :
  if(((ATgetType(o_23) == AT_LIST) && ((ATermList) o_23 != ATempty)))
    {
      m_23 = ATgetFirst((ATermList) o_23);
      n_23 = (ATerm) ATgetNext((ATermList) o_23);
      {
        ATerm t_23 = NULL;
        t = not_null(n_23);
        {
          ATerm x_8;
          x_8 = t;
          {
            ATerm u_23 = NULL,w_23 = NULL,y_23 = NULL;
            ATerm y_8;
            y_8 = t;
            {
              ATerm v_23 = NULL;
              t = j_0(t);
              {
                v_23 = t;
                if(((u_23 != NULL) && (u_23 != v_23)))
                  _fail(v_23);
                else
                  u_23 = v_23;
              }
            }
            t = y_8;
            {
              ATerm x_23 = NULL;
              t = not_null(m_23);
              {
                t = i_0(t);
                {
                  x_23 = t;
                  if(((w_23 != NULL) && (w_23 != x_23)))
                    _fail(x_23);
                  else
                    w_23 = x_23;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_23)), not_null(w_23));
                {
                  y_23 = t;
                  if(((t_23 != NULL) && (t_23 != y_23)))
                    _fail(y_23);
                  else
                    t_23 = y_23;
                }
              }
            }
          }
          t = x_8;
          {
            ATerm a_2 (ATerm t)
            {
              t = not_null(t_23);
              return(t);
            }
            t = reverse_acc_2(t, i_0, a_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_23 == ATempty))
        {
          {
            t = term_h_7;
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
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm f_24 = NULL;
  ATerm g_24 = NULL;
  t = term_h_7;
  {
    t = h_0(t);
    {
      g_24 = t;
      if(((f_24 != NULL) && (f_24 != g_24)))
        _fail(g_24);
      else
        f_24 = g_24;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_9), not_null(f_24)), term_z_8);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_47 (ATerm))
{
  ATerm o_24 = NULL,p_24 = NULL;
  o_24 = t;
  n_24 :
  if(match_cons(o_24, sym_Program_1))
    {
      p_24 = ATgetArgument(o_24, 0);
      {
        ATerm s_24 = NULL,u_24 = NULL;
        ATerm t_24 = NULL;
        t = SSLgetAnnotations(not_null(o_24));
        {
          t_24 = t;
          if(((s_24 != NULL) && (s_24 != t_24)))
            _fail(t_24);
          else
            s_24 = t_24;
        }
        {
          t = not_null(p_24);
          {
            ATerm w_24 = NULL;
            t = k_47(t);
            {
              u_24 = t;
              {
                ATerm x_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_24)), not_null(s_24));
                {
                  x_24 = t;
                  if(((w_24 != NULL) && (w_24 != x_24)))
                    _fail(x_24);
                  else
                    w_24 = x_24;
                }
                t = not_null(w_24);
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
  ATerm g_25 = NULL;
  ATerm c_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      ATerm h_25 = NULL;
      h_25 = t;
      if(((g_25 != NULL) && (g_25 != h_25)))
        _fail(h_25);
      else
        g_25 = h_25;
      return(t);
    }
    t = Program_1(t, d_2);
    return(t);
  }
  t = option_defined_1(t, c_2);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm i_25 = NULL;
      ATerm j_25 = NULL;
      t = term_h_7;
      {
        ATerm f_2 (ATerm t)
        {
          t = not_null(g_25);
          return(t);
        }
        t = short_description_1(t, f_2);
        {
          t = concat_strings_0(t);
          {
            j_25 = t;
            if(((i_25 != NULL) && (i_25 != j_25)))
              _fail(j_25);
            else
              i_25 = j_25;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_2, (ATerm) ATinsert(ATempty, not_null(i_25)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_2, (ATerm) ATinsert(ATempty, term_b_9));
      {
        t = printnl_0(t);
        {
          t = term_e_9;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_2 (ATerm t)
                {
                  ATerm k_25 = NULL;
                  k_25 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_25)), term_f_9));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_2);
                {
                  ATerm h_2 (ATerm t)
                  {
                    ATerm m_25 = NULL;
                    ATerm n_25 = NULL;
                    t = term_h_7;
                    {
                      ATerm i_2 (ATerm t)
                      {
                        t = not_null(g_25);
                        return(t);
                      }
                      t = long_description_1(t, i_2);
                      {
                        t = concat_strings_0(t);
                        {
                          n_25 = t;
                          if(((m_25 != NULL) && (m_25 != n_25)))
                            _fail(n_25);
                          else
                            m_25 = n_25;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_25)), term_g_9));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_2);
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
ATerm printnl_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym__2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      {
        ATerm l_9;
        l_9 = t;
        t = SSL_printnl(not_null(v_25), not_null(w_25));
        t = l_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_47 (ATerm))
{
  ATerm f_26 = NULL,g_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym_Undefined_1))
    {
      g_26 = ATgetArgument(f_26, 0);
      {
        ATerm j_26 = NULL,l_26 = NULL;
        ATerm k_26 = NULL;
        t = SSLgetAnnotations(not_null(f_26));
        {
          k_26 = t;
          if(((j_26 != NULL) && (j_26 != k_26)))
            _fail(k_26);
          else
            j_26 = k_26;
        }
        {
          t = not_null(g_26);
          {
            ATerm n_26 = NULL;
            t = l_47(t);
            {
              l_26 = t;
              {
                ATerm o_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_26)), not_null(j_26));
                {
                  o_26 = t;
                  if(((n_26 != NULL) && (n_26 != o_26)))
                    _fail(o_26);
                  else
                    n_26 = o_26;
                }
                t = not_null(n_26);
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
  ATerm g_27 = NULL;
  g_27 = t;
  e_27 :
  if(match_cons(g_27, sym_Help_0))
    {
      ATerm i_27 = NULL,k_27 = NULL;
      ATerm m_9;
      m_9 = t;
      {
        ATerm j_27 = NULL;
        t = SSLgetAnnotations(not_null(g_27));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
      }
      t = m_9;
      {
        ATerm l_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_27));
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
        t = not_null(k_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_78 (ATerm))
{
  ATerm n_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_78(t);
      LocalPopChoice(r_9);
    }
  else
    {
      t = n_9;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym__2))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      t = SSL_table_get(not_null(s_27), not_null(t_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym__3))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      d_28 = ATgetArgument(a_28, 2);
      {
        ATerm t_9;
        t_9 = t;
        {
          ATerm h_28 = NULL;
          ATerm i_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), not_null(c_28));
          {
            ATerm w_9 = t;
            int x_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_9);
              }
            else
              {
                t = w_9;
                t = (ATerm) ATempty;
              }
            {
              i_28 = t;
              if(((h_28 != NULL) && (h_28 != i_28)))
                _fail(i_28);
              else
                h_28 = i_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_28), not_null(c_28), (ATerm) ATinsert(CheckATermList(not_null(h_28)), not_null(d_28)));
            t = table_put_0(t);
          }
        }
        t = t_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_56 (ATerm))
{
  ATerm m_28 = NULL;
  ATerm n_28 = NULL;
  t = term_h_7;
  {
    t = j_56(t);
    {
      n_28 = t;
      if(((m_28 != NULL) && (m_28 != n_28)))
        _fail(n_28);
      else
        m_28 = n_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_9, term_d_9, not_null(m_28));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  s_28 :
  if(match_string(t_28, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(t_28) == AT_LIST) && ((ATermList) t_28 != ATempty)))
        {
          u_28 = ATgetFirst((ATermList) t_28);
          v_28 = (ATerm) ATgetNext((ATermList) t_28);
          {
            ATerm y_28 = NULL;
            ATerm y_9;
            y_9 = t;
            {
              t = not_null(u_28);
              t = a_0(t);
            }
            t = y_9;
            {
              ATerm z_28 = NULL;
              t = term_h_7;
              {
                t = b_0(t);
                {
                  z_28 = t;
                  if(((y_28 != NULL) && (y_28 != z_28)))
                    _fail(z_28);
                  else
                    y_28 = z_28;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_28)), not_null(y_28));
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
  ATerm j_2 (ATerm t)
  {
    ATerm e_29 = NULL;
    e_29 = t;
    d_29 :
    if(!(match_string(e_29, "--help")))
      {
        if(!(match_string(e_29, "-h")))
          {
            if(!(match_string(e_29, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_z_9;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_a_10;
    return(t);
  }
  t = Option_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  g_29 :
  if(((ATgetType(h_29) == AT_LIST) && ((ATermList) h_29 != ATempty)))
    {
      i_29 = ATgetFirst((ATermList) h_29);
      j_29 = (ATerm) ATgetNext((ATermList) h_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_52 (ATerm), ATerm f_52 (ATerm))
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  t_29 :
  if(((ATgetType(u_29) == AT_LIST) && ((ATermList) u_29 != ATempty)))
    {
      v_29 = ATgetFirst((ATermList) u_29);
      w_29 = (ATerm) ATgetNext((ATermList) u_29);
      {
        ATerm a_30 = NULL,c_30 = NULL;
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(u_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
        {
          t = not_null(v_29);
          {
            ATerm e_30 = NULL;
            t = e_52(t);
            {
              c_30 = t;
              {
                t = not_null(w_29);
                {
                  ATerm g_30 = NULL;
                  t = f_52(t);
                  {
                    e_30 = t;
                    {
                      ATerm h_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_30)), not_null(c_30)), not_null(a_30));
                      {
                        h_30 = t;
                        if(((g_30 != NULL) && (g_30 != h_30)))
                          _fail(h_30);
                        else
                          g_30 = h_30;
                      }
                      t = not_null(g_30);
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
  ATerm r_30 = NULL;
  r_30 = t;
  q_30 :
  if(((ATermList) r_30 == ATempty))
    {
      {
        ATerm t_30 = NULL,v_30 = NULL;
        ATerm c_10;
        c_10 = t;
        {
          ATerm u_30 = NULL;
          t = SSLgetAnnotations(not_null(r_30));
          {
            u_30 = t;
            if(((t_30 != NULL) && (t_30 != u_30)))
              _fail(u_30);
            else
              t_30 = u_30;
          }
        }
        t = c_10;
        {
          ATerm w_30 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_30));
          {
            w_30 = t;
            if(((v_30 != NULL) && (v_30 != w_30)))
              _fail(w_30);
            else
              v_30 = w_30;
          }
          t = not_null(v_30);
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
  ATerm c_31 = NULL,g_31 = NULL,h_31 = NULL;
  c_31 = t;
  b_31 :
  if(match_cons(c_31, sym__2))
    {
      g_31 = ATgetArgument(c_31, 0);
      h_31 = ATgetArgument(c_31, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_10, not_null(g_31), not_null(h_31));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_56 (ATerm))
{
  ATerm e_10;
  e_10 = t;
  {
    ATerm m_2 (ATerm t)
    {
      t = term_f_10;
      t = h_56(t);
      return(t);
    }
    t = try_1(t, m_2);
  }
  t = e_10;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm p_31 = NULL;
      ATerm g_10;
      g_10 = t;
      {
        ATerm n_31 = NULL;
        ATerm o_31 = NULL;
        o_31 = t;
        if(((n_31 != NULL) && (n_31 != o_31)))
          _fail(o_31);
        else
          n_31 = o_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(n_31));
          t = set_config_0(t);
        }
      }
      t = g_10;
      {
        ATerm q_31 = NULL;
        q_31 = t;
        if(((p_31 != NULL) && (p_31 != q_31)))
          _fail(q_31);
        else
          p_31 = q_31;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_31));
      }
      return(t);
    }
    ATerm o_2 (ATerm t)
    {
      ATerm n_10 = t;
      int o_10 = stack_ptr;
      if((PushChoice() == 0))
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
              {
                t = h_56(t);
                t = Cons_2(t, _id, o_2);
              }
            }
          LocalPopChoice(o_10);
        }
      else
        {
          t = n_10;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_2, o_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  ATerm u_10;
  u_10 = t;
  {
    ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
    z_31 = t;
    v_31 :
    if(match_cons(z_31, sym__3))
      {
        a_32 = ATgetArgument(z_31, 0);
        b_32 = ATgetArgument(z_31, 1);
        c_32 = ATgetArgument(z_31, 2);
        {
          if(((w_31 != NULL) && (w_31 != a_32)))
            _fail(a_32);
          else
            w_31 = a_32;
          {
            if(((x_31 != NULL) && (x_31 != b_32)))
              _fail(b_32);
            else
              x_31 = b_32;
            {
              if(((y_31 != NULL) && (y_31 != c_32)))
                _fail(c_32);
              else
                y_31 = c_32;
              t = SSL_table_put(not_null(w_31), not_null(x_31), not_null(y_31));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_10;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_56 (ATerm))
{
  ATerm f_32 = NULL;
  ATerm w_10;
  w_10 = t;
  {
    t = term_y_10;
    t = table_put_0(t);
  }
  t = w_10;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm b_11 = t;
      int c_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_56(t);
          LocalPopChoice(c_11);
        }
      else
        {
          t = b_11;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_2);
    {
      ATerm q_2 (ATerm t)
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_l_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            {
              ATerm r_2 (ATerm t)
              {
                ATerm s_2 (ATerm t)
                {
                  ATerm g_32 = NULL;
                  g_32 = t;
                  if(((f_32 != NULL) && (f_32 != g_32)))
                    _fail(g_32);
                  else
                    f_32 = g_32;
                  return(t);
                }
                t = Undefined_1(t, s_2);
                return(t);
              }
              t = option_defined_1(t, r_2);
              {
                ATerm f_11;
                f_11 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_32)), term_g_11));
                  t = printnl_0(t);
                }
                t = f_11;
                {
                  t = system_usage_0(t);
                  {
                    t = term_z_2;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_2);
      {
        ATerm h_11;
        h_11 = t;
        {
          t = term_c_9;
          t = table_destroy_0(t);
        }
        t = h_11;
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm l_32 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    ATerm i_11;
    i_11 = t;
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm m_32 = NULL,n_32 = NULL;
            m_32 = t;
            j_32 :
            if(match_cons(m_32, sym_Output_1))
              {
                n_32 = ATgetArgument(m_32, 0);
                if(((l_32 != NULL) && (l_32 != n_32)))
                  _fail(n_32);
                else
                  l_32 = n_32;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_2);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_32), term_g_5);
            t = open_file_0(t);
          }
          LocalPopChoice(k_11);
        }
      else
        {
          t = j_11;
          {
            ATerm o_32 = NULL;
            t = term_l_11;
            {
              o_32 = t;
              if(((l_32 != NULL) && (l_32 != o_32)))
                _fail(o_32);
              else
                l_32 = o_32;
            }
          }
        }
    }
    t = i_11;
    {
      t = input_file_0(t);
      {
        ATerm u_2 (ATerm t)
        {
          ATerm v_2 (ATerm t)
          {
            t = not_null(l_32);
            return(t);
          }
          t = asfix_yield_1(t, v_2);
          return(t);
        }
        t = _2(t, _id, u_2);
        {
          t = term_l_6;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
