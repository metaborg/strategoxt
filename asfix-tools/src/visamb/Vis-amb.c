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
ATerm term_s_17;
ATerm term_r_17;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_v_14;
ATerm term_i_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_y_5;
ATerm term_t_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_c_5;
ATerm term_x_4;
ATerm term_w_4;
void init_constant_terms (void)
{
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_5);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__3, term_f_15, term_g_15, term_w_4);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm);
ATerm crush_2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_84 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm lit_1_0 (ATerm j_62 (ATerm), ATerm);
ATerm prod_3_0 (ATerm z_62 (ATerm), ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm);
ATerm cf_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm lex_1_0 (ATerm g_62 (ATerm), ATerm);
ATerm Lexical_0_0 (ATerm);
ATerm Nsplit_2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm);
ATerm abbrev_term_0_0 (ATerm);
ATerm F_0_0 (ATerm);
ATerm appl_2_0 (ATerm c_63 (ATerm), ATerm d_63 (ATerm), ATerm);
ATerm yield_0_0 (ATerm);
ATerm abbrev_amb_0_0 (ATerm);
ATerm abbrev_ambs_0_0 (ATerm);
ATerm amb_1_0 (ATerm e_63 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm);
ATerm union_1_0 (ATerm k_75 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm);
ATerm crush_3_0 (ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm);
ATerm bu_collect_1_0 (ATerm o_76 (ATerm), ATerm);
ATerm parsetree_2_0 (ATerm j_63 (ATerm), ATerm k_63 (ATerm), ATerm);
ATerm collect_ambs_0_0 (ATerm);
ATerm visamb_0_0 (ATerm);
ATerm _2_0 (ATerm y_54 (ATerm), ATerm z_54 (ATerm), ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
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
ATerm Program_1_0 (ATerm d_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_71 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm t_88 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_71 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm f_83 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_71 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm w_63 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm w_89 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm v_89 (ATerm), ATerm);
ATerm Vis_amb_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_2 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_4;
  t = whoami_0_0(t);
  a_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), a_2));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_4;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm t)
{
  ATerm y_4 = t;
  int z_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_77(t);
      ;
      LocalPopChoice(z_4);
    }
  else
    {
      t = y_4;
      {
        ATerm e_2 = NULL,f_2 = NULL,j_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_2 = ATgetFirst((ATermList) t);
            f_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_2;
        t = foldr_2_0(i_77, j_77, t);
        j_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_2, j_2);
        t = j_77(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  k_2 = t;
  t = SSL_explode_term(k_2);
  if(match_cons(t, sym__2))
    {
      ATerm a_5 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_2;
  t = foldr_2_0(b_81, c_81, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_2 = NULL;
  t = times_0_0(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = term_c_5;
      return(t);
    }
    ATerm e_0 (ATerm t)
    {
      ATerm n_2 = NULL,o_2 = NULL;
      if(match_cons(t, sym__2))
        {
          n_2 = ATgetArgument(t, 0);
          o_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm d_5 = t;
        int e_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(n_2, o_2);
            ;
            LocalPopChoice(e_5);
          }
        else
          {
            t = d_5;
            t = SSL_addr(n_2, o_2);
          }
      }
      return(t);
    }
    t = crush_2_0(c_0, e_0, t);
    m_2 = t;
    t = SSL_TicksToSeconds(m_2);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL;
  c_3 = t;
  if(match_cons(t, sym__2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_5 = t;
    int i_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_3;
        if((d_3 != t))
          {
            _fail(t);
          }
        t = c_3;
        ;
        LocalPopChoice(i_5);
      }
    else
      {
        t = f_5;
        t = c_3;
        {
          ATerm k_5 = t;
          int l_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_3, e_3);
              ;
              LocalPopChoice(l_5);
            }
          else
            {
              t = k_5;
              t = SSL_gtr(d_3, e_3);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_3, e_3);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  ATerm i_0 (ATerm t)
  {
    ATerm h_3 = NULL,i_3 = NULL;
    h_3 = t;
    t = term_m_5;
    t = get_config_0_0(t);
    i_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_3, term_n_5);
    t = geq_0_0(t);
    t = h_3;
    t = w_84(t);
    return(t);
  }
  t = try_1_0(i_0, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm m_3 = NULL,v_3 = NULL;
    t = run_time_0_0(t);
    m_3 = t;
    t = term_w_4;
    t = whoami_0_0(t);
    v_3 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), m_3), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_3));
    t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_5), m_3), term_p_5), v_3));
    return(t);
  }
  t = if_verbose1_1_0(m_0, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm w_3 = NULL,x_3 = NULL,z_3 = NULL,l_4 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm s_5 = ATgetArgument(t, 0);
        if(match_cons(s_5, sym_Stream_1))
          {
            w_3 = ATgetArgument(s_5, 0);
          }
        else
          _fail(t);
        x_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(w_3, x_3);
    z_3 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), z_3);
    l_4 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, l_4);
    return(t);
  }
  t = WriteToFile_1_0(n_0, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_4, term_t_5);
  t = open_stream_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, q_4);
  t = t_83(t);
  t = fclose_0_0(t);
  t = q_4;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm t_4 = NULL,b_5 = NULL,g_5 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_5 = ATgetArgument(t, 0);
        if(match_cons(u_5, sym_Stream_1))
          {
            t_4 = ATgetArgument(u_5, 0);
          }
        else
          _fail(t);
        b_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(t_4, b_5);
    g_5 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, g_5);
    return(t);
  }
  t = WriteToFile_1_0(o_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_5 = NULL,j_5 = NULL;
  h_5 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm w_5 = t;
      int x_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                j_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(q_0, t);
          ;
          LocalPopChoice(x_5);
        }
      else
        {
          t = w_5;
          t = term_y_5;
          j_5 = t;
        }
      return(t);
    }
    t = _2_0(p_0, _id, t);
    t = h_5;
    {
      ATerm r_0 (ATerm t)
      {
        ATerm s_0 (ATerm t)
        {
          t = not_null(j_5);
          return(t);
        }
        t = split_2_0(s_0, _id, t);
        return(t);
      }
      t = _2_0(_id, r_0, t);
      {
        ATerm z_5 = t;
        int b_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(u_0, t);
              return(t);
            }
            t = _2_0(t_0, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(b_6);
          }
        else
          {
            t = z_5;
            t = _2_0(_id, WriteToTextFile_0_0, t);
          }
      }
    }
  }
  return(t);
}
ATerm lit_1_0 (ATerm j_62 (ATerm), ATerm t)
{
  ATerm r_5 = NULL,v_5 = NULL,a_6 = NULL,g_6 = NULL;
  g_6 = t;
  if(match_cons(t, sym_lit_1))
    {
      v_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_6);
  r_5 = t;
  t = v_5;
  t = j_62(t);
  a_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, a_6), r_5);
  return(t);
}
ATerm prod_3_0 (ATerm z_62 (ATerm), ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm t)
{
  ATerm f_7 = NULL,p_7 = NULL,t_7 = NULL,v_7 = NULL,y_7 = NULL,z_7 = NULL,d_8 = NULL,e_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_prod_3))
    {
      p_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
      v_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_8);
  f_7 = t;
  t = p_7;
  t = z_62(t);
  y_7 = t;
  t = t_7;
  t = a_63(t);
  z_7 = t;
  t = v_7;
  t = b_63(t);
  d_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, y_7, z_7, d_8), f_7);
  return(t);
}
ATerm cf_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,l_8 = NULL,n_8 = NULL,o_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym_cf_1))
    {
      l_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_8);
  j_8 = t;
  t = l_8;
  t = f_62(t);
  n_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, n_8), j_8);
  return(t);
}
ATerm lex_1_0 (ATerm g_62 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,v_8 = NULL,w_8 = NULL;
  w_8 = t;
  if(match_cons(t, sym_lex_1))
    {
      t_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_8);
  s_8 = t;
  t = t_8;
  t = g_62(t);
  v_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, v_8), s_8);
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm c_6 = t;
  int d_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL;
      ATerm v_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            t = lex_1_0(_id, t);
            return(t);
          }
          ATerm b_1 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(a_1, b_1, t);
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          t = cf_1_0(_id, t);
          return(t);
        }
        t = prod_3_0(y_0, z_0, _id, t);
        return(t);
      }
      t = appl_2_0(v_0, _id, t);
      t = yield_0_0(t);
      a_9 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, a_9));
      ;
      LocalPopChoice(d_6);
    }
  else
    {
      t = c_6;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = lit_1_0(_id, t);
            return(t);
          }
          t = prod_3_0(_id, d_1, _id, t);
          return(t);
        }
        t = appl_2_0(c_1, _id, t);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm Nsplit_2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  b_9 = t;
  t = q_63(t);
  c_9 = t;
  t = b_9;
  t = r_63(t);
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym_N_2, c_9, d_9);
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_9 (ATerm i_9, ATerm t)
      {
        t = SSL_is_int(i_9);
        return(t);
      }
      ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
      k_9 = t;
      if(match_cons(t, sym_amb_1))
        {
          l_9 = ATgetArgument(t, 0);
          t = l_9;
          {
            ATerm h_6 = t;
            int i_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_9 = ATgetFirst((ATermList) t);
                    {
                      ATerm j_6 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(i_6);
                {
                  ATerm k_6 = t;
                  int l_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_9(k_9, t);
                      ;
                      LocalPopChoice(l_6);
                    }
                  else
                    {
                      t = k_6;
                      t = m_9;
                    }
                }
              }
            else
              {
                t = h_6;
                t = v_9(k_9, t);
              }
          }
        }
      else
        {
          t = v_9(k_9, t);
        }
      ;
      LocalPopChoice(f_6);
    }
  else
    {
      t = e_6;
      {
        ATerm e_1 (ATerm t)
        {
          ATerm p_9 = NULL;
          if(match_cons(t, sym_appl_2))
            {
              ATerm m_6 = ATgetArgument(t, 0);
              if(match_cons(m_6, sym_prod_3))
                {
                  ATerm o_6 = ATgetArgument(m_6, 0);
                  p_9 = ATgetArgument(m_6, 1);
                  {
                    ATerm p_6 = ATgetArgument(m_6, 2);
                  }
                }
              else
                _fail(t);
              {
                ATerm n_6 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = p_9;
          return(t);
        }
        ATerm f_1 (ATerm t)
        {
          ATerm q_6 = t;
          int r_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              ;
              LocalPopChoice(r_6);
            }
          else
            {
              t = q_6;
              {
                ATerm s_9 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    ATerm s_6 = ATgetArgument(t, 0);
                    s_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_9;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
          return(t);
        }
        t = Nsplit_2_0(e_1, f_1, t);
      }
    }
  return(t);
}
ATerm F_0_0 (ATerm t)
{
  ATerm w_9 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9;
  t = concat_0_0(t);
  return(t);
}
ATerm appl_2_0 (ATerm c_63 (ATerm), ATerm d_63 (ATerm), ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
  c_10 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_10);
  x_9 = t;
  t = y_9;
  t = c_63(t);
  a_10 = t;
  t = z_9;
  t = d_63(t);
  b_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, a_10, b_10), x_9);
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  ATerm l_10 (ATerm t)
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 (ATerm t)
        {
          t = map_1_0(l_10, t);
          return(t);
        }
        t = appl_2_0(_id, g_1, t);
        t = F_0_0(t);
        ;
        LocalPopChoice(v_6);
      }
    else
      {
        t = u_6;
        {
          ATerm j_10 = NULL;
          j_10 = t;
          t = (ATerm) ATinsert(ATempty, j_10);
        }
      }
    return(t);
  }
  t = l_10(t);
  i_10 = t;
  t = SSL_implode_string(i_10);
  return(t);
}
ATerm abbrev_amb_0_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      m_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_10;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_10 = ATgetFirst((ATermList) t);
      {
        ATerm w_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_10;
  t = yield_0_0(t);
  o_10 = t;
  t = m_10;
  t = map_1_0(abbrev_term_0_0, t);
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, o_10, p_10);
  return(t);
}
ATerm abbrev_ambs_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      ATerm r_10 = NULL;
      t = abbrev_amb_0_0(t);
      r_10 = t;
      t = (ATerm) ATmakeAppl(sym_root_1, r_10);
      return(t);
    }
    t = map_1_0(j_1, t);
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm s_10 = NULL;
    s_10 = t;
    t = SSL_int_to_string(s_10);
    return(t);
  }
  t = parsetree_2_0(h_1, i_1, t);
  return(t);
}
ATerm amb_1_0 (ATerm e_63 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  w_10 = t;
  if(match_cons(t, sym_amb_1))
    {
      u_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_10);
  t_10 = t;
  t = u_10;
  t = e_63(t);
  v_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, v_10), t_10);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_11 = ATgetFirst((ATermList) t);
      b_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_75(t);
  {
    ATerm k_1 (ATerm t)
    {
      ATerm c_11 = NULL;
      c_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_11, c_11);
      t = o_75(t);
      return(t);
    }
    t = fetch_1_0(k_1, t);
    t = b_11;
  }
  return(t);
}
ATerm union_1_0 (ATerm k_75 (ATerm), ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      e_11 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11;
  {
    ATerm f_11 (ATerm t)
    {
      ATerm x_6 = t;
      int y_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_11;
          ;
          LocalPopChoice(y_6);
        }
      else
        {
          t = x_6;
          {
            ATerm z_6 = t;
            int a_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_1 (ATerm t)
                {
                  t = d_11;
                  return(t);
                }
                t = HdMember_p__2_0(k_75, l_1, t);
                t = f_11(t);
                ;
                LocalPopChoice(a_7);
              }
            else
              {
                t = z_6;
                t = Cons_2_0(_id, f_11, t);
              }
          }
        }
      return(t);
    }
    t = f_11(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm g_11 = NULL;
    if(match_cons(t, sym__2))
      {
        g_11 = ATgetArgument(t, 0);
        if((g_11 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(m_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_77(t);
      ;
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
        ATerm j_11 = NULL,k_11 = NULL,n_11 = NULL,o_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_11 = ATgetFirst((ATermList) t);
            k_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_11;
        t = m_77(t);
        n_11 = t;
        t = k_11;
        t = foldr_3_0(k_77, l_77, m_77, t);
        o_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_11, o_11);
        t = l_77(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  p_11 = t;
  t = SSL_explode_term(p_11);
  if(match_cons(t, sym__2))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      q_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11;
  t = foldr_3_0(d_81, e_81, f_81, t);
  return(t);
}
ATerm bu_collect_1_0 (ATerm o_76 (ATerm), ATerm t)
{
  ATerm e_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_11 (ATerm t)
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SRTS_some(s_11, t);
            {
              ATerm n_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm o_1 (ATerm t)
              {
                ATerm j_7 = t;
                int k_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(o_76, _id, t);
                    ;
                    LocalPopChoice(k_7);
                  }
                else
                  {
                    t = j_7;
                    t = (ATerm) ATempty;
                  }
                return(t);
              }
              t = crush_3_0(n_1, union_0_0, o_1, t);
            }
            ;
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            {
              ATerm r_11 = NULL;
              t = o_76(t);
              r_11 = t;
              t = (ATerm) ATinsert(ATempty, r_11);
            }
          }
        return(t);
      }
      t = s_11(t);
      ;
      LocalPopChoice(g_7);
    }
  else
    {
      t = e_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm parsetree_2_0 (ATerm j_63 (ATerm), ATerm k_63 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  y_11 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      u_11 = ATgetArgument(t, 0);
      v_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_11);
  t_11 = t;
  t = u_11;
  t = j_63(t);
  w_11 = t;
  t = v_11;
  t = k_63(t);
  x_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, w_11, x_11), t_11);
  return(t);
}
ATerm collect_ambs_0_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      t = amb_1_0(_id, t);
      return(t);
    }
    t = bu_collect_1_0(q_1, t);
    return(t);
  }
  t = parsetree_2_0(p_1, _id, t);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  t = collect_ambs_0_0(t);
  t = abbrev_ambs_0_0(t);
  return(t);
}
ATerm _2_0 (ATerm y_54 (ATerm), ATerm z_54 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_12);
  c_12 = t;
  t = d_12;
  t = y_54(t);
  f_12 = t;
  t = e_12;
  t = z_54(t);
  g_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, f_12, g_12), c_12);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  l_12 = t;
  t = dtime_0_0(t);
  t = l_12;
  t = v_86(t);
  m_12 = t;
  t = dtime_0_0(t);
  n_12 = t;
  t = m_12;
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_12), (ATerm) ATmakeAppl(sym_Runtime_1, n_12)), p_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_13 (ATerm x_12, ATerm t)
  {
    t = SSL_fclose(x_12);
    return(t);
  }
  ATerm a_13 = NULL,b_13 = NULL;
  b_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_13 = ATgetArgument(t, 0);
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_13);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            t = d_13(b_13, t);
          }
      }
    }
  else
    {
      t = d_13(b_13, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_13 = NULL;
  t = SSL_stdin_stream();
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_13 = NULL;
  t = SSL_stdout_stream();
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_stderr_stream();
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_13);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      ATerm o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL,x_0 = NULL;
        w_0 = t;
        t = SSL_explode_term(w_0);
        if(match_cons(t, sym__2))
          {
            ATerm s_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_7) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_7 = ATgetArgument(t, 1);
              if(((ATgetType(u_7) == AT_LIST) && !(ATisEmpty(u_7))))
                {
                  x_0 = ATgetFirst((ATermList) u_7);
                  {
                    ATerm w_7 = (ATerm) ATgetNext((ATermList) u_7);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_0;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        {
          ATerm x_7 = t;
          int a_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
              ATerm r_1 (ATerm t)
              {
                ATerm o_13 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    o_13 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = o_13;
                return(t);
              }
              t = _2_0(r_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_13 = ATgetArgument(t, 0);
                  m_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_13, m_13);
              n_13 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, n_13);
              ;
              LocalPopChoice(a_8);
            }
          else
            {
              t = x_7;
              {
                ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
                ATerm s_1 (ATerm t)
                {
                  ATerm s_13 = NULL;
                  s_13 = t;
                  t = SSL_is_string(s_13);
                  return(t);
                }
                t = _2_0(s_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_13 = ATgetArgument(t, 0);
                    q_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(p_13, q_13);
                r_13 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_13);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL;
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_13, term_f_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm t_1 (ATerm t)
        {
          t = term_g_8;
          return(t);
        }
        t = debug_1_0(t_1, t);
        _fail(t);
      }
    }
  t_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_13);
  u_13 = t;
  t = t_13;
  t = fclose_0_0(t);
  t = u_13;
  return(t);
}
ATerm split_2_0 (ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  t = x_78(t);
  z_13 = t;
  t = y_13;
  t = y_78(t);
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_13, a_14);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  b_14 = t;
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              c_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(u_1, t);
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        t = term_k_8;
        c_14 = t;
      }
    t = b_14;
    {
      ATerm v_1 (ATerm t)
      {
        t = not_null(c_14);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, v_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm e_14 = NULL;
    e_14 = t;
    if(match_string(t, "-k"))
      {
        t = e_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = e_14;
      }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm f_14 = NULL,g_14 = NULL;
    f_14 = t;
    t = SSL_string_to_int(f_14);
    g_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_14);
    t = f_14;
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_m_8;
    return(t);
  }
  t = ArgOption_3_0(w_1, x_1, y_1, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm i_14 = NULL;
        i_14 = t;
        if(match_string(t, "-S"))
          {
            t = i_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = i_14;
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_r_8;
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_u_8;
        return(t);
      }
      t = Option_3_0(z_1, b_2, c_2, t);
      ;
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              ATerm j_14 = NULL,k_14 = NULL;
              j_14 = t;
              t = SSL_string_to_int(j_14);
              k_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, j_14);
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              t = term_z_8;
              return(t);
            }
            t = ArgOption_3_0(d_2, g_2, h_2, t);
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            {
              ATerm i_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_e_9;
                return(t);
              }
              ATerm q_2 (ATerm t)
              {
                t = term_f_9;
                return(t);
              }
              t = Option_3_0(i_2, p_2, q_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm m_14 = NULL;
    m_14 = t;
    if(match_string(t, "-o"))
      {
        t = m_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = m_14;
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm n_14 = NULL;
    n_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), n_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, n_14);
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_j_9;
    return(t);
  }
  t = ArgOption_3_0(r_2, s_2, t_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      {
        ATerm u_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_q_9;
          return(t);
        }
        ATerm w_2 (ATerm t)
        {
          t = term_r_9;
          return(t);
        }
        t = Option_3_0(u_2, v_2, w_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  q_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = q_14;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm y_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_14 = ATgetFirst((ATermList) t);
          s_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_14 = ATgetFirst((ATermList) t);
          u_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_14;
      t = j_0(t);
      t = t_14;
      t = k_0(t);
      y_14 = t;
      t = (ATerm) ATinsert(CheckATermList(u_14), y_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm a_15 = NULL;
    a_15 = t;
    if(match_string(t, "-i"))
      {
        t = a_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = a_15;
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm b_15 = NULL;
    b_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), b_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, b_15);
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_t_9;
    return(t);
  }
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm u_9 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_10);
    }
  else
    {
      t = u_9;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_15 = ATgetFirst((ATermList) t);
      e_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_15 = NULL,j_15 = NULL;
        t = e_15;
        t = h_0(t);
        i_15 = t;
        t = d_15;
        t = g_0(t);
        j_15 = t;
        t = e_15;
        {
          ATerm a_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_15), j_15);
            return(t);
          }
          t = reverse_acc_2_0(g_0, a_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_4;
      t = h_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, b_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm k_15 = NULL;
  t = term_w_4;
  t = f_0(t);
  k_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_10), k_15), term_g_10);
  return(t);
}
ATerm Program_1_0 (ATerm d_62 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  o_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_15);
  l_15 = t;
  t = m_15;
  t = d_62(t);
  n_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_15), l_15);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  ATerm k_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_4;
      t = get_config_0_0(t);
      s_15 = t;
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = k_10;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm g_3 (ATerm t)
          {
            s_15 = t;
            return(t);
          }
          t = Program_1_0(g_3, t);
          return(t);
        }
        t = option_defined_1_0(f_3, t);
      }
    }
  {
    ATerm j_3 (ATerm t)
    {
      ATerm k_3 (ATerm t)
      {
        t = s_15;
        return(t);
      }
      t = short_description_1_0(k_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(j_3, t);
    t = term_x_10;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_0_0(t);
    {
      ATerm l_3 (ATerm t)
      {
        ATerm t_15 = NULL;
        t_15 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_15), term_y_10);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(l_3, t);
      {
        ATerm n_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_12), term_b_12), term_a_12), term_z_11), term_m_11), term_l_11), term_i_11), term_h_11), term_z_10);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(n_3, t);
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
ATerm Undefined_1_0 (ATerm e_62 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  x_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      v_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_15);
  u_15 = t;
  t = v_15;
  t = e_62(t);
  w_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, w_15), u_15);
  return(t);
}
ATerm fetch_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm b_16 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_71, _id, t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = Cons_2_0(_id, b_16, t);
      }
    return(t);
  }
  t = b_16(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm t_88 (ATerm), ATerm t)
{
  t = fetch_1_0(t_88, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  d_16 = t;
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_12 = ATgetFirst((ATermList) t);
                ATerm t_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_16;
          }
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = (ATerm) ATinsert(ATempty, d_16);
      }
    e_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), e_16);
    t = d_16;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_4;
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
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm k_16 = NULL,l_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_16 = ATgetFirst((ATermList) t);
            l_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_16;
        {
          ATerm o_3 (ATerm t)
          {
            t = l_16;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(o_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  p_16 = t;
  t = SSL_explode_term(p_16);
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_16;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  ATerm r_16 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_16, t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_71(t);
      }
    return(t);
  }
  t = r_16(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_16;
  {
    ATerm p_3 (ATerm t)
    {
      t = s_16;
      return(t);
    }
    t = at_end_1_0(p_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = c_13;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm u_16 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm v_16 = NULL;
    v_16 = t;
    t = SSL_explode_string(v_16);
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm w_16 = NULL;
    w_16 = t;
    t = SSL_explode_string(w_16);
    return(t);
  }
  t = _2_0(q_3, r_3, t);
  t = conc_0_0(t);
  u_16 = t;
  t = SSL_implode_string(u_16);
  return(t);
}
ATerm debug_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  t = f_83(t);
  y_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_16), y_16));
  t = x_16;
  return(t);
}
ATerm map_1_0 (ATerm h_71 (ATerm), ATerm t)
{
  ATerm z_16 (ATerm t)
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = Cons_2_0(h_71, z_16, t);
      }
    return(t);
  }
  t = z_16(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_13 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_17 = NULL;
      f_17 = t;
      t = SSL_is_string(f_17);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = x_13;
      {
        ATerm h_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(s_3, t);
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = h_14;
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
                        ATerm o_14 = t;
                        int p_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_14);
                          }
                        else
                          {
                            t = o_14;
                            {
                              ATerm t_3 (ATerm t)
                              {
                                t = term_v_14;
                                return(t);
                              }
                              t = debug_1_0(t_3, t);
                              _fail(t);
                            }
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
ATerm get_config_0_0 (ATerm t)
{
  ATerm t_17 = NULL;
  t_17 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_17);
  {
    ATerm u_3 (ATerm t)
    {
      ATerm u_17 = NULL;
      t = eval_config_0_0(t);
      u_17 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_17, u_17);
      t = u_17;
      return(t);
    }
    t = try_1_0(u_3, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm w_63 (ATerm), ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_63(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_14 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_h_15;
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = term_p_15;
        return(t);
      }
      t = Option_3_0(y_3, a_4, b_4, t);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = z_14;
      {
        ATerm c_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm d_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_q_15;
          return(t);
        }
        ATerm e_4 (ATerm t)
        {
          t = term_r_15;
          return(t);
        }
        t = Option_3_0(c_4, d_4, e_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  if(match_cons(t, sym__3))
    {
      x_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
      z_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_17, y_17);
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_16 = ATgetArgument(t, 0);
            ATerm c_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_17, y_17);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = (ATerm) ATempty;
      }
    a_18 = t;
    t = SSL_table_put(x_17, y_17, (ATerm) ATinsert(CheckATermList(a_18), z_17));
    t = (ATerm) ATmakeAppl(sym__3, x_17, y_17, z_17);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm f_18 = NULL;
  t = term_w_4;
  t = y_89(t);
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_16, term_g_16, f_18);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = h_18;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm m_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_18 = ATgetFirst((ATermList) t);
          j_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_18;
      t = a_0(t);
      t = term_w_4;
      t = b_0(t);
      m_18 = t;
      t = (ATerm) ATinsert(CheckATermList(j_18), m_18);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm o_18 = NULL;
    o_18 = t;
    if(match_string(t, "--help"))
      {
        t = o_18;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = o_18;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = o_18;
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_h_16;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_i_16;
    return(t);
  }
  t = Option_3_0(f_4, g_4, h_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  u_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_18 = ATgetFirst((ATermList) t);
      r_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_18);
  p_18 = t;
  t = q_18;
  t = h_56(t);
  s_18 = t;
  t = r_18;
  t = i_56(t);
  t_18 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(t_18), s_18), p_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  {
    ATerm i_4 (ATerm t)
    {
      t = term_j_16;
      t = w_89(t);
      return(t);
    }
    t = try_1_0(i_4, t);
    t = b_19;
    {
      ATerm j_4 (ATerm t)
      {
        ATerm c_19 = NULL;
        c_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_19);
        t = (ATerm) ATmakeAppl(sym_Program_1, c_19);
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_17);
              }
            else
              {
                t = o_16;
                t = w_89(t);
                t = Cons_2_0(_id, k_4, t);
              }
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            {
              ATerm e_19 = NULL,f_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_19 = ATgetFirst((ATermList) t);
                  f_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_19), (ATerm) ATmakeAppl(sym_Undefined_1, e_19));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_4, k_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = l_19;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_89(t);
          ;
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
          {
            ATerm d_17 = t;
            int e_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(e_17);
              }
            else
              {
                t = d_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_4, t);
    {
      ATerm n_4 (ATerm t)
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_19 = NULL;
            s_19 = t;
            {
              ATerm i_17 = t;
              int m_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_19;
                  {
                    ATerm n_17 = t;
                    int o_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_r_17;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(o_17);
                      }
                    else
                      {
                        t = n_17;
                        {
                          ATerm o_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(o_4, t);
                        }
                      }
                    t = s_19;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(m_17);
                }
              else
                {
                  t = i_17;
                  t = term_g_15;
                  t = get_config_0_0(t);
                  t = s_19;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            {
              ATerm s_4 (ATerm t)
              {
                ATerm u_4 (ATerm t)
                {
                  m_19 = t;
                  return(t);
                }
                t = Undefined_1_0(u_4, t);
                return(t);
              }
              t = option_defined_1_0(s_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_19)), term_s_17));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(n_4, t);
      n_19 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = n_19;
    }
  }
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  t = parse_options_1_0(io_options_0_0, t);
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_file_0_0(t);
        {
          ATerm v_4 (ATerm t)
          {
            t = _2_0(_id, visamb_0_0, t);
            return(t);
          }
          t = apply_strategy_1_0(v_4, t);
          t = output_file_0_0(t);
          t = report_success_0_0(t);
        }
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
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
