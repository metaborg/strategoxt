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
ATerm term_d_11;
ATerm term_u_10;
ATerm term_g_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_t_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_t_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_h_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_z_4;
ATerm term_x_4;
ATerm term_u_4;
ATerm term_o_4;
ATerm term_i_4;
ATerm term_w_2;
ATerm term_u_2;
void init_constant_terms (void)
{
  ATprotect(&(term_u_2));
  term_u_2 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_2));
  term_w_2 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym__2, term_c_6, term_d_6);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_6);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_x_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__2, term_f_7, term_x_6);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_x_6);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__2, term_o_8, term_s_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__3, term_o_8, term_s_8, (ATerm) ATempty);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_stdout_0);
}
ATerm exit_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm literal_1 (ATerm, ATerm h_78 (ATerm));
ATerm flatlex_2 (ATerm, ATerm l_46 (ATerm), ATerm m_46 (ATerm));
ATerm amb_1 (ATerm, ATerm i_46 (ATerm));
ATerm skip2_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_leaf_0 (ATerm);
ATerm printascii_0 (ATerm);
ATerm asfix_yield2_1 (ATerm, ATerm e_78 (ATerm));
ATerm appl_2 (ATerm, ATerm j_46 (ATerm), ATerm k_46 (ATerm));
ATerm parsetree_2 (ATerm, ATerm g_46 (ATerm), ATerm h_46 (ATerm));
ATerm is_asfix2_0 (ATerm);
ATerm at_tail_1 (ATerm, ATerm f_69 (ATerm));
ATerm lex_2 (ATerm, ATerm e_46 (ATerm), ATerm f_46 (ATerm));
ATerm list_1 (ATerm, ATerm u_68 (ATerm));
ATerm list_3 (ATerm, ATerm b_46 (ATerm), ATerm c_46 (ATerm), ATerm d_46 (ATerm));
ATerm appl_3 (ATerm, ATerm y_45 (ATerm), ATerm z_45 (ATerm), ATerm a_46 (ATerm));
ATerm skip1_1 (ATerm, ATerm o_0 (ATerm));
ATerm is_string_0 (ATerm);
ATerm print_0 (ATerm);
ATerm leaves_3 (ATerm, ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm, ATerm (ATerm)));
ATerm asfix_yield1_1 (ATerm, ATerm g_78 (ATerm));
ATerm term_9 (ATerm, ATerm f_45 (ATerm), ATerm g_45 (ATerm), ATerm h_45 (ATerm), ATerm i_45 (ATerm), ATerm j_45 (ATerm), ATerm k_45 (ATerm), ATerm l_45 (ATerm), ATerm m_45 (ATerm), ATerm n_45 (ATerm));
ATerm is_asfix1_0 (ATerm);
ATerm asfix_yield_1 (ATerm, ATerm d_78 (ATerm));
ATerm _2 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_61 (ATerm), ATerm s_61 (ATerm));
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_59 (ATerm));
ATerm obsolete_1 (ATerm, ATerm n_59 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm b_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_56 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_69 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm s_68 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_0 (ATerm));
ATerm Program_1 (ATerm, ATerm u_46 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm v_46 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_77 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_55 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_51 (ATerm), ATerm p_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_55 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_55 (ATerm));
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
  ATerm t_2;
  t_2 = t;
  {
    ATerm m_4 = NULL;
    ATerm q_4 = NULL;
    q_4 = t;
    if(((m_4 != NULL) && (m_4 != q_4)))
      _fail(q_4);
    else
      m_4 = q_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_2, not_null(m_4));
      t = printnl_0(t);
    }
  }
  t = t_2;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm v_2;
  v_2 = t;
  {
    t = error_0(t);
    {
      t = term_w_2;
      t = exit_0(t);
    }
  }
  t = v_2;
  return(t);
}
ATerm literal_1 (ATerm t, ATerm h_78 (ATerm))
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
    t = split_2(t, h_78, c_0);
    t = print_0(t);
  }
  return(t);
}
ATerm flatlex_2 (ATerm t, ATerm l_46 (ATerm), ATerm m_46 (ATerm))
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
            t = l_46(t);
            {
              k_5 = t;
              {
                t = not_null(e_5);
                {
                  ATerm o_5 = NULL;
                  t = m_46(t);
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
ATerm amb_1 (ATerm t, ATerm i_46 (ATerm))
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
            t = i_46(t);
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
  ATerm x_2 = t;
  int y_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_0 (ATerm t)
      {
        t = list_1(t, p_0);
        return(t);
      }
      t = appl_2(t, _id, d_0);
      LocalPopChoice(y_2);
    }
  else
    {
      t = x_2;
      {
        ATerm z_2 = t;
        int a_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_0 (ATerm t)
            {
              t = Cons_2(t, p_0, _id);
              return(t);
            }
            t = amb_1(t, g_0);
            LocalPopChoice(a_3);
          }
        else
          {
            t = z_2;
            {
              ATerm b_3 = t;
              int c_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = parsetree_2(t, p_0, _id);
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
                        t = flatlex_2(t, _id, p_0);
                        LocalPopChoice(e_3);
                      }
                    else
                      {
                        t = d_3;
                        {
                          ATerm h_0 (ATerm t)
                          {
                            t = at_tail_1(t, p_0);
                            return(t);
                          }
                          t = at_tail_1(t, h_0);
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
        ATerm f_3;
        f_3 = t;
        t = SSL_printascii(not_null(r_6), not_null(s_6));
        t = f_3;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm asfix_yield2_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm g_3 = t;
    int h_3 = stack_ptr;
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
          t = split_2(t, e_78, r_0);
          t = print_0(t);
        }
        LocalPopChoice(h_3);
      }
    else
      {
        t = g_3;
        {
          ATerm s_0 (ATerm t)
          {
            ATerm a_7 = NULL;
            a_7 = t;
            t = (ATerm) ATinsert(ATempty, not_null(a_7));
            return(t);
          }
          t = split_2(t, e_78, s_0);
          t = printascii_0(t);
        }
      }
    return(t);
  }
  t = leaves_3(t, q_0, is_leaf_0, skip2_1);
  return(t);
}
ATerm appl_2 (ATerm t, ATerm j_46 (ATerm), ATerm k_46 (ATerm))
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
            t = j_46(t);
            {
              s_7 = t;
              {
                t = not_null(m_7);
                {
                  ATerm w_7 = NULL;
                  t = k_46(t);
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
ATerm parsetree_2 (ATerm t, ATerm g_46 (ATerm), ATerm h_46 (ATerm))
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
            t = g_46(t);
            {
              r_8 = t;
              {
                t = not_null(l_8);
                {
                  ATerm v_8 = NULL;
                  t = h_46(t);
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
  ATerm i_3 = t;
  int j_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parsetree_2(t, _id, _id);
      LocalPopChoice(j_3);
    }
  else
    {
      t = i_3;
      t = appl_2(t, _id, _id);
    }
  return(t);
}
ATerm at_tail_1 (ATerm t, ATerm f_69 (ATerm))
{
  t = Cons_2(t, _id, f_69);
  return(t);
}
ATerm lex_2 (ATerm t, ATerm e_46 (ATerm), ATerm f_46 (ATerm))
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
            t = e_46(t);
            {
              q_9 = t;
              {
                t = not_null(k_9);
                {
                  ATerm u_9 = NULL;
                  t = f_46(t);
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
ATerm list_1 (ATerm t, ATerm u_68 (ATerm))
{
  ATerm b_10 (ATerm t)
  {
    ATerm k_3 = t;
    int l_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_3);
      }
    else
      {
        t = k_3;
        t = Cons_2(t, u_68, b_10);
      }
    return(t);
  }
  t = b_10(t);
  return(t);
}
ATerm list_3 (ATerm t, ATerm b_46 (ATerm), ATerm c_46 (ATerm), ATerm d_46 (ATerm))
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
            t = b_46(t);
            {
              t_10 = t;
              {
                t = not_null(l_10);
                {
                  ATerm x_10 = NULL;
                  t = c_46(t);
                  {
                    v_10 = t;
                    {
                      t = not_null(m_10);
                      {
                        ATerm z_10 = NULL;
                        t = d_46(t);
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
ATerm appl_3 (ATerm t, ATerm y_45 (ATerm), ATerm z_45 (ATerm), ATerm a_46 (ATerm))
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
            t = y_45(t);
            {
              y_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm c_12 = NULL;
                  t = z_45(t);
                  {
                    a_12 = t;
                    {
                      t = not_null(r_11);
                      {
                        ATerm e_12 = NULL;
                        t = a_46(t);
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
  ATerm m_3 = t;
  int n_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_9(t, _id, _id, _id, _id, _id, o_0, o_0, o_0, _id);
      LocalPopChoice(n_3);
    }
  else
    {
      t = m_3;
      {
        ATerm o_3 = t;
        int p_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = list_1(t, o_0);
              return(t);
            }
            t = appl_3(t, _id, _id, t_0);
            LocalPopChoice(p_3);
          }
        else
          {
            t = o_3;
            {
              ATerm q_3 = t;
              int r_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_0 (ATerm t)
                  {
                    t = list_1(t, o_0);
                    return(t);
                  }
                  t = list_3(t, _id, _id, u_0);
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
                        t = lex_2(t, o_0, _id);
                        LocalPopChoice(t_3);
                      }
                    else
                      {
                        t = s_3;
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
        ATerm u_3;
        u_3 = t;
        t = SSL_print(not_null(t_12), not_null(u_12));
        t = u_3;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leaves_3 (ATerm t, ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm, ATerm (ATerm)))
{
  ATerm y_12 (ATerm t)
  {
    ATerm v_3 = t;
    int w_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_75(t);
        t = x_75(t);
        LocalPopChoice(w_3);
      }
    else
      {
        t = v_3;
        {
          ATerm x_3 = t;
          int z_3 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_75(t, y_12);
              LocalPopChoice(z_3);
            }
          else
            {
              t = x_3;
              t = _all(t, y_12);
            }
        }
      }
    return(t);
  }
  t = y_12(t);
  return(t);
}
ATerm asfix_yield1_1 (ATerm t, ATerm g_78 (ATerm))
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
    t = split_2(t, g_78, w_0);
    t = print_0(t);
    return(t);
  }
  t = leaves_3(t, v_0, is_string_0, skip1_1);
  return(t);
}
ATerm term_9 (ATerm t, ATerm f_45 (ATerm), ATerm g_45 (ATerm), ATerm h_45 (ATerm), ATerm i_45 (ATerm), ATerm j_45 (ATerm), ATerm k_45 (ATerm), ATerm l_45 (ATerm), ATerm m_45 (ATerm), ATerm n_45 (ATerm))
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
            t = f_45(t);
            {
              m_14 = t;
              {
                t = not_null(s_13);
                {
                  ATerm q_14 = NULL;
                  t = g_45(t);
                  {
                    o_14 = t;
                    {
                      t = not_null(t_13);
                      {
                        ATerm s_14 = NULL;
                        t = h_45(t);
                        {
                          q_14 = t;
                          {
                            t = not_null(u_13);
                            {
                              ATerm u_14 = NULL;
                              t = i_45(t);
                              {
                                s_14 = t;
                                {
                                  t = not_null(v_13);
                                  {
                                    ATerm w_14 = NULL;
                                    t = j_45(t);
                                    {
                                      u_14 = t;
                                      {
                                        t = not_null(w_13);
                                        {
                                          ATerm y_14 = NULL;
                                          t = k_45(t);
                                          {
                                            w_14 = t;
                                            {
                                              t = not_null(x_13);
                                              {
                                                ATerm a_15 = NULL;
                                                t = l_45(t);
                                                {
                                                  y_14 = t;
                                                  {
                                                    t = not_null(y_13);
                                                    {
                                                      ATerm c_15 = NULL;
                                                      t = m_45(t);
                                                      {
                                                        a_15 = t;
                                                        {
                                                          t = not_null(z_13);
                                                          {
                                                            ATerm e_15 = NULL;
                                                            t = n_45(t);
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
  ATerm a_4 = t;
  int b_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_9(t, _id, _id, _id, _id, _id, _id, _id, _id, _id);
      LocalPopChoice(b_4);
    }
  else
    {
      t = a_4;
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
ATerm asfix_yield_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm c_4 = t;
  int d_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_asfix1_0(t);
      t = asfix_yield1_1(t, d_78);
      LocalPopChoice(d_4);
    }
  else
    {
      t = c_4;
      {
        ATerm e_4 = t;
        int f_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_asfix2_0(t);
            t = asfix_yield2_1(t, d_78);
            LocalPopChoice(f_4);
          }
        else
          {
            t = e_4;
            {
              ATerm g_4 = t;
              int h_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1(t, d_78);
                  LocalPopChoice(h_4);
                }
              else
                {
                  t = g_4;
                  {
                    t = (ATerm) ATinsert(ATempty, term_i_4);
                    t = fatal_error_0(t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm))
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
            t = w_43(t);
            {
              x_16 = t;
              {
                t = not_null(r_16);
                {
                  ATerm b_17 = NULL;
                  t = x_43(t);
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
ATerm split_2 (ATerm t, ATerm r_61 (ATerm), ATerm s_61 (ATerm))
{
  ATerm o_17 = NULL,q_17 = NULL;
  ATerm j_4;
  j_4 = t;
  {
    ATerm p_17 = NULL;
    t = r_61(t);
    {
      p_17 = t;
      if(((o_17 != NULL) && (o_17 != p_17)))
        _fail(p_17);
      else
        o_17 = p_17;
    }
  }
  t = j_4;
  {
    ATerm r_17 = NULL;
    t = s_61(t);
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
  ATerm k_4;
  k_4 = t;
  {
    ATerm l_4 = t;
    int n_4 = stack_ptr;
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
        LocalPopChoice(n_4);
      }
    else
      {
        t = l_4;
        {
          ATerm a_18 = NULL;
          t = term_o_4;
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
  t = k_4;
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
ATerm debug_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm p_4;
  p_4 = t;
  {
    ATerm f_18 = NULL,h_18 = NULL;
    ATerm r_4;
    r_4 = t;
    {
      ATerm g_18 = NULL;
      t = g_59(t);
      {
        g_18 = t;
        if(((f_18 != NULL) && (f_18 != g_18)))
          _fail(g_18);
        else
          f_18 = g_18;
      }
    }
    t = r_4;
    {
      ATerm i_18 = NULL;
      i_18 = t;
      if(((h_18 != NULL) && (h_18 != i_18)))
        _fail(i_18);
      else
        h_18 = i_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_18)), not_null(f_18)));
        t = printnl_0(t);
      }
    }
  }
  t = p_4;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm s_4;
  s_4 = t;
  {
    t = n_59(t);
    {
      ATerm z_0 (ATerm t)
      {
        t = term_u_4;
        return(t);
      }
      t = debug_1(t, z_0);
    }
  }
  t = s_4;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  ATerm v_4 = t;
  int w_4 = stack_ptr;
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
      LocalPopChoice(w_4);
    }
  else
    {
      t = v_4;
      {
        ATerm u_18 = NULL;
        ATerm v_18 = NULL;
        ATerm a_1 (ATerm t)
        {
          t = term_x_4;
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
              ATerm y_4;
              y_4 = t;
              {
                ATerm w_18 = NULL;
                t = term_z_4;
                {
                  w_18 = t;
                  if(((v_18 != NULL) && (v_18 != w_18)))
                    _fail(w_18);
                  else
                    v_18 = w_18;
                }
              }
              t = y_4;
              t = SSL_open_file(not_null(q_18), not_null(v_18));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm a_19 (ATerm t)
  {
    ATerm a_5 = t;
    int f_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_69, _id);
        LocalPopChoice(f_5);
      }
    else
      {
        t = a_5;
        t = Cons_2(t, _id, a_19);
      }
    return(t);
  }
  t = a_19(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_56 (ATerm))
{
  t = fetch_1(t, n_56);
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
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  q_19 = t;
  o_19 :
  if(match_string(q_19, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(q_19) == AT_LIST) && ((ATermList) q_19 != ATempty)))
        {
          r_19 = ATgetFirst((ATermList) q_19);
          s_19 = (ATerm) ATgetNext((ATermList) q_19);
          p_19 :
          if(((ATgetType(s_19) == AT_LIST) && ((ATermList) s_19 != ATempty)))
            {
              t_19 = ATgetFirst((ATermList) s_19);
              u_19 = (ATerm) ATgetNext((ATermList) s_19);
              {
                ATerm y_19 = NULL;
                ATerm g_5;
                g_5 = t;
                {
                  t = not_null(r_19);
                  t = l_0(t);
                }
                t = g_5;
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
  ATerm h_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_1 (ATerm t)
      {
        ATerm t_20 = NULL;
        t_20 = t;
        g_20 :
        if(!(match_string(t_20, "-i")))
          {
            if(!(match_string(t_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_1 (ATerm t)
      {
        ATerm x_20 = NULL;
        ATerm n_5;
        n_5 = t;
        {
          ATerm u_20 = NULL;
          ATerm v_20 = NULL;
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_5, not_null(u_20));
            t = set_config_0(t);
          }
        }
        t = n_5;
        {
          ATerm y_20 = NULL;
          y_20 = t;
          if(((x_20 != NULL) && (x_20 != y_20)))
            _fail(y_20);
          else
            x_20 = y_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_20));
        }
        return(t);
      }
      ATerm d_1 (ATerm t)
      {
        t = term_r_5;
        return(t);
      }
      t = ArgOption_3(t, b_1, c_1, d_1);
      LocalPopChoice(l_5);
    }
  else
    {
      t = h_5;
      {
        ATerm s_5 = t;
        int t_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              ATerm z_20 = NULL;
              z_20 = t;
              j_20 :
              if(!(match_string(z_20, "-o")))
                {
                  if(!(match_string(z_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm f_1 (ATerm t)
            {
              ATerm c_21 = NULL;
              ATerm u_5;
              u_5 = t;
              {
                ATerm a_21 = NULL;
                ATerm b_21 = NULL;
                b_21 = t;
                if(((a_21 != NULL) && (a_21 != b_21)))
                  _fail(b_21);
                else
                  a_21 = b_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_5, not_null(a_21));
                  t = set_config_0(t);
                }
              }
              t = u_5;
              {
                ATerm d_21 = NULL;
                d_21 = t;
                if(((c_21 != NULL) && (c_21 != d_21)))
                  _fail(d_21);
                else
                  c_21 = d_21;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_21));
              }
              return(t);
            }
            ATerm g_1 (ATerm t)
            {
              t = term_w_5;
              return(t);
            }
            t = ArgOption_3(t, e_1, f_1, g_1);
            LocalPopChoice(t_5);
          }
        else
          {
            t = s_5;
            {
              ATerm x_5 = t;
              int y_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm e_21 = NULL;
                    e_21 = t;
                    m_20 :
                    if(!(match_string(e_21, "-S")))
                      {
                        if(!(match_string(e_21, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm i_1 (ATerm t)
                  {
                    t = term_h_6;
                    t = set_config_0(t);
                    t = term_k_6;
                    return(t);
                  }
                  ATerm j_1 (ATerm t)
                  {
                    t = term_l_6;
                    return(t);
                  }
                  t = Option_3(t, h_1, i_1, j_1);
                  LocalPopChoice(y_5);
                }
              else
                {
                  t = x_5;
                  {
                    ATerm m_6 = t;
                    int n_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_1 (ATerm t)
                        {
                          ATerm f_21 = NULL;
                          f_21 = t;
                          n_20 :
                          if(!(match_string(f_21, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm l_1 (ATerm t)
                        {
                          ATerm i_21 = NULL;
                          ATerm o_6;
                          o_6 = t;
                          {
                            ATerm g_21 = NULL;
                            ATerm h_21 = NULL;
                            t = string_to_int_0(t);
                            {
                              h_21 = t;
                              if(((g_21 != NULL) && (g_21 != h_21)))
                                _fail(h_21);
                              else
                                g_21 = h_21;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_6, not_null(g_21));
                              t = set_config_0(t);
                            }
                          }
                          t = o_6;
                          {
                            ATerm j_21 = NULL;
                            j_21 = t;
                            if(((i_21 != NULL) && (i_21 != j_21)))
                              _fail(j_21);
                            else
                              i_21 = j_21;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_21));
                          }
                          return(t);
                        }
                        ATerm m_1 (ATerm t)
                        {
                          t = term_t_6;
                          return(t);
                        }
                        t = ArgOption_3(t, k_1, l_1, m_1);
                        LocalPopChoice(n_6);
                      }
                    else
                      {
                        t = m_6;
                        {
                          ATerm u_6 = t;
                          int v_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_1 (ATerm t)
                              {
                                ATerm k_21 = NULL;
                                k_21 = t;
                                q_20 :
                                if(!(match_string(k_21, "-v")))
                                  {
                                    if(!(match_string(k_21, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm o_1 (ATerm t)
                              {
                                t = term_z_6;
                                t = set_config_0(t);
                                t = term_b_7;
                                return(t);
                              }
                              ATerm p_1 (ATerm t)
                              {
                                t = term_c_7;
                                return(t);
                              }
                              t = Option_3(t, n_1, o_1, p_1);
                              LocalPopChoice(v_6);
                            }
                          else
                            {
                              t = u_6;
                              {
                                ATerm d_7 = t;
                                int e_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_1 (ATerm t)
                                    {
                                      ATerm l_21 = NULL;
                                      l_21 = t;
                                      r_20 :
                                      if(!(match_string(l_21, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm r_1 (ATerm t)
                                    {
                                      t = term_g_7;
                                      t = set_config_0(t);
                                      t = term_h_7;
                                      return(t);
                                    }
                                    ATerm s_1 (ATerm t)
                                    {
                                      t = term_i_7;
                                      return(t);
                                    }
                                    t = Option_3(t, q_1, r_1, s_1);
                                    LocalPopChoice(e_7);
                                  }
                                else
                                  {
                                    t = d_7;
                                    {
                                      ATerm t_1 (ATerm t)
                                      {
                                        ATerm m_21 = NULL;
                                        m_21 = t;
                                        s_20 :
                                        if(!(match_string(m_21, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm u_1 (ATerm t)
                                      {
                                        t = term_o_7;
                                        t = set_config_0(t);
                                        t = term_p_7;
                                        return(t);
                                      }
                                      ATerm v_1 (ATerm t)
                                      {
                                        t = term_t_7;
                                        return(t);
                                      }
                                      t = Option_3(t, t_1, u_1, v_1);
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
  ATerm u_21 = NULL;
  u_21 = t;
  t = SSL_table_destroy(not_null(u_21));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  t = SSL_implode_string(not_null(y_21));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_69 (ATerm))
{
  ATerm b_22 (ATerm t)
  {
    ATerm v_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_22);
        LocalPopChoice(y_7);
      }
    else
      {
        t = v_7;
        {
          t = Nil_0(t);
          t = h_69(t);
        }
      }
    return(t);
  }
  t = b_22(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
        ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
        e_22 = t;
        d_22 :
        if(((ATgetType(e_22) == AT_LIST) && ((ATermList) e_22 != ATempty)))
          {
            f_22 = ATgetFirst((ATermList) e_22);
            g_22 = (ATerm) ATgetNext((ATermList) e_22);
            {
              t = not_null(f_22);
              {
                ATerm w_1 (ATerm t)
                {
                  t = not_null(g_22);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_1);
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
  ATerm u_22 = NULL;
  u_22 = t;
  t = SSL_explode_string(not_null(u_22));
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
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_8), term_b_8);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_68 (ATerm))
{
  ATerm z_22 (ATerm t)
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        t = Cons_2(t, s_68, z_22);
      }
    return(t);
  }
  t = z_22(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  k_23 = t;
  h_23 :
  if(((ATgetType(k_23) == AT_LIST) && ((ATermList) k_23 != ATempty)))
    {
      i_23 = ATgetFirst((ATermList) k_23);
      j_23 = (ATerm) ATgetNext((ATermList) k_23);
      {
        ATerm n_23 = NULL;
        t = not_null(j_23);
        {
          ATerm f_8;
          f_8 = t;
          {
            ATerm o_23 = NULL,q_23 = NULL,s_23 = NULL;
            ATerm g_8;
            g_8 = t;
            {
              ATerm p_23 = NULL;
              t = j_0(t);
              {
                p_23 = t;
                if(((o_23 != NULL) && (o_23 != p_23)))
                  _fail(p_23);
                else
                  o_23 = p_23;
              }
            }
            t = g_8;
            {
              ATerm r_23 = NULL;
              t = not_null(i_23);
              {
                t = i_0(t);
                {
                  r_23 = t;
                  if(((q_23 != NULL) && (q_23 != r_23)))
                    _fail(r_23);
                  else
                    q_23 = r_23;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_23)), not_null(q_23));
                {
                  s_23 = t;
                  if(((n_23 != NULL) && (n_23 != s_23)))
                    _fail(s_23);
                  else
                    n_23 = s_23;
                }
              }
            }
          }
          t = f_8;
          {
            ATerm x_1 (ATerm t)
            {
              t = not_null(n_23);
              return(t);
            }
            t = reverse_acc_2(t, i_0, x_1);
          }
        }
      }
    }
  else
    {
      if(((ATermList) k_23 == ATempty))
        {
          {
            t = term_x_6;
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
  ATerm y_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_1);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm a_24 = NULL;
  ATerm b_24 = NULL;
  t = term_x_6;
  {
    t = f_0(t);
    {
      b_24 = t;
      if(((a_24 != NULL) && (a_24 != b_24)))
        _fail(b_24);
      else
        a_24 = b_24;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_8), not_null(a_24)), term_h_8);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_46 (ATerm))
{
  ATerm i_24 = NULL,j_24 = NULL;
  i_24 = t;
  h_24 :
  if(match_cons(i_24, sym_Program_1))
    {
      j_24 = ATgetArgument(i_24, 0);
      {
        ATerm m_24 = NULL,o_24 = NULL;
        ATerm n_24 = NULL;
        t = SSLgetAnnotations(not_null(i_24));
        {
          n_24 = t;
          if(((m_24 != NULL) && (m_24 != n_24)))
            _fail(n_24);
          else
            m_24 = n_24;
        }
        {
          t = not_null(j_24);
          {
            ATerm q_24 = NULL;
            t = u_46(t);
            {
              o_24 = t;
              {
                ATerm r_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(o_24)), not_null(m_24));
                {
                  r_24 = t;
                  if(((q_24 != NULL) && (q_24 != r_24)))
                    _fail(r_24);
                  else
                    q_24 = r_24;
                }
                t = not_null(q_24);
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
  ATerm a_25 = NULL;
  ATerm z_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      ATerm b_25 = NULL;
      b_25 = t;
      if(((a_25 != NULL) && (a_25 != b_25)))
        _fail(b_25);
      else
        a_25 = b_25;
      return(t);
    }
    t = Program_1(t, a_2);
    return(t);
  }
  t = option_defined_1(t, z_1);
  {
    ATerm b_2 (ATerm t)
    {
      ATerm c_25 = NULL;
      ATerm d_25 = NULL;
      t = term_x_6;
      {
        ATerm c_2 (ATerm t)
        {
          t = not_null(a_25);
          return(t);
        }
        t = short_description_1(t, c_2);
        {
          t = concat_strings_0(t);
          {
            d_25 = t;
            if(((c_25 != NULL) && (c_25 != d_25)))
              _fail(d_25);
            else
              c_25 = d_25;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_2, (ATerm) ATinsert(ATempty, not_null(c_25)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_2, (ATerm) ATinsert(ATempty, term_n_8));
      {
        t = printnl_0(t);
        {
          t = term_u_8;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_2 (ATerm t)
                {
                  ATerm e_25 = NULL;
                  e_25 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), term_x_8));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_2);
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm g_25 = NULL;
                    ATerm h_25 = NULL;
                    t = term_x_6;
                    {
                      ATerm f_2 (ATerm t)
                      {
                        t = not_null(a_25);
                        return(t);
                      }
                      t = long_description_1(t, f_2);
                      {
                        t = concat_strings_0(t);
                        {
                          h_25 = t;
                          if(((g_25 != NULL) && (g_25 != h_25)))
                            _fail(h_25);
                          else
                            g_25 = h_25;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_25)), term_y_8));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_2);
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
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym__2))
    {
      p_25 = ATgetArgument(o_25, 0);
      q_25 = ATgetArgument(o_25, 1);
      {
        ATerm z_8;
        z_8 = t;
        t = SSL_printnl(not_null(p_25), not_null(q_25));
        t = z_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_46 (ATerm))
{
  ATerm z_25 = NULL,a_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym_Undefined_1))
    {
      a_26 = ATgetArgument(z_25, 0);
      {
        ATerm d_26 = NULL,f_26 = NULL;
        ATerm e_26 = NULL;
        t = SSLgetAnnotations(not_null(z_25));
        {
          e_26 = t;
          if(((d_26 != NULL) && (d_26 != e_26)))
            _fail(e_26);
          else
            d_26 = e_26;
        }
        {
          t = not_null(a_26);
          {
            ATerm h_26 = NULL;
            t = v_46(t);
            {
              f_26 = t;
              {
                ATerm k_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_26)), not_null(d_26));
                {
                  k_26 = t;
                  if(((h_26 != NULL) && (h_26 != k_26)))
                    _fail(k_26);
                  else
                    h_26 = k_26;
                }
                t = not_null(h_26);
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
  ATerm a_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym_Help_0))
    {
      ATerm c_27 = NULL,e_27 = NULL;
      ATerm a_9;
      a_9 = t;
      {
        ATerm d_27 = NULL;
        t = SSLgetAnnotations(not_null(a_27));
        {
          d_27 = t;
          if(((c_27 != NULL) && (c_27 != d_27)))
            _fail(d_27);
          else
            c_27 = d_27;
        }
      }
      t = a_9;
      {
        ATerm f_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_27));
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
        t = not_null(e_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_77(t);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  k_27 :
  if(match_cons(l_27, sym__2))
    {
      m_27 = ATgetArgument(l_27, 0);
      n_27 = ATgetArgument(l_27, 1);
      t = SSL_table_get(not_null(m_27), not_null(n_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
  u_27 = t;
  t_27 :
  if(match_cons(u_27, sym__3))
    {
      v_27 = ATgetArgument(u_27, 0);
      w_27 = ATgetArgument(u_27, 1);
      x_27 = ATgetArgument(u_27, 2);
      {
        ATerm d_9;
        d_9 = t;
        {
          ATerm b_28 = NULL;
          ATerm c_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_27), not_null(w_27));
          {
            ATerm e_9 = t;
            int f_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_9);
              }
            else
              {
                t = e_9;
                t = (ATerm) ATempty;
              }
            {
              c_28 = t;
              if(((b_28 != NULL) && (b_28 != c_28)))
                _fail(c_28);
              else
                b_28 = c_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_27), not_null(w_27), (ATerm) ATinsert(CheckATermList(not_null(b_28)), not_null(x_27)));
            t = table_put_0(t);
          }
        }
        t = d_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_55 (ATerm))
{
  ATerm g_28 = NULL;
  ATerm h_28 = NULL;
  t = term_x_6;
  {
    t = t_55(t);
    {
      h_28 = t;
      if(((g_28 != NULL) && (g_28 != h_28)))
        _fail(h_28);
      else
        g_28 = h_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_8, term_s_8, not_null(g_28));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  n_28 = t;
  m_28 :
  if(match_string(n_28, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(n_28) == AT_LIST) && ((ATermList) n_28 != ATempty)))
        {
          o_28 = ATgetFirst((ATermList) n_28);
          p_28 = (ATerm) ATgetNext((ATermList) n_28);
          {
            ATerm s_28 = NULL;
            ATerm g_9;
            g_9 = t;
            {
              t = not_null(o_28);
              t = a_0(t);
            }
            t = g_9;
            {
              ATerm t_28 = NULL;
              t = term_x_6;
              {
                t = b_0(t);
                {
                  t_28 = t;
                  if(((s_28 != NULL) && (s_28 != t_28)))
                    _fail(t_28);
                  else
                    s_28 = t_28;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_28)), not_null(s_28));
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
  ATerm g_2 (ATerm t)
  {
    ATerm y_28 = NULL;
    y_28 = t;
    x_28 :
    if(!(match_string(y_28, "--help")))
      {
        if(!(match_string(y_28, "-h")))
          {
            if(!(match_string(y_28, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_l_9;
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_m_9;
    return(t);
  }
  t = Option_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  a_29 :
  if(((ATgetType(b_29) == AT_LIST) && ((ATermList) b_29 != ATempty)))
    {
      c_29 = ATgetFirst((ATermList) b_29);
      d_29 = (ATerm) ATgetNext((ATermList) b_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_51 (ATerm), ATerm p_51 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
  o_29 = t;
  n_29 :
  if(((ATgetType(o_29) == AT_LIST) && ((ATermList) o_29 != ATempty)))
    {
      p_29 = ATgetFirst((ATermList) o_29);
      q_29 = (ATerm) ATgetNext((ATermList) o_29);
      {
        ATerm u_29 = NULL,w_29 = NULL;
        ATerm v_29 = NULL;
        t = SSLgetAnnotations(not_null(o_29));
        {
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
        }
        {
          t = not_null(p_29);
          {
            ATerm y_29 = NULL;
            t = o_51(t);
            {
              w_29 = t;
              {
                t = not_null(q_29);
                {
                  ATerm a_30 = NULL;
                  t = p_51(t);
                  {
                    y_29 = t;
                    {
                      ATerm b_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_29)), not_null(w_29)), not_null(u_29));
                      {
                        b_30 = t;
                        if(((a_30 != NULL) && (a_30 != b_30)))
                          _fail(b_30);
                        else
                          a_30 = b_30;
                      }
                      t = not_null(a_30);
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
  ATerm l_30 = NULL;
  l_30 = t;
  k_30 :
  if(((ATermList) l_30 == ATempty))
    {
      {
        ATerm n_30 = NULL,p_30 = NULL;
        ATerm n_9;
        n_9 = t;
        {
          ATerm o_30 = NULL;
          t = SSLgetAnnotations(not_null(l_30));
          {
            o_30 = t;
            if(((n_30 != NULL) && (n_30 != o_30)))
              _fail(o_30);
            else
              n_30 = o_30;
          }
        }
        t = n_9;
        {
          ATerm q_30 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_30));
          {
            q_30 = t;
            if(((p_30 != NULL) && (p_30 != q_30)))
              _fail(q_30);
            else
              p_30 = q_30;
          }
          t = not_null(p_30);
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
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym__2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_9, not_null(a_31), not_null(b_31));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_55 (ATerm))
{
  ATerm t_9;
  t_9 = t;
  {
    ATerm j_2 (ATerm t)
    {
      t = term_w_9;
      t = r_55(t);
      return(t);
    }
    t = try_1(t, j_2);
  }
  t = t_9;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm j_31 = NULL;
      ATerm x_9;
      x_9 = t;
      {
        ATerm h_31 = NULL;
        ATerm i_31 = NULL;
        i_31 = t;
        if(((h_31 != NULL) && (h_31 != i_31)))
          _fail(i_31);
        else
          h_31 = i_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(h_31));
          t = set_config_0(t);
        }
      }
      t = x_9;
      {
        ATerm k_31 = NULL;
        k_31 = t;
        if(((j_31 != NULL) && (j_31 != k_31)))
          _fail(k_31);
        else
          j_31 = k_31;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_31));
      }
      return(t);
    }
    ATerm l_2 (ATerm t)
    {
      ATerm z_9 = t;
      int a_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_10);
            }
          else
            {
              t = c_10;
              {
                t = r_55(t);
                t = Cons_2(t, _id, l_2);
              }
            }
          LocalPopChoice(a_10);
        }
      else
        {
          t = z_9;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_2, l_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  ATerm e_10;
  e_10 = t;
  {
    ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
    t_31 = t;
    p_31 :
    if(match_cons(t_31, sym__3))
      {
        u_31 = ATgetArgument(t_31, 0);
        v_31 = ATgetArgument(t_31, 1);
        w_31 = ATgetArgument(t_31, 2);
        {
          if(((q_31 != NULL) && (q_31 != u_31)))
            _fail(u_31);
          else
            q_31 = u_31;
          {
            if(((r_31 != NULL) && (r_31 != v_31)))
              _fail(v_31);
            else
              r_31 = v_31;
            {
              if(((s_31 != NULL) && (s_31 != w_31)))
                _fail(w_31);
              else
                s_31 = w_31;
              t = SSL_table_put(not_null(q_31), not_null(r_31), not_null(s_31));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_10;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_55 (ATerm))
{
  ATerm z_31 = NULL;
  ATerm f_10;
  f_10 = t;
  {
    t = term_g_10;
    t = table_put_0(t);
  }
  t = f_10;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm h_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_55(t);
          LocalPopChoice(n_10);
        }
      else
        {
          t = h_10;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_2);
    {
      ATerm n_2 (ATerm t)
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_d_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm o_2 (ATerm t)
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm a_32 = NULL;
                  a_32 = t;
                  if(((z_31 != NULL) && (z_31 != a_32)))
                    _fail(a_32);
                  else
                    z_31 = a_32;
                  return(t);
                }
                t = Undefined_1(t, p_2);
                return(t);
              }
              t = option_defined_1(t, o_2);
              {
                ATerm q_10;
                q_10 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_31)), term_u_10));
                  t = printnl_0(t);
                }
                t = q_10;
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_2;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_2);
      {
        ATerm w_10;
        w_10 = t;
        {
          t = term_o_8;
          t = table_destroy_0(t);
        }
        t = w_10;
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm f_32 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    ATerm y_10;
    y_10 = t;
    {
      ATerm b_11 = t;
      int c_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm g_32 = NULL,h_32 = NULL;
            g_32 = t;
            d_32 :
            if(match_cons(g_32, sym_Output_1))
              {
                h_32 = ATgetArgument(g_32, 0);
                if(((f_32 != NULL) && (f_32 != h_32)))
                  _fail(h_32);
                else
                  f_32 = h_32;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_2);
          {
            t = not_null(f_32);
            t = open_file_0(t);
          }
          LocalPopChoice(c_11);
        }
      else
        {
          t = b_11;
          {
            ATerm i_32 = NULL;
            t = term_d_11;
            {
              i_32 = t;
              if(((f_32 != NULL) && (f_32 != i_32)))
                _fail(i_32);
              else
                f_32 = i_32;
            }
          }
        }
    }
    t = y_10;
    {
      t = input_file_0(t);
      {
        ATerm r_2 (ATerm t)
        {
          ATerm s_2 (ATerm t)
          {
            t = not_null(f_32);
            return(t);
          }
          t = asfix_yield_1(t, s_2);
          return(t);
        }
        t = _2(t, _id, r_2);
        {
          t = term_d_6;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
