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
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_layout_0;
Symbol sym_opt_1;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_left_0;
Symbol sym_assoc_0;
Symbol sym_char_class_1;
Symbol sym_range_2;
Symbol sym_ATerm_1;
Symbol sym_lit_1;
Symbol sym_list_1;
Symbol sym_lit_1;
Symbol sym_assoc_1;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_char_class_1;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
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
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
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
  sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
  ATprotectSymbol(sym_left_0);
  sym_assoc_0 = ATmakeSymbol("assoc", 0, ATfalse);
  ATprotectSymbol(sym_assoc_0);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  sym_ATerm_1 = ATmakeSymbol("ATerm", 1, ATfalse);
  ATprotectSymbol(sym_ATerm_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
  ATprotectSymbol(sym_assoc_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
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
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_p_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_k_20;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_k_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_j_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_w_12;
ATerm term_h_10;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_f_8;
ATerm term_v_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_h_7;
ATerm term_e_7;
ATerm term_s_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_u_1;
void init_constant_terms (void)
{
  ATprotect(&(term_u_1));
  term_u_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_range_2, term_q_6, term_s_6);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_lex_1, term_h_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_cf_1, term_h_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_assoc_1, term_v_7);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_opt_1, term_h_7);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_cf_1, term_x_8);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_6);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__3, term_x_17, term_y_17, term_u_1);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm unflatten_lexical_0_0 (ATerm);
ATerm MkLayoutCharacter_0_0 (ATerm);
ATerm MkLayoutConsList_0_0 (ATerm);
ATerm unflatten_layout_0_0 (ATerm);
ATerm MkCfConsList_1_0 (ATerm h_77 (ATerm), ATerm);
ATerm MkCfConsList_2_0 (ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm);
ATerm MkLexConsList_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm unflatten_list_0_0 (ATerm);
ATerm list_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm list_some_1_0 (ATerm g_85 (ATerm), ATerm);
ATerm unflatten_literal_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm _2_0 (ATerm g_62 (ATerm), ATerm h_62 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_100 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_98 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm q_101 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm f_69 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_69 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm t_103 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm s_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  b_0 = t;
  t = term_u_1;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm u_5 = ATgetArgument(t, 0);
      if(match_cons(u_5, sym_prod_3))
        {
          ATerm y_5 = ATgetArgument(u_5, 0);
          if(((ATgetType(y_5) == AT_LIST) && !(ATisEmpty(y_5))))
            {
              ATerm b_6 = ATgetFirst((ATermList) y_5);
              if(match_cons(b_6, sym_lex_1))
                {
                  n_0 = ATgetArgument(b_6, 0);
                }
              else
                _fail(t);
              {
                ATerm c_6 = (ATerm) ATgetNext((ATermList) y_5);
                if(((ATgetType(c_6) != AT_LIST) || !(ATisEmpty(c_6))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm z_5 = ATgetArgument(u_5, 1);
            if(match_cons(z_5, sym_cf_1))
              {
                if((n_0 != ATgetArgument(z_5, 0)))
                  {
                    _fail(ATgetArgument(z_5, 0));
                  }
              }
            else
              _fail(t);
          }
          {
            ATerm a_6 = ATgetArgument(u_5, 2);
            if(!(match_cons(a_6, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm x_5 = ATgetArgument(t, 1);
        if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
          {
            ATerm d_6 = ATgetFirst((ATermList) x_5);
            if(match_cons(d_6, sym_appl_2))
              {
                ATerm f_6 = ATgetArgument(d_6, 0);
                if(match_cons(f_6, sym_prod_3))
                  {
                    o_0 = ATgetArgument(f_6, 0);
                    {
                      ATerm g_6 = ATgetArgument(f_6, 1);
                      if(match_cons(g_6, sym_iter_star_1))
                        {
                          ATerm j_6 = ATgetArgument(g_6, 0);
                          if(match_cons(j_6, sym_char_class_1))
                            {
                              ATerm k_6 = ATgetArgument(j_6, 0);
                              if(((ATgetType(k_6) == AT_LIST) && !(ATisEmpty(k_6))))
                                {
                                  ATerm l_6 = ATgetFirst((ATermList) k_6);
                                  if(match_cons(l_6, sym_range_2))
                                    {
                                      ATerm n_6 = ATgetArgument(l_6, 0);
                                      if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 0)))
                                        _fail(t);
                                      {
                                        ATerm o_6 = ATgetArgument(l_6, 1);
                                        if(((ATgetType(o_6) != AT_INT) || (ATgetInt((ATermInt) o_6) != 255)))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm m_6 = (ATerm) ATgetNext((ATermList) k_6);
                                    if(((ATgetType(m_6) != AT_LIST) || !(ATisEmpty(m_6))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                    {
                      ATerm i_6 = ATgetArgument(f_6, 2);
                      if(!(match_cons(i_6, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                p_0 = ATgetArgument(d_6, 1);
              }
            else
              _fail(t);
            {
              ATerm e_6 = (ATerm) ATgetNext((ATermList) x_5);
              if(((ATgetType(e_6) != AT_LIST) || !(ATisEmpty(e_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, n_0)), (ATerm)ATmakeAppl(sym_cf_1, n_0), term_p_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_e_7))))), (ATerm)ATmakeAppl(sym_lex_1, n_0), term_p_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, o_0, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_e_7)))), term_p_6), p_0))));
  return(t);
}
ATerm MkLayoutCharacter_0_0 (ATerm t)
{
  ATerm t_0 = NULL;
  t_0 = t;
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_int(t_0);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_m_7), term_n_7, term_p_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_e_7))), term_m_7, term_p_6), (ATerm) ATinsert(ATempty, t_0))));
        ;
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        {
          ATerm o_7 = t;
          int p_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL,y_0 = NULL,z_0 = NULL;
              if(match_cons(t, sym_appl_2))
                {
                  w_0 = ATgetArgument(t, 0);
                  {
                    ATerm s_7 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = w_0;
              if(match_cons(t, sym_prod_3))
                {
                  ATerm t_7 = ATgetArgument(t, 0);
                  y_0 = ATgetArgument(t, 1);
                  {
                    ATerm u_7 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = y_0;
              if(match_cons(t, sym_lex_1))
                {
                  z_0 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_m_7), term_n_7, term_p_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, z_0)), term_m_7, term_p_6), (ATerm) ATinsert(ATempty, t_0))));
                }
              else
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      z_0 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_m_7), term_n_7, term_p_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, z_0)), term_m_7, term_p_6), (ATerm) ATinsert(ATempty, t_0))));
                }
              ;
              LocalPopChoice(p_7);
            }
          else
            {
              t = o_7;
            }
        }
      }
  }
  return(t);
}
ATerm MkLayoutConsList_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_1 = ATgetFirst((ATermList) t);
      h_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_1;
      t = MkLayoutCharacter_0_0(t);
    }
  else
    {
      ATerm s_1 = NULL,t_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_1 = ATgetFirst((ATermList) t);
          j_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_1;
      t = MkLayoutCharacter_0_0(t);
      s_1 = t;
      t = i_1;
      t = MkLayoutCharacter_0_0(t);
      t_1 = t;
      t = (ATerm) ATinsert(CheckATermList(j_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_n_7), term_n_7), term_n_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_8))), (ATerm) ATinsert(ATinsert(ATempty, t_1), s_1)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
