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
ATerm term_q_11;
ATerm term_p_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_t_10;
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
ATerm term_o_7;
ATerm term_m_7;
ATerm term_l_7;
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
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_i_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_i_7);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm literal_1_0 (ATerm v_69 (ATerm), ATerm);
ATerm at_tail_1_0 (ATerm w_77 (ATerm), ATerm);
ATerm skip2_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm is_leaf_0_0 (ATerm);
ATerm asfix_yield2_1_0 (ATerm s_69 (ATerm), ATerm);
ATerm skip1_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm leaves_3_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm (ATerm), ATerm), ATerm);
ATerm f_0 (ATerm);
ATerm asfix_yield_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm s_14 (ATerm g_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_3 (ATerm d_47, ATerm);
ATerm g_3 (ATerm p_43, ATerm q_43, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_17 (ATerm l_15, ATerm);
ATerm q_17 (ATerm r_15, ATerm s_15, ATerm t_15, ATerm);
ATerm s_17 (ATerm i_16, ATerm o_16, ATerm t_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_77 (ATerm), ATerm);
ATerm k_20 (ATerm a_20, ATerm);
ATerm l_20 (ATerm c_20, ATerm d_20, ATerm e_20, ATerm);
ATerm r_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_3 (ATerm e_48, ATerm f_48, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm k_3 (ATerm c_53, ATerm d_53, ATerm b_53, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm x_1 (ATerm);
ATerm e_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_3 (ATerm d_38, ATerm e_38, ATerm);
ATerm debug_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm j_3 (ATerm t_54, ATerm u_54, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_62 (ATerm), ATerm k_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_96 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm parse_options_1_0 (ATerm b_96 (ATerm), ATerm);
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
ATerm literal_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm i_0 = NULL,q_0 = NULL,v_0 = NULL,y_0 = NULL;
  y_0 = t;
  t = SSL_is_string(y_0);
  v_0 = t;
  t = v_69(t);
  q_0 = t;
  t = (ATerm) ATinsert(ATempty, v_0);
  i_0 = t;
  t = SSL_print(q_0, i_0);
  t = (ATerm) ATmakeAppl(sym__2, q_0, (ATerm) ATinsert(ATempty, v_0));
  return(t);
}
ATerm at_tail_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,e_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,s_1 = NULL;
  j_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_1 = ATgetFirst((ATermList) t);
      h_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_1);
  c_1 = t;
  t = h_1;
  t = w_77(t);
  i_1 = t;
  t = (ATerm) ATinsert(CheckATermList(i_1), e_1);
  s_1 = t;
  t = SSLsetAnnotations(s_1, c_1);
  return(t);
}
ATerm skip2_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_5 = ATgetFirst((ATermList) t);
      b_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_0 = NULL,s_0 = NULL,u_1 = NULL;
        t = SSLgetAnnotations(z_4);
        o_0 = t;
        t = b_5;
        t = at_tail_1_0(n_0, t);
        s_0 = t;
        t = (ATerm) ATinsert(CheckATermList(s_0), a_5);
        u_1 = t;
        t = SSLsetAnnotations(u_1, o_0);
      }
    }
  else
    {
      if(match_cons(t, sym_appl_2))
        {
          a_5 = ATgetArgument(t, 0);
          b_5 = ATgetArgument(t, 1);
          {
            ATerm d_1 = NULL,k_1 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(z_4);
            d_1 = t;
            t = b_5;
            t = map_1_0(n_0, t);
            k_1 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, a_5, k_1);
            v_1 = t;
            t = SSLsetAnnotations(v_1, d_1);
          }
        }
      else
        {
          if(match_cons(t, sym_amb_1))
            {
              a_5 = ATgetArgument(t, 0);
              {
                ATerm r_1 = NULL,y_1 = NULL,z_1 = NULL,d_2 = NULL,g_2 = NULL,l_2 = NULL,a_2 = NULL,w_1 = NULL;
                t = SSLgetAnnotations(z_4);
                r_1 = t;
                t = a_5;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_1 = ATgetFirst((ATermList) t);
                    d_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_5);
                y_1 = t;
                t = z_1;
                t = n_0(t);
                g_2 = t;
                t = (ATerm) ATinsert(CheckATermList(d_2), g_2);
                w_1 = t;
                t = SSLsetAnnotations(w_1, y_1);
                l_2 = t;
                t = (ATerm) ATmakeAppl(sym_amb_1, l_2);
                a_2 = t;
                t = SSLsetAnnotations(a_2, r_1);
              }
            }
          else
            {
              if(match_cons(t, sym_parsetree_2))
                {
                  a_5 = ATgetArgument(t, 0);
                  b_5 = ATgetArgument(t, 1);
                  {
                    ATerm y_2 = NULL,b_3 = NULL,b_2 = NULL;
                    t = SSLgetAnnotations(z_4);
                    y_2 = t;
                    t = a_5;
                    t = n_0(t);
                    b_3 = t;
                    t = (ATerm) ATmakeAppl(sym_parsetree_2, b_3, b_5);
                    b_2 = t;
                    t = SSLsetAnnotations(b_2, y_2);
                  }
                }
              else
                {
                  ATerm t_3 = NULL,w_3 = NULL,c_2 = NULL;
                  if(match_cons(t, sym_flatlex_2))
                    {
                      a_5 = ATgetArgument(t, 0);
                      b_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_4);
                  t_3 = t;
                  t = b_5;
                  t = n_0(t);
                  w_3 = t;
                  t = (ATerm) ATmakeAppl(sym_flatlex_2, a_5, w_3);
                  c_2 = t;
                  t = SSLsetAnnotations(c_2, t_3);
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
  ATerm b_0 (ATerm t)
  {
    ATerm d_6 = NULL;
    d_6 = t;
    {
      ATerm u_3 = t;
      int v_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_4 = NULL,g_4 = NULL,j_4 = NULL;
          t = SSL_is_string(d_6);
          j_4 = t;
          t = s_69(t);
          g_4 = t;
          t = (ATerm) ATinsert(ATempty, j_4);
          f_4 = t;
          t = SSL_print(g_4, f_4);
          t = (ATerm) ATmakeAppl(sym__2, g_4, (ATerm) ATinsert(ATempty, j_4));
          ;
          LocalPopChoice(v_3);
        }
      else
        {
          t = u_3;
          {
            ATerm h_5 = NULL,i_5 = NULL;
            t = d_6;
            t = s_69(t);
            i_5 = t;
            t = (ATerm) ATinsert(ATempty, d_6);
            h_5 = t;
            t = SSL_printascii(i_5, h_5);
            t = (ATerm) ATmakeAppl(sym__2, i_5, (ATerm) ATinsert(ATempty, d_6));
          }
        }
    }
    return(t);
  }
  t = leaves_3_0(b_0, is_leaf_0_0, skip2_1_0, t);
  return(t);
}
ATerm skip1_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_11 = ATgetFirst((ATermList) t);
      n_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_5 = NULL,x_5 = NULL,n_2 = NULL;
        t = SSLgetAnnotations(l_11);
        p_5 = t;
        t = n_11;
        t = m_0(t);
        x_5 = t;
        t = (ATerm) ATinsert(CheckATermList(x_5), m_11);
        n_2 = t;
        t = SSLsetAnnotations(n_2, p_5);
      }
    }
  else
    {
      if(match_cons(t, sym_term_9))
        {
          m_11 = ATgetArgument(t, 0);
          n_11 = ATgetArgument(t, 1);
          k_11 = ATgetArgument(t, 2);
          a_11 = ATgetArgument(t, 3);
          b_11 = ATgetArgument(t, 4);
          f_11 = ATgetArgument(t, 5);
          g_11 = ATgetArgument(t, 6);
          h_11 = ATgetArgument(t, 7);
          j_11 = ATgetArgument(t, 8);
          {
            ATerm t_6 = NULL,j_7 = NULL,k_7 = NULL,n_7 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(l_11);
            t_6 = t;
            t = f_11;
            t = m_0(t);
            j_7 = t;
            t = g_11;
            t = m_0(t);
            k_7 = t;
            t = h_11;
            t = m_0(t);
            n_7 = t;
            t = (ATerm) ATmakeAppl(sym_term_9, m_11, n_11, k_11, a_11, b_11, j_7, k_7, n_7, j_11);
            o_2 = t;
            t = SSLsetAnnotations(o_2, t_6);
          }
        }
      else
        {
          if(match_cons(t, sym_appl_3))
            {
              m_11 = ATgetArgument(t, 0);
              n_11 = ATgetArgument(t, 1);
              k_11 = ATgetArgument(t, 2);
              {
                ATerm w_8 = NULL,a_9 = NULL,r_2 = NULL;
                t = SSLgetAnnotations(l_11);
                w_8 = t;
                t = k_11;
                t = map_1_0(m_0, t);
                a_9 = t;
                t = (ATerm) ATmakeAppl(sym_appl_3, m_11, n_11, a_9);
                r_2 = t;
                t = SSLsetAnnotations(r_2, w_8);
              }
            }
          else
            {
              if(match_cons(t, sym_list_3))
                {
                  m_11 = ATgetArgument(t, 0);
                  n_11 = ATgetArgument(t, 1);
                  k_11 = ATgetArgument(t, 2);
                  {
                    ATerm l_10 = NULL,s_10 = NULL,s_2 = NULL;
                    t = SSLgetAnnotations(l_11);
                    l_10 = t;
                    t = k_11;
                    t = map_1_0(m_0, t);
                    s_10 = t;
                    t = (ATerm) ATmakeAppl(sym_list_3, m_11, n_11, s_10);
                    s_2 = t;
                    t = SSLsetAnnotations(s_2, l_10);
                  }
                }
              else
                {
                  ATerm o_11 = NULL,t_11 = NULL,u_2 = NULL;
                  if(match_cons(t, sym_lex_2))
                    {
                      m_11 = ATgetArgument(t, 0);
                      n_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_11);
                  o_11 = t;
                  t = m_11;
                  t = m_0(t);
                  t_11 = t;
                  t = (ATerm) ATmakeAppl(sym_lex_2, t_11, n_11);
                  u_2 = t;
                  t = SSLsetAnnotations(u_2, o_11);
                }
            }
        }
    }
  return(t);
}
ATerm leaves_3_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_12 (ATerm t)
  {
    ATerm y_3 = t;
    int a_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_73(t);
        t = u_73(t);
        ;
        LocalPopChoice(a_4);
      }
    else
      {
        t = y_3;
        {
          ATerm b_4 = t;
          int c_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_73(g_12, t);
              ;
              LocalPopChoice(c_4);
            }
          else
            {
              t = b_4;
              t = SRTS_all(g_12, t);
            }
        }
      }
    return(t);
  }
  t = g_12(t);
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  t = SSL_is_string(c_13);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm e_4 = t;
  int h_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_0 (ATerm t)
      {
        ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
        y_12 = t;
        t = r_69(t);
        x_12 = t;
        t = (ATerm) ATinsert(ATempty, y_12);
        w_12 = t;
        t = SSL_print(x_12, w_12);
        t = (ATerm) ATmakeAppl(sym__2, x_12, (ATerm) ATinsert(ATempty, y_12));
        return(t);
      }
      ATerm i_4 = t;
      int k_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,u_12 = NULL,v_12 = NULL,x_3 = NULL;
          v_12 = t;
          if(match_cons(t, sym_term_9))
            {
              j_12 = ATgetArgument(t, 0);
              k_12 = ATgetArgument(t, 1);
              m_12 = ATgetArgument(t, 2);
              n_12 = ATgetArgument(t, 3);
              o_12 = ATgetArgument(t, 4);
              p_12 = ATgetArgument(t, 5);
              q_12 = ATgetArgument(t, 6);
              r_12 = ATgetArgument(t, 7);
              u_12 = ATgetArgument(t, 8);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_12);
          i_12 = t;
          t = (ATerm) ATmakeAppl(sym_term_9, j_12, k_12, m_12, n_12, o_12, p_12, q_12, r_12, u_12);
          x_3 = t;
          t = SSLsetAnnotations(x_3, i_12);
          ;
          LocalPopChoice(k_4);
        }
      else
        {
          t = i_4;
          if(match_cons(t, sym_appl_3))
            {
              ATerm l_4 = ATgetArgument(t, 0);
              if(match_cons(l_4, sym_prod_9))
                {
                  ATerm q_4 = ATgetArgument(l_4, 0);
                  if(match_cons(q_4, sym_id_1))
                    {
                      ATerm l_5 = ATgetArgument(q_4, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm t_4 = ATgetArgument(l_4, 1);
                  }
                  {
                    ATerm u_4 = ATgetArgument(l_4, 2);
                  }
                  {
                    ATerm w_4 = ATgetArgument(l_4, 3);
                  }
                  {
                    ATerm y_4 = ATgetArgument(l_4, 4);
                  }
                  {
                    ATerm d_5 = ATgetArgument(l_4, 5);
                  }
                  {
                    ATerm f_5 = ATgetArgument(l_4, 6);
                  }
                  {
                    ATerm g_5 = ATgetArgument(l_4, 7);
                  }
                  {
                    ATerm k_5 = ATgetArgument(l_4, 8);
                  }
                }
              else
                _fail(t);
              {
                ATerm o_4 = ATgetArgument(t, 1);
              }
              {
                ATerm p_4 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
        }
      t = leaves_3_0(e_0, f_0, skip1_1_0, t);
      ;
      LocalPopChoice(h_4);
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
            int q_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_13 = NULL,e_13 = NULL,g_13 = NULL,h_13 = NULL,z_3 = NULL;
                h_13 = t;
                if(match_cons(t, sym_parsetree_2))
                  {
                    e_13 = ATgetArgument(t, 0);
                    g_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_13);
                d_13 = t;
                t = (ATerm) ATmakeAppl(sym_parsetree_2, e_13, g_13);
                z_3 = t;
                t = SSLsetAnnotations(z_3, d_13);
                ;
                LocalPopChoice(q_5);
              }
            else
              {
                t = o_5;
                {
                  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,m_13 = NULL,d_4 = NULL;
                  m_13 = t;
                  if(match_cons(t, sym_appl_2))
                    {
                      j_13 = ATgetArgument(t, 0);
                      k_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_13);
                  i_13 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, j_13, k_13);
                  d_4 = t;
                  t = SSLsetAnnotations(d_4, i_13);
                }
              }
            t = asfix_yield2_1_0(r_69, t);
            ;
            LocalPopChoice(n_5);
          }
        else
          {
            t = m_5;
            {
              ATerm r_5 = t;
              int s_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1_0(r_69, t);
                  ;
                  LocalPopChoice(s_5);
                }
              else
                {
                  t = r_5;
                  {
                    ATerm n_13 = NULL,q_13 = NULL,r_13 = NULL;
                    t = term_u_5;
                    q_13 = t;
                    t = (ATerm) ATinsert(ATempty, term_v_5);
                    r_13 = t;
                    t = SSL_printnl(q_13, r_13);
                    t = term_w_5;
                    n_13 = t;
                    t = SSL_exit(n_13);
                    t = (ATerm) ATinsert(ATempty, term_v_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_14 (ATerm g_14, ATerm t)
{
  t = SSL_fclose(g_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  q_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_14 = ATgetArgument(t, 0);
      {
        ATerm y_5 = t;
        int z_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_14);
            ;
            LocalPopChoice(z_5);
          }
        else
          {
            t = y_5;
            t = s_14(q_14, t);
          }
      }
    }
  else
    {
      t = s_14(q_14, t);
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
  ATerm u_14 = NULL;
  t = SSL_fopen(p_43, q_43);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_stdin_stream();
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
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
ATerm p_17 (ATerm l_15, ATerm t)
{
  ATerm m_15 = NULL;
  t = SSL_explode_term(l_15);
  if(match_cons(t, sym__2))
    {
      ATerm a_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_6 = ATgetArgument(t, 1);
        if(((ATgetType(b_6) == AT_LIST) && !(ATisEmpty(b_6))))
          {
            m_15 = ATgetFirst((ATermList) b_6);
            {
              ATerm c_6 = (ATerm) ATgetNext((ATermList) b_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm q_17 (ATerm r_15, ATerm s_15, ATerm t_15, ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,y_15 = NULL,d_16 = NULL,m_4 = NULL;
  t = SSLgetAnnotations(t_15);
  y_15 = t;
  t = r_15;
  if(match_cons(t, sym_Path_1))
    {
      d_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_16, s_15);
  m_4 = t;
  t = SSLsetAnnotations(m_4, y_15);
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_3(u_15, v_15, t);
  return(t);
}
ATerm s_17 (ATerm i_16, ATerm o_16, ATerm t_16, ATerm t)
{
  ATerm u_16 = NULL,x_16 = NULL,y_16 = NULL,h_17 = NULL,n_4 = NULL;
  t = SSLgetAnnotations(t_16);
  y_16 = t;
  t = SSL_is_string(i_16);
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_17, o_16);
  n_4 = t;
  t = SSLsetAnnotations(n_4, y_16);
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_3(u_16, x_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_17 = NULL,l_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_6 = ATgetArgument(t, 0);
      ATerm f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_17 = t;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
      {
        ATerm g_6 = t;
        int h_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_17(j_17, t);
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
                  t = q_17(l_17, m_17, j_17, t);
                  ;
                  LocalPopChoice(j_6);
                }
              else
                {
                  t = i_6;
                  t = s_17(l_17, m_17, j_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_17(j_17, t);
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_17 = NULL;
      w_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_17, term_n_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      t = debug_1_0(p_0, t);
      _fail(t);
    }
  u_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_3(v_17, t);
  t_17 = t;
  t = u_17;
  t = fclose_0_0(t);
  t = t_17;
  return(t);
}
ATerm fetch_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  ATerm r_19 (ATerm t)
  {
    ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
    o_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_19 = ATgetFirst((ATermList) t);
        q_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_6 = t;
      int p_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_12 = NULL,f_13 = NULL,r_4 = NULL;
          t = SSLgetAnnotations(o_19);
          z_12 = t;
          t = p_19;
          t = s_77(t);
          f_13 = t;
          t = (ATerm) ATinsert(CheckATermList(q_19), f_13);
          r_4 = t;
          t = SSLsetAnnotations(r_4, z_12);
          ;
          LocalPopChoice(p_6);
        }
      else
        {
          t = o_6;
          {
            ATerm w_13 = NULL,b_14 = NULL,s_4 = NULL;
            t = SSLgetAnnotations(o_19);
            w_13 = t;
            t = q_19;
            t = r_19(t);
            b_14 = t;
            t = (ATerm) ATinsert(CheckATermList(b_14), p_19);
            s_4 = t;
            t = SSLsetAnnotations(s_4, w_13);
          }
        }
    }
    return(t);
  }
  t = r_19(t);
  return(t);
}
ATerm k_20 (ATerm a_20, ATerm t)
{
  t = a_20;
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
    t = debug_1_0(r_0, t);
    t = (ATerm) ATmakeAppl(sym__2, a_20, term_v_6);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm l_20 (ATerm c_20, ATerm d_20, ATerm e_20, ATerm t)
{
  t = SSL_open_file(c_20, d_20);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_20(h_20, t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            t = l_20(i_20, j_20, h_20, t);
          }
      }
    }
  else
    {
      t = k_20(h_20, t);
    }
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  if(match_string(t, "-k"))
    {
      t = n_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_20;
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  t = SSL_string_to_int(o_20);
  p_20 = t;
  t = term_z_6;
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, p_20);
  t = m_3(q_20, p_20, t);
  t = o_20;
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
  ATerm s_20 = NULL;
  s_20 = t;
  if(match_string(t, "-S"))
    {
      t = s_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_20;
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  t = term_b_7;
  t_20 = t;
  t = term_c_7;
  u_20 = t;
  t = term_d_7;
  t = m_3(t_20, u_20, t);
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
ATerm f_1 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  t = SSL_string_to_int(v_20);
  w_20 = t;
  t = term_b_7;
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, w_20);
  t = m_3(x_20, w_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_20);
  return(t);
}
ATerm g_1 (ATerm t)
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
  ATerm y_20 = NULL,z_20 = NULL;
  t = term_h_7;
  y_20 = t;
  t = term_i_7;
  z_20 = t;
  t = term_l_7;
  t = m_3(y_20, z_20, t);
  t = term_m_7;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_o_7;
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
            t = ArgOption_3_0(b_1, f_1, g_1, t);
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
ATerm m_3 (ATerm e_48, ATerm f_48, ATerm t)
{
  ATerm a_21 = NULL;
  t = term_t_7;
  a_21 = t;
  t = SSL_table_put(a_21, e_48, f_48);
  t = (ATerm) ATmakeAppl(sym__3, term_t_7, e_48, f_48);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
      t = term_i_7;
      t = d_0(t);
      f_21 = t;
      t = term_u_7;
      g_21 = t;
      t = term_v_7;
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_7, term_v_7, f_21);
      t = k_3(g_21, h_21, f_21, t);
      _fail(t);
    }
  else
    {
      ATerm k_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_21 = ATgetFirst((ATermList) t);
          e_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_21;
      t = a_0(t);
      t = term_i_7;
      t = c_0(t);
      k_21 = t;
      t = (ATerm) ATinsert(CheckATermList(e_21), k_21);
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  if(match_string(t, "-o"))
    {
      t = m_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_21;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  n_21 = t;
  t = term_w_7;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, n_21);
  t = m_3(o_21, n_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_21);
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
ATerm k_3 (ATerm c_53, ATerm d_53, ATerm b_53, ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_53, d_53);
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
        t = (ATerm) ATmakeAppl(sym__2, c_53, d_53);
        t = j_3(c_53, d_53, t);
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        t = (ATerm) ATempty;
      }
    r_21 = t;
    t = (ATerm) ATinsert(CheckATermList(r_21), b_53);
    s_21 = t;
    t = SSL_table_put(c_53, d_53, s_21);
    t = q_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
      t = term_i_7;
      t = l_0(t);
      d_22 = t;
      t = term_u_7;
      e_22 = t;
      t = term_v_7;
      f_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_7, term_v_7, d_22);
      t = k_3(e_22, f_22, d_22, t);
      _fail(t);
    }
  else
    {
      ATerm j_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_21 = ATgetFirst((ATermList) t);
          a_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_22 = ATgetFirst((ATermList) t);
          c_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_21;
      t = j_0(t);
      t = b_22;
      t = k_0(t);
      j_22 = t;
      t = (ATerm) ATinsert(CheckATermList(c_22), j_22);
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  if(match_string(t, "-i"))
    {
      t = l_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_22;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  t = term_c_8;
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, m_22);
  t = m_3(n_22, m_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_22);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_d_8;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_1, x_1, e_2, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_22 = ATgetFirst((ATermList) t);
      q_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_22 = NULL,v_22 = NULL;
        ATerm f_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_22)), not_null(v_22));
          return(t);
        }
        t = not_null(q_22);
        t = h_0(t);
        if(((u_22 != NULL) && (u_22 != t)))
          _fail(t);
        else
          u_22 = t;
        t = not_null(p_22);
        t = g_0(t);
        if(((v_22 != NULL) && (v_22 != t)))
          _fail(t);
        else
          v_22 = t;
        t = not_null(q_22);
        t = reverse_acc_2_0(g_0, f_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_7;
      t = h_0(t);
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm i_23 = NULL;
  i_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_23), term_e_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_8;
      t = get_config_0_0(t);
      z_22 = t;
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm h_2 (ATerm t)
        {
          ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,v_4 = NULL;
          e_23 = t;
          if(match_cons(t, sym_Program_1))
            {
              d_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_23);
          c_23 = t;
          t = d_23;
          if(((z_22 != NULL) && (z_22 != t)))
            _fail(t);
          else
            z_22 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, d_23);
          v_4 = t;
          t = SSLsetAnnotations(v_4, c_23);
          return(t);
        }
        t = fetch_1_0(h_2, t);
      }
    }
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_8), not_null(z_22)), term_k_8);
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
    if(((a_23 != NULL) && (a_23 != t)))
      _fail(t);
    else
      a_23 = t;
    t = term_v_7;
    if(((b_23 != NULL) && (b_23 != t)))
      _fail(t);
    else
      b_23 = t;
    t = term_n_8;
    t = j_3(not_null(a_23), not_null(b_23), t);
    t = reverse_acc_2_0(_id, i_2, t);
    t = map_1_0(j_2, t);
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
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_8 = ATgetFirst((ATermList) t);
                ATerm x_8 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_23;
          }
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        t = (ATerm) ATinsert(ATempty, m_23);
      }
    n_23 = t;
    t = term_y_8;
    o_23 = t;
    t = SSL_printnl(o_23, n_23);
    t = m_23;
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
ATerm i_3 (ATerm d_38, ATerm e_38, ATerm t)
{
  t = SSL_strcat(d_38, e_38);
  return(t);
}
ATerm debug_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  t_23 = t;
  t = x_89(t);
  u_23 = t;
  t = term_u_5;
  v_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_23), u_23);
  w_23 = t;
  t = SSL_printnl(v_23, w_23);
  t = t_23;
  return(t);
}
ATerm map_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm l_24 (ATerm t)
  {
    ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
    i_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_24;
      }
    else
      {
        ATerm o_14 = NULL,x_14 = NULL,y_14 = NULL,x_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_24 = ATgetFirst((ATermList) t);
            k_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_24);
        o_14 = t;
        t = j_24;
        t = i_77(t);
        x_14 = t;
        t = k_24;
        t = l_24(t);
        y_14 = t;
        t = (ATerm) ATinsert(CheckATermList(y_14), x_14);
        x_4 = t;
        t = SSLsetAnnotations(x_4, o_14);
      }
    return(t);
  }
  t = l_24(t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm z_8 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = z_8;
    }
  return(t);
}
ATerm m_2 (ATerm t)
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
      ATerm t_24 = NULL;
      t_24 = t;
      t = SSL_is_string(t_24);
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
            t = map_1_0(k_2, t);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
              z_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_25 = ATgetArgument(t, 0);
                  t = a_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_25 = ATgetArgument(t, 0);
                      t = a_25;
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
                            t = debug_1_0(m_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_25 = NULL,g_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_25 = ATgetArgument(t, 0);
                          b_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_25;
                      t = eval_config_0_0(t);
                      f_25 = t;
                      t = b_25;
                      t = eval_config_0_0(t);
                      g_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_25, g_25);
                      t = i_3(f_25, g_25, t);
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
  ATerm k_25 = NULL,l_25 = NULL;
  k_25 = t;
  t = term_t_7;
  l_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, k_25);
  t = j_3(l_25, k_25, t);
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_25 = NULL,n_25 = NULL;
        t = eval_config_0_0(t);
        m_25 = t;
        t = term_t_7;
        n_25 = t;
        t = SSL_table_put(n_25, k_25, m_25);
        t = m_25;
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
ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  t = term_l_9;
  q_25 = t;
  t = term_i_7;
  r_25 = t;
  t = term_m_9;
  t = m_3(q_25, r_25, t);
  return(t);
}
ATerm t_2 (ATerm t)
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
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t = term_l_9;
  u_25 = t;
  t = term_i_7;
  v_25 = t;
  t = term_m_9;
  t = m_3(u_25, v_25, t);
  t = term_o_9;
  s_25 = t;
  t = term_i_7;
  t_25 = t;
  t = term_p_9;
  t = m_3(s_25, t_25, t);
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
      t = Option_3_0(p_2, q_2, t_2, t);
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
ATerm Cons_2_0 (ATerm j_62 (ATerm), ATerm k_62 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,c_26 = NULL,d_26 = NULL,c_5 = NULL;
  d_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_25 = ATgetFirst((ATermList) t);
      y_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_26);
  w_25 = t;
  t = x_25;
  t = j_62(t);
  z_25 = t;
  t = y_25;
  t = k_62(t);
  c_26 = t;
  t = (ATerm) ATinsert(CheckATermList(c_26), z_25);
  c_5 = t;
  t = SSLsetAnnotations(c_5, w_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,n_26 = NULL,o_26 = NULL,e_5 = NULL;
  if(((i_26 != NULL) && (i_26 != t)))
    _fail(t);
  else
    i_26 = t;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_9;
        t = c_96(t);
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
      }
    t = not_null(i_26);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_26 != NULL) && (k_26 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_26 = ATgetFirst((ATermList) t);
        if(((l_26 != NULL) && (l_26 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          l_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(i_26));
    if(((j_26 != NULL) && (j_26 != t)))
      _fail(t);
    else
      j_26 = t;
    t = term_h_8;
    if(((o_26 != NULL) && (o_26 != t)))
      _fail(t);
    else
      o_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_8, not_null(k_26));
    t = m_3(not_null(o_26), not_null(k_26), t);
    t = not_null(l_26);
    {
      ATerm y_26 (ATerm t)
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_9 = t;
            int a_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_26 = NULL;
                r_26 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_26;
                ;
                LocalPopChoice(a_10);
              }
            else
              {
                t = z_9;
                t = c_96(t);
                t = Cons_2_0(_id, y_26, t);
              }
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            {
              ATerm u_26 = NULL,v_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_26 = ATgetFirst((ATermList) t);
                  v_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_26), (ATerm) ATmakeAppl(sym_Undefined_1, u_26));
            }
          }
        return(t);
      }
      t = y_26(t);
      if(((n_26 != NULL) && (n_26 != t)))
        _fail(t);
      else
        n_26 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(n_26)), (ATerm) ATmakeAppl(sym_Program_1, not_null(k_26)));
      if(((e_5 != NULL) && (e_5 != t)))
        _fail(t);
      else
        e_5 = t;
      t = SSLsetAnnotations(not_null(e_5), not_null(j_26));
    }
  }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  if(match_string(t, "--help"))
    {
      t = k_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_27;
        }
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  t = term_b_10;
  l_27 = t;
  t = term_i_7;
  m_27 = t;
  t = term_c_10;
  t = m_3(l_27, m_27, t);
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
ATerm parse_options_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  if(((f_27 != NULL) && (f_27 != t)))
    _fail(t);
  else
    f_27 = t;
  t = term_u_7;
  if(((h_27 != NULL) && (h_27 != t)))
    _fail(t);
  else
    h_27 = t;
  t = term_v_7;
  if(((i_27 != NULL) && (i_27 != t)))
    _fail(t);
  else
    i_27 = t;
  t = (ATerm) ATempty;
  if(((j_27 != NULL) && (j_27 != t)))
    _fail(t);
  else
    j_27 = t;
  t = SSL_table_put(not_null(h_27), not_null(i_27), not_null(j_27));
  t = not_null(f_27);
  {
    ATerm z_2 (ATerm t)
    {
      ATerm f_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_96(t);
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
                t = Option_3_0(a_3, c_3, d_3, t);
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
    t = parse_options_p__1_0(z_2, t);
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_27 = NULL;
          t_27 = t;
          {
            ATerm m_10 = t;
            int n_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_15 = NULL;
                t = t_27;
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
                  t = t_27;
                  t = default_system_usage_0_0(t);
                  t = term_c_7;
                  z_15 = t;
                  t = SSL_exit(z_15);
                }
                ;
                LocalPopChoice(n_10);
              }
            else
              {
                t = m_10;
                {
                  ATerm h_16 = NULL;
                  t = term_l_9;
                  t = get_config_0_0(t);
                  t = t_27;
                  t = default_system_about_0_0(t);
                  t = term_c_7;
                  h_16 = t;
                  t = SSL_exit(h_16);
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
                ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
                ATerm h_3 (ATerm t)
                {
                  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,j_5 = NULL;
                  z_27 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_27);
                  x_27 = t;
                  t = y_27;
                  if(((d_27 != NULL) && (d_27 != t)))
                    _fail(t);
                  else
                    d_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_27);
                  j_5 = t;
                  t = SSLsetAnnotations(j_5, x_27);
                  return(t);
                }
                t = fetch_1_0(h_3, t);
                t = term_u_5;
                if(((v_27 != NULL) && (v_27 != t)))
                  _fail(t);
                else
                  v_27 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_27)), term_t_10);
                if(((w_27 != NULL) && (w_27 != t)))
                  _fail(t);
                else
                  w_27 = t;
                t = SSL_printnl(not_null(v_27), not_null(w_27));
                t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_27)), term_t_10));
                t = default_system_usage_0_0(t);
                t = term_w_5;
                if(((u_27 != NULL) && (u_27 != t)))
                  _fail(t);
                else
                  u_27 = t;
                t = SSL_exit(not_null(u_27));
                ;
                LocalPopChoice(r_10);
              }
            else
              {
                t = q_10;
              }
          }
        }
      if(((e_27 != NULL) && (e_27 != t)))
        _fail(t);
      else
        e_27 = t;
      t = term_u_7;
      if(((g_27 != NULL) && (g_27 != t)))
        _fail(t);
      else
        g_27 = t;
      t = SSL_table_destroy(not_null(g_27));
      t = not_null(e_27);
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
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_3, o_3, p_3, t);
                  ;
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = y_10;
                  {
                    ATerm c_11 = t;
                    int d_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(d_11);
                      }
                    else
                      {
                        t = c_11;
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
  ATerm m_28 = NULL,n_28 = NULL;
  t = term_e_11;
  m_28 = t;
  t = term_i_7;
  n_28 = t;
  t = term_i_11;
  t = m_3(m_28, n_28, t);
  t = term_p_11;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,t_5 = NULL;
  t = parse_options_1_0(l_3, t);
  if(((f_28 != NULL) && (f_28 != t)))
    _fail(t);
  else
    f_28 = t;
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((e_28 != NULL) && (e_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_3, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_28), term_v_6);
        t = open_file_0_0(t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = term_y_8;
        if(((e_28 != NULL) && (e_28 != t)))
          _fail(t);
        else
          e_28 = t;
      }
    t = not_null(f_28);
    {
      ATerm u_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_28 != NULL) && (h_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_3, t);
          ;
          LocalPopChoice(v_11);
        }
      else
        {
          t = u_11;
          t = term_w_11;
          if(((h_28 != NULL) && (h_28 != t)))
            _fail(t);
          else
            h_28 = t;
        }
      t = not_null(h_28);
      t = ReadFromFile_0_0(t);
      if(((i_28 != NULL) && (i_28 != t)))
        _fail(t);
      else
        i_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), not_null(i_28));
      if(((l_28 != NULL) && (l_28 != t)))
        _fail(t);
      else
        l_28 = t;
      if(match_cons(t, sym__2))
        {
          ATerm x_11 = ATgetArgument(t, 0);
          ATerm y_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(l_28));
      if(((j_28 != NULL) && (j_28 != t)))
        _fail(t);
      else
        j_28 = t;
      t = not_null(i_28);
      {
        ATerm s_3 (ATerm t)
        {
          t = not_null(e_28);
          return(t);
        }
        t = asfix_yield_1_0(s_3, t);
        if(((k_28 != NULL) && (k_28 != t)))
          _fail(t);
        else
          k_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), not_null(k_28));
        if(((t_5 != NULL) && (t_5 != t)))
          _fail(t);
        else
          t_5 = t;
        t = SSLsetAnnotations(not_null(t_5), not_null(j_28));
        t = term_c_7;
        if(((g_28 != NULL) && (g_28 != t)))
          _fail(t);
        else
          g_28 = t;
        t = SSL_exit(not_null(g_28));
      }
    }
  }
  return(t);
}
