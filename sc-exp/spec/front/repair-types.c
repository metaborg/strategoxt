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
ATerm term_d_14;
ATerm term_c_14;
ATerm term_p_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_z_12;
ATerm term_i_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_y_7;
ATerm term_r_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_e_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_h_5;
ATerm term_k_4;
void init_constant_terms (void)
{
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__3, term_t_14, term_u_14, term_e_6);
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
ATerm RepairVarDec_2_0 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm);
ATerm RepairDefinition_0_0 (ATerm);
ATerm sometd_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm try_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm _2_0 (ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm f_101 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm h_104 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm r_100 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm);
ATerm crush_2_0 (ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm f_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm r_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_86 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm f_106 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm k_107 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm l_104 (ATerm), ATerm);
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
  t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATempty, term_h_5));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL,x_0 = NULL,z_0 = NULL,c_1 = NULL,e_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_0 = ATgetArgument(t, 0);
      {
        ATerm i_5 = ATgetArgument(t, 1);
        if(match_cons(i_5, sym_FunType_2))
          {
            ATerm j_5 = ATgetArgument(i_5, 0);
            if(((ATgetType(j_5) == AT_LIST) && !(ATisEmpty(j_5))))
              {
                ATerm l_5 = ATgetFirst((ATermList) j_5);
                if(match_cons(l_5, sym_ConstType_1))
                  {
                    u_0 = ATgetArgument(l_5, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm m_5 = (ATerm) ATgetNext((ATermList) j_5);
                  v_0 = m_5;
                  if(((ATgetType(m_5) == AT_LIST) && !(ATisEmpty(m_5))))
                    {
                      ATerm n_5 = ATgetFirst((ATermList) m_5);
                      if(match_cons(n_5, sym_FunType_2))
                        {
                          ATerm q_5 = ATgetArgument(n_5, 0);
                          ATerm u_5 = ATgetArgument(n_5, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm p_5 = (ATerm) ATgetNext((ATermList) m_5);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            x_0 = ATgetArgument(i_5, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  z_0 = t;
  t = w_77(t);
  c_1 = t;
  t = z_0;
  t = x_77(t);
  e_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue))), e_1), (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue))), c_1), (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue))), t_0), (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, v_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, u_0)));
  t = conc_0_0(t);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_0, (ATerm) ATmakeAppl(sym_FunType_2, k_1, x_0));
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm q_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
      a_2 = ATgetArgument(t, 2);
      q_1 = ATgetArgument(t, 3);
      {
        ATerm g_2 = NULL;
        t = y_1;
        {
          ATerm c_0 (ATerm t)
          {
            ATerm e_0 (ATerm t)
            {
              ATerm k_0 (ATerm t)
              {
                t = term_v_5;
                return(t);
              }
              ATerm l_0 (ATerm t)
              {
                t = x_1;
                return(t);
              }
              t = RepairVarDec_2_0(k_0, l_0, t);
              return(t);
            }
            t = try_1_0(e_0, t);
            return(t);
          }
          t = map_1_0(c_0, t);
          g_2 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, x_1, g_2, a_2, q_1);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          x_1 = ATgetArgument(t, 0);
          y_1 = ATgetArgument(t, 1);
          a_2 = ATgetArgument(t, 2);
          {
            ATerm l_2 = NULL;
            t = y_1;
            {
              ATerm m_0 (ATerm t)
              {
                ATerm n_0 (ATerm t)
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = term_v_5;
                    return(t);
                  }
                  ATerm p_0 (ATerm t)
                  {
                    t = x_1;
                    return(t);
                  }
                  t = RepairVarDec_2_0(o_0, p_0, t);
                  return(t);
                }
                t = try_1_0(n_0, t);
                return(t);
              }
              t = map_1_0(m_0, t);
              l_2 = t;
              t = (ATerm) ATmakeAppl(sym_RDef_3, x_1, l_2, a_2);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              x_1 = ATgetArgument(t, 0);
              y_1 = ATgetArgument(t, 1);
              a_2 = ATgetArgument(t, 2);
              q_1 = ATgetArgument(t, 3);
              {
                ATerm t_2 = NULL;
                t = y_1;
                {
                  ATerm q_0 (ATerm t)
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm s_0 (ATerm t)
                      {
                        t = term_w_5;
                        return(t);
                      }
                      ATerm w_0 (ATerm t)
                      {
                        t = x_1;
                        return(t);
                      }
                      t = RepairVarDec_2_0(s_0, w_0, t);
                      return(t);
                    }
                    t = try_1_0(r_0, t);
                    return(t);
                  }
                  t = map_1_0(q_0, t);
                  t_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_1, t_2, a_2, q_1);
                }
              }
            }
          else
            {
              ATerm x_2 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  x_1 = ATgetArgument(t, 0);
                  y_1 = ATgetArgument(t, 1);
                  a_2 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_1;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm d_1 (ATerm t)
                  {
                    ATerm f_1 (ATerm t)
                    {
                      t = term_w_5;
                      return(t);
                    }
                    ATerm g_1 (ATerm t)
                    {
                      t = x_1;
                      return(t);
                    }
                    t = RepairVarDec_2_0(f_1, g_1, t);
                    return(t);
                  }
                  t = try_1_0(d_1, t);
                  return(t);
                }
                t = map_1_0(y_0, t);
                x_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, x_1, x_2, a_2);
              }
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm x_5 = t;
    int a_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_81(t);
        ;
        LocalPopChoice(a_6);
      }
    else
      {
        t = x_5;
        t = SRTS_some(z_2, t);
      }
    return(t);
  }
  t = z_2(t);
  return(t);
}
ATerm try_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm b_6 = t;
  int d_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_82(t);
      ;
      LocalPopChoice(d_6);
    }
  else
    {
      t = b_6;
    }
  return(t);
}
ATerm _2_0 (ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
  g_3 = t;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_3);
  b_3 = t;
  t = c_3;
  t = p_63(t);
  e_3 = t;
  t = d_3;
  t = q_63(t);
  f_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, e_3, f_3), b_3);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_3 = NULL,t_3 = NULL;
  m_3 = t;
  t = term_e_6;
  t = whoami_0_0(t);
  t_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), t_3), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_3;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_6);
    }
  else
    {
      t = f_6;
      {
        ATerm a_4 = NULL,e_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_4 = ATgetFirst((ATermList) t);
            e_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_4;
        {
          ATerm h_1 (ATerm t)
          {
            t = e_4;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(h_1, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL;
  l_4 = t;
  t = SSL_explode_term(l_4);
  if(match_cons(t, sym__2))
    {
      ATerm s_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm t_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_4, t);
        ;
        LocalPopChoice(w_6);
      }
    else
      {
        t = t_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_86(t);
      }
    return(t);
  }
  t = o_4(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5;
  {
    ATerm i_1 (ATerm t)
    {
      t = z_4;
      return(t);
    }
    t = at_end_1_0(i_1, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm c_5 = NULL;
  ATerm j_1 (ATerm t)
  {
    ATerm d_5 = NULL;
    d_5 = t;
    t = SSL_explode_string(d_5);
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm e_5 = NULL;
    e_5 = t;
    t = SSL_explode_string(e_5);
    return(t);
  }
  t = _2_0(j_1, l_1, t);
  t = conc_0_0(t);
  c_5 = t;
  t = SSL_implode_string(c_5);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 = NULL;
      k_5 = t;
      t = SSL_is_string(k_5);
      ;
      LocalPopChoice(g_7);
    }
  else
    {
      t = d_7;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
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
                        ATerm k_7 = t;
                        int l_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_7);
                          }
                        else
                          {
                            t = k_7;
                            {
                              ATerm n_1 (ATerm t)
                              {
                                t = term_m_7;
                                return(t);
                              }
                              t = debug_1_0(n_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_5 = NULL,z_5 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_5 = ATgetArgument(t, 0);
                          t_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_5;
                      t = eval_config_0_0(t);
                      y_5 = t;
                      t = t_5;
                      t = eval_config_0_0(t);
                      z_5 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_5, z_5);
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
  ATerm c_6 = NULL;
  c_6 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_6);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm g_6 = NULL;
      t = eval_config_0_0(t);
      g_6 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_6, g_6);
      t = g_6;
      return(t);
    }
    t = try_1_0(o_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm h_6 = NULL,i_6 = NULL;
    h_6 = t;
    t = term_n_7;
    t = get_config_0_0(t);
    i_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_6, term_o_7);
    t = geq_0_0(t);
    t = h_6;
    t = j_102(t);
    return(t);
  }
  t = try_1_0(p_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm q_7 = ATgetArgument(t, 0);
        if(match_cons(q_7, sym_Stream_1))
          {
            j_6 = ATgetArgument(q_7, 0);
          }
        else
          _fail(t);
        k_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(j_6, k_6);
    l_6 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), l_6);
    m_6 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, m_6);
    return(t);
  }
  t = WriteToFile_1_0(r_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  if(match_cons(t, sym__2))
    {
      n_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_6, term_r_7);
  t = open_stream_0_0(t);
  p_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_6, o_6);
  t = f_101(t);
  t = fclose_0_0(t);
  t = o_6;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm q_6 = NULL,u_6 = NULL,v_6 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_7 = ATgetArgument(t, 0);
        if(match_cons(u_7, sym_Stream_1))
          {
            q_6 = ATgetArgument(u_7, 0);
          }
        else
          _fail(t);
        u_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(q_6, u_6);
    v_6 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, v_6);
    return(t);
  }
  t = WriteToFile_1_0(s_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL;
  x_6 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm v_7 = t;
      int w_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                y_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(u_1, t);
          ;
          LocalPopChoice(w_7);
        }
      else
        {
          t = v_7;
          t = term_y_7;
          y_6 = t;
        }
      return(t);
    }
    t = _2_0(t_1, _id, t);
    t = x_6;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = not_null(y_6);
          return(t);
        }
        t = split_2_0(w_1, _id, t);
        return(t);
      }
      t = _2_0(_id, v_1, t);
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              ATerm b_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(b_2, t);
              return(t);
            }
            t = _2_0(z_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
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
ATerm apply_strategy_1_0 (ATerm h_104 (ATerm), ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,e_7 = NULL,f_7 = NULL,h_7 = NULL;
  z_6 = t;
  t = dtime_0_0(t);
  t = z_6;
  t = h_104(t);
  a_7 = t;
  t = dtime_0_0(t);
  e_7 = t;
  t = a_7;
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_7), (ATerm) ATmakeAppl(sym_Runtime_1, e_7)), h_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_7 (ATerm p_7, ATerm t)
  {
    t = SSL_fclose(p_7);
    return(t);
  }
  ATerm s_7 = NULL,t_7 = NULL;
  t_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_7 = ATgetArgument(t, 0);
      {
        ATerm g_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_7);
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = g_8;
            t = x_7(t_7, t);
          }
      }
    }
  else
    {
      t = x_7(t_7, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm r_100 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  z_7 = t;
  t = r_100(t);
  a_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_7), a_8));
  t = z_7;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_8 = NULL;
  t = SSL_stdin_stream();
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_8 = NULL;
  t = SSL_stdout_stream();
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_8 = NULL;
  t = SSL_stderr_stream();
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_8);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm h_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      ATerm w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_1 = NULL,b_1 = NULL;
        a_1 = t;
        t = SSL_explode_term(a_1);
        if(match_cons(t, sym__2))
          {
            ATerm k_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_9 = ATgetArgument(t, 1);
              if(((ATgetType(n_9) == AT_LIST) && !(ATisEmpty(n_9))))
                {
                  b_1 = ATgetFirst((ATermList) n_9);
                  {
                    ATerm o_9 = (ATerm) ATgetNext((ATermList) n_9);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = c_9;
        {
          ATerm u_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
              ATerm c_2 (ATerm t)
              {
                ATerm n_8 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    n_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_8;
                return(t);
              }
              t = _2_0(c_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_8 = ATgetArgument(t, 0);
                  l_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_8, l_8);
              m_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
              ;
              LocalPopChoice(v_9);
            }
          else
            {
              t = u_9;
              {
                ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
                ATerm d_2 (ATerm t)
                {
                  ATerm r_8 = NULL;
                  r_8 = t;
                  t = SSL_is_string(r_8);
                  return(t);
                }
                t = _2_0(d_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_8 = ATgetArgument(t, 0);
                    p_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_8, p_8);
                q_8 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_8);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  ATerm w_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL;
      v_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_8, term_c_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_9);
    }
  else
    {
      t = w_9;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_d_10;
          return(t);
        }
        t = debug_1_0(e_2, t);
        _fail(t);
      }
    }
  s_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_8);
  t_8 = t;
  t = s_8;
  t = fclose_0_0(t);
  t = t_8;
  return(t);
}
ATerm split_2_0 (ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  t = c_83(t);
  y_8 = t;
  t = x_8;
  t = d_83(t);
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_8, z_8);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  a_9 = t;
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              b_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(f_2, t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = term_i_10;
        b_9 = t;
      }
    t = a_9;
    {
      ATerm h_2 (ATerm t)
      {
        t = not_null(b_9);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, h_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm d_9 = NULL;
    d_9 = t;
    if(match_string(t, "-k"))
      {
        t = d_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = d_9;
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm e_9 = NULL,f_9 = NULL;
    e_9 = t;
    t = SSL_string_to_int(e_9);
    f_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), f_9);
    t = e_9;
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_j_10;
    return(t);
  }
  t = ArgOption_3_0(i_2, j_2, k_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 (ATerm t)
      {
        ATerm h_9 = NULL;
        h_9 = t;
        if(match_string(t, "-S"))
          {
            t = h_9;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = h_9;
          }
        return(t);
      }
      ATerm n_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_t_10;
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = term_u_10;
        return(t);
      }
      t = Option_3_0(m_2, n_2, o_2, t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              ATerm i_9 = NULL,j_9 = NULL;
              i_9 = t;
              t = SSL_string_to_int(i_9);
              j_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_9);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, i_9);
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              t = term_x_10;
              return(t);
            }
            t = ArgOption_3_0(p_2, q_2, r_2, t);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            {
              ATerm s_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm u_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_b_11;
                return(t);
              }
              ATerm v_2 (ATerm t)
              {
                t = term_c_11;
                return(t);
              }
              t = Option_3_0(s_2, u_2, v_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = f_11;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm l_9 = NULL;
    l_9 = t;
    if(match_string(t, "-o"))
      {
        t = l_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = l_9;
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm m_9 = NULL;
    m_9 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), m_9);
    t = (ATerm) ATmakeAppl(sym_Output_1, m_9);
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_k_11;
    return(t);
  }
  t = ArgOption_3_0(w_2, y_2, a_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
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
          t = term_p_11;
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_w_11;
          return(t);
        }
        t = Option_3_0(h_3, i_3, j_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  p_9 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = p_9;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm x_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_9 = ATgetFirst((ATermList) t);
          r_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_9;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_9 = ATgetFirst((ATermList) t);
          t_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_9;
      t = h_0(t);
      t = s_9;
      t = i_0(t);
      x_9 = t;
      t = (ATerm) ATinsert(CheckATermList(t_9), x_9);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm z_9 = NULL;
    z_9 = t;
    if(match_string(t, "-i"))
      {
        t = z_9;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = z_9;
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm a_10 = NULL;
    a_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), a_10);
    t = (ATerm) ATmakeAppl(sym_Input_1, a_10);
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_x_11;
    return(t);
  }
  t = ArgOption_3_0(k_3, l_3, n_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm y_11 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = y_11;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_6;
  t = whoami_0_0(t);
  b_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), b_10));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_90(t);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
        ATerm e_10 = NULL,h_10 = NULL,k_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_10 = ATgetFirst((ATermList) t);
            h_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_10;
        t = foldr_2_0(q_90, r_90, t);
        k_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, k_10);
        t = r_90(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  l_10 = t;
  t = SSL_explode_term(l_10);
  if(match_cons(t, sym__2))
    {
      ATerm n_12 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10;
  t = foldr_2_0(o_88, p_88, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_10 = NULL;
  t = times_0_0(t);
  {
    ATerm o_3 (ATerm t)
    {
      t = term_s_10;
      return(t);
    }
    ATerm p_3 (ATerm t)
    {
      ATerm o_10 = NULL,p_10 = NULL;
      if(match_cons(t, sym__2))
        {
          o_10 = ATgetArgument(t, 0);
          p_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(o_10, p_10);
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            t = SSL_addr(o_10, p_10);
          }
      }
      return(t);
    }
    t = crush_2_0(o_3, p_3, t);
    n_10 = t;
    t = SSL_TicksToSeconds(n_10);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
  y_10 = t;
  if(match_cons(t, sym__2))
    {
      z_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_11;
        if((z_10 != t))
          {
            _fail(t);
          }
        t = y_10;
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = y_10;
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_10, a_11);
              ;
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
              t = SSL_gtr(z_10, a_11);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_10, a_11);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm d_11 = NULL,e_11 = NULL;
    d_11 = t;
    t = term_n_7;
    t = get_config_0_0(t);
    e_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_11, term_z_12);
    t = geq_0_0(t);
    t = d_11;
    t = i_102(t);
    return(t);
  }
  t = try_1_0(q_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm g_11 = NULL,h_11 = NULL;
    t = run_time_0_0(t);
    g_11 = t;
    t = term_e_6;
    t = whoami_0_0(t);
    h_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), g_11), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), h_11));
    t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_13), g_11), term_d_13), h_11));
    return(t);
  }
  t = if_verbose1_1_0(r_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  ATerm g_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = g_13;
      {
        ATerm s_3 (ATerm t)
        {
          ATerm q_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(r_13);
            }
          else
            {
              t = q_13;
              {
                ATerm s_13 = t;
                int t_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(t_13);
                  }
                else
                  {
                    t = s_13;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(s_3, t);
      }
    }
  t = f_105(t);
  return(t);
}
ATerm map_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm j_11 (ATerm t)
  {
    ATerm w_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_13);
      }
    else
      {
        t = w_13;
        t = Cons_2_0(r_85, j_11, t);
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_11 = ATgetFirst((ATermList) t);
      m_11 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_11 = NULL,r_11 = NULL;
        t = m_11;
        t = g_0(t);
        q_11 = t;
        t = l_11;
        t = f_0(t);
        r_11 = t;
        t = m_11;
        {
          ATerm u_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_11), r_11);
            return(t);
          }
          t = reverse_acc_2_0(f_0, u_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_6;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, v_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  v_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_11);
  s_11 = t;
  t = t_11;
  t = q_77(t);
  u_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_11), s_11);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      {
        ATerm w_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(w_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_c_14;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm x_3 (ATerm t)
    {
      ATerm z_11 = NULL;
      z_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, z_11), term_d_14);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(x_3, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  d_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      b_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_12);
  a_12 = t;
  t = b_12;
  t = r_77(t);
  c_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, c_12), a_12);
  return(t);
}
ATerm fetch_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_86, _id, t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = Cons_2_0(_id, h_12, t);
      }
    return(t);
  }
  t = h_12(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  t = fetch_1_0(f_106, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  j_12 = t;
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_12;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_14 = ATgetFirst((ATermList) t);
                ATerm n_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_12;
          }
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        t = (ATerm) ATinsert(ATempty, j_12);
      }
    k_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), k_12);
    t = j_12;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_12;
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
      ATerm y_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_v_14;
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = term_w_14;
        return(t);
      }
      t = Option_3_0(y_3, z_3, b_4, t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
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
          t = term_x_14;
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          t = term_y_14;
          return(t);
        }
        t = Option_3_0(c_4, d_4, f_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__3))
    {
      q_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
      s_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_12, r_12);
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
        t = SSL_table_get(q_12, r_12);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = (ATerm) ATempty;
      }
    t_12 = t;
    t = SSL_table_put(q_12, r_12, (ATerm) ATinsert(CheckATermList(t_12), s_12));
    t = (ATerm) ATmakeAppl(sym__3, q_12, r_12, s_12);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm y_12 = NULL;
  t = term_e_6;
  t = k_107(t);
  y_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_15, term_e_15, y_12);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = a_13;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm f_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_13 = ATgetFirst((ATermList) t);
          c_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_13;
      t = a_0(t);
      t = term_e_6;
      t = b_0(t);
      f_13 = t;
      t = (ATerm) ATinsert(CheckATermList(c_13), f_13);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm h_13 = NULL;
    h_13 = t;
    if(match_string(t, "--help"))
      {
        t = h_13;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = h_13;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = h_13;
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_f_15;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_g_15;
    return(t);
  }
  t = Option_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  n_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_13 = ATgetFirst((ATermList) t);
      k_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_13);
  i_13 = t;
  t = j_13;
  t = y_64(t);
  l_13 = t;
  t = k_13;
  t = z_64(t);
  m_13 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(m_13), l_13), i_13);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  {
    ATerm j_4 (ATerm t)
    {
      t = term_h_15;
      t = i_107(t);
      return(t);
    }
    t = try_1_0(j_4, t);
    t = u_13;
    {
      ATerm n_4 (ATerm t)
      {
        ATerm v_13 = NULL;
        v_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_13);
        t = (ATerm) ATmakeAppl(sym_Program_1, v_13);
        return(t);
      }
      ATerm p_4 (ATerm t)
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
                t = i_107(t);
                t = Cons_2_0(_id, p_4, t);
              }
            ;
            LocalPopChoice(j_15);
          }
        else
          {
            t = i_15;
            {
              ATerm x_13 = NULL,y_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_13 = ATgetFirst((ATermList) t);
                  y_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_13), (ATerm) ATmakeAppl(sym_Undefined_1, x_13));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_4, p_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = e_14;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm m_15 = t;
      int n_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_107(t);
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
    t = parse_options_p__1_0(q_4, t);
    {
      ATerm r_4 (ATerm t)
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_14 = NULL;
            l_14 = t;
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_14;
                  {
                    ATerm u_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_p_13;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(v_15);
                      }
                    else
                      {
                        t = u_15;
                        {
                          ATerm s_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(s_4, t);
                        }
                      }
                    t = l_14;
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
                  t = l_14;
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
              ATerm t_4 (ATerm t)
              {
                ATerm u_4 (ATerm t)
                {
                  f_14 = t;
                  return(t);
                }
                t = Undefined_1_0(u_4, t);
                return(t);
              }
              t = option_defined_1_0(t_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_14)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_k_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_14)), term_w_15));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(r_4, t);
      g_14 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = g_14;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm o_5 = NULL;
  t = parse_options_1_0(h_105, t);
  o_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), o_5);
  t = o_5;
  t = j_105(t);
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_105, t);
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
              t = k_105(t);
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
ATerm iowrap_4_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_104(t);
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
  ATerm w_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(w_104, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_4, y_104, z_104, w_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      ATerm o_14 = NULL,p_14 = NULL;
      o_14 = t;
      t = term_i_12;
      t = get_config_0_0(t);
      p_14 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, p_14));
      t = o_14;
      return(t);
    }
    t = if_verbose2_1_0(y_4, t);
    return(t);
  }
  t = iowrap_4_0(q_104, r_104, s_104, x_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm t)
{
  t = iowrap_3_0(o_104, p_104, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    t = _2_0(_id, l_104, t);
    return(t);
  }
  t = iowrap_2_0(b_5, _fail, t);
  return(t);
}
ATerm repair_types_0_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      ATerm q_14 = NULL;
      t = sometd_1_0(RepairDefinition_0_0, t);
      q_14 = t;
      t = explanation_0_0(t);
      t = q_14;
      return(t);
    }
    t = try_1_0(g_5, t);
    return(t);
  }
  t = iowrap_1_0(f_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = repair_types_0_0(t);
  return(t);
}
