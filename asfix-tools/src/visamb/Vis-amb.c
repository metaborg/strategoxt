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
Symbol sym_lexical_1;
Symbol sym_root_1;
Symbol sym_N_2;
Symbol sym_amb_abbr_2;
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
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_lit_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_parsetree_2;
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
  sym_lexical_1 = ATmakeSymbol("lexical", 1, ATfalse);
  ATprotectSymbol(sym_lexical_1);
  sym_root_1 = ATmakeSymbol("root", 1, ATfalse);
  ATprotectSymbol(sym_root_1);
  sym_N_2 = ATmakeSymbol("N", 2, ATfalse);
  ATprotectSymbol(sym_N_2);
  sym_amb_abbr_2 = ATmakeSymbol("amb-abbr", 2, ATfalse);
  ATprotectSymbol(sym_amb_abbr_2);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_z_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_c_18;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_h_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_l_12;
ATerm term_y_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_c_11;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_d_7;
ATerm term_y_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_r_6;
ATerm term_e_6;
ATerm term_w_5;
void init_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_6);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__3, term_c_16, term_d_16, term_w_5);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_85 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm e_84 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm lit_1_0 (ATerm q_62 (ATerm), ATerm);
ATerm prod_3_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm);
ATerm cf_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm lex_1_0 (ATerm n_62 (ATerm), ATerm);
ATerm Lexical_0_0 (ATerm);
ATerm abbrev_term_0_0 (ATerm);
ATerm appl_2_0 (ATerm j_63 (ATerm), ATerm k_63 (ATerm), ATerm);
ATerm yield_0_0 (ATerm);
ATerm abbrev_amb_0_0 (ATerm);
ATerm parsetree_2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm);
ATerm amb_1_0 (ATerm l_63 (ATerm), ATerm);
ATerm union_1_0 (ATerm s_75 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm);
ATerm bu_collect_1_0 (ATerm w_76 (ATerm), ATerm);
ATerm visamb_0_0 (ATerm);
ATerm _2_0 (ATerm f_55 (ATerm), ATerm g_55 (ATerm), ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_71 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm k_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_62 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm o_71 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_56 (ATerm), ATerm p_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_90 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm g_90 (ATerm), ATerm);
ATerm Vis_amb_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_0 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), b_0));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_5 = t;
    int y_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 = NULL;
        t = eval_config_0_0(t);
        o_0 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_0);
        t = o_0;
        ;
        LocalPopChoice(y_5);
      }
    else
      {
        t = x_5;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t)
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_77(t);
      ;
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        ATerm r_0 = NULL,t_0 = NULL,a_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_0 = ATgetFirst((ATermList) t);
            t_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_0;
        t = foldr_2_0(q_77, r_77, t);
        a_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_0, a_1);
        t = r_77(t);
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
  ATerm d_1 = NULL,p_0 = NULL,q_0 = NULL;
  t = times_0_0(t);
  p_0 = t;
  t = SSL_explode_term(p_0);
  if(match_cons(t, sym__2))
    {
      ATerm d_6 = ATgetArgument(t, 0);
      q_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_0;
  {
    ATerm e_0 (ATerm t)
    {
      t = term_e_6;
      return(t);
    }
    ATerm f_0 (ATerm t)
    {
      ATerm v_0 = NULL,x_0 = NULL;
      if(match_cons(t, sym__2))
        {
          v_0 = ATgetArgument(t, 0);
          x_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm g_6 = t;
        int h_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(v_0, x_0);
            ;
            LocalPopChoice(h_6);
          }
        else
          {
            t = g_6;
            t = SSL_addr(v_0, x_0);
          }
      }
      return(t);
    }
    t = foldr_2_0(e_0, f_0, t);
    d_1 = t;
    t = SSL_TicksToSeconds(d_1);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_2 = NULL,d_2 = NULL,e_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_2;
        if((d_2 != t))
          {
            _fail(t);
          }
        t = b_2;
        ;
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        t = b_2;
        {
          ATerm l_6 = t;
          int m_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_2, e_2);
              ;
              LocalPopChoice(m_6);
            }
          else
            {
              t = l_6;
              t = SSL_gtr(d_2, e_2);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_2, e_2);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_85 (ATerm), ATerm t)
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 = NULL,l_2 = NULL;
      j_2 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 = NULL;
            t = eval_config_0_0(t);
            o_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_1);
            t = o_1;
            ;
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
          }
        l_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_2, term_r_6);
        t = geq_0_0(t);
        t = j_2;
        t = h_85(t);
      }
      ;
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm i_0 (ATerm t)
  {
    ATerm n_2 = NULL,t_2 = NULL;
    t = run_time_0_0(t);
    n_2 = t;
    t = term_w_5;
    t = whoami_0_0(t);
    t_2 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), n_2), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_2));
    t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_6), n_2), term_u_6), t_2));
    return(t);
  }
  t = if_verbose1_1_0(i_0, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      u_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_2, term_y_6);
  t = open_stream_0_0(t);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, v_2);
  t = e_84(t);
  t = fclose_0_0(t);
  t = v_2;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  y_2 = t;
  {
    ATerm m_0 (ATerm t)
    {
      ATerm a_7 = t;
      int c_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((z_2 != NULL) && (z_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_0, t);
          ;
          LocalPopChoice(c_7);
        }
      else
        {
          t = a_7;
          t = term_d_7;
          if(((z_2 != NULL) && (z_2 != t)))
            _fail(t);
          else
            z_2 = t;
        }
      return(t);
    }
    t = _2_0(m_0, _id, t);
    t = y_2;
    {
      ATerm s_0 (ATerm t)
      {
        ATerm q_1 = NULL;
        q_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_2), q_1);
        return(t);
      }
      t = _2_0(_id, s_0, t);
      {
        ATerm e_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_0 (ATerm t)
            {
              ATerm y_0 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(y_0, t);
              return(t);
            }
            ATerm w_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                ATerm a_3 = NULL,d_3 = NULL,e_3 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm g_7 = ATgetArgument(t, 0);
                    if(match_cons(g_7, sym_Stream_1))
                      {
                        a_3 = ATgetArgument(g_7, 0);
                      }
                    else
                      _fail(t);
                    d_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(a_3, d_3);
                e_3 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_3);
                return(t);
              }
              t = WriteToFile_1_0(z_0, t);
              return(t);
            }
            t = _2_0(u_0, w_0, t);
            ;
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            {
              ATerm b_1 (ATerm t)
              {
                ATerm c_1 (ATerm t)
                {
                  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm h_7 = ATgetArgument(t, 0);
                      if(match_cons(h_7, sym_Stream_1))
                        {
                          f_3 = ATgetArgument(h_7, 0);
                        }
                      else
                        _fail(t);
                      g_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(f_3, g_3);
                  h_3 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), h_3);
                  i_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, i_3);
                  return(t);
                }
                t = WriteToFile_1_0(c_1, t);
                return(t);
              }
              t = _2_0(_id, b_1, t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm lit_1_0 (ATerm q_62 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,v_3 = NULL,w_3 = NULL;
  w_3 = t;
  if(match_cons(t, sym_lit_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_3);
  l_3 = t;
  t = m_3;
  t = q_62(t);
  v_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, v_3), l_3);
  return(t);
}
ATerm prod_3_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,x_4 = NULL;
  x_4 = t;
  if(match_cons(t, sym_prod_3))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
      o_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_4);
  z_3 = t;
  t = l_4;
  t = g_63(t);
  t_4 = t;
  t = m_4;
  t = h_63(t);
  u_4 = t;
  t = o_4;
  t = i_63(t);
  v_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, t_4, u_4, v_4), z_3);
  return(t);
}
ATerm cf_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm s_5 = NULL,b_6 = NULL,f_6 = NULL,i_6 = NULL;
  i_6 = t;
  if(match_cons(t, sym_cf_1))
    {
      b_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_6);
  s_5 = t;
  t = b_6;
  t = m_62(t);
  f_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, f_6), s_5);
  return(t);
}
ATerm lex_1_0 (ATerm n_62 (ATerm), ATerm t)
{
  ATerm s_6 = NULL,w_6 = NULL,x_6 = NULL,z_6 = NULL;
  z_6 = t;
  if(match_cons(t, sym_lex_1))
    {
      w_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_6);
  s_6 = t;
  t = w_6;
  t = n_62(t);
  x_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, x_6), s_6);
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm j_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_7 = NULL;
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            t = lex_1_0(_id, t);
            return(t);
          }
          ATerm i_1 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(h_1, i_1, t);
          return(t);
        }
        ATerm g_1 (ATerm t)
        {
          t = cf_1_0(_id, t);
          return(t);
        }
        t = prod_3_0(f_1, g_1, _id, t);
        return(t);
      }
      t = appl_2_0(e_1, _id, t);
      t = yield_0_0(t);
      i_7 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, i_7));
      ;
      LocalPopChoice(l_7);
    }
  else
    {
      t = j_7;
      {
        ATerm j_1 (ATerm t)
        {
          ATerm k_1 (ATerm t)
          {
            t = lit_1_0(_id, t);
            return(t);
          }
          t = prod_3_0(_id, k_1, _id, t);
          return(t);
        }
        t = appl_2_0(j_1, _id, t);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_8 (ATerm c_8, ATerm t)
      {
        t = SSL_is_int(c_8);
        return(t);
      }
      ATerm g_8 = NULL,i_8 = NULL,j_8 = NULL;
      g_8 = t;
      if(match_cons(t, sym_amb_1))
        {
          i_8 = ATgetArgument(t, 0);
          t = i_8;
          {
            ATerm o_7 = t;
            int p_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_8 = ATgetFirst((ATermList) t);
                    {
                      ATerm q_7 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(p_7);
                {
                  ATerm r_7 = t;
                  int s_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_8(g_8, t);
                      ;
                      LocalPopChoice(s_7);
                    }
                  else
                    {
                      t = r_7;
                      t = j_8;
                    }
                }
              }
            else
              {
                t = o_7;
                t = x_8(g_8, t);
              }
          }
        }
      else
        {
          t = x_8(g_8, t);
        }
      ;
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm y_1 = NULL,f_2 = NULL,p_2 = NULL;
        y_1 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm t_7 = ATgetArgument(t, 0);
            if(match_cons(t_7, sym_prod_3))
              {
                ATerm w_7 = ATgetArgument(t_7, 0);
                p_2 = ATgetArgument(t_7, 1);
                {
                  ATerm x_7 = ATgetArgument(t_7, 2);
                }
              }
            else
              _fail(t);
            {
              ATerm u_7 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = y_1;
        {
          ATerm z_7 = t;
          int a_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              ;
              LocalPopChoice(a_8);
            }
          else
            {
              t = z_7;
              {
                ATerm s_2 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    ATerm b_8 = ATgetArgument(t, 0);
                    s_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_2;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
          f_2 = t;
          t = (ATerm) ATmakeAppl(sym_N_2, p_2, f_2);
        }
      }
    }
  return(t);
}
ATerm appl_2_0 (ATerm j_63 (ATerm), ATerm k_63 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,d_9 = NULL,e_9 = NULL,g_9 = NULL,h_9 = NULL;
  h_9 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_8 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_9);
  y_8 = t;
  t = z_8;
  t = j_63(t);
  e_9 = t;
  t = d_9;
  t = k_63(t);
  g_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, e_9, g_9), y_8);
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm k_9 = NULL;
  ATerm o_9 (ATerm t)
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL;
        ATerm l_1 (ATerm t)
        {
          t = map_1_0(o_9, t);
          return(t);
        }
        t = appl_2_0(_id, l_1, t);
        if(match_cons(t, sym_appl_2))
          {
            ATerm f_8 = ATgetArgument(t, 0);
            l_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_9;
        t = concat_0_0(t);
        ;
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        {
          ATerm m_9 = NULL;
          m_9 = t;
          t = (ATerm) ATinsert(ATempty, m_9);
        }
      }
    return(t);
  }
  t = o_9(t);
  k_9 = t;
  t = SSL_implode_string(k_9);
  return(t);
}
ATerm abbrev_amb_0_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      p_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_9;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_9 = ATgetFirst((ATermList) t);
      {
        ATerm h_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_9;
  t = yield_0_0(t);
  r_9 = t;
  t = p_9;
  t = map_1_0(abbrev_term_0_0, t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, r_9, s_9);
  return(t);
}
ATerm parsetree_2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  a_11 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_11);
  v_10 = t;
  t = w_10;
  t = q_63(t);
  y_10 = t;
  t = x_10;
  t = r_63(t);
  z_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, y_10, z_10), v_10);
  return(t);
}
ATerm amb_1_0 (ATerm l_63 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  z_9 = t;
  if(match_cons(t, sym_amb_1))
    {
      x_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_9);
  w_9 = t;
  t = x_9;
  t = l_63(t);
  y_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, y_9), w_9);
  return(t);
}
ATerm union_1_0 (ATerm s_75 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10;
  {
    ATerm h_10 (ATerm t)
    {
      ATerm k_8 = t;
      int l_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_10;
          ;
          LocalPopChoice(l_8);
        }
      else
        {
          t = k_8;
          {
            ATerm m_8 = t;
            int n_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_3 = NULL,c_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_3 = ATgetFirst((ATermList) t);
                    c_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_10;
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm j_3 = NULL;
                    j_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_3, j_3);
                    t = s_75(t);
                    return(t);
                  }
                  t = fetch_1_0(m_1, t);
                  t = c_3;
                  t = h_10(t);
                }
                ;
                LocalPopChoice(n_8);
              }
            else
              {
                t = m_8;
                t = Cons_2_0(_id, h_10, t);
              }
          }
        }
      return(t);
    }
    t = h_10(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_77(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      {
        ATerm k_10 = NULL,l_10 = NULL,o_10 = NULL,p_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_10 = ATgetFirst((ATermList) t);
            l_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_10;
        t = u_77(t);
        o_10 = t;
        t = l_10;
        t = foldr_3_0(s_77, t_77, u_77, t);
        p_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_10, p_10);
        t = t_77(t);
      }
    }
  return(t);
}
ATerm bu_collect_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 (ATerm t)
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 = NULL,p_3 = NULL;
            t = SRTS_some(u_10, t);
            o_3 = t;
            t = SSL_explode_term(o_3);
            if(match_cons(t, sym__2))
              {
                ATerm u_8 = ATgetArgument(t, 0);
                p_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_3;
            {
              ATerm n_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm p_1 (ATerm t)
              {
                ATerm s_1 (ATerm t)
                {
                  ATerm t_3 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      t_3 = ATgetArgument(t, 0);
                      if((t_3 != ATgetArgument(t, 1)))
                        {
                          _fail(ATgetArgument(t, 1));
                        }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = union_1_0(s_1, t);
                return(t);
              }
              ATerm r_1 (ATerm t)
              {
                ATerm v_8 = t;
                int w_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(w_76, _id, t);
                    ;
                    LocalPopChoice(w_8);
                  }
                else
                  {
                    t = v_8;
                    t = (ATerm) ATempty;
                  }
                return(t);
              }
              t = foldr_3_0(n_1, p_1, r_1, t);
            }
            ;
            LocalPopChoice(t_8);
          }
        else
          {
            t = s_8;
            {
              ATerm t_10 = NULL;
              t = w_76(t);
              t_10 = t;
              t = (ATerm) ATinsert(ATempty, t_10);
            }
          }
        return(t);
      }
      t = u_10(t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      t = amb_1_0(_id, t);
      return(t);
    }
    t = bu_collect_1_0(u_1, t);
    return(t);
  }
  t = parsetree_2_0(t_1, _id, t);
  {
    ATerm v_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm d_4 = NULL;
        t = abbrev_amb_0_0(t);
        d_4 = t;
        t = (ATerm) ATmakeAppl(sym_root_1, d_4);
        return(t);
      }
      t = map_1_0(x_1, t);
      return(t);
    }
    ATerm w_1 (ATerm t)
    {
      ATerm e_4 = NULL;
      e_4 = t;
      t = SSL_int_to_string(e_4);
      return(t);
    }
    t = parsetree_2_0(v_1, w_1, t);
  }
  return(t);
}
ATerm _2_0 (ATerm f_55 (ATerm), ATerm g_55 (ATerm), ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym__2))
    {
      e_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_11);
  d_11 = t;
  t = e_11;
  t = f_55(t);
  g_11 = t;
  t = f_11;
  t = g_55(t);
  h_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, g_11, h_11), d_11);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  l_11 = t;
  t = dtime_0_0(t);
  t = l_11;
  t = g_87(t);
  m_11 = t;
  t = dtime_0_0(t);
  n_11 = t;
  t = m_11;
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_11), (ATerm) ATmakeAppl(sym_Runtime_1, n_11)), p_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_12 (ATerm x_11, ATerm t)
  {
    t = SSL_fclose(x_11);
    return(t);
  }
  ATerm a_12 = NULL,b_12 = NULL;
  b_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_12 = ATgetArgument(t, 0);
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_12);
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            t = d_12(b_12, t);
          }
      }
    }
  else
    {
      t = d_12(b_12, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  t = SSL_stdin_stream();
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_12 = NULL;
  t = SSL_stdout_stream();
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_12 = NULL;
  t = SSL_stderr_stream();
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      ATerm f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL,p_4 = NULL;
        n_4 = t;
        t = SSL_explode_term(n_4);
        if(match_cons(t, sym__2))
          {
            ATerm n_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_9 = ATgetArgument(t, 1);
              if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
                {
                  p_4 = ATgetFirst((ATermList) t_9);
                  {
                    ATerm u_9 = (ATerm) ATgetNext((ATermList) t_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = p_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = p_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = p_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        {
          ATerm v_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
              ATerm z_1 (ATerm t)
              {
                ATerm p_12 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    p_12 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = p_12;
                return(t);
              }
              t = _2_0(z_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_12 = ATgetArgument(t, 0);
                  n_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(m_12, n_12);
              o_12 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_12);
              ;
              LocalPopChoice(a_10);
            }
          else
            {
              t = v_9;
              {
                ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
                ATerm a_2 (ATerm t)
                {
                  ATerm t_12 = NULL;
                  t_12 = t;
                  t = SSL_is_string(t_12);
                  return(t);
                }
                t = _2_0(a_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_12 = ATgetArgument(t, 0);
                    r_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_12, r_12);
                s_12 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, s_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12 = NULL;
      x_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_12, term_d_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm q_4 = NULL;
        q_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = q_4;
        _fail(t);
      }
    }
  u_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(w_12);
  v_12 = t;
  t = u_12;
  t = fclose_0_0(t);
  t = v_12;
  return(t);
}
ATerm fetch_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  ATerm c_13 (ATerm t)
  {
    ATerm e_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_71, _id, t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = e_10;
        t = Cons_2_0(_id, c_13, t);
      }
    return(t);
  }
  t = c_13(t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm e_13 = NULL;
    e_13 = t;
    if(match_string(t, "-k"))
      {
        t = e_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = e_13;
      }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm f_13 = NULL,g_13 = NULL;
    f_13 = t;
    t = SSL_string_to_int(f_13);
    g_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_13);
    t = f_13;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_j_10;
    return(t);
  }
  t = ArgOption_3_0(c_2, g_2, h_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm i_13 = NULL;
        i_13 = t;
        if(match_string(t, "-S"))
          {
            t = i_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = i_13;
          }
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_q_10;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_r_10;
        return(t);
      }
      t = Option_3_0(i_2, k_2, m_2, t);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm s_10 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              ATerm j_13 = NULL,k_13 = NULL;
              j_13 = t;
              t = SSL_string_to_int(j_13);
              k_13 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_13);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, j_13);
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              t = term_c_11;
              return(t);
            }
            t = ArgOption_3_0(o_2, q_2, r_2, t);
            ;
            LocalPopChoice(b_11);
          }
        else
          {
            t = s_10;
            {
              ATerm w_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm k_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_j_11;
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_k_11;
                return(t);
              }
              t = Option_3_0(w_2, k_3, n_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_13 = NULL;
      t = term_w_5;
      t = d_0(t);
      p_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_11, term_r_11, p_13);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_13 = ATgetFirst((ATermList) t);
          o_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_13;
      t = a_0(t);
      t = term_w_5;
      t = c_0(t);
      s_13 = t;
      t = (ATerm) ATinsert(CheckATermList(o_13), s_13);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm u_13 = NULL;
    u_13 = t;
    if(match_string(t, "-o"))
      {
        t = u_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = u_13;
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm v_13 = NULL;
    v_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_13);
    t = (ATerm) ATmakeAppl(sym_Output_1, v_13);
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_s_11;
    return(t);
  }
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  if(match_cons(t, sym__3))
    {
      y_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
      a_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_13, z_13);
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_11 = ATgetArgument(t, 0);
            ATerm w_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_13, z_13);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATempty;
      }
    b_14 = t;
    t = SSL_table_put(y_13, z_13, (ATerm) ATinsert(CheckATermList(b_14), a_14));
    t = (ATerm) ATmakeAppl(sym__3, y_13, z_13, a_14);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_14 = NULL;
      t = term_w_5;
      t = l_0(t);
      s_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_11, term_r_11, s_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm x_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_14 = ATgetFirst((ATermList) t);
          p_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_14 = ATgetFirst((ATermList) t);
          r_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_14;
      t = j_0(t);
      t = q_14;
      t = k_0(t);
      x_14 = t;
      t = (ATerm) ATinsert(CheckATermList(r_14), x_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm z_14 = NULL;
    z_14 = t;
    if(match_string(t, "-i"))
      {
        t = z_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = z_14;
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm a_15 = NULL;
    a_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), a_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, a_15);
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_y_11;
    return(t);
  }
  t = ArgOption_3_0(u_3, x_3, y_3, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,e_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_15 = ATgetFirst((ATermList) t);
      e_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_15 = NULL,j_15 = NULL;
        t = e_15;
        t = h_0(t);
        i_15 = t;
        t = c_15;
        t = g_0(t);
        j_15 = t;
        t = e_15;
        {
          ATerm a_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_15), j_15);
            return(t);
          }
          t = reverse_acc_2_0(g_0, a_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_5;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm k_62 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  n_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_15);
  k_15 = t;
  t = l_15;
  t = k_62(t);
  m_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, m_15), k_15);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_15 = NULL;
  ATerm z_11 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm g_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 = NULL;
            t = eval_config_0_0(t);
            a_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_5);
            t = a_5;
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = g_12;
          }
        q_15 = t;
      }
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = z_11;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm c_4 (ATerm t)
          {
            if(((q_15 != NULL) && (q_15 != t)))
              _fail(t);
            else
              q_15 = t;
            return(t);
          }
          t = Program_1_0(c_4, t);
          return(t);
        }
        t = fetch_1_0(b_4, t);
      }
    }
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_12), not_null(q_15)), term_l_12);
        t = echo_0_0(t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
      }
    t = term_z_12;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    {
      ATerm f_4 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, f_4, t);
      {
        ATerm g_4 (ATerm t)
        {
          ATerm r_15 = NULL;
          r_15 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, r_15), term_a_13);
          t = echo_0_0(t);
          return(t);
        }
        t = map_1_0(g_4, t);
        {
          ATerm b_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_14), term_x_13), term_w_13), term_t_13), term_r_13), term_q_13), term_m_13), term_l_13), term_h_13);
              t = echo_0_0(t);
              ;
              LocalPopChoice(d_13);
            }
          else
            {
              t = b_13;
            }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm l_62 (ATerm), ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_15);
  s_15 = t;
  t = t_15;
  t = l_62(t);
  u_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_15), s_15);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_14 = ATgetFirst((ATermList) t);
                ATerm g_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_15;
          }
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATinsert(ATempty, z_15);
      }
    a_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), a_16);
    t = z_15;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_5 = NULL;
        t = eval_config_0_0(t);
        f_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_5);
        t = f_5;
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm g_16 = NULL,h_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_16 = ATgetFirst((ATermList) t);
            h_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_16;
        {
          ATerm h_4 (ATerm t)
          {
            t = h_16;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(h_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm n_16 (ATerm t)
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_16, t);
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_72(t);
      }
    return(t);
  }
  t = n_16(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm p_16 = NULL;
  ATerm i_4 (ATerm t)
  {
    ATerm q_16 = NULL;
    q_16 = t;
    t = SSL_explode_string(q_16);
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    ATerm r_16 = NULL;
    r_16 = t;
    t = SSL_explode_string(r_16);
    return(t);
  }
  t = _2_0(i_4, j_4, t);
  {
    ATerm o_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_16 = NULL,u_16 = NULL;
        if(match_cons(t, sym__2))
          {
            t_16 = ATgetArgument(t, 0);
            u_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_16;
        {
          ATerm k_4 (ATerm t)
          {
            t = u_16;
            return(t);
          }
          t = at_end_1_0(k_4, t);
        }
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = o_14;
        {
          ATerm i_5 = NULL,k_5 = NULL;
          i_5 = t;
          t = SSL_explode_term(i_5);
          if(match_cons(t, sym__2))
            {
              ATerm u_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              k_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_5;
          t = concat_0_0(t);
        }
      }
    p_16 = t;
    t = SSL_implode_string(p_16);
  }
  return(t);
}
ATerm map_1_0 (ATerm o_71 (ATerm), ATerm t)
{
  ATerm z_16 (ATerm t)
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        t = Cons_2_0(o_71, z_16, t);
      }
    return(t);
  }
  t = z_16(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_17 = NULL;
      f_17 = t;
      t = SSL_is_string(f_17);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = y_14;
      {
        ATerm d_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_4 (ATerm t)
            {
              ATerm g_15 = t;
              int h_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(h_15);
                }
              else
                {
                  t = g_15;
                }
              return(t);
            }
            t = map_1_0(r_4, t);
            ;
            LocalPopChoice(f_15);
          }
        else
          {
            t = d_15;
            {
              ATerm j_17 = NULL,k_17 = NULL,m_17 = NULL;
              j_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_17 = ATgetArgument(t, 0);
                  t = k_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_17 = ATgetArgument(t, 0);
                      t = k_17;
                      {
                        ATerm o_15 = t;
                        int p_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_17);
                            {
                              ATerm w_15 = t;
                              int x_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_6 = NULL;
                                  t = eval_config_0_0(t);
                                  c_6 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_17, c_6);
                                  t = c_6;
                                  ;
                                  LocalPopChoice(x_15);
                                }
                              else
                                {
                                  t = w_15;
                                }
                            }
                            ;
                            LocalPopChoice(p_15);
                          }
                        else
                          {
                            t = o_15;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_17), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = k_17;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_17 = NULL,r_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_17 = ATgetArgument(t, 0);
                          m_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_17;
                      t = eval_config_0_0(t);
                      q_17 = t;
                      t = m_17;
                      t = eval_config_0_0(t);
                      r_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_17, r_17);
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
  ATerm y_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm w_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_e_16;
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        t = term_f_16;
        return(t);
      }
      t = Option_3_0(s_4, w_4, y_4, t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = y_15;
      {
        ATerm z_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_i_16;
          return(t);
        }
        ATerm c_5 (ATerm t)
        {
          t = term_j_16;
          return(t);
        }
        t = Option_3_0(z_4, b_5, c_5, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_56 (ATerm), ATerm p_56 (ATerm), ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  b_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_17 = ATgetFirst((ATermList) t);
      y_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_18);
  w_17 = t;
  t = x_17;
  t = o_56(t);
  z_17 = t;
  t = y_17;
  t = p_56(t);
  a_18 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_18), z_17), w_17);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_90 (ATerm), ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_16;
        t = h_90(t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
      }
    t = f_18;
    {
      ATerm d_5 (ATerm t)
      {
        ATerm g_18 = NULL;
        g_18 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_18);
        t = (ATerm) ATmakeAppl(sym_Program_1, g_18);
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        ATerm o_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(w_16);
              }
            else
              {
                t = v_16;
                t = h_90(t);
                t = Cons_2_0(_id, e_5, t);
              }
            ;
            LocalPopChoice(s_16);
          }
        else
          {
            t = o_16;
            {
              ATerm i_18 = NULL,j_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_18 = ATgetFirst((ATermList) t);
                  j_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_18), (ATerm) ATmakeAppl(sym_Undefined_1, i_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(d_5, e_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = q_18;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm x_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_90(t);
          ;
          LocalPopChoice(y_16);
        }
      else
        {
          t = x_16;
          {
            ATerm a_17 = t;
            int b_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm t_18 = NULL;
                  t_18 = t;
                  if(match_string(t, "--help"))
                    {
                      t = t_18;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = t_18;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = t_18;
                        }
                    }
                  return(t);
                }
                ATerm j_5 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_c_17;
                  return(t);
                }
                ATerm l_5 (ATerm t)
                {
                  t = term_d_17;
                  return(t);
                }
                t = Option_3_0(h_5, j_5, l_5, t);
                ;
                LocalPopChoice(b_17);
              }
            else
              {
                t = a_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_5, t);
    {
      ATerm e_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_19 = NULL;
          a_19 = t;
          {
            ATerm h_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_19;
                {
                  ATerm l_17 = t;
                  int n_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm o_17 = t;
                        int p_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_7 = NULL;
                            t = eval_config_0_0(t);
                            b_7 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), b_7);
                            t = b_7;
                            ;
                            LocalPopChoice(p_17);
                          }
                        else
                          {
                            t = o_17;
                          }
                      }
                      ;
                      LocalPopChoice(n_17);
                    }
                  else
                    {
                      t = l_17;
                      {
                        ATerm m_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(m_5, t);
                      }
                    }
                  t = a_19;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = h_17;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm s_17 = t;
                  int t_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_7 = NULL;
                      t = eval_config_0_0(t);
                      k_7 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), k_7);
                      t = k_7;
                      ;
                      LocalPopChoice(t_17);
                    }
                  else
                    {
                      t = s_17;
                    }
                  t = a_19;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(g_17);
        }
      else
        {
          t = e_17;
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_5 (ATerm t)
                {
                  ATerm o_5 (ATerm t)
                  {
                    if(((r_18 != NULL) && (r_18 != t)))
                      _fail(t);
                    else
                      r_18 = t;
                    return(t);
                  }
                  t = Undefined_1_0(o_5, t);
                  return(t);
                }
                t = fetch_1_0(n_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_18)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_18)), term_c_18));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
              }
          }
        }
      s_18 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = s_18;
    }
  }
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_option_0_0(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm h_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = output_option_0_0(t);
              ;
              LocalPopChoice(k_18);
            }
          else
            {
              t = h_18;
              {
                ATerm l_18 = t;
                int m_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_5 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm r_5 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                      t = term_n_18;
                      return(t);
                    }
                    ATerm t_5 (ATerm t)
                    {
                      t = term_o_18;
                      return(t);
                    }
                    t = Option_3_0(q_5, r_5, t_5, t);
                    ;
                    LocalPopChoice(m_18);
                  }
                else
                  {
                    t = l_18;
                    {
                      ATerm p_18 = t;
                      int u_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = verbose_option_0_0(t);
                          ;
                          LocalPopChoice(u_18);
                        }
                      else
                        {
                          t = p_18;
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
  t = parse_options_1_0(p_5, t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_19 = NULL,v_7 = NULL,y_7 = NULL;
        h_19 = t;
        {
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_5 (ATerm t)
              {
                if(match_cons(t, sym_Input_1))
                  {
                    if(((v_7 != NULL) && (v_7 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      v_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(u_5, t);
              ;
              LocalPopChoice(y_18);
            }
          else
            {
              t = x_18;
              t = term_z_18;
              v_7 = t;
            }
          t = not_null(v_7);
          t = ReadFromFile_0_0(t);
          y_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_19, y_7);
          {
            ATerm v_5 (ATerm t)
            {
              t = _2_0(_id, visamb_0_0, t);
              return(t);
            }
            t = apply_strategy_1_0(v_5, t);
            t = output_file_0_0(t);
            t = report_success_0_0(t);
          }
        }
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = Vis_amb_0_0(t);
  return(t);
}
