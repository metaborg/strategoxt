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
ATerm term_w_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_s_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_n_6;
ATerm term_k_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
void init_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_c_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_i_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_v_7);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_i_7);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_i_7);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_i_7);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_i_7);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm literal_1_0 (ATerm g_58 (ATerm), ATerm);
ATerm at_tail_1_0 (ATerm h_66 (ATerm), ATerm);
ATerm skip2_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm is_leaf_0_0 (ATerm);
ATerm asfix_yield2_1_0 (ATerm d_58 (ATerm), ATerm);
ATerm skip1_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm leaves_3_0 (ATerm f_62 (ATerm), ATerm g_62 (ATerm), ATerm h_62 (ATerm (ATerm), ATerm), ATerm);
ATerm c_0 (ATerm);
ATerm asfix_yield_1_0 (ATerm c_58 (ATerm), ATerm);
ATerm q_14 (ATerm g_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_3 (ATerm o_35, ATerm);
ATerm g_3 (ATerm a_32, ATerm b_32, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_17 (ATerm i_15, ATerm);
ATerm r_17 (ATerm u_15, ATerm v_15, ATerm w_15, ATerm);
ATerm t_17 (ATerm k_16, ATerm l_16, ATerm m_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_66 (ATerm), ATerm);
ATerm m_20 (ATerm c_20, ATerm);
ATerm n_20 (ATerm e_20, ATerm f_20, ATerm g_20, ATerm);
ATerm o_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm g_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_3 (ATerm p_36, ATerm q_36, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm k_3 (ATerm n_41, ATerm o_41, ATerm m_41, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm y_1 (ATerm);
ATerm c_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_3 (ATerm o_26, ATerm p_26, ATerm);
ATerm debug_1_0 (ATerm o_78 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_65 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm p_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm j_3 (ATerm e_43, ATerm f_43, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_50 (ATerm), ATerm v_50 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm t_84 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm parse_options_1_0 (ATerm s_84 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm literal_1_0 (ATerm g_58 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,l_0 = NULL,v_0 = NULL,y_0 = NULL;
  y_0 = t;
  t = SSL_is_string(y_0);
  v_0 = t;
  t = g_58(t);
  l_0 = t;
  t = (ATerm) ATinsert(ATempty, v_0);
  e_0 = t;
  t = SSL_print(l_0, e_0);
  t = (ATerm) ATmakeAppl(sym__2, l_0, (ATerm) ATinsert(ATempty, v_0));
  return(t);
}
ATerm at_tail_1_0 (ATerm h_66 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,e_1 = NULL,f_1 = NULL,h_1 = NULL,i_1 = NULL,r_1 = NULL;
  i_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_1 = ATgetFirst((ATermList) t);
      f_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_1);
  c_1 = t;
  t = f_1;
  t = h_66(t);
  h_1 = t;
  t = (ATerm) ATinsert(CheckATermList(h_1), e_1);
  r_1 = t;
  t = SSLsetAnnotations(r_1, c_1);
  return(t);
}
ATerm skip2_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_4 = ATgetFirst((ATermList) t);
      a_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_0 = NULL,q_0 = NULL,t_1 = NULL;
        t = SSLgetAnnotations(y_4);
        f_0 = t;
        t = a_5;
        t = at_tail_1_0(s_0, t);
        q_0 = t;
        t = (ATerm) ATinsert(CheckATermList(q_0), z_4);
        t_1 = t;
        t = SSLsetAnnotations(t_1, f_0);
      }
    }
  else
    {
      if(match_cons(t, sym_appl_2))
        {
          z_4 = ATgetArgument(t, 0);
          a_5 = ATgetArgument(t, 1);
          {
            ATerm d_1 = NULL,k_1 = NULL,u_1 = NULL;
            t = SSLgetAnnotations(y_4);
            d_1 = t;
            t = a_5;
            t = map_1_0(s_0, t);
            k_1 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, z_4, k_1);
            u_1 = t;
            t = SSLsetAnnotations(u_1, d_1);
          }
        }
      else
        {
          if(match_cons(t, sym_amb_1))
            {
              z_4 = ATgetArgument(t, 0);
              {
                ATerm x_1 = NULL,z_1 = NULL,d_2 = NULL,g_2 = NULL,l_2 = NULL,m_2 = NULL,w_1 = NULL,v_1 = NULL;
                t = SSLgetAnnotations(y_4);
                x_1 = t;
                t = z_4;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_2 = ATgetFirst((ATermList) t);
                    g_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_4);
                z_1 = t;
                t = d_2;
                t = s_0(t);
                l_2 = t;
                t = (ATerm) ATinsert(CheckATermList(g_2), l_2);
                v_1 = t;
                t = SSLsetAnnotations(v_1, z_1);
                m_2 = t;
                t = (ATerm) ATmakeAppl(sym_amb_1, m_2);
                w_1 = t;
                t = SSLsetAnnotations(w_1, x_1);
              }
            }
          else
            {
              if(match_cons(t, sym_parsetree_2))
                {
                  z_4 = ATgetArgument(t, 0);
                  a_5 = ATgetArgument(t, 1);
                  {
                    ATerm z_2 = NULL,c_3 = NULL,a_2 = NULL;
                    t = SSLgetAnnotations(y_4);
                    z_2 = t;
                    t = z_4;
                    t = s_0(t);
                    c_3 = t;
                    t = (ATerm) ATmakeAppl(sym_parsetree_2, c_3, a_5);
                    a_2 = t;
                    t = SSLsetAnnotations(a_2, z_2);
                  }
                }
              else
                {
                  ATerm u_3 = NULL,y_3 = NULL,b_2 = NULL;
                  if(match_cons(t, sym_flatlex_2))
                    {
                      z_4 = ATgetArgument(t, 0);
                      a_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_4);
                  u_3 = t;
                  t = a_5;
                  t = s_0(t);
                  y_3 = t;
                  t = (ATerm) ATmakeAppl(sym_flatlex_2, z_4, y_3);
                  b_2 = t;
                  t = SSLsetAnnotations(b_2, u_3);
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
ATerm asfix_yield2_1_0 (ATerm d_58 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    ATerm c_6 = NULL;
    c_6 = t;
    {
      ATerm v_3 = t;
      int w_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_4 = NULL,j_4 = NULL,k_4 = NULL;
          t = SSL_is_string(c_6);
          k_4 = t;
          t = d_58(t);
          j_4 = t;
          t = (ATerm) ATinsert(ATempty, k_4);
          g_4 = t;
          t = SSL_print(j_4, g_4);
          t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATempty, k_4));
          ;
          LocalPopChoice(w_3);
        }
      else
        {
          t = v_3;
          {
            ATerm i_5 = NULL,j_5 = NULL;
            t = c_6;
            t = d_58(t);
            j_5 = t;
            t = (ATerm) ATinsert(ATempty, c_6);
            i_5 = t;
            t = SSL_printascii(j_5, i_5);
            t = (ATerm) ATmakeAppl(sym__2, j_5, (ATerm) ATinsert(ATempty, c_6));
          }
        }
    }
    return(t);
  }
  t = leaves_3_0(a_0, is_leaf_0_0, skip2_1_0, t);
  return(t);
}
ATerm skip1_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm w_10 = NULL,a_11 = NULL,b_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  k_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_11 = ATgetFirst((ATermList) t);
      m_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_5 = NULL,b_6 = NULL,k_2 = NULL;
        t = SSLgetAnnotations(k_11);
        q_5 = t;
        t = m_11;
        t = r_0(t);
        b_6 = t;
        t = (ATerm) ATinsert(CheckATermList(b_6), l_11);
        k_2 = t;
        t = SSLsetAnnotations(k_2, q_5);
      }
    }
  else
    {
      if(match_cons(t, sym_term_9))
        {
          l_11 = ATgetArgument(t, 0);
          m_11 = ATgetArgument(t, 1);
          j_11 = ATgetArgument(t, 2);
          w_10 = ATgetArgument(t, 3);
          a_11 = ATgetArgument(t, 4);
          b_11 = ATgetArgument(t, 5);
          f_11 = ATgetArgument(t, 6);
          g_11 = ATgetArgument(t, 7);
          h_11 = ATgetArgument(t, 8);
          {
            ATerm t_6 = NULL,k_7 = NULL,n_7 = NULL,o_7 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(k_11);
            t_6 = t;
            t = b_11;
            t = r_0(t);
            k_7 = t;
            t = f_11;
            t = r_0(t);
            n_7 = t;
            t = g_11;
            t = r_0(t);
            o_7 = t;
            t = (ATerm) ATmakeAppl(sym_term_9, l_11, m_11, j_11, w_10, a_11, k_7, n_7, o_7, h_11);
            n_2 = t;
            t = SSLsetAnnotations(n_2, t_6);
          }
        }
      else
        {
          if(match_cons(t, sym_appl_3))
            {
              l_11 = ATgetArgument(t, 0);
              m_11 = ATgetArgument(t, 1);
              j_11 = ATgetArgument(t, 2);
              {
                ATerm x_8 = NULL,b_9 = NULL,o_2 = NULL;
                t = SSLgetAnnotations(k_11);
                x_8 = t;
                t = j_11;
                t = map_1_0(r_0, t);
                b_9 = t;
                t = (ATerm) ATmakeAppl(sym_appl_3, l_11, m_11, b_9);
                o_2 = t;
                t = SSLsetAnnotations(o_2, x_8);
              }
            }
          else
            {
              if(match_cons(t, sym_list_3))
                {
                  l_11 = ATgetArgument(t, 0);
                  m_11 = ATgetArgument(t, 1);
                  j_11 = ATgetArgument(t, 2);
                  {
                    ATerm m_10 = NULL,t_10 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(k_11);
                    m_10 = t;
                    t = j_11;
                    t = map_1_0(r_0, t);
                    t_10 = t;
                    t = (ATerm) ATmakeAppl(sym_list_3, l_11, m_11, t_10);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, m_10);
                  }
                }
              else
                {
                  ATerm q_11 = NULL,v_11 = NULL,s_2 = NULL;
                  if(match_cons(t, sym_lex_2))
                    {
                      l_11 = ATgetArgument(t, 0);
                      m_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_11);
                  q_11 = t;
                  t = l_11;
                  t = r_0(t);
                  v_11 = t;
                  t = (ATerm) ATmakeAppl(sym_lex_2, v_11, m_11);
                  s_2 = t;
                  t = SSLsetAnnotations(s_2, q_11);
                }
            }
        }
    }
  return(t);
}
ATerm leaves_3_0 (ATerm f_62 (ATerm), ATerm g_62 (ATerm), ATerm h_62 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_12 (ATerm t)
  {
    ATerm a_4 = t;
    int b_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_62(t);
        t = f_62(t);
        ;
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
              t = h_62(d_12, t);
              ;
              LocalPopChoice(d_4);
            }
          else
            {
              t = c_4;
              t = SRTS_all(d_12, t);
            }
        }
      }
    return(t);
  }
  t = d_12(t);
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm b_13 = NULL;
  b_13 = t;
  t = SSL_is_string(b_13);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm c_58 (ATerm), ATerm t)
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        ATerm u_12 = NULL,v_12 = NULL,a_13 = NULL;
        a_13 = t;
        t = c_58(t);
        v_12 = t;
        t = (ATerm) ATinsert(ATempty, a_13);
        u_12 = t;
        t = SSL_print(v_12, u_12);
        t = (ATerm) ATmakeAppl(sym__2, v_12, (ATerm) ATinsert(ATempty, a_13));
        return(t);
      }
      ATerm h_4 = t;
      int i_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_12 = NULL,h_12 = NULL,i_12 = NULL,l_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,s_3 = NULL;
          t_12 = t;
          if(match_cons(t, sym_term_9))
            {
              h_12 = ATgetArgument(t, 0);
              i_12 = ATgetArgument(t, 1);
              l_12 = ATgetArgument(t, 2);
              n_12 = ATgetArgument(t, 3);
              o_12 = ATgetArgument(t, 4);
              p_12 = ATgetArgument(t, 5);
              q_12 = ATgetArgument(t, 6);
              r_12 = ATgetArgument(t, 7);
              s_12 = ATgetArgument(t, 8);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_12);
          e_12 = t;
          t = (ATerm) ATmakeAppl(sym_term_9, h_12, i_12, l_12, n_12, o_12, p_12, q_12, r_12, s_12);
          s_3 = t;
          t = SSLsetAnnotations(s_3, e_12);
          ;
          LocalPopChoice(i_4);
        }
      else
        {
          t = h_4;
          if(match_cons(t, sym_appl_3))
            {
              ATerm n_4 = ATgetArgument(t, 0);
              if(match_cons(n_4, sym_prod_9))
                {
                  ATerm s_4 = ATgetArgument(n_4, 0);
                  if(match_cons(s_4, sym_id_1))
                    {
                      ATerm l_5 = ATgetArgument(s_4, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm t_4 = ATgetArgument(n_4, 1);
                  }
                  {
                    ATerm v_4 = ATgetArgument(n_4, 2);
                  }
                  {
                    ATerm x_4 = ATgetArgument(n_4, 3);
                  }
                  {
                    ATerm c_5 = ATgetArgument(n_4, 4);
                  }
                  {
                    ATerm e_5 = ATgetArgument(n_4, 5);
                  }
                  {
                    ATerm g_5 = ATgetArgument(n_4, 6);
                  }
                  {
                    ATerm h_5 = ATgetArgument(n_4, 7);
                  }
                  {
                    ATerm k_5 = ATgetArgument(n_4, 8);
                  }
                }
              else
                _fail(t);
              {
                ATerm o_4 = ATgetArgument(t, 1);
              }
              {
                ATerm q_4 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
        }
      t = leaves_3_0(b_0, c_0, skip1_1_0, t);
      ;
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 = t;
            int p_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_13 = NULL,e_13 = NULL,g_13 = NULL,i_13 = NULL,x_3 = NULL;
                i_13 = t;
                if(match_cons(t, sym_parsetree_2))
                  {
                    e_13 = ATgetArgument(t, 0);
                    g_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_13);
                d_13 = t;
                t = (ATerm) ATmakeAppl(sym_parsetree_2, e_13, g_13);
                x_3 = t;
                t = SSLsetAnnotations(x_3, d_13);
                ;
                LocalPopChoice(p_5);
              }
            else
              {
                t = o_5;
                {
                  ATerm j_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,z_3 = NULL;
                  n_13 = t;
                  if(match_cons(t, sym_appl_2))
                    {
                      l_13 = ATgetArgument(t, 0);
                      m_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_13);
                  j_13 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, l_13, m_13);
                  z_3 = t;
                  t = SSLsetAnnotations(z_3, j_13);
                }
              }
            t = asfix_yield2_1_0(c_58, t);
            ;
            LocalPopChoice(n_5);
          }
        else
          {
            t = m_5;
            {
              ATerm s_5 = t;
              int t_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1_0(c_58, t);
                  ;
                  LocalPopChoice(t_5);
                }
              else
                {
                  t = s_5;
                  {
                    ATerm o_13 = NULL,r_13 = NULL,s_13 = NULL;
                    t = term_u_5;
                    r_13 = t;
                    t = (ATerm) ATinsert(ATempty, term_v_5);
                    s_13 = t;
                    t = SSL_printnl(r_13, s_13);
                    t = term_w_5;
                    o_13 = t;
                    t = SSL_exit(o_13);
                    t = (ATerm) ATinsert(ATempty, term_v_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_14 (ATerm g_14, ATerm t)
{
  t = SSL_fclose(g_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_14 = NULL,o_14 = NULL;
  o_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_14 = ATgetArgument(t, 0);
      {
        ATerm x_5 = t;
        int y_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_14);
            ;
            LocalPopChoice(y_5);
          }
        else
          {
            t = x_5;
            t = q_14(o_14, t);
          }
      }
    }
  else
    {
      t = q_14(o_14, t);
    }
  return(t);
}
ATerm f_3 (ATerm o_35, ATerm t)
{
  t = SSL_read_term_from_stream(o_35);
  return(t);
}
ATerm g_3 (ATerm a_32, ATerm b_32, ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_fopen(a_32, b_32);
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_stdin_stream();
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_stdout_stream();
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_stderr_stream();
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_15);
  return(t);
}
ATerm q_17 (ATerm i_15, ATerm t)
{
  ATerm l_15 = NULL;
  t = SSL_explode_term(i_15);
  if(match_cons(t, sym__2))
    {
      ATerm z_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_6 = ATgetArgument(t, 1);
        if(((ATgetType(a_6) == AT_LIST) && !(ATisEmpty(a_6))))
          {
            l_15 = ATgetFirst((ATermList) a_6);
            {
              ATerm d_6 = (ATerm) ATgetNext((ATermList) a_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_17 (ATerm u_15, ATerm v_15, ATerm w_15, ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,g_16 = NULL,l_4 = NULL;
  t = SSLgetAnnotations(w_15);
  b_16 = t;
  t = u_15;
  if(match_cons(t, sym_Path_1))
    {
      g_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_16, v_15);
  l_4 = t;
  t = SSLsetAnnotations(l_4, b_16);
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_3(z_15, a_16, t);
  return(t);
}
ATerm t_17 (ATerm k_16, ATerm l_16, ATerm m_16, ATerm t)
{
  ATerm q_16 = NULL,w_16 = NULL,b_17 = NULL,g_17 = NULL,m_4 = NULL;
  t = SSLgetAnnotations(m_16);
  b_17 = t;
  t = SSL_is_string(k_16);
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_17, l_16);
  m_4 = t;
  t = SSLsetAnnotations(m_4, b_17);
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_3(q_16, w_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_17 = NULL,n_17 = NULL,p_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_6 = ATgetArgument(t, 0);
      ATerm f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_17 = t;
  if(match_cons(t, sym__2))
    {
      n_17 = ATgetArgument(t, 0);
      p_17 = ATgetArgument(t, 1);
      {
        ATerm g_6 = t;
        int h_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_17(k_17, t);
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
                  t = r_17(n_17, p_17, k_17, t);
                  ;
                  LocalPopChoice(j_6);
                }
              else
                {
                  t = i_6;
                  t = t_17(n_17, p_17, k_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_17(k_17, t);
    }
  return(t);
}
ATerm i_0 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_17 = NULL;
      x_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_17, term_n_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      t = debug_1_0(i_0, t);
      _fail(t);
    }
  v_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_3(w_17, t);
  u_17 = t;
  t = v_17;
  t = fclose_0_0(t);
  t = u_17;
  return(t);
}
ATerm fetch_1_0 (ATerm d_66 (ATerm), ATerm t)
{
  ATerm t_19 (ATerm t)
  {
    ATerm p_19 = NULL,r_19 = NULL,s_19 = NULL;
    p_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_19 = ATgetFirst((ATermList) t);
        s_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_6 = t;
      int p_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_12 = NULL,f_13 = NULL,p_4 = NULL;
          t = SSLgetAnnotations(p_19);
          y_12 = t;
          t = r_19;
          t = d_66(t);
          f_13 = t;
          t = (ATerm) ATinsert(CheckATermList(s_19), f_13);
          p_4 = t;
          t = SSLsetAnnotations(p_4, y_12);
          ;
          LocalPopChoice(p_6);
        }
      else
        {
          t = o_6;
          {
            ATerm w_13 = NULL,a_14 = NULL,r_4 = NULL;
            t = SSLgetAnnotations(p_19);
            w_13 = t;
            t = s_19;
            t = t_19(t);
            a_14 = t;
            t = (ATerm) ATinsert(CheckATermList(a_14), r_19);
            r_4 = t;
            t = SSLsetAnnotations(r_4, w_13);
          }
        }
    }
    return(t);
  }
  t = t_19(t);
  return(t);
}
ATerm m_20 (ATerm c_20, ATerm t)
{
  t = c_20;
  {
    ATerm q_6 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_6 = ATgetArgument(t, 0);
            ATerm s_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_6;
      }
    t = term_u_6;
    t = debug_1_0(o_0, t);
    t = (ATerm) ATmakeAppl(sym__2, c_20, term_v_6);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm n_20 (ATerm e_20, ATerm f_20, ATerm g_20, ATerm t)
{
  t = SSL_open_file(e_20, f_20);
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_20(j_20, t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            t = n_20(k_20, l_20, j_20, t);
          }
      }
    }
  else
    {
      t = m_20(j_20, t);
    }
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  if(match_string(t, "-k"))
    {
      t = p_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_20;
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  t = SSL_string_to_int(q_20);
  r_20 = t;
  t = term_z_6;
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, r_20);
  t = m_3(s_20, r_20, t);
  t = q_20;
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_0, u_0, w_0, t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  if(match_string(t, "-S"))
    {
      t = u_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_20;
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  t = term_b_7;
  v_20 = t;
  t = term_c_7;
  w_20 = t;
  t = term_d_7;
  t = m_3(v_20, w_20, t);
  t = term_e_7;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm b_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
  x_20 = t;
  t = SSL_string_to_int(x_20);
  y_20 = t;
  t = term_b_7;
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, y_20);
  t = m_3(z_20, y_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_20);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_g_7;
  return(t);
}
ATerm l_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  t = term_h_7;
  a_21 = t;
  t = term_i_7;
  b_21 = t;
  t = term_j_7;
  t = m_3(a_21, b_21, t);
  t = term_l_7;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_0, z_0, a_1, t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_1, g_1, j_1, t);
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            t = Option_3_0(l_1, m_1, n_1, t);
          }
      }
    }
  return(t);
}
ATerm m_3 (ATerm p_36, ATerm q_36, ATerm t)
{
  ATerm c_21 = NULL;
  t = term_t_7;
  c_21 = t;
  t = SSL_table_put(c_21, p_36, q_36);
  t = (ATerm) ATmakeAppl(sym__3, term_t_7, p_36, q_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
      t = term_i_7;
      t = h_0(t);
      h_21 = t;
      t = term_u_7;
      i_21 = t;
      t = term_v_7;
      j_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_7, term_v_7, h_21);
      t = k_3(i_21, j_21, h_21, t);
      _fail(t);
    }
  else
    {
      ATerm m_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_21 = ATgetFirst((ATermList) t);
          g_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_21;
      t = d_0(t);
      t = term_i_7;
      t = g_0(t);
      m_21 = t;
      t = (ATerm) ATinsert(CheckATermList(g_21), m_21);
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  if(match_string(t, "-o"))
    {
      t = o_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_21;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  p_21 = t;
  t = term_w_7;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, p_21);
  t = m_3(q_21, p_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_21);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_x_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_1, p_1, q_1, t);
  return(t);
}
ATerm k_3 (ATerm n_41, ATerm o_41, ATerm m_41, ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_8 = ATgetArgument(t, 0);
            ATerm b_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
        t = j_3(n_41, o_41, t);
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        t = (ATerm) ATempty;
      }
    t_21 = t;
    t = (ATerm) ATinsert(CheckATermList(t_21), m_41);
    u_21 = t;
    t = SSL_table_put(n_41, o_41, u_21);
    t = s_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
      t = term_i_7;
      t = p_0(t);
      f_22 = t;
      t = term_u_7;
      g_22 = t;
      t = term_v_7;
      h_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_7, term_v_7, f_22);
      t = k_3(g_22, h_22, f_22, t);
      _fail(t);
    }
  else
    {
      ATerm l_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_22 = ATgetFirst((ATermList) t);
          c_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_22 = ATgetFirst((ATermList) t);
          e_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_22;
      t = m_0(t);
      t = d_22;
      t = n_0(t);
      l_22 = t;
      t = (ATerm) ATinsert(CheckATermList(e_22), l_22);
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  if(match_string(t, "-i"))
    {
      t = n_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_22;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  o_22 = t;
  t = term_c_8;
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, o_22);
  t = m_3(p_22, o_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_22);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_d_8;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_1, y_1, c_2, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_22 = ATgetFirst((ATermList) t);
      s_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_22 = NULL,x_22 = NULL;
        ATerm e_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_22)), not_null(x_22));
          return(t);
        }
        t = s_22;
        t = k_0(t);
        if(((w_22 != NULL) && (w_22 != t)))
          _fail(t);
        else
          w_22 = t;
        t = r_22;
        t = j_0(t);
        if(((x_22 != NULL) && (x_22 != t)))
          _fail(t);
        else
          x_22 = t;
        t = s_22;
        t = reverse_acc_2_0(j_0, e_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_7;
      t = k_0(t);
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm k_23 = NULL;
  k_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_23), term_e_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_8;
      t = get_config_0_0(t);
      b_23 = t;
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm f_2 (ATerm t)
        {
          ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,u_4 = NULL;
          g_23 = t;
          if(match_cons(t, sym_Program_1))
            {
              f_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_23);
          e_23 = t;
          t = f_23;
          if(((b_23 != NULL) && (b_23 != t)))
            _fail(t);
          else
            b_23 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, f_23);
          u_4 = t;
          t = SSLsetAnnotations(u_4, e_23);
          return(t);
        }
        t = fetch_1_0(f_2, t);
      }
    }
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_8), not_null(b_23)), term_k_8);
        t = echo_0_0(t);
        ;
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
      }
    t = term_m_8;
    t = echo_0_0(t);
    t = term_u_7;
    c_23 = t;
    t = term_v_7;
    d_23 = t;
    t = term_n_8;
    t = j_3(c_23, d_23, t);
    t = reverse_acc_2_0(_id, h_2, t);
    t = map_1_0(i_2, t);
    {
      ATerm o_8 = t;
      int p_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_8), term_r_8), term_q_8);
          t = echo_0_0(t);
          ;
          LocalPopChoice(p_8);
        }
      else
        {
          t = o_8;
        }
    }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_8 = ATgetFirst((ATermList) t);
                ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_23;
          }
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        t = (ATerm) ATinsert(ATempty, o_23);
      }
    p_23 = t;
    t = term_y_8;
    q_23 = t;
    t = SSL_printnl(q_23, p_23);
    t = o_23;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_8;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm i_3 (ATerm o_26, ATerm p_26, ATerm t)
{
  t = SSL_strcat(o_26, p_26);
  return(t);
}
ATerm debug_1_0 (ATerm o_78 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  u_23 = t;
  t = o_78(t);
  v_23 = t;
  t = term_u_5;
  w_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_23), v_23);
  x_23 = t;
  t = SSL_printnl(w_23, x_23);
  t = u_23;
  return(t);
}
ATerm map_1_0 (ATerm t_65 (ATerm), ATerm t)
{
  ATerm m_24 (ATerm t)
  {
    ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
    j_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_24;
      }
    else
      {
        ATerm s_14 = NULL,v_14 = NULL,w_14 = NULL,w_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_24 = ATgetFirst((ATermList) t);
            l_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_24);
        s_14 = t;
        t = k_24;
        t = t_65(t);
        v_14 = t;
        t = l_24;
        t = m_24(t);
        w_14 = t;
        t = (ATerm) ATinsert(CheckATermList(w_14), v_14);
        w_4 = t;
        t = SSLsetAnnotations(w_4, s_14);
      }
    return(t);
  }
  t = m_24(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_24 = NULL;
      u_24 = t;
      t = SSL_is_string(u_24);
      ;
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_2, t);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
              a_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_25 = ATgetArgument(t, 0);
                  t = b_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_25 = ATgetArgument(t, 0);
                      t = b_25;
                      {
                        ATerm h_9 = t;
                        int i_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_9);
                          }
                        else
                          {
                            t = h_9;
                            t = debug_1_0(p_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_25 = NULL,h_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_25 = ATgetArgument(t, 0);
                          c_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_25;
                      t = eval_config_0_0(t);
                      g_25 = t;
                      t = c_25;
                      t = eval_config_0_0(t);
                      h_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_25, h_25);
                      t = i_3(g_25, h_25, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_3 (ATerm e_43, ATerm f_43, ATerm t)
{
  t = SSL_table_get(e_43, f_43);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL;
  l_25 = t;
  t = term_t_7;
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, l_25);
  t = j_3(m_25, l_25, t);
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_25 = NULL,o_25 = NULL;
        t = eval_config_0_0(t);
        n_25 = t;
        t = term_t_7;
        o_25 = t;
        t = SSL_table_put(o_25, l_25, n_25);
        t = n_25;
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  t = term_l_9;
  r_25 = t;
  t = term_i_7;
  s_25 = t;
  t = term_m_9;
  t = m_3(r_25, s_25, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_n_9;
  return(t);
}
ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  t = term_l_9;
  v_25 = t;
  t = term_i_7;
  w_25 = t;
  t = term_m_9;
  t = m_3(v_25, w_25, t);
  t = term_o_9;
  t_25 = t;
  t = term_i_7;
  u_25 = t;
  t = term_p_9;
  t = m_3(t_25, u_25, t);
  t = term_q_9;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_r_9;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_2, t_2, u_2, t);
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      t = Option_3_0(v_2, w_2, x_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_50 (ATerm), ATerm v_50 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,b_5 = NULL;
  c_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_25 = ATgetFirst((ATermList) t);
      z_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_26);
  x_25 = t;
  t = y_25;
  t = u_50(t);
  a_26 = t;
  t = z_25;
  t = v_50(t);
  b_26 = t;
  t = (ATerm) ATinsert(CheckATermList(b_26), a_26);
  b_5 = t;
  t = SSLsetAnnotations(b_5, x_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,m_26 = NULL,n_26 = NULL,d_5 = NULL;
  h_26 = t;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_9;
        t = t_84(t);
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
      }
    t = h_26;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_26 = ATgetFirst((ATermList) t);
        k_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_26);
    i_26 = t;
    t = term_h_8;
    n_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_8, j_26);
    t = m_3(n_26, j_26, t);
    t = k_26;
    {
      ATerm z_26 (ATerm t)
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_9 = t;
            int a_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_26 = NULL;
                s_26 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_26;
                ;
                LocalPopChoice(a_10);
              }
            else
              {
                t = z_9;
                t = t_84(t);
                t = Cons_2_0(_id, z_26, t);
              }
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            {
              ATerm v_26 = NULL,w_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_26 = ATgetFirst((ATermList) t);
                  w_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_26), (ATerm) ATmakeAppl(sym_Undefined_1, v_26));
            }
          }
        return(t);
      }
      t = z_26(t);
      m_26 = t;
      t = (ATerm) ATinsert(CheckATermList(m_26), (ATerm) ATmakeAppl(sym_Program_1, j_26));
      d_5 = t;
      t = SSLsetAnnotations(d_5, i_26);
    }
  }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  if(match_string(t, "--help"))
    {
      t = l_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_27;
        }
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  t = term_b_10;
  m_27 = t;
  t = term_i_7;
  n_27 = t;
  t = term_c_10;
  t = m_3(m_27, n_27, t);
  t = term_d_10;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_e_10;
  return(t);
}
ATerm e_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  g_27 = t;
  t = term_u_7;
  i_27 = t;
  t = term_v_7;
  j_27 = t;
  t = (ATerm) ATempty;
  k_27 = t;
  t = SSL_table_put(i_27, j_27, k_27);
  t = g_27;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm f_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_84(t);
          ;
          LocalPopChoice(g_10);
        }
      else
        {
          t = f_10;
          {
            ATerm h_10 = t;
            int i_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_3, b_3, d_3, t);
                ;
                LocalPopChoice(i_10);
              }
            else
              {
                t = h_10;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_2, t);
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_27 = NULL;
          u_27 = t;
          {
            ATerm l_10 = t;
            int n_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_15 = NULL;
                t = u_27;
                {
                  ATerm o_10 = t;
                  int p_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_10;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(p_10);
                    }
                  else
                    {
                      t = o_10;
                      t = fetch_1_0(e_3, t);
                    }
                  t = u_27;
                  t = default_system_usage_0_0(t);
                  t = term_c_7;
                  s_15 = t;
                  t = SSL_exit(s_15);
                }
                ;
                LocalPopChoice(n_10);
              }
            else
              {
                t = l_10;
                {
                  ATerm f_16 = NULL;
                  t = term_l_9;
                  t = get_config_0_0(t);
                  t = u_27;
                  t = default_system_about_0_0(t);
                  t = term_c_7;
                  f_16 = t;
                  t = SSL_exit(f_16);
                }
              }
          }
          ;
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
          {
            ATerm q_10 = t;
            int r_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
                ATerm h_3 (ATerm t)
                {
                  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,f_5 = NULL;
                  a_28 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      z_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_28);
                  y_27 = t;
                  t = z_27;
                  if(((e_27 != NULL) && (e_27 != t)))
                    _fail(t);
                  else
                    e_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_27);
                  f_5 = t;
                  t = SSLsetAnnotations(f_5, y_27);
                  return(t);
                }
                t = fetch_1_0(h_3, t);
                t = term_u_5;
                w_27 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_27)), term_s_10);
                x_27 = t;
                t = SSL_printnl(w_27, x_27);
                t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_27)), term_s_10));
                t = default_system_usage_0_0(t);
                t = term_w_5;
                v_27 = t;
                t = SSL_exit(v_27);
                ;
                LocalPopChoice(r_10);
              }
            else
              {
                t = q_10;
              }
          }
        }
      f_27 = t;
      t = term_u_7;
      h_27 = t;
      t = SSL_table_destroy(h_27);
      t = f_27;
    }
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm z_10 = t;
              int c_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_3, o_3, p_3, t);
                  ;
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = z_10;
                  {
                    ATerm d_11 = t;
                    int e_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(e_11);
                      }
                    else
                      {
                        t = d_11;
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
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  t = term_i_11;
  n_28 = t;
  t = term_i_7;
  o_28 = t;
  t = term_n_11;
  t = m_3(n_28, o_28, t);
  t = term_o_11;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,r_5 = NULL;
  t = parse_options_1_0(l_3, t);
  g_28 = t;
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((f_28 != NULL) && (f_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_3, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), term_v_6);
        t = open_file_0_0(t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = term_y_8;
        f_28 = t;
      }
    t = g_28;
    {
      ATerm t_11 = t;
      int u_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_28 != NULL) && (i_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_3, t);
          ;
          LocalPopChoice(u_11);
        }
      else
        {
          t = t_11;
          t = term_w_11;
          i_28 = t;
        }
      t = not_null(i_28);
      t = ReadFromFile_0_0(t);
      j_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_28, j_28);
      m_28 = t;
      if(match_cons(t, sym__2))
        {
          ATerm x_11 = ATgetArgument(t, 0);
          ATerm y_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_28);
      k_28 = t;
      t = j_28;
      {
        ATerm t_3 (ATerm t)
        {
          t = not_null(f_28);
          return(t);
        }
        t = asfix_yield_1_0(t_3, t);
        l_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_28, l_28);
        r_5 = t;
        t = SSLsetAnnotations(r_5, k_28);
        t = term_c_7;
        h_28 = t;
        t = SSL_exit(h_28);
      }
    }
  }
  return(t);
}
