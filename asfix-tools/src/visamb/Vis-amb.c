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
ATerm term_a_19;
ATerm term_u_18;
ATerm term_p_18;
ATerm term_c_18;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_m_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
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
ATerm term_z_11;
ATerm term_y_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_f_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_j_6;
ATerm term_d_6;
void init_constant_terms (void)
{
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_6);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
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
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__3, term_a_16, term_b_16, term_d_6);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_0 (ATerm);
ATerm f_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_91 (ATerm), ATerm);
ATerm i_0 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm p_90 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm lit_1_0 (ATerm b_69 (ATerm), ATerm);
ATerm prod_3_0 (ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm);
ATerm cf_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm lex_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm Lexical_0_0 (ATerm);
ATerm n_8 (ATerm l_7, ATerm);
ATerm abbrev_term_0_0 (ATerm);
ATerm appl_2_0 (ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm);
ATerm yield_0_0 (ATerm);
ATerm abbrev_amb_0_0 (ATerm);
ATerm parsetree_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm);
ATerm amb_1_0 (ATerm w_69 (ATerm), ATerm);
ATerm union_1_0 (ATerm e_82 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm bu_collect_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm visamb_0_0 (ATerm);
ATerm _2_0 (ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm d_12 (ATerm x_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm i_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm y_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_68 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_68 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm t_4 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm z_77 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_62 (ATerm), ATerm a_63 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_96 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm parse_options_1_0 (ATerm r_96 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm c_6 (ATerm);
ATerm Vis_amb_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_0 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_6;
  t = whoami_0_0(t);
  c_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), c_0));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm f_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_0 = NULL;
        t = eval_config_0_0(t);
        p_0 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_0);
        t = p_0;
        ;
        LocalPopChoice(g_6);
      }
    else
      {
        t = f_6;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t)
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_84(t);
      ;
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      {
        ATerm n_0 = NULL,o_0 = NULL,y_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_0 = ATgetFirst((ATermList) t);
            o_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_0;
        t = foldr_2_0(b_84, c_84, t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_0, y_0);
        t = c_84(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_0 (ATerm t)
{
  t = term_j_6;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL;
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_0, x_0);
        ;
        LocalPopChoice(l_6);
      }
    else
      {
        t = k_6;
        t = SSL_addr(w_0, x_0);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_1 = NULL,q_0 = NULL,r_0 = NULL;
  t = times_0_0(t);
  q_0 = t;
  t = SSL_explode_term(q_0);
  if(match_cons(t, sym__2))
    {
      ATerm m_6 = ATgetArgument(t, 0);
      r_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_0;
  t = foldr_2_0(e_0, f_0, t);
  e_1 = t;
  t = SSL_TicksToSeconds(e_1);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_1 = NULL,a_2 = NULL,d_2 = NULL;
  w_1 = t;
  if(match_cons(t, sym__2))
    {
      a_2 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_2;
        if((a_2 != t))
          {
            _fail(t);
          }
        t = w_1;
        ;
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        t = w_1;
        {
          ATerm p_6 = t;
          int q_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_2, d_2);
              ;
              LocalPopChoice(q_6);
            }
          else
            {
              t = p_6;
              t = SSL_gtr(a_2, d_2);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_2, d_2);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_91 (ATerm), ATerm t)
{
  ATerm r_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 = NULL,k_2 = NULL;
      h_2 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_6 = t;
        int u_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 = NULL;
            t = eval_config_0_0(t);
            x_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_1);
            t = x_1;
            ;
            LocalPopChoice(u_6);
          }
        else
          {
            t = t_6;
          }
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_2, term_v_6);
        t = geq_0_0(t);
        t = h_2;
        t = z_91(t);
      }
      ;
      LocalPopChoice(s_6);
    }
  else
    {
      t = r_6;
    }
  return(t);
}
ATerm i_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL;
  t = run_time_0_0(t);
  n_2 = t;
  t = term_d_6;
  t = whoami_0_0(t);
  o_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), n_2), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), o_2));
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_6), n_2), term_y_6), o_2));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_0, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_2, term_a_7);
  t = open_stream_0_0(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, r_2);
  t = p_90(t);
  t = fclose_0_0(t);
  t = r_2;
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = fetch_1_0(z_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = WriteToFile_1_0(a_1, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,c_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_7 = ATgetArgument(t, 0);
      if(match_cons(b_7, sym_Stream_1))
        {
          v_2 = ATgetArgument(b_7, 0);
        }
      else
        _fail(t);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(v_2, w_2);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_3);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = WriteToFile_1_0(c_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_7 = ATgetArgument(t, 0);
      if(match_cons(c_7, sym_Stream_1))
        {
          d_3 = ATgetArgument(c_7, 0);
        }
      else
        _fail(t);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(d_3, e_3);
  f_3 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), f_3);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_3);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  t_2 = t;
  {
    ATerm m_0 (ATerm t)
    {
      ATerm d_7 = t;
      int e_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((u_2 != NULL) && (u_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_0, t);
          ;
          LocalPopChoice(e_7);
        }
      else
        {
          t = d_7;
          t = term_f_7;
          if(((u_2 != NULL) && (u_2 != t)))
            _fail(t);
          else
            u_2 = t;
        }
      return(t);
    }
    t = _2_0(m_0, _id, t);
    t = t_2;
    {
      ATerm t_0 (ATerm t)
      {
        ATerm y_1 = NULL;
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_2), y_1);
        return(t);
      }
      t = _2_0(_id, t_0, t);
      {
        ATerm g_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(u_0, v_0, t);
            ;
            LocalPopChoice(h_7);
          }
        else
          {
            t = g_7;
            t = _2_0(_id, b_1, t);
          }
      }
    }
  }
  return(t);
}
ATerm lit_1_0 (ATerm b_69 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  m_3 = t;
  if(match_cons(t, sym_lit_1))
    {
      k_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  j_3 = t;
  t = k_3;
  t = b_69(t);
  l_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, l_3), j_3);
  return(t);
}
ATerm prod_3_0 (ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,v_3 = NULL,w_3 = NULL,z_3 = NULL,a_4 = NULL;
  a_4 = t;
  if(match_cons(t, sym_prod_3))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
      t_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_4);
  p_3 = t;
  t = r_3;
  t = r_69(t);
  v_3 = t;
  t = s_3;
  t = s_69(t);
  w_3 = t;
  t = t_3;
  t = t_69(t);
  z_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, v_3, w_3, z_3), p_3);
  return(t);
}
ATerm cf_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,n_4 = NULL,v_4 = NULL;
  v_4 = t;
  if(match_cons(t, sym_cf_1))
    {
      l_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_4);
  k_4 = t;
  t = l_4;
  t = x_68(t);
  n_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, n_4), k_4);
  return(t);
}
ATerm lex_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,l_5 = NULL;
  l_5 = t;
  if(match_cons(t, sym_lex_1))
    {
      i_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_5);
  h_5 = t;
  t = i_5;
  t = y_68(t);
  j_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, j_5), h_5);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = prod_3_0(f_1, g_1, _id, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = Cons_2_0(h_1, i_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = cf_1_0(_id, t);
  return(t);
}
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
ATerm j_1 (ATerm t)
{
  t = prod_3_0(_id, k_1, _id, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = lit_1_0(_id, t);
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_6 = NULL;
      t = appl_2_0(d_1, _id, t);
      t = yield_0_0(t);
      e_6 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, e_6));
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      t = appl_2_0(j_1, _id, t);
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm n_8 (ATerm l_7, ATerm t)
{
  t = SSL_is_int(l_7);
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm k_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_7 = NULL,r_7 = NULL,w_7 = NULL;
      q_7 = t;
      if(match_cons(t, sym_amb_1))
        {
          r_7 = ATgetArgument(t, 0);
          t = r_7;
          {
            ATerm n_7 = t;
            int o_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    w_7 = ATgetFirst((ATermList) t);
                    {
                      ATerm p_7 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(o_7);
                {
                  ATerm s_7 = t;
                  int u_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = n_8(q_7, t);
                      ;
                      LocalPopChoice(u_7);
                    }
                  else
                    {
                      t = s_7;
                      t = w_7;
                    }
                }
              }
            else
              {
                t = n_7;
                t = n_8(q_7, t);
              }
          }
        }
      else
        {
          t = n_8(q_7, t);
        }
      ;
      LocalPopChoice(m_7);
    }
  else
    {
      t = k_7;
      {
        ATerm j_2 = NULL,p_2 = NULL,z_2 = NULL;
        j_2 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm v_7 = ATgetArgument(t, 0);
            if(match_cons(v_7, sym_prod_3))
              {
                ATerm y_7 = ATgetArgument(v_7, 0);
                z_2 = ATgetArgument(v_7, 1);
                {
                  ATerm z_7 = ATgetArgument(v_7, 2);
                }
              }
            else
              _fail(t);
            {
              ATerm x_7 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = j_2;
        {
          ATerm a_8 = t;
          int c_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              ;
              LocalPopChoice(c_8);
            }
          else
            {
              t = a_8;
              {
                ATerm h_3 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    ATerm d_8 = ATgetArgument(t, 0);
                    h_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_3;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
          p_2 = t;
          t = (ATerm) ATmakeAppl(sym_N_2, z_2, p_2);
        }
      }
    }
  return(t);
}
ATerm appl_2_0 (ATerm u_69 (ATerm), ATerm v_69 (ATerm), ATerm t)
{
  ATerm o_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,u_8 = NULL,w_8 = NULL;
  w_8 = t;
  if(match_cons(t, sym_appl_2))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_8);
  o_8 = t;
  t = q_8;
  t = u_69(t);
  s_8 = t;
  t = r_8;
  t = v_69(t);
  u_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, s_8, u_8), o_8);
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm b_9 = NULL;
  ATerm g_9 (ATerm t)
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_9 = NULL;
        ATerm l_1 (ATerm t)
        {
          t = map_1_0(g_9, t);
          return(t);
        }
        t = appl_2_0(_id, l_1, t);
        if(match_cons(t, sym_appl_2))
          {
            ATerm g_8 = ATgetArgument(t, 0);
            c_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_9;
        t = concat_0_0(t);
        ;
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        {
          ATerm e_9 = NULL;
          e_9 = t;
          t = (ATerm) ATinsert(ATempty, e_9);
        }
      }
    return(t);
  }
  t = g_9(t);
  b_9 = t;
  t = SSL_implode_string(b_9);
  return(t);
}
ATerm abbrev_amb_0_0 (ATerm t)
{
  ATerm h_9 = NULL,l_9 = NULL,m_9 = NULL,o_9 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      h_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_9 = ATgetFirst((ATermList) t);
      {
        ATerm h_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_9;
  t = yield_0_0(t);
  m_9 = t;
  t = h_9;
  t = map_1_0(abbrev_term_0_0, t);
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, m_9, o_9);
  return(t);
}
ATerm parsetree_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t)
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
  t = b_70(t);
  y_10 = t;
  t = x_10;
  t = c_70(t);
  z_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, y_10, z_10), v_10);
  return(t);
}
ATerm amb_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,y_9 = NULL,z_9 = NULL;
  z_9 = t;
  if(match_cons(t, sym_amb_1))
    {
      w_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_9);
  v_9 = t;
  t = w_9;
  t = w_69(t);
  y_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, y_9), v_9);
  return(t);
}
ATerm union_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10;
  {
    ATerm h_10 (ATerm t)
    {
      ATerm i_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_10;
          ;
          LocalPopChoice(j_8);
        }
      else
        {
          t = i_8;
          {
            ATerm k_8 = t;
            int l_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_3 = NULL,u_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_3 = ATgetFirst((ATermList) t);
                    u_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_10;
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm x_3 = NULL;
                    x_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_3, x_3);
                    t = e_82(t);
                    return(t);
                  }
                  t = fetch_1_0(m_1, t);
                  t = u_3;
                  t = h_10(t);
                }
                ;
                LocalPopChoice(l_8);
              }
            else
              {
                t = k_8;
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
ATerm foldr_3_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  ATerm m_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_84(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = m_8;
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
        t = f_84(t);
        o_10 = t;
        t = l_10;
        t = foldr_3_0(d_84, e_84, f_84, t);
        p_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_10, p_10);
        t = e_84(t);
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = union_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      if((i_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm bu_collect_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm t_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 (ATerm t)
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_4 = NULL,d_4 = NULL;
            ATerm p_1 (ATerm t)
            {
              ATerm a_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Cons_2_0(h_83, _id, t);
                  ;
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = a_9;
                  t = (ATerm) ATempty;
                }
              return(t);
            }
            t = SRTS_some(u_10, t);
            if(((c_4 != NULL) && (c_4 != t)))
              _fail(t);
            else
              c_4 = t;
            t = SSL_explode_term(not_null(c_4));
            if(match_cons(t, sym__2))
              {
                ATerm f_9 = ATgetArgument(t, 0);
                if(((d_4 != NULL) && (d_4 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  d_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(d_4);
            t = foldr_3_0(n_1, o_1, p_1, t);
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            {
              ATerm t_10 = NULL;
              t = h_83(t);
              t_10 = t;
              t = (ATerm) ATinsert(ATempty, t_10);
            }
          }
        return(t);
      }
      t = u_10(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = t_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = bu_collect_1_0(s_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = amb_1_0(_id, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = map_1_0(v_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm s_4 = NULL;
  s_4 = t;
  t = SSL_int_to_string(s_4);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm r_4 = NULL;
  t = abbrev_amb_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, r_4);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  t = parsetree_2_0(r_1, _id, t);
  t = parsetree_2_0(t_1, u_1, t);
  return(t);
}
ATerm _2_0 (ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm t)
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
  t = k_58(t);
  g_11 = t;
  t = f_11;
  t = l_58(t);
  h_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, g_11, h_11), d_11);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  l_11 = t;
  t = dtime_0_0(t);
  t = l_11;
  t = r_93(t);
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
ATerm d_12 (ATerm x_11, ATerm t)
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
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_12);
            ;
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
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
  ATerm g_12 = NULL;
  t = SSL_stderr_stream();
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_12);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm o_12 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_12;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm s_12 = NULL;
  s_12 = t;
  t = SSL_is_string(s_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_9 = ATgetArgument(t, 0);
      ATerm p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL,f_5 = NULL;
        e_5 = t;
        t = SSL_explode_term(e_5);
        if(match_cons(t, sym__2))
          {
            ATerm s_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_9 = ATgetArgument(t, 1);
              if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
                {
                  f_5 = ATgetFirst((ATermList) t_9);
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
        t = f_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = f_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = f_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        {
          ATerm x_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
              t = _2_0(z_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_12 = ATgetArgument(t, 0);
                  m_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_12, m_12);
              n_12 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, n_12);
              ;
              LocalPopChoice(a_10);
            }
          else
            {
              t = x_9;
              {
                ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
                t = _2_0(b_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_12 = ATgetArgument(t, 0);
                    q_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(p_12, q_12);
                r_12 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_12 = NULL;
      w_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_12, term_d_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm g_5 = NULL;
        g_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = g_5;
        _fail(t);
      }
    }
  t_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_12);
  u_12 = t;
  t = t_12;
  t = fclose_0_0(t);
  t = u_12;
  return(t);
}
ATerm fetch_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm c_13 (ATerm t)
  {
    ATerm e_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_78, _id, t);
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
ATerm e_2 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL;
  f_13 = t;
  t = SSL_string_to_int(f_13);
  g_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_13);
  t = f_13;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, e_2, f_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
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
ATerm i_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_m_10;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  j_13 = t;
  t = SSL_string_to_int(j_13);
  k_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_13);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_13);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_q_10;
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
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_10;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_s_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_2, i_2, l_2, t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, x_2, y_2, t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = Option_3_0(a_3, b_3, i_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_13 = NULL;
      t = term_d_6;
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
      t = term_d_6;
      t = b_0(t);
      s_13 = t;
      t = (ATerm) ATinsert(CheckATermList(o_13), s_13);
    }
  return(t);
}
ATerm n_3 (ATerm t)
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
ATerm o_3 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_13);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_13);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, o_3, y_3, t);
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
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_14 = NULL;
      t = term_d_6;
      t = l_0(t);
      n_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_11, term_r_11, n_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_14 = ATgetFirst((ATermList) t);
          k_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_14 = ATgetFirst((ATermList) t);
          m_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_14;
      t = j_0(t);
      t = l_14;
      t = k_0(t);
      r_14 = t;
      t = (ATerm) ATinsert(CheckATermList(m_14), r_14);
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  if(match_string(t, "-i"))
    {
      t = t_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_14;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm u_14 = NULL;
  u_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_14);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_14);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, e_4, f_4, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_14 = ATgetFirst((ATermList) t);
      x_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_15 = NULL,d_15 = NULL;
        t = x_14;
        t = h_0(t);
        b_15 = t;
        t = w_14;
        t = g_0(t);
        d_15 = t;
        t = x_14;
        {
          ATerm g_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(b_15), d_15);
            return(t);
          }
          t = reverse_acc_2_0(g_0, g_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_6;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  i_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  f_15 = t;
  t = g_15;
  t = v_68(t);
  h_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_15), f_15);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_15), term_z_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_15 = NULL;
  ATerm c_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 = NULL;
            t = eval_config_0_0(t);
            r_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_5);
            t = r_5;
            ;
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
          }
        n_15 = t;
      }
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = c_12;
      {
        ATerm h_4 (ATerm t)
        {
          ATerm j_4 (ATerm t)
          {
            if(((n_15 != NULL) && (n_15 != t)))
              _fail(t);
            else
              n_15 = t;
            return(t);
          }
          t = Program_1_0(j_4, t);
          return(t);
        }
        t = fetch_1_0(h_4, t);
      }
    }
  {
    ATerm k_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_12), not_null(n_15)), term_y_12);
        t = echo_0_0(t);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = k_12;
      }
    t = term_a_13;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_acc_2_0(_id, m_4, t);
    t = map_1_0(o_4, t);
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
  return(t);
}
ATerm Undefined_1_0 (ATerm w_68 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
  t_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_15);
  q_15 = t;
  t = r_15;
  t = w_68(t);
  s_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, s_15), q_15);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  y_15 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_15;
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
            t = y_15;
          }
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATinsert(ATempty, y_15);
      }
    z_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_15);
    t = y_15;
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
        ATerm w_5 = NULL;
        t = eval_config_0_0(t);
        w_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_5);
        t = w_5;
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
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
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
          ATerm p_4 (ATerm t)
          {
            t = h_16;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm n_16 (ATerm t)
  {
    ATerm q_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_16, t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = q_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_78(t);
      }
    return(t);
  }
  t = n_16(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm q_16 = NULL;
  q_16 = t;
  t = SSL_explode_string(q_16);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm r_16 = NULL;
  r_16 = t;
  t = SSL_explode_string(r_16);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm p_16 = NULL;
  t = _2_0(q_4, t_4, t);
  {
    ATerm v_14 = t;
    int y_14 = stack_ptr;
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
          ATerm u_4 (ATerm t)
          {
            t = u_16;
            return(t);
          }
          t = at_end_1_0(u_4, t);
        }
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = v_14;
        {
          ATerm z_5 = NULL,a_6 = NULL;
          z_5 = t;
          t = SSL_explode_term(z_5);
          if(match_cons(t, sym__2))
            {
              ATerm z_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              a_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_6;
          t = concat_0_0(t);
        }
      }
    p_16 = t;
    t = SSL_implode_string(p_16);
  }
  return(t);
}
ATerm map_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm z_16 (ATerm t)
  {
    ATerm a_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = a_15;
        t = Cons_2_0(z_77, z_16, t);
      }
    return(t);
  }
  t = z_16(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm e_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_17 = NULL;
      f_17 = t;
      t = SSL_is_string(f_17);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm m_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_4, t);
            ;
            LocalPopChoice(o_15);
          }
        else
          {
            t = m_15;
            {
              ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
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
                        ATerm u_15 = t;
                        int v_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_17);
                            {
                              ATerm w_15 = t;
                              int x_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_6 = NULL;
                                  t = eval_config_0_0(t);
                                  x_6 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_17, x_6);
                                  t = x_6;
                                  ;
                                  LocalPopChoice(x_15);
                                }
                              else
                                {
                                  t = w_15;
                                }
                            }
                            ;
                            LocalPopChoice(v_15);
                          }
                        else
                          {
                            t = u_15;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_17), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = k_17;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_17 = NULL,q_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_17 = ATgetArgument(t, 0);
                          l_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_17;
                      t = eval_config_0_0(t);
                      p_17 = t;
                      t = l_17;
                      t = eval_config_0_0(t);
                      q_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_17, q_17);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_16;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_16;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, y_4, z_4, t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      t = Option_3_0(a_5, b_5, c_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_62 (ATerm), ATerm a_63 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  a_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_17 = ATgetFirst((ATermList) t);
      x_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_18);
  v_17 = t;
  t = w_17;
  t = z_62(t);
  y_17 = t;
  t = x_17;
  t = a_63(t);
  z_17 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_17), y_17), v_17);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_18);
  t = (ATerm) ATmakeAppl(sym_Program_1, f_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm e_18 = NULL;
  e_18 = t;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_16;
        t = s_96(t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
      }
    t = e_18;
    {
      ATerm k_5 (ATerm t)
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
                t = s_96(t);
                t = Cons_2_0(_id, k_5, t);
              }
            ;
            LocalPopChoice(s_16);
          }
        else
          {
            t = o_16;
            {
              ATerm h_18 = NULL,i_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_18 = ATgetFirst((ATermList) t);
                  i_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_18), (ATerm) ATmakeAppl(sym_Undefined_1, h_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(d_5, k_5, t);
    }
  }
  return(t);
}
ATerm n_5 (ATerm t)
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
ATerm o_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_16;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_y_16;
  return(t);
}
ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = q_18;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm a_17 = t;
      int b_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_96(t);
          ;
          LocalPopChoice(b_17);
        }
      else
        {
          t = a_17;
          {
            ATerm c_17 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_5, o_5, p_5, t);
                ;
                LocalPopChoice(d_17);
              }
            else
              {
                t = c_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_5, t);
    {
      ATerm e_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_18 = NULL;
          y_18 = t;
          {
            ATerm h_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_18;
                {
                  ATerm m_17 = t;
                  int n_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm o_17 = t;
                        int r_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_7 = NULL;
                            t = eval_config_0_0(t);
                            t_7 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_7);
                            t = t_7;
                            ;
                            LocalPopChoice(r_17);
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
                      t = m_17;
                      t = fetch_1_0(q_5, t);
                    }
                  t = y_18;
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
                      ATerm b_8 = NULL;
                      t = eval_config_0_0(t);
                      b_8 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), b_8);
                      t = b_8;
                      ;
                      LocalPopChoice(t_17);
                    }
                  else
                    {
                      t = s_17;
                    }
                  t = y_18;
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
            int b_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm t_5 (ATerm t)
                  {
                    if(((r_18 != NULL) && (r_18 != t)))
                      _fail(t);
                    else
                      r_18 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_5, t);
                  return(t);
                }
                t = fetch_1_0(s_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_18)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_18)), term_c_18));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(b_18);
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
ATerm u_5 (ATerm t)
{
  ATerm d_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_18);
    }
  else
    {
      t = d_18;
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(v_5, x_5, y_5, t);
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(o_18);
                      }
                    else
                      {
                        t = n_18;
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
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_18;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = _2_0(_id, visamb_0_0, t);
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  t = parse_options_1_0(u_5, t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL,z_8 = NULL,k_9 = NULL;
        f_19 = t;
        {
          ATerm x_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_6 (ATerm t)
              {
                if(match_cons(t, sym_Input_1))
                  {
                    if(((z_8 != NULL) && (z_8 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      z_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(b_6, t);
              ;
              LocalPopChoice(z_18);
            }
          else
            {
              t = x_18;
              t = term_a_19;
              z_8 = t;
            }
          t = not_null(z_8);
          t = ReadFromFile_0_0(t);
          k_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_19, k_9);
          t = apply_strategy_1_0(c_6, t);
          t = output_file_0_0(t);
          t = report_success_0_0(t);
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
