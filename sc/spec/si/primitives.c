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
ATerm term_l_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_t_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_a_13;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_o_9;
ATerm term_i_8;
ATerm term_b_8;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_z_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_b_6;
void init_constant_terms (void)
{
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_Op_2, term_e_6, (ATerm) ATempty);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Call_2, term_v_6, (ATerm) ATempty);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Var_1, term_f_7);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__3, term_j_15, term_k_15, term_b_6);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm k_0 (ATerm);
ATerm l_0 (ATerm);
ATerm m_0 (ATerm);
ATerm n_0 (ATerm);
ATerm EvalPrimitive_0_0 (ATerm);
ATerm union_1_0 (ATerm n_92 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm a_1 (ATerm);
ATerm collect_om_1_0 (ATerm i_93 (ATerm), ATerm);
ATerm _2_0 (ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm y_100 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm t_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm d_5 (ATerm x_4, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_88 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm z_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm d_3 (ATerm);
ATerm o_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm w_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_102 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm need_help_1_0 (ATerm y_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_107 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm parse_options_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm iowrap_3_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm u_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = term_b_6;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm k_0 (ATerm t)
{
  ATerm t_0 = NULL;
  t = new_0_0(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_0);
  return(t);
}
ATerm l_0 (ATerm t)
{
  t = term_f_6;
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm u_0 = NULL,d_1 = NULL,k_1 = NULL;
  u_0 = t;
  t = SSL_explode_term(u_0);
  if(match_cons(t, sym__2))
    {
      ATerm g_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_6 = ATgetArgument(t, 1);
        if(((ATgetType(h_6) == AT_LIST) && !(ATisEmpty(h_6))))
          {
            d_1 = ATgetFirst((ATermList) h_6);
            {
              ATerm k_6 = (ATerm) ATgetNext((ATermList) h_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(u_0);
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_6 = ATgetArgument(t, 1);
        if(((ATgetType(o_6) == AT_LIST) && !(ATisEmpty(o_6))))
          {
            ATerm p_6 = ATgetFirst((ATermList) o_6);
            ATerm q_6 = (ATerm) ATgetNext((ATermList) o_6);
            if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
              {
                k_1 = ATgetFirst((ATermList) q_6);
                {
                  ATerm r_6 = (ATerm) ATgetNext((ATermList) q_6);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_6, (ATerm) ATinsert(ATinsert(ATempty, k_1), d_1));
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm y_0 = NULL;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_z_6, y_0);
  return(t);
}
ATerm EvalPrimitive_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      o_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_0;
  t = map_1_0(k_0, t);
  q_0 = t;
  t = foldr_2_0(l_0, m_0, t);
  r_0 = t;
  t = q_0;
  t = map_1_0(n_0, t);
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, term_c_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, term_j_7), (ATerm) ATmakeAppl(sym_Op_2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, r_0), (ATerm) ATmakeAppl(sym_Str_1, o_0))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, o_0, s_0), term_j_7), term_k_7));
  return(t);
}
ATerm union_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_1;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm m_7 = t;
      int n_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_1;
          ;
          LocalPopChoice(n_7);
        }
      else
        {
          t = m_7;
          {
            ATerm o_7 = t;
            int s_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_1 = NULL,m_1 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_1 = ATgetFirst((ATermList) t);
                    m_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_1;
                {
                  ATerm v_0 (ATerm t)
                  {
                    ATerm n_1 = NULL;
                    n_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_1, n_1);
                    t = n_92(t);
                    return(t);
                  }
                  t = fetch_1_0(v_0, t);
                  t = m_1;
                  t = h_1(t);
                }
                ;
                LocalPopChoice(s_7);
              }
            else
              {
                t = o_7;
                t = Cons_2_0(_id, h_1, t);
              }
          }
        }
      return(t);
    }
    t = h_1(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_94(t);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
        ATerm w_1 = NULL,x_1 = NULL,j_2 = NULL,k_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_1 = ATgetFirst((ATermList) t);
            x_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_1;
        t = o_94(t);
        j_2 = t;
        t = x_1;
        t = foldr_3_0(m_94, n_94, o_94, t);
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_2, k_2);
        t = n_94(t);
      }
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = union_1_0(a_1, t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      if((y_1 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_om_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm v_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 = NULL;
      t = i_93(t);
      o_2 = t;
      t = (ATerm) ATinsert(ATempty, o_2);
      ;
      LocalPopChoice(x_7);
    }
  else
    {
      t = v_7;
      {
        ATerm r_1 = NULL,s_1 = NULL;
        r_1 = t;
        t = SSL_explode_term(r_1);
        if(match_cons(t, sym__2))
          {
            ATerm a_8 = ATgetArgument(t, 0);
            s_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_1;
        {
          ATerm z_0 (ATerm t)
          {
            t = collect_om_1_0(i_93, t);
            return(t);
          }
          t = foldr_3_0(w_0, x_0, z_0, t);
        }
      }
    }
  return(t);
}
ATerm _2_0 (ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL,u_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  y_2 = t;
  if(match_cons(t, sym__2))
    {
      t_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_2);
  r_2 = t;
  t = t_2;
  t = k_63(t);
  w_2 = t;
  t = u_2;
  t = l_63(t);
  x_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, w_2, x_2), r_2);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm y_100 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_3, term_b_8);
  t = open_stream_0_0(t);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, c_3);
  t = y_100(t);
  t = fclose_0_0(t);
  t = c_3;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = fetch_1_0(o_1, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = WriteToFile_1_0(p_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          k_3 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      l_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(k_3, l_3);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_3);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = WriteToFile_1_0(t_1, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm n_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if(match_cons(d_8, sym_Stream_1))
        {
          n_3 = ATgetArgument(d_8, 0);
        }
      else
        _fail(t);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(n_3, r_3);
  s_3 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), s_3);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_3);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL;
  h_3 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm f_8 = t;
      int h_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((j_3 != NULL) && (j_3 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_1, t);
          ;
          LocalPopChoice(h_8);
        }
      else
        {
          t = f_8;
          t = term_i_8;
          if(((j_3 != NULL) && (j_3 != t)))
            _fail(t);
          else
            j_3 = t;
        }
      return(t);
    }
    t = _2_0(b_1, _id, t);
    t = h_3;
    {
      ATerm f_1 (ATerm t)
      {
        ATerm z_1 = NULL;
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_3), z_1);
        return(t);
      }
      t = _2_0(_id, f_1, t);
      {
        ATerm k_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(i_1, j_1, t);
            ;
            LocalPopChoice(o_8);
          }
        else
          {
            t = k_8;
            t = _2_0(_id, q_1, t);
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
ATerm apply_strategy_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,b_4 = NULL;
  u_3 = t;
  t = dtime_0_0(t);
  t = u_3;
  t = a_104(t);
  v_3 = t;
  t = dtime_0_0(t);
  x_3 = t;
  t = v_3;
  if(match_cons(t, sym__2))
    {
      y_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_3), (ATerm) ATmakeAppl(sym_Runtime_1, x_3)), b_4);
  return(t);
}
ATerm d_5 (ATerm x_4, ATerm t)
{
  t = SSL_fclose(x_4);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_5 = ATgetArgument(t, 0);
      {
        ATerm q_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_5);
            ;
            LocalPopChoice(t_8);
          }
        else
          {
            t = q_8;
            t = d_5(b_5, t);
          }
      }
    }
  else
    {
      t = d_5(b_5, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_5 = NULL;
  t = SSL_stdin_stream();
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_5 = NULL;
  t = SSL_stdout_stream();
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_5 = NULL;
  t = SSL_stderr_stream();
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_5);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm t_5 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      t_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm y_5 = NULL;
  y_5 = t;
  t = SSL_is_string(y_5);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      ATerm y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_8 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL,g_3 = NULL;
        e_3 = t;
        t = SSL_explode_term(e_3);
        if(match_cons(t, sym__2))
          {
            ATerm c_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_9 = ATgetArgument(t, 1);
              if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
                {
                  g_3 = ATgetFirst((ATermList) d_9);
                  {
                    ATerm e_9 = (ATerm) ATgetNext((ATermList) d_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = z_8;
        {
          ATerm h_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
              t = _2_0(u_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_5 = ATgetArgument(t, 0);
                  q_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_5, q_5);
              r_5 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_5);
              ;
              LocalPopChoice(i_9);
            }
          else
            {
              t = h_9;
              {
                ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
                t = _2_0(v_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    v_5 = ATgetArgument(t, 0);
                    w_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(v_5, w_5);
                x_5 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, x_5);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,c_6 = NULL;
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 = NULL;
      d_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_6, term_o_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      {
        ATerm i_3 = NULL;
        i_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = i_3;
        _fail(t);
      }
    }
  z_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(c_6);
  a_6 = t;
  t = z_5;
  t = fclose_0_0(t);
  t = a_6;
  return(t);
}
ATerm fetch_1_0 (ATerm t_88 (ATerm), ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_88, _id, t);
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        t = Cons_2_0(_id, i_6, t);
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm l_6 = NULL,m_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_6 = ATgetFirst((ATermList) t);
            m_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_6;
        {
          ATerm a_2 (ATerm t)
          {
            t = m_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_6, t);
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_88(t);
      }
    return(t);
  }
  t = u_6(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm x_6 = NULL;
  x_6 = t;
  t = SSL_explode_string(x_6);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm y_6 = NULL;
  y_6 = t;
  t = SSL_explode_string(y_6);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm w_6 = NULL;
  t = _2_0(b_2, c_2, t);
  {
    ATerm y_9 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL,b_7 = NULL;
        if(match_cons(t, sym__2))
          {
            a_7 = ATgetArgument(t, 0);
            b_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_7;
        {
          ATerm d_2 (ATerm t)
          {
            t = b_7;
            return(t);
          }
          t = at_end_1_0(d_2, t);
        }
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = y_9;
        {
          ATerm z_3 = NULL,a_4 = NULL;
          z_3 = t;
          t = SSL_explode_term(z_3);
          if(match_cons(t, sym__2))
            {
              ATerm f_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              a_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_4;
          t = concat_0_0(t);
        }
      }
    w_6 = t;
    t = SSL_implode_string(w_6);
  }
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm g_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = g_10;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_7 = NULL;
      l_7 = t;
      t = SSL_is_string(l_7);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = n_10;
      {
        ATerm r_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_2, t);
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = r_10;
            {
              ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
              p_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_7 = ATgetArgument(t, 0);
                  t = q_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_7 = ATgetArgument(t, 0);
                      t = q_7;
                      {
                        ATerm u_10 = t;
                        int w_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_7);
                            {
                              ATerm x_10 = t;
                              int y_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_5 = NULL;
                                  t = eval_config_0_0(t);
                                  i_5 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_7, i_5);
                                  t = i_5;
                                  ;
                                  LocalPopChoice(y_10);
                                }
                              else
                                {
                                  t = x_10;
                                }
                            }
                            ;
                            LocalPopChoice(w_10);
                          }
                        else
                          {
                            t = u_10;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_7), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = q_7;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_7 = NULL,z_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_7 = ATgetArgument(t, 0);
                          r_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_7;
                      t = eval_config_0_0(t);
                      y_7 = t;
                      t = r_7;
                      t = eval_config_0_0(t);
                      z_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_7, z_7);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 = NULL,j_8 = NULL;
      e_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL;
            t = eval_config_0_0(t);
            j_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_6);
            t = j_6;
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
          }
        j_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, term_d_11);
        t = geq_0_0(t);
        t = e_8;
        t = j_102(t);
      }
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm l_8 = NULL;
  l_8 = t;
  if(match_string(t, "-k"))
    {
      t = l_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_8;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL;
  m_8 = t;
  t = SSL_string_to_int(m_8);
  n_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_8);
  t = m_8;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, g_2, h_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  if(match_string(t, "-S"))
    {
      t = p_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_8;
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_j_11;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  r_8 = t;
  t = SSL_string_to_int(r_8);
  s_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_8);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_8);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_11;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_2, l_2, m_2, t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm x_11 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_2, p_2, q_2, t);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = x_11;
            t = Option_3_0(s_2, v_2, z_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_8 = NULL;
      t = term_b_6;
      t = d_0(t);
      x_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_l_12, x_8);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm a_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_8 = ATgetFirst((ATermList) t);
          w_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_8;
      t = a_0(t);
      t = term_b_6;
      t = b_0(t);
      a_9 = t;
      t = (ATerm) ATinsert(CheckATermList(w_8), a_9);
    }
  return(t);
}
ATerm a_3 (ATerm t)
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
ATerm d_3 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_9);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_9);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_m_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, d_3, o_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,p_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__3))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
      p_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_9, l_9);
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_12 = ATgetArgument(t, 0);
            ATerm t_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_9, l_9);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = (ATerm) ATempty;
      }
    q_9 = t;
    t = SSL_table_put(k_9, l_9, (ATerm) ATinsert(CheckATermList(q_9), p_9));
    t = (ATerm) ATmakeAppl(sym__3, k_9, l_9, p_9);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_10 = NULL;
      t = term_b_6;
      t = j_0(t);
      d_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_l_12, d_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_9 = ATgetFirst((ATermList) t);
          a_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_10;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_10 = ATgetFirst((ATermList) t);
          c_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_9;
      t = h_0(t);
      t = b_10;
      t = i_0(t);
      h_10 = t;
      t = (ATerm) ATinsert(CheckATermList(c_10), h_10);
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm j_10 = NULL;
  j_10 = t;
  if(match_string(t, "-i"))
    {
      t = j_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_10;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm k_10 = NULL;
  k_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), k_10);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_10);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_a_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_3, q_3, w_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_6;
  t = whoami_0_0(t);
  l_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), l_10));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_7 = NULL;
        t = eval_config_0_0(t);
        g_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_7);
        t = g_7;
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t)
{
  ATerm f_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_94(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = f_13;
      {
        ATerm o_10 = NULL,p_10 = NULL,s_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_10 = ATgetFirst((ATermList) t);
            p_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_10;
        t = foldr_2_0(k_94, l_94, t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_10, s_10);
        t = l_94(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm w_7 = NULL,g_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_7 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_7, g_8);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = SSL_addr(w_7, g_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_10 = NULL,h_7 = NULL,i_7 = NULL;
  t = times_0_0(t);
  h_7 = t;
  t = SSL_explode_term(h_7);
  if(match_cons(t, sym__2))
    {
      ATerm l_13 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7;
  t = foldr_2_0(c_4, d_4, t);
  v_10 = t;
  t = SSL_TicksToSeconds(v_10);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_11;
        if((h_11 != t))
          {
            _fail(t);
          }
        t = g_11;
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = g_11;
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_11, i_11);
              ;
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              t = SSL_gtr(h_11, i_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_11, i_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL,n_11 = NULL;
      l_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_9 = NULL;
            t = eval_config_0_0(t);
            j_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_9);
            t = j_9;
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
          }
        n_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_11, term_e_14);
        t = geq_0_0(t);
        t = l_11;
        t = i_102(t);
      }
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  t = run_time_0_0(t);
  p_11 = t;
  t = term_b_6;
  t = whoami_0_0(t);
  q_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), p_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), q_11));
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_14), p_11), term_h_14), q_11));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm l_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(m_14);
          }
        else
          {
            t = l_14;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm n_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_9 = NULL;
            t = eval_config_0_0(t);
            r_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_9);
            t = r_9;
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
          }
      }
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = n_14;
      t = fetch_1_0(f_4, t);
    }
  t = y_104(t);
  return(t);
}
ATerm map_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm r_11 (ATerm t)
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
        t = Cons_2_0(i_88, r_11, t);
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_11 = ATgetFirst((ATermList) t);
      u_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_11 = NULL,z_11 = NULL;
        t = u_11;
        t = g_0(t);
        y_11 = t;
        t = t_11;
        t = f_0(t);
        z_11 = t;
        t = u_11;
        {
          ATerm g_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_11), z_11);
            return(t);
          }
          t = reverse_acc_2_0(f_0, g_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  d_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_12);
  a_12 = t;
  t = b_12;
  t = p_73(t);
  c_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, c_12), a_12);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_12), term_u_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm y_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_10 = NULL;
            t = eval_config_0_0(t);
            m_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_10);
            t = m_10;
            ;
            LocalPopChoice(a_15);
          }
        else
          {
            t = y_14;
          }
      }
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      t = fetch_1_0(h_4, t);
    }
  t = term_b_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, i_4, t);
  t = map_1_0(j_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_12);
  h_12 = t;
  t = i_12;
  t = q_73(t);
  j_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, j_12), h_12);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  o_12 = t;
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_15 = ATgetFirst((ATermList) t);
                ATerm g_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_12;
          }
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        t = (ATerm) ATinsert(ATempty, o_12);
      }
    p_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_12);
    t = o_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL;
        t = eval_config_0_0(t);
        n_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_12);
        t = n_12;
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_15;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_15;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_o_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, m_4, t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      t = Option_3_0(n_4, o_4, p_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  z_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_12 = ATgetFirst((ATermList) t);
      w_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_12);
  u_12 = t;
  t = v_12;
  t = z_67(t);
  x_12 = t;
  t = w_12;
  t = a_68(t);
  y_12 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(y_12), x_12), u_12);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm e_13 = NULL;
  e_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_13);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm d_13 = NULL;
  d_13 = t;
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_15;
        t = b_107(t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
      }
    t = d_13;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_15 = t;
            int x_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(x_15);
              }
            else
              {
                t = w_15;
                t = b_107(t);
                t = Cons_2_0(_id, r_4, t);
              }
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm g_13 = NULL,h_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_13 = ATgetFirst((ATermList) t);
                  h_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_13), (ATerm) ATmakeAppl(sym_Undefined_1, g_13));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_4, r_4, t);
    }
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  if(match_string(t, "--help"))
    {
      t = r_13;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_13;
        }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_15;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = o_13;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_107(t);
          ;
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
          {
            ATerm c_16 = t;
            int d_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_4, u_4, v_4, t);
                ;
                LocalPopChoice(d_16);
              }
            else
              {
                t = c_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_4, t);
    {
      ATerm e_16 = t;
      int f_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = NULL;
          w_13 = t;
          {
            ATerm g_16 = t;
            int h_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_13;
                {
                  ATerm i_16 = t;
                  int j_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm k_16 = t;
                        int l_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_14 = NULL;
                            t = eval_config_0_0(t);
                            o_14 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), o_14);
                            t = o_14;
                            ;
                            LocalPopChoice(l_16);
                          }
                        else
                          {
                            t = k_16;
                          }
                      }
                      ;
                      LocalPopChoice(j_16);
                    }
                  else
                    {
                      t = i_16;
                      t = fetch_1_0(w_4, t);
                    }
                  t = w_13;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(h_16);
              }
            else
              {
                t = g_16;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm m_16 = t;
                  int n_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_14 = NULL;
                      t = eval_config_0_0(t);
                      v_14 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), v_14);
                      t = v_14;
                      ;
                      LocalPopChoice(n_16);
                    }
                  else
                    {
                      t = m_16;
                    }
                  t = w_13;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(f_16);
        }
      else
        {
          t = e_16;
          {
            ATerm o_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm z_4 (ATerm t)
                  {
                    if(((p_13 != NULL) && (p_13 != t)))
                      _fail(t);
                    else
                      p_13 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_4, t);
                  return(t);
                }
                t = fetch_1_0(y_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_13)), term_q_16));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(p_16);
              }
            else
              {
                t = o_16;
              }
          }
        }
      q_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = q_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t)
{
  ATerm z_13 = NULL;
  t = parse_options_1_0(a_105, t);
  z_13 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_13);
  t = z_13;
  t = c_105(t);
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_105, t);
        ;
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
        {
          ATerm t_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_16);
            }
          else
            {
              t = t_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = if_verbose2_1_0(n_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_16;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_14 = NULL;
        t = eval_config_0_0(t);
        z_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_14);
        t = z_14;
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
      }
    b_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_14));
    t = a_14;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_104(t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        {
          ATerm b_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(e_17);
                  }
                else
                  {
                    t = d_17;
                    {
                      ATerm f_17 = t;
                      int g_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_5, l_5, m_5, t);
                          ;
                          LocalPopChoice(g_17);
                        }
                      else
                        {
                          t = f_17;
                          {
                            ATerm h_17 = t;
                            int i_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(i_17);
                              }
                            else
                              {
                                t = h_17;
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
  ATerm j_5 (ATerm t)
  {
    ATerm c_14 = NULL,d_14 = NULL,c_15 = NULL;
    c_14 = t;
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_14 != NULL) && (d_14 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_5, t);
          ;
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
          t = term_l_17;
          d_14 = t;
        }
      t = not_null(d_14);
      t = ReadFromFile_0_0(t);
      c_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_14, c_15);
      t = apply_strategy_1_0(j_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(c_5, l_104, g_5, j_5, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = _2_0(_id, u_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm g_14 = NULL;
  t = collect_om_1_0(EvalPrimitive_0_0, t);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, g_14)));
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_5, _fail, default_usage_0_0, t);
  return(t);
}
