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
ATerm term_j_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_f_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_m_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_o_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_a_11;
ATerm term_w_10;
ATerm term_u_9;
ATerm term_j_9;
ATerm term_b_9;
ATerm term_v_8;
ATerm term_i_8;
ATerm term_k_7;
ATerm term_k_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_q_5;
ATerm term_g_5;
ATerm term_e_4;
void init_constant_terms (void)
{
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_Op_2, term_e_4, (ATerm) ATempty);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_Call_2, term_v_5, (ATerm) ATempty);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_Var_1, term_c_6);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__3, term_i_15, term_j_15, term_k_7);
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
ATerm HdMember_p__2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm);
ATerm union_1_0 (ATerm t_85 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm);
ATerm crush_3_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm collect_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm get_primitives_0_0 (ATerm);
ATerm _2_0 (ATerm y_59 (ATerm), ATerm z_59 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_95 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_97 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm o_93 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm);
ATerm crush_2_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_95 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm c_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm x_66 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_66 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm a_82 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm c_99 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm f_74 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm h_100 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm f_100 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm i_97 (ATerm), ATerm);
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
  ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      w_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_0;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm h_1 = NULL;
      t = new_0_0(t);
      h_1 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_1);
      return(t);
    }
    t = map_1_0(b_0, t);
    y_0 = t;
    {
      ATerm f_0 (ATerm t)
      {
        t = term_g_5;
        return(t);
      }
      ATerm k_0 (ATerm t)
      {
        ATerm n_1 = NULL,m_0 = NULL,r_0 = NULL;
        n_1 = t;
        t = SSL_explode_term(n_1);
        if(match_cons(t, sym__2))
          {
            ATerm h_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_5 = ATgetArgument(t, 1);
              if(((ATgetType(i_5) == AT_LIST) && !(ATisEmpty(i_5))))
                {
                  m_0 = ATgetFirst((ATermList) i_5);
                  {
                    ATerm j_5 = (ATerm) ATgetNext((ATermList) i_5);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = SSL_explode_term(n_1);
        if(match_cons(t, sym__2))
          {
            ATerm k_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_5 = ATgetArgument(t, 1);
              if(((ATgetType(l_5) == AT_LIST) && !(ATisEmpty(l_5))))
                {
                  ATerm n_5 = ATgetFirst((ATermList) l_5);
                  ATerm o_5 = (ATerm) ATgetNext((ATermList) l_5);
                  if(((ATgetType(o_5) == AT_LIST) && !(ATisEmpty(o_5))))
                    {
                      r_0 = ATgetFirst((ATermList) o_5);
                      {
                        ATerm p_5 = (ATerm) ATgetNext((ATermList) o_5);
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
        t = (ATerm) ATmakeAppl(sym_Op_2, term_q_5, (ATerm) ATinsert(ATinsert(ATempty, r_0), m_0));
        return(t);
      }
      t = foldr_2_0(f_0, k_0, t);
      a_1 = t;
      t = y_0;
      {
        ATerm l_0 (ATerm t)
        {
          ATerm x_1 = NULL;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym_App_2, term_w_5, x_1);
          return(t);
        }
        t = map_1_0(l_0, t);
        c_1 = t;
        t = (ATerm) ATmakeAppl(sym_RDef_3, term_x_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, term_d_6), (ATerm) ATmakeAppl(sym_Op_2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, a_1), (ATerm) ATmakeAppl(sym_Str_1, w_0))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, w_0, c_1), term_d_6), term_k_6));
      }
    }
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_2 = ATgetFirst((ATermList) t);
      b_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_85(t);
  {
    ATerm n_0 (ATerm t)
    {
      ATerm d_2 = NULL;
      d_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_2, d_2);
      t = x_85(t);
      return(t);
    }
    t = fetch_1_0(n_0, t);
    t = b_2;
  }
  return(t);
}
ATerm union_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      f_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm l_6 = t;
      int o_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_2;
          ;
          LocalPopChoice(o_6);
        }
      else
        {
          t = l_6;
          {
            ATerm t_6 = t;
            int u_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_0 (ATerm t)
                {
                  t = e_2;
                  return(t);
                }
                t = HdMember_p__2_0(t_85, o_0, t);
                t = h_2(t);
                ;
                LocalPopChoice(u_6);
              }
            else
              {
                t = t_6;
                t = Cons_2_0(_id, h_2, t);
              }
          }
        }
      return(t);
    }
    t = h_2(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm i_2 = NULL;
    if(match_cons(t, sym__2))
      {
        i_2 = ATgetArgument(t, 0);
        if((i_2 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(p_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm t)
{
  ATerm v_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_87(t);
      ;
      LocalPopChoice(y_6);
    }
  else
    {
      t = v_6;
      {
        ATerm l_2 = NULL,n_2 = NULL,q_2 = NULL,r_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_2 = ATgetFirst((ATermList) t);
            n_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_2;
        t = v_87(t);
        q_2 = t;
        t = n_2;
        t = foldr_3_0(t_87, u_87, v_87, t);
        r_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_2, r_2);
        t = u_87(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,w_2 = NULL;
  u_2 = t;
  t = SSL_explode_term(u_2);
  if(match_cons(t, sym__2))
    {
      ATerm h_7 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_2;
  t = foldr_3_0(m_91, n_91, o_91, t);
  return(t);
}
ATerm collect_om_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 = NULL;
      t = p_86(t);
      x_2 = t;
      t = (ATerm) ATinsert(ATempty, x_2);
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm q_0 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm s_0 (ATerm t)
        {
          t = collect_om_1_0(p_86, t);
          return(t);
        }
        t = crush_3_0(q_0, union_0_0, s_0, t);
      }
    }
  return(t);
}
ATerm collect_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  t = collect_om_1_0(q_86, t);
  return(t);
}
ATerm get_primitives_0_0 (ATerm t)
{
  t = collect_1_0(EvalPrimitive_0_0, t);
  return(t);
}
ATerm _2_0 (ATerm y_59 (ATerm), ATerm z_59 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL,e_3 = NULL,f_3 = NULL;
  f_3 = t;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  y_2 = t;
  t = z_2;
  t = y_59(t);
  c_3 = t;
  t = a_3;
  t = z_59(t);
  e_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, c_3, e_3), y_2);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  j_3 = t;
  t = term_k_7;
  t = whoami_0_0(t);
  k_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_3), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = j_3;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      {
        ATerm p_3 = NULL,w_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_3 = ATgetFirst((ATermList) t);
            w_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_3;
        {
          ATerm t_0 (ATerm t)
          {
            t = w_3;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_0, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm g_4 = NULL,r_4 = NULL;
  g_4 = t;
  t = SSL_explode_term(g_4);
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_4, t);
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_82(t);
      }
    return(t);
  }
  t = s_4(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4;
  {
    ATerm u_0 (ATerm t)
    {
      t = x_4;
      return(t);
    }
    t = at_end_1_0(u_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(s_7);
    }
  else
    {
      t = q_7;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm z_4 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm a_5 = NULL;
    a_5 = t;
    t = SSL_explode_string(a_5);
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm d_5 = NULL;
    d_5 = t;
    t = SSL_explode_string(d_5);
    return(t);
  }
  t = _2_0(v_0, z_0, t);
  t = conc_0_0(t);
  z_4 = t;
  t = SSL_implode_string(z_4);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_5 = NULL;
      m_5 = t;
      t = SSL_is_string(m_5);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
        ATerm v_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(b_1, t);
            ;
            LocalPopChoice(y_7);
          }
        else
          {
            t = v_7;
            {
              ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
              r_5 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_5 = ATgetArgument(t, 0);
                  t = s_5;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_5 = ATgetArgument(t, 0);
                      t = s_5;
                      {
                        ATerm f_8 = t;
                        int h_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_8);
                          }
                        else
                          {
                            t = f_8;
                            {
                              ATerm d_1 (ATerm t)
                              {
                                t = term_i_8;
                                return(t);
                              }
                              t = debug_1_0(d_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm a_6 = NULL,b_6 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_5 = ATgetArgument(t, 0);
                          t_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_5;
                      t = eval_config_0_0(t);
                      a_6 = t;
                      t = t_5;
                      t = eval_config_0_0(t);
                      b_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_6, b_6);
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
  ATerm e_6 = NULL;
  e_6 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_6);
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_6 = NULL;
      t = eval_config_0_0(t);
      f_6 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_6, f_6);
      t = f_6;
      return(t);
    }
    t = try_1_0(e_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm g_6 = NULL,h_6 = NULL;
    g_6 = t;
    t = term_v_8;
    t = get_config_0_0(t);
    h_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_6, term_b_9);
    t = geq_0_0(t);
    t = g_6;
    t = g_95(t);
    return(t);
  }
  t = try_1_0(f_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm i_6 = NULL,m_6 = NULL,n_6 = NULL,p_6 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_9 = ATgetArgument(t, 0);
        if(match_cons(f_9, sym_Stream_1))
          {
            i_6 = ATgetArgument(f_9, 0);
          }
        else
          _fail(t);
        m_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(i_6, m_6);
    n_6 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), n_6);
    p_6 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, p_6);
    return(t);
  }
  t = WriteToFile_1_0(g_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_6, term_j_9);
  t = open_stream_0_0(t);
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_6, r_6);
  t = c_94(t);
  t = fclose_0_0(t);
  t = r_6;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm w_6 = NULL,x_6 = NULL,z_6 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_9 = ATgetArgument(t, 0);
        if(match_cons(m_9, sym_Stream_1))
          {
            w_6 = ATgetArgument(m_9, 0);
          }
        else
          _fail(t);
        x_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(w_6, x_6);
    z_6 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, z_6);
    return(t);
  }
  t = WriteToFile_1_0(i_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  a_7 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm n_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                b_7 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(k_1, t);
          ;
          LocalPopChoice(t_9);
        }
      else
        {
          t = n_9;
          t = term_u_9;
          b_7 = t;
        }
      return(t);
    }
    t = _2_0(j_1, _id, t);
    t = a_7;
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          t = not_null(b_7);
          return(t);
        }
        t = split_2_0(p_1, _id, t);
        return(t);
      }
      t = _2_0(_id, o_1, t);
      {
        ATerm v_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(r_1, t);
              return(t);
            }
            t = _2_0(q_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = v_9;
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
ATerm apply_strategy_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  c_7 = t;
  t = dtime_0_0(t);
  t = c_7;
  t = e_97(t);
  d_7 = t;
  t = dtime_0_0(t);
  e_7 = t;
  t = d_7;
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_7), (ATerm) ATmakeAppl(sym_Runtime_1, e_7)), g_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_7 (ATerm r_7, ATerm t)
  {
    t = SSL_fclose(r_7);
    return(t);
  }
  ATerm w_7 = NULL,x_7 = NULL;
  x_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_7 = ATgetArgument(t, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_7);
            ;
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            t = z_7(x_7, t);
          }
      }
    }
  else
    {
      t = z_7(x_7, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL;
  a_8 = t;
  t = o_93(t);
  b_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_8), b_8));
  t = a_8;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_8 = NULL;
  t = SSL_stdin_stream();
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  t = SSL_stdout_stream();
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_8 = NULL;
  t = SSL_stderr_stream();
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_8);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm g_8 = NULL;
  g_8 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_10 = ATgetArgument(t, 0);
      ATerm e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,m_1 = NULL;
        l_1 = t;
        t = SSL_explode_term(l_1);
        if(match_cons(t, sym__2))
          {
            ATerm p_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_10 = ATgetArgument(t, 1);
              if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
                {
                  m_1 = ATgetFirst((ATermList) q_10);
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
        t = m_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        {
          ATerm s_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
              ATerm s_1 (ATerm t)
              {
                ATerm m_8 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    m_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_8;
                return(t);
              }
              t = _2_0(s_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_8 = ATgetArgument(t, 0);
                  k_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(j_8, k_8);
              l_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
              ;
              LocalPopChoice(t_10);
            }
          else
            {
              t = s_10;
              {
                ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
                ATerm t_1 (ATerm t)
                {
                  ATerm q_8 = NULL;
                  q_8 = t;
                  t = SSL_is_string(q_8);
                  return(t);
                }
                t = _2_0(t_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_8 = ATgetArgument(t, 0);
                    o_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(n_8, o_8);
                p_8 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, p_8);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_8 = NULL;
      u_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_8, term_w_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm u_1 (ATerm t)
        {
          t = term_a_11;
          return(t);
        }
        t = debug_1_0(u_1, t);
        _fail(t);
      }
    }
  r_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(t_8);
  s_8 = t;
  t = r_8;
  t = fclose_0_0(t);
  t = s_8;
  return(t);
}
ATerm split_2_0 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  t = g_89(t);
  x_8 = t;
  t = w_8;
  t = h_89(t);
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_8, y_8);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  z_8 = t;
  {
    ATerm b_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              a_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(v_1, t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = b_11;
        t = term_h_11;
        a_9 = t;
      }
    t = z_8;
    {
      ATerm w_1 (ATerm t)
      {
        t = not_null(a_9);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, w_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm c_9 = NULL;
    c_9 = t;
    if(match_string(t, "-k"))
      {
        t = c_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = c_9;
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm d_9 = NULL,e_9 = NULL;
    d_9 = t;
    t = SSL_string_to_int(d_9);
    e_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), e_9);
    t = d_9;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  t = ArgOption_3_0(y_1, z_1, c_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm g_9 = NULL;
        g_9 = t;
        if(match_string(t, "-S"))
          {
            t = g_9;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = g_9;
          }
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_v_11;
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = term_w_11;
        return(t);
      }
      t = Option_3_0(g_2, j_2, k_2, t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm x_11 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm h_9 = NULL,i_9 = NULL;
              h_9 = t;
              t = SSL_string_to_int(h_9);
              i_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_9);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, h_9);
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              t = term_e_12;
              return(t);
            }
            t = ArgOption_3_0(m_2, o_2, p_2, t);
            ;
            LocalPopChoice(d_12);
          }
        else
          {
            t = x_11;
            {
              ATerm s_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_f_12;
                return(t);
              }
              ATerm v_2 (ATerm t)
              {
                t = term_h_12;
                return(t);
              }
              t = Option_3_0(s_2, t_2, v_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm k_9 = NULL;
    k_9 = t;
    if(match_string(t, "-o"))
      {
        t = k_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = k_9;
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm l_9 = NULL;
    l_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), l_9);
    t = (ATerm) ATmakeAppl(sym_Output_1, l_9);
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_m_12;
    return(t);
  }
  t = ArgOption_3_0(b_3, d_3, g_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm h_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_t_12;
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          t = term_u_12;
          return(t);
        }
        t = Option_3_0(h_3, i_3, l_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  o_9 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = o_9;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm w_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_9 = ATgetFirst((ATermList) t);
          q_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_9 = ATgetFirst((ATermList) t);
          s_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_9;
      t = h_0(t);
      t = r_9;
      t = i_0(t);
      w_9 = t;
      t = (ATerm) ATinsert(CheckATermList(s_9), w_9);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm a_10 = NULL;
    a_10 = t;
    if(match_string(t, "-i"))
      {
        t = a_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = a_10;
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm b_10 = NULL;
    b_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), b_10);
    t = (ATerm) ATmakeAppl(sym_Input_1, b_10);
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_v_12;
    return(t);
  }
  t = ArgOption_3_0(m_3, n_3, o_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm w_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = w_12;
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_7;
  t = whoami_0_0(t);
  c_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), c_10));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_87(t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm f_10 = NULL,g_10 = NULL,j_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_10 = ATgetFirst((ATermList) t);
            g_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_10;
        t = foldr_2_0(r_87, s_87, t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, j_10);
        t = s_87(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  k_10 = t;
  t = SSL_explode_term(k_10);
  if(match_cons(t, sym__2))
    {
      ATerm p_13 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10;
  t = foldr_2_0(k_91, l_91, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_10 = NULL;
  t = times_0_0(t);
  {
    ATerm q_3 (ATerm t)
    {
      t = term_o_11;
      return(t);
    }
    ATerm r_3 (ATerm t)
    {
      ATerm n_10 = NULL,o_10 = NULL;
      if(match_cons(t, sym__2))
        {
          n_10 = ATgetArgument(t, 0);
          o_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(n_10, o_10);
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
            t = SSL_addr(n_10, o_10);
          }
      }
      return(t);
    }
    t = crush_2_0(q_3, r_3, t);
    m_10 = t;
    t = SSL_TicksToSeconds(m_10);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  if(match_cons(t, sym__2))
    {
      y_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_10;
        if((y_10 != t))
          {
            _fail(t);
          }
        t = x_10;
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = s_13;
        t = x_10;
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_10, z_10);
              ;
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
              t = SSL_gtr(y_10, z_10);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_10, z_10);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_95 (ATerm), ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm c_11 = NULL,d_11 = NULL;
    c_11 = t;
    t = term_v_8;
    t = get_config_0_0(t);
    d_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_11, term_a_14);
    t = geq_0_0(t);
    t = c_11;
    t = f_95(t);
    return(t);
  }
  t = try_1_0(s_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm f_11 = NULL,g_11 = NULL;
    t = run_time_0_0(t);
    f_11 = t;
    t = term_k_7;
    t = whoami_0_0(t);
    g_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), f_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), g_11));
    t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_14), f_11), term_c_14), g_11));
    return(t);
  }
  t = if_verbose1_1_0(t_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        ATerm u_3 (ATerm t)
        {
          ATerm l_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(m_14);
            }
          else
            {
              t = l_14;
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
        t = option_defined_1_0(u_3, t);
      }
    }
  t = c_98(t);
  return(t);
}
ATerm map_1_0 (ATerm q_81 (ATerm), ATerm t)
{
  ATerm i_11 (ATerm t)
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
        t = Cons_2_0(q_81, i_11, t);
      }
    return(t);
  }
  t = i_11(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_11 = ATgetFirst((ATermList) t);
      l_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_11 = NULL,q_11 = NULL;
        t = l_11;
        t = g_0(t);
        p_11 = t;
        t = k_11;
        t = e_0(t);
        q_11 = t;
        t = l_11;
        {
          ATerm v_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_11), q_11);
            return(t);
          }
          t = reverse_acc_2_0(e_0, v_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_7;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, x_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm x_66 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  u_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_11);
  r_11 = t;
  t = s_11;
  t = x_66(t);
  t_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, t_11), r_11);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        ATerm y_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(y_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_w_14;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm z_3 (ATerm t)
    {
      ATerm y_11 = NULL;
      y_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, y_11), term_x_14);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(z_3, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_66 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
  c_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_12);
  z_11 = t;
  t = a_12;
  t = y_66(t);
  b_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_12), z_11);
  return(t);
}
ATerm fetch_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm g_12 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_82, _id, t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = Cons_2_0(_id, g_12, t);
      }
    return(t);
  }
  t = g_12(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  t = fetch_1_0(c_99, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_12;
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
            t = i_12;
          }
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = (ATerm) ATinsert(ATempty, i_12);
      }
    j_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), j_12);
    t = i_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_74(t);
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
      ATerm a_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_15;
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_l_15;
        return(t);
      }
      t = Option_3_0(a_4, b_4, c_4, t);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm d_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_15;
          return(t);
        }
        ATerm h_4 (ATerm t)
        {
          t = term_n_15;
          return(t);
        }
        t = Option_3_0(d_4, f_4, h_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__3))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
      r_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_12, q_12);
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
        t = SSL_table_get(p_12, q_12);
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = (ATerm) ATempty;
      }
    s_12 = t;
    t = SSL_table_put(p_12, q_12, (ATerm) ATinsert(CheckATermList(s_12), r_12));
    t = (ATerm) ATmakeAppl(sym__3, p_12, q_12, r_12);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm h_100 (ATerm), ATerm t)
{
  ATerm x_12 = NULL;
  t = term_k_7;
  t = h_100(t);
  x_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_15, term_t_15, x_12);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
  z_12 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_12;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm e_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_13 = ATgetFirst((ATermList) t);
          b_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_13;
      t = a_0(t);
      t = term_k_7;
      t = c_0(t);
      e_13 = t;
      t = (ATerm) ATinsert(CheckATermList(b_13), e_13);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm g_13 = NULL;
    g_13 = t;
    if(match_string(t, "--help"))
      {
        t = g_13;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = g_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = g_13;
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_u_15;
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_v_15;
    return(t);
  }
  t = Option_3_0(i_4, j_4, k_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  m_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_13 = ATgetFirst((ATermList) t);
      j_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_13);
  h_13 = t;
  t = i_13;
  t = h_61(t);
  k_13 = t;
  t = j_13;
  t = i_61(t);
  l_13 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(l_13), k_13), h_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  {
    ATerm l_4 (ATerm t)
    {
      t = term_w_15;
      t = f_100(t);
      return(t);
    }
    t = try_1_0(l_4, t);
    t = t_13;
    {
      ATerm m_4 (ATerm t)
      {
        ATerm u_13 = NULL;
        u_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_13);
        t = (ATerm) ATmakeAppl(sym_Program_1, u_13);
        return(t);
      }
      ATerm n_4 (ATerm t)
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
                t = f_100(t);
                t = Cons_2_0(_id, n_4, t);
              }
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm w_13 = NULL,x_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_13 = ATgetFirst((ATermList) t);
                  x_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_13), (ATerm) ATmakeAppl(sym_Undefined_1, w_13));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_4, n_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  d_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = d_14;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_100(t);
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
    t = parse_options_p__1_0(o_4, t);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_14 = NULL;
            k_14 = t;
            {
              ATerm h_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_14;
                  {
                    ATerm j_16 = t;
                    int k_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_j_14;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(k_16);
                      }
                    else
                      {
                        t = j_16;
                        {
                          ATerm q_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(q_4, t);
                        }
                      }
                    t = k_14;
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
                  t = k_14;
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
              ATerm t_4 (ATerm t)
              {
                ATerm u_4 (ATerm t)
                {
                  e_14 = t;
                  return(t);
                }
                t = Undefined_1_0(u_4, t);
                return(t);
              }
              t = option_defined_1_0(t_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_14)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_14)), term_l_16));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(p_4, t);
      f_14 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = f_14;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm t)
{
  ATerm j_6 = NULL;
  t = parse_options_1_0(e_98, t);
  j_6 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), j_6);
  t = j_6;
  t = g_98(t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_98, t);
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
              t = h_98(t);
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
ATerm iowrap_4_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_97(t);
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
  ATerm w_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(t_97, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_4, v_97, w_97, w_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm n_14 = NULL,o_14 = NULL;
      n_14 = t;
      t = term_f_13;
      t = get_config_0_0(t);
      o_14 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, o_14));
      t = n_14;
      return(t);
    }
    t = if_verbose2_1_0(c_5, t);
    return(t);
  }
  t = iowrap_4_0(n_97, o_97, p_97, b_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t)
{
  t = iowrap_3_0(l_97, m_97, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    t = _2_0(_id, i_97, t);
    return(t);
  }
  t = iowrap_2_0(e_5, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm p_14 = NULL;
    t = get_primitives_0_0(t);
    p_14 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, p_14)));
    return(t);
  }
  t = iowrap_1_0(f_5, t);
  return(t);
}
