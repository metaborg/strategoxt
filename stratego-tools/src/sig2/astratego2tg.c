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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Path_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_j_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_b_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_i_14;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_q_11;
ATerm term_y_9;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_i_6;
void init_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_String_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_11);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__3, term_e_20, term_f_20, term_i_6);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm filter_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm build_group_by_pairs_4_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm);
ATerm group_by_3_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm);
ATerm to_dec_prod_item_0_0 (ATerm);
ATerm assert_1_0 (ATerm f_106 (ATerm), ATerm);
ATerm add_param_rule_0_0 (ATerm);
ATerm map_with_index_1_0 (ATerm q_85 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm c_106 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm b_106 (ATerm), ATerm);
ATerm scope_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm);
ATerm to_prod_items_0_0 (ATerm);
ATerm to_NonTermDec_0_0 (ATerm);
ATerm union_1_0 (ATerm e_103 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm stratego_ast_to_tg_0_0 (ATerm);
ATerm _2_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_77 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_84 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_101 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_64 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm k_94 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm j_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,o_0 = NULL;
  f_0 = t;
  t = term_i_6;
  t = whoami_0_0(t);
  o_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = f_0;
  return(t);
}
ATerm filter_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
        ATerm m_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
            {
              t = filter_1_0(w_87, t);
              return(t);
            }
            t = Cons_2_0(w_87, h_0, t);
            ;
            LocalPopChoice(q_6);
          }
        else
          {
            t = m_6;
            {
              ATerm s_0 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_6 = ATgetFirst((ATermList) t);
                  s_0 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_0;
              t = filter_1_0(w_87, t);
            }
          }
      }
    }
  return(t);
}
ATerm build_group_by_pairs_4_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm), ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL;
  w_0 = t;
  t = term_i_6;
  t = j_77(t);
  {
    ATerm l_0 (ATerm t)
    {
      ATerm y_0 = NULL;
      y_0 = t;
      t = g_77(t);
      if((w_0 != t))
        {
          _fail(t);
        }
      t = y_0;
      return(t);
    }
    t = filter_1_0(l_0, t);
    t = map_1_0(h_77, t);
    x_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_0, x_0);
    t = i_77(t);
  }
  return(t);
}
ATerm group_by_3_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm t)
{
  ATerm z_0 = NULL;
  z_0 = t;
  t = map_1_0(d_77, t);
  {
    ATerm m_0 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm n_0 (ATerm t)
    {
      ATerm r_0 (ATerm t)
      {
        ATerm c_1 = NULL;
        if(match_cons(t, sym__2))
          {
            c_1 = ATgetArgument(t, 0);
            if((c_1 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(r_0, t);
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm d_1 = NULL;
      d_1 = t;
      t = (ATerm) ATinsert(ATempty, d_1);
      return(t);
    }
    t = foldr_3_0(m_0, n_0, q_0, t);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm v_0 (ATerm t)
        {
          t = z_0;
          return(t);
        }
        t = build_group_by_pairs_4_0(d_77, e_77, f_77, v_0, t);
        return(t);
      }
      t = map_1_0(u_0, t);
    }
  }
  return(t);
}
ATerm to_dec_prod_item_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,v_2 = NULL;
  t_2 = t;
  if(match_cons(t, sym_Op_2))
    {
      v_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
      {
        ATerm z_2 = NULL;
        t = s_2;
        {
          ATerm a_1 (ATerm t)
          {
            ATerm t_6 = t;
            int a_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_3 = NULL;
                if(match_cons(t, sym_Var_1))
                  {
                    b_3 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_3;
                if(match_string(t, "String"))
                  {
                    t = term_d_7;
                  }
                else
                  {
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Int", 0, ATtrue)))
                      _fail(t);
                    t = term_e_7;
                  }
                ;
                LocalPopChoice(a_7);
              }
            else
              {
                t = t_6;
                t = to_dec_prod_item_0_0(t);
              }
            return(t);
          }
          t = map_1_0(a_1, t);
          z_2 = t;
          t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, v_2), z_2);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_Var_1))
        {
          v_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 = NULL,t_0 = NULL;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Var_1, v_2));
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_0 = ATgetFirst((ATermList) t);
                {
                  ATerm k_7 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = p_0;
            if(match_cons(t, sym_Defined_2))
              {
                ATerm l_7 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_7) != ATmakeSymbol("b_0", 0, ATtrue)))
                  _fail(t);
                t_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Param_1, t_0);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            t = t_2;
            {
              ATerm n_7 = t;
              if((PushChoice() == 0))
                {
                  ATerm e_1 = NULL,f_1 = NULL;
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Var_1, v_2));
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm o_7 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = f_1;
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm q_7 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) q_7) != ATmakeSymbol("b_0", 0, ATtrue)))
                        _fail(t);
                      e_1 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_1;
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_7;
                }
              t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, v_2), (ATerm) ATempty);
            }
          }
      }
    }
  return(t);
}
ATerm assert_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_106(t);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_3, f_3, g_3);
  t = table_push_0_0(t);
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(h_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_3 = ATgetFirst((ATermList) t);
        j_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(h_3, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(j_3), (ATerm) ATinsert(CheckATermList(i_3), f_3)));
    t = (ATerm) ATmakeAppl(sym__2, f_3, g_3);
  }
  return(t);
}
ATerm add_param_rule_0_0 (ATerm t)
{
  ATerm o_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      o_3 = ATgetArgument(t, 0);
      {
        ATerm t_7 = ATgetArgument(t, 1);
        if(match_cons(t_7, sym_Var_1))
          {
            q_3 = ATgetArgument(t_7, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_3), (ATerm) ATmakeAppl(sym_Defined_2, term_w_7, o_3));
  {
    ATerm b_1 (ATerm t)
    {
      t = term_x_7;
      return(t);
    }
    t = assert_1_0(b_1, t);
    t = (ATerm) ATmakeAppl(sym__2, o_3, (ATerm) ATmakeAppl(sym_Var_1, q_3));
  }
  return(t);
}
ATerm map_with_index_1_0 (ATerm q_85 (ATerm), ATerm t)
{
  ATerm x_3 = NULL;
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, x_3);
  {
    ATerm b_5 (ATerm t)
    {
      ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
      if(match_cons(t, sym__2))
        {
          x_4 = ATgetArgument(t, 0);
          y_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm n_1 = NULL,r_1 = NULL,s_1 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_4 = ATgetFirst((ATermList) t);
              a_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_4, z_4);
          t = q_85(t);
          n_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_4, term_y_7);
          {
            ATerm d_8 = t;
            int g_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(x_4, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(g_8);
              }
            else
              {
                t = d_8;
                t = SSL_addr(x_4, (ATerm) ATmakeInt(1));
              }
            r_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_1, a_5);
            t = b_5(t);
            s_1 = t;
            t = (ATerm) ATinsert(CheckATermList(s_1), n_1);
          }
        }
      return(t);
    }
    t = b_5(t);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_8 = ATgetArgument(t, 0);
            ATerm n_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_5, g_5);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_9 = ATgetFirst((ATermList) t);
            v_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_1;
        ;
        LocalPopChoice(k_8);
      }
    else
      {
        t = h_8;
        t = (ATerm) ATempty;
      }
    h_5 = t;
    t = SSL_table_put(f_5, g_5, h_5);
    t = (ATerm) ATmakeAppl(sym__2, f_5, g_5);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm c_106 (ATerm), ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
  n_5 = t;
  t = c_106(t);
  o_5 = t;
  {
    ATerm d_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_5, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_5 = ATgetFirst((ATermList) t);
        p_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_5, (ATerm)ATmakeAppl(sym_Scopes_0), p_5);
    t = q_5;
    {
      ATerm g_1 (ATerm t)
      {
        ATerm r_5 = NULL;
        r_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, r_5);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(g_1, t);
      t = n_5;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_82(t);
      t = q_82(t);
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      t = q_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_106 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t = b_106(t);
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_5, term_y_9);
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_10 = ATgetArgument(t, 0);
            ATerm d_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_5, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        t = (ATerm) ATempty;
      }
    w_5 = t;
    t = SSL_table_put(v_5, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_5), (ATerm) ATempty));
    t = u_5;
  }
  return(t);
}
ATerm scope_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  t = begin_scope_1_0(d_106, t);
  {
    ATerm h_1 (ATerm t)
    {
      t = end_scope_1_0(d_106, t);
      return(t);
    }
    t = restore_always_2_0(e_106, h_1, t);
  }
  return(t);
}
ATerm to_prod_items_0_0 (ATerm t)
{
  ATerm f_6 = NULL,h_6 = NULL,j_6 = NULL;
  h_6 = t;
  if(match_cons(t, sym_FunType_2))
    {
      j_6 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
      {
        ATerm n_6 = NULL;
        t = h_6;
        {
          ATerm i_1 (ATerm t)
          {
            t = term_x_7;
            return(t);
          }
          ATerm j_1 (ATerm t)
          {
            t = f_6;
            {
              ATerm e_10 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_6 = NULL;
                  if(match_cons(t, sym_ConstType_1))
                    {
                      ATerm m_10 = ATgetArgument(t, 0);
                      if(match_cons(m_10, sym_Op_2))
                        {
                          ATerm n_10 = ATgetArgument(m_10, 0);
                          o_6 = ATgetArgument(m_10, 1);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = o_6;
                  LocalPopChoice(h_10);
                  t = map_with_index_1_0(add_param_rule_0_0, t);
                }
              else
                {
                  t = e_10;
                }
              t = j_6;
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm p_6 = NULL;
                  if(match_cons(t, sym_ConstType_1))
                    {
                      p_6 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_6;
                  {
                    ATerm o_10 = t;
                    int p_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_6 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            r_6 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_6;
                        if(match_string(t, "String"))
                          {
                            t = term_d_7;
                          }
                        else
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Int", 0, ATtrue)))
                              _fail(t);
                            t = term_e_7;
                          }
                        ;
                        LocalPopChoice(p_10);
                      }
                    else
                      {
                        t = o_10;
                        t = to_dec_prod_item_0_0(t);
                      }
                  }
                  return(t);
                }
                t = map_1_0(k_1, t);
                if(((n_6 != NULL) && (n_6 != t)))
                  _fail(t);
                else
                  n_6 = t;
              }
            }
            return(t);
          }
          t = scope_2_0(i_1, j_1, t);
          t = not_null(n_6);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          j_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_6;
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm t_10 = ATgetArgument(t, 0);
                ATerm u_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(r_10);
            t = (ATerm) ATempty;
          }
        else
          {
            t = q_10;
            if(match_cons(t, sym_Var_1))
              {
                ATerm x_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATempty;
          }
      }
    }
  return(t);
}
ATerm to_NonTermDec_0_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,b_7 = NULL,c_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,m_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      x_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6;
  if(match_cons(t, sym_ConstType_1))
    {
      f_7 = ATgetArgument(t, 0);
      t = f_7;
    }
  else
    {
      if(match_cons(t, sym_FunType_2))
        {
          ATerm c_11 = ATgetArgument(t, 0);
          g_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_7;
      if(match_cons(t, sym_ConstType_1))
        {
          h_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_7;
    }
  z_6 = t;
  {
    ATerm g_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Op_2))
          {
            m_7 = ATgetArgument(t, 0);
            {
              ATerm l_11 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_11);
        t = m_7;
      }
    else
      {
        t = g_11;
        if(match_cons(t, sym_Var_1))
          {
            m_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_7;
      }
    t = z_6;
    {
      ATerm m_11 = t;
      int n_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Op_2))
            {
              ATerm p_11 = ATgetArgument(t, 0);
              p_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(n_11);
          t = p_7;
          {
            ATerm l_1 (ATerm t)
            {
              t = term_q_11;
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              ATerm u_7 = NULL,v_7 = NULL;
              if(match_cons(t, sym__2))
                {
                  u_7 = ATgetArgument(t, 0);
                  v_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm t_11 = t;
                int u_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_addi(u_7, v_7);
                    ;
                    LocalPopChoice(u_11);
                  }
                else
                  {
                    t = t_11;
                    t = SSL_addr(u_7, v_7);
                  }
              }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              t = term_y_7;
              return(t);
            }
            t = foldr_3_0(l_1, m_1, o_1, t);
          }
        }
      else
        {
          t = m_11;
          if(match_cons(t, sym_Var_1))
            {
              ATerm w_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_q_11;
        }
      b_7 = t;
      t = y_6;
      t = to_prod_items_0_0(t);
      c_7 = t;
      t = (ATerm) ATmakeAppl(sym_NonTermDec_3, (ATerm)ATmakeAppl(sym_Id_1, m_7), b_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Prod_2, (ATerm)ATmakeAppl(sym_Id_1, x_6), c_7)));
    }
  }
  return(t);
}
ATerm union_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_8;
  {
    ATerm b_8 (ATerm t)
    {
      ATerm x_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_7;
          ;
          LocalPopChoice(y_11);
        }
      else
        {
          t = x_11;
          {
            ATerm z_11 = t;
            int a_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_1 = NULL,x_1 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    w_1 = ATgetFirst((ATermList) t);
                    x_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = z_7;
                {
                  ATerm p_1 (ATerm t)
                  {
                    ATerm y_1 = NULL;
                    y_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_1, y_1);
                    t = e_103(t);
                    return(t);
                  }
                  t = fetch_1_0(p_1, t);
                  t = x_1;
                  t = b_8(t);
                }
                ;
                LocalPopChoice(a_12);
              }
            else
              {
                t = z_11;
                t = Cons_2_0(_id, b_8, t);
              }
          }
        }
      return(t);
    }
    t = b_8(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t)
{
  ATerm b_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_104(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = b_12;
      {
        ATerm e_8 = NULL,f_8 = NULL,i_8 = NULL,j_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_8 = ATgetFirst((ATermList) t);
            f_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_8;
        t = a_105(t);
        i_8 = t;
        t = f_8;
        t = foldr_3_0(y_104, z_104, a_105, t);
        j_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_8, j_8);
        t = z_104(t);
      }
    }
  return(t);
}
ATerm collect_om_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm f_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_8 = NULL;
      t = a_104(t);
      m_8 = t;
      t = (ATerm) ATinsert(ATempty, m_8);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = f_12;
      {
        ATerm c_2 = NULL,d_2 = NULL;
        c_2 = t;
        t = SSL_explode_term(c_2);
        if(match_cons(t, sym__2))
          {
            ATerm m_12 = ATgetArgument(t, 0);
            d_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_2;
        {
          ATerm q_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm t_1 (ATerm t)
          {
            ATerm z_1 (ATerm t)
            {
              ATerm j_2 = NULL;
              if(match_cons(t, sym__2))
                {
                  j_2 = ATgetArgument(t, 0);
                  if((j_2 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              return(t);
            }
            t = union_1_0(z_1, t);
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            t = collect_om_1_0(a_104, t);
            return(t);
          }
          t = foldr_3_0(q_1, t_1, u_1, t);
        }
      }
    }
  return(t);
}
ATerm stratego_ast_to_tg_0_0 (ATerm t)
{
  ATerm o_8 = NULL;
  ATerm a_2 (ATerm t)
  {
    if(match_cons(t, sym_OpDecl_2))
      {
        ATerm n_12 = ATgetArgument(t, 0);
        ATerm o_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_om_1_0(a_2, t);
  t = map_1_0(to_NonTermDec_0_0, t);
  {
    ATerm b_2 (ATerm t)
    {
      ATerm p_8 = NULL,q_8 = NULL;
      if(match_cons(t, sym_NonTermDec_3))
        {
          p_8 = ATgetArgument(t, 0);
          q_8 = ATgetArgument(t, 1);
          {
            ATerm p_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, p_8, q_8);
      return(t);
    }
    ATerm e_2 (ATerm t)
    {
      ATerm r_8 = NULL;
      if(match_cons(t, sym_NonTermDec_3))
        {
          ATerm q_12 = ATgetArgument(t, 0);
          ATerm s_12 = ATgetArgument(t, 1);
          ATerm t_12 = ATgetArgument(t, 2);
          if(((ATgetType(t_12) == AT_LIST) && !(ATisEmpty(t_12))))
            {
              r_8 = ATgetFirst((ATermList) t_12);
              {
                ATerm u_12 = (ATerm) ATgetNext((ATermList) t_12);
                if(((ATgetType(u_12) != AT_LIST) || !(ATisEmpty(u_12))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = r_8;
      return(t);
    }
    ATerm f_2 (ATerm t)
    {
      ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm v_12 = ATgetArgument(t, 0);
          if(match_cons(v_12, sym__2))
            {
              s_8 = ATgetArgument(v_12, 0);
              t_8 = ATgetArgument(v_12, 1);
            }
          else
            _fail(t);
          u_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_NonTermDec_3, s_8, t_8, u_8);
      return(t);
    }
    t = group_by_3_0(b_2, e_2, f_2, t);
    o_8 = t;
    t = (ATerm) ATmakeAppl(sym_TreeGrammar_1, o_8);
  }
  return(t);
}
ATerm _2_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_9);
  v_8 = t;
  t = x_8;
  t = l_62(t);
  z_8 = t;
  t = y_8;
  t = m_62(t);
  a_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, z_8, a_9), v_8);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_9, term_x_12);
  t = open_stream_0_0(t);
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_9, f_9);
  t = b_92(t);
  t = fclose_0_0(t);
  t = f_9;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  h_9 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((i_9 != NULL) && (i_9 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_2, t);
          ;
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          t = term_a_13;
          if(((i_9 != NULL) && (i_9 != t)))
            _fail(t);
          else
            i_9 = t;
        }
      return(t);
    }
    t = _2_0(g_2, _id, t);
    t = h_9;
    {
      ATerm i_2 (ATerm t)
      {
        ATerm k_2 = NULL;
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), k_2);
        return(t);
      }
      t = _2_0(_id, i_2, t);
      {
        ATerm b_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              ATerm n_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(n_2, t);
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              ATerm o_2 (ATerm t)
              {
                ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm g_13 = ATgetArgument(t, 0);
                    if(match_cons(g_13, sym_Stream_1))
                      {
                        j_9 = ATgetArgument(g_13, 0);
                      }
                    else
                      _fail(t);
                    k_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(j_9, k_9);
                l_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_9);
                return(t);
              }
              t = WriteToFile_1_0(o_2, t);
              return(t);
            }
            t = _2_0(l_2, m_2, t);
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = b_13;
            {
              ATerm p_2 (ATerm t)
              {
                ATerm q_2 (ATerm t)
                {
                  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm h_13 = ATgetArgument(t, 0);
                      if(match_cons(h_13, sym_Stream_1))
                        {
                          m_9 = ATgetArgument(h_13, 0);
                        }
                      else
                        _fail(t);
                      n_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(m_9, n_9);
                  o_9 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), o_9);
                  p_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, p_9);
                  return(t);
                }
                t = WriteToFile_1_0(q_2, t);
                return(t);
              }
              t = _2_0(_id, p_2, t);
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
ATerm apply_strategy_1_0 (ATerm k_77 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  q_9 = t;
  t = dtime_0_0(t);
  t = q_9;
  t = k_77(t);
  r_9 = t;
  t = dtime_0_0(t);
  s_9 = t;
  t = r_9;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_9), (ATerm) ATmakeAppl(sym_Runtime_1, s_9)), u_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_10 (ATerm c_10, ATerm t)
  {
    t = SSL_fclose(c_10);
    return(t);
  }
  ATerm f_10 = NULL,g_10 = NULL;
  g_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_10 = ATgetArgument(t, 0);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_10);
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            t = i_10(g_10, t);
          }
      }
    }
  else
    {
      t = i_10(g_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_10 = NULL;
  t = SSL_stdin_stream();
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_10 = NULL;
  t = SSL_stdout_stream();
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_10 = NULL;
  t = SSL_stderr_stream();
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_13 = ATgetArgument(t, 0);
      ATerm n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_3 = NULL,n_3 = NULL;
        m_3 = t;
        t = SSL_explode_term(m_3);
        if(match_cons(t, sym__2))
          {
            ATerm v_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_13 = ATgetArgument(t, 1);
              if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
                {
                  n_3 = ATgetFirst((ATermList) z_13);
                  {
                    ATerm a_14 = (ATerm) ATgetNext((ATermList) z_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = p_13;
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_10 = NULL,v_10 = NULL,w_10 = NULL;
              ATerm r_2 (ATerm t)
              {
                ATerm y_10 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    y_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = y_10;
                return(t);
              }
              t = _2_0(r_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  s_10 = ATgetArgument(t, 0);
                  v_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(s_10, v_10);
              w_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_10);
              ;
              LocalPopChoice(f_14);
            }
          else
            {
              t = e_14;
              {
                ATerm z_10 = NULL,a_11 = NULL,d_11 = NULL;
                ATerm u_2 (ATerm t)
                {
                  ATerm e_11 = NULL;
                  e_11 = t;
                  t = SSL_is_string(e_11);
                  return(t);
                }
                t = _2_0(u_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    z_10 = ATgetArgument(t, 0);
                    a_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(z_10, a_11);
                d_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_11 = NULL,h_11 = NULL,i_11 = NULL;
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_11 = NULL;
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_11, term_i_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        ATerm p_3 = NULL;
        p_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = p_3;
        _fail(t);
      }
    }
  f_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_11);
  h_11 = t;
  t = f_11;
  t = fclose_0_0(t);
  t = h_11;
  return(t);
}
ATerm fetch_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm o_11 (ATerm t)
  {
    ATerm k_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_84, _id, t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = k_14;
        t = Cons_2_0(_id, o_11, t);
      }
    return(t);
  }
  t = o_11(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = o_14;
      {
        ATerm r_11 = NULL,s_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_11 = ATgetFirst((ATermList) t);
            s_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_11;
        {
          ATerm w_2 (ATerm t)
          {
            t = s_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm c_12 (ATerm t)
  {
    ATerm t_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_12, t);
        ;
        LocalPopChoice(w_14);
      }
    else
      {
        t = t_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_84(t);
      }
    return(t);
  }
  t = c_12(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm g_12 = NULL;
  ATerm x_2 (ATerm t)
  {
    ATerm h_12 = NULL;
    h_12 = t;
    t = SSL_explode_string(h_12);
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm i_12 = NULL;
    i_12 = t;
    t = SSL_explode_string(i_12);
    return(t);
  }
  t = _2_0(x_2, y_2, t);
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL,l_12 = NULL;
        if(match_cons(t, sym__2))
          {
            k_12 = ATgetArgument(t, 0);
            l_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_12;
        {
          ATerm a_3 (ATerm t)
          {
            t = l_12;
            return(t);
          }
          t = at_end_1_0(a_3, t);
        }
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        {
          ATerm v_3 = NULL,w_3 = NULL;
          v_3 = t;
          t = SSL_explode_term(v_3);
          if(match_cons(t, sym__2))
            {
              ATerm z_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3;
          t = concat_0_0(t);
        }
      }
    g_12 = t;
    t = SSL_implode_string(g_12);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_12 = NULL;
      w_12 = t;
      t = SSL_is_string(w_12);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              ATerm j_15 = t;
              int k_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(k_15);
                }
              else
                {
                  t = j_15;
                }
              return(t);
            }
            t = map_1_0(c_3, t);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            {
              ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
              c_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_13 = ATgetArgument(t, 0);
                  t = d_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_13 = ATgetArgument(t, 0);
                      t = d_13;
                      {
                        ATerm l_15 = t;
                        int o_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_13);
                            {
                              ATerm p_15 = t;
                              int q_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm d_5 = NULL;
                                  t = eval_config_0_0(t);
                                  d_5 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_13, d_5);
                                  t = d_5;
                                  ;
                                  LocalPopChoice(q_15);
                                }
                              else
                                {
                                  t = p_15;
                                }
                            }
                            ;
                            LocalPopChoice(o_15);
                          }
                        else
                          {
                            t = l_15;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_13), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = d_13;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_13 = NULL,j_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_13 = ATgetArgument(t, 0);
                          e_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_13;
                      t = eval_config_0_0(t);
                      i_13 = t;
                      t = e_13;
                      t = eval_config_0_0(t);
                      j_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_13, j_13);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13 = NULL,q_13 = NULL;
      o_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm x_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 = NULL;
            t = eval_config_0_0(t);
            e_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_6);
            t = e_6;
            ;
            LocalPopChoice(z_15);
          }
        else
          {
            t = x_15;
          }
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_13, term_c_16);
        t = geq_0_0(t);
        t = o_13;
        t = x_101(t);
      }
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm s_13 = NULL;
    s_13 = t;
    if(match_string(t, "-k"))
      {
        t = s_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = s_13;
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm t_13 = NULL,u_13 = NULL;
    t_13 = t;
    t = SSL_string_to_int(t_13);
    u_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), u_13);
    t = t_13;
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_d_16;
    return(t);
  }
  t = ArgOption_3_0(d_3, e_3, k_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_3 (ATerm t)
      {
        ATerm w_13 = NULL;
        w_13 = t;
        if(match_string(t, "-S"))
          {
            t = w_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = w_13;
          }
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_h_16;
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        t = term_j_16;
        return(t);
      }
      t = Option_3_0(l_3, r_3, s_3, t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = e_16;
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm u_3 (ATerm t)
            {
              ATerm x_13 = NULL,y_13 = NULL;
              x_13 = t;
              t = SSL_string_to_int(x_13);
              y_13 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_13);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, x_13);
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              t = term_m_16;
              return(t);
            }
            t = ArgOption_3_0(t_3, u_3, y_3, t);
            ;
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            {
              ATerm z_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm a_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_n_16;
                return(t);
              }
              ATerm b_4 (ATerm t)
              {
                t = term_o_16;
                return(t);
              }
              t = Option_3_0(z_3, a_4, b_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_14 = NULL;
      t = term_i_6;
      t = d_0(t);
      d_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_16, term_q_16, d_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm j_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_14 = ATgetFirst((ATermList) t);
          c_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_14;
      t = a_0(t);
      t = term_i_6;
      t = c_0(t);
      j_14 = t;
      t = (ATerm) ATinsert(CheckATermList(c_14), j_14);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm l_14 = NULL;
    l_14 = t;
    if(match_string(t, "-o"))
      {
        t = l_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = l_14;
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    ATerm m_14 = NULL;
    m_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), m_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, m_14);
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_r_16;
    return(t);
  }
  t = ArgOption_3_0(c_4, d_4, e_4, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__3))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
      u_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_14, q_14);
  {
    ATerm s_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_16 = ATgetArgument(t, 0);
            ATerm z_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_14, q_14);
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = s_16;
        t = (ATerm) ATempty;
      }
    v_14 = t;
    t = SSL_table_put(p_14, q_14, (ATerm) ATinsert(CheckATermList(v_14), u_14));
    t = (ATerm) ATmakeAppl(sym__3, p_14, q_14, u_14);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_15 = NULL;
      t = term_i_6;
      t = k_0(t);
      i_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_16, term_q_16, i_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_15 = ATgetFirst((ATermList) t);
          f_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_15 = ATgetFirst((ATermList) t);
          h_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_15;
      t = i_0(t);
      t = g_15;
      t = j_0(t);
      m_15 = t;
      t = (ATerm) ATinsert(CheckATermList(h_15), m_15);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm r_15 = NULL;
    r_15 = t;
    if(match_string(t, "-i"))
      {
        t = r_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = r_15;
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    ATerm t_15 = NULL;
    t_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), t_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, t_15);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_b_17;
    return(t);
  }
  t = ArgOption_3_0(f_4, g_4, h_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_6;
  t = whoami_0_0(t);
  u_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), u_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm f_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL;
        t = eval_config_0_0(t);
        u_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_6);
        t = u_6;
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = f_17;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_104(t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm a_16 = NULL,b_16 = NULL,f_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_16 = ATgetFirst((ATermList) t);
            b_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_16;
        t = foldr_2_0(w_104, x_104, t);
        f_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_16, f_16);
        t = x_104(t);
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
  ATerm i_16 = NULL,v_6 = NULL,w_6 = NULL;
  t = times_0_0(t);
  v_6 = t;
  t = SSL_explode_term(v_6);
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6;
  {
    ATerm i_4 (ATerm t)
    {
      t = term_q_11;
      return(t);
    }
    ATerm j_4 (ATerm t)
    {
      ATerm c_8 = NULL,w_8 = NULL;
      if(match_cons(t, sym__2))
        {
          c_8 = ATgetArgument(t, 0);
          w_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(c_8, w_8);
            ;
            LocalPopChoice(y_17);
          }
        else
          {
            t = s_17;
            t = SSL_addr(c_8, w_8);
          }
      }
      return(t);
    }
    t = foldr_2_0(i_4, j_4, t);
    i_16 = t;
    t = SSL_TicksToSeconds(i_16);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_16;
        if((u_16 != t))
          {
            _fail(t);
          }
        t = t_16;
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = t_16;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_16, v_16);
              ;
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = SSL_gtr(u_16, v_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_16, v_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm f_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_16 = NULL,a_17 = NULL;
      y_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 = NULL;
            t = eval_config_0_0(t);
            b_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_11);
            t = b_11;
            ;
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
          }
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_17, term_y_7);
        t = geq_0_0(t);
        t = y_16;
        t = w_101(t);
      }
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = f_18;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm c_17 = NULL,d_17 = NULL;
    t = run_time_0_0(t);
    c_17 = t;
    t = term_i_6;
    t = whoami_0_0(t);
    d_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), c_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), d_17));
    t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_18), c_17), term_u_18), d_17));
    return(t);
  }
  t = if_verbose1_1_0(k_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_11 = NULL;
            t = eval_config_0_0(t);
            v_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_11);
            t = v_11;
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
          }
      }
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm l_4 (ATerm t)
        {
          ATerm d_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(f_19);
            }
          else
            {
              t = d_19;
              {
                ATerm g_19 = t;
                int h_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(h_19);
                  }
                else
                  {
                    t = g_19;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(l_4, t);
      }
    }
  t = i_78(t);
  return(t);
}
ATerm map_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  ATerm e_17 (ATerm t)
  {
    ATerm i_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = i_19;
        t = Cons_2_0(s_83, e_17, t);
      }
    return(t);
  }
  t = e_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_17 = ATgetFirst((ATermList) t);
      h_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_17 = NULL,m_17 = NULL;
        t = h_17;
        t = g_0(t);
        l_17 = t;
        t = g_17;
        t = e_0(t);
        m_17 = t;
        t = h_17;
        {
          ATerm m_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_17), m_17);
            return(t);
          }
          t = reverse_acc_2_0(e_0, m_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm n_64 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  n_17 = t;
  t = o_17;
  t = n_64(t);
  p_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_17), n_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_12 = NULL;
            t = eval_config_0_0(t);
            d_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_12);
            t = d_12;
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
          }
      }
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = l_19;
      {
        ATerm n_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(n_4, t);
      }
    }
  t = term_u_19;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm o_4 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, o_4, t);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm t_17 = NULL;
        t_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_17), term_v_19);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(p_4, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm o_64 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  x_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      v_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_17);
  u_17 = t;
  t = v_17;
  t = o_64(t);
  w_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, w_17), u_17);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_19 = ATgetFirst((ATermList) t);
                ATerm z_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_18;
          }
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = (ATerm) ATinsert(ATempty, b_18);
      }
    c_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_18);
    t = b_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_12 = NULL;
        t = eval_config_0_0(t);
        r_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_12);
        t = r_12;
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_g_20;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_h_20;
        return(t);
      }
      t = Option_3_0(q_4, r_4, s_4, t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      {
        ATerm t_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm u_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_i_20;
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = term_j_20;
          return(t);
        }
        t = Option_3_0(t_4, u_4, v_4, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  l_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_18 = ATgetFirst((ATermList) t);
      i_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_18);
  g_18 = t;
  t = h_18;
  t = u_63(t);
  j_18 = t;
  t = i_18;
  t = v_63(t);
  k_18 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_18), j_18), g_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_20;
        t = k_94(t);
        ;
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
      }
    t = p_18;
    {
      ATerm w_4 (ATerm t)
      {
        ATerm q_18 = NULL;
        q_18 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_18);
        t = (ATerm) ATmakeAppl(sym_Program_1, q_18);
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_20);
              }
            else
              {
                t = p_20;
                t = k_94(t);
                t = Cons_2_0(_id, c_5, t);
              }
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            {
              ATerm s_18 = NULL,t_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_18 = ATgetFirst((ATermList) t);
                  t_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_18), (ATerm) ATmakeAppl(sym_Undefined_1, s_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_4, c_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_19;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm r_20 = t;
      int s_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_94(t);
          ;
          LocalPopChoice(s_20);
        }
      else
        {
          t = r_20;
          {
            ATerm t_20 = t;
            int u_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm e_19 = NULL;
                  e_19 = t;
                  if(match_string(t, "--help"))
                    {
                      t = e_19;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = e_19;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = e_19;
                        }
                    }
                  return(t);
                }
                ATerm j_5 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_v_20;
                  return(t);
                }
                ATerm k_5 (ATerm t)
                {
                  t = term_w_20;
                  return(t);
                }
                t = Option_3_0(i_5, j_5, k_5, t);
                ;
                LocalPopChoice(u_20);
              }
            else
              {
                t = t_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_5, t);
    {
      ATerm x_20 = t;
      int y_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_19 = NULL;
          j_19 = t;
          {
            ATerm z_20 = t;
            int a_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_19;
                {
                  ATerm b_21 = t;
                  int c_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm d_21 = t;
                        int e_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_14 = NULL;
                            t = eval_config_0_0(t);
                            r_14 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_14);
                            t = r_14;
                            ;
                            LocalPopChoice(e_21);
                          }
                        else
                          {
                            t = d_21;
                          }
                      }
                      ;
                      LocalPopChoice(c_21);
                    }
                  else
                    {
                      t = b_21;
                      {
                        ATerm l_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(l_5, t);
                      }
                    }
                  t = j_19;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(a_21);
              }
            else
              {
                t = z_20;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm f_21 = t;
                  int g_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_15 = NULL;
                      t = eval_config_0_0(t);
                      n_15 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), n_15);
                      t = n_15;
                      ;
                      LocalPopChoice(g_21);
                    }
                  else
                    {
                      t = f_21;
                    }
                  t = j_19;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_20);
        }
      else
        {
          t = x_20;
          {
            ATerm h_21 = t;
            int i_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm s_5 (ATerm t)
                  {
                    if(((b_19 != NULL) && (b_19 != t)))
                      _fail(t);
                    else
                      b_19 = t;
                    return(t);
                  }
                  t = Undefined_1_0(s_5, t);
                  return(t);
                }
                t = fetch_1_0(m_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_19)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_19)), term_j_21));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(i_21);
              }
            else
              {
                t = h_21;
              }
          }
        }
      c_19 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = c_19;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t)
{
  ATerm m_19 = NULL;
  t = parse_options_1_0(k_78, t);
  m_19 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), m_19);
  t = m_19;
  t = m_78(t);
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_78, t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        {
          ATerm m_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_78(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_21);
            }
          else
            {
              t = m_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_77(t);
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              {
                ATerm s_21 = t;
                int t_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(t_21);
                  }
                else
                  {
                    t = s_21;
                    {
                      ATerm u_21 = t;
                      int v_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_5 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm a_6 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_w_21;
                            return(t);
                          }
                          ATerm b_6 (ATerm t)
                          {
                            t = term_x_21;
                            return(t);
                          }
                          t = Option_3_0(z_5, a_6, b_6, t);
                          ;
                          LocalPopChoice(v_21);
                        }
                      else
                        {
                          t = u_21;
                          {
                            ATerm y_21 = t;
                            int z_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_21);
                              }
                            else
                              {
                                t = y_21;
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
  ATerm x_5 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm n_19 = NULL,o_19 = NULL;
      n_19 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_15 = NULL;
            t = eval_config_0_0(t);
            s_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_15);
            t = s_15;
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
          }
        o_19 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, o_19));
        t = n_19;
      }
      return(t);
    }
    t = if_verbose2_1_0(c_6, t);
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    ATerm p_19 = NULL,q_19 = NULL,y_15 = NULL;
    p_19 = t;
    {
      ATerm c_22 = t;
      int d_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_19 != NULL) && (q_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_6, t);
          ;
          LocalPopChoice(d_22);
        }
      else
        {
          t = c_22;
          t = term_e_22;
          q_19 = t;
        }
      t = not_null(q_19);
      t = ReadFromFile_0_0(t);
      y_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_19, y_15);
      t = apply_strategy_1_0(t_77, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_5, v_77, x_5, y_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    t = _2_0(_id, stratego_ast_to_tg_0_0, t);
    return(t);
  }
  t = iowrap_3_0(g_6, _fail, default_usage_0_0, t);
  return(t);
}
