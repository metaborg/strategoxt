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
Symbol sym_Undefined_0;
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
Symbol sym_Runtime_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_z_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_e_18;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_m_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_h_12;
ATerm term_u_10;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_w_6;
ATerm term_n_6;
void init_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__3, term_z_16, term_a_17, term_n_6);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm Param_1_0 (ATerm y_54 (ATerm), ATerm);
ATerm fc_Arg_0_0 (ATerm);
ATerm NonTermRef_2_0 (ATerm r_54 (ATerm), ATerm s_54 (ATerm), ATerm);
ATerm fc_ProdItem_0_0 (ATerm);
ATerm fc_List_1_0 (ATerm v_60 (ATerm), ATerm);
ATerm Id_1_0 (ATerm z_54 (ATerm), ATerm);
ATerm Prod_2_0 (ATerm w_54 (ATerm), ATerm x_54 (ATerm), ATerm);
ATerm NonTermDec_3_0 (ATerm t_54 (ATerm), ATerm u_54 (ATerm), ATerm v_54 (ATerm), ATerm);
ATerm TreeGrammar_1_0 (ATerm q_54 (ATerm), ATerm);
ATerm _2_0 (ATerm f_53 (ATerm), ATerm g_53 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm f_81 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_77 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm j_65 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_65 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm p_71 (ATerm), ATerm q_71 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_64 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm a_60 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_60 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_54 (ATerm), ATerm p_54 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_83 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm l_83 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,l_0 = NULL;
  f_0 = t;
  t = term_n_6;
  t = whoami_0_0(t);
  l_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = f_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_0 = NULL,c_1 = NULL;
      t_0 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 = NULL;
            t = eval_config_0_0(t);
            q_0 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_0);
            t = q_0;
            ;
            LocalPopChoice(v_6);
          }
        else
          {
            t = r_6;
          }
        c_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_1, term_w_6);
        t = geq_0_0(t);
        t = t_0;
        t = d_76(t);
      }
      ;
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
    }
  return(t);
}
ATerm Param_1_0 (ATerm y_54 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,i_1 = NULL,m_1 = NULL,p_1 = NULL;
  p_1 = t;
  if(match_cons(t, sym_Param_1))
    {
      i_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_1);
  d_1 = t;
  t = i_1;
  t = y_54(t);
  m_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Param_1, m_1), d_1);
  return(t);
}
ATerm fc_Arg_0_0 (ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 = t;
      int s_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_0 (ATerm t)
          {
            ATerm t_7 = t;
            int v_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_0 (ATerm t)
                {
                  ATerm t_1 = NULL;
                  t_1 = t;
                  t = SSL_is_string(t_1);
                  return(t);
                }
                t = Id_1_0(m_0, t);
                ;
                LocalPopChoice(v_7);
              }
            else
              {
                t = t_7;
                {
                  ATerm n_0 (ATerm t)
                  {
                    ATerm r_0 = NULL;
                    r_0 = t;
                    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_0), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue))));
                    t = r_0;
                    return(t);
                  }
                  t = if_verbose2_1_0(n_0, t);
                }
              }
            return(t);
          }
          ATerm k_0 (ATerm t)
          {
            t = fc_List_1_0(fc_Arg_0_0, t);
            return(t);
          }
          t = NonTermRef_2_0(b_0, k_0, t);
          ;
          LocalPopChoice(s_7);
        }
      else
        {
          t = r_7;
          {
            ATerm w_7 = t;
            int x_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_0 (ATerm t)
                {
                  ATerm u_1 = NULL;
                  u_1 = t;
                  t = SSL_is_int(u_1);
                  return(t);
                }
                t = Param_1_0(o_0, t);
                ;
                LocalPopChoice(x_7);
              }
            else
              {
                t = w_7;
                {
                  ATerm y_7 = t;
                  int z_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_String_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(z_7);
                    }
                  else
                    {
                      t = y_7;
                      if(!(match_cons(t, sym_Int_0)))
                        _fail(t);
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm p_0 (ATerm t)
        {
          ATerm v_0 = NULL;
          v_0 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_0), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Arg: ", 0, ATtrue))));
          t = v_0;
          return(t);
        }
        t = if_verbose2_1_0(p_0, t);
      }
    }
  return(t);
}
ATerm NonTermRef_2_0 (ATerm r_54 (ATerm), ATerm s_54 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym_NonTermRef_2))
    {
      x_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_2);
  w_1 = t;
  t = x_1;
  t = r_54(t);
  a_2 = t;
  t = z_1;
  t = s_54(t);
  c_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermRef_2, a_2, c_2), w_1);
  return(t);
}
ATerm fc_ProdItem_0_0 (ATerm t)
{
  ATerm a_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8 = t;
      int h_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 (ATerm t)
          {
            ATerm m_8 = t;
            int n_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm g_2 = NULL;
                  g_2 = t;
                  t = SSL_is_string(g_2);
                  return(t);
                }
                t = Id_1_0(w_0, t);
                ;
                LocalPopChoice(n_8);
              }
            else
              {
                t = m_8;
                {
                  ATerm x_0 (ATerm t)
                  {
                    ATerm z_0 = NULL;
                    z_0 = t;
                    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_0), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue))));
                    t = z_0;
                    return(t);
                  }
                  t = if_verbose2_1_0(x_0, t);
                }
              }
            return(t);
          }
          ATerm u_0 (ATerm t)
          {
            t = fc_List_1_0(fc_Arg_0_0, t);
            return(t);
          }
          t = NonTermRef_2_0(s_0, u_0, t);
          ;
          LocalPopChoice(h_8);
        }
      else
        {
          t = d_8;
          {
            ATerm o_8 = t;
            int p_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm l_2 = NULL;
                  l_2 = t;
                  t = SSL_is_int(l_2);
                  return(t);
                }
                t = Param_1_0(y_0, t);
                ;
                LocalPopChoice(p_8);
              }
            else
              {
                t = o_8;
                {
                  ATerm q_8 = t;
                  int s_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_String_0)))
                        _fail(t);
                      ;
                      LocalPopChoice(s_8);
                    }
                  else
                    {
                      t = q_8;
                      if(!(match_cons(t, sym_Int_0)))
                        _fail(t);
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(c_8);
    }
  else
    {
      t = a_8;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm e_1 = NULL;
          e_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_1), (ATerm) ATmakeAppl(ATmakeSymbol("Not a ProdItem: ", 0, ATtrue))));
          t = e_1;
          return(t);
        }
        t = if_verbose2_1_0(a_1, t);
      }
    }
  return(t);
}
ATerm fc_List_1_0 (ATerm v_60 (ATerm), ATerm t)
{
  ATerm v_8 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(k_9);
        }
      else
        {
          t = c_9;
          {
            ATerm b_1 (ATerm t)
            {
              t = fc_List_1_0(v_60, t);
              return(t);
            }
            t = Cons_2_0(v_60, b_1, t);
          }
        }
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = v_8;
      {
        ATerm f_1 (ATerm t)
        {
          ATerm h_1 = NULL;
          h_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_1), (ATerm) ATmakeAppl(ATmakeSymbol("Not a List: ", 0, ATtrue))));
          t = h_1;
          return(t);
        }
        t = if_verbose2_1_0(f_1, t);
      }
    }
  return(t);
}
ATerm Id_1_0 (ATerm z_54 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_Id_1))
    {
      n_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_2);
  m_2 = t;
  t = n_2;
  t = z_54(t);
  o_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, o_2), m_2);
  return(t);
}
ATerm Prod_2_0 (ATerm w_54 (ATerm), ATerm x_54 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,d_3 = NULL;
  d_3 = t;
  if(match_cons(t, sym_Prod_2))
    {
      w_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_3);
  v_2 = t;
  t = w_2;
  t = w_54(t);
  z_2 = t;
  t = x_2;
  t = x_54(t);
  a_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prod_2, z_2, a_3), v_2);
  return(t);
}
ATerm NonTermDec_3_0 (ATerm t_54 (ATerm), ATerm u_54 (ATerm), ATerm v_54 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,j_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL,u_4 = NULL,j_5 = NULL;
  j_5 = t;
  if(match_cons(t, sym_NonTermDec_3))
    {
      j_4 = ATgetArgument(t, 0);
      o_4 = ATgetArgument(t, 1);
      p_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_5);
  y_3 = t;
  t = j_4;
  t = t_54(t);
  q_4 = t;
  t = o_4;
  t = u_54(t);
  s_4 = t;
  t = p_4;
  t = v_54(t);
  u_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermDec_3, q_4, s_4, u_4), y_3);
  return(t);
}
ATerm TreeGrammar_1_0 (ATerm q_54 (ATerm), ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,v_5 = NULL,w_5 = NULL;
  w_5 = t;
  if(match_cons(t, sym_TreeGrammar_1))
    {
      r_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_5);
  q_5 = t;
  t = r_5;
  t = q_54(t);
  v_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_TreeGrammar_1, v_5), q_5);
  return(t);
}
ATerm _2_0 (ATerm f_53 (ATerm), ATerm g_53 (ATerm), ATerm t)
{
  ATerm z_5 = NULL,c_6 = NULL,j_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
  u_6 = t;
  if(match_cons(t, sym__2))
    {
      c_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_6);
  z_5 = t;
  t = c_6;
  t = f_53(t);
  s_6 = t;
  t = j_6;
  t = g_53(t);
  t_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_6, t_6), z_5);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_6, term_l_9);
  t = open_stream_0_0(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_6, y_6);
  t = f_81(t);
  t = fclose_0_0(t);
  t = y_6;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  a_7 = t;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((b_7 != NULL) && (b_7 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_7 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_1, t);
          ;
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          t = term_p_9;
          if(((b_7 != NULL) && (b_7 != t)))
            _fail(t);
          else
            b_7 = t;
        }
      return(t);
    }
    t = _2_0(g_1, _id, t);
    t = a_7;
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 = NULL;
        l_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_7), l_1);
        return(t);
      }
      t = _2_0(_id, k_1, t);
      {
        ATerm q_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm q_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(q_1, t);
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm u_9 = ATgetArgument(t, 0);
                    if(match_cons(u_9, sym_Stream_1))
                      {
                        c_7 = ATgetArgument(u_9, 0);
                      }
                    else
                      _fail(t);
                    d_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(c_7, d_7);
                e_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_7);
                return(t);
              }
              t = WriteToFile_1_0(r_1, t);
              return(t);
            }
            t = _2_0(n_1, o_1, t);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = q_9;
            {
              ATerm s_1 (ATerm t)
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,l_7 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm v_9 = ATgetArgument(t, 0);
                      if(match_cons(v_9, sym_Stream_1))
                        {
                          f_7 = ATgetArgument(v_9, 0);
                        }
                      else
                        _fail(t);
                      g_7 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(f_7, g_7);
                  h_7 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), h_7);
                  l_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, l_7);
                  return(t);
                }
                t = WriteToFile_1_0(v_1, t);
                return(t);
              }
              t = _2_0(_id, s_1, t);
            }
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
ATerm apply_strategy_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  m_7 = t;
  t = dtime_0_0(t);
  t = m_7;
  t = s_77(t);
  n_7 = t;
  t = dtime_0_0(t);
  o_7 = t;
  t = n_7;
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_7), (ATerm) ATmakeAppl(sym_Runtime_1, o_7)), q_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_8 (ATerm b_8, ATerm t)
  {
    t = SSL_fclose(b_8);
    return(t);
  }
  ATerm f_8 = NULL,g_8 = NULL;
  g_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_8 = ATgetArgument(t, 0);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_8);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            t = i_8(g_8, t);
          }
      }
    }
  else
    {
      t = i_8(g_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_8 = NULL;
  t = SSL_stdin_stream();
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  t = SSL_stdout_stream();
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_stderr_stream();
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      ATerm d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_2 = NULL,r_2 = NULL;
        q_2 = t;
        t = SSL_explode_term(q_2);
        if(match_cons(t, sym__2))
          {
            ATerm j_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_10 = ATgetArgument(t, 1);
              if(((ATgetType(k_10) == AT_LIST) && !(ATisEmpty(k_10))))
                {
                  r_2 = ATgetFirst((ATermList) k_10);
                  {
                    ATerm l_10 = (ATerm) ATgetNext((ATermList) k_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = r_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = r_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        {
          ATerm m_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL,u_8 = NULL,w_8 = NULL;
              ATerm y_1 (ATerm t)
              {
                ATerm x_8 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    x_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_8;
                return(t);
              }
              t = _2_0(y_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  t_8 = ATgetArgument(t, 0);
                  u_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(t_8, u_8);
              w_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_8);
              ;
              LocalPopChoice(o_10);
            }
          else
            {
              t = m_10;
              {
                ATerm y_8 = NULL,z_8 = NULL,d_9 = NULL;
                ATerm b_2 (ATerm t)
                {
                  ATerm e_9 = NULL;
                  e_9 = t;
                  t = SSL_is_string(e_9);
                  return(t);
                }
                t = _2_0(b_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_8 = ATgetArgument(t, 0);
                    z_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_8, z_8);
                d_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9 = NULL;
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, term_u_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm s_2 = NULL;
        s_2 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = s_2;
        _fail(t);
      }
    }
  g_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_9);
  h_9 = t;
  t = g_9;
  t = fclose_0_0(t);
  t = h_9;
  return(t);
}
ATerm fetch_1_0 (ATerm j_65 (ATerm), ATerm t)
{
  ATerm o_9 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_65, _id, t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = Cons_2_0(_id, o_9, t);
      }
    return(t);
  }
  t = o_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm r_9 = NULL,s_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_9 = ATgetFirst((ATermList) t);
            s_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_9;
        {
          ATerm e_2 (ATerm t)
          {
            t = s_9;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_65 (ATerm), ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_9, t);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_65(t);
      }
    return(t);
  }
  t = y_9(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  ATerm f_2 (ATerm t)
  {
    ATerm b_10 = NULL;
    b_10 = t;
    t = SSL_explode_string(b_10);
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm c_10 = NULL;
    c_10 = t;
    t = SSL_explode_string(c_10);
    return(t);
  }
  t = _2_0(f_2, h_2, t);
  {
    ATerm h_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL,f_10 = NULL;
        if(match_cons(t, sym__2))
          {
            e_10 = ATgetArgument(t, 0);
            f_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_10;
        {
          ATerm i_2 (ATerm t)
          {
            t = f_10;
            return(t);
          }
          t = at_end_1_0(i_2, t);
        }
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = h_11;
        {
          ATerm g_3 = NULL,h_3 = NULL;
          g_3 = t;
          t = SSL_explode_term(g_3);
          if(match_cons(t, sym__2))
            {
              ATerm m_11 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_11) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              h_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_3;
          t = concat_0_0(t);
        }
      }
    a_10 = t;
    t = SSL_implode_string(a_10);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_10 = NULL;
      n_10 = t;
      t = SSL_is_string(n_10);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      {
        ATerm t_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 (ATerm t)
            {
              ATerm x_11 = t;
              int c_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(c_12);
                }
              else
                {
                  t = x_11;
                }
              return(t);
            }
            t = map_1_0(j_2, t);
            ;
            LocalPopChoice(w_11);
          }
        else
          {
            t = t_11;
            {
              ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
              r_10 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_10 = ATgetArgument(t, 0);
                  t = s_10;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_10 = ATgetArgument(t, 0);
                      t = s_10;
                      {
                        ATerm d_12 = t;
                        int e_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_10);
                            {
                              ATerm f_12 = t;
                              int g_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm z_3 = NULL;
                                  t = eval_config_0_0(t);
                                  z_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_10, z_3);
                                  t = z_3;
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
                            t = d_12;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_10), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = s_10;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_10 = NULL,y_10 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_10 = ATgetArgument(t, 0);
                          t_10 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_10;
                      t = eval_config_0_0(t);
                      x_10 = t;
                      t = t_10;
                      t = eval_config_0_0(t);
                      y_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_10, y_10);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm e_11 = NULL;
    e_11 = t;
    if(match_string(t, "-k"))
      {
        t = e_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = e_11;
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm f_11 = NULL,g_11 = NULL;
    f_11 = t;
    t = SSL_string_to_int(f_11);
    g_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_11);
    t = f_11;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_h_12;
    return(t);
  }
  t = ArgOption_3_0(k_2, t_2, u_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        ATerm i_11 = NULL;
        i_11 = t;
        if(match_string(t, "-S"))
          {
            t = i_11;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = i_11;
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_q_12;
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_r_12;
        return(t);
      }
      t = Option_3_0(y_2, b_3, c_3, t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm t_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm f_3 (ATerm t)
            {
              ATerm j_11 = NULL,k_11 = NULL;
              j_11 = t;
              t = SSL_string_to_int(j_11);
              k_11 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_11);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, j_11);
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              t = term_y_12;
              return(t);
            }
            t = ArgOption_3_0(e_3, f_3, i_3, t);
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = t_12;
            {
              ATerm j_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm k_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_b_13;
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = term_c_13;
                return(t);
              }
              t = Option_3_0(j_3, k_3, l_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_11 = NULL;
      t = term_n_6;
      t = d_0(t);
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, p_11);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_11 = ATgetFirst((ATermList) t);
          o_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_11;
      t = a_0(t);
      t = term_n_6;
      t = c_0(t);
      s_11 = t;
      t = (ATerm) ATinsert(CheckATermList(o_11), s_11);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm u_11 = NULL;
    u_11 = t;
    if(match_string(t, "-o"))
      {
        t = u_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = u_11;
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm v_11 = NULL;
    v_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_11);
    t = (ATerm) ATmakeAppl(sym_Output_1, v_11);
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  t = ArgOption_3_0(m_3, n_3, o_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__3))
    {
      y_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
      a_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_11, z_11);
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_13 = ATgetArgument(t, 0);
            ATerm l_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_11, z_11);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = (ATerm) ATempty;
      }
    b_12 = t;
    t = SSL_table_put(y_11, z_11, (ATerm) ATinsert(CheckATermList(b_12), a_12));
    t = (ATerm) ATmakeAppl(sym__3, y_11, z_11, a_12);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_12 = NULL;
      t = term_n_6;
      t = j_0(t);
      o_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, o_12);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_12 = ATgetFirst((ATermList) t);
          l_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_12 = ATgetFirst((ATermList) t);
          n_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_12;
      t = h_0(t);
      t = m_12;
      t = i_0(t);
      s_12 = t;
      t = (ATerm) ATinsert(CheckATermList(n_12), s_12);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm u_12 = NULL;
    u_12 = t;
    if(match_string(t, "-i"))
      {
        t = u_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_12;
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm v_12 = NULL;
    v_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_12);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_12);
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_m_13;
    return(t);
  }
  t = ArgOption_3_0(p_3, q_3, r_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_6;
  t = whoami_0_0(t);
  w_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_12));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL;
        t = eval_config_0_0(t);
        g_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_4);
        t = g_4;
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm p_71 (ATerm), ATerm q_71 (ATerm), ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_71(t);
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm z_12 = NULL,a_13 = NULL,d_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_12 = ATgetFirst((ATermList) t);
            a_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_13;
        t = foldr_2_0(p_71, q_71, t);
        d_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_12, d_13);
        t = q_71(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_4 = NULL,i_4 = NULL;
  t = times_0_0(t);
  h_4 = t;
  t = SSL_explode_term(h_4);
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4;
  {
    ATerm s_3 (ATerm t)
    {
      t = term_p_12;
      return(t);
    }
    ATerm t_3 (ATerm t)
    {
      ATerm m_4 = NULL,n_4 = NULL;
      if(match_cons(t, sym__2))
        {
          m_4 = ATgetArgument(t, 0);
          n_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(m_4, n_4);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = t_13;
            t = SSL_addr(m_4, n_4);
          }
      }
      return(t);
    }
    t = foldr_2_0(s_3, t_3, t);
    g_13 = t;
    t = SSL_TicksToSeconds(g_13);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_13 = NULL,u_13 = NULL,w_13 = NULL;
  r_13 = t;
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_13;
        if((u_13 != t))
          {
            _fail(t);
          }
        t = r_13;
        ;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = r_13;
        {
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_13, w_13);
              ;
              LocalPopChoice(a_14);
            }
          else
            {
              t = z_13;
              t = SSL_gtr(u_13, w_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_13, w_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_14 = NULL,e_14 = NULL;
      b_14 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_5 = NULL;
            t = eval_config_0_0(t);
            c_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_5);
            t = c_5;
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
          }
        e_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_14, term_k_14);
        t = geq_0_0(t);
        t = b_14;
        t = c_76(t);
      }
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm h_14 = NULL,i_14 = NULL;
    t = run_time_0_0(t);
    h_14 = t;
    t = term_n_6;
    t = whoami_0_0(t);
    i_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), h_14), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_14));
    t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_14), h_14), term_o_14), i_14));
    return(t);
  }
  t = if_verbose1_1_0(u_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm d_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 = NULL;
            t = eval_config_0_0(t);
            g_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), g_5);
            t = g_5;
            ;
            LocalPopChoice(e_15);
          }
        else
          {
            t = d_15;
          }
      }
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm v_3 (ATerm t)
        {
          ATerm f_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = f_15;
              {
                ATerm j_15 = t;
                int k_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(k_15);
                  }
                else
                  {
                    t = j_15;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(v_3, t);
      }
    }
  t = q_78(t);
  return(t);
}
ATerm map_1_0 (ATerm y_64 (ATerm), ATerm t)
{
  ATerm j_14 (ATerm t)
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        t = Cons_2_0(y_64, j_14, t);
      }
    return(t);
  }
  t = j_14(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_14 = ATgetFirst((ATermList) t);
      m_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_14 = NULL,r_14 = NULL;
        t = m_14;
        t = g_0(t);
        q_14 = t;
        t = l_14;
        t = e_0(t);
        r_14 = t;
        t = m_14;
        {
          ATerm w_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_14), r_14);
            return(t);
          }
          t = reverse_acc_2_0(e_0, w_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm a_60 (ATerm), ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  v_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_14);
  s_14 = t;
  t = t_14;
  t = a_60(t);
  u_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_14), s_14);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 = NULL;
            t = eval_config_0_0(t);
            l_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_5);
            t = l_5;
            ;
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
          }
      }
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = t_15;
      {
        ATerm x_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(x_3, t);
      }
    }
  t = term_b_16;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm a_4 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, a_4, t);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm y_14 = NULL;
        y_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, y_14), term_c_16);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(b_4, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm b_60 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_15);
  z_14 = t;
  t = a_15;
  t = b_60(t);
  b_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_15), z_14);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_16 = ATgetFirst((ATermList) t);
                ATerm k_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_15;
          }
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = (ATerm) ATinsert(ATempty, g_15);
      }
    h_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_15);
    t = g_15;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_5 = NULL;
        t = eval_config_0_0(t);
        t_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_5);
        t = t_5;
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_b_17;
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_c_17;
        return(t);
      }
      t = Option_3_0(c_4, d_4, e_4, t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm f_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_d_17;
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = term_e_17;
          return(t);
        }
        t = Option_3_0(f_4, k_4, l_4, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_54 (ATerm), ATerm p_54 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  q_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_15 = ATgetFirst((ATermList) t);
      n_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_15);
  l_15 = t;
  t = m_15;
  t = o_54(t);
  o_15 = t;
  t = n_15;
  t = p_54(t);
  p_15 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(p_15), o_15), l_15);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_83 (ATerm), ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_17;
        t = m_83(t);
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
      }
    t = u_15;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm v_15 = NULL;
        v_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_15);
        t = (ATerm) ATmakeAppl(sym_Program_1, v_15);
        return(t);
      }
      ATerm t_4 (ATerm t)
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_17 = t;
            int l_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_17);
              }
            else
              {
                t = k_17;
                t = m_83(t);
                t = Cons_2_0(_id, t_4, t);
              }
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm x_15 = NULL,y_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_15 = ATgetFirst((ATermList) t);
                  y_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_15), (ATerm) ATmakeAppl(sym_Undefined_1, x_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_4, t_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = f_16;
  {
    ATerm v_4 (ATerm t)
    {
      ATerm m_17 = t;
      int n_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_83(t);
          ;
          LocalPopChoice(n_17);
        }
      else
        {
          t = m_17;
          {
            ATerm o_17 = t;
            int p_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_4 (ATerm t)
                {
                  ATerm i_16 = NULL;
                  i_16 = t;
                  if(match_string(t, "--help"))
                    {
                      t = i_16;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = i_16;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = i_16;
                        }
                    }
                  return(t);
                }
                ATerm x_4 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_q_17;
                  return(t);
                }
                ATerm y_4 (ATerm t)
                {
                  t = term_r_17;
                  return(t);
                }
                t = Option_3_0(w_4, x_4, y_4, t);
                ;
                LocalPopChoice(p_17);
              }
            else
              {
                t = o_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_4, t);
    {
      ATerm s_17 = t;
      int t_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_16 = NULL;
          n_16 = t;
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = n_16;
                {
                  ATerm w_17 = t;
                  int x_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm y_17 = t;
                        int z_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_6 = NULL;
                            t = eval_config_0_0(t);
                            o_6 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), o_6);
                            t = o_6;
                            ;
                            LocalPopChoice(z_17);
                          }
                        else
                          {
                            t = y_17;
                          }
                      }
                      ;
                      LocalPopChoice(x_17);
                    }
                  else
                    {
                      t = w_17;
                      {
                        ATerm z_4 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(z_4, t);
                      }
                    }
                  t = n_16;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm a_18 = t;
                  int b_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_7 = NULL;
                      t = eval_config_0_0(t);
                      k_7 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), k_7);
                      t = k_7;
                      ;
                      LocalPopChoice(b_18);
                    }
                  else
                    {
                      t = a_18;
                    }
                  t = n_16;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(t_17);
        }
      else
        {
          t = s_17;
          {
            ATerm c_18 = t;
            int d_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm b_5 (ATerm t)
                  {
                    if(((g_16 != NULL) && (g_16 != t)))
                      _fail(t);
                    else
                      g_16 = t;
                    return(t);
                  }
                  t = Undefined_1_0(b_5, t);
                  return(t);
                }
                t = fetch_1_0(a_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_16)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_16)), term_e_18));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(d_18);
              }
            else
              {
                t = c_18;
              }
          }
        }
      h_16 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = h_16;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t)
{
  ATerm q_16 = NULL;
  t = parse_options_1_0(s_78, t);
  q_16 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), q_16);
  t = q_16;
  t = u_78(t);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_78, t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm h_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_78(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_18);
            }
          else
            {
              t = h_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_78(t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        {
          ATerm l_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_18);
            }
          else
            {
              t = l_18;
              {
                ATerm n_18 = t;
                int o_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(o_18);
                  }
                else
                  {
                    t = n_18;
                    {
                      ATerm p_18 = t;
                      int q_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_5 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm i_5 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_r_18;
                            return(t);
                          }
                          ATerm k_5 (ATerm t)
                          {
                            t = term_s_18;
                            return(t);
                          }
                          t = Option_3_0(h_5, i_5, k_5, t);
                          ;
                          LocalPopChoice(q_18);
                        }
                      else
                        {
                          t = p_18;
                          {
                            ATerm t_18 = t;
                            int u_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_18);
                              }
                            else
                              {
                                t = t_18;
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
  ATerm e_5 (ATerm t)
  {
    ATerm m_5 (ATerm t)
    {
      ATerm r_16 = NULL,s_16 = NULL;
      r_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_7 = NULL;
            t = eval_config_0_0(t);
            u_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_7);
            t = u_7;
            ;
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
          }
        s_16 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, s_16));
        t = r_16;
      }
      return(t);
    }
    t = if_verbose2_1_0(m_5, t);
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    ATerm t_16 = NULL,u_16 = NULL,e_8 = NULL;
    t_16 = t;
    {
      ATerm x_18 = t;
      int y_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_16 != NULL) && (u_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_5, t);
          ;
          LocalPopChoice(y_18);
        }
      else
        {
          t = x_18;
          t = term_z_18;
          u_16 = t;
        }
      t = not_null(u_16);
      t = ReadFromFile_0_0(t);
      e_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_16, e_8);
      t = apply_strategy_1_0(b_78, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(d_5, d_78, e_5, f_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm p_5 (ATerm t)
    {
      ATerm v_16 = NULL;
      v_16 = t;
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              ATerm u_5 (ATerm t)
              {
                ATerm c_19 = t;
                int d_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_5 (ATerm t)
                    {
                      ATerm e_19 = t;
                      int f_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_6 (ATerm t)
                          {
                            ATerm w_16 = NULL;
                            w_16 = t;
                            t = SSL_is_string(w_16);
                            return(t);
                          }
                          t = Id_1_0(b_6, t);
                          ;
                          LocalPopChoice(f_19);
                        }
                      else
                        {
                          t = e_19;
                          {
                            ATerm d_6 (ATerm t)
                            {
                              ATerm r_8 = NULL;
                              r_8 = t;
                              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_8), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue))));
                              t = r_8;
                              return(t);
                            }
                            t = if_verbose2_1_0(d_6, t);
                          }
                        }
                      return(t);
                    }
                    ATerm y_5 (ATerm t)
                    {
                      ATerm x_16 = NULL;
                      x_16 = t;
                      t = SSL_is_int(x_16);
                      return(t);
                    }
                    ATerm a_6 (ATerm t)
                    {
                      ATerm e_6 (ATerm t)
                      {
                        ATerm g_19 = t;
                        int h_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm f_6 (ATerm t)
                            {
                              ATerm i_19 = t;
                              int j_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_6 (ATerm t)
                                  {
                                    ATerm y_16 = NULL;
                                    y_16 = t;
                                    t = SSL_is_string(y_16);
                                    return(t);
                                  }
                                  t = Id_1_0(h_6, t);
                                  ;
                                  LocalPopChoice(j_19);
                                }
                              else
                                {
                                  t = i_19;
                                  {
                                    ATerm i_6 (ATerm t)
                                    {
                                      ATerm a_9 = NULL;
                                      a_9 = t;
                                      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_9), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue))));
                                      t = a_9;
                                      return(t);
                                    }
                                    t = if_verbose2_1_0(i_6, t);
                                  }
                                }
                              return(t);
                            }
                            ATerm g_6 (ATerm t)
                            {
                              t = fc_List_1_0(fc_ProdItem_0_0, t);
                              return(t);
                            }
                            t = Prod_2_0(f_6, g_6, t);
                            ;
                            LocalPopChoice(h_19);
                          }
                        else
                          {
                            t = g_19;
                            {
                              ATerm k_6 (ATerm t)
                              {
                                ATerm f_9 = NULL;
                                f_9 = t;
                                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_9), (ATerm) ATmakeAppl(ATmakeSymbol("Not a Prod: ", 0, ATtrue))));
                                t = f_9;
                                return(t);
                              }
                              t = if_verbose2_1_0(k_6, t);
                            }
                          }
                        return(t);
                      }
                      t = fc_List_1_0(e_6, t);
                      return(t);
                    }
                    t = NonTermDec_3_0(x_5, y_5, a_6, t);
                    ;
                    LocalPopChoice(d_19);
                  }
                else
                  {
                    t = c_19;
                    {
                      ATerm l_6 (ATerm t)
                      {
                        ATerm i_10 = NULL;
                        i_10 = t;
                        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_10), (ATerm) ATmakeAppl(ATmakeSymbol("Not a NonTermDec: ", 0, ATtrue))));
                        t = i_10;
                        return(t);
                      }
                      t = if_verbose2_1_0(l_6, t);
                    }
                  }
                return(t);
              }
              t = fc_List_1_0(u_5, t);
              return(t);
            }
            t = TreeGrammar_1_0(s_5, t);
            ;
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            {
              ATerm m_6 (ATerm t)
              {
                ATerm d_11 = NULL;
                d_11 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_11), (ATerm) ATmakeAppl(ATmakeSymbol("Not a TreeGrammar: ", 0, ATtrue))));
                t = d_11;
                return(t);
              }
              t = if_verbose2_1_0(m_6, t);
            }
          }
        t = v_16;
      }
      return(t);
    }
    t = _2_0(_id, p_5, t);
    return(t);
  }
  t = iowrap_3_0(o_5, _fail, default_usage_0_0, t);
  return(t);
}
