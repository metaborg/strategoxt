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
ATerm term_e_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_k_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_w_5;
void init_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__3, term_t_11, term_u_11, term_r_8);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_stdout_0);
}
ATerm fatal_error_0_0 (ATerm);
ATerm literal_1_0 (ATerm c_63 (ATerm), ATerm);
ATerm flatlex_2_0 (ATerm n_61 (ATerm), ATerm o_61 (ATerm), ATerm);
ATerm amb_1_0 (ATerm k_61 (ATerm), ATerm);
ATerm skip2_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm is_leaf_0_0 (ATerm);
ATerm asfix_yield2_1_0 (ATerm z_62 (ATerm), ATerm);
ATerm appl_2_0 (ATerm l_61 (ATerm), ATerm m_61 (ATerm), ATerm);
ATerm parsetree_2_0 (ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm);
ATerm is_asfix2_0_0 (ATerm);
ATerm lex_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm);
ATerm list_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm list_3_0 (ATerm n_62 (ATerm), ATerm o_62 (ATerm), ATerm p_62 (ATerm), ATerm);
ATerm appl_3_0 (ATerm k_62 (ATerm), ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm);
ATerm at_tail_1_0 (ATerm d_71 (ATerm), ATerm);
ATerm skip1_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm leaves_3_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm d_67 (ATerm (ATerm), ATerm), ATerm);
ATerm asfix_yield1_1_0 (ATerm b_63 (ATerm), ATerm);
ATerm term_9_0 (ATerm r_61 (ATerm), ATerm s_61 (ATerm), ATerm t_61 (ATerm), ATerm u_61 (ATerm), ATerm v_61 (ATerm), ATerm w_61 (ATerm), ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm z_61 (ATerm), ATerm);
ATerm is_asfix1_0_0 (ATerm);
ATerm asfix_yield_1_0 (ATerm y_62 (ATerm), ATerm);
ATerm _2_0 (ATerm h_54 (ATerm), ATerm i_54 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm obsolete_1_0 (ATerm u_82 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_70 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm g_61 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_61 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_71 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm n_82 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_70 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm e_63 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm g_89 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm e_89 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm d_89 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm g_2 = NULL;
  g_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), g_2);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = g_2;
  return(t);
}
ATerm literal_1_0 (ATerm c_63 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL;
  h_2 = t;
  t = SSL_is_string(h_2);
  {
    ATerm c_0 (ATerm t)
    {
      ATerm l_2 = NULL;
      l_2 = t;
      t = (ATerm) ATinsert(ATempty, l_2);
      return(t);
    }
    t = split_2_0(c_63, c_0, t);
    if(match_cons(t, sym__2))
      {
        j_2 = ATgetArgument(t, 0);
        k_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_print(j_2, k_2);
    t = (ATerm) ATmakeAppl(sym__2, j_2, k_2);
  }
  return(t);
}
ATerm flatlex_2_0 (ATerm n_61 (ATerm), ATerm o_61 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,s_2 = NULL,t_2 = NULL;
  t_2 = t;
  if(match_cons(t, sym_flatlex_2))
    {
      n_2 = ATgetArgument(t, 0);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_2);
  m_2 = t;
  t = n_2;
  t = n_61(t);
  p_2 = t;
  t = o_2;
  t = o_61(t);
  s_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_flatlex_2, p_2, s_2), m_2);
  return(t);
}
ATerm amb_1_0 (ATerm k_61 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,p_3 = NULL,x_3 = NULL,d_4 = NULL;
  d_4 = t;
  if(match_cons(t, sym_amb_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_4);
  h_3 = t;
  t = p_3;
  t = k_61(t);
  x_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, x_3), h_3);
  return(t);
}
ATerm skip2_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_4 = t;
  int c_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_0 (ATerm t)
      {
        t = at_tail_1_0(n_0, t);
        return(t);
      }
      t = at_tail_1_0(e_0, t);
      ;
      LocalPopChoice(c_4);
    }
  else
    {
      t = b_4;
      {
        ATerm e_4 = t;
        int f_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_0 (ATerm t)
            {
              t = list_1_0(n_0, t);
              return(t);
            }
            t = appl_2_0(_id, i_0, t);
            ;
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
                  ATerm o_0 (ATerm t)
                  {
                    t = Cons_2_0(n_0, _id, t);
                    return(t);
                  }
                  t = amb_1_0(o_0, t);
                  ;
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
                        t = parsetree_2_0(n_0, _id, t);
                        ;
                        LocalPopChoice(j_4);
                      }
                    else
                      {
                        t = i_4;
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
ATerm asfix_yield2_1_0 (ATerm z_62 (ATerm), ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm k_4 = t;
    int l_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_5 = NULL,p_0 = NULL,q_0 = NULL;
        u_5 = t;
        t = SSL_is_string(u_5);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm r_0 = NULL;
            r_0 = t;
            t = (ATerm) ATinsert(ATempty, r_0);
            return(t);
          }
          t = split_2_0(z_62, t_0, t);
          if(match_cons(t, sym__2))
            {
              p_0 = ATgetArgument(t, 0);
              q_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_print(p_0, q_0);
          t = (ATerm) ATmakeAppl(sym__2, p_0, q_0);
        }
        ;
        LocalPopChoice(l_4);
      }
    else
      {
        t = k_4;
        {
          ATerm e_6 = NULL,f_6 = NULL;
          ATerm u_0 (ATerm t)
          {
            ATerm g_6 = NULL;
            g_6 = t;
            t = (ATerm) ATinsert(ATempty, g_6);
            return(t);
          }
          t = split_2_0(z_62, u_0, t);
          if(match_cons(t, sym__2))
            {
              e_6 = ATgetArgument(t, 0);
              f_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_printascii(e_6, f_6);
          t = (ATerm) ATmakeAppl(sym__2, e_6, f_6);
        }
      }
    return(t);
  }
  t = leaves_3_0(s_0, is_leaf_0_0, skip2_1_0, t);
  return(t);
}
ATerm appl_2_0 (ATerm l_61 (ATerm), ATerm m_61 (ATerm), ATerm t)
{
  ATerm m_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,x_6 = NULL;
  x_6 = t;
  if(match_cons(t, sym_appl_2))
    {
      r_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_6);
  m_6 = t;
  t = r_6;
  t = l_61(t);
  t_6 = t;
  t = s_6;
  t = m_61(t);
  u_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, t_6, u_6), m_6);
  return(t);
}
ATerm parsetree_2_0 (ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
  o_7 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      g_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_7);
  f_7 = t;
  t = g_7;
  t = i_61(t);
  m_7 = t;
  t = l_7;
  t = j_61(t);
  n_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, m_7, n_7), f_7);
  return(t);
}
ATerm is_asfix2_0_0 (ATerm t)
{
  ATerm m_4 = t;
  int n_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = parsetree_2_0(_id, _id, t);
      ;
      LocalPopChoice(n_4);
    }
  else
    {
      t = m_4;
      t = appl_2_0(_id, _id, t);
    }
  return(t);
}
ATerm lex_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,c_8 = NULL,e_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL;
  k_8 = t;
  if(match_cons(t, sym_lex_2))
    {
      c_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_8);
  a_8 = t;
  t = c_8;
  t = q_62(t);
  i_8 = t;
  t = e_8;
  t = r_62(t);
  j_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_2, i_8, j_8), a_8);
  return(t);
}
ATerm list_1_0 (ATerm s_70 (ATerm), ATerm t)
{
  ATerm h_9 (ATerm t)
  {
    ATerm o_4 = t;
    int p_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_4);
      }
    else
      {
        t = o_4;
        t = Cons_2_0(s_70, h_9, t);
      }
    return(t);
  }
  t = h_9(t);
  return(t);
}
ATerm list_3_0 (ATerm n_62 (ATerm), ATerm o_62 (ATerm), ATerm p_62 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  p_9 = t;
  if(match_cons(t, sym_list_3))
    {
      j_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
      l_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_9);
  i_9 = t;
  t = j_9;
  t = n_62(t);
  m_9 = t;
  t = k_9;
  t = o_62(t);
  n_9 = t;
  t = l_9;
  t = p_62(t);
  o_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_list_3, m_9, n_9, o_9), i_9);
  return(t);
}
ATerm appl_3_0 (ATerm k_62 (ATerm), ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
  a_10 = t;
  if(match_cons(t, sym_appl_3))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      w_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_10);
  t_9 = t;
  t = u_9;
  t = k_62(t);
  x_9 = t;
  t = v_9;
  t = l_62(t);
  y_9 = t;
  t = w_9;
  t = m_62(t);
  z_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_3, x_9, y_9, z_9), t_9);
  return(t);
}
ATerm at_tail_1_0 (ATerm d_71 (ATerm), ATerm t)
{
  t = Cons_2_0(_id, d_71, t);
  return(t);
}
ATerm skip1_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm q_4 = t;
  int r_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = at_tail_1_0(m_0, t);
      ;
      LocalPopChoice(r_4);
    }
  else
    {
      t = q_4;
      {
        ATerm s_4 = t;
        int t_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_9_0(_id, _id, _id, _id, _id, m_0, m_0, m_0, _id, t);
            ;
            LocalPopChoice(t_4);
          }
        else
          {
            t = s_4;
            {
              ATerm u_4 = t;
              int v_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_0 (ATerm t)
                  {
                    t = list_1_0(m_0, t);
                    return(t);
                  }
                  t = appl_3_0(_id, _id, v_0, t);
                  ;
                  LocalPopChoice(v_4);
                }
              else
                {
                  t = u_4;
                  {
                    ATerm w_4 = t;
                    int x_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_0 (ATerm t)
                        {
                          t = list_1_0(m_0, t);
                          return(t);
                        }
                        t = list_3_0(_id, _id, w_0, t);
                        ;
                        LocalPopChoice(x_4);
                      }
                    else
                      {
                        t = w_4;
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
ATerm leaves_3_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm d_67 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    ATerm y_4 = t;
    int z_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_67(t);
        t = b_67(t);
        ;
        LocalPopChoice(z_4);
      }
    else
      {
        t = y_4;
        {
          ATerm a_5 = t;
          int b_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_67(e_10, t);
              ;
              LocalPopChoice(b_5);
            }
          else
            {
              t = a_5;
              t = SRTS_all(e_10, t);
            }
        }
      }
    return(t);
  }
  t = e_10(t);
  return(t);
}
ATerm asfix_yield1_1_0 (ATerm b_63 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm f_10 = NULL,g_10 = NULL;
    ATerm b_1 (ATerm t)
    {
      ATerm h_10 = NULL;
      h_10 = t;
      t = (ATerm) ATinsert(ATempty, h_10);
      return(t);
    }
    t = split_2_0(b_63, b_1, t);
    if(match_cons(t, sym__2))
      {
        f_10 = ATgetArgument(t, 0);
        g_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_print(f_10, g_10);
    t = (ATerm) ATmakeAppl(sym__2, f_10, g_10);
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm i_10 = NULL;
    i_10 = t;
    t = SSL_is_string(i_10);
    return(t);
  }
  t = leaves_3_0(x_0, a_1, skip1_1_0, t);
  return(t);
}
ATerm term_9_0 (ATerm r_61 (ATerm), ATerm s_61 (ATerm), ATerm t_61 (ATerm), ATerm u_61 (ATerm), ATerm v_61 (ATerm), ATerm w_61 (ATerm), ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm z_61 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  c_11 = t;
  if(match_cons(t, sym_term_9))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
      m_10 = ATgetArgument(t, 2);
      n_10 = ATgetArgument(t, 3);
      o_10 = ATgetArgument(t, 4);
      p_10 = ATgetArgument(t, 5);
      q_10 = ATgetArgument(t, 6);
      r_10 = ATgetArgument(t, 7);
      s_10 = ATgetArgument(t, 8);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_11);
  j_10 = t;
  t = k_10;
  t = r_61(t);
  t_10 = t;
  t = l_10;
  t = s_61(t);
  u_10 = t;
  t = m_10;
  t = t_61(t);
  v_10 = t;
  t = n_10;
  t = u_61(t);
  w_10 = t;
  t = o_10;
  t = v_61(t);
  x_10 = t;
  t = p_10;
  t = w_61(t);
  y_10 = t;
  t = q_10;
  t = x_61(t);
  z_10 = t;
  t = r_10;
  t = y_61(t);
  a_11 = t;
  t = s_10;
  t = z_61(t);
  b_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_term_9, t_10, u_10, v_10, w_10, x_10, y_10, z_10, a_11, b_11), j_10);
  return(t);
}
ATerm is_asfix1_0_0 (ATerm t)
{
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_9_0(_id, _id, _id, _id, _id, _id, _id, _id, _id, t);
      ;
      LocalPopChoice(d_5);
    }
  else
    {
      t = c_5;
      {
        ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
        j_11 = t;
        if(match_cons(t, sym_appl_3))
          {
            k_11 = ATgetArgument(t, 0);
            {
              ATerm e_5 = ATgetArgument(t, 1);
            }
            {
              ATerm f_5 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_11;
        if(match_cons(t, sym_prod_9))
          {
            l_11 = ATgetArgument(t, 0);
            {
              ATerm g_5 = ATgetArgument(t, 1);
            }
            {
              ATerm h_5 = ATgetArgument(t, 2);
            }
            {
              ATerm i_5 = ATgetArgument(t, 3);
            }
            {
              ATerm j_5 = ATgetArgument(t, 4);
            }
            {
              ATerm k_5 = ATgetArgument(t, 5);
            }
            {
              ATerm l_5 = ATgetArgument(t, 6);
            }
            {
              ATerm m_5 = ATgetArgument(t, 7);
            }
            {
              ATerm n_5 = ATgetArgument(t, 8);
            }
          }
        else
          _fail(t);
        t = l_11;
        if(match_cons(t, sym_id_1))
          {
            ATerm o_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_11;
      }
    }
  return(t);
}
ATerm asfix_yield_1_0 (ATerm y_62 (ATerm), ATerm t)
{
  ATerm p_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_asfix1_0_0(t);
      t = asfix_yield1_1_0(y_62, t);
      ;
      LocalPopChoice(q_5);
    }
  else
    {
      t = p_5;
      {
        ATerm r_5 = t;
        int s_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_asfix2_0_0(t);
            t = asfix_yield2_1_0(y_62, t);
            ;
            LocalPopChoice(s_5);
          }
        else
          {
            t = r_5;
            {
              ATerm t_5 = t;
              int v_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1_0(y_62, t);
                  ;
                  LocalPopChoice(v_5);
                }
              else
                {
                  t = t_5;
                  t = (ATerm) ATinsert(ATempty, term_w_5);
                  t = fatal_error_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm _2_0 (ATerm h_54 (ATerm), ATerm i_54 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
  c_12 = t;
  if(match_cons(t, sym__2))
    {
      y_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_12);
  x_11 = t;
  t = y_11;
  t = h_54(t);
  a_12 = t;
  t = z_11;
  t = i_54(t);
  b_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, a_12, b_12), x_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_12 (ATerm n_12, ATerm t)
  {
    t = SSL_fclose(n_12);
    return(t);
  }
  ATerm q_12 = NULL,r_12 = NULL;
  r_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_12 = ATgetArgument(t, 0);
      {
        ATerm x_5 = t;
        int y_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_12);
            ;
            LocalPopChoice(y_5);
          }
        else
          {
            t = x_5;
            t = t_12(r_12, t);
          }
      }
    }
  else
    {
      t = t_12(r_12, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_12 = NULL;
  t = SSL_stdin_stream();
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  t = SSL_stdout_stream();
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_12 = NULL;
  t = SSL_stderr_stream();
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_12);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_5 = ATgetArgument(t, 0);
      ATerm a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_6 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 = NULL,z_0 = NULL;
        y_0 = t;
        t = SSL_explode_term(y_0);
        if(match_cons(t, sym__2))
          {
            ATerm d_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_6) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_6 = ATgetArgument(t, 1);
              if(((ATgetType(h_6) == AT_LIST) && !(ATisEmpty(h_6))))
                {
                  z_0 = ATgetFirst((ATermList) h_6);
                  {
                    ATerm i_6 = (ATerm) ATgetNext((ATermList) h_6);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_0;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(c_6);
      }
    else
      {
        t = b_6;
        {
          ATerm j_6 = t;
          int k_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
              ATerm c_1 (ATerm t)
              {
                ATerm e_13 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_13 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_13;
                return(t);
              }
              t = _2_0(c_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_13 = ATgetArgument(t, 0);
                  c_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_13, c_13);
              d_13 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_13);
              ;
              LocalPopChoice(k_6);
            }
          else
            {
              t = j_6;
              {
                ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
                ATerm d_1 (ATerm t)
                {
                  ATerm i_13 = NULL;
                  i_13 = t;
                  t = SSL_is_string(i_13);
                  return(t);
                }
                t = _2_0(d_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_13 = ATgetArgument(t, 0);
                    g_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_13, g_13);
                h_13 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_13);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  ATerm l_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13 = NULL;
      m_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_13, term_o_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_6);
    }
  else
    {
      t = l_6;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_p_6;
          return(t);
        }
        t = debug_1_0(e_1, t);
        _fail(t);
      }
    }
  j_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_13);
  k_13 = t;
  t = j_13;
  t = fclose_0_0(t);
  t = k_13;
  return(t);
}
ATerm split_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  t = f_78(t);
  p_13 = t;
  t = o_13;
  t = g_78(t);
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  r_13 = t;
  {
    ATerm q_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              s_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(f_1, t);
        ;
        LocalPopChoice(v_6);
      }
    else
      {
        t = q_6;
        t = term_w_6;
        s_13 = t;
      }
    t = r_13;
    {
      ATerm g_1 (ATerm t)
      {
        t = not_null(s_13);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, g_1, t);
    }
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  t = u_82(t);
  {
    ATerm h_1 (ATerm t)
    {
      t = term_y_6;
      return(t);
    }
    t = debug_1_0(h_1, t);
    t = t_13;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_14 (ATerm x_13, ATerm t)
  {
    t = x_13;
    {
      ATerm z_6 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm a_7 = ATgetArgument(t, 0);
              ATerm b_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_6;
        }
      {
        ATerm i_1 (ATerm t)
        {
          t = term_c_7;
          return(t);
        }
        t = obsolete_1_0(i_1, t);
        t = (ATerm) ATmakeAppl(sym__2, x_13, term_d_7);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm i_14 (ATerm z_13, ATerm a_14, ATerm b_14, ATerm t)
  {
    t = SSL_open_file(z_13, a_14);
    return(t);
  }
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
      {
        ATerm e_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_14(e_14, t);
            ;
            LocalPopChoice(h_7);
          }
        else
          {
            t = e_7;
            t = i_14(f_14, g_14, e_14, t);
          }
      }
    }
  else
    {
      t = h_14(e_14, t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  ATerm j_14 (ATerm t)
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_70, _id, t);
        ;
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        t = Cons_2_0(_id, j_14, t);
      }
    return(t);
  }
  t = j_14(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  t = fetch_1_0(b_88, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm l_14 = NULL;
    l_14 = t;
    if(match_string(t, "-k"))
      {
        t = l_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = l_14;
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm m_14 = NULL,n_14 = NULL;
    m_14 = t;
    t = SSL_string_to_int(m_14);
    n_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_14);
    t = m_14;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  t = ArgOption_3_0(j_1, k_1, l_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm p_14 = NULL;
        p_14 = t;
        if(match_string(t, "-S"))
          {
            t = p_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = p_14;
          }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_s_7;
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_t_7;
        return(t);
      }
      t = Option_3_0(m_1, n_1, o_1, t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm q_14 = NULL,r_14 = NULL;
              q_14 = t;
              t = SSL_string_to_int(q_14);
              r_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, q_14);
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_w_7;
              return(t);
            }
            t = ArgOption_3_0(p_1, q_1, r_1, t);
            ;
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
              ATerm s_1 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_1 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_x_7;
                return(t);
              }
              ATerm u_1 (ATerm t)
              {
                t = term_y_7;
                return(t);
              }
              t = Option_3_0(s_1, t_1, u_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm z_7 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = z_7;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm t_14 = NULL;
    t_14 = t;
    if(match_string(t, "-o"))
      {
        t = t_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = t_14;
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm u_14 = NULL;
    u_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, u_14);
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_d_8;
    return(t);
  }
  t = ArgOption_3_0(v_1, w_1, x_1, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm y_1 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_1 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_h_8;
          return(t);
        }
        ATerm a_2 (ATerm t)
        {
          t = term_l_8;
          return(t);
        }
        t = Option_3_0(y_1, z_1, a_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  x_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = x_14;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm f_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_14 = ATgetFirst((ATermList) t);
          z_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_15 = ATgetFirst((ATermList) t);
          b_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_14;
      t = j_0(t);
      t = a_15;
      t = k_0(t);
      f_15 = t;
      t = (ATerm) ATinsert(CheckATermList(b_15), f_15);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm h_15 = NULL;
    h_15 = t;
    if(match_string(t, "-i"))
      {
        t = h_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = h_15;
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm i_15 = NULL;
    i_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), i_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, i_15);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_m_8;
    return(t);
  }
  t = ArgOption_3_0(b_2, c_2, d_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_15 = ATgetFirst((ATermList) t);
      l_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_15 = NULL,q_15 = NULL;
        t = l_15;
        t = h_0(t);
        p_15 = t;
        t = k_15;
        t = g_0(t);
        q_15 = t;
        t = l_15;
        {
          ATerm e_2 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_15), q_15);
            return(t);
          }
          t = reverse_acc_2_0(g_0, e_2, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_8;
      t = h_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, f_2, t);
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm r_15 = NULL;
  t = term_r_8;
  t = f_0(t);
  r_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_8), r_15), term_s_8);
  return(t);
}
ATerm Program_1_0 (ATerm g_61 (ATerm), ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_15);
  s_15 = t;
  t = t_15;
  t = g_61(t);
  u_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_15), s_15);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_15 = NULL;
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_8;
      t = get_config_0_0(t);
      z_15 = t;
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        ATerm i_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            z_15 = t;
            return(t);
          }
          t = Program_1_0(q_2, t);
          return(t);
        }
        t = option_defined_1_0(i_2, t);
      }
    }
  {
    ATerm r_2 (ATerm t)
    {
      ATerm u_2 (ATerm t)
      {
        t = z_15;
        return(t);
      }
      t = short_description_1_0(u_2, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(r_2, t);
    t = term_x_8;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_0_0(t);
    {
      ATerm v_2 (ATerm t)
      {
        ATerm a_16 = NULL;
        a_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_16), term_y_8);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(v_2, t);
      {
        ATerm w_2 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), term_a_9), term_z_8);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(w_2, t);
      }
    }
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_61 (ATerm), ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  e_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_16);
  b_16 = t;
  t = c_16;
  t = h_61(t);
  d_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, d_16), b_16);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  j_16 = t;
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_9 = ATgetFirst((ATermList) t);
                ATerm f_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_16;
          }
        ;
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = (ATerm) ATinsert(ATempty, j_16);
      }
    k_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), k_16);
    t = j_16;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_8;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = g_9;
      {
        ATerm q_16 = NULL,r_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_16 = ATgetFirst((ATermList) t);
            r_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_16;
        {
          ATerm x_2 (ATerm t)
          {
            t = r_16;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL;
  v_16 = t;
  t = SSL_explode_term(v_16);
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_16;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_71 (ATerm), ATerm t)
{
  ATerm x_16 (ATerm t)
  {
    ATerm s_9 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_16, t);
        ;
        LocalPopChoice(b_10);
      }
    else
      {
        t = s_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_71(t);
      }
    return(t);
  }
  t = x_16(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_16;
  {
    ATerm y_2 (ATerm t)
    {
      t = y_16;
      return(t);
    }
    t = at_end_1_0(y_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_17 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm b_17 = NULL;
    b_17 = t;
    t = SSL_explode_string(b_17);
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm c_17 = NULL;
    c_17 = t;
    t = SSL_explode_string(c_17);
    return(t);
  }
  t = _2_0(z_2, a_3, t);
  t = conc_0_0(t);
  a_17 = t;
  t = SSL_implode_string(a_17);
  return(t);
}
ATerm debug_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL;
  d_17 = t;
  t = n_82(t);
  e_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_17), e_17));
  t = d_17;
  return(t);
}
ATerm map_1_0 (ATerm p_70 (ATerm), ATerm t)
{
  ATerm f_17 (ATerm t)
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = Cons_2_0(p_70, f_17, t);
      }
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_17 = NULL;
      l_17 = t;
      t = SSL_is_string(l_17);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(b_3, t);
            ;
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
              p_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_17 = ATgetArgument(t, 0);
                  t = q_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_17 = ATgetArgument(t, 0);
                      t = q_17;
                      {
                        ATerm m_11 = t;
                        int n_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(n_11);
                          }
                        else
                          {
                            t = m_11;
                            {
                              ATerm c_3 (ATerm t)
                              {
                                t = term_o_11;
                                return(t);
                              }
                              t = debug_1_0(c_3, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm v_17 = NULL,w_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_17 = ATgetArgument(t, 0);
                          r_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_17;
                      t = eval_config_0_0(t);
                      v_17 = t;
                      t = r_17;
                      t = eval_config_0_0(t);
                      w_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_17, w_17);
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
  ATerm z_17 = NULL;
  z_17 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_17);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm a_18 = NULL;
      t = eval_config_0_0(t);
      a_18 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_17, a_18);
      t = a_18;
      return(t);
    }
    t = try_1_0(d_3, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm e_63 (ATerm), ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_63(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_v_11;
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_w_11;
        return(t);
      }
      t = Option_3_0(e_3, f_3, g_3, t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm i_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_d_12;
          return(t);
        }
        ATerm k_3 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = Option_3_0(i_3, j_3, k_3, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  if(match_cons(t, sym__3))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
      f_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_18, e_18);
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_12 = ATgetArgument(t, 0);
            ATerm i_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_18, e_18);
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATempty;
      }
    g_18 = t;
    t = SSL_table_put(d_18, e_18, (ATerm) ATinsert(CheckATermList(g_18), f_18));
    t = (ATerm) ATmakeAppl(sym__3, d_18, e_18, f_18);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm l_18 = NULL;
  t = term_r_8;
  t = g_89(t);
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_12, term_k_12, l_18);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_18;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm s_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_18 = ATgetFirst((ATermList) t);
          p_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_18;
      t = a_0(t);
      t = term_r_8;
      t = b_0(t);
      s_18 = t;
      t = (ATerm) ATinsert(CheckATermList(p_18), s_18);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm u_18 = NULL;
    u_18 = t;
    if(match_string(t, "--help"))
      {
        t = u_18;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = u_18;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = u_18;
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_l_12;
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_m_12;
    return(t);
  }
  t = Option_3_0(l_3, m_3, n_3, t);
  return(t);
}
ATerm Cons_2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  a_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_18 = ATgetFirst((ATermList) t);
      x_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_19);
  v_18 = t;
  t = w_18;
  t = q_55(t);
  y_18 = t;
  t = x_18;
  t = r_55(t);
  z_18 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_18), y_18), v_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  {
    ATerm o_3 (ATerm t)
    {
      t = term_o_12;
      t = e_89(t);
      return(t);
    }
    t = try_1_0(o_3, t);
    t = h_19;
    {
      ATerm q_3 (ATerm t)
      {
        ATerm i_19 = NULL;
        i_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_19);
        t = (ATerm) ATmakeAppl(sym_Program_1, i_19);
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        ATerm p_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_12 = t;
            int z_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_12);
              }
            else
              {
                t = x_12;
                t = e_89(t);
                t = Cons_2_0(_id, r_3, t);
              }
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = p_12;
            {
              ATerm k_19 = NULL,l_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_19 = ATgetFirst((ATermList) t);
                  l_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_19), (ATerm) ATmakeAppl(sym_Undefined_1, k_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_3, r_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = r_19;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm a_13 = t;
      int n_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_89(t);
          ;
          LocalPopChoice(n_13);
        }
      else
        {
          t = a_13;
          {
            ATerm u_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(v_13);
              }
            else
              {
                t = u_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_3, t);
    {
      ATerm t_3 (ATerm t)
      {
        ATerm w_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_19 = NULL;
            y_19 = t;
            {
              ATerm c_14 = t;
              int d_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_19;
                  {
                    ATerm k_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_s_14;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = k_14;
                        {
                          ATerm u_3 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(u_3, t);
                        }
                      }
                    t = y_19;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(d_14);
                }
              else
                {
                  t = c_14;
                  t = term_u_11;
                  t = get_config_0_0(t);
                  t = y_19;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = w_13;
            {
              ATerm v_3 (ATerm t)
              {
                ATerm w_3 (ATerm t)
                {
                  s_19 = t;
                  return(t);
                }
                t = Undefined_1_0(w_3, t);
                return(t);
              }
              t = option_defined_1_0(v_3, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_19)), term_w_14));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(t_3, t);
      t_19 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = t_19;
    }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  t = parse_options_1_0(io_options_0_0, t);
  b_20 = t;
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              c_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(y_3, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), term_d_7);
        t = open_file_0_0(t);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        t = term_e_15;
        c_20 = t;
      }
    t = b_20;
    t = input_file_0_0(t);
    {
      ATerm z_3 (ATerm t)
      {
        ATerm a_4 (ATerm t)
        {
          t = not_null(c_20);
          return(t);
        }
        t = asfix_yield_1_0(a_4, t);
        return(t);
      }
      t = _2_0(_id, z_3, t);
      t = SSL_exit((ATerm) ATmakeInt(0));
    }
  }
  return(t);
}
