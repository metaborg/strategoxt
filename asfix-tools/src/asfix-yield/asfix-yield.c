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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_parsetree_2;
Symbol sym_amb_1;
Symbol sym_appl_2;
Symbol sym_flatlex_2;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
  ATprotectSymbol(sym_flatlex_2);
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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_t_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_b_16;
ATerm term_r_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_j_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_v_8;
ATerm term_r_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_u_7;
void init_constant_terms (void)
{
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_q_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_m_10);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_a_10);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_a_10);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_a_10);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_a_10);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm literal_1_0 (ATerm v_69 (ATerm), ATerm);
ATerm flatlex_2_0 (ATerm g_68 (ATerm), ATerm h_68 (ATerm), ATerm);
ATerm amb_1_0 (ATerm d_68 (ATerm), ATerm);
ATerm skip2_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm is_leaf_0_0 (ATerm);
ATerm asfix_yield2_1_0 (ATerm s_69 (ATerm), ATerm);
ATerm appl_2_0 (ATerm e_68 (ATerm), ATerm f_68 (ATerm), ATerm);
ATerm parsetree_2_0 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm);
ATerm lex_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm);
ATerm list_3_0 (ATerm g_69 (ATerm), ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm);
ATerm appl_3_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm);
ATerm skip1_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm leaves_3_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm (ATerm), ATerm), ATerm);
ATerm term_9_0 (ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm asfix_yield_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm _2_0 (ATerm u_57 (ATerm), ATerm v_57 (ATerm), ATerm);
ATerm l_12 (ATerm x_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_3 (ATerm d_47, ATerm);
ATerm g_3 (ATerm p_43, ATerm q_43, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_77 (ATerm), ATerm);
ATerm w_14 (ATerm k_14, ATerm);
ATerm x_14 (ATerm n_14, ATerm p_14, ATerm q_14, ATerm);
ATerm n_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_3 (ATerm e_48, ATerm f_48, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm l_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm k_3 (ATerm c_53, ATerm d_53, ATerm b_53, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm z_67 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_68 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_3 (ATerm d_38, ATerm e_38, ATerm);
ATerm debug_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm j_3 (ATerm t_54, ATerm u_54, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_62 (ATerm), ATerm k_62 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_96 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm parse_options_1_0 (ATerm b_96 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm literal_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,d_1 = NULL,e_1 = NULL,g_1 = NULL;
  y_0 = t;
  t = SSL_is_string(y_0);
  d_1 = t;
  t = v_69(t);
  e_1 = t;
  t = (ATerm) ATinsert(ATempty, d_1);
  g_1 = t;
  t = SSL_print(e_1, g_1);
  t = (ATerm) ATmakeAppl(sym__2, e_1, (ATerm) ATinsert(ATempty, d_1));
  return(t);
}
ATerm flatlex_2_0 (ATerm g_68 (ATerm), ATerm h_68 (ATerm), ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL,k_1 = NULL,l_1 = NULL,n_1 = NULL,o_1 = NULL,b_0 = NULL,e_0 = NULL;
  o_1 = t;
  if(match_cons(t, sym_flatlex_2))
    {
      i_1 = ATgetArgument(t, 0);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_1);
  h_1 = t;
  t = i_1;
  t = g_68(t);
  l_1 = t;
  t = k_1;
  t = h_68(t);
  n_1 = t;
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym_flatlex_2, l_1, n_1);
  b_0 = t;
  t = SSLsetAnnotations(b_0, h_1);
  return(t);
}
ATerm amb_1_0 (ATerm d_68 (ATerm), ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,f_0 = NULL,q_0 = NULL;
  v_1 = t;
  if(match_cons(t, sym_amb_1))
    {
      t_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_1);
  s_1 = t;
  t = t_1;
  t = d_68(t);
  u_1 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, u_1);
  f_0 = t;
  t = SSLsetAnnotations(f_0, s_1);
  return(t);
}
ATerm skip2_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_5 = t;
  int g_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        t = Cons_2_0(_id, n_0, t);
        return(t);
      }
      t = Cons_2_0(_id, c_2, t);
      ;
      LocalPopChoice(g_5);
    }
  else
    {
      t = d_5;
      {
        ATerm h_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              t = map_1_0(n_0, t);
              return(t);
            }
            t = appl_2_0(_id, d_2, t);
            ;
            LocalPopChoice(i_5);
          }
        else
          {
            t = h_5;
            {
              ATerm m_5 = t;
              int q_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_2 (ATerm t)
                  {
                    t = Cons_2_0(n_0, _id, t);
                    return(t);
                  }
                  t = amb_1_0(e_2, t);
                  ;
                  LocalPopChoice(q_5);
                }
              else
                {
                  t = m_5;
                  {
                    ATerm r_5 = t;
                    int s_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = parsetree_2_0(n_0, _id, t);
                        ;
                        LocalPopChoice(s_5);
                      }
                    else
                      {
                        t = r_5;
                        t = flatlex_2_0(_id, n_0, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm is_leaf_0_0 (ATerm t)
{
  t = SRTS_all(_fail, t);
  return(t);
}
ATerm asfix_yield2_1_0 (ATerm s_69 (ATerm), ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm s_2 = NULL;
    s_2 = t;
    {
      ATerm t_5 = t;
      int u_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_0 = NULL,o_0 = NULL,p_0 = NULL;
          t = SSL_is_string(s_2);
          i_0 = t;
          t = s_69(t);
          o_0 = t;
          t = (ATerm) ATinsert(ATempty, i_0);
          p_0 = t;
          t = SSL_print(o_0, p_0);
          t = (ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATempty, i_0));
          ;
          LocalPopChoice(u_5);
        }
      else
        {
          t = t_5;
          {
            ATerm t_0 = NULL,u_0 = NULL;
            t = s_2;
            t = s_69(t);
            t_0 = t;
            t = (ATerm) ATinsert(ATempty, s_2);
            u_0 = t;
            t = SSL_printascii(t_0, u_0);
            t = (ATerm) ATmakeAppl(sym__2, t_0, (ATerm) ATinsert(ATempty, s_2));
          }
        }
    }
    return(t);
  }
  t = leaves_3_0(f_2, is_leaf_0_0, skip2_1_0, t);
  return(t);
}
ATerm appl_2_0 (ATerm e_68 (ATerm), ATerm f_68 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,u_3 = NULL,d_4 = NULL,i_4 = NULL,j_4 = NULL,m_4 = NULL,r_0 = NULL,s_0 = NULL;
  m_4 = t;
  if(match_cons(t, sym_appl_2))
    {
      u_3 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_4);
  h_3 = t;
  t = u_3;
  t = e_68(t);
  i_4 = t;
  t = d_4;
  t = f_68(t);
  j_4 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, i_4, j_4);
  r_0 = t;
  t = SSLsetAnnotations(r_0, h_3);
  return(t);
}
ATerm parsetree_2_0 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,e_5 = NULL,f_5 = NULL,v_0 = NULL,w_0 = NULL;
  f_5 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      r_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_5);
  p_4 = t;
  t = r_4;
  t = b_68(t);
  t_4 = t;
  t = s_4;
  t = c_68(t);
  e_5 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, t_4, e_5);
  v_0 = t;
  t = SSLsetAnnotations(v_0, p_4);
  return(t);
}
ATerm lex_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,x_0 = NULL,z_0 = NULL;
  p_5 = t;
  if(match_cons(t, sym_lex_2))
    {
      k_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_5);
  j_5 = t;
  t = k_5;
  t = j_69(t);
  n_5 = t;
  t = l_5;
  t = k_69(t);
  o_5 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_lex_2, n_5, o_5);
  x_0 = t;
  t = SSLsetAnnotations(x_0, j_5);
  return(t);
}
ATerm list_3_0 (ATerm g_69 (ATerm), ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,l_6 = NULL,a_1 = NULL,b_1 = NULL;
  l_6 = t;
  if(match_cons(t, sym_list_3))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
      z_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  w_5 = t;
  t = x_5;
  t = g_69(t);
  b_6 = t;
  t = y_5;
  t = h_69(t);
  c_6 = t;
  t = z_5;
  t = i_69(t);
  d_6 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_list_3, b_6, c_6, d_6);
  a_1 = t;
  t = SSLsetAnnotations(a_1, w_5);
  return(t);
}
ATerm appl_3_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,c_1 = NULL,f_1 = NULL;
  s_7 = t;
  if(match_cons(t, sym_appl_3))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
      m_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_7);
  j_7 = t;
  t = k_7;
  t = d_69(t);
  o_7 = t;
  t = l_7;
  t = e_69(t);
  p_7 = t;
  t = m_7;
  t = f_69(t);
  q_7 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_appl_3, o_7, p_7, q_7);
  c_1 = t;
  t = SSLsetAnnotations(c_1, j_7);
  return(t);
}
ATerm skip1_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(_id, m_0, t);
      ;
      LocalPopChoice(a_6);
    }
  else
    {
      t = v_5;
      {
        ATerm e_6 = t;
        int f_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_9_0(_id, _id, _id, _id, _id, m_0, m_0, m_0, _id, t);
            ;
            LocalPopChoice(f_6);
          }
        else
          {
            t = e_6;
            {
              ATerm g_6 = t;
              int h_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_2 (ATerm t)
                  {
                    t = map_1_0(m_0, t);
                    return(t);
                  }
                  t = appl_3_0(_id, _id, g_2, t);
                  ;
                  LocalPopChoice(h_6);
                }
              else
                {
                  t = g_6;
                  {
                    ATerm i_6 = t;
                    int j_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_2 (ATerm t)
                        {
                          t = map_1_0(m_0, t);
                          return(t);
                        }
                        t = list_3_0(_id, _id, h_2, t);
                        ;
                        LocalPopChoice(j_6);
                      }
                    else
                      {
                        t = i_6;
                        t = lex_2_0(m_0, _id, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm leaves_3_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm k_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_73(t);
        t = u_73(t);
        ;
        LocalPopChoice(m_6);
      }
    else
      {
        t = k_6;
        {
          ATerm n_6 = t;
          int o_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_73(v_7, t);
              ;
              LocalPopChoice(o_6);
            }
          else
            {
              t = n_6;
              t = SRTS_all(v_7, t);
            }
        }
      }
    return(t);
  }
  t = v_7(t);
  return(t);
}
ATerm term_9_0 (ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,s_8 = NULL,w_8 = NULL,y_8 = NULL,a_9 = NULL,d_9 = NULL,f_9 = NULL,j_9 = NULL,m_9 = NULL,r_9 = NULL,t_9 = NULL,v_9 = NULL,z_9 = NULL,j_1 = NULL,p_1 = NULL;
  z_9 = t;
  if(match_cons(t, sym_term_9))
    {
      x_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
      b_8 = ATgetArgument(t, 2);
      c_8 = ATgetArgument(t, 3);
      f_8 = ATgetArgument(t, 4);
      g_8 = ATgetArgument(t, 5);
      h_8 = ATgetArgument(t, 6);
      s_8 = ATgetArgument(t, 7);
      w_8 = ATgetArgument(t, 8);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_9);
  w_7 = t;
  t = x_7;
  t = k_68(t);
  y_8 = t;
  t = a_8;
  t = l_68(t);
  a_9 = t;
  t = b_8;
  t = m_68(t);
  d_9 = t;
  t = c_8;
  t = n_68(t);
  f_9 = t;
  t = f_8;
  t = o_68(t);
  j_9 = t;
  t = g_8;
  t = p_68(t);
  m_9 = t;
  t = h_8;
  t = q_68(t);
  r_9 = t;
  t = s_8;
  t = r_68(t);
  t_9 = t;
  t = w_8;
  t = s_68(t);
  v_9 = t;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_term_9, y_8, a_9, d_9, f_9, j_9, m_9, r_9, t_9, v_9);
  j_1 = t;
  t = SSLsetAnnotations(j_1, w_7);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  t = SSL_is_string(o_10);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_6 = t;
      int s_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_9_0(_id, _id, _id, _id, _id, _id, _id, _id, _id, t);
          ;
          LocalPopChoice(s_6);
        }
      else
        {
          t = r_6;
          if(match_cons(t, sym_appl_3))
            {
              ATerm t_6 = ATgetArgument(t, 0);
              if(match_cons(t_6, sym_prod_9))
                {
                  ATerm w_6 = ATgetArgument(t_6, 0);
                  if(match_cons(w_6, sym_id_1))
                    {
                      ATerm f_7 = ATgetArgument(w_6, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_6 = ATgetArgument(t_6, 1);
                  }
                  {
                    ATerm y_6 = ATgetArgument(t_6, 2);
                  }
                  {
                    ATerm z_6 = ATgetArgument(t_6, 3);
                  }
                  {
                    ATerm a_7 = ATgetArgument(t_6, 4);
                  }
                  {
                    ATerm b_7 = ATgetArgument(t_6, 5);
                  }
                  {
                    ATerm c_7 = ATgetArgument(t_6, 6);
                  }
                  {
                    ATerm d_7 = ATgetArgument(t_6, 7);
                  }
                  {
                    ATerm e_7 = ATgetArgument(t_6, 8);
                  }
                }
              else
                _fail(t);
              {
                ATerm u_6 = ATgetArgument(t, 1);
              }
              {
                ATerm v_6 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
        }
      {
        ATerm i_2 (ATerm t)
        {
          ATerm g_10 = NULL,i_10 = NULL,n_10 = NULL;
          g_10 = t;
          t = r_69(t);
          i_10 = t;
          t = (ATerm) ATinsert(ATempty, g_10);
          n_10 = t;
          t = SSL_print(i_10, n_10);
          t = (ATerm) ATmakeAppl(sym__2, i_10, (ATerm) ATinsert(ATempty, g_10));
          return(t);
        }
        t = leaves_3_0(i_2, j_2, skip1_1_0, t);
      }
      ;
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
      {
        ATerm g_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 = t;
            int n_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = parsetree_2_0(_id, _id, t);
                ;
                LocalPopChoice(n_7);
              }
            else
              {
                t = i_7;
                t = appl_2_0(_id, _id, t);
              }
            t = asfix_yield2_1_0(r_69, t);
            ;
            LocalPopChoice(h_7);
          }
        else
          {
            t = g_7;
            {
              ATerm r_7 = t;
              int t_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1_0(r_69, t);
                  ;
                  LocalPopChoice(t_7);
                }
              else
                {
                  t = r_7;
                  {
                    ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
                    t = term_u_7;
                    q_10 = t;
                    t = (ATerm) ATinsert(ATempty, term_y_7);
                    r_10 = t;
                    t = SSL_printnl(q_10, r_10);
                    t = term_z_7;
                    s_10 = t;
                    t = SSL_exit(s_10);
                    t = (ATerm) ATinsert(ATempty, term_y_7);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm _2_0 (ATerm u_57 (ATerm), ATerm v_57 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,w_10 = NULL,x_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,q_1 = NULL,r_1 = NULL;
  c_11 = t;
  if(match_cons(t, sym__2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_11);
  t_10 = t;
  t = w_10;
  t = u_57(t);
  a_11 = t;
  t = x_10;
  t = v_57(t);
  b_11 = t;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_11, b_11);
  q_1 = t;
  t = SSLsetAnnotations(q_1, t_10);
  return(t);
}
ATerm l_12 (ATerm x_11, ATerm t)
{
  t = SSL_fclose(x_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  b_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_12 = ATgetArgument(t, 0);
      {
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_12);
            ;
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            t = l_12(b_12, t);
          }
      }
    }
  else
    {
      t = l_12(b_12, t);
    }
  return(t);
}
ATerm f_3 (ATerm d_47, ATerm t)
{
  t = SSL_read_term_from_stream(d_47);
  return(t);
}
ATerm g_3 (ATerm p_43, ATerm q_43, ATerm t)
{
  ATerm p_12 = NULL;
  t = SSL_fopen(p_43, q_43);
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_12 = NULL;
  t = SSL_stdin_stream();
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_12 = NULL;
  t = SSL_stdout_stream();
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_12 = NULL;
  t = SSL_stderr_stream();
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_12);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm l_13 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      l_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_13;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  t = SSL_is_string(s_13);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      ATerm j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_13 = NULL,m_1 = NULL;
        d_13 = t;
        t = SSL_explode_term(d_13);
        if(match_cons(t, sym__2))
          {
            ATerm m_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_8 = ATgetArgument(t, 1);
              if(((ATgetType(n_8) == AT_LIST) && !(ATisEmpty(n_8))))
                {
                  m_1 = ATgetFirst((ATermList) n_8);
                  {
                    ATerm o_8 = (ATerm) ATgetNext((ATermList) n_8);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = m_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = m_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = m_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        {
          ATerm p_8 = t;
          int q_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_13 = NULL,f_13 = NULL;
              t = _2_0(k_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_13 = ATgetArgument(t, 0);
                  f_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_3(e_13, f_13, t);
              ;
              LocalPopChoice(q_8);
            }
          else
            {
              t = p_8;
              {
                ATerm o_13 = NULL,r_13 = NULL;
                t = _2_0(l_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_13 = ATgetArgument(t, 0);
                    r_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_3(o_13, r_13, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_r_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_14 = NULL;
      b_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_14, term_v_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      t = debug_1_0(m_2, t);
      _fail(t);
    }
  w_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_3(y_13, t);
  x_13 = t;
  t = w_13;
  t = fclose_0_0(t);
  t = x_13;
  return(t);
}
ATerm fetch_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  ATerm f_14 (ATerm t)
  {
    ATerm x_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_77, _id, t);
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = x_8;
        t = Cons_2_0(_id, f_14, t);
      }
    return(t);
  }
  t = f_14(t);
  return(t);
}
ATerm w_14 (ATerm k_14, ATerm t)
{
  t = k_14;
  {
    ATerm b_9 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_9 = ATgetArgument(t, 0);
            ATerm e_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_9;
      }
    t = term_g_9;
    t = debug_1_0(n_2, t);
    t = (ATerm) ATmakeAppl(sym__2, k_14, term_h_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm x_14 (ATerm n_14, ATerm p_14, ATerm q_14, ATerm t)
{
  t = SSL_open_file(n_14, p_14);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_i_9;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  if(match_cons(t, sym__2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_14(t_14, t);
            ;
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            t = x_14(u_14, v_14, t_14, t);
          }
      }
    }
  else
    {
      t = w_14(t_14, t);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  if(match_string(t, "-k"))
    {
      t = z_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_14;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  t = SSL_string_to_int(a_15);
  b_15 = t;
  t = term_n_9;
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, b_15);
  t = m_3(c_15, b_15, t);
  t = a_15;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_2, p_2, q_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  if(match_string(t, "-S"))
    {
      t = e_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_15;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  t = term_p_9;
  f_15 = t;
  t = term_q_9;
  g_15 = t;
  t = term_s_9;
  t = m_3(f_15, g_15, t);
  t = term_u_9;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm w_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  t = SSL_string_to_int(h_15);
  i_15 = t;
  t = term_p_9;
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, i_15);
  t = m_3(j_15, i_15, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_15);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  t = term_y_9;
  k_15 = t;
  t = term_a_10;
  l_15 = t;
  t = term_b_10;
  t = m_3(k_15, l_15, t);
  t = term_c_10;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_d_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_2, u_2, v_2, t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm h_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_2, x_2, y_2, t);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = h_10;
            t = Option_3_0(a_3, b_3, c_3, t);
          }
      }
    }
  return(t);
}
ATerm m_3 (ATerm e_48, ATerm f_48, ATerm t)
{
  ATerm m_15 = NULL;
  t = term_k_10;
  m_15 = t;
  t = SSL_table_put(m_15, e_48, f_48);
  t = (ATerm) ATmakeAppl(sym__3, term_k_10, e_48, f_48);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
      t = term_a_10;
      t = d_0(t);
      r_15 = t;
      t = term_l_10;
      s_15 = t;
      t = term_m_10;
      t_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_10, term_m_10, r_15);
      t = k_3(s_15, t_15, r_15, t);
      _fail(t);
    }
  else
    {
      ATerm w_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_15 = ATgetFirst((ATermList) t);
          q_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_15;
      t = a_0(t);
      t = term_a_10;
      t = c_0(t);
      w_15 = t;
      t = (ATerm) ATinsert(CheckATermList(q_15), w_15);
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm y_15 = NULL;
  y_15 = t;
  if(match_string(t, "-o"))
    {
      t = y_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_15;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  t = term_p_10;
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_10, z_15);
  t = m_3(a_16, z_15, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_15);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, l_3, t);
  return(t);
}
ATerm k_3 (ATerm c_53, ATerm d_53, ATerm b_53, ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_53, d_53);
  {
    ATerm v_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_10 = ATgetArgument(t, 0);
            ATerm d_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_53, d_53);
        t = j_3(c_53, d_53, t);
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = v_10;
        t = (ATerm) ATempty;
      }
    d_16 = t;
    t = (ATerm) ATinsert(CheckATermList(d_16), b_53);
    e_16 = t;
    t = SSL_table_put(c_53, d_53, e_16);
    t = c_16;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
      t = term_a_10;
      t = l_0(t);
      p_16 = t;
      t = term_l_10;
      q_16 = t;
      t = term_m_10;
      r_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_10, term_m_10, p_16);
      t = k_3(q_16, r_16, p_16, t);
      _fail(t);
    }
  else
    {
      ATerm v_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_16 = ATgetFirst((ATermList) t);
          m_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_16 = ATgetFirst((ATermList) t);
          o_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_16;
      t = j_0(t);
      t = n_16;
      t = k_0(t);
      v_16 = t;
      t = (ATerm) ATinsert(CheckATermList(o_16), v_16);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm x_16 = NULL;
  x_16 = t;
  if(match_string(t, "-i"))
    {
      t = x_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_16;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  y_16 = t;
  t = term_e_11;
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, y_16);
  t = m_3(z_16, y_16, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_16);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, o_3, p_3, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_17 = ATgetFirst((ATermList) t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_17 = NULL,h_17 = NULL;
        t = c_17;
        t = h_0(t);
        g_17 = t;
        t = b_17;
        t = g_0(t);
        h_17 = t;
        t = c_17;
        {
          ATerm q_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_17), h_17);
            return(t);
          }
          t = reverse_acc_2_0(g_0, q_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_10;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm z_67 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,w_1 = NULL,x_1 = NULL;
  l_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_17);
  i_17 = t;
  t = j_17;
  t = z_67(t);
  k_17 = t;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_17);
  w_1 = t;
  t = SSLsetAnnotations(w_1, i_17);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm r_17 = NULL;
  r_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_17), term_g_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_11;
      t = get_config_0_0(t);
      o_17 = t;
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm s_3 (ATerm t)
          {
            if(((o_17 != NULL) && (o_17 != t)))
              _fail(t);
            else
              o_17 = t;
            return(t);
          }
          t = Program_1_0(s_3, t);
          return(t);
        }
        t = fetch_1_0(r_3, t);
      }
    }
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_11), not_null(o_17)), term_m_11);
        t = echo_0_0(t);
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
      }
    t = term_o_11;
    t = echo_0_0(t);
    t = term_l_10;
    p_17 = t;
    t = term_m_10;
    q_17 = t;
    t = term_p_11;
    t = j_3(p_17, q_17, t);
    t = reverse_acc_2_0(_id, t_3, t);
    t = map_1_0(v_3, t);
    {
      ATerm q_11 = t;
      int r_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_11), term_t_11), term_s_11);
          t = echo_0_0(t);
          ;
          LocalPopChoice(r_11);
        }
      else
        {
          t = q_11;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm a_68 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,y_1 = NULL,z_1 = NULL;
  v_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_17);
  s_17 = t;
  t = t_17;
  t = a_68(t);
  u_17 = t;
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_17);
  y_1 = t;
  t = SSLsetAnnotations(y_1, s_17);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_11 = ATgetFirst((ATermList) t);
                ATerm z_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_17;
          }
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = (ATerm) ATinsert(ATempty, z_17);
      }
    a_18 = t;
    t = term_c_12;
    b_18 = t;
    t = SSL_printnl(b_18, a_18);
    t = z_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm i_3 (ATerm d_38, ATerm e_38, ATerm t)
{
  t = SSL_strcat(d_38, e_38);
  return(t);
}
ATerm debug_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  f_18 = t;
  t = x_89(t);
  g_18 = t;
  t = term_u_7;
  h_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_18), g_18);
  i_18 = t;
  t = SSL_printnl(h_18, i_18);
  t = f_18;
  return(t);
}
ATerm map_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm j_18 (ATerm t)
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = Cons_2_0(i_77, j_18, t);
      }
    return(t);
  }
  t = j_18(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_18 = NULL;
      p_18 = t;
      t = SSL_is_string(p_18);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm k_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_3, t);
            ;
            LocalPopChoice(m_12);
          }
        else
          {
            t = k_12;
            {
              ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
              t_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_18 = ATgetArgument(t, 0);
                  t = u_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_18 = ATgetArgument(t, 0);
                      t = u_18;
                      {
                        ATerm n_12 = t;
                        int o_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_12);
                          }
                        else
                          {
                            t = n_12;
                            t = debug_1_0(x_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_18 = NULL,a_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_18 = ATgetArgument(t, 0);
                          v_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_18;
                      t = eval_config_0_0(t);
                      z_18 = t;
                      t = v_18;
                      t = eval_config_0_0(t);
                      a_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_18, a_19);
                      t = i_3(z_18, a_19, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_3 (ATerm t_54, ATerm u_54, ATerm t)
{
  t = SSL_table_get(t_54, u_54);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  d_19 = t;
  t = term_k_10;
  e_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_10, d_19);
  t = j_3(e_19, d_19, t);
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL,g_19 = NULL;
        t = eval_config_0_0(t);
        f_19 = t;
        t = term_k_10;
        g_19 = t;
        t = SSL_table_put(g_19, d_19, f_19);
        t = f_19;
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
ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  t = term_v_12;
  h_19 = t;
  t = term_a_10;
  i_19 = t;
  t = term_w_12;
  t = m_3(h_19, i_19, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  t = term_v_12;
  j_19 = t;
  t = term_a_10;
  k_19 = t;
  t = term_w_12;
  t = m_3(j_19, k_19, t);
  t = term_y_12;
  l_19 = t;
  t = term_a_10;
  m_19 = t;
  t = term_z_12;
  t = m_3(l_19, m_19, t);
  t = term_a_13;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_3, z_3, a_4, t);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = c_13;
      t = Option_3_0(b_4, c_4, e_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_62 (ATerm), ATerm k_62 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,a_2 = NULL,b_2 = NULL;
  s_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_19 = ATgetFirst((ATermList) t);
      p_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_19);
  n_19 = t;
  t = o_19;
  t = j_62(t);
  q_19 = t;
  t = p_19;
  t = k_62(t);
  r_19 = t;
  b_2 = t;
  t = (ATerm) ATinsert(CheckATermList(r_19), q_19);
  a_2 = t;
  t = SSLsetAnnotations(a_2, n_19);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  x_19 = t;
  t = term_j_11;
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_11, x_19);
  t = m_3(y_19, x_19, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_13;
        t = c_96(t);
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
      }
    t = w_19;
    {
      ATerm g_4 (ATerm t)
      {
        ATerm k_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_13 = t;
            int p_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(p_13);
              }
            else
              {
                t = n_13;
                t = c_96(t);
                t = Cons_2_0(_id, g_4, t);
              }
            ;
            LocalPopChoice(m_13);
          }
        else
          {
            t = k_13;
            {
              ATerm a_20 = NULL,b_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_20 = ATgetFirst((ATermList) t);
                  b_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_20), (ATerm) ATmakeAppl(sym_Undefined_1, a_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_4, g_4, t);
    }
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  if(match_string(t, "--help"))
    {
      t = p_20;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_20;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_20;
        }
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  t = term_q_13;
  q_20 = t;
  t = term_a_10;
  r_20 = t;
  t = term_t_13;
  t = m_3(q_20, r_20, t);
  t = term_u_13;
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_v_13;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  i_20 = t;
  t = term_l_10;
  l_20 = t;
  t = term_m_10;
  m_20 = t;
  t = (ATerm) ATempty;
  n_20 = t;
  t = SSL_table_put(l_20, m_20, n_20);
  t = i_20;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm z_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_96(t);
          ;
          LocalPopChoice(a_14);
        }
      else
        {
          t = z_13;
          {
            ATerm c_14 = t;
            int d_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_4, l_4, n_4, t);
                ;
                LocalPopChoice(d_14);
              }
            else
              {
                t = c_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_4, t);
    {
      ATerm e_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_20 = NULL;
          y_20 = t;
          {
            ATerm h_14 = t;
            int i_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_2 = NULL;
                t = y_20;
                {
                  ATerm j_14 = t;
                  int l_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_13;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_14);
                    }
                  else
                    {
                      t = j_14;
                      t = fetch_1_0(o_4, t);
                    }
                  t = y_20;
                  t = default_system_usage_0_0(t);
                  t = term_q_9;
                  t_2 = t;
                  t = SSL_exit(t_2);
                }
                ;
                LocalPopChoice(i_14);
              }
            else
              {
                t = h_14;
                {
                  ATerm z_2 = NULL;
                  t = term_v_12;
                  t = get_config_0_0(t);
                  t = y_20;
                  t = default_system_about_0_0(t);
                  t = term_q_9;
                  z_2 = t;
                  t = SSL_exit(z_2);
                }
              }
          }
          ;
          LocalPopChoice(g_14);
        }
      else
        {
          t = e_14;
          {
            ATerm m_14 = t;
            int o_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
                ATerm q_4 (ATerm t)
                {
                  ATerm u_4 (ATerm t)
                  {
                    if(((j_20 != NULL) && (j_20 != t)))
                      _fail(t);
                    else
                      j_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(u_4, t);
                  return(t);
                }
                t = fetch_1_0(q_4, t);
                t = term_u_7;
                z_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_20)), term_r_14);
                a_21 = t;
                t = SSL_printnl(z_20, a_21);
                t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_20)), term_r_14));
                t = default_system_usage_0_0(t);
                t = term_z_7;
                b_21 = t;
                t = SSL_exit(b_21);
                ;
                LocalPopChoice(o_14);
              }
            else
              {
                t = m_14;
              }
          }
        }
      k_20 = t;
      t = term_l_10;
      o_20 = t;
      t = SSL_table_destroy(o_20);
      t = k_20;
    }
  }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm s_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = s_14;
      {
        ATerm d_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(n_15);
          }
        else
          {
            t = d_15;
            {
              ATerm o_15 = t;
              int u_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_4, x_4, y_4, t);
                  ;
                  LocalPopChoice(u_15);
                }
              else
                {
                  t = o_15;
                  {
                    ATerm v_15 = t;
                    int x_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(x_15);
                      }
                    else
                      {
                        t = v_15;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  t = term_b_16;
  j_21 = t;
  t = term_a_10;
  k_21 = t;
  t = term_f_16;
  t = m_3(j_21, k_21, t);
  t = term_g_16;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  t = parse_options_1_0(v_4, t);
  e_21 = t;
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((f_21 != NULL) && (f_21 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_4, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), term_h_9);
        t = open_file_0_0(t);
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        t = term_c_12;
        f_21 = t;
      }
    t = e_21;
    {
      ATerm k_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_5, t);
          ;
          LocalPopChoice(s_16);
        }
      else
        {
          t = k_16;
          t = term_t_16;
          g_21 = t;
        }
      t = not_null(g_21);
      t = ReadFromFile_0_0(t);
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_21, h_21);
      {
        ATerm b_5 (ATerm t)
        {
          ATerm c_5 (ATerm t)
          {
            t = not_null(f_21);
            return(t);
          }
          t = asfix_yield_1_0(c_5, t);
          return(t);
        }
        t = _2_0(_id, b_5, t);
        t = term_q_9;
        i_21 = t;
        t = SSL_exit(i_21);
      }
    }
  }
  return(t);
}
