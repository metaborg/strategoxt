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
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_a_13;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_m_9;
ATerm term_h_8;
ATerm term_a_8;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_s_5;
void init_constant_terms (void)
{
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_Op_2, term_f_6, (ATerm) ATempty);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Call_2, term_y_6, (ATerm) ATempty);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Var_1, term_h_7);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__3, term_j_15, term_k_15, term_s_5);
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
ATerm foldr_3_0 (ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm a_1 (ATerm);
ATerm x_0 (ATerm);
ATerm collect_om_1_0 (ATerm j_93 (ATerm), ATerm);
ATerm _2_0 (ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm z_100 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm p_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_104 (ATerm), ATerm);
ATerm j_5 (ATerm c_5, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm v_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm a_89 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_102 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_102 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm i_4 (ATerm);
ATerm p_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_107 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm parse_options_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm n_5 (ATerm);
ATerm b_5 (ATerm);
ATerm iowrap_3_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm);
ATerm q_5 (ATerm);
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
  t = term_s_5;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm k_0 (ATerm t)
{
  ATerm u_0 = NULL;
  t = new_0_0(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_0);
  return(t);
}
ATerm l_0 (ATerm t)
{
  t = term_g_6;
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm w_0 = NULL,z_0 = NULL,d_1 = NULL;
  w_0 = t;
  t = SSL_explode_term(w_0);
  if(match_cons(t, sym__2))
    {
      ATerm h_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_6 = ATgetArgument(t, 1);
        if(((ATgetType(i_6) == AT_LIST) && !(ATisEmpty(i_6))))
          {
            z_0 = ATgetFirst((ATermList) i_6);
            {
              ATerm k_6 = (ATerm) ATgetNext((ATermList) i_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(w_0);
  if(match_cons(t, sym__2))
    {
      ATerm l_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_6 = ATgetArgument(t, 1);
        if(((ATgetType(o_6) == AT_LIST) && !(ATisEmpty(o_6))))
          {
            ATerm p_6 = ATgetFirst((ATermList) o_6);
            ATerm q_6 = (ATerm) ATgetNext((ATermList) o_6);
            if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
              {
                d_1 = ATgetFirst((ATermList) q_6);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_6, (ATerm) ATinsert(ATinsert(ATempty, d_1), z_0));
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_z_6, g_1);
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
  t = (ATerm) ATmakeAppl(sym_RDef_3, term_e_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, term_j_7), (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, r_0), (ATerm) ATmakeAppl(sym_Str_1, o_0))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, o_0, s_0), term_j_7), term_k_7));
  return(t);
}
ATerm union_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_1;
  {
    ATerm a_2 (ATerm t)
    {
      ATerm n_7 = t;
      int o_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_1;
          ;
          LocalPopChoice(o_7);
        }
      else
        {
          t = n_7;
          {
            ATerm p_7 = t;
            int r_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_1 = NULL,f_1 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_1 = ATgetFirst((ATermList) t);
                    f_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = t_1;
                {
                  ATerm t_0 (ATerm t)
                  {
                    ATerm i_1 = NULL;
                    i_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_1, i_1);
                    t = n_92(t);
                    return(t);
                  }
                  t = fetch_1_0(t_0, t);
                  t = f_1;
                  t = a_2(t);
                }
                ;
                LocalPopChoice(r_7);
              }
            else
              {
                t = p_7;
                t = Cons_2_0(_id, a_2, t);
              }
          }
        }
      return(t);
    }
    t = a_2(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_94(t);
      ;
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm e_2 = NULL,f_2 = NULL,k_2 = NULL,l_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_2 = ATgetFirst((ATermList) t);
            f_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_2;
        t = p_94(t);
        k_2 = t;
        t = f_2;
        t = foldr_3_0(n_94, o_94, p_94, t);
        l_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_2, l_2);
        t = o_94(t);
      }
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm s_1 = NULL;
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      if((s_1 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = union_1_0(a_1, t);
  return(t);
}
ATerm collect_om_1_0 (ATerm j_93 (ATerm), ATerm t)
{
  ATerm v_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 = NULL;
      t = j_93(t);
      p_2 = t;
      t = (ATerm) ATinsert(ATempty, p_2);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = v_7;
      {
        ATerm l_1 = NULL,m_1 = NULL;
        l_1 = t;
        t = SSL_explode_term(l_1);
        if(match_cons(t, sym__2))
          {
            ATerm z_7 = ATgetArgument(t, 0);
            m_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_1;
        {
          ATerm y_0 (ATerm t)
          {
            t = collect_om_1_0(j_93, t);
            return(t);
          }
          t = foldr_3_0(v_0, x_0, y_0, t);
        }
      }
    }
  return(t);
}
ATerm _2_0 (ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym__2))
    {
      w_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_3);
  r_2 = t;
  t = w_2;
  t = l_63(t);
  y_2 = t;
  t = x_2;
  t = m_63(t);
  z_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, y_2, z_2), r_2);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm z_100 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  if(match_cons(t, sym__2))
    {
      g_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_3, term_a_8);
  t = open_stream_0_0(t);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_3, h_3);
  t = z_100(t);
  t = fclose_0_0(t);
  t = h_3;
  return(t);
}
ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if(match_cons(d_8, sym_Stream_1))
        {
          o_3 = ATgetArgument(d_8, 0);
        }
      else
        _fail(t);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(o_3, p_3);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_3);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      if(match_cons(e_8, sym_Stream_1))
        {
          f_4 = ATgetArgument(e_8, 0);
        }
      else
        _fail(t);
      g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(f_4, g_4);
  h_4 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), h_4);
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_4);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = fetch_1_0(n_1, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = WriteToFile_1_0(o_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = WriteToFile_1_0(q_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL;
  k_3 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm f_8 = t;
      int g_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((l_3 != NULL) && (l_3 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_1, t);
          ;
          LocalPopChoice(g_8);
        }
      else
        {
          t = f_8;
          t = term_h_8;
          if(((l_3 != NULL) && (l_3 != t)))
            _fail(t);
          else
            l_3 = t;
        }
      return(t);
    }
    t = _2_0(b_1, _id, t);
    t = k_3;
    {
      ATerm h_1 (ATerm t)
      {
        ATerm u_1 = NULL;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_3), u_1);
        return(t);
      }
      t = _2_0(_id, h_1, t);
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(j_1, k_1, t);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            t = _2_0(_id, p_1, t);
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
ATerm apply_strategy_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  k_4 = t;
  t = dtime_0_0(t);
  t = k_4;
  t = b_104(t);
  l_4 = t;
  t = dtime_0_0(t);
  m_4 = t;
  t = l_4;
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      o_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_4), (ATerm) ATmakeAppl(sym_Runtime_1, m_4)), o_4);
  return(t);
}
ATerm j_5 (ATerm c_5, ATerm t)
{
  t = SSL_fclose(c_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_5 = NULL,h_5 = NULL;
  h_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_5 = ATgetArgument(t, 0);
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_5);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            t = j_5(h_5, t);
          }
      }
    }
  else
    {
      t = j_5(h_5, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_5 = NULL;
  t = SSL_stdin_stream();
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_5 = NULL;
  t = SSL_stdout_stream();
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_5 = NULL;
  t = SSL_stderr_stream();
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_5);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm w_5 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      w_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  t = SSL_is_string(a_6);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      ATerm r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_2 = NULL,b_3 = NULL;
        v_2 = t;
        t = SSL_explode_term(v_2);
        if(match_cons(t, sym__2))
          {
            ATerm v_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_8 = ATgetArgument(t, 1);
              if(((ATgetType(w_8) == AT_LIST) && !(ATisEmpty(w_8))))
                {
                  b_3 = ATgetFirst((ATermList) w_8);
                  {
                    ATerm b_9 = (ATerm) ATgetNext((ATermList) w_8);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = b_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = b_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        {
          ATerm f_9 = t;
          int g_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_5 = NULL,t_5 = NULL,v_5 = NULL;
              t = _2_0(r_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  r_5 = ATgetArgument(t, 0);
                  t_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(r_5, t_5);
              v_5 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, v_5);
              ;
              LocalPopChoice(g_9);
            }
          else
            {
              t = f_9;
              {
                ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
                t = _2_0(v_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    x_5 = ATgetArgument(t, 0);
                    y_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(x_5, y_5);
                z_5 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, z_5);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  ATerm i_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_6 = NULL;
      e_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_6, term_m_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = i_9;
      {
        ATerm c_3 = NULL;
        c_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = c_3;
        _fail(t);
      }
    }
  b_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(d_6);
  c_6 = t;
  t = b_6;
  t = fclose_0_0(t);
  t = c_6;
  return(t);
}
ATerm fetch_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_88, _id, t);
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        t = Cons_2_0(_id, j_6, t);
      }
    return(t);
  }
  t = j_6(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      {
        ATerm m_6 = NULL,n_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_6 = ATgetFirst((ATermList) t);
            n_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_6;
        {
          ATerm w_1 (ATerm t)
          {
            t = n_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_6, t);
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_89(t);
      }
    return(t);
  }
  t = t_6(t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm w_6 = NULL;
  w_6 = t;
  t = SSL_explode_string(w_6);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm x_6 = NULL;
  x_6 = t;
  t = SSL_explode_string(x_6);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_6 = NULL;
  t = _2_0(y_1, z_1, t);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_7 = NULL,d_7 = NULL;
        if(match_cons(t, sym__2))
          {
            c_7 = ATgetArgument(t, 0);
            d_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_7;
        {
          ATerm b_2 (ATerm t)
          {
            t = d_7;
            return(t);
          }
          t = at_end_1_0(b_2, t);
        }
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        {
          ATerm q_3 = NULL,r_3 = NULL;
          q_3 = t;
          t = SSL_explode_term(q_3);
          if(match_cons(t, sym__2))
            {
              ATerm f_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_3;
          t = concat_0_0(t);
        }
      }
    v_6 = t;
    t = SSL_implode_string(v_6);
  }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm h_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = h_10;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_7 = NULL;
      q_7 = t;
      t = SSL_is_string(q_7);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = m_10;
      {
        ATerm q_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_2, t);
            ;
            LocalPopChoice(s_10);
          }
        else
          {
            t = q_10;
            {
              ATerm u_7 = NULL,w_7 = NULL,x_7 = NULL;
              u_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_7 = ATgetArgument(t, 0);
                  t = w_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_7 = ATgetArgument(t, 0);
                      t = w_7;
                      {
                        ATerm t_10 = t;
                        int v_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_7);
                            {
                              ATerm w_10 = t;
                              int y_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_4 = NULL;
                                  t = eval_config_0_0(t);
                                  u_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_7, u_4);
                                  t = u_4;
                                  ;
                                  LocalPopChoice(y_10);
                                }
                              else
                                {
                                  t = w_10;
                                }
                            }
                            ;
                            LocalPopChoice(v_10);
                          }
                        else
                          {
                            t = t_10;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_7), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = w_7;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_8 = NULL,c_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_7 = ATgetArgument(t, 0);
                          x_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_7;
                      t = eval_config_0_0(t);
                      b_8 = t;
                      t = x_7;
                      t = eval_config_0_0(t);
                      c_8 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_8, c_8);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_8 = NULL,n_8 = NULL;
      k_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_5 = NULL;
            t = eval_config_0_0(t);
            u_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_5);
            t = u_5;
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
          }
        n_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_8, term_d_11);
        t = geq_0_0(t);
        t = k_8;
        t = d_102(t);
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
ATerm d_2 (ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  if(match_string(t, "-k"))
    {
      t = p_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_8;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm q_8 = NULL,u_8 = NULL;
  q_8 = t;
  t = SSL_string_to_int(q_8);
  u_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), u_8);
  t = q_8;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_2, g_2, h_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  if(match_string(t, "-S"))
    {
      t = x_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_8;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_j_11;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_l_11;
  return(t);
}
ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  y_8 = t;
  t = SSL_string_to_int(y_8);
  z_8 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_8);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_8);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_11;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_2, j_2, m_2, t);
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
            t = ArgOption_3_0(n_2, o_2, q_2, t);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = x_11;
            t = Option_3_0(s_2, t_2, u_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_9 = NULL;
      t = term_s_5;
      t = d_0(t);
      e_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_l_12, e_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_9 = ATgetFirst((ATermList) t);
          d_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_9;
      t = a_0(t);
      t = term_s_5;
      t = c_0(t);
      h_9 = t;
      t = (ATerm) ATinsert(CheckATermList(d_9), h_9);
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm j_9 = NULL;
  j_9 = t;
  if(match_string(t, "-o"))
    {
      t = j_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_9;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm k_9 = NULL;
  k_9 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_9);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_9);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_m_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__3))
    {
      n_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
      p_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_9, o_9);
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_12 = ATgetArgument(t, 0);
            ATerm z_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_9, o_9);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = (ATerm) ATempty;
      }
    q_9 = t;
    t = SSL_table_put(n_9, o_9, (ATerm) ATinsert(CheckATermList(q_9), p_9));
    t = (ATerm) ATmakeAppl(sym__3, n_9, o_9, p_9);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_10 = NULL;
      t = term_s_5;
      t = j_0(t);
      c_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_l_12, c_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_9 = ATgetFirst((ATermList) t);
          z_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_10 = ATgetFirst((ATermList) t);
          b_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_9;
      t = h_0(t);
      t = a_10;
      t = i_0(t);
      g_10 = t;
      t = (ATerm) ATinsert(CheckATermList(b_10), g_10);
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  if(match_string(t, "-i"))
    {
      t = i_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_10;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm j_10 = NULL;
  j_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_10);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_10);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_a_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_3, m_3, n_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_5;
  t = whoami_0_0(t);
  k_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_10));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm b_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL;
        t = eval_config_0_0(t);
        a_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_7);
        t = a_7;
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = b_13;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_94(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm n_10 = NULL,o_10 = NULL,r_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_10 = ATgetFirst((ATermList) t);
            o_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_10;
        t = foldr_2_0(l_94, m_94, t);
        r_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_10, r_10);
        t = m_94(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      l_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(l_7, m_7);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = SSL_addr(l_7, m_7);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_10 = NULL,b_7 = NULL,i_7 = NULL;
  t = times_0_0(t);
  b_7 = t;
  t = SSL_explode_term(b_7);
  if(match_cons(t, sym__2))
    {
      ATerm l_13 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7;
  t = foldr_2_0(s_3, t_3, t);
  u_10 = t;
  t = SSL_TicksToSeconds(u_10);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  f_11 = t;
  if(match_cons(t, sym__2))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_11;
        if((g_11 != t))
          {
            _fail(t);
          }
        t = f_11;
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = f_11;
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_11, h_11);
              ;
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              t = SSL_gtr(g_11, h_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_11, h_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_11 = NULL,m_11 = NULL;
      k_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_9 = NULL;
            t = eval_config_0_0(t);
            a_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_9);
            t = a_9;
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = u_13;
          }
        m_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_11, term_y_13);
        t = geq_0_0(t);
        t = k_11;
        t = c_102(t);
      }
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  t = run_time_0_0(t);
  o_11 = t;
  t = term_s_5;
  t = whoami_0_0(t);
  p_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), p_11));
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_14), o_11), term_a_14), p_11));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm l_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_9 = NULL;
            t = eval_config_0_0(t);
            v_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_9);
            t = v_9;
            ;
            LocalPopChoice(m_14);
          }
        else
          {
            t = l_14;
          }
      }
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm v_3 (ATerm t)
        {
          ATerm n_14 = t;
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
              t = n_14;
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
        t = fetch_1_0(v_3, t);
      }
    }
  t = z_104(t);
  return(t);
}
ATerm map_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm q_11 (ATerm t)
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
        t = Cons_2_0(j_88, q_11, t);
      }
    return(t);
  }
  t = q_11(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_11 = ATgetFirst((ATermList) t);
      t_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_11 = NULL,z_11 = NULL;
        t = t_11;
        t = g_0(t);
        y_11 = t;
        t = s_11;
        t = e_0(t);
        z_11 = t;
        t = t_11;
        {
          ATerm x_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_11), z_11);
            return(t);
          }
          t = reverse_acc_2_0(e_0, x_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_5;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm q_73 (ATerm), ATerm t)
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
  t = q_73(t);
  c_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, c_12), a_12);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_4 (ATerm t)
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
            ATerm x_10 = NULL;
            t = eval_config_0_0(t);
            x_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_10);
            t = x_10;
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
      {
        ATerm y_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(y_3, t);
      }
    }
  t = term_b_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, z_3, t);
  t = map_1_0(a_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm r_73 (ATerm), ATerm t)
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
  t = r_73(t);
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
ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_15;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
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
      t = Option_3_0(b_4, c_4, d_4, t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      t = Option_3_0(e_4, i_4, p_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  y_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_12 = ATgetFirst((ATermList) t);
      v_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_12);
  t_12 = t;
  t = u_12;
  t = a_68(t);
  w_12 = t;
  t = v_12;
  t = b_68(t);
  x_12 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_12), w_12), t_12);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm d_13 = NULL;
  d_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_13);
  t = (ATerm) ATmakeAppl(sym_Program_1, d_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_15;
        t = c_107(t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
      }
    t = c_13;
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
                t = c_107(t);
                t = Cons_2_0(_id, r_4, t);
              }
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm f_13 = NULL,g_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_13 = ATgetFirst((ATermList) t);
                  g_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_13), (ATerm) ATmakeAppl(sym_Undefined_1, f_13));
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
  ATerm x_13 = NULL;
  x_13 = t;
  if(match_string(t, "--help"))
    {
      t = x_13;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_13;
        }
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_15;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm x_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,v_13 = NULL;
  s_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_13;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_107(t);
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
                t = Option_3_0(t_4, v_4, w_4, t);
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
          ATerm c_14 = NULL;
          c_14 = t;
          {
            ATerm g_16 = t;
            int h_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_14;
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
                      t = fetch_1_0(x_4, t);
                    }
                  t = c_14;
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
                  t = c_14;
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
                    if(((t_13 != NULL) && (t_13 != t)))
                      _fail(t);
                    else
                      t_13 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_4, t);
                  return(t);
                }
                t = fetch_1_0(y_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_z_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_13)), term_q_16));
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
      v_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = v_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm t)
{
  ATerm f_14 = NULL;
  t = parse_options_1_0(b_105, t);
  f_14 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), f_14);
  t = f_14;
  t = d_105(t);
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_105, t);
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
              t = e_105(t);
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
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_16;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  g_14 = t;
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
    h_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_14));
    t = g_14;
  }
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = if_verbose2_1_0(n_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_104(t);
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
                          t = Option_3_0(e_5, g_5, i_5, t);
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
  ATerm d_5 (ATerm t)
  {
    ATerm i_14 = NULL,j_14 = NULL,c_15 = NULL;
    i_14 = t;
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_14 != NULL) && (j_14 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_14 = ATgetArgument(t, 0);
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
          j_14 = t;
        }
      t = not_null(j_14);
      t = ReadFromFile_0_0(t);
      c_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_14, c_15);
      t = apply_strategy_1_0(k_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_5, m_104, b_5, d_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm k_14 = NULL;
  t = collect_om_1_0(EvalPrimitive_0_0, t);
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, k_14)));
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    t = _2_0(_id, q_5, t);
    return(t);
  }
  t = iowrap_3_0(p_5, _fail, default_usage_0_0, t);
  return(t);
}
