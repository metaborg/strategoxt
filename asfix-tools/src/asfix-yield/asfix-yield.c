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
ATerm term_h_16;
ATerm term_d_16;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_i_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_c_9;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_x_7;
ATerm term_r_7;
ATerm term_m_7;
ATerm term_a_7;
ATerm term_k_6;
void init_constant_terms (void)
{
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("The asfix-yield utility unparses an asfix tree to flat text.\n", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("It reads from standard input and writes to standard output.\n", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__3, term_r_12, term_t_12, term_l_8);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm literal_1_0 (ATerm j_63 (ATerm), ATerm);
ATerm flatlex_2_0 (ATerm u_61 (ATerm), ATerm v_61 (ATerm), ATerm);
ATerm amb_1_0 (ATerm r_61 (ATerm), ATerm);
ATerm skip2_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm is_leaf_0_0 (ATerm);
ATerm asfix_yield2_1_0 (ATerm g_63 (ATerm), ATerm);
ATerm appl_2_0 (ATerm s_61 (ATerm), ATerm t_61 (ATerm), ATerm);
ATerm parsetree_2_0 (ATerm p_61 (ATerm), ATerm q_61 (ATerm), ATerm);
ATerm lex_2_0 (ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm);
ATerm list_1_0 (ATerm a_71 (ATerm), ATerm);
ATerm list_3_0 (ATerm u_62 (ATerm), ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm);
ATerm appl_3_0 (ATerm r_62 (ATerm), ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm);
ATerm skip1_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm leaves_3_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm k_67 (ATerm (ATerm), ATerm), ATerm);
ATerm term_9_0 (ATerm y_61 (ATerm), ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm b_62 (ATerm), ATerm c_62 (ATerm), ATerm d_62 (ATerm), ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm g_62 (ATerm), ATerm);
ATerm asfix_yield_1_0 (ATerm f_63 (ATerm), ATerm);
ATerm _2_0 (ATerm o_54 (ATerm), ATerm p_54 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_71 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_61 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_61 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_71 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_89 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm o_89 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm literal_1_0 (ATerm j_63 (ATerm), ATerm t)
{
  ATerm v_0 = NULL,b_0 = NULL,e_0 = NULL;
  v_0 = t;
  t = SSL_is_string(v_0);
  b_0 = t;
  t = j_63(t);
  e_0 = t;
  t = SSL_print(e_0, (ATerm) ATinsert(ATempty, b_0));
  t = (ATerm) ATmakeAppl(sym__2, e_0, (ATerm) ATinsert(ATempty, b_0));
  return(t);
}
ATerm flatlex_2_0 (ATerm u_61 (ATerm), ATerm v_61 (ATerm), ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,k_1 = NULL,l_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_flatlex_2))
    {
      g_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_1);
  e_1 = t;
  t = g_1;
  t = u_61(t);
  i_1 = t;
  t = h_1;
  t = v_61(t);
  k_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_flatlex_2, i_1, k_1), e_1);
  return(t);
}
ATerm amb_1_0 (ATerm r_61 (ATerm), ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym_amb_1))
    {
      r_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_1);
  q_1 = t;
  t = r_1;
  t = r_61(t);
  s_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, s_1), q_1);
  return(t);
}
ATerm skip2_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_3 = t;
  int z_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 (ATerm t)
      {
        t = Cons_2_0(_id, n_0, t);
        return(t);
      }
      t = Cons_2_0(_id, f_0, t);
      ;
      LocalPopChoice(z_3);
    }
  else
    {
      t = y_3;
      {
        ATerm b_4 = t;
        int d_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_0 (ATerm t)
            {
              t = list_1_0(n_0, t);
              return(t);
            }
            t = appl_2_0(_id, i_0, t);
            ;
            LocalPopChoice(d_4);
          }
        else
          {
            t = b_4;
            {
              ATerm e_4 = t;
              int f_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = Cons_2_0(n_0, _id, t);
                    return(t);
                  }
                  t = amb_1_0(o_0, t);
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
                        t = parsetree_2_0(n_0, _id, t);
                        ;
                        LocalPopChoice(h_4);
                      }
                    else
                      {
                        t = g_4;
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
ATerm asfix_yield2_1_0 (ATerm g_63 (ATerm), ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm i_4 = t;
    int j_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 = NULL,m_1 = NULL,p_1 = NULL;
        j_2 = t;
        t = SSL_is_string(j_2);
        m_1 = t;
        t = g_63(t);
        p_1 = t;
        t = SSL_print(p_1, (ATerm) ATinsert(ATempty, m_1));
        t = (ATerm) ATmakeAppl(sym__2, p_1, (ATerm) ATinsert(ATempty, m_1));
        ;
        LocalPopChoice(j_4);
      }
    else
      {
        t = i_4;
        {
          ATerm z_1 = NULL,b_2 = NULL;
          z_1 = t;
          t = g_63(t);
          b_2 = t;
          t = SSL_printascii(b_2, (ATerm) ATinsert(ATempty, z_1));
          t = (ATerm) ATmakeAppl(sym__2, b_2, (ATerm) ATinsert(ATempty, z_1));
        }
      }
    return(t);
  }
  t = leaves_3_0(p_0, is_leaf_0_0, skip2_1_0, t);
  return(t);
}
ATerm appl_2_0 (ATerm s_61 (ATerm), ATerm t_61 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,s_2 = NULL,t_2 = NULL,e_3 = NULL,n_3 = NULL,x_3 = NULL;
  x_3 = t;
  if(match_cons(t, sym_appl_2))
    {
      s_2 = ATgetArgument(t, 0);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_3);
  p_2 = t;
  t = s_2;
  t = s_61(t);
  e_3 = t;
  t = t_2;
  t = t_61(t);
  n_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, e_3, n_3), p_2);
  return(t);
}
ATerm parsetree_2_0 (ATerm p_61 (ATerm), ATerm q_61 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,s_4 = NULL,e_5 = NULL,h_5 = NULL,l_5 = NULL,p_5 = NULL;
  p_5 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      s_4 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_5);
  q_4 = t;
  t = s_4;
  t = p_61(t);
  h_5 = t;
  t = e_5;
  t = q_61(t);
  l_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, h_5, l_5), q_4);
  return(t);
}
ATerm lex_2_0 (ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,z_5 = NULL,h_6 = NULL,r_6 = NULL;
  r_6 = t;
  if(match_cons(t, sym_lex_2))
    {
      w_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_6);
  v_5 = t;
  t = w_5;
  t = x_62(t);
  z_5 = t;
  t = x_5;
  t = y_62(t);
  h_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_2, z_5, h_6), v_5);
  return(t);
}
ATerm list_1_0 (ATerm a_71 (ATerm), ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    ATerm k_4 = t;
    int l_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_4);
      }
    else
      {
        t = k_4;
        t = Cons_2_0(a_71, z_6, t);
      }
    return(t);
  }
  t = z_6(t);
  return(t);
}
ATerm list_3_0 (ATerm u_62 (ATerm), ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,n_7 = NULL,o_7 = NULL;
  o_7 = t;
  if(match_cons(t, sym_list_3))
    {
      c_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
      i_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_7);
  b_7 = t;
  t = c_7;
  t = u_62(t);
  j_7 = t;
  t = h_7;
  t = v_62(t);
  k_7 = t;
  t = i_7;
  t = w_62(t);
  n_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_list_3, j_7, k_7, n_7), b_7);
  return(t);
}
ATerm appl_3_0 (ATerm r_62 (ATerm), ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,y_7 = NULL,b_8 = NULL,c_8 = NULL,e_8 = NULL,h_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_appl_3))
    {
      v_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
      y_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_8);
  u_7 = t;
  t = v_7;
  t = r_62(t);
  b_8 = t;
  t = w_7;
  t = s_62(t);
  c_8 = t;
  t = y_7;
  t = t_62(t);
  e_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_3, b_8, c_8, e_8), u_7);
  return(t);
}
ATerm skip1_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_4 = t;
  int n_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(_id, m_0, t);
      ;
      LocalPopChoice(n_4);
    }
  else
    {
      t = m_4;
      {
        ATerm o_4 = t;
        int p_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_9_0(_id, _id, _id, _id, _id, m_0, m_0, m_0, _id, t);
            ;
            LocalPopChoice(p_4);
          }
        else
          {
            t = o_4;
            {
              ATerm r_4 = t;
              int t_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_0 (ATerm t)
                  {
                    t = list_1_0(m_0, t);
                    return(t);
                  }
                  t = appl_3_0(_id, _id, q_0, t);
                  ;
                  LocalPopChoice(t_4);
                }
              else
                {
                  t = r_4;
                  {
                    ATerm u_4 = t;
                    int w_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_0 (ATerm t)
                        {
                          t = list_1_0(m_0, t);
                          return(t);
                        }
                        t = list_3_0(_id, _id, r_0, t);
                        ;
                        LocalPopChoice(w_4);
                      }
                    else
                      {
                        t = u_4;
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
ATerm leaves_3_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm k_67 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_8 (ATerm t)
  {
    ATerm x_4 = t;
    int y_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_67(t);
        t = i_67(t);
        ;
        LocalPopChoice(y_4);
      }
    else
      {
        t = x_4;
        {
          ATerm z_4 = t;
          int a_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_67(k_8, t);
              ;
              LocalPopChoice(a_5);
            }
          else
            {
              t = z_4;
              t = SRTS_all(k_8, t);
            }
        }
      }
    return(t);
  }
  t = k_8(t);
  return(t);
}
ATerm term_9_0 (ATerm y_61 (ATerm), ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm b_62 (ATerm), ATerm c_62 (ATerm), ATerm d_62 (ATerm), ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm g_62 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,r_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,z_8 = NULL,a_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  q_9 = t;
  if(match_cons(t, sym_term_9))
    {
      o_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
      t_8 = ATgetArgument(t, 2);
      u_8 = ATgetArgument(t, 3);
      v_8 = ATgetArgument(t, 4);
      w_8 = ATgetArgument(t, 5);
      z_8 = ATgetArgument(t, 6);
      a_9 = ATgetArgument(t, 7);
      f_9 = ATgetArgument(t, 8);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_9);
  n_8 = t;
  t = o_8;
  t = y_61(t);
  g_9 = t;
  t = r_8;
  t = z_61(t);
  h_9 = t;
  t = t_8;
  t = a_62(t);
  i_9 = t;
  t = u_8;
  t = b_62(t);
  k_9 = t;
  t = v_8;
  t = c_62(t);
  l_9 = t;
  t = w_8;
  t = d_62(t);
  m_9 = t;
  t = z_8;
  t = e_62(t);
  n_9 = t;
  t = a_9;
  t = f_62(t);
  o_9 = t;
  t = f_9;
  t = g_62(t);
  p_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_term_9, g_9, h_9, i_9, k_9, l_9, m_9, n_9, o_9, p_9), n_8);
  return(t);
}
ATerm asfix_yield_1_0 (ATerm f_63 (ATerm), ATerm t)
{
  ATerm b_5 = t;
  int c_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 = t;
      int f_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_9_0(_id, _id, _id, _id, _id, _id, _id, _id, _id, t);
          ;
          LocalPopChoice(f_5);
        }
      else
        {
          t = d_5;
          if(match_cons(t, sym_appl_3))
            {
              ATerm g_5 = ATgetArgument(t, 0);
              if(match_cons(g_5, sym_prod_9))
                {
                  ATerm k_5 = ATgetArgument(g_5, 0);
                  if(match_cons(k_5, sym_id_1))
                    {
                      ATerm a_6 = ATgetArgument(k_5, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm m_5 = ATgetArgument(g_5, 1);
                  }
                  {
                    ATerm n_5 = ATgetArgument(g_5, 2);
                  }
                  {
                    ATerm o_5 = ATgetArgument(g_5, 3);
                  }
                  {
                    ATerm q_5 = ATgetArgument(g_5, 4);
                  }
                  {
                    ATerm r_5 = ATgetArgument(g_5, 5);
                  }
                  {
                    ATerm t_5 = ATgetArgument(g_5, 6);
                  }
                  {
                    ATerm u_5 = ATgetArgument(g_5, 7);
                  }
                  {
                    ATerm y_5 = ATgetArgument(g_5, 8);
                  }
                }
              else
                _fail(t);
              {
                ATerm i_5 = ATgetArgument(t, 1);
              }
              {
                ATerm j_5 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
        }
      {
        ATerm s_0 (ATerm t)
        {
          ATerm r_2 = NULL,u_2 = NULL;
          r_2 = t;
          t = f_63(t);
          u_2 = t;
          t = SSL_print(u_2, (ATerm) ATinsert(ATempty, r_2));
          t = (ATerm) ATmakeAppl(sym__2, u_2, (ATerm) ATinsert(ATempty, r_2));
          return(t);
        }
        ATerm t_0 (ATerm t)
        {
          ATerm x_9 = NULL;
          x_9 = t;
          t = SSL_is_string(x_9);
          return(t);
        }
        t = leaves_3_0(s_0, t_0, skip1_1_0, t);
      }
      ;
      LocalPopChoice(c_5);
    }
  else
    {
      t = b_5;
      {
        ATerm b_6 = t;
        int d_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 = t;
            int g_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = parsetree_2_0(_id, _id, t);
                ;
                LocalPopChoice(g_6);
              }
            else
              {
                t = e_6;
                t = appl_2_0(_id, _id, t);
              }
            t = asfix_yield2_1_0(f_63, t);
            ;
            LocalPopChoice(d_6);
          }
        else
          {
            t = b_6;
            {
              ATerm i_6 = t;
              int j_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = literal_1_0(f_63, t);
                  ;
                  LocalPopChoice(j_6);
                }
              else
                {
                  t = i_6;
                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("not in AsFix format", 0, ATtrue))));
                  t = SSL_exit((ATerm) ATmakeInt(1));
                  t = (ATerm) ATinsert(ATempty, term_k_6);
                }
            }
          }
      }
    }
  return(t);
}
ATerm _2_0 (ATerm o_54 (ATerm), ATerm p_54 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  d_10 = t;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_10);
  y_9 = t;
  t = z_9;
  t = o_54(t);
  b_10 = t;
  t = a_10;
  t = p_54(t);
  c_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, b_10, c_10), y_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_10 (ATerm n_10, ATerm t)
  {
    t = SSL_fclose(n_10);
    return(t);
  }
  ATerm q_10 = NULL,r_10 = NULL;
  r_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_10 = ATgetArgument(t, 0);
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_10);
            ;
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
            t = t_10(r_10, t);
          }
      }
    }
  else
    {
      t = t_10(r_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_10 = NULL;
  t = SSL_stdin_stream();
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_10 = NULL;
  t = SSL_stdout_stream();
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_10 = NULL;
  t = SSL_stderr_stream();
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      ATerm o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_3 = NULL,h_3 = NULL;
        g_3 = t;
        t = SSL_explode_term(g_3);
        if(match_cons(t, sym__2))
          {
            ATerm s_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_6) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_6 = ATgetArgument(t, 1);
              if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
                {
                  h_3 = ATgetFirst((ATermList) t_6);
                  {
                    ATerm u_6 = (ATerm) ATgetNext((ATermList) t_6);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = h_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = h_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = h_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        {
          ATerm v_6 = t;
          int w_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
              ATerm u_0 (ATerm t)
              {
                ATerm e_11 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_11;
                return(t);
              }
              t = _2_0(u_0, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_11 = ATgetArgument(t, 0);
                  c_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_11, c_11);
              d_11 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_11);
              ;
              LocalPopChoice(w_6);
            }
          else
            {
              t = v_6;
              {
                ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
                ATerm w_0 (ATerm t)
                {
                  ATerm i_11 = NULL;
                  i_11 = t;
                  t = SSL_is_string(i_11);
                  return(t);
                }
                t = _2_0(w_0, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_11 = ATgetArgument(t, 0);
                    g_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_11, g_11);
                h_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
  ATerm x_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_11 = NULL;
      m_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_11, term_a_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_6);
    }
  else
    {
      t = x_6;
      {
        ATerm i_3 = NULL;
        i_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = i_3;
        _fail(t);
      }
    }
  j_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_11);
  k_11 = t;
  t = j_11;
  t = fclose_0_0(t);
  t = k_11;
  return(t);
}
ATerm fetch_1_0 (ATerm h_71 (ATerm), ATerm t)
{
  ATerm r_11 (ATerm t)
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_71, _id, t);
        ;
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        t = Cons_2_0(_id, r_11, t);
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_12 (ATerm v_11, ATerm t)
  {
    t = v_11;
    {
      ATerm f_7 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm g_7 = ATgetArgument(t, 0);
              ATerm l_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_7;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, v_11, term_m_7);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm l_12 (ATerm z_11, ATerm a_12, ATerm d_12, ATerm t)
  {
    t = SSL_open_file(z_11, a_12);
    return(t);
  }
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_12(h_12, t);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = l_12(i_12, j_12, h_12, t);
          }
      }
    }
  else
    {
      t = k_12(h_12, t);
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm o_12 = NULL;
    o_12 = t;
    if(match_string(t, "-k"))
      {
        t = o_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = o_12;
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm p_12 = NULL,q_12 = NULL;
    p_12 = t;
    t = SSL_string_to_int(p_12);
    q_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_12);
    t = p_12;
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    t = term_r_7;
    return(t);
  }
  t = ArgOption_3_0(x_0, y_0, z_0, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm s_12 = NULL;
        s_12 = t;
        if(match_string(t, "-S"))
          {
            t = s_12;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = s_12;
          }
        return(t);
      }
      ATerm b_1 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_z_7;
        return(t);
      }
      ATerm c_1 (ATerm t)
      {
        t = term_a_8;
        return(t);
      }
      t = Option_3_0(a_1, b_1, c_1, t);
      ;
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm d_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm f_1 (ATerm t)
            {
              ATerm u_12 = NULL,v_12 = NULL;
              u_12 = t;
              t = SSL_string_to_int(u_12);
              v_12 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_12);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, u_12);
              return(t);
            }
            ATerm j_1 (ATerm t)
            {
              t = term_g_8;
              return(t);
            }
            t = ArgOption_3_0(d_1, f_1, j_1, t);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = d_8;
            {
              ATerm n_1 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm o_1 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_i_8;
                return(t);
              }
              ATerm u_1 (ATerm t)
              {
                t = term_j_8;
                return(t);
              }
              t = Option_3_0(n_1, o_1, u_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_13 = NULL;
      t = term_l_8;
      t = d_0(t);
      a_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_8, term_p_8, a_13);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_12 = ATgetFirst((ATermList) t);
          z_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_12;
      t = a_0(t);
      t = term_l_8;
      t = c_0(t);
      d_13 = t;
      t = (ATerm) ATinsert(CheckATermList(z_12), d_13);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm f_13 = NULL;
    f_13 = t;
    if(match_string(t, "-o"))
      {
        t = f_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_13;
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm g_13 = NULL;
    g_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_13);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_13);
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_q_8;
    return(t);
  }
  t = ArgOption_3_0(v_1, w_1, x_1, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  if(match_cons(t, sym__3))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
      l_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_13, k_13);
  {
    ATerm s_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_8 = ATgetArgument(t, 0);
            ATerm b_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_13, k_13);
        ;
        LocalPopChoice(x_8);
      }
    else
      {
        t = s_8;
        t = (ATerm) ATempty;
      }
    m_13 = t;
    t = SSL_table_put(j_13, k_13, (ATerm) ATinsert(CheckATermList(m_13), l_13));
    t = (ATerm) ATmakeAppl(sym__3, j_13, k_13, l_13);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_13 = NULL;
      t = term_l_8;
      t = l_0(t);
      y_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_8, term_p_8, y_13);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_13 = ATgetFirst((ATermList) t);
          v_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_13 = ATgetFirst((ATermList) t);
          x_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_13;
      t = j_0(t);
      t = w_13;
      t = k_0(t);
      c_14 = t;
      t = (ATerm) ATinsert(CheckATermList(x_13), c_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm e_14 = NULL;
    e_14 = t;
    if(match_string(t, "-i"))
      {
        t = e_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = e_14;
      }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm f_14 = NULL;
    f_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, f_14);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_c_9;
    return(t);
  }
  t = ArgOption_3_0(y_1, a_2, c_2, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_14 = ATgetFirst((ATermList) t);
      i_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_14 = NULL,n_14 = NULL;
        t = i_14;
        t = h_0(t);
        m_14 = t;
        t = h_14;
        t = g_0(t);
        n_14 = t;
        t = i_14;
        {
          ATerm d_2 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(m_14), n_14);
            return(t);
          }
          t = reverse_acc_2_0(g_0, d_2, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_8;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm n_61 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
  r_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_14);
  o_14 = t;
  t = p_14;
  t = n_61(t);
  q_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, q_14), o_14);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_14 = NULL;
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm j_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 = NULL;
            t = eval_config_0_0(t);
            s_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_3);
            t = s_3;
            ;
            LocalPopChoice(r_9);
          }
        else
          {
            t = j_9;
          }
        u_14 = t;
      }
      ;
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm e_2 (ATerm t)
        {
          ATerm f_2 (ATerm t)
          {
            if(((u_14 != NULL) && (u_14 != t)))
              _fail(t);
            else
              u_14 = t;
            return(t);
          }
          t = Program_1_0(f_2, t);
          return(t);
        }
        t = fetch_1_0(e_2, t);
      }
    }
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), not_null(u_14)), term_u_9);
        t = echo_0_0(t);
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
      }
    t = term_w_9;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    {
      ATerm g_2 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, g_2, t);
      {
        ATerm h_2 (ATerm t)
        {
          ATerm v_14 = NULL;
          v_14 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, v_14), term_e_10);
          t = echo_0_0(t);
          return(t);
        }
        t = map_1_0(h_2, t);
        {
          ATerm f_10 = t;
          int g_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_10), term_i_10), term_h_10);
              t = echo_0_0(t);
              ;
              LocalPopChoice(g_10);
            }
          else
            {
              t = f_10;
            }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm o_61 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  z_14 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      x_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_14);
  w_14 = t;
  t = x_14;
  t = o_61(t);
  y_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, y_14), w_14);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  e_15 = t;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_10 = ATgetFirst((ATermList) t);
                ATerm o_10 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_15;
          }
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = (ATerm) ATinsert(ATempty, e_15);
      }
    f_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), f_15);
    t = e_15;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 = NULL;
        t = eval_config_0_0(t);
        w_3 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_3);
        t = w_3;
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = p_10;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
      {
        ATerm l_15 = NULL,m_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_15 = ATgetFirst((ATermList) t);
            m_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_15;
        {
          ATerm i_2 (ATerm t)
          {
            t = m_15;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_71 (ATerm), ATerm t)
{
  ATerm s_15 (ATerm t)
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_15, t);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_71(t);
      }
    return(t);
  }
  t = s_15(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm u_15 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm v_15 = NULL;
    v_15 = t;
    t = SSL_explode_string(v_15);
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm w_15 = NULL;
    w_15 = t;
    t = SSL_explode_string(w_15);
    return(t);
  }
  t = _2_0(k_2, l_2, t);
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_15 = NULL,z_15 = NULL;
        if(match_cons(t, sym__2))
          {
            y_15 = ATgetArgument(t, 0);
            z_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_15;
        {
          ATerm m_2 (ATerm t)
          {
            t = z_15;
            return(t);
          }
          t = at_end_1_0(m_2, t);
        }
        ;
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        {
          ATerm a_4 = NULL,c_4 = NULL;
          a_4 = t;
          t = SSL_explode_term(a_4);
          if(match_cons(t, sym__2))
            {
              ATerm p_11 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_11) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              c_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_4;
          t = concat_0_0(t);
        }
      }
    u_15 = t;
    t = SSL_implode_string(u_15);
  }
  return(t);
}
ATerm map_1_0 (ATerm w_70 (ATerm), ATerm t)
{
  ATerm e_16 (ATerm t)
  {
    ATerm q_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = q_11;
        t = Cons_2_0(w_70, e_16, t);
      }
    return(t);
  }
  t = e_16(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_16 = NULL;
      k_16 = t;
      t = SSL_is_string(k_16);
      ;
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm y_11 = t;
              int b_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(b_12);
                }
              else
                {
                  t = y_11;
                }
              return(t);
            }
            t = map_1_0(n_2, t);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
              q_16 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_16 = ATgetArgument(t, 0);
                  t = r_16;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_16 = ATgetArgument(t, 0);
                      t = r_16;
                      {
                        ATerm c_12 = t;
                        int e_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_16);
                            {
                              ATerm f_12 = t;
                              int g_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_4 = NULL;
                                  t = eval_config_0_0(t);
                                  v_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_16, v_4);
                                  t = v_4;
                                  ;
                                  LocalPopChoice(g_12);
                                }
                              else
                                {
                                  t = f_12;
                                }
                            }
                            ;
                            LocalPopChoice(e_12);
                          }
                        else
                          {
                            t = c_12;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_16), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = r_16;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_16 = NULL,x_16 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_16 = ATgetArgument(t, 0);
                          s_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_16;
                      t = eval_config_0_0(t);
                      w_16 = t;
                      t = s_16;
                      t = eval_config_0_0(t);
                      x_16 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_16, x_16);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_w_12;
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_x_12;
        return(t);
      }
      t = Option_3_0(o_2, q_2, v_2, t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm w_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_13;
          return(t);
        }
        ATerm y_2 (ATerm t)
        {
          t = term_c_13;
          return(t);
        }
        t = Option_3_0(w_2, x_2, y_2, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  h_17 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_17 = ATgetFirst((ATermList) t);
      e_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_17);
  c_17 = t;
  t = d_17;
  t = x_55(t);
  f_17 = t;
  t = e_17;
  t = y_55(t);
  g_17 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_17), f_17), c_17);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm n_17 = NULL;
  n_17 = t;
  {
    ATerm e_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_13;
        t = p_89(t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = e_13;
      }
    t = n_17;
    {
      ATerm z_2 (ATerm t)
      {
        ATerm o_17 = NULL;
        o_17 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_17);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_17);
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_13 = t;
            int q_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_13);
              }
            else
              {
                t = p_13;
                t = p_89(t);
                t = Cons_2_0(_id, a_3, t);
              }
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            {
              ATerm q_17 = NULL,r_17 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_17 = ATgetFirst((ATermList) t);
                  r_17 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_17), (ATerm) ATmakeAppl(sym_Undefined_1, q_17));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_2, a_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = y_17;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_89(t);
          ;
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          {
            ATerm t_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_3 (ATerm t)
                {
                  ATerm b_18 = NULL;
                  b_18 = t;
                  if(match_string(t, "--help"))
                    {
                      t = b_18;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = b_18;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = b_18;
                        }
                    }
                  return(t);
                }
                ATerm d_3 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_a_14;
                  return(t);
                }
                ATerm f_3 (ATerm t)
                {
                  t = term_b_14;
                  return(t);
                }
                t = Option_3_0(c_3, d_3, f_3, t);
                ;
                LocalPopChoice(z_13);
              }
            else
              {
                t = t_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_3, t);
    {
      ATerm d_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_18 = NULL;
          g_18 = t;
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_18;
                {
                  ATerm l_14 = t;
                  int s_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm t_14 = t;
                        int a_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_5 = NULL;
                            t = eval_config_0_0(t);
                            s_5 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_5);
                            t = s_5;
                            ;
                            LocalPopChoice(a_15);
                          }
                        else
                          {
                            t = t_14;
                          }
                      }
                      ;
                      LocalPopChoice(s_14);
                    }
                  else
                    {
                      t = l_14;
                      {
                        ATerm j_3 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(j_3, t);
                      }
                    }
                  t = g_18;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm b_15 = t;
                  int c_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_6 = NULL;
                      t = eval_config_0_0(t);
                      c_6 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), c_6);
                      t = c_6;
                      ;
                      LocalPopChoice(c_15);
                    }
                  else
                    {
                      t = b_15;
                    }
                  t = g_18;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(g_14);
        }
      else
        {
          t = d_14;
          {
            ATerm d_15 = t;
            int g_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_3 (ATerm t)
                {
                  ATerm l_3 (ATerm t)
                  {
                    if(((z_17 != NULL) && (z_17 != t)))
                      _fail(t);
                    else
                      z_17 = t;
                    return(t);
                  }
                  t = Undefined_1_0(l_3, t);
                  return(t);
                }
                t = fetch_1_0(k_3, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_17)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_17)), term_i_15));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(g_15);
              }
            else
              {
                t = d_15;
              }
          }
        }
      a_18 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = a_18;
    }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,f_6 = NULL;
  ATerm m_3 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_option_0_0(t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        {
          ATerm n_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = output_option_0_0(t);
              ;
              LocalPopChoice(o_15);
            }
          else
            {
              t = n_15;
              {
                ATerm p_15 = t;
                int q_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_3 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm p_3 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                      t = term_r_15;
                      return(t);
                    }
                    ATerm q_3 (ATerm t)
                    {
                      t = term_t_15;
                      return(t);
                    }
                    t = Option_3_0(o_3, p_3, q_3, t);
                    ;
                    LocalPopChoice(q_15);
                  }
                else
                  {
                    t = p_15;
                    {
                      ATerm x_15 = t;
                      int a_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = verbose_option_0_0(t);
                          ;
                          LocalPopChoice(a_16);
                        }
                      else
                        {
                          t = x_15;
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
  t = parse_options_1_0(m_3, t);
  j_18 = t;
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_18 != NULL) && (k_18 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(r_3, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), term_m_7);
        t = open_file_0_0(t);
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = term_d_16;
        k_18 = t;
      }
    t = j_18;
    {
      ATerm f_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_3 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((l_18 != NULL) && (l_18 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_3, t);
          ;
          LocalPopChoice(g_16);
        }
      else
        {
          t = f_16;
          t = term_h_16;
          l_18 = t;
        }
      t = not_null(l_18);
      t = ReadFromFile_0_0(t);
      f_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_18, f_6);
      {
        ATerm u_3 (ATerm t)
        {
          ATerm v_3 (ATerm t)
          {
            t = not_null(k_18);
            return(t);
          }
          t = asfix_yield_1_0(v_3, t);
          return(t);
        }
        t = _2_0(_id, u_3, t);
        t = SSL_exit((ATerm) ATmakeInt(0));
      }
    }
  }
  return(t);
}
