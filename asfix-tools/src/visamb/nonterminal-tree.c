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
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_seq_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_sort_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_layout_0;
Symbol sym_empty_0;
Symbol sym_seq_2;
Symbol sym_opt_1;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_n_2;
Symbol sym_iter_sep_n_3;
Symbol sym_set_1;
Symbol sym_pair_2;
Symbol sym_func_2;
Symbol sym_alt_2;
Symbol sym_perm_1;
Symbol sym_sort_1;
Symbol sym_label_2;
Symbol sym_ATerm_1;
Symbol sym_lit_1;
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_set_1 = ATmakeSymbol("set", 1, ATfalse);
  ATprotectSymbol(sym_set_1);
  sym_pair_2 = ATmakeSymbol("pair", 2, ATfalse);
  ATprotectSymbol(sym_pair_2);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_perm_1 = ATmakeSymbol("perm", 1, ATfalse);
  ATprotectSymbol(sym_perm_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_ATerm_1 = ATmakeSymbol("ATerm", 1, ATfalse);
  ATprotectSymbol(sym_ATerm_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_p_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_a_18;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_k_9;
ATerm term_c_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_p_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_p_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_n_5;
ATerm term_c_5;
ATerm term_y_4;
void init_constant_terms (void)
{
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__3, term_x_15, term_y_15, term_y_4);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm b_89 (ATerm), ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_95 (ATerm), ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm ApplToSort_0_0 (ATerm);
ATerm topdown_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm _2_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm p_100 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_103 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_88 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_101 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_101 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm p_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm d_74 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_74 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm s_106 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm r_106 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_0 = NULL,n_0 = NULL;
  m_0 = t;
  t = term_y_4;
  t = whoami_0_0(t);
  n_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), n_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_0;
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm o_0 = NULL;
  ATerm b_0 (ATerm t)
  {
    ATerm p_0 = NULL;
    p_0 = t;
    t = SSL_explode_string(p_0);
    return(t);
  }
  t = map_1_0(b_0, t);
  t = concat_0_0(t);
  o_0 = t;
  t = SSL_implode_string(o_0);
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL;
  c_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_1 = ATgetFirst((ATermList) t);
      b_1 = (ATerm) ATgetNext((ATermList) t);
      t = b_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_0 = ATgetFirst((ATermList) t);
          z_0 = (ATerm) ATgetNext((ATermList) t);
          t = y_0;
          if(match_int(t, 34))
            {
              t = a_1;
              if(match_int(t, 92))
                {
                  ATerm z_4 = t;
                  int b_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_1 = NULL;
                      t = z_0;
                      t = De_Escape_0_0(t);
                      e_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(e_1), term_c_5);
                      ;
                      LocalPopChoice(b_5);
                    }
                  else
                    {
                      t = z_4;
                      {
                        ATerm j_1 = NULL;
                        t = b_1;
                        t = De_Escape_0_0(t);
                        j_1 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_1), a_1);
                      }
                    }
                }
              else
                {
                  ATerm t_1 = NULL;
                  t = b_1;
                  t = De_Escape_0_0(t);
                  t_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_1), a_1);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = a_1;
                  if(match_int(t, 92))
                    {
                      ATerm e_5 = t;
                      int f_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_2 = NULL;
                          t = z_0;
                          t = De_Escape_0_0(t);
                          a_2 = t;
                          t = (ATerm) ATinsert(CheckATermList(a_2), term_n_5);
                          ;
                          LocalPopChoice(f_5);
                        }
                      else
                        {
                          t = e_5;
                          {
                            ATerm m_2 = NULL;
                            t = b_1;
                            t = De_Escape_0_0(t);
                            m_2 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_2), a_1);
                          }
                        }
                    }
                  else
                    {
                      ATerm q_2 = NULL;
                      t = b_1;
                      t = De_Escape_0_0(t);
                      q_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(q_2), a_1);
                    }
                }
              else
                {
                  ATerm u_2 = NULL;
                  t = b_1;
                  t = De_Escape_0_0(t);
                  u_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_2), a_1);
                }
            }
        }
      else
        {
          ATerm z_2 = NULL;
          t = b_1;
          t = De_Escape_0_0(t);
          z_2 = t;
          t = (ATerm) ATinsert(CheckATermList(z_2), a_1);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_1;
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  l_3 = t;
  t = SSL_explode_string(l_3);
  u_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_3 = ATgetFirst((ATermList) t);
      t_3 = (ATerm) ATgetNext((ATermList) t);
      t = t_3;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_3 = ATgetFirst((ATermList) t);
          r_3 = (ATerm) ATgetNext((ATermList) t);
          t = q_3;
          if(match_int(t, 34))
            {
              t = s_3;
              if(match_int(t, 92))
                {
                  ATerm o_5 = t;
                  int p_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_3 = NULL;
                      t = r_3;
                      t = De_Escape_0_0(t);
                      x_3 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_3), term_c_5);
                      ;
                      LocalPopChoice(p_5);
                    }
                  else
                    {
                      t = o_5;
                      {
                        ATerm e_4 = NULL;
                        t = t_3;
                        t = De_Escape_0_0(t);
                        e_4 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_4), s_3);
                      }
                    }
                }
              else
                {
                  ATerm s_4 = NULL;
                  t = t_3;
                  t = De_Escape_0_0(t);
                  s_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_4), s_3);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = s_3;
                  if(match_int(t, 92))
                    {
                      ATerm r_5 = t;
                      int s_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_4 = NULL;
                          t = r_3;
                          t = De_Escape_0_0(t);
                          u_4 = t;
                          t = (ATerm) ATinsert(CheckATermList(u_4), term_n_5);
                          ;
                          LocalPopChoice(s_5);
                        }
                      else
                        {
                          t = r_5;
                          {
                            ATerm x_4 = NULL;
                            t = t_3;
                            t = De_Escape_0_0(t);
                            x_4 = t;
                            t = (ATerm) ATinsert(CheckATermList(x_4), s_3);
                          }
                        }
                    }
                  else
                    {
                      ATerm a_5 = NULL;
                      t = t_3;
                      t = De_Escape_0_0(t);
                      a_5 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_5), s_3);
                    }
                }
              else
                {
                  ATerm d_5 = NULL;
                  t = t_3;
                  t = De_Escape_0_0(t);
                  d_5 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_5), s_3);
                }
            }
        }
      else
        {
          ATerm g_5 = NULL;
          t = t_3;
          t = De_Escape_0_0(t);
          g_5 = t;
          t = (ATerm) ATinsert(CheckATermList(g_5), s_3);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_3;
    }
  m_3 = t;
  t = SSL_implode_string(m_3);
  return(t);
}
ATerm at_last_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm u_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, f_0, t);
        t = b_89(t);
        ;
        LocalPopChoice(v_5);
      }
    else
      {
        t = u_5;
        t = Cons_2_0(_id, h_5, t);
      }
    return(t);
  }
  t = h_5(t);
  return(t);
}
ATerm de_quote_0_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
  j_5 = t;
  t = SSL_explode_string(j_5);
  i_5 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_5 = ATgetFirst((ATermList) t);
      {
        ATerm w_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = i_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_5 = ATgetFirst((ATermList) t);
      l_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_5;
  {
    ATerm k_0 (ATerm t)
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm y_5 = ATgetFirst((ATermList) t);
          if(((ATgetType(y_5) != AT_INT) || (ATgetInt((ATermInt) y_5) != 34)))
            _fail(t);
          {
            ATerm z_5 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(z_5) != AT_LIST) || !(ATisEmpty(z_5))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    t = at_last_1_0(k_0, t);
    m_5 = t;
    t = SSL_implode_string(m_5);
  }
  return(t);
}
ATerm filter_1_0 (ATerm e_95 (ATerm), ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
        ATerm c_6 = t;
        int d_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_0 (ATerm t)
            {
              t = filter_1_0(e_95, t);
              return(t);
            }
            t = Cons_2_0(e_95, l_0, t);
            ;
            LocalPopChoice(d_6);
          }
        else
          {
            t = c_6;
            {
              ATerm q_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm h_6 = ATgetFirst((ATermList) t);
                  q_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_5;
              t = filter_1_0(e_95, t);
            }
          }
      }
    }
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  g_6 = t;
  if(match_cons(t, sym_cf_1))
    {
      e_6 = ATgetArgument(t, 0);
      t = e_6;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          e_6 = ATgetArgument(t, 0);
          t = e_6;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_i_6);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  e_6 = ATgetArgument(t, 0);
                  f_6 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(f_6), e_6);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      e_6 = ATgetArgument(t, 0);
                      t = e_6;
                      t = Sym2Strs_0_0(t);
                      {
                        ATerm r_0 (ATerm t)
                        {
                          t = (ATerm) ATinsert(ATempty, term_j_6);
                          return(t);
                        }
                        t = at_end_1_0(r_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          e_6 = ATgetArgument(t, 0);
                          t = e_6;
                          t = Sym2Strs_0_0(t);
                          {
                            ATerm s_0 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_k_6);
                              return(t);
                            }
                            t = at_end_1_0(s_0, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              e_6 = ATgetArgument(t, 0);
                              t = e_6;
                              t = Sym2Strs_0_0(t);
                              {
                                ATerm t_0 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_l_6);
                                  return(t);
                                }
                                t = at_end_1_0(t_0, t);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  e_6 = ATgetArgument(t, 0);
                                  f_6 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_6 = NULL,t_6 = NULL;
                                    t = e_6;
                                    t = Sym2Strs_0_0(t);
                                    s_6 = t;
                                    t = f_6;
                                    t = Sym2Strs_0_0(t);
                                    t_6 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_6)), t_6), s_6);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      e_6 = ATgetArgument(t, 0);
                                      f_6 = ATgetArgument(t, 1);
                                      {
                                        ATerm y_6 = NULL,z_6 = NULL;
                                        t = e_6;
                                        t = Sym2Strs_0_0(t);
                                        y_6 = t;
                                        t = f_6;
                                        t = Sym2Strs_0_0(t);
                                        z_6 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_6)), z_6), y_6);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm m_6 = t;
                                      int n_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              e_6 = ATgetArgument(t, 0);
                                              {
                                                ATerm o_6 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(n_6);
                                          {
                                            ATerm d_7 = NULL;
                                            t = e_6;
                                            t = Sym2Strs_0_0(t);
                                            d_7 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_6)), d_7);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = m_6;
                                          {
                                            ATerm q_6 = t;
                                            int r_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    e_6 = ATgetArgument(t, 0);
                                                    f_6 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_6 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(r_6);
                                                {
                                                  ATerm j_7 = NULL,l_7 = NULL;
                                                  t = e_6;
                                                  t = Sym2Strs_0_0(t);
                                                  j_7 = t;
                                                  t = f_6;
                                                  t = Sym2Strs_0_0(t);
                                                  l_7 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_6)), l_7), j_7);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = q_6;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    e_6 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm o_7 = NULL;
                                                      t = e_6;
                                                      t = Sym2Strs_0_0(t);
                                                      o_7 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, o_7), (ATerm) ATinsert(ATempty, term_w_6));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        e_6 = ATgetArgument(t, 0);
                                                        f_6 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_7 = NULL,u_7 = NULL;
                                                          t = e_6;
                                                          t = Sym2Strs_0_0(t);
                                                          t_7 = t;
                                                          t = f_6;
                                                          t = Sym2Strs_0_0(t);
                                                          u_7 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_7), (ATerm) ATinsert(ATempty, term_x_6)), t_7);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            e_6 = ATgetArgument(t, 0);
                                                            f_6 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm z_7 = NULL,b_8 = NULL;
                                                              t = e_6;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              z_7 = t;
                                                              t = f_6;
                                                              t = Sym2Strs_0_0(t);
                                                              b_8 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_8), (ATerm) ATinsert(ATempty, term_a_7)), z_7);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                e_6 = ATgetArgument(t, 0);
                                                                f_6 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm h_8 = NULL,j_8 = NULL;
                                                                  t = e_6;
                                                                  t = Sym2Strs_0_0(t);
                                                                  h_8 = t;
                                                                  t = f_6;
                                                                  t = Sym2Strs_0_0(t);
                                                                  j_8 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_8), (ATerm) ATinsert(ATempty, term_b_7)), h_8);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    e_6 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm m_8 = NULL;
                                                                      t = e_6;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      m_8 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(m_8), term_c_7);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        e_6 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, e_6);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            e_6 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm q_0 = NULL;
                                                                              t = e_6;
                                                                              {
                                                                                ATerm f_7 = t;
                                                                                int g_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(g_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_7;
                                                                                  }
                                                                                q_0 = t;
                                                                                t = (ATerm) ATinsert(ATempty, q_0);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm h_7 = t;
                                                                            int i_7 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    e_6 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm k_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(i_7);
                                                                                {
                                                                                  ATerm u_0 = NULL;
                                                                                  t = e_6;
                                                                                  {
                                                                                    ATerm m_7 = t;
                                                                                    int n_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(n_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = m_7;
                                                                                      }
                                                                                    u_0 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, u_0);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = h_7;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_p_7);
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
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if(match_cons(r_7, sym_prod_3))
        {
          ATerm s_7 = ATgetArgument(r_7, 0);
          r_8 = ATgetArgument(r_7, 1);
          {
            ATerm v_7 = ATgetArgument(r_7, 2);
          }
        }
      else
        _fail(t);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  t = Sym2Strs_0_0(t);
  t_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_7)), t_8), (ATerm) ATinsert(ATempty, term_w_7));
  t = concat_0_0(t);
  t = concat_strings_0_0(t);
  u_8 = t;
  t = SSL_mkterm(u_8, s_8);
  return(t);
}
ATerm topdown_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  t = i_82(t);
  {
    ATerm w_0 (ATerm t)
    {
      t = topdown_1_0(i_82, t);
      return(t);
    }
    t = SRTS_all(w_0, t);
  }
  return(t);
}
ATerm _2_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,b_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_9);
  v_8 = t;
  t = w_8;
  t = e_67(t);
  y_8 = t;
  t = x_8;
  t = f_67(t);
  z_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, y_8, z_8), v_8);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,j_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_9, term_x_7);
  t = open_stream_0_0(t);
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_9, j_9);
  t = p_100(t);
  t = fclose_0_0(t);
  t = j_9;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL;
  m_9 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm y_7 = t;
      int a_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((n_9 != NULL) && (n_9 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_1, t);
          ;
          LocalPopChoice(a_8);
        }
      else
        {
          t = y_7;
          t = term_c_8;
          if(((n_9 != NULL) && (n_9 != t)))
            _fail(t);
          else
            n_9 = t;
        }
      return(t);
    }
    t = _2_0(x_0, _id, t);
    t = m_9;
    {
      ATerm f_1 (ATerm t)
      {
        ATerm v_0 = NULL;
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), v_0);
        return(t);
      }
      t = _2_0(_id, f_1, t);
      {
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 (ATerm t)
            {
              ATerm i_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(i_1, t);
              return(t);
            }
            ATerm h_1 (ATerm t)
            {
              ATerm k_1 (ATerm t)
              {
                ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm f_8 = ATgetArgument(t, 0);
                    if(match_cons(f_8, sym_Stream_1))
                      {
                        o_9 = ATgetArgument(f_8, 0);
                      }
                    else
                      _fail(t);
                    p_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(o_9, p_9);
                q_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_9);
                return(t);
              }
              t = WriteToFile_1_0(k_1, t);
              return(t);
            }
            t = _2_0(g_1, h_1, t);
            ;
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            {
              ATerm l_1 (ATerm t)
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm g_8 = ATgetArgument(t, 0);
                      if(match_cons(g_8, sym_Stream_1))
                        {
                          s_9 = ATgetArgument(g_8, 0);
                        }
                      else
                        _fail(t);
                      t_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(s_9, t_9);
                  u_9 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), u_9);
                  v_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, v_9);
                  return(t);
                }
                t = WriteToFile_1_0(m_1, t);
                return(t);
              }
              t = _2_0(_id, l_1, t);
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
ATerm apply_strategy_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
  w_9 = t;
  t = dtime_0_0(t);
  t = w_9;
  t = r_103(t);
  x_9 = t;
  t = dtime_0_0(t);
  y_9 = t;
  t = x_9;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_9), (ATerm) ATmakeAppl(sym_Runtime_1, y_9)), a_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_10 (ATerm k_10, ATerm t)
  {
    t = SSL_fclose(k_10);
    return(t);
  }
  ATerm n_10 = NULL,o_10 = NULL;
  o_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_10 = ATgetArgument(t, 0);
      {
        ATerm i_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_10);
            ;
            LocalPopChoice(k_8);
          }
        else
          {
            t = i_8;
            t = q_10(o_10, t);
          }
      }
    }
  else
    {
      t = q_10(o_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  t = SSL_stdin_stream();
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = SSL_stdout_stream();
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t = SSL_stderr_stream();
  t_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_8 = ATgetArgument(t, 0);
      ATerm n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL,u_1 = NULL;
        s_1 = t;
        t = SSL_explode_term(s_1);
        if(match_cons(t, sym__2))
          {
            ATerm q_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_9 = ATgetArgument(t, 1);
              if(((ATgetType(a_9) == AT_LIST) && !(ATisEmpty(a_9))))
                {
                  u_1 = ATgetFirst((ATermList) a_9);
                  {
                    ATerm c_9 = (ATerm) ATgetNext((ATermList) a_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = u_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = u_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
              ATerm n_1 (ATerm t)
              {
                ATerm b_11 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_11;
                return(t);
              }
              t = _2_0(n_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_10 = ATgetArgument(t, 0);
                  z_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_10, z_10);
              a_11 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_11);
              ;
              LocalPopChoice(e_9);
            }
          else
            {
              t = d_9;
              {
                ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
                ATerm o_1 (ATerm t)
                {
                  ATerm f_11 = NULL;
                  f_11 = t;
                  t = SSL_is_string(f_11);
                  return(t);
                }
                t = _2_0(o_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_11 = ATgetArgument(t, 0);
                    d_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_11, d_11);
                e_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_11 = NULL;
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_11, term_k_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm v_1 = NULL;
        v_1 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = v_1;
        _fail(t);
      }
    }
  g_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_11);
  h_11 = t;
  t = g_11;
  t = fclose_0_0(t);
  t = h_11;
  return(t);
}
ATerm fetch_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm r_11 (ATerm t)
  {
    ATerm r_9 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_88, _id, t);
        ;
        LocalPopChoice(b_10);
      }
    else
      {
        t = r_9;
        t = Cons_2_0(_id, r_11, t);
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm u_11 = NULL,v_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_11 = ATgetFirst((ATermList) t);
            v_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_11;
        {
          ATerm p_1 (ATerm t)
          {
            t = v_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm e_12 (ATerm t)
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_12, t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_88(t);
      }
    return(t);
  }
  t = e_12(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm h_12 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm i_12 = NULL;
    i_12 = t;
    t = SSL_explode_string(i_12);
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm j_12 = NULL;
    j_12 = t;
    t = SSL_explode_string(j_12);
    return(t);
  }
  t = _2_0(q_1, r_1, t);
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL,m_12 = NULL;
        if(match_cons(t, sym__2))
          {
            l_12 = ATgetArgument(t, 0);
            m_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_12;
        {
          ATerm w_1 (ATerm t)
          {
            t = m_12;
            return(t);
          }
          t = at_end_1_0(w_1, t);
        }
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        {
          ATerm c_2 = NULL,d_2 = NULL;
          c_2 = t;
          t = SSL_explode_term(c_2);
          if(match_cons(t, sym__2))
            {
              ATerm j_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_2;
          t = concat_0_0(t);
        }
      }
    h_12 = t;
    t = SSL_implode_string(h_12);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_13 = NULL;
      a_13 = t;
      t = SSL_is_string(a_13);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm p_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm v_10 = t;
              int w_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(w_10);
                }
              else
                {
                  t = v_10;
                }
              return(t);
            }
            t = map_1_0(x_1, t);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = p_10;
            {
              ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
              i_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_13 = ATgetArgument(t, 0);
                  t = j_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_13 = ATgetArgument(t, 0);
                      t = j_13;
                      {
                        ATerm x_10 = t;
                        int k_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_13);
                            {
                              ATerm m_11 = t;
                              int n_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_3 = NULL;
                                  t = eval_config_0_0(t);
                                  f_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_13, f_3);
                                  t = f_3;
                                  ;
                                  LocalPopChoice(n_11);
                                }
                              else
                                {
                                  t = m_11;
                                }
                            }
                            ;
                            LocalPopChoice(k_11);
                          }
                        else
                          {
                            t = x_10;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_13), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = j_13;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_13 = NULL,p_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_13 = ATgetArgument(t, 0);
                          k_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_13;
                      t = eval_config_0_0(t);
                      o_13 = t;
                      t = k_13;
                      t = eval_config_0_0(t);
                      p_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_13, p_13);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_101 (ATerm), ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_13 = NULL,w_13 = NULL;
      u_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm q_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 = NULL;
            t = eval_config_0_0(t);
            o_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_3);
            t = o_3;
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = q_11;
          }
        w_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_13, term_t_11);
        t = geq_0_0(t);
        t = u_13;
        t = t_101(t);
      }
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm y_13 = NULL;
    y_13 = t;
    if(match_string(t, "-k"))
      {
        t = y_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = y_13;
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm z_13 = NULL,a_14 = NULL;
    z_13 = t;
    t = SSL_string_to_int(z_13);
    a_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_14);
    t = z_13;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_x_11;
    return(t);
  }
  t = ArgOption_3_0(y_1, z_1, b_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm c_14 = NULL;
        c_14 = t;
        if(match_string(t, "-S"))
          {
            t = c_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = c_14;
          }
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_b_12;
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = Option_3_0(e_2, f_2, g_2, t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm d_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              ATerm d_14 = NULL,e_14 = NULL;
              d_14 = t;
              t = SSL_string_to_int(d_14);
              e_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, d_14);
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              t = term_g_12;
              return(t);
            }
            t = ArgOption_3_0(h_2, i_2, j_2, t);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = d_12;
            {
              ATerm k_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_k_12;
                return(t);
              }
              ATerm n_2 (ATerm t)
              {
                t = term_n_12;
                return(t);
              }
              t = Option_3_0(k_2, l_2, n_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_14 = NULL;
      t = term_y_4;
      t = d_0(t);
      j_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, j_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_14 = ATgetFirst((ATermList) t);
          i_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_14;
      t = a_0(t);
      t = term_y_4;
      t = c_0(t);
      m_14 = t;
      t = (ATerm) ATinsert(CheckATermList(i_14), m_14);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm o_14 = NULL;
    o_14 = t;
    if(match_string(t, "-o"))
      {
        t = o_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = o_14;
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm p_14 = NULL;
    p_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), p_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, p_14);
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_q_12;
    return(t);
  }
  t = ArgOption_3_0(o_2, p_2, r_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__3))
    {
      s_14 = ATgetArgument(t, 0);
      t_14 = ATgetArgument(t, 1);
      u_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_14, t_14);
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_12 = ATgetArgument(t, 0);
            ATerm u_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_14, t_14);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = (ATerm) ATempty;
      }
    v_14 = t;
    t = SSL_table_put(s_14, t_14, (ATerm) ATinsert(CheckATermList(v_14), u_14));
    t = (ATerm) ATmakeAppl(sym__3, s_14, t_14, u_14);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_15 = NULL;
      t = term_y_4;
      t = j_0(t);
      h_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, h_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_15 = ATgetFirst((ATermList) t);
          e_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_15 = ATgetFirst((ATermList) t);
          g_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_15;
      t = h_0(t);
      t = f_15;
      t = i_0(t);
      l_15 = t;
      t = (ATerm) ATinsert(CheckATermList(g_15), l_15);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm n_15 = NULL;
    n_15 = t;
    if(match_string(t, "-i"))
      {
        t = n_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = n_15;
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm o_15 = NULL;
    o_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, o_15);
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_v_12;
    return(t);
  }
  t = ArgOption_3_0(s_2, t_2, v_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_4;
  t = whoami_0_0(t);
  p_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), p_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_3 = NULL;
        t = eval_config_0_0(t);
        z_3 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_3);
        t = z_3;
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_94(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm s_15 = NULL,t_15 = NULL,w_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_15 = ATgetFirst((ATermList) t);
            t_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_15;
        t = foldr_2_0(b_94, c_94, t);
        w_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_15, w_15);
        t = c_94(t);
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
  ATerm z_15 = NULL,c_4 = NULL,d_4 = NULL;
  t = times_0_0(t);
  c_4 = t;
  t = SSL_explode_term(c_4);
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4;
  {
    ATerm w_2 (ATerm t)
    {
      t = term_a_12;
      return(t);
    }
    ATerm x_2 (ATerm t)
    {
      ATerm h_4 = NULL,i_4 = NULL;
      if(match_cons(t, sym__2))
        {
          h_4 = ATgetArgument(t, 0);
          i_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(h_4, i_4);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = SSL_addr(h_4, i_4);
          }
      }
      return(t);
    }
    t = foldr_2_0(w_2, x_2, t);
    z_15 = t;
    t = SSL_TicksToSeconds(z_15);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_16;
        if((m_16 != t))
          {
            _fail(t);
          }
        t = l_16;
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = l_16;
        {
          ATerm g_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_16, n_16);
              ;
              LocalPopChoice(h_13);
            }
          else
            {
              t = g_13;
              t = SSL_gtr(m_16, n_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_16, n_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_101 (ATerm), ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_16 = NULL,s_16 = NULL;
      q_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL;
            t = eval_config_0_0(t);
            t_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_5);
            t = t_5;
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = n_13;
          }
        s_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_16, term_r_13);
        t = geq_0_0(t);
        t = q_16;
        t = s_101(t);
      }
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm u_16 = NULL,v_16 = NULL;
    t = run_time_0_0(t);
    u_16 = t;
    t = term_y_4;
    t = whoami_0_0(t);
    v_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_16));
    t = (ATerm) ATmakeAppl(sym__2, term_s_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_13), u_16), term_t_13), v_16));
    return(t);
  }
  t = if_verbose1_1_0(y_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm x_13 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_6 = NULL;
            t = eval_config_0_0(t);
            u_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), u_6);
            t = u_6;
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
          }
      }
      ;
      LocalPopChoice(b_14);
    }
  else
    {
      t = x_13;
      {
        ATerm a_3 (ATerm t)
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              {
                ATerm n_14 = t;
                int q_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(q_14);
                  }
                else
                  {
                    t = n_14;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(a_3, t);
      }
    }
  t = p_104(t);
  return(t);
}
ATerm map_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm w_16 (ATerm t)
  {
    ATerm r_14 = t;
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
        t = r_14;
        t = Cons_2_0(z_87, w_16, t);
      }
    return(t);
  }
  t = w_16(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_16 = ATgetFirst((ATermList) t);
      z_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_17 = NULL,e_17 = NULL;
        t = z_16;
        t = g_0(t);
        d_17 = t;
        t = y_16;
        t = e_0(t);
        e_17 = t;
        t = z_16;
        {
          ATerm b_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_17), e_17);
            return(t);
          }
          t = reverse_acc_2_0(e_0, b_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_4;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  i_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_17);
  f_17 = t;
  t = g_17;
  t = d_74(t);
  h_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_17), f_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 = NULL;
            t = eval_config_0_0(t);
            e_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_7);
            t = e_7;
            ;
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
          }
      }
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      {
        ATerm c_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(c_3, t);
      }
    }
  t = term_b_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm d_3 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, d_3, t);
    {
      ATerm e_3 (ATerm t)
      {
        ATerm l_17 = NULL;
        l_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, l_17), term_c_15);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(e_3, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm e_74 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  p_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      n_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_17);
  m_17 = t;
  t = n_17;
  t = e_74(t);
  o_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, o_17), m_17);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_17 = NULL,w_17 = NULL;
  t_17 = t;
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_15 = ATgetFirst((ATermList) t);
                ATerm m_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_17;
          }
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        t = (ATerm) ATinsert(ATempty, t_17);
      }
    w_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), w_17);
    t = t_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL;
        t = eval_config_0_0(t);
        q_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_7);
        t = q_7;
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_a_16;
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_b_16;
        return(t);
      }
      t = Option_3_0(g_3, h_3, i_3, t);
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        ATerm j_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm k_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_c_16;
          return(t);
        }
        ATerm n_3 (ATerm t)
        {
          t = term_d_16;
          return(t);
        }
        t = Option_3_0(j_3, k_3, n_3, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,g_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  k_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_18 = ATgetFirst((ATermList) t);
      g_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_18);
  d_18 = t;
  t = e_18;
  t = n_68(t);
  i_18 = t;
  t = g_18;
  t = o_68(t);
  j_18 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(j_18), i_18), d_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm o_18 = NULL;
  o_18 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_16;
        t = s_106(t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
      }
    t = o_18;
    {
      ATerm p_3 (ATerm t)
      {
        ATerm p_18 = NULL;
        p_18 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_18);
        t = (ATerm) ATmakeAppl(sym_Program_1, p_18);
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = s_106(t);
                t = Cons_2_0(_id, v_3, t);
              }
            ;
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            {
              ATerm r_18 = NULL,s_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_18 = ATgetFirst((ATermList) t);
                  s_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_18), (ATerm) ATmakeAppl(sym_Undefined_1, r_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_3, v_3, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_18;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm o_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_106(t);
          ;
          LocalPopChoice(p_16);
        }
      else
        {
          t = o_16;
          {
            ATerm r_16 = t;
            int t_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_3 (ATerm t)
                {
                  ATerm c_19 = NULL;
                  c_19 = t;
                  if(match_string(t, "--help"))
                    {
                      t = c_19;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = c_19;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = c_19;
                        }
                    }
                  return(t);
                }
                ATerm a_4 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_x_16;
                  return(t);
                }
                ATerm b_4 (ATerm t)
                {
                  t = term_a_17;
                  return(t);
                }
                t = Option_3_0(y_3, a_4, b_4, t);
                ;
                LocalPopChoice(t_16);
              }
            else
              {
                t = r_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_3, t);
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_19 = NULL;
          h_19 = t;
          {
            ATerm j_17 = t;
            int k_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_19;
                {
                  ATerm q_17 = t;
                  int r_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm s_17 = t;
                        int u_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_9 = NULL;
                            t = eval_config_0_0(t);
                            i_9 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), i_9);
                            t = i_9;
                            ;
                            LocalPopChoice(u_17);
                          }
                        else
                          {
                            t = s_17;
                          }
                      }
                      ;
                      LocalPopChoice(r_17);
                    }
                  else
                    {
                      t = q_17;
                      {
                        ATerm f_4 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(f_4, t);
                      }
                    }
                  t = h_19;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(k_17);
              }
            else
              {
                t = j_17;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm v_17 = t;
                  int x_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_10 = NULL;
                      t = eval_config_0_0(t);
                      e_10 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), e_10);
                      t = e_10;
                      ;
                      LocalPopChoice(x_17);
                    }
                  else
                    {
                      t = v_17;
                    }
                  t = h_19;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
          {
            ATerm y_17 = t;
            int z_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm j_4 (ATerm t)
                  {
                    if(((a_19 != NULL) && (a_19 != t)))
                      _fail(t);
                    else
                      a_19 = t;
                    return(t);
                  }
                  t = Undefined_1_0(j_4, t);
                  return(t);
                }
                t = fetch_1_0(g_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_s_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_19)), term_a_18));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(z_17);
              }
            else
              {
                t = y_17;
              }
          }
        }
      b_19 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_19;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t)
{
  ATerm k_19 = NULL;
  t = parse_options_1_0(r_104, t);
  k_19 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_19);
  t = k_19;
  t = t_104(t);
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_104, t);
        ;
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        {
          ATerm f_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_104(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_18);
            }
          else
            {
              t = f_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_104(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        {
          ATerm n_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_18);
            }
          else
            {
              t = n_18;
              {
                ATerm t_18 = t;
                int u_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(u_18);
                  }
                else
                  {
                    t = t_18;
                    {
                      ATerm v_18 = t;
                      int w_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_4 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm o_4 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_x_18;
                            return(t);
                          }
                          ATerm p_4 (ATerm t)
                          {
                            t = term_y_18;
                            return(t);
                          }
                          t = Option_3_0(n_4, o_4, p_4, t);
                          ;
                          LocalPopChoice(w_18);
                        }
                      else
                        {
                          t = v_18;
                          {
                            ATerm d_19 = t;
                            int e_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(e_19);
                              }
                            else
                              {
                                t = d_19;
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
  ATerm l_4 (ATerm t)
  {
    ATerm q_4 (ATerm t)
    {
      ATerm l_19 = NULL,m_19 = NULL;
      l_19 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_11 = NULL;
            t = eval_config_0_0(t);
            l_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_11);
            t = l_11;
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
          }
        m_19 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, m_19));
        t = l_19;
      }
      return(t);
    }
    t = if_verbose2_1_0(q_4, t);
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm n_19 = NULL,o_19 = NULL,w_11 = NULL;
    n_19 = t;
    {
      ATerm i_19 = t;
      int j_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_19 != NULL) && (o_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_4, t);
          ;
          LocalPopChoice(j_19);
        }
      else
        {
          t = i_19;
          t = term_p_19;
          o_19 = t;
        }
      t = not_null(o_19);
      t = ReadFromFile_0_0(t);
      w_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_19, w_11);
      t = apply_strategy_1_0(a_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_4, c_104, l_4, m_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm v_4 (ATerm t)
    {
      ATerm w_4 (ATerm t)
      {
        ATerm q_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_19 = t;
            int u_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = ApplToSort_0_0(t);
                ;
                LocalPopChoice(u_19);
              }
            else
              {
                t = t_19;
                {
                  ATerm r_19 = NULL;
                  if(match_cons(t, sym_lit_1))
                    {
                      r_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_19;
                }
              }
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = q_19;
          }
        return(t);
      }
      t = topdown_1_0(w_4, t);
      return(t);
    }
    t = _2_0(_id, v_4, t);
    return(t);
  }
  t = iowrap_3_0(t_4, _fail, default_usage_0_0, t);
  return(t);
}
