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
Symbol sym_Rules_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_Rule_3;
Symbol sym_RDef_3;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Prim_2;
Symbol sym_Path_2;
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
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_l_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_q_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_y_12;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_y_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_l_7;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_k_5;
ATerm term_i_3;
void init_constant_terms (void)
{
  ATprotect(&(term_i_3));
  term_i_3 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_Op_2, term_i_3, (ATerm) ATempty);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_5);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_Call_2, term_x_5, (ATerm) ATempty);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_Var_1, term_t_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__3, term_i_15, term_j_15, term_l_7);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm new_0_0 (ATerm);
ATerm EvalPrimitive_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm);
ATerm union_1_0 (ATerm b_86 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm);
ATerm crush_3_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm collect_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm get_primitives_0_0 (ATerm);
ATerm _2_0 (ATerm f_60 (ATerm), ATerm g_60 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm o_82 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm n_94 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm p_97 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm z_93 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm);
ATerm crush_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm e_67 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_67 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm n_99 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm m_74 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm s_100 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_100 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm p_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm EvalPrimitive_0_0 (ATerm t)
{
  ATerm k_0 = NULL,m_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      k_0 = ATgetArgument(t, 0);
      m_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_0;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm r_0 = NULL;
      t = new_0_0(t);
      r_0 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_0);
      return(t);
    }
    t = map_1_0(b_0, t);
    o_0 = t;
    {
      ATerm f_0 (ATerm t)
      {
        t = term_k_5;
        return(t);
      }
      ATerm l_0 (ATerm t)
      {
        ATerm s_0 = NULL,z_0 = NULL,f_1 = NULL;
        s_0 = t;
        t = SSL_explode_term(s_0);
        if(match_cons(t, sym__2))
          {
            ATerm l_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_5 = ATgetArgument(t, 1);
              if(((ATgetType(m_5) == AT_LIST) && !(ATisEmpty(m_5))))
                {
                  z_0 = ATgetFirst((ATermList) m_5);
                  {
                    ATerm n_5 = (ATerm) ATgetNext((ATermList) m_5);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = SSL_explode_term(s_0);
        if(match_cons(t, sym__2))
          {
            ATerm o_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_5 = ATgetArgument(t, 1);
              if(((ATgetType(p_5) == AT_LIST) && !(ATisEmpty(p_5))))
                {
                  ATerm q_5 = ATgetFirst((ATermList) p_5);
                  ATerm r_5 = (ATerm) ATgetNext((ATermList) p_5);
                  if(((ATgetType(r_5) == AT_LIST) && !(ATisEmpty(r_5))))
                    {
                      f_1 = ATgetFirst((ATermList) r_5);
                      {
                        ATerm u_5 = (ATerm) ATgetNext((ATermList) r_5);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, f_1), z_0));
        return(t);
      }
      t = foldr_2_0(f_0, l_0, t);
      p_0 = t;
      t = o_0;
      {
        ATerm n_0 (ATerm t)
        {
          ATerm x_0 = NULL;
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, term_y_5, x_0);
          return(t);
        }
        t = map_1_0(n_0, t);
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym_RDef_3, term_j_6, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_6, (ATerm) ATinsert(ATinsert(ATempty, term_u_6), (ATerm) ATmakeAppl(sym_Op_2, term_l_6, (ATerm) ATinsert(ATinsert(ATempty, p_0), (ATerm) ATmakeAppl(sym_Str_1, k_0))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, k_0, q_0), term_u_6), term_v_6));
      }
    }
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,a_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_0 = ATgetFirst((ATermList) t);
      a_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_86(t);
  {
    ATerm t_0 (ATerm t)
    {
      ATerm c_1 = NULL;
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_0, c_1);
      t = f_86(t);
      return(t);
    }
    t = fetch_1_0(t_0, t);
    t = a_1;
  }
  return(t);
}
ATerm union_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm h_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm y_6 = t;
      int c_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_1;
          ;
          LocalPopChoice(c_7);
        }
      else
        {
          t = y_6;
          {
            ATerm d_7 = t;
            int e_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_0 (ATerm t)
                {
                  t = h_1;
                  return(t);
                }
                t = HdMember_p__2_0(b_86, u_0, t);
                t = o_1(t);
                ;
                LocalPopChoice(e_7);
              }
            else
              {
                t = d_7;
                t = Cons_2_0(_id, o_1, t);
              }
          }
        }
      return(t);
    }
    t = o_1(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm t_1 = NULL;
    if(match_cons(t, sym__2))
      {
        t_1 = ATgetArgument(t, 0);
        if((t_1 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(v_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_88(t);
      ;
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      {
        ATerm b_2 = NULL,d_2 = NULL,h_2 = NULL,i_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_2 = ATgetFirst((ATermList) t);
            d_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_2;
        t = d_88(t);
        h_2 = t;
        t = d_2;
        t = foldr_3_0(b_88, c_88, d_88, t);
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_2, i_2);
        t = c_88(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  j_2 = t;
  t = SSL_explode_term(j_2);
  if(match_cons(t, sym__2))
    {
      ATerm h_7 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_2;
  t = foldr_3_0(u_91, v_91, w_91, t);
  return(t);
}
ATerm collect_om_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm i_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 = NULL;
      t = x_86(t);
      l_2 = t;
      t = (ATerm) ATinsert(ATempty, l_2);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = i_7;
      {
        ATerm w_0 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          t = collect_om_1_0(x_86, t);
          return(t);
        }
        t = crush_3_0(w_0, union_0_0, b_1, t);
      }
    }
  return(t);
}
ATerm collect_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  t = collect_om_1_0(y_86, t);
  return(t);
}
ATerm get_primitives_0_0 (ATerm t)
{
  t = collect_1_0(EvalPrimitive_0_0, t);
  return(t);
}
ATerm _2_0 (ATerm f_60 (ATerm), ATerm g_60 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,u_2 = NULL;
  u_2 = t;
  if(match_cons(t, sym__2))
    {
      o_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_2);
  n_2 = t;
  t = o_2;
  t = f_60(t);
  q_2 = t;
  t = p_2;
  t = g_60(t);
  r_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_2, r_2), n_2);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  y_2 = t;
  t = term_l_7;
  t = whoami_0_0(t);
  z_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), z_2), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = y_2;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm e_3 = NULL,f_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_3 = ATgetFirst((ATermList) t);
            f_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_3;
        {
          ATerm d_1 (ATerm t)
          {
            t = f_3;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_1, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  j_3 = t;
  t = SSL_explode_term(j_3);
  if(match_cons(t, sym__2))
    {
      ATerm q_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_3;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm r_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_3, t);
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = r_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_82(t);
      }
    return(t);
  }
  t = l_3(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3;
  {
    ATerm e_1 (ATerm t)
    {
      t = o_3;
      return(t);
    }
    t = at_end_1_0(e_1, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = v_7;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm w_3 = NULL;
  ATerm g_1 (ATerm t)
  {
    ATerm z_3 = NULL;
    z_3 = t;
    t = SSL_explode_string(z_3);
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm c_4 = NULL;
    c_4 = t;
    t = SSL_explode_string(c_4);
    return(t);
  }
  t = _2_0(g_1, i_1, t);
  t = conc_0_0(t);
  w_3 = t;
  t = SSL_implode_string(w_3);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 = NULL;
      s_4 = t;
      t = SSL_is_string(s_4);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      {
        ATerm q_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(j_1, t);
            ;
            LocalPopChoice(w_8);
          }
        else
          {
            t = q_8;
            {
              ATerm a_5 = NULL,b_5 = NULL,i_5 = NULL;
              a_5 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_5 = ATgetArgument(t, 0);
                  t = b_5;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_5 = ATgetArgument(t, 0);
                      t = b_5;
                      {
                        ATerm a_9 = t;
                        int e_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(e_9);
                          }
                        else
                          {
                            t = a_9;
                            {
                              ATerm k_1 (ATerm t)
                              {
                                t = term_h_9;
                                return(t);
                              }
                              t = debug_1_0(k_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_5 = NULL,t_5 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_5 = ATgetArgument(t, 0);
                          i_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_5;
                      t = eval_config_0_0(t);
                      s_5 = t;
                      t = i_5;
                      t = eval_config_0_0(t);
                      t_5 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_5, t_5);
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
  ATerm z_5 = NULL;
  z_5 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_5);
  {
    ATerm l_1 (ATerm t)
    {
      ATerm a_6 = NULL;
      t = eval_config_0_0(t);
      a_6 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_5, a_6);
      t = a_6;
      return(t);
    }
    t = try_1_0(l_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm b_6 = NULL,c_6 = NULL;
    b_6 = t;
    t = term_i_9;
    t = get_config_0_0(t);
    c_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_6, term_o_9);
    t = geq_0_0(t);
    t = b_6;
    t = r_95(t);
    return(t);
  }
  t = try_1_0(m_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm p_9 = ATgetArgument(t, 0);
        if(match_cons(p_9, sym_Stream_1))
          {
            d_6 = ATgetArgument(p_9, 0);
          }
        else
          _fail(t);
        e_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(d_6, e_6);
    f_6 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), f_6);
    g_6 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, g_6);
    return(t);
  }
  t = WriteToFile_1_0(p_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,m_6 = NULL;
  if(match_cons(t, sym__2))
    {
      h_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_6, term_q_9);
  t = open_stream_0_0(t);
  m_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_6, i_6);
  t = n_94(t);
  t = fclose_0_0(t);
  t = i_6;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm n_6 = NULL,p_6 = NULL,q_6 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm s_9 = ATgetArgument(t, 0);
        if(match_cons(s_9, sym_Stream_1))
          {
            n_6 = ATgetArgument(s_9, 0);
          }
        else
          _fail(t);
        p_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(n_6, p_6);
    q_6 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, q_6);
    return(t);
  }
  t = WriteToFile_1_0(q_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL;
  r_6 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm w_9 = t;
      int x_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                s_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(s_1, t);
          ;
          LocalPopChoice(x_9);
        }
      else
        {
          t = w_9;
          t = term_y_9;
          s_6 = t;
        }
      return(t);
    }
    t = _2_0(r_1, _id, t);
    t = r_6;
    {
      ATerm u_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          t = not_null(s_6);
          return(t);
        }
        t = split_2_0(x_1, _id, t);
        return(t);
      }
      t = _2_0(_id, u_1, t);
      {
        ATerm z_9 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 (ATerm t)
            {
              ATerm z_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(z_1, t);
              return(t);
            }
            t = _2_0(y_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = z_9;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  w_6 = t;
  t = dtime_0_0(t);
  t = w_6;
  t = p_97(t);
  x_6 = t;
  t = dtime_0_0(t);
  z_6 = t;
  t = x_6;
  if(match_cons(t, sym__2))
    {
      a_7 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_7), (ATerm) ATmakeAppl(sym_Runtime_1, z_6)), b_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_7 (ATerm j_7, ATerm t)
  {
    t = SSL_fclose(j_7);
    return(t);
  }
  ATerm m_7 = NULL,p_7 = NULL;
  p_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_7 = ATgetArgument(t, 0);
      {
        ATerm d_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_7);
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = d_10;
            t = s_7(p_7, t);
          }
      }
    }
  else
    {
      t = s_7(p_7, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm z_93 (ATerm), ATerm t)
{
  ATerm t_7 = NULL,w_7 = NULL;
  t_7 = t;
  t = z_93(t);
  w_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_7), w_7));
  t = t_7;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_7 = NULL;
  t = SSL_stdin_stream();
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_7 = NULL;
  t = SSL_stdout_stream();
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_7 = NULL;
  t = SSL_stderr_stream();
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_7);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm b_8 = NULL;
  b_8 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      ATerm m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL,w_1 = NULL;
        v_1 = t;
        t = SSL_explode_term(v_1);
        if(match_cons(t, sym__2))
          {
            ATerm p_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_10 = ATgetArgument(t, 1);
              if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
                {
                  w_1 = ATgetFirst((ATermList) q_10);
                  {
                    ATerm r_10 = (ATerm) ATgetNext((ATermList) q_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        {
          ATerm v_10 = t;
          int w_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
              ATerm a_2 (ATerm t)
              {
                ATerm h_8 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    h_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = h_8;
                return(t);
              }
              t = _2_0(a_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_8 = ATgetArgument(t, 0);
                  f_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(e_8, f_8);
              g_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, g_8);
              ;
              LocalPopChoice(w_10);
            }
          else
            {
              t = v_10;
              {
                ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
                ATerm c_2 (ATerm t)
                {
                  ATerm l_8 = NULL;
                  l_8 = t;
                  t = SSL_is_string(l_8);
                  return(t);
                }
                t = _2_0(c_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    i_8 = ATgetArgument(t, 0);
                    j_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(i_8, j_8);
                k_8 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, k_8);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  ATerm z_10 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_8 = NULL;
      p_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_8, term_e_11);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = z_10;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_h_11;
          return(t);
        }
        t = debug_1_0(e_2, t);
        _fail(t);
      }
    }
  m_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(o_8);
  n_8 = t;
  t = m_8;
  t = fclose_0_0(t);
  t = n_8;
  return(t);
}
ATerm split_2_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  t = o_89(t);
  s_8 = t;
  t = r_8;
  t = p_89(t);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_8, t_8);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  u_8 = t;
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              v_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(f_2, t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = term_q_11;
        v_8 = t;
      }
    t = u_8;
    {
      ATerm g_2 (ATerm t)
      {
        t = not_null(v_8);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, g_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm x_8 = NULL;
    x_8 = t;
    if(match_string(t, "-k"))
      {
        t = x_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = x_8;
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm y_8 = NULL,z_8 = NULL;
    y_8 = t;
    t = SSL_string_to_int(y_8);
    z_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_8);
    t = y_8;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_r_11;
    return(t);
  }
  t = ArgOption_3_0(m_2, s_2, t_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 (ATerm t)
      {
        ATerm b_9 = NULL;
        b_9 = t;
        if(match_string(t, "-S"))
          {
            t = b_9;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = b_9;
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_d_12;
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_e_12;
        return(t);
      }
      t = Option_3_0(v_2, w_2, x_2, t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              ATerm c_9 = NULL,d_9 = NULL;
              c_9 = t;
              t = SSL_string_to_int(c_9);
              d_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_9);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, c_9);
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_h_12;
              return(t);
            }
            t = ArgOption_3_0(a_3, b_3, c_3, t);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm d_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm g_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_m_12;
                return(t);
              }
              ATerm h_3 (ATerm t)
              {
                t = term_n_12;
                return(t);
              }
              t = Option_3_0(d_3, g_3, h_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm f_9 = NULL;
    f_9 = t;
    if(match_string(t, "-o"))
      {
        t = f_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_9;
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm g_9 = NULL;
    g_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_9);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_9);
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_r_12;
    return(t);
  }
  t = ArgOption_3_0(m_3, n_3, q_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm r_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_12;
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          t = term_g_13;
          return(t);
        }
        t = Option_3_0(r_3, s_3, t_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
  j_9 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = j_9;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm r_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_9 = ATgetFirst((ATermList) t);
          l_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_9 = ATgetFirst((ATermList) t);
          n_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_9;
      t = h_0(t);
      t = m_9;
      t = i_0(t);
      r_9 = t;
      t = (ATerm) ATinsert(CheckATermList(n_9), r_9);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm t_9 = NULL;
    t_9 = t;
    if(match_string(t, "-i"))
      {
        t = t_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_9;
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm u_9 = NULL;
    u_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_9);
    t = (ATerm) ATmakeAppl(sym_Input_1, u_9);
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  t = ArgOption_3_0(u_3, v_3, x_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm k_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = k_13;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_7;
  t = whoami_0_0(t);
  v_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_9));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_87(t);
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm a_10 = NULL,b_10 = NULL,e_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_10 = ATgetFirst((ATermList) t);
            b_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_10;
        t = foldr_2_0(z_87, a_88, t);
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_10, e_10);
        t = a_88(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  f_10 = t;
  t = SSL_explode_term(f_10);
  if(match_cons(t, sym__2))
    {
      ATerm t_13 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10;
  t = foldr_2_0(s_91, t_91, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_10 = NULL;
  t = times_0_0(t);
  {
    ATerm y_3 (ATerm t)
    {
      t = term_a_12;
      return(t);
    }
    ATerm a_4 (ATerm t)
    {
      ATerm i_10 = NULL,j_10 = NULL;
      if(match_cons(t, sym__2))
        {
          i_10 = ATgetArgument(t, 0);
          j_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm u_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(i_10, j_10);
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = u_13;
            t = SSL_addr(i_10, j_10);
          }
      }
      return(t);
    }
    t = crush_2_0(y_3, a_4, t);
    h_10 = t;
    t = SSL_TicksToSeconds(h_10);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  s_10 = t;
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_10;
        if((t_10 != t))
          {
            _fail(t);
          }
        t = s_10;
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = s_10;
        {
          ATerm b_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_10, u_10);
              ;
              LocalPopChoice(d_14);
            }
          else
            {
              t = b_14;
              t = SSL_gtr(t_10, u_10);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm x_10 = NULL,y_10 = NULL;
    x_10 = t;
    t = term_i_9;
    t = get_config_0_0(t);
    y_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_10, term_e_14);
    t = geq_0_0(t);
    t = x_10;
    t = q_95(t);
    return(t);
  }
  t = try_1_0(b_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm a_11 = NULL,b_11 = NULL;
    t = run_time_0_0(t);
    a_11 = t;
    t = term_l_7;
    t = whoami_0_0(t);
    b_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), a_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), b_11));
    t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_14), a_11), term_j_14), b_11));
    return(t);
  }
  t = if_verbose1_1_0(d_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              {
                ATerm q_14 = t;
                int r_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(r_14);
                  }
                else
                  {
                    t = q_14;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(e_4, t);
      }
    }
  t = n_98(t);
  return(t);
}
ATerm map_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm d_11 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = Cons_2_0(x_81, d_11, t);
      }
    return(t);
  }
  t = d_11(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_11 = ATgetFirst((ATermList) t);
      g_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_11 = NULL,l_11 = NULL;
        t = g_11;
        t = g_0(t);
        k_11 = t;
        t = f_11;
        t = e_0(t);
        l_11 = t;
        t = g_11;
        {
          ATerm f_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(k_11), l_11);
            return(t);
          }
          t = reverse_acc_2_0(e_0, f_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_7;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, g_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm e_67 (ATerm), ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_11);
  m_11 = t;
  t = n_11;
  t = e_67(t);
  o_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, o_11), m_11);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        ATerm h_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(h_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_w_14;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm i_4 (ATerm t)
    {
      ATerm s_11 = NULL;
      s_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, s_11), term_x_14);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(i_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_67 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  w_11 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      u_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_11);
  t_11 = t;
  t = u_11;
  t = f_67(t);
  v_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, v_11), t_11);
  return(t);
}
ATerm fetch_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm z_11 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_82, _id, t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = Cons_2_0(_id, z_11, t);
      }
    return(t);
  }
  t = z_11(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm n_99 (ATerm), ATerm t)
{
  t = fetch_1_0(n_99, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL;
  b_12 = t;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_15 = ATgetFirst((ATermList) t);
                ATerm d_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_12;
          }
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = (ATerm) ATinsert(ATempty, b_12);
      }
    c_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_12);
    t = b_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_74(t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_15;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_l_15;
        return(t);
      }
      t = Option_3_0(j_4, k_4, l_4, t);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm m_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_15;
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_n_15;
          return(t);
        }
        t = Option_3_0(m_4, n_4, o_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym__3))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
      k_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_12, j_12);
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_15 = ATgetArgument(t, 0);
            ATerm r_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_12, j_12);
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = (ATerm) ATempty;
      }
    l_12 = t;
    t = SSL_table_put(i_12, j_12, (ATerm) ATinsert(CheckATermList(l_12), k_12));
    t = (ATerm) ATmakeAppl(sym__3, i_12, j_12, k_12);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm q_12 = NULL;
  t = term_l_7;
  t = s_100(t);
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_15, term_t_15, q_12);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = s_12;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm x_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_12 = ATgetFirst((ATermList) t);
          u_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_12;
      t = a_0(t);
      t = term_l_7;
      t = c_0(t);
      x_12 = t;
      t = (ATerm) ATinsert(CheckATermList(u_12), x_12);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm z_12 = NULL;
    z_12 = t;
    if(match_string(t, "--help"))
      {
        t = z_12;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = z_12;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = z_12;
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_u_15;
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_v_15;
    return(t);
  }
  t = Option_3_0(p_4, q_4, r_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  f_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_13 = ATgetFirst((ATermList) t);
      c_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_13);
  a_13 = t;
  t = b_13;
  t = o_61(t);
  d_13 = t;
  t = c_13;
  t = p_61(t);
  e_13 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(e_13), d_13), a_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  {
    ATerm t_4 (ATerm t)
    {
      t = term_w_15;
      t = q_100(t);
      return(t);
    }
    t = try_1_0(t_4, t);
    t = l_13;
    {
      ATerm u_4 (ATerm t)
      {
        ATerm m_13 = NULL;
        m_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_13);
        t = (ATerm) ATmakeAppl(sym_Program_1, m_13);
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_15 = t;
            int a_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_16);
              }
            else
              {
                t = z_15;
                t = q_100(t);
                t = Cons_2_0(_id, v_4, t);
              }
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm o_13 = NULL,p_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_13 = ATgetFirst((ATermList) t);
                  p_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_13), (ATerm) ATmakeAppl(sym_Undefined_1, o_13));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_4, v_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = v_13;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_100(t);
          ;
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          {
            ATerm d_16 = t;
            int e_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(e_16);
              }
            else
              {
                t = d_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_4, t);
    {
      ATerm x_4 (ATerm t)
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_14 = NULL;
            c_14 = t;
            {
              ATerm h_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_14;
                  {
                    ATerm j_16 = t;
                    int k_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_n_14;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(k_16);
                      }
                    else
                      {
                        t = j_16;
                        {
                          ATerm y_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(y_4, t);
                        }
                      }
                    t = c_14;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = h_16;
                  t = term_j_15;
                  t = get_config_0_0(t);
                  t = c_14;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            {
              ATerm z_4 (ATerm t)
              {
                ATerm c_5 (ATerm t)
                {
                  w_13 = t;
                  return(t);
                }
                t = Undefined_1_0(c_5, t);
                return(t);
              }
              t = option_defined_1_0(z_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_13)), term_l_16));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(x_4, t);
      x_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = x_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t)
{
  ATerm o_6 = NULL;
  t = parse_options_1_0(p_98, t);
  o_6 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), o_6);
  t = o_6;
  t = r_98(t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_98, t);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_98(t);
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(e_98, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(d_5, g_98, h_98, e_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      ATerm f_14 = NULL,g_14 = NULL;
      f_14 = t;
      t = term_q_13;
      t = get_config_0_0(t);
      g_14 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, g_14));
      t = f_14;
      return(t);
    }
    t = if_verbose2_1_0(g_5, t);
    return(t);
  }
  t = iowrap_4_0(y_97, z_97, a_98, f_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm t)
{
  t = iowrap_3_0(w_97, x_97, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    t = _2_0(_id, t_97, t);
    return(t);
  }
  t = iowrap_2_0(h_5, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm h_14 = NULL;
    t = get_primitives_0_0(t);
    h_14 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, h_14)));
    return(t);
  }
  t = iowrap_1_0(j_5, t);
  return(t);
}
