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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_Path_2;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_w_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_t_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_o_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_s_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_e_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_p_7;
ATerm term_w_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_l_5;
ATerm term_l_3;
void init_constant_terms (void)
{
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__3, term_t_14, term_u_14, term_w_6);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm explanation_0_0 (ATerm);
ATerm RepairVarDec_2_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm);
ATerm RepairDefinition_0_0 (ATerm);
ATerm sometd_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm try_1_0 (ATerm p_82 (ATerm), ATerm);
ATerm _2_0 (ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_102 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm q_101 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_104 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm);
ATerm crush_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm x_77 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm j_86 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm q_106 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm v_107 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm t_107 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm s_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm w_104 (ATerm), ATerm);
ATerm repair_types_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_l_3, (ATerm) ATinsert(ATempty, term_l_5));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t)
{
  ATerm f_0 = NULL,k_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL,r_0 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_0 = ATgetArgument(t, 0);
      {
        ATerm m_5 = ATgetArgument(t, 1);
        if(match_cons(m_5, sym_FunType_2))
          {
            ATerm n_5 = ATgetArgument(m_5, 0);
            if(((ATgetType(n_5) == AT_LIST) && !(ATisEmpty(n_5))))
              {
                ATerm o_5 = ATgetFirst((ATermList) n_5);
                if(match_cons(o_5, sym_ConstType_1))
                  {
                    k_0 = ATgetArgument(o_5, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm p_5 = (ATerm) ATgetNext((ATermList) n_5);
                  l_0 = p_5;
                  if(((ATgetType(p_5) == AT_LIST) && !(ATisEmpty(p_5))))
                    {
                      ATerm q_5 = ATgetFirst((ATermList) p_5);
                      if(match_cons(q_5, sym_FunType_2))
                        {
                          ATerm u_5 = ATgetArgument(q_5, 0);
                          ATerm v_5 = ATgetArgument(q_5, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm r_5 = (ATerm) ATgetNext((ATermList) p_5);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            m_0 = ATgetArgument(m_5, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  n_0 = t;
  t = d_78(t);
  o_0 = t;
  t = n_0;
  t = e_78(t);
  p_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue))), p_0), (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue))), o_0), (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, l_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, k_0)));
  t = conc_0_0(t);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_0, (ATerm) ATmakeAppl(sym_FunType_2, r_0, m_0));
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm u_0 = NULL,x_0 = NULL,z_0 = NULL,c_1 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      x_0 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
      c_1 = ATgetArgument(t, 2);
      u_0 = ATgetArgument(t, 3);
      {
        ATerm u_1 = NULL;
        t = z_0;
        {
          ATerm b_0 (ATerm t)
          {
            ATerm q_0 (ATerm t)
            {
              ATerm s_0 (ATerm t)
              {
                t = term_d_6;
                return(t);
              }
              ATerm t_0 (ATerm t)
              {
                t = x_0;
                return(t);
              }
              t = RepairVarDec_2_0(s_0, t_0, t);
              return(t);
            }
            t = try_1_0(q_0, t);
            return(t);
          }
          t = map_1_0(b_0, t);
          u_1 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, x_0, u_1, c_1, u_0);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          x_0 = ATgetArgument(t, 0);
          z_0 = ATgetArgument(t, 1);
          c_1 = ATgetArgument(t, 2);
          {
            ATerm b_2 = NULL;
            t = z_0;
            {
              ATerm v_0 (ATerm t)
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm y_0 (ATerm t)
                  {
                    t = term_d_6;
                    return(t);
                  }
                  ATerm a_1 (ATerm t)
                  {
                    t = x_0;
                    return(t);
                  }
                  t = RepairVarDec_2_0(y_0, a_1, t);
                  return(t);
                }
                t = try_1_0(w_0, t);
                return(t);
              }
              t = map_1_0(v_0, t);
              b_2 = t;
              t = (ATerm) ATmakeAppl(sym_RDef_3, x_0, b_2, c_1);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              x_0 = ATgetArgument(t, 0);
              z_0 = ATgetArgument(t, 1);
              c_1 = ATgetArgument(t, 2);
              u_0 = ATgetArgument(t, 3);
              {
                ATerm h_2 = NULL;
                t = z_0;
                {
                  ATerm b_1 (ATerm t)
                  {
                    ATerm d_1 (ATerm t)
                    {
                      ATerm e_1 (ATerm t)
                      {
                        t = term_e_6;
                        return(t);
                      }
                      ATerm f_1 (ATerm t)
                      {
                        t = x_0;
                        return(t);
                      }
                      t = RepairVarDec_2_0(e_1, f_1, t);
                      return(t);
                    }
                    t = try_1_0(d_1, t);
                    return(t);
                  }
                  t = map_1_0(b_1, t);
                  h_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_0, h_2, c_1, u_0);
                }
              }
            }
          else
            {
              ATerm m_2 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  x_0 = ATgetArgument(t, 0);
                  z_0 = ATgetArgument(t, 1);
                  c_1 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_0;
              {
                ATerm g_1 (ATerm t)
                {
                  ATerm j_1 (ATerm t)
                  {
                    ATerm k_1 (ATerm t)
                    {
                      t = term_e_6;
                      return(t);
                    }
                    ATerm l_1 (ATerm t)
                    {
                      t = x_0;
                      return(t);
                    }
                    t = RepairVarDec_2_0(k_1, l_1, t);
                    return(t);
                  }
                  t = try_1_0(j_1, t);
                  return(t);
                }
                t = map_1_0(g_1, t);
                m_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, x_0, m_2, c_1);
              }
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm f_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_81(t);
        ;
        LocalPopChoice(r_6);
      }
    else
      {
        t = f_6;
        t = SRTS_some(n_2, t);
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
ATerm try_1_0 (ATerm p_82 (ATerm), ATerm t)
{
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_82(t);
      ;
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
    }
  return(t);
}
ATerm _2_0 (ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,r_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  w_2 = t;
  if(match_cons(t, sym__2))
    {
      r_2 = ATgetArgument(t, 0);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_2);
  o_2 = t;
  t = r_2;
  t = w_63(t);
  u_2 = t;
  t = t_2;
  t = x_63(t);
  v_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, u_2, v_2), o_2);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL;
  b_3 = t;
  t = term_w_6;
  t = whoami_0_0(t);
  c_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), c_3), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_3;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      {
        ATerm f_3 = NULL,g_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_3 = ATgetFirst((ATermList) t);
            g_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_3;
        {
          ATerm m_1 (ATerm t)
          {
            t = g_3;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_1, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm m_3 = NULL,t_3 = NULL;
  m_3 = t;
  t = SSL_explode_term(m_3);
  if(match_cons(t, sym__2))
    {
      ATerm b_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_3, t);
        ;
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_86(t);
      }
    return(t);
  }
  t = w_3(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  {
    ATerm n_1 (ATerm t)
    {
      t = y_3;
      return(t);
    }
    t = at_end_1_0(n_1, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_4 = NULL;
  ATerm o_1 (ATerm t)
  {
    ATerm e_4 = NULL;
    e_4 = t;
    t = SSL_explode_string(e_4);
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm f_4 = NULL;
    f_4 = t;
    t = SSL_explode_string(f_4);
    return(t);
  }
  t = _2_0(o_1, p_1, t);
  t = conc_0_0(t);
  a_4 = t;
  t = SSL_implode_string(a_4);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_4 = NULL;
      o_4 = t;
      t = SSL_is_string(o_4);
      ;
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(q_1, t);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
              f_5 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_5 = ATgetArgument(t, 0);
                  t = g_5;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_5 = ATgetArgument(t, 0);
                      t = g_5;
                      {
                        ATerm l_7 = t;
                        int m_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_7);
                          }
                        else
                          {
                            t = l_7;
                            {
                              ATerm r_1 (ATerm t)
                              {
                                t = term_p_7;
                                return(t);
                              }
                              t = debug_1_0(r_1, t);
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
                          g_5 = ATgetArgument(t, 0);
                          h_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_5;
                      t = eval_config_0_0(t);
                      s_5 = t;
                      t = h_5;
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
  ATerm w_5 = NULL;
  w_5 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_5);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm y_5 = NULL;
      t = eval_config_0_0(t);
      y_5 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_5, y_5);
      t = y_5;
      return(t);
    }
    t = try_1_0(s_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm z_5 = NULL,a_6 = NULL;
    z_5 = t;
    t = term_v_7;
    t = get_config_0_0(t);
    a_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_6, term_w_7);
    t = geq_0_0(t);
    t = z_5;
    t = u_102(t);
    return(t);
  }
  t = try_1_0(t_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm b_6 = NULL,c_6 = NULL,g_6 = NULL,h_6 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm y_7 = ATgetArgument(t, 0);
        if(match_cons(y_7, sym_Stream_1))
          {
            b_6 = ATgetArgument(y_7, 0);
          }
        else
          _fail(t);
        c_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(b_6, c_6);
    g_6 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), g_6);
    h_6 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, h_6);
    return(t);
  }
  t = WriteToFile_1_0(v_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      i_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_6, term_z_7);
  t = open_stream_0_0(t);
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_6, j_6);
  t = q_101(t);
  t = fclose_0_0(t);
  t = j_6;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_8 = ATgetArgument(t, 0);
        if(match_cons(b_8, sym_Stream_1))
          {
            l_6 = ATgetArgument(b_8, 0);
          }
        else
          _fail(t);
        m_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(l_6, m_6);
    n_6 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, n_6);
    return(t);
  }
  t = WriteToFile_1_0(w_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL;
  o_6 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm c_8 = t;
      int d_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                p_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(y_1, t);
          ;
          LocalPopChoice(d_8);
        }
      else
        {
          t = c_8;
          t = term_e_8;
          p_6 = t;
        }
      return(t);
    }
    t = _2_0(x_1, _id, t);
    t = o_6;
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = not_null(p_6);
          return(t);
        }
        t = split_2_0(a_2, _id, t);
        return(t);
      }
      t = _2_0(_id, z_1, t);
      {
        ATerm r_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              ATerm d_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(d_2, t);
              return(t);
            }
            t = _2_0(c_2, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(x_8);
          }
        else
          {
            t = r_8;
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
ATerm apply_strategy_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm q_6 = NULL,u_6 = NULL,v_6 = NULL,x_6 = NULL,y_6 = NULL;
  q_6 = t;
  t = dtime_0_0(t);
  t = q_6;
  t = s_104(t);
  u_6 = t;
  t = dtime_0_0(t);
  v_6 = t;
  t = u_6;
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_6), (ATerm) ATmakeAppl(sym_Runtime_1, v_6)), y_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_7 (ATerm k_7, ATerm t)
  {
    t = SSL_fclose(k_7);
    return(t);
  }
  ATerm n_7 = NULL,o_7 = NULL;
  o_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_7 = ATgetArgument(t, 0);
      {
        ATerm b_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_7);
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = b_9;
            t = q_7(o_7, t);
          }
      }
    }
  else
    {
      t = q_7(o_7, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL;
  r_7 = t;
  t = c_101(t);
  s_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_7), s_7));
  t = r_7;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_7 = NULL;
  t = SSL_stdin_stream();
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  t = SSL_stdout_stream();
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_7 = NULL;
  t = SSL_stderr_stream();
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_7);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      ATerm j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL,i_1 = NULL;
        h_1 = t;
        t = SSL_explode_term(h_1);
        if(match_cons(t, sym__2))
          {
            ATerm r_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_9 = ATgetArgument(t, 1);
              if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
                {
                  i_1 = ATgetFirst((ATermList) t_9);
                  {
                    ATerm x_9 = (ATerm) ATgetNext((ATermList) t_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        {
          ATerm y_9 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
              ATerm e_2 (ATerm t)
              {
                ATerm i_8 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    i_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = i_8;
                return(t);
              }
              t = _2_0(e_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_8 = ATgetArgument(t, 0);
                  g_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(f_8, g_8);
              h_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_8);
              ;
              LocalPopChoice(b_10);
            }
          else
            {
              t = y_9;
              {
                ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
                ATerm f_2 (ATerm t)
                {
                  ATerm m_8 = NULL;
                  m_8 = t;
                  t = SSL_is_string(m_8);
                  return(t);
                }
                t = _2_0(f_2, _id, t);
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
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
  ATerm c_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_8 = NULL;
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_8, term_g_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = c_10;
      {
        ATerm g_2 (ATerm t)
        {
          t = term_l_10;
          return(t);
        }
        t = debug_1_0(g_2, t);
        _fail(t);
      }
    }
  n_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_8);
  o_8 = t;
  t = n_8;
  t = fclose_0_0(t);
  t = o_8;
  return(t);
}
ATerm split_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  t = j_83(t);
  t_8 = t;
  t = s_8;
  t = k_83(t);
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_8, u_8);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  v_8 = t;
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              w_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(i_2, t);
        ;
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        t = term_o_10;
        w_8 = t;
      }
    t = v_8;
    {
      ATerm j_2 (ATerm t)
      {
        t = not_null(w_8);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, j_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm y_8 = NULL;
    y_8 = t;
    if(match_string(t, "-k"))
      {
        t = y_8;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = y_8;
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm z_8 = NULL,a_9 = NULL;
    z_8 = t;
    t = SSL_string_to_int(z_8);
    a_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_9);
    t = z_8;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_p_10;
    return(t);
  }
  t = ArgOption_3_0(k_2, l_2, p_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm c_9 = NULL;
        c_9 = t;
        if(match_string(t, "-S"))
          {
            t = c_9;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = c_9;
          }
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_w_10;
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_x_10;
        return(t);
      }
      t = Option_3_0(q_2, s_2, x_2, t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm a_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              ATerm d_9 = NULL,e_9 = NULL;
              d_9 = t;
              t = SSL_string_to_int(d_9);
              e_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_9);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, d_9);
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              t = term_f_11;
              return(t);
            }
            t = ArgOption_3_0(y_2, z_2, a_3, t);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = a_11;
            {
              ATerm d_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_i_11;
                return(t);
              }
              ATerm h_3 (ATerm t)
              {
                t = term_j_11;
                return(t);
              }
              t = Option_3_0(d_3, e_3, h_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm k_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = k_11;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm g_9 = NULL;
    g_9 = t;
    if(match_string(t, "-o"))
      {
        t = g_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = g_9;
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm h_9 = NULL;
    h_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_9);
    t = (ATerm) ATmakeAppl(sym_Output_1, h_9);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_s_11;
    return(t);
  }
  t = ArgOption_3_0(i_3, j_3, k_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm n_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm o_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_12;
          return(t);
        }
        ATerm p_3 (ATerm t)
        {
          t = term_e_12;
          return(t);
        }
        t = Option_3_0(n_3, o_3, p_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  k_9 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_9;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm s_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_9 = ATgetFirst((ATermList) t);
          m_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_9 = ATgetFirst((ATermList) t);
          o_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_9;
      t = h_0(t);
      t = n_9;
      t = i_0(t);
      s_9 = t;
      t = (ATerm) ATinsert(CheckATermList(o_9), s_9);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm u_9 = NULL;
    u_9 = t;
    if(match_string(t, "-i"))
      {
        t = u_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_9;
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm v_9 = NULL;
    v_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_9);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_9);
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_f_12;
    return(t);
  }
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm i_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = i_12;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_6;
  t = whoami_0_0(t);
  w_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_9));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_90(t);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
        ATerm z_9 = NULL,a_10 = NULL,d_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_9 = ATgetFirst((ATermList) t);
            a_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_10;
        t = foldr_2_0(y_90, z_90, t);
        d_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_9, d_10);
        t = z_90(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,h_10 = NULL;
  e_10 = t;
  t = SSL_explode_term(e_10);
  if(match_cons(t, sym__2))
    {
      ATerm s_12 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10;
  t = foldr_2_0(w_88, x_88, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  t = times_0_0(t);
  {
    ATerm u_3 (ATerm t)
    {
      t = term_s_10;
      return(t);
    }
    ATerm v_3 (ATerm t)
    {
      ATerm j_10 = NULL,k_10 = NULL;
      if(match_cons(t, sym__2))
        {
          j_10 = ATgetArgument(t, 0);
          k_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_10, k_10);
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            t = SSL_addr(j_10, k_10);
          }
      }
      return(t);
    }
    t = crush_2_0(u_3, v_3, t);
    i_10 = t;
    t = SSL_TicksToSeconds(i_10);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym__2))
    {
      u_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_12 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_10;
        if((u_10 != t))
          {
            _fail(t);
          }
        t = t_10;
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = z_12;
        t = t_10;
        {
          ATerm i_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_10, v_10);
              ;
              LocalPopChoice(j_13);
            }
          else
            {
              t = i_13;
              t = SSL_gtr(u_10, v_10);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_10, v_10);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm y_10 = NULL,z_10 = NULL;
    y_10 = t;
    t = term_v_7;
    t = get_config_0_0(t);
    z_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_10, term_k_13);
    t = geq_0_0(t);
    t = y_10;
    t = t_102(t);
    return(t);
  }
  t = try_1_0(x_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm b_11 = NULL,c_11 = NULL;
    t = run_time_0_0(t);
    b_11 = t;
    t = term_w_6;
    t = whoami_0_0(t);
    c_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), b_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), c_11));
    t = (ATerm) ATmakeAppl(sym__2, term_l_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_13), b_11), term_l_13), c_11));
    return(t);
  }
  t = if_verbose1_1_0(b_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm c_4 (ATerm t)
        {
          ATerm u_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(v_13);
            }
          else
            {
              t = u_13;
              {
                ATerm z_13 = t;
                int a_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(a_14);
                  }
                else
                  {
                    t = z_13;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(c_4, t);
      }
    }
  t = q_105(t);
  return(t);
}
ATerm map_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm e_11 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = Cons_2_0(y_85, e_11, t);
      }
    return(t);
  }
  t = e_11(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_11 = ATgetFirst((ATermList) t);
      h_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_11 = NULL,m_11 = NULL;
        t = h_11;
        t = g_0(t);
        l_11 = t;
        t = g_11;
        t = e_0(t);
        m_11 = t;
        t = h_11;
        {
          ATerm d_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_11), m_11);
            return(t);
          }
          t = reverse_acc_2_0(e_0, d_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_6;
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
ATerm Program_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  q_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_11);
  n_11 = t;
  t = o_11;
  t = x_77(t);
  p_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_11), n_11);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
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
  t = term_j_14;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm i_4 (ATerm t)
    {
      ATerm t_11 = NULL;
      t_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, t_11), term_k_14);
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
ATerm Undefined_1_0 (ATerm y_77 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  x_11 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      v_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_11);
  u_11 = t;
  t = v_11;
  t = y_77(t);
  w_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, w_11), u_11);
  return(t);
}
ATerm fetch_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_86, _id, t);
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = Cons_2_0(_id, a_12, t);
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  t = fetch_1_0(q_106, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  c_12 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_14 = ATgetFirst((ATermList) t);
                ATerm q_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_12;
          }
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = (ATerm) ATinsert(ATempty, c_12);
      }
    d_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), d_12);
    t = c_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_12;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
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
        t = term_v_14;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_w_14;
        return(t);
      }
      t = Option_3_0(j_4, k_4, l_4, t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
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
          t = term_x_14;
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          t = term_y_14;
          return(t);
        }
        t = Option_3_0(m_4, n_4, p_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__3))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
      l_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_12, k_12);
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_15 = ATgetArgument(t, 0);
            ATerm c_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_12, k_12);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = (ATerm) ATempty;
      }
    m_12 = t;
    t = SSL_table_put(j_12, k_12, (ATerm) ATinsert(CheckATermList(m_12), l_12));
    t = (ATerm) ATmakeAppl(sym__3, j_12, k_12, l_12);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm r_12 = NULL;
  t = term_w_6;
  t = v_107(t);
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_15, term_e_15, r_12);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = t_12;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm y_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_12 = ATgetFirst((ATermList) t);
          v_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_12;
      t = a_0(t);
      t = term_w_6;
      t = c_0(t);
      y_12 = t;
      t = (ATerm) ATinsert(CheckATermList(v_12), y_12);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm a_13 = NULL;
    a_13 = t;
    if(match_string(t, "--help"))
      {
        t = a_13;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = a_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = a_13;
          }
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_f_15;
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_g_15;
    return(t);
  }
  t = Option_3_0(q_4, r_4, s_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  g_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_13 = ATgetFirst((ATermList) t);
      d_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_13);
  b_13 = t;
  t = c_13;
  t = f_65(t);
  e_13 = t;
  t = d_13;
  t = g_65(t);
  f_13 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_13), e_13), b_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_107 (ATerm), ATerm t)
{
  ATerm m_13 = NULL;
  m_13 = t;
  {
    ATerm t_4 (ATerm t)
    {
      t = term_h_15;
      t = t_107(t);
      return(t);
    }
    t = try_1_0(t_4, t);
    t = m_13;
    {
      ATerm u_4 (ATerm t)
      {
        ATerm n_13 = NULL;
        n_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_13);
        t = (ATerm) ATmakeAppl(sym_Program_1, n_13);
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_15 = t;
            int l_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_15);
              }
            else
              {
                t = k_15;
                t = t_107(t);
                t = Cons_2_0(_id, v_4, t);
              }
            ;
            LocalPopChoice(j_15);
          }
        else
          {
            t = i_15;
            {
              ATerm p_13 = NULL,q_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_13 = ATgetFirst((ATermList) t);
                  q_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_13), (ATerm) ATmakeAppl(sym_Undefined_1, p_13));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_4, v_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  w_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = w_13;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm m_15 = t;
      int n_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_107(t);
          ;
          LocalPopChoice(n_15);
        }
      else
        {
          t = m_15;
          {
            ATerm o_15 = t;
            int p_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(p_15);
              }
            else
              {
                t = o_15;
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
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_14 = NULL;
            d_14 = t;
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_14;
                  {
                    ATerm u_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_t_13;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(v_15);
                      }
                    else
                      {
                        t = u_15;
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
                    t = d_14;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  t = term_u_14;
                  t = get_config_0_0(t);
                  t = d_14;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            {
              ATerm z_4 (ATerm t)
              {
                ATerm a_5 (ATerm t)
                {
                  x_13 = t;
                  return(t);
                }
                t = Undefined_1_0(a_5, t);
                return(t);
              }
              t = option_defined_1_0(z_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_13)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_l_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_13)), term_w_15));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(x_4, t);
      y_13 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = y_13;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm t)
{
  ATerm x_5 = NULL;
  t = parse_options_1_0(s_105, t);
  x_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), x_5);
  t = x_5;
  t = u_105(t);
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_105, t);
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        {
          ATerm z_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_16);
            }
          else
            {
              t = z_15;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_105(t);
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(h_105, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(b_5, j_105, k_105, c_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      ATerm g_14 = NULL,h_14 = NULL;
      g_14 = t;
      t = term_o_12;
      t = get_config_0_0(t);
      h_14 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_14));
      t = g_14;
      return(t);
    }
    t = if_verbose2_1_0(e_5, t);
    return(t);
  }
  t = iowrap_4_0(b_105, c_105, d_105, d_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t)
{
  t = iowrap_3_0(z_104, a_105, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    t = _2_0(_id, w_104, t);
    return(t);
  }
  t = iowrap_2_0(i_5, _fail, t);
  return(t);
}
ATerm repair_types_0_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      ATerm i_14 = NULL;
      t = sometd_1_0(RepairDefinition_0_0, t);
      i_14 = t;
      t = explanation_0_0(t);
      t = i_14;
      return(t);
    }
    t = try_1_0(k_5, t);
    return(t);
  }
  t = iowrap_1_0(j_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = repair_types_0_0(t);
  return(t);
}