ATerm unflatten_layout_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if(match_cons(g_8, sym_prod_3))
        {
          ATerm h_8 = ATgetArgument(g_8, 0);
          if(((ATgetType(h_8) == AT_LIST) && !(ATisEmpty(h_8))))
            {
              ATerm k_8 = ATgetFirst((ATermList) h_8);
              if(match_cons(k_8, sym_cf_1))
                {
                  ATerm m_8 = ATgetArgument(k_8, 0);
                  if(!(match_cons(m_8, sym_layout_0)))
                    _fail(t);
                }
              else
                _fail(t);
              {
                ATerm l_8 = (ATerm) ATgetNext((ATermList) h_8);
                if(((ATgetType(l_8) != AT_LIST) || !(ATisEmpty(l_8))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm i_8 = ATgetArgument(g_8, 1);
            if(match_cons(i_8, sym_cf_1))
              {
                ATerm n_8 = ATgetArgument(i_8, 0);
                if(match_cons(n_8, sym_opt_1))
                  {
                    ATerm r_8 = ATgetArgument(n_8, 0);
                    if(!(match_cons(r_8, sym_layout_0)))
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
          {
            ATerm j_8 = ATgetArgument(g_8, 2);
            if(!(match_cons(j_8, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_1;
  t = MkLayoutConsList_0_0(t);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_n_7), term_y_8, term_p_6), (ATerm) ATinsert(ATempty, w_1));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm h_77 (ATerm), ATerm t)
{
  ATerm b_2 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm d_2 = NULL,e_2 = NULL;
    if(((b_2 != NULL) && (b_2 != t)))
      _fail(t);
    else
      b_2 = t;
    t = term_u_1;
    t = h_77(t);
    d_2 = t;
    t = term_u_1;
    t = h_77(t);
    e_2 = t;
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, d_2)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, e_2)), term_p_6), (ATerm) ATinsert(ATempty, not_null(b_2)));
    return(t);
  }
  t = Cons_2_0(e_0, _id, t);
  {
    ATerm d_4 (ATerm t)
    {
      ATerm j_2 = NULL,o_2 = NULL,u_2 = NULL,v_2 = NULL,a_3 = NULL,e_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_2 = ATgetFirst((ATermList) t);
          o_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_2;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_2;
        }
      else
        {
          ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,a_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_2 = ATgetFirst((ATermList) t);
              v_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_2;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_3 = ATgetFirst((ATermList) t);
              e_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = term_u_1;
          t = h_77(t);
          v_3 = t;
          t = term_u_1;
          t = h_77(t);
          w_3 = t;
          t = term_u_1;
          t = h_77(t);
          x_3 = t;
          t = term_u_1;
          t = h_77(t);
          y_3 = t;
          t = term_u_1;
          t = h_77(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(e_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, w_3))), term_y_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, v_3))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, x_3)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, y_3)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, a_4)), term_p_6), (ATerm) ATinsert(ATempty, a_3))), u_2), j_2)));
          t = d_4(t);
        }
      return(t);
    }
    t = d_4(t);
  }
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm j_77 (ATerm), ATerm k_77 (ATerm), ATerm t)
{
  ATerm o_4 = NULL;
  ATerm i_0 (ATerm t)
  {
    ATerm p_4 = NULL,q_4 = NULL,s_4 = NULL;
    if(((o_4 != NULL) && (o_4 != t)))
      _fail(t);
    else
      o_4 = t;
    t = term_u_1;
    t = j_77(t);
    p_4 = t;
    t = term_u_1;
    t = j_77(t);
    q_4 = t;
    t = term_u_1;
    t = k_77(t);
    s_4 = t;
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, p_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, q_4, s_4)), term_p_6), (ATerm) ATinsert(ATempty, not_null(o_4)));
    return(t);
  }
  t = Cons_2_0(i_0, _id, t);
  {
    ATerm c_7 (ATerm t)
    {
      ATerm w_4 = NULL,x_4 = NULL,a_5 = NULL,g_5 = NULL,j_5 = NULL,k_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_4 = ATgetFirst((ATermList) t);
          x_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_4;
        }
      else
        {
          ATerm r_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_5 = ATgetFirst((ATermList) t);
              g_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_5;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_5 = ATgetFirst((ATermList) t);
              k_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_5;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_5 = ATgetFirst((ATermList) t);
              s_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_5;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_5 = ATgetFirst((ATermList) t);
              v_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = term_u_1;
          t = j_77(t);
          r_6 = t;
          t = term_u_1;
          t = k_77(t);
          t_6 = t;
          t = term_u_1;
          t = k_77(t);
          u_6 = t;
          t = term_u_1;
          t = j_77(t);
          v_6 = t;
          t = term_u_1;
          t = k_77(t);
          w_6 = t;
          t = term_u_1;
          t = j_77(t);
          x_6 = t;
          t = term_u_1;
          t = k_77(t);
          y_6 = t;
          t = term_u_1;
          t = j_77(t);
          z_6 = t;
          t = term_u_1;
          t = j_77(t);
          a_7 = t;
          t = term_u_1;
          t = k_77(t);
          b_7 = t;
          t = (ATerm) ATinsert(CheckATermList(v_5), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, v_6, w_6))), term_y_8), u_6), term_y_8), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, r_6, t_6))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, x_6, y_6)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, z_6)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, a_7, b_7)), term_p_6), (ATerm) ATinsert(ATempty, t_5))), r_5), j_5), a_5), w_4)));
          t = c_7(t);
        }
      return(t);
    }
    t = c_7(t);
  }
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_7 = ATgetFirst((ATermList) t);
        j_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = j_7;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm q_7 = NULL,r_7 = NULL;
        t = term_u_1;
        t = m_77(t);
        q_7 = t;
        t = term_u_1;
        t = m_77(t);
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, q_7)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, r_7)), term_p_6), (ATerm) ATinsert(ATempty, i_7));
      }
    else
      {
        ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_7 = ATgetFirst((ATermList) t);
            l_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_u_1;
        t = m_77(t);
        w_7 = t;
        t = term_u_1;
        t = m_77(t);
        x_7 = t;
        t = term_u_1;
        t = m_77(t);
        y_7 = t;
        t = term_u_1;
        t = m_77(t);
        z_7 = t;
        t = term_u_1;
        t = m_77(t);
        a_8 = t;
        t = term_u_1;
        t = m_77(t);
        b_8 = t;
        t = term_u_1;
        t = m_77(t);
        c_8 = t;
        t = (ATerm) ATinsert(CheckATermList(l_7), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, x_7))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, w_7))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, y_7)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_f_8))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, b_8)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, c_8)), term_p_6), (ATerm) ATinsert(ATempty, k_7))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, z_7)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, a_8)), term_p_6), (ATerm) ATinsert(ATempty, i_7)))));
        t = d_8(t);
      }
    return(t);
  }
  t = d_8(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      s_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8;
  if(match_cons(t, sym_list_1))
    {
      t_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8;
  if(match_cons(t, sym_iter_1))
    {
      u_8 = ATgetArgument(t, 0);
      t = w_8;
      {
        ATerm r_0 (ATerm t)
        {
          t = u_8;
          return(t);
        }
        t = MkLexConsList_1_0(r_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          u_8 = ATgetArgument(t, 0);
          t = w_8;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_8 = ATgetFirst((ATermList) t);
              q_8 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm f_9 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, u_8)), (ATerm) ATinsert(CheckATermList(q_8), p_8));
                t = unflatten_list_0_0(t);
                f_9 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, u_8))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, u_8)), term_p_6), (ATerm) ATinsert(ATempty, f_9));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, u_8)), term_p_6), (ATerm) ATempty);
            }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              u_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_8;
          if(match_cons(t, sym_iter_sep_2))
            {
              v_8 = ATgetArgument(t, 0);
              o_8 = ATgetArgument(t, 1);
              t = w_8;
              {
                ATerm u_0 (ATerm t)
                {
                  t = v_8;
                  return(t);
                }
                ATerm v_0 (ATerm t)
                {
                  t = o_8;
                  return(t);
                }
                t = MkCfConsList_2_0(u_0, v_0, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  v_8 = ATgetArgument(t, 0);
                  o_8 = ATgetArgument(t, 1);
                  t = w_8;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_8 = ATgetFirst((ATermList) t);
                      q_8 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm p_9 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, v_8, o_8))), (ATerm) ATinsert(CheckATermList(q_8), p_8));
                        t = unflatten_list_0_0(t);
                        p_9 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, v_8, o_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, v_8, o_8)), term_p_6), (ATerm) ATinsert(ATempty, p_9));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, v_8, o_8)), term_p_6), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      v_8 = ATgetArgument(t, 0);
                      t = w_8;
                      {
                        ATerm x_0 (ATerm t)
                        {
                          t = v_8;
                          return(t);
                        }
                        t = MkCfConsList_1_0(x_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          v_8 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = w_8;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          p_8 = ATgetFirst((ATermList) t);
                          q_8 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm b_10 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, v_8))), (ATerm) ATinsert(CheckATermList(q_8), p_8));
                            t = unflatten_list_0_0(t);
                            b_10 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, v_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, v_8)), term_p_6), (ATerm) ATinsert(ATempty, b_10));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, v_8)), term_p_6), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_10 (ATerm t)
      {
        ATerm b_9 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            ;
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            t = Cons_2_0(m_0, t_10, t);
          }
        return(t);
      }
      t = t_10(t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm r_10 = NULL,s_10 = NULL,q_0 = NULL,s_0 = NULL;
        r_10 = t;
        if(match_cons(t, sym_list_1))
          {
            s_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_10);
        q_0 = t;
        t = s_10;
        t = m_0(t);
        s_0 = t;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_list_1, s_0), q_0);
      }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  ATerm v_10 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_85, _id, t);
        LocalPopChoice(e_9);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              ATerm g_9 = t;
              int h_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_85(t);
                  ;
                  LocalPopChoice(h_9);
                }
              else
                {
                  t = g_9;
                }
              return(t);
            }
            t = list_1_0(b_1, t);
            return(t);
          }
          t = Cons_2_0(_id, a_1, t);
        }
      }
    else
      {
        t = d_9;
        t = Cons_2_0(_id, v_10, t);
      }
    return(t);
  }
  t = v_10(t);
  return(t);
}
ATerm unflatten_literal_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_10;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
      if(match_cons(t, sym_lit_1))
        {
          z_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_explode_string(z_10);
      a_11 = t;
      {
        ATerm d_1 (ATerm t)
        {
          ATerm c_11 = NULL;
          c_11 = t;
          t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, c_11));
          return(t);
        }
        t = map_1_0(d_1, t);
        b_11 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, b_11, (ATerm)ATmakeAppl(sym_lit_1, z_10), term_p_6), a_11);
      }
      return(t);
    }
    t = list_some_1_0(c_1, t);
    y_10 = t;
    t = (ATerm) ATmakeAppl(sym_appl_2, w_10, y_10);
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = bottomup_1_0(k_79, t);
    return(t);
  }
  t = SRTS_all(e_1, t);
  t = k_79(t);
  return(t);
}
ATerm _2_0 (ATerm g_62 (ATerm), ATerm h_62 (ATerm), ATerm t)
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
  t = g_62(t);
  g_11 = t;
  t = f_11;
  t = h_62(t);
  h_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, g_11, h_11), d_11);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_11, term_i_9);
  t = open_stream_0_0(t);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, m_11);
  t = q_97(t);
  t = fclose_0_0(t);
  t = m_11;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  o_11 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm j_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((p_11 != NULL) && (p_11 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_1, t);
          ;
          LocalPopChoice(k_9);
        }
      else
        {
          t = j_9;
          t = term_l_9;
          if(((p_11 != NULL) && (p_11 != t)))
            _fail(t);
          else
            p_11 = t;
        }
      return(t);
    }
    t = _2_0(f_1, _id, t);
    t = o_11;
    {
      ATerm l_1 (ATerm t)
      {
        ATerm x_1 = NULL;
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), x_1);
        return(t);
      }
      t = _2_0(_id, l_1, t);
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm o_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(o_1, t);
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm o_9 = ATgetArgument(t, 0);
                    if(match_cons(o_9, sym_Stream_1))
                      {
                        q_11 = ATgetArgument(o_9, 0);
                      }
                    else
                      _fail(t);
                    r_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(q_11, r_11);
                s_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, s_11);
                return(t);
              }
              t = WriteToFile_1_0(p_1, t);
              return(t);
            }
            t = _2_0(m_1, n_1, t);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm q_1 (ATerm t)
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm q_9 = ATgetArgument(t, 0);
                      if(match_cons(q_9, sym_Stream_1))
                        {
                          t_11 = ATgetArgument(q_9, 0);
                        }
                      else
                        _fail(t);
                      u_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(t_11, u_11);
                  v_11 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), v_11);
                  w_11 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, w_11);
                  return(t);
                }
                t = WriteToFile_1_0(r_1, t);
                return(t);
              }
              t = _2_0(_id, q_1, t);
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
ATerm apply_strategy_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
  x_11 = t;
  t = dtime_0_0(t);
  t = x_11;
  t = s_100(t);
  y_11 = t;
  t = dtime_0_0(t);
  z_11 = t;
  t = y_11;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_12), (ATerm) ATmakeAppl(sym_Runtime_1, z_11)), b_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_12 (ATerm j_12, ATerm t)
  {
    t = SSL_fclose(j_12);
    return(t);
  }
  ATerm m_12 = NULL,n_12 = NULL;
  n_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_12 = ATgetArgument(t, 0);
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_12);
            ;
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            t = p_12(n_12, t);
          }
      }
    }
  else
    {
      t = p_12(n_12, t);
    }
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
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_9 = ATgetArgument(t, 0);
      ATerm v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 = NULL,p_2 = NULL;
        n_2 = t;
        t = SSL_explode_term(n_2);
        if(match_cons(t, sym__2))
          {
            ATerm y_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_9 = ATgetArgument(t, 1);
              if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
                {
                  p_2 = ATgetFirst((ATermList) z_9);
                  {
                    ATerm a_10 = (ATerm) ATgetNext((ATermList) z_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = p_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = p_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = p_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        {
          ATerm c_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
              ATerm y_1 (ATerm t)
              {
                ATerm a_13 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_13 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_13;
                return(t);
              }
              t = _2_0(y_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  x_12 = ATgetArgument(t, 0);
                  y_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(x_12, y_12);
              z_12 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_12);
              ;
              LocalPopChoice(d_10);
            }
          else
            {
              t = c_10;
              {
                ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
                ATerm z_1 (ATerm t)
                {
                  ATerm e_13 = NULL;
                  e_13 = t;
                  t = SSL_is_string(e_13);
                  return(t);
                }
                t = _2_0(z_1, _id, t);
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
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  ATerm e_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_13 = NULL;
      i_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_13, term_h_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = e_10;
      {
        ATerm q_2 = NULL;
        q_2 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = q_2;
        _fail(t);
      }
    }
  f_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(h_13);
  g_13 = t;
  t = f_13;
  t = fclose_0_0(t);
  t = g_13;
  return(t);
}
ATerm fetch_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm o_13 (ATerm t)
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_85, _id, t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = Cons_2_0(_id, o_13, t);
      }
    return(t);
  }
  t = o_13(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm r_13 = NULL,s_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_13 = ATgetFirst((ATermList) t);
            s_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_13;
        {
          ATerm a_2 (ATerm t)
          {
            t = s_13;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm y_13 (ATerm t)
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_13, t);
        ;
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_85(t);
      }
    return(t);
  }
  t = y_13(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  ATerm c_2 (ATerm t)
  {
    ATerm b_14 = NULL;
    b_14 = t;
    t = SSL_explode_string(b_14);
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm c_14 = NULL;
    c_14 = t;
    t = SSL_explode_string(c_14);
    return(t);
  }
  t = _2_0(c_2, f_2, t);
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,f_14 = NULL;
        if(match_cons(t, sym__2))
          {
            e_14 = ATgetArgument(t, 0);
            f_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_14;
        {
          ATerm g_2 (ATerm t)
          {
            t = f_14;
            return(t);
          }
          t = at_end_1_0(g_2, t);
        }
        ;
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        {
          ATerm x_2 = NULL,y_2 = NULL;
          x_2 = t;
          t = SSL_explode_term(x_2);
          if(match_cons(t, sym__2))
            {
              ATerm q_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              y_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_2;
          t = concat_0_0(t);
        }
      }
    a_14 = t;
    t = SSL_implode_string(a_14);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_10 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = NULL;
      p_14 = t;
      t = SSL_is_string(p_14);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = u_10;
      {
        ATerm k_11 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              ATerm e_12 = t;
              int f_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(f_12);
                }
              else
                {
                  t = e_12;
                }
              return(t);
            }
            t = map_1_0(h_2, t);
            ;
            LocalPopChoice(d_12);
          }
        else
          {
            t = k_11;
            {
              ATerm t_14 = NULL,u_14 = NULL,x_14 = NULL;
              t_14 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_14 = ATgetArgument(t, 0);
                  t = u_14;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_14 = ATgetArgument(t, 0);
                      t = u_14;
                      {
                        ATerm g_12 = t;
                        int h_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_14);
                            {
                              ATerm i_12 = t;
                              int k_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_4 = NULL;
                                  t = eval_config_0_0(t);
                                  g_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_14, g_4);
                                  t = g_4;
                                  ;
                                  LocalPopChoice(k_12);
                                }
                              else
                                {
                                  t = i_12;
                                }
                            }
                            ;
                            LocalPopChoice(h_12);
                          }
                        else
                          {
                            t = g_12;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_14), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = u_14;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_15 = NULL,f_15 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_14 = ATgetArgument(t, 0);
                          x_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_14;
                      t = eval_config_0_0(t);
                      e_15 = t;
                      t = x_14;
                      t = eval_config_0_0(t);
                      f_15 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_15, f_15);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm l_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_15 = NULL,o_15 = NULL;
      m_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 = NULL;
            t = eval_config_0_0(t);
            n_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_4);
            t = n_4;
            ;
            LocalPopChoice(u_12);
          }
        else
          {
            t = t_12;
          }
        o_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_15, term_w_12);
        t = geq_0_0(t);
        t = m_15;
        t = u_98(t);
      }
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = l_12;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm q_15 = NULL;
    q_15 = t;
    if(match_string(t, "-k"))
      {
        t = q_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = q_15;
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm r_15 = NULL,s_15 = NULL;
    r_15 = t;
    t = SSL_string_to_int(r_15);
    s_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_15);
    t = r_15;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_j_13;
    return(t);
  }
  t = ArgOption_3_0(i_2, k_2, l_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 (ATerm t)
      {
        ATerm u_15 = NULL;
        u_15 = t;
        if(match_string(t, "-S"))
          {
            t = u_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = u_15;
          }
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_m_13;
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_n_13;
        return(t);
      }
      t = Option_3_0(m_2, r_2, s_2, t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm w_2 (ATerm t)
            {
              ATerm v_15 = NULL,w_15 = NULL;
              v_15 = t;
              t = SSL_string_to_int(v_15);
              w_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, v_15);
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              t = term_t_13;
              return(t);
            }
            t = ArgOption_3_0(t_2, w_2, z_2, t);
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm b_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_13;
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_v_13;
                return(t);
              }
              t = Option_3_0(b_3, c_3, d_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_16 = NULL;
      t = term_u_1;
      t = d_0(t);
      b_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_13, term_x_13, b_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_15 = ATgetFirst((ATermList) t);
          a_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_15;
      t = a_0(t);
      t = term_u_1;
      t = c_0(t);
      e_16 = t;
      t = (ATerm) ATinsert(CheckATermList(a_16), e_16);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm g_16 = NULL;
    g_16 = t;
    if(match_string(t, "-o"))
      {
        t = g_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = g_16;
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm h_16 = NULL;
    h_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_16);
    t = (ATerm) ATmakeAppl(sym_Output_1, h_16);
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_z_13;
    return(t);
  }
  t = ArgOption_3_0(f_3, g_3, h_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__3))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
      m_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_16, l_16);
  {
    ATerm d_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_14 = ATgetArgument(t, 0);
            ATerm i_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_16, l_16);
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATempty;
      }
    n_16 = t;
    t = SSL_table_put(k_16, l_16, (ATerm) ATinsert(CheckATermList(n_16), m_16));
    t = (ATerm) ATmakeAppl(sym__3, k_16, l_16, m_16);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_16 = NULL;
      t = term_u_1;
      t = l_0(t);
      z_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_13, term_x_13, z_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_16 = ATgetFirst((ATermList) t);
          w_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_16 = ATgetFirst((ATermList) t);
          y_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_16;
      t = j_0(t);
      t = x_16;
      t = k_0(t);
      d_17 = t;
      t = (ATerm) ATinsert(CheckATermList(y_16), d_17);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm f_17 = NULL;
    f_17 = t;
    if(match_string(t, "-i"))
      {
        t = f_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = f_17;
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm g_17 = NULL;
    g_17 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_17);
    t = (ATerm) ATmakeAppl(sym_Input_1, g_17);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_j_14;
    return(t);
  }
  t = ArgOption_3_0(i_3, j_3, k_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_1;
  t = whoami_0_0(t);
  h_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_17));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_4 = NULL;
        t = eval_config_0_0(t);
        y_4 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_4);
        t = y_4;
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_91(t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm k_17 = NULL,l_17 = NULL,o_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_17 = ATgetFirst((ATermList) t);
            l_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_17;
        t = foldr_2_0(c_91, d_91, t);
        o_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_17, o_17);
        t = d_91(t);
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
  ATerm r_17 = NULL,z_4 = NULL,b_5 = NULL;
  t = times_0_0(t);
  z_4 = t;
  t = SSL_explode_term(z_4);
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5;
  {
    ATerm l_3 (ATerm t)
    {
      t = term_q_6;
      return(t);
    }
    ATerm m_3 (ATerm t)
    {
      ATerm e_5 = NULL,f_5 = NULL;
      if(match_cons(t, sym__2))
        {
          e_5 = ATgetArgument(t, 0);
          f_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(e_5, f_5);
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            t = SSL_addr(e_5, f_5);
          }
      }
      return(t);
    }
    t = foldr_2_0(l_3, m_3, t);
    r_17 = t;
    t = SSL_TicksToSeconds(r_17);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_18;
        if((d_18 != t))
          {
            _fail(t);
          }
        t = c_18;
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = s_14;
        t = c_18;
        {
          ATerm w_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_18, e_18);
              ;
              LocalPopChoice(y_14);
            }
          else
            {
              t = w_14;
              t = SSL_gtr(d_18, e_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_18, e_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_18 = NULL,j_18 = NULL;
      h_18 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 = NULL;
            t = eval_config_0_0(t);
            w_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_5);
            t = w_5;
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
          }
        j_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_18, term_d_15);
        t = geq_0_0(t);
        t = h_18;
        t = t_98(t);
      }
      ;
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm l_18 = NULL,m_18 = NULL;
    t = run_time_0_0(t);
    l_18 = t;
    t = term_u_1;
    t = whoami_0_0(t);
    m_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_18), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), m_18));
    t = (ATerm) ATmakeAppl(sym__2, term_g_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), l_18), term_h_15), m_18));
    return(t);
  }
  t = if_verbose1_1_0(n_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm l_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 = NULL;
            t = eval_config_0_0(t);
            h_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), h_6);
            t = h_6;
            ;
            LocalPopChoice(n_15);
          }
        else
          {
            t = l_15;
          }
      }
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm p_15 = t;
          int t_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(t_15);
            }
          else
            {
              t = p_15;
              {
                ATerm x_15 = t;
                int y_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(y_15);
                  }
                else
                  {
                    t = x_15;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(o_3, t);
      }
    }
  t = q_101(t);
  return(t);
}
ATerm map_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  ATerm n_18 (ATerm t)
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        t = Cons_2_0(a_85, n_18, t);
      }
    return(t);
  }
  t = n_18(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_18 = ATgetFirst((ATermList) t);
      q_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_18 = NULL,w_18 = NULL;
        t = q_18;
        t = h_0(t);
        v_18 = t;
        t = p_18;
        t = g_0(t);
        w_18 = t;
        t = q_18;
        {
          ATerm p_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(v_18), w_18);
            return(t);
          }
          t = reverse_acc_2_0(g_0, p_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_1;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm f_69 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  a_19 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_19);
  x_18 = t;
  t = y_18;
  t = f_69(t);
  z_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, z_18), x_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_19 = NULL;
  ATerm f_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm j_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_7 = NULL;
            t = eval_config_0_0(t);
            d_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_7);
            t = d_7;
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = j_16;
          }
        d_19 = t;
      }
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = f_16;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm r_3 (ATerm t)
          {
            if(((d_19 != NULL) && (d_19 != t)))
              _fail(t);
            else
              d_19 = t;
            return(t);
          }
          t = Program_1_0(r_3, t);
          return(t);
        }
        t = fetch_1_0(q_3, t);
      }
    }
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_16), not_null(d_19)), term_r_16);
        t = echo_0_0(t);
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
      }
    t = term_t_16;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    {
      ATerm s_3 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, s_3, t);
      {
        ATerm t_3 (ATerm t)
        {
          ATerm e_19 = NULL;
          e_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, e_19), term_u_16);
          t = echo_0_0(t);
          return(t);
        }
        t = map_1_0(t_3, t);
        {
          ATerm a_17 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_17), term_j_17), term_i_17), term_e_17), term_c_17);
              t = echo_0_0(t);
              ;
              LocalPopChoice(b_17);
            }
          else
            {
              t = a_17;
            }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm g_69 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  i_19 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      g_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_19);
  f_19 = t;
  t = g_19;
  t = g_69(t);
  h_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, h_19), f_19);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  m_19 = t;
  {
    ATerm n_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_17 = ATgetFirst((ATermList) t);
                ATerm s_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_19;
          }
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = n_17;
        t = (ATerm) ATinsert(ATempty, m_19);
      }
    n_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), n_19);
    t = m_19;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_8 = NULL;
        t = eval_config_0_0(t);
        e_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_8);
        t = e_8;
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_z_17;
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = term_a_18;
        return(t);
      }
      t = Option_3_0(u_3, z_3, b_4, t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm c_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_18;
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          t = term_f_18;
          return(t);
        }
        t = Option_3_0(c_4, e_4, f_4, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
  w_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_19 = ATgetFirst((ATermList) t);
      t_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_19);
  r_19 = t;
  t = s_19;
  t = p_63(t);
  u_19 = t;
  t = t_19;
  t = q_63(t);
  v_19 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(v_19), u_19), r_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  {
    ATerm g_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_18;
        t = t_103(t);
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = g_18;
      }
    t = a_20;
    {
      ATerm h_4 (ATerm t)
      {
        ATerm b_20 = NULL;
        b_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, b_20);
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        ATerm o_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_18 = t;
            int t_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_18);
              }
            else
              {
                t = s_18;
                t = t_103(t);
                t = Cons_2_0(_id, i_4, t);
              }
            ;
            LocalPopChoice(r_18);
          }
        else
          {
            t = o_18;
            {
              ATerm f_20 = NULL,g_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_20 = ATgetFirst((ATermList) t);
                  g_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_20), (ATerm) ATmakeAppl(sym_Undefined_1, f_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(h_4, i_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = n_20;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm u_18 = t;
      int b_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_103(t);
          ;
          LocalPopChoice(b_19);
        }
      else
        {
          t = u_18;
          {
            ATerm c_19 = t;
            int j_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_4 (ATerm t)
                {
                  ATerm q_20 = NULL;
                  q_20 = t;
                  if(match_string(t, "--help"))
                    {
                      t = q_20;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = q_20;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = q_20;
                        }
                    }
                  return(t);
                }
                ATerm l_4 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_k_19;
                  return(t);
                }
                ATerm m_4 (ATerm t)
                {
                  t = term_l_19;
                  return(t);
                }
                t = Option_3_0(k_4, l_4, m_4, t);
                ;
                LocalPopChoice(j_19);
              }
            else
              {
                t = c_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_4, t);
    {
      ATerm o_19 = t;
      int p_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_20 = NULL;
          v_20 = t;
          {
            ATerm q_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_20;
                {
                  ATerm y_19 = t;
                  int z_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm c_20 = t;
                        int d_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_9 = NULL;
                            t = eval_config_0_0(t);
                            t_9 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_9);
                            t = t_9;
                            ;
                            LocalPopChoice(d_20);
                          }
                        else
                          {
                            t = c_20;
                          }
                      }
                      ;
                      LocalPopChoice(z_19);
                    }
                  else
                    {
                      t = y_19;
                      {
                        ATerm r_4 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(r_4, t);
                      }
                    }
                  t = v_20;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(x_19);
              }
            else
              {
                t = q_19;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm e_20 = t;
                  int h_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_10 = NULL;
                      t = eval_config_0_0(t);
                      f_10 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), f_10);
                      t = f_10;
                      ;
                      LocalPopChoice(h_20);
                    }
                  else
                    {
                      t = e_20;
                    }
                  t = v_20;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(p_19);
        }
      else
        {
          t = o_19;
          {
            ATerm i_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm u_4 (ATerm t)
                  {
                    if(((o_20 != NULL) && (o_20 != t)))
                      _fail(t);
                    else
                      o_20 = t;
                    return(t);
                  }
                  t = Undefined_1_0(u_4, t);
                  return(t);
                }
                t = fetch_1_0(t_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_g_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_20)), term_k_20));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(j_20);
              }
            else
              {
                t = i_20;
              }
          }
        }
      p_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = p_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm t)
{
  ATerm y_20 = NULL;
  t = parse_options_1_0(s_101, t);
  y_20 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_20);
  t = y_20;
  t = u_101(t);
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_101, t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        {
          ATerm r_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_101(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_20);
            }
          else
            {
              t = r_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_101(t);
        ;
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        {
          ATerm w_20 = t;
          int x_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(x_20);
            }
          else
            {
              t = w_20;
              {
                ATerm a_21 = t;
                int b_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(b_21);
                  }
                else
                  {
                    t = a_21;
                    {
                      ATerm f_21 = t;
                      int g_21 = stack_ptr;
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
                            t = term_h_21;
                            return(t);
                          }
                          ATerm l_5 (ATerm t)
                          {
                            t = term_i_21;
                            return(t);
                          }
                          t = Option_3_0(h_5, i_5, l_5, t);
                          ;
                          LocalPopChoice(g_21);
                        }
                      else
                        {
                          t = f_21;
                          {
                            ATerm j_21 = t;
                            int k_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(k_21);
                              }
                            else
                              {
                                t = j_21;
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
  ATerm c_5 (ATerm t)
  {
    ATerm m_5 (ATerm t)
    {
      ATerm z_20 = NULL,c_21 = NULL;
      z_20 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_12 = NULL;
            t = eval_config_0_0(t);
            c_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_12);
            t = c_12;
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
          }
        c_21 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, c_21));
        t = z_20;
      }
      return(t);
    }
    t = if_verbose2_1_0(m_5, t);
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm d_21 = NULL,e_21 = NULL,v_12 = NULL;
    d_21 = t;
    {
      ATerm n_21 = t;
      int o_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_21 != NULL) && (e_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_5, t);
          ;
          LocalPopChoice(o_21);
        }
      else
        {
          t = n_21;
          t = term_p_21;
          e_21 = t;
        }
      t = not_null(e_21);
      t = ReadFromFile_0_0(t);
      v_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_21, v_12);
      t = apply_strategy_1_0(b_101, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_4, d_101, c_5, d_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm p_5 (ATerm t)
    {
      ATerm q_5 (ATerm t)
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = unflatten_literal_0_0(t);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
          }
        {
          ATerm s_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = unflatten_list_0_0(t);
              ;
              LocalPopChoice(t_21);
            }
          else
            {
              t = s_21;
            }
          {
            ATerm u_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = unflatten_layout_0_0(t);
                ;
                LocalPopChoice(v_21);
              }
            else
              {
                t = u_21;
              }
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = unflatten_lexical_0_0(t);
                  ;
                  LocalPopChoice(x_21);
                }
              else
                {
                  t = w_21;
                }
            }
          }
        }
        return(t);
      }
      t = bottomup_1_0(q_5, t);
      return(t);
    }
    t = _2_0(_id, p_5, t);
    return(t);
  }
  t = iowrap_3_0(o_5, _fail, default_usage_0_0, t);
  return(t);
}
